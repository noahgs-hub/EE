#!/usr/bin/env python3
"""Audit the Jirachi distribution event (Pokemon Box R&S disc).

Unlike the Rusturf checker this one only reads .inc/.h source (there is no map
event JSON that Porymap rewrites here), so it audits but does not repair. Run it
after editing the item, flags, or either script to confirm the whole chain is
still wired:

    python3 tools/check_jirachi_event.py

Exit code is non-zero if anything is broken.
"""

import os
import re
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))

ITEM = "ITEM_POKEMON_BOX_RS"
F_DISC = "FLAG_RECEIVED_POKEMON_BOX_RS"
F_JIRACHI = "FLAG_RECEIVED_JIRACHI"
ROCK = "data/maps/MossdeepCity/scripts.inc"
CUBE = "data/maps/LittlerootTown_BrendansHouse_2F/scripts.inc"
ITEMS_C = "src/data/items.h"
ITEMS_H = "include/constants/items.h"
FLAGS_H = "include/constants/flags.h"

results = []


def check(name, good, detail=""):
    results.append((name, bool(good), detail))
    return bool(good)


def read(rel):
    return open(os.path.join(ROOT, rel)).read()


def enum_values(text):
    """Emulate C enum numbering (explicit `= N` plus auto-increment)."""
    vals, val = {}, None
    for ln in text.splitlines():
        m = re.match(r"\s*(ITEM[A-Z0-9_]+)\s*(=\s*(\d+))?\s*,?", ln)
        if not m:
            continue
        val = int(m.group(3)) if m.group(3) is not None else (val + 1 if val is not None else 0)
        vals[m.group(1)] = val
    return vals


def main():
    # --- item id + save-safety -------------------------------------------
    ih = read(ITEMS_H)
    vals = enum_values(ih)
    box = vals.get(ITEM)
    check("%s is defined" % ITEM, box is not None, "id=%s" % box)
    if box is not None:
        check("  id does not collide with the TM block (883-966)",
              not (883 <= box <= 966), "id=%s" % box)
        check("  id < ITEMS_COUNT", box < vals.get("ITEMS_COUNT", 0),
              "%s < %s" % (box, vals.get("ITEMS_COUNT")))
    check("TM101 still at 883 (item ids not shifted)", vals.get("ITEM_TM101") == 883,
          "ITEM_TM101=%s" % vals.get("ITEM_TM101"))
    check("TM184 still at 966", vals.get("ITEM_TM184") == 966,
          "ITEM_TM184=%s" % vals.get("ITEM_TM184"))

    # --- item data entry -------------------------------------------------
    ic = read(ITEMS_C)
    m = re.search(r"\[%s\]\s*=\s*\{(.*?)\}," % re.escape(ITEM), ic, re.S)
    if check("%s has a data entry" % ITEM, bool(m)):
        body = m.group(1)
        check("  is a key item (POCKET_KEY_ITEMS + importance 1)",
              "POCKET_KEY_ITEMS" in body and re.search(r"\.importance\s*=\s*1", body))
        check("  icon = red Fire TM disc (gItemIcon_TM + FireTMHM palette)",
              "gItemIcon_TM" in body and "gItemIconPalette_FireTMHM" in body)
        nm = re.search(r'\.name\s*=\s*ITEM_NAME\("([^"]*)"\)', body)
        check("  has a name", bool(nm), nm.group(1) if nm else "MISSING")

    # --- flags exist and are not the same value --------------------------
    fh = read(FLAGS_H)
    fv = {n: int(v, 16) for n, v in re.findall(r"#define\s+(FLAG_\w+)\s+(0x[0-9A-Fa-f]+)", fh)}
    check("%s defined" % F_DISC, F_DISC in fv, hex(fv.get(F_DISC, 0)))
    check("%s defined" % F_JIRACHI, F_JIRACHI in fv, hex(fv.get(F_JIRACHI, 0)))
    check("the two event flags are distinct",
          fv.get(F_DISC) != fv.get(F_JIRACHI))
    check("EXP Share flag 0x264 untouched", "FLAG_UNUSED_0x264" in fh)

    # --- white rock script ----------------------------------------------
    rock = read(ROCK)
    seg = rock[rock.find("MossdeepCity_EventScript_WhiteRock::"):]
    seg = seg[:seg.find("MossdeepCity_EventScript_WhiteRockNormal::") + 400]
    check("white rock gates on %s" % F_DISC, F_DISC in seg)
    check("white rock gives the disc", ("giveitem %s" % ITEM) in seg)
    check("white rock sets the taken flag after giving",
          ("setflag %s" % F_DISC) in seg)
    check("white rock still has its plain-rock fallback",
          "MossdeepCity_EventScript_WhiteRockNormal::" in rock
          and "MossdeepCity_Text_ItsAWhiteRock" in rock)

    # --- GameCube script -------------------------------------------------
    cube = read(CUBE)
    seg = cube[cube.find("PlayersHouse_2F_EventScript_GameCube::"):]
    seg = seg[:seg.find("PlayersHouse_2F_EventScript_GameCubeNormal::") + 400]
    check("GameCube reverts to normal once Jirachi received (gate on %s)" % F_JIRACHI,
          F_JIRACHI in seg)
    check("GameCube only reacts while holding the disc (checkitem)",
          ("checkitem %s" % ITEM) in seg)
    check("GameCube checks party space before giving",
          "getpartysize" in seg and "PARTY_SIZE" in seg)
    gm = re.search(r"givemon SPECIES_JIRACHI[^\n]*", seg)
    if check("GameCube gives Jirachi", bool(gm)):
        line = gm.group(0)
        check("  level 5", re.search(r"SPECIES_JIRACHI,\s*5\b", line))
        check("  Cherish Ball", "BALL_CHERISH" in line)
        check("  holds a Salac Berry", "ITEM_SALAC_BERRY" in line)
        for mv in ("MOVE_WISH", "MOVE_CONFUSION", "MOVE_REST"):
            check("  move %s" % mv, mv in line)
        check("  not shiny-locked (SHINY_MODE_RANDOM)", "SHINY_MODE_RANDOM" in line)
    check("GameCube consumes the disc on success",
          ("removeitem %s" % ITEM) in seg)
    check("GameCube sets the completion flag",
          ("setflag %s" % F_JIRACHI) in seg)

    # --- report ----------------------------------------------------------
    width = max(len(n) for n, _, _ in results)
    broken = 0
    for name, good, detail in results:
        broken += not good
        print("%-6s %-*s %s" % ("OK" if good else "BROKEN", width, name, detail))
    print()
    if broken:
        print("%d problem(s)." % broken)
        return 1
    print("Jirachi event intact.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
