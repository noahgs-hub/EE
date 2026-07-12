#!/usr/bin/env python3
"""Apply scaled_levels.json to src/data/trainers.party (levels + species swaps)."""
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
from partyfile import parse_party_file  # noqa: E402

SCRATCH = sys.argv[1]
PARTY = os.path.join(HERE, "..", "..", "src/data/trainers.party")


def main():
    scaled = json.load(open(os.path.join(SCRATCH, "scaled_levels.json")))["trainers"]
    species_names = {k: v["name"] for k, v in
                     json.load(open(os.path.join(SCRATCH, "species_data.json")))["species"].items()}
    lines, trainers = parse_party_file(PARTY)

    n_levels = n_species = 0
    for t in trainers:
        info = scaled.get(t.tid)
        if not info:
            continue
        assert len(info["mons"]) == len([m for m in t.mons if m.level]), t.tid
        for mon, upd in zip([m for m in t.mons if m.level], info["mons"]):
            assert mon.level == upd["old_level"], (t.tid, mon.species, mon.level, upd)
            if upd["new_level"] != mon.level:
                old = lines[mon.level_line]
                lines[mon.level_line] = re.sub(r"Level: \d+", f"Level: {upd['new_level']}", old)
                n_levels += 1
            if upd["new_species"]:
                new_name = species_names[upd["new_species"]]
                line = lines[mon.species_line]
                # replace the species token only (nickname/gender/item preserved)
                if mon.nickname is not None:
                    line = line.replace(f"({mon.species})", f"({new_name})", 1)
                else:
                    line = line.replace(mon.species, new_name, 1)
                lines[mon.species_line] = line
                n_species += 1

    open(PARTY, "w").write("\n".join(lines))
    print(f"updated {n_levels} level lines, {n_species} species swaps "
          f"across {len(scaled)} trainers")


if __name__ == "__main__":
    main()
