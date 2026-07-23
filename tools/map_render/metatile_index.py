#!/usr/bin/env python3
"""List a tileset's metatiles grouped by metatile behaviour.

Answers "which block do I place for tall grass / pond water / a south ledge?"
without eyeballing a contact sheet.

Usage:
    metatile_index.py --primary gTileset_General [--secondary gTileset_Petalburg]
                      [--behavior TALL_GRASS]
"""

import argparse
import os
import re
import struct
import sys
from collections import defaultdict

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from render_map import tileset_dir  # noqa: E402

NUM_METATILES_IN_PRIMARY = 512


def behavior_names():
    """Parse the MB_ enum in include/constants/metatile_behaviors.h."""
    src = open(os.path.join(ROOT, "include", "constants", "metatile_behaviors.h")).read()
    body = src[src.index("enum {") + 6:]
    body = body[:body.index("};")]
    names = {}
    value = 0
    for line in body.splitlines():
        line = re.sub(r"//.*", "", line).strip().rstrip(",").strip()
        if not line.startswith("MB_"):
            continue
        if "=" in line:
            name, expr = [p.strip() for p in line.split("=", 1)]
            value = int(expr, 0)
        else:
            name = line
        names[value] = name
        value += 1
    return names


def read_attrs(label):
    path = os.path.join(tileset_dir(label), "metatile_attributes.bin")
    blob = open(path, "rb").read()
    return struct.unpack("<%dH" % (len(blob) // 2), blob)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--primary", default="gTileset_General")
    ap.add_argument("--secondary")
    ap.add_argument("--behavior", help="substring filter, e.g. GRASS or JUMP")
    args = ap.parse_args()

    names = behavior_names()
    groups = defaultdict(list)

    for label, base in ((args.primary, 0), (args.secondary, NUM_METATILES_IN_PRIMARY)):
        if not label:
            continue
        for i, attr in enumerate(read_attrs(label)):
            beh = attr & 0x1FF
            layer = (attr >> 12) & 0xF
            groups[names.get(beh, "MB_UNKNOWN_%02X" % beh)].append((base + i, layer))

    for name in sorted(groups):
        if args.behavior and args.behavior.upper() not in name:
            continue
        entries = groups[name]
        if name == "MB_NORMAL" and not args.behavior:
            print("%-32s %d metatiles (omitted; pass --behavior NORMAL)" % (name, len(entries)))
            continue
        ids = ", ".join("%d(0x%03X)" % (i, i) for i, _ in entries)
        print("%-32s %s" % (name, ids))


if __name__ == "__main__":
    main()
