#!/usr/bin/env python3
"""Render a pokeemerald map layout to a PNG preview, with no third-party deps.

Usage:
    render_map.py <LayoutDirName> [-o out.png] [--grid] [--collision]
    render_map.py --bin map.bin --width W --height H \
                  --primary <tileset> --secondary <tileset> [-o out.png]

Reads data/layouts/layouts.json for tileset and size info, then composites the
map's blockdata through the tileset metatiles into a true-colour PNG.
"""

import argparse
import json
import os
import struct
import sys
import zlib

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), "..", ".."))
NUM_PALS_IN_PRIMARY = 6
NUM_METATILES_IN_PRIMARY = 512
NUM_TILES_IN_PRIMARY = 512


# ---------------------------------------------------------------- PNG codec

def read_png_indexed(path):
    """Decode a non-interlaced indexed PNG. Returns (width, height, indices, palette)."""
    data = open(path, "rb").read()
    if data[:8] != b"\x89PNG\r\n\x1a\x0a":
        raise ValueError("%s is not a PNG" % path)
    idat = b""
    pos = 8
    width = height = depth = ctype = None
    palette = []
    while pos < len(data):
        length, ctag = struct.unpack(">I4s", data[pos:pos + 8])
        body = data[pos + 8:pos + 8 + length]
        if ctag == b"IHDR":
            width, height, depth, ctype, _, _, interlace = struct.unpack(">IIBBBBB", body)
            if interlace:
                raise ValueError("interlaced PNGs unsupported")
            if ctype != 3:
                raise ValueError("expected an indexed PNG, got colour type %d" % ctype)
        elif ctag == b"PLTE":
            palette = [tuple(body[i:i + 3]) for i in range(0, len(body), 3)]
        elif ctag == b"IDAT":
            idat += body
        pos += 12 + length

    raw = zlib.decompress(idat)
    stride = (width * depth + 7) // 8
    rows = []
    prev = bytearray(stride)
    pos = 0
    for _ in range(height):
        ftype = raw[pos]
        line = bytearray(raw[pos + 1:pos + 1 + stride])
        pos += 1 + stride
        # bpp is always 1 for indexed depths <= 8
        if ftype == 1:
            for i in range(1, stride):
                line[i] = (line[i] + line[i - 1]) & 0xFF
        elif ftype == 2:
            for i in range(stride):
                line[i] = (line[i] + prev[i]) & 0xFF
        elif ftype == 3:
            for i in range(stride):
                left = line[i - 1] if i else 0
                line[i] = (line[i] + ((left + prev[i]) >> 1)) & 0xFF
        elif ftype == 4:
            for i in range(stride):
                a = line[i - 1] if i else 0
                b = prev[i]
                c = prev[i - 1] if i else 0
                p = a + b - c
                pa, pb, pc = abs(p - a), abs(p - b), abs(p - c)
                pr = a if (pa <= pb and pa <= pc) else (b if pb <= pc else c)
                line[i] = (line[i] + pr) & 0xFF
        elif ftype != 0:
            raise ValueError("bad PNG filter type %d" % ftype)
        prev = line

        if depth == 8:
            rows.append(list(line))
        elif depth == 4:
            row = []
            for byte in line:
                row.append(byte >> 4)
                row.append(byte & 0xF)
            rows.append(row[:width])
        else:
            raise ValueError("unsupported bit depth %d" % depth)
    return width, height, rows, palette


def write_png_rgb(path, width, height, pixels):
    """pixels: flat bytearray of RGB triples, length width*height*3."""
    raw = bytearray()
    for y in range(height):
        raw.append(0)
        start = y * width * 3
        raw += pixels[start:start + width * 3]
    def chunk(tag, body):
        return (struct.pack(">I", len(body)) + tag + body
                + struct.pack(">I", zlib.crc32(tag + body) & 0xFFFFFFFF))
    out = b"\x89PNG\r\n\x1a\x0a"
    out += chunk(b"IHDR", struct.pack(">IIBBBBB", width, height, 8, 2, 0, 0, 0))
    out += chunk(b"IDAT", zlib.compress(bytes(raw), 6))
    out += chunk(b"IEND", b"")
    open(path, "wb").write(out)


# ------------------------------------------------------------- tileset data

def read_jasc_pal(path):
    lines = open(path).read().split()
    colours = []
    nums = [int(n) for n in lines[3:] if n.isdigit()]
    for i in range(0, len(nums), 3):
        colours.append((nums[i], nums[i + 1], nums[i + 2]))
    return (colours + [(0, 0, 0)] * 16)[:16]


def tileset_dir(label):
    """gTileset_PetalburgGym -> data/tilesets/{primary,secondary}/petalburg_gym"""
    name = label.replace("gTileset_", "")
    snake = ""
    for i, ch in enumerate(name):
        if ch.isupper() and i and not name[i - 1].isupper():
            snake += "_"
        snake += ch.lower()
    for kind in ("primary", "secondary"):
        path = os.path.join(ROOT, "data", "tilesets", kind, snake)
        if os.path.isdir(path):
            return path
    raise SystemExit("cannot find tileset directory for %s (tried %s)" % (label, snake))


