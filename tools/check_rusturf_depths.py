#!/usr/bin/env python3
"""Audit (and optionally repair) the Rusturf Tunnel hidden-cave feature.

Porymap re-saves silently revert hand-edited event data in these maps, which
breaks the build (hidden items need a permanent flag) or, worse, silently
strands the player (deleted return warp). Run this after ANY Porymap save:

    python3 tools/check_rusturf_depths.py          # audit only
    python3 tools/check_rusturf_depths.py --fix    # audit and repair

Only map.json event data is auto-repaired — that is all Porymap rewrites.
Anything else reported as BROKEN needs a look by hand.
"""

import argparse
import json
import os
import struct
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))

RT_MAP = "data/maps/RusturfTunnel/map.json"
DP_MAP = "data/maps/RusturfTunnel_Depths/map.json"
DP_BIN = "data/layouts/RusturfTunnel_Depths/map.bin"
RT_ATTR = "data/tilesets/secondary/rusturf_tunnel/metatile_attributes.bin"
RT_META = "data/tilesets/secondary/rusturf_tunnel/metatiles.bin"
ARCH_MID = 0x20C            # cave-mouth tile directly above the entrance

ENTRANCE = (17, 3)          # cave mouth in RusturfTunnel, revealed after E4
LADDER = (8, 11)            # ladder on the lower level
CAVE_MOUTH = (12, 15)       # cave-exit tile below Mewtwo, upstairs side
EXIT_TILE = (4, 17)         # south-arrow warp tile inside the Depths
EXIT_METATILE = 0x207       # MB_SOUTH_ARROW_WARP
HIDDEN_FLAG = "FLAG_HIDDEN_ITEM_RUSTURF_TUNNEL_DEPTHS_MASTER_BALL"
BALL_FLAG = "FLAG_ITEM_RUSTURF_TUNNEL_DEPTHS_MOON_BALL"
BALL_ITEM = "ITEM_MOON_BALL"

results = []


def check(name, good, detail=""):
    results.append((name, good, detail))
    return good


