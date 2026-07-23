#!/usr/bin/env python3
"""Render a contact sheet of every metatile in a tileset pair, 16 per row.

Metatile index = row * 16 + column (top-left origin). Secondary tileset
metatiles start at index 512.

Usage:
    metatile_sheet.py --primary gTileset_General --secondary gTileset_Petalburg \
        [--start 0] [--count 512] [--scale 2] -o sheet.png
"""

import argparse
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from render_map import Renderer, write_png_rgb  # noqa: E402

PER_ROW = 16
GAP = 2


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--primary", default="gTileset_General")
    ap.add_argument("--secondary", required=True)
    ap.add_argument("--start", type=int, default=0)
    ap.add_argument("--count", type=int, default=512)
    ap.add_argument("--scale", type=int, default=2)
    ap.add_argument("-o", "--out", default="sheet.png")
    args = ap.parse_args()

    r = Renderer(args.primary, args.secondary)
    n = args.count
    rows = (n + PER_ROW - 1) // PER_ROW
    cell = 16 * args.scale + GAP
    img_w, img_h = PER_ROW * cell, rows * cell
    px = bytearray(b"\x20" * (img_w * img_h * 3))

    for i in range(n):
        idx = args.start + i
        tile = r.render_metatile(idx)
        cx, cy = (i % PER_ROW) * cell, (i // PER_ROW) * cell
        for y in range(16 * args.scale):
            for x in range(16 * args.scale):
                cr, cg, cb = tile[y // args.scale][x // args.scale]
                o = ((cy + y) * img_w + cx + x) * 3
                px[o], px[o + 1], px[o + 2] = cr, cg, cb

    write_png_rgb(args.out, img_w, img_h, px)
    print("wrote %s: metatiles %d..%d, %d per row (index = start + row*16 + col)"
          % (args.out, args.start, args.start + n - 1, PER_ROW))


if __name__ == "__main__":
    main()
