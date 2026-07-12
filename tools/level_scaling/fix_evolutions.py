#!/usr/bin/env python3
"""Evolve under-evolved mons on scaled trainers (second evolution pass).

The first pass only handled plain level evolutions and silently missed
multi-path species (parser bug) and non-level methods. Policy:
  - plain EVO_LEVEL at its level (Kirlia -> Gardevoir @30)
  - pure trade evos (EVO_TRADE unconditioned, or EVO_ITEM Linking Cord)
    at level >= 37 (Kadabra, Machoke, Haunter, Graveler)
  - friendship-style (conditioned EVO_LEVEL param 0) at >= 40 (Golbat -> Crobat)
  - evolution stones at >= 42, first-listed target (Gloom -> Vileplume,
    Roselia -> Roserade)
  - trade-with-held-item evos are NOT applied (Onix, Dusclops, Seadra,
    Scyther keep their identity, like vanilla bosses)
  - species with 3+ distinct targets skipped (Eevee)
Scope: trainers in scaled_levels.json, minus the hand-tuned gym leaders.

Usage: fix_evolutions.py <scratchpad> [--dry-run]
"""
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
from partyfile import parse_party_file, normalize_name  # noqa: E402

SCRATCH = sys.argv[1]
DRY = "--dry-run" in sys.argv
PARTY = os.path.join(HERE, "..", "..", "src/data/trainers.party")

EXCLUDE = {"TRAINER_PETER", "TRAINER_STEVEN", "TRAINER_STEVEN_E4",
           "TRAINER_NORMAN_1", "TRAINER_WINONA_1",
           "TRAINER_TATE_AND_LIZA_1", "TRAINER_JUAN_1"}

STONES = {"ITEM_FIRE_STONE", "ITEM_WATER_STONE", "ITEM_THUNDER_STONE", "ITEM_LEAF_STONE",
          "ITEM_SUN_STONE", "ITEM_MOON_STONE", "ITEM_SHINY_STONE", "ITEM_DUSK_STONE",
          "ITEM_DAWN_STONE", "ITEM_ICE_STONE"}
TRADE_LEVEL = 37
FRIENDSHIP_LEVEL = 40
STONE_LEVEL = 42


def step(species_db, const, level):
    info = species_db.get(const)
    if not info:
        return None
    evos = info["evolutions"]
    targets = {e[2] for e in evos}
    if len(targets) > 2:
        return None  # Eevee-style branching: leave alone
    plain_level = trade = friendship = stone = None
    for e in evos:
        method, param, target = e[0], e[1], e[2]
        conditioned = e[3] if len(e) > 3 else False
        if method == "EVO_LEVEL" and not conditioned and param.isdigit() and int(param) >= 2:
            if int(param) <= level and not plain_level:
                plain_level = target
        elif (method == "EVO_TRADE" and not conditioned) or \
                (method == "EVO_ITEM" and param == "ITEM_LINKING_CORD" and not conditioned):
            if level >= TRADE_LEVEL and not trade:
                trade = target
        elif method == "EVO_LEVEL" and conditioned and param.isdigit() and int(param) == 0:
            if level >= FRIENDSHIP_LEVEL and not friendship:
                friendship = target
        elif method == "EVO_ITEM" and param in STONES and not conditioned:
            if level >= STONE_LEVEL and not stone:
                stone = target
    # stone evos only when they are the single path (don't pick Vileplume over
    # Bellossom unless both are stones - then first listed wins, per policy)
    return plain_level or trade or friendship or stone


def evolve_full(species_db, const, level):
    seen = set()
    while const not in seen:
        seen.add(const)
        nxt = step(species_db, const, level)
        if not nxt:
            break
        const = nxt
    return const


def main():
    species_db = json.load(open(os.path.join(SCRATCH, "species_data.json")))["species"]
    scope = set(json.load(open(os.path.join(SCRATCH, "scaled_levels.json")))["trainers"]) - EXCLUDE
    name_to_const = {}
    const_to_name = {}
    for c, v in species_db.items():
        name_to_const.setdefault(normalize_name(v["name"]), c)
        const_to_name[c] = v["name"]

    lines, trainers = parse_party_file(PARTY)
    changes = []
    for t in trainers:
        if t.tid not in scope:
            continue
        for mon in t.mons:
            if mon.level is None:
                continue
            const = name_to_const.get(normalize_name(mon.species))
            if not const:
                continue
            evolved = evolve_full(species_db, const, mon.level)
            if evolved != const:
                new_name = const_to_name[evolved]
                line = lines[mon.species_line]
                if mon.nickname is not None:
                    line = line.replace(f"({mon.species})", f"({new_name})", 1)
                else:
                    line = line.replace(mon.species, new_name, 1)
                lines[mon.species_line] = line
                changes.append((t.tid, mon.level, mon.species, new_name))

    if not DRY:
        open(PARTY, "w").write("\n".join(lines))
    for tid, lvl, old, new in changes:
        print(f"{tid:<36} L{lvl:<3} {old} -> {new}")
    print(f"\n{len(changes)} evolutions applied{' (dry run)' if DRY else ''}")


if __name__ == "__main__":
    main()
