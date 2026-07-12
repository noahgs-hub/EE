#!/usr/bin/env python3
"""Upgrade outleveled damaging moves on explicit-moveset trainers after level scaling.

Rule: a damaging move is upgraded only when the mon's own level-up learnset
teaches a strictly stronger move of the SAME TYPE and SAME CATEGORY by the mon's
new level. TM/tutor coverage picks (moves outside the learnset type/category
match) are left alone. Guards:
  - only moves with power <= 60 are considered outleveled
  - replacement must gain >= 15 power
  - moves with priority > 0 (Fake Out, Quick Attack...) are never touched
  - no duplicate moves on a set
  - excluded trainers (hand-tuned) are skipped

Usage: adjust_moves.py <scratchpad> [--dry-run]
"""
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
from partyfile import parse_party_file, normalize_name  # noqa: E402

SCRATCH = sys.argv[1] if len(sys.argv) > 1 else "."
DRY = "--dry-run" in sys.argv
PARTY = os.path.join(HERE, "..", "..", "src/data/trainers.party")

EXCLUDE = {"TRAINER_PETER", "TRAINER_STEVEN",
           "TRAINER_NORMAN_1", "TRAINER_WINONA_1",
           "TRAINER_TATE_AND_LIZA_1", "TRAINER_JUAN_1"}

# never offer these as replacements: charge turns, recharge turns, self-KO
BAD_REPLACEMENTS = {
    "MOVE_SKY_ATTACK", "MOVE_SOLAR_BEAM", "MOVE_SOLAR_BLADE", "MOVE_SKULL_BASH",
    "MOVE_RAZOR_WIND", "MOVE_FLY", "MOVE_DIG", "MOVE_DIVE", "MOVE_BOUNCE",
    "MOVE_PHANTOM_FORCE", "MOVE_METEOR_BEAM", "MOVE_FUTURE_SIGHT",
    "MOVE_HYPER_BEAM", "MOVE_GIGA_IMPACT", "MOVE_EXPLOSION", "MOVE_SELF_DESTRUCT",
    "MOVE_FINAL_GAMBIT", "MOVE_ELECTRO_SHOT", "MOVE_FREEZE_SHOCK", "MOVE_ICE_BURN",
    "MOVE_FOCUS_PUNCH",  # AI can't use it well without Substitute
}
# fake-power strategy moves that must never be treated as "weak"
PROTECTED = {"MOVE_COUNTER", "MOVE_MIRROR_COAT", "MOVE_BIDE", "MOVE_METAL_BURST"}


def eval_c_int(expr):
    """Evaluate '8 >= 5 ? 90 : 95' style constant expressions."""
    expr = expr.strip()
    while expr.startswith("(") and expr.endswith(")"):
        depth = 0
        balanced = True
        for i, ch in enumerate(expr):
            depth += ch == "("
            depth -= ch == ")"
            if depth == 0 and i < len(expr) - 1:
                balanced = False
                break
        if not balanced:
            break
        expr = expr[1:-1].strip()
    m = re.match(r"^(.+?)\?(.+?):(.+)$", expr)
    if m:
        cond, then, els = (p.strip() for p in m.groups())
        if not re.match(r"^[\d\s()<>=!&|]+$", cond):
            raise ValueError(expr)
        return eval_c_int(then) if eval(cond, {"__builtins__": {}}, {}) else eval_c_int(els)
    if not re.match(r"^-?\d+$", expr):
        raise ValueError(expr)
    return int(expr)


def parse_moves(pp_path):
    text = open(pp_path).read()
    start = text.index("const struct MoveInfo gMovesInfo[")
    entry_re = re.compile(r"\[(MOVE_\w+)\] =")
    matches = list(entry_re.finditer(text, start))
    moves = {}
    for idx, m in enumerate(matches):
        end = matches[idx + 1].start() if idx + 1 < len(matches) else len(text)
        body = text[m.start():min(end, m.start() + 4000)]
        name = re.search(r'\.name = COMPOUND_STRING\("([^"]+)"\)', body)
        power = re.search(r"\.power = ([^,\n]+),", body)
        mtype = re.search(r"\.type = (TYPE_\w+)", body)
        cat = re.search(r"\.category = (DAMAGE_CATEGORY_\w+)", body)
        prio = re.search(r"\.priority = ([^,\n]+),", body)
        if name and mtype:
            moves[m.group(1)] = {
                "name": name.group(1),
                "power": eval_c_int(power.group(1)) if power else 0,
                "type": mtype.group(1),
                "category": cat.group(1) if cat else "DAMAGE_CATEGORY_STATUS",
                "priority": eval_c_int(prio.group(1)) if prio else 0,
            }
    return moves


def main():
    moves_db = parse_moves(os.path.join(SCRATCH, "move_pp.i"))
    species_db = json.load(open(os.path.join(SCRATCH, "species_data.json")))["species"]
    scaled = json.load(open(os.path.join(SCRATCH, "scaled_levels.json")))["trainers"]
    by_name = {}
    for const, info in moves_db.items():
        by_name.setdefault(normalize_name(info["name"]), const)
    species_by_name = {normalize_name(v["name"]): k for k, v in species_db.items()}

    lines, trainers = parse_party_file(PARTY)
    changes = []

    for t in trainers:
        if t.tid not in scaled or t.tid in EXCLUDE:
            continue
        for mon in t.mons:
            if not mon.moves or mon.level is None:
                continue
            sp = species_by_name.get(normalize_name(mon.species))
            if not sp:
                continue
            learnset = species_db[sp]["learnset"]
            set_consts = [by_name.get(normalize_name(mv)) for mv in mon.moves]
            for j, mv in enumerate(mon.moves):
                mc = set_consts[j]
                if not mc or mc not in moves_db:
                    continue
                cur = moves_db[mc]
                if (cur["power"] == 0 or cur["power"] > 60 or cur["priority"] > 0
                        or mc in PROTECTED):
                    continue
                best = None
                for lvl, lmc in learnset:
                    if lvl > mon.level or lmc == mc or lmc in set_consts or lmc in BAD_REPLACEMENTS:
                        continue
                    cand = moves_db.get(lmc)
                    if not cand:
                        continue
                    if (cand["type"] == cur["type"]
                            and cand["category"] == cur["category"]
                            and cand["priority"] <= 0
                            and cand["power"] >= cur["power"] + 15
                            and (best is None or cand["power"] > moves_db[best]["power"])):
                        best = lmc
                if best:
                    new_name = moves_db[best]["name"]
                    changes.append((t.tid, mon.species, mon.level, mv, new_name))
                    if not DRY:
                        lines[mon.move_lines[j]] = lines[mon.move_lines[j]].replace(mv, new_name, 1)
                    set_consts[j] = best

    if not DRY:
        open(PARTY, "w").write("\n".join(lines))
    for c in changes:
        print(f"{c[0]:<32} {c[1]:<12} L{c[2]:<3} {c[3]} -> {c[4]}")
    print(f"\n{len(changes)} move upgrades{' (dry run)' if DRY else ''}")


if __name__ == "__main__":
    main()