def load(rel):
    return json.load(open(os.path.join(ROOT, rel)))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--fix", action="store_true", help="repair what can be repaired")
    args = ap.parse_args()
    repairs = []

    # --- RusturfTunnel side -------------------------------------------------
    rt = load(RT_MAP)
    warps = rt["warp_events"]
    idx = [i for i, w in enumerate(warps)
           if w.get("dest_map") == "MAP_RUSTURF_TUNNEL_DEPTHS"]
    check("RusturfTunnel entrance warp -> Depths", len(idx) == 1,
          "at index %s" % (idx[0] if idx else "MISSING"))
    if idx:
        w = warps[idx[0]]
        check("  entrance warp coords %s" % (ENTRANCE,),
              (w["x"], w["y"]) == ENTRANCE, "found (%d,%d)" % (w["x"], w["y"]))
    entrance_idx = idx[0] if idx else None

    # --- registration / wiring (Porymap can revert these too) ---------------
    lay = [l for l in load("data/layouts/layouts.json")["layouts"]
           if l["id"] == "LAYOUT_RUSTURF_TUNNEL_DEPTHS"]
    check("layouts.json has Depths layout", bool(lay),
          "%dx%d" % (lay[0]["width"], lay[0]["height"]) if lay else "MISSING")
    groups = load("data/maps/map_groups.json")
    check("map_groups.json registers Depths",
          "RusturfTunnel_Depths" in groups["gMapGroup_Dungeons"])
    check("event_scripts.s includes Depths scripts",
          "data/maps/RusturfTunnel_Depths/scripts.inc"
          in open(os.path.join(ROOT, "data/event_scripts.s")).read())

    # --- the flag-gated reveal ---------------------------------------------
    s = open(os.path.join(ROOT, "data/maps/RusturfTunnel/scripts.inc")).read()
    check("ON_LOAD reveal gated on FLAG_SYS_GAME_CLEAR",
          "MAP_SCRIPT_ON_LOAD, RusturfTunnel_OnLoad" in s
          and "FLAG_SYS_GAME_CLEAR" in s
          and s.count("setmetatile 1") >= 6)

    # --- tileset behaviours -------------------------------------------------
    blob = open(os.path.join(ROOT, RT_ATTR), "rb").read()
    attr = struct.unpack("<%dH" % (len(blob) // 2), blob)
    check("0x214 is MB_NON_ANIMATED_DOOR (walk-in)",
          (attr[0x214 - 0x200] & 0xFF) == 0x60,
          "0x%02X" % (attr[0x214 - 0x200] & 0xFF))
    check("0x213 is MB_NORMAL (side wall)",
          (attr[0x213 - 0x200] & 0xFF) == 0x00,
          "0x%02X" % (attr[0x213 - 0x200] & 0xFF))
    # ArchMid (0x20C) sits directly above the entrance; the player's 16x32
    # sprite extends up into it while standing on the warp. Its rock must be in
    # the metatile's TOP (covering) layer so the player walks "into" the cave
    # instead of standing in front of it. NORMAL layer type + a non-empty top
    # layer matching the bottom = covering. Porymap tileset saves revert this.
    meta = bytearray(open(os.path.join(ROOT, RT_META), "rb").read())
    off = (ARCH_MID - 0x200) * 16
    bottom, top = meta[off:off + 8], meta[off + 8:off + 16]
    arch_covers = (attr[ARCH_MID - 0x200] >> 12) & 0xF == 0 and top == bottom
    if not check("0x20C ArchMid covers player (top layer set)", arch_covers,
                 "top layer %s" % ("set" if any(top) else "EMPTY -> sprite draws over cave")):
        if args.fix and (attr[ARCH_MID - 0x200] >> 12) & 0xF == 0:
            meta[off + 8:off + 16] = meta[off:off + 8]
            open(os.path.join(ROOT, RT_META), "wb").write(meta)
            repairs.append("0x20C ArchMid: copied rock into top (covering) layer")

    # --- Depths exit tile ---------------------------------------------------
    if lay:
        W, H = lay[0]["width"], lay[0]["height"]
        b = struct.unpack("<%dH" % (W * H),
                          open(os.path.join(ROOT, DP_BIN), "rb").read()[:W * H * 2])
        v = b[EXIT_TILE[1] * W + EXIT_TILE[0]]
        check("Depths exit tile %s is a warp tile" % (EXIT_TILE,),
              (v & 0x3FF) == EXIT_METATILE and ((v >> 10) & 3) == 0,
              "metatile 0x%03X collision %d" % (v & 0x3FF, (v >> 10) & 3))

    # --- Depths events (the bits Porymap keeps eating) ----------------------
    dp = load(DP_MAP)
    dirty = False

    back = [w for w in dp.get("warp_events", [])
            if w.get("dest_map") == "MAP_RUSTURF_TUNNEL"]
    if not check("Depths return warp exists (else player is TRAPPED)", bool(back)):
        if args.fix:
            dp.setdefault("warp_events", []).insert(0, {
                "x": EXIT_TILE[0], "y": EXIT_TILE[1], "elevation": 3,
                "dest_map": "MAP_RUSTURF_TUNNEL",
                "dest_warp_id": str(entrance_idx if entrance_idx is not None else 3)})
            repairs.append("restored return warp %s -> RusturfTunnel warp %s"
                           % (EXIT_TILE, entrance_idx))
            dirty = True
    elif entrance_idx is not None and back[0].get("dest_warp_id") != str(entrance_idx):
        check("  return warp points at the right warp index", False,
              "dest_warp_id=%s but entrance is index %d"
              % (back[0].get("dest_warp_id"), entrance_idx))
        if args.fix:
            back[0]["dest_warp_id"] = str(entrance_idx)
            repairs.append("corrected return dest_warp_id -> %d" % entrance_idx)
            dirty = True

    boulders = [o for o in dp.get("object_events", [])
                if o.get("graphics_id") == "OBJ_EVENT_GFX_PUSHABLE_BOULDER"]
    bad = [o for o in boulders if o.get("script") != "EventScript_StrengthBoulder"]
    check("all %d boulders pushable" % len(boulders), not bad,
          "%d missing EventScript_StrengthBoulder" % len(bad))
    if bad and args.fix:
        for o in bad:
            o["script"] = "EventScript_StrengthBoulder"
            o["movement_type"] = "MOVEMENT_TYPE_LOOK_AROUND"
            repairs.append("boulder (%d,%d) made pushable (elevation %s kept)"
                           % (o["x"], o["y"], o["elevation"]))
        dirty = True

    # Item balls: each needs a script, a real item, and its OWN permanent flag.
    # (Don't assume which item — Noah picks those.) Only an unconfigured ball is
    # auto-repaired, and only to the default Moon Ball.
    balls = [o for o in dp.get("object_events", [])
             if o.get("graphics_id") == "OBJ_EVENT_GFX_ITEM_BALL"]
    seen_flags = {}
    for o in balls:
        item = str(o.get("trainer_sight_or_berry_tree_id", ""))
        flag = str(o.get("flag", ""))
        good = (o.get("script") == "Common_EventScript_FindItem"
                and item.startswith("ITEM_") and flag.startswith("FLAG_ITEM_"))
        check("item ball (%d,%d) findable" % (o["x"], o["y"]), good,
              "%s / %s / %s" % (item or "no item", o.get("script"), flag))
        if good:
            if flag in seen_flags:
                check("  item ball (%d,%d) flag is unique" % (o["x"], o["y"]), False,
                      "%s already used by %s" % (flag, seen_flags[flag]))
            seen_flags[flag] = (o["x"], o["y"])
        elif args.fix:
            o.update({"elevation": 3, "movement_type": "MOVEMENT_TYPE_LOOK_AROUND",
                      "trainer_sight_or_berry_tree_id": BALL_ITEM,
                      "script": "Common_EventScript_FindItem", "flag": BALL_FLAG})
            repairs.append("unconfigured item ball (%d,%d) -> %s" % (o["x"], o["y"], BALL_ITEM))
            dirty = True

    # Mewtwo static encounter
    for o in dp.get("object_events", []):
        if o.get("graphics_id") == "OBJ_EVENT_GFX_MEWTWO":
            check("Mewtwo wired to its encounter script",
                  o.get("script") == "RusturfTunnel_Depths_EventScript_Mewtwo"
                  and o.get("flag") == "FLAG_HIDE_RUSTURF_TUNNEL_DEPTHS_MEWTWO",
                  "%s / %s" % (o.get("script"), o.get("flag")))

    # Ladder <-> cave-mouth shortcut. Three intra-map warps:
    #   ladder(8,11) -> landing pad, mouth(12,15) -> ladder, and the landing pad.
    # The ladder must NOT land you on the mouth itself: a door tile makes you
    # step out southward, which drops you inside it facing the wrong way.
    warps = dp.get("warp_events", [])
    at = lambda xy: next((i for i, w in enumerate(warps)
                          if (w["x"], w["y"]) == xy), None)
    i_lad, i_mouth = at(LADDER), at(CAVE_MOUTH)
    if check("ladder and cave mouth both have warps",
             i_lad is not None and i_mouth is not None,
             "ladder=%s mouth=%s" % (i_lad, i_mouth)):
        dest = warps[i_lad].get("dest_warp_id")
        pad = warps[int(dest)] if dest.isdigit() and int(dest) < len(warps) else None
        landed = (pad["x"], pad["y"]) if pad else None
        check("ladder lands you OFF the mouth (not inside it)",
              landed is not None and landed != CAVE_MOUTH,
              "lands at %s" % (landed,))
        check("  landing pad is adjacent to the mouth",
              landed is not None
              and abs(landed[0] - CAVE_MOUTH[0]) + abs(landed[1] - CAVE_MOUTH[1]) == 1,
              "%s vs mouth %s" % (landed, CAVE_MOUTH))
        check("cave mouth returns to the ladder",
              warps[i_mouth].get("dest_warp_id") == str(i_lad),
              "-> warp %s" % warps[i_mouth].get("dest_warp_id"))

    for h in [x for x in dp.get("bg_events", []) if x.get("type") == "hidden_item"]:
        good = str(h.get("flag", "")).startswith("FLAG_HIDDEN_ITEM_")
        check("hidden item (%d,%d) has a permanent flag" % (h["x"], h["y"]), good,
              "%s / %s" % (h.get("item"), h.get("flag")))
        if not good and args.fix:
            h["flag"] = HIDDEN_FLAG
            repairs.append("hidden item (%d,%d) given %s" % (h["x"], h["y"], HIDDEN_FLAG))
            dirty = True

    # --- flags must exist ---------------------------------------------------
    flags = open(os.path.join(ROOT, "include/constants/flags.h")).read()
    check("hidden-item flag defined", HIDDEN_FLAG in flags)
    check("item-ball flag defined", BALL_FLAG in flags)
    check("EXP Share flag 0x264 untouched", "FLAG_UNUSED_0x264" in flags)

    if dirty:
        with open(os.path.join(ROOT, DP_MAP), "w") as f:
            f.write(json.dumps(dp, indent=2) + "\n")

    # --- report -------------------------------------------------------------
    width = max(len(n) for n, _, _ in results)
    broken = 0
    for name, good, detail in results:
        if not good:
            broken += 1
        print("%-6s %-*s %s" % ("OK" if good else "BROKEN", width, name, detail))
    print()
    if repairs:
        print("REPAIRED %d:" % len(repairs))
        for r in repairs:
            print("  - " + r)
        print()
    if broken and not args.fix:
        print("%d problem(s). Re-run with --fix to repair the map.json ones." % broken)
        return 1
    if broken and args.fix and not repairs:
        print("%d problem(s) NOT auto-repairable — fix by hand." % broken)
        return 1
    print("Feature intact." if not repairs else "Repaired — rebuild with: make -j14")
    return 0


if __name__ == "__main__":
    sys.exit(main())