class Tileset(object):
    def __init__(self, label):
        self.dir = tileset_dir(label)
        w, h, rows, _ = read_png_indexed(os.path.join(self.dir, "tiles.png"))
        self.tiles = []
        for ty in range(h // 8):
            for tx in range(w // 8):
                tile = []
                for y in range(8):
                    tile.append(rows[ty * 8 + y][tx * 8:tx * 8 + 8])
                self.tiles.append(tile)
        self.palettes = []
        paldir = os.path.join(self.dir, "palettes")
        for i in range(16):
            p = os.path.join(paldir, "%02d.pal" % i)
            self.palettes.append(read_jasc_pal(p) if os.path.exists(p) else [(0, 0, 0)] * 16)
        mt = open(os.path.join(self.dir, "metatiles.bin"), "rb").read()
        self.metatiles = [struct.unpack("<8H", mt[i:i + 16]) for i in range(0, len(mt), 16)]


class Renderer(object):
    def __init__(self, primary_label, secondary_label):
        self.primary = Tileset(primary_label)
        self.secondary = Tileset(secondary_label)
        self._cache = {}

    def palette(self, index):
        if index < NUM_PALS_IN_PRIMARY:
            return self.primary.palettes[index]
        return self.secondary.palettes[index]

    def tile(self, index):
        if index < NUM_TILES_IN_PRIMARY:
            src, i = self.primary.tiles, index
        else:
            src, i = self.secondary.tiles, index - NUM_TILES_IN_PRIMARY
        return src[i] if i < len(src) else [[0] * 8 for _ in range(8)]

    def metatile(self, index):
        if index < NUM_METATILES_IN_PRIMARY:
            src, i = self.primary.metatiles, index
        else:
            src, i = self.secondary.metatiles, index - NUM_METATILES_IN_PRIMARY
        return src[i] if i < len(src) else (0,) * 8

    def render_metatile(self, index):
        """Return a 16x16 list of rows of (r,g,b)."""
        if index in self._cache:
            return self._cache[index]
        entries = self.metatile(index)
        px = [[(0, 0, 0)] * 16 for _ in range(16)]
        for layer in (0, 1):
            for quad in range(4):
                entry = entries[layer * 4 + quad]
                tile_id = entry & 0x3FF
                xflip = (entry >> 10) & 1
                yflip = (entry >> 11) & 1
                pal = self.palette((entry >> 12) & 0xF)
                tile = self.tile(tile_id)
                ox, oy = (quad % 2) * 8, (quad // 2) * 8
                for y in range(8):
                    sy = 7 - y if yflip else y
                    for x in range(8):
                        sx = 7 - x if xflip else x
                        ci = tile[sy][sx]
                        if layer == 1 and ci == 0:
                            continue  # transparent over the bottom layer
                        px[oy + y][ox + x] = pal[ci]
        self._cache[index] = px
        return px


# ------------------------------------------------------------------- driver

def load_layout(layout_id_or_name):
    layouts = json.load(open(os.path.join(ROOT, "data", "layouts", "layouts.json")))["layouts"]
    key = layout_id_or_name.lower().replace("_", "")
    for lay in layouts:
        for field in ("id", "name"):
            if lay.get(field, "").lower().replace("_", "").replace("layout", "") == key.replace("layout", ""):
                return lay
    raise SystemExit("no layout matching %r" % layout_id_or_name)


def render(blocks, width, height, renderer, grid=False, collision=False):
    img_w, img_h = width * 16, height * 16
    pixels = bytearray(img_w * img_h * 3)
    for by in range(height):
        for bx in range(width):
            block = blocks[by * width + bx]
            tile = renderer.render_metatile(block & 0x3FF)
            coll = (block >> 10) & 3
            elev = (block >> 12) & 0xF
            for y in range(16):
                base = ((by * 16 + y) * img_w + bx * 16) * 3
                row = tile[y]
                for x in range(16):
                    r, g, b = row[x]
                    if collision and coll:
                        r = min(255, r + 70)
                        g = g // 2
                        b = b // 2
                    if grid and (x == 0 or y == 0):
                        r, g, b = (r + 40) % 256, (g + 40) % 256, (b + 40) % 256
                    o = base + x * 3
                    pixels[o] = r
                    pixels[o + 1] = g
                    pixels[o + 2] = b
            del elev
    return img_w, img_h, pixels


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("layout", nargs="?", help="layout id or name, e.g. LAYOUT_PETALBURG_CITY")
    ap.add_argument("-o", "--out", default=None)
    ap.add_argument("--bin")
    ap.add_argument("--width", type=int)
    ap.add_argument("--height", type=int)
    ap.add_argument("--primary", default="gTileset_General")
    ap.add_argument("--secondary")
    ap.add_argument("--grid", action="store_true")
    ap.add_argument("--collision", action="store_true", help="tint impassable blocks red")
    args = ap.parse_args()

    if args.bin:
        width, height = args.width, args.height
        blob = open(args.bin, "rb").read()
        primary, secondary = args.primary, args.secondary
        out = args.out or "map.png"
    else:
        if not args.layout:
            ap.error("give a layout name or --bin")
        lay = load_layout(args.layout)
        width, height = lay["width"], lay["height"]
        blob = open(os.path.join(ROOT, lay["blockdata_filepath"]), "rb").read()
        primary, secondary = lay["primary_tileset"], lay["secondary_tileset"]
        out = args.out or (lay["id"] + ".png")

    blocks = struct.unpack("<%dH" % (len(blob) // 2), blob)
    if len(blocks) < width * height:
        raise SystemExit("blockdata has %d blocks, expected %d" % (len(blocks), width * height))

    renderer = Renderer(primary, secondary)
    img_w, img_h, pixels = render(blocks, width, height, renderer, args.grid, args.collision)
    write_png_rgb(out, img_w, img_h, pixels)
    print("wrote %s (%dx%d px, %dx%d blocks, %s + %s)"
          % (out, img_w, img_h, width, height, primary, secondary))


if __name__ == "__main__":
    main()
