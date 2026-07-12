#!/usr/bin/env python3
"""Extract species data needed for level-curve simulation from preprocessed pokemon.c.

Usage: extract_species.py <preprocessed pokemon.i> <out.json>

Produces JSON:
{
  "exp_tables": {"GROWTH_MEDIUM_FAST": [101 ints], ...},   # cumulative EXP per level
  "species": {
    "SPECIES_IVYSAUR": {
      "name": "Ivysaur",
      "expYield": 142,
      "growthRate": "GROWTH_MEDIUM_SLOW",
      "evolutions": [["EVO_LEVEL", "32", "SPECIES_VENUSAUR"]],
      "learnset": [[1, "MOVE_VINE_WHIP"], ...]
    }, ...
  }
}
"""
import json
import re
import sys

GROWTH_ORDER = [
    "GROWTH_MEDIUM_FAST", "GROWTH_ERRATIC", "GROWTH_FLUCTUATING",
    "GROWTH_MEDIUM_SLOW", "GROWTH_FAST", "GROWTH_SLOW",
]

TERNARY_RE = re.compile(r"\(([^()?]+)\)\s*\?\s*([^:?]+):\s*(.+)")
SAFE_EXPR_RE = re.compile(r"^[\d\s()+*/%<>=&|!-]+$")


def c_eval(expr):
    """Evaluate a constant C arithmetic expression (numbers, parens, ternary)."""
    expr = expr.strip().rstrip(",")
    for _ in range(10):
        m = TERNARY_RE.search(expr)
        if not m:
            break
        cond, then, els = m.groups()
        expr = expr[:m.start()] + f"(({then.strip()}) if ({cond.strip()}) else ({els.strip()}))" + expr[m.end():]
    if not SAFE_EXPR_RE.match(expr.replace("if", "").replace("else", "")):
        raise ValueError(f"unsafe expr: {expr!r}")
    return int(eval(expr, {"__builtins__": {}}, {}))


def parse_exp_tables(text):
    start = text.index("const u32 gExperienceTables[][100 + 1] =")
    i = text.index("{", start)
    depth = 0
    end = i
    for j in range(i, len(text)):
        if text[j] == "{":
            depth += 1
        elif text[j] == "}":
            depth -= 1
            if depth == 0:
                end = j
                break
    body = text[i + 1:end]
    tables = []
    # split top-level {...} rows
    depth = 0
    row_start = None
    for j, ch in enumerate(body):
        if ch == "{":
            if depth == 0:
                row_start = j
            depth += 1
        elif ch == "}":
            depth -= 1
            if depth == 0:
                row = body[row_start + 1:j]
                vals = [c_eval(v) for v in row.split(",") if v.strip()]
                tables.append(vals)
    # the array has 8 rows: 6 growth rates + 2 unused Medium Fast copies
    assert len(tables) >= len(GROWTH_ORDER), f"expected >=6 growth tables, got {len(tables)}"
    tables = tables[:len(GROWTH_ORDER)]
    for t in tables:
        assert len(t) == 101, f"expected 101 entries, got {len(t)}"
    return dict(zip(GROWTH_ORDER, tables))


def parse_learnsets(text):
    learnsets = {}
    for m in re.finditer(r"static const struct LevelUpMove (\w+)\[\] = \{(.*?)\};", text, re.S):
        name, body = m.groups()
        moves = [
            [int(mm.group(2)), mm.group(1)]
            for mm in re.finditer(r"\{\.move = (\w+), \.level = (\d+)\}", body)
        ]
        learnsets[name] = moves
    return learnsets


def parse_species(text, learnsets):
    start = text.index("const struct SpeciesInfo gSpeciesInfo[] =")
    # entries are separated by [SPECIES_X] = { ... } at depth 1
    entry_re = re.compile(r"\[(SPECIES_\w+)\] =")
    species = {}
    pos = text.index("{", start) + 1
    # find end of gSpeciesInfo initializer
    depth = 1
    end = pos
    while depth > 0:
        ch = text[end]
        if ch == "{":
            depth += 1
        elif ch == "}":
            depth -= 1
        end += 1
    block_text = text[pos:end]

    matches = list(entry_re.finditer(block_text))
    for idx, m in enumerate(matches):
        body_end = matches[idx + 1].start() if idx + 1 < len(matches) else len(block_text)
        body = block_text[m.start():body_end]
        sp = m.group(1)

        def field(pat, default=None):
            fm = re.search(pat, body)
            return fm if fm else default

        fy = field(r"\.expYield = ([^,\n]+(?:\?[^,]+:[^,\n]+)?),")
        fg = field(r"\.growthRate = (\w+)")
        fn = field(r'\.speciesName = _\("([^"]*)"\)')
        fl = field(r"\.levelUpLearnset = (\w+)")

        evolutions = []
        emark = body.find(".evolutions = (const struct Evolution[])")
        if emark != -1:
            # brace-matched capture: entries may contain nested CONDITIONS blocks
            estart = body.index("{", emark)
            depth = 0
            eend = estart
            for k in range(estart, len(body)):
                depth += body[k] == "{"
                depth -= body[k] == "}"
                if depth == 0:
                    eend = k
                    break
            elist = body[estart + 1:eend]
            # each entry: {METHOD, param, SPECIES_X} or {METHOD, param, SPECIES_X, <conditions>}
            for em in re.finditer(r"\{(\w+),\s*([^,}]+),\s*(SPECIES_\w+)\s*([,}])", elist):
                conditioned = em.group(4) == ","
                evolutions.append([em.group(1), em.group(2).strip(), em.group(3), conditioned])

        species[sp] = {
            "name": fn.group(1) if fn else sp,
            "expYield": c_eval(fy.group(1)) if fy else 0,
            "growthRate": fg.group(1) if fg else "GROWTH_MEDIUM_FAST",
            "evolutions": evolutions,
            "learnset": learnsets.get(fl.group(1), []) if fl else [],
        }
    return species


def main():
    src, out = sys.argv[1], sys.argv[2]
    text = open(src).read()
    exp_tables = parse_exp_tables(text)
    learnsets = parse_learnsets(text)
    species = parse_species(text, learnsets)
    json.dump({"exp_tables": exp_tables, "species": species}, open(out, "w"))
    print(f"{len(species)} species, {len(learnsets)} learnsets, {len(exp_tables)} exp tables")


if __name__ == "__main__":
    main()
