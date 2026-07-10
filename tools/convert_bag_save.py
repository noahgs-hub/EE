#!/usr/bin/env python3
"""One-time save converter for the July 2026 bag expansion.

Converts pokeemerald-expansion .sav files from the old SaveBlock1 layout to
the new one:
  - Bag pockets grown:  items 30->60, keyItems 30->40, pokeBalls 16->30,
                        TMsHMs 64->110, berries 46->70
  - ramScript (Mystery Event buffer, 1004 bytes) removed
    (FREE_MYSTERY_EVENT_BUFFERS = TRUE)

All offsets below were dumped from arm-none-eabi-gcc against the exact
struct definitions before/after the change — do not hand-edit them.

Usage:
    python3 tools/convert_bag_save.py [--check] SAVE.sav [MORE.sav ...]

In-place conversion; the original is first copied to SAVE.sav.pre-bag-expansion.bak.
--check only reports what would happen.
"""

import shutil
import struct
import sys

SECTOR_SIZE = 4096
SECTOR_DATA_SIZE = 3968
FOOTER_OFF = SECTOR_DATA_SIZE + 116  # id u16, checksum u16, signature u32, counter u32
SECTOR_SIGNATURE = 0x08012025
NUM_SECTORS_PER_SLOT = 14
SLOT_COUNT = 2
FLASH_SIZE = 131072

SECTOR_ID_SAVEBLOCK2 = 0
SB1_SECTOR_IDS = (1, 2, 3, 4)

# --- old layout (before bag expansion) ---
OLD_SB1_SIZE = 0x3CD0          # 15568
OLD_BAG_OFF = 0x560
OLD_POCKETS = (30, 30, 16, 64, 46)   # items, keyItems, pokeBalls, TMsHMs, berries
OLD_RAMSCRIPT_OFF = 0x36AC
RAMSCRIPT_SIZE = 0x3EC         # 1004

# --- new layout ---
NEW_SB1_SIZE = 0x3AD4          # 15060
NEW_POCKETS = (60, 40, 30, 110, 70)

SB2_SIZE = 0xF2C               # unchanged by this conversion
SB2_ENCRYPTION_KEY_OFF = 0xAC
SB2_PLAYTIME_HOURS_OFF = 0x0E

OLD_BAG_SIZE = sum(OLD_POCKETS) * 4
NEW_BAG_SIZE = sum(NEW_POCKETS) * 4


def chunk_sizes(total):
    sizes = []
    remaining = total
    for _ in SB1_SECTOR_IDS:
        sizes.append(min(remaining, SECTOR_DATA_SIZE))
        remaining -= sizes[-1]
    assert remaining == 0
    return sizes


def checksum(data):
    total = 0
    for i in range(0, len(data) & ~3, 4):
        total += struct.unpack_from("<I", data, i)[0]
    return ((total >> 16) + total) & 0xFFFF


def footer(sector):
    sid, csum, signature, counter = struct.unpack_from("<HHII", sector, FOOTER_OFF)
    return sid, csum, signature, counter


def decode_name(raw):
    out = ""
    for b in raw:
        if b == 0xFF:
            break
        if 0xA1 <= b <= 0xAA:
            out += chr(ord("0") + b - 0xA1)
        elif 0xBB <= b <= 0xD4:
            out += chr(ord("A") + b - 0xBB)
        elif 0xD5 <= b <= 0xEE:
            out += chr(ord("a") + b - 0xD5)
        elif b == 0x00:
            out += " "
        else:
            out += "?"
    return out


def convert_slot(sectors, slot_name, force=False):
    """sectors: list of 14 bytearrays (physical order). Returns status string."""
    by_id = {}
    counters = set()
    for sec in sectors:
        sid, _, signature, counter = footer(sec)
        if signature != SECTOR_SIGNATURE:
            continue
        by_id[sid] = sec
        counters.add(counter)

    if not by_id:
        return "empty (never saved) — skipped"
    if sorted(by_id) != list(range(NUM_SECTORS_PER_SLOT)):
        return "incomplete/damaged slot (missing sector ids) — skipped"
    if len(counters) != 1:
        return "inconsistent save counters (interrupted save?) — skipped"

    # Validate SB1 sectors against old layout; detect already-converted saves.
    old_sizes = dict(zip(SB1_SECTOR_IDS, chunk_sizes(OLD_SB1_SIZE)))
    new_sizes = dict(zip(SB1_SECTOR_IDS, chunk_sizes(NEW_SB1_SIZE)))
    old_ok = all(
        footer(by_id[i])[1] == checksum(by_id[i][: old_sizes[i]]) for i in SB1_SECTOR_IDS
    )
    if not old_ok:
        return "SaveBlock1 checksums don't match the expected old layout — skipped"

    # Checksums alone can't distinguish layouts: a new-layout sector is old-range
    # data truncated + zero padding, and zero words don't affect the checksum.
    # Discriminate on the last SB1 sector's bytes between the two struct sizes:
    # the game zeroes them whenever it saves in the new layout, while an
    # old-layout save has live end-of-struct data there.
    last = SB1_SECTOR_IDS[-1]
    tail = by_id[last][new_sizes[last] : old_sizes[last]]
    if not any(tail):
        if not force:
            return (
                "last-sector tail is all zeros -> already converted — skipped "
                "(use --force-old if this really is an unconverted save)"
            )


    sb2 = by_id[SECTOR_ID_SAVEBLOCK2]
    if footer(sb2)[1] != checksum(sb2[:SB2_SIZE]):
        return "SaveBlock2 checksum mismatch (layout drift?) — skipped"

    key16 = struct.unpack_from("<I", sb2, SB2_ENCRYPTION_KEY_OFF)[0] & 0xFFFF
    hours = struct.unpack_from("<H", sb2, SB2_PLAYTIME_HOURS_OFF)[0]
    name = decode_name(sb2[:8])

    old_sb1 = b"".join(
        bytes(by_id[i][: old_sizes[i]]) for i in SB1_SECTOR_IDS
    )
    assert len(old_sb1) == OLD_SB1_SIZE

    # Empty slots must decrypt to quantity 0, i.e. raw quantity == key16.
    new = bytearray()
    new += old_sb1[:OLD_BAG_OFF]
    pos = OLD_BAG_OFF
    for old_n, new_n in zip(OLD_POCKETS, NEW_POCKETS):
        new += old_sb1[pos : pos + old_n * 4]
        new += struct.pack("<HH", 0, key16) * (new_n - old_n)
        pos += old_n * 4
    assert pos == OLD_BAG_OFF + OLD_BAG_SIZE
    new += old_sb1[pos:OLD_RAMSCRIPT_OFF]
    new += old_sb1[OLD_RAMSCRIPT_OFF + RAMSCRIPT_SIZE :]
    assert len(new) == NEW_SB1_SIZE

    # Write chunks back into the physical sectors, refreshing checksums.
    pos = 0
    for i in SB1_SECTOR_IDS:
        sec = by_id[i]
        size = new_sizes[i]
        sec[:size] = new[pos : pos + size]
        for j in range(size, SECTOR_DATA_SIZE):
            sec[j] = 0
        struct.pack_into("<H", sec, FOOTER_OFF + 2, checksum(sec[:size]))
        pos += size

    return f"converted (player {name!r}, {hours}h playtime, counter {counters.pop()})"


def process(path, check_only, force=False):
    with open(path, "rb") as f:
        raw = bytearray(f.read())
    if len(raw) < FLASH_SIZE:
        print(f"{path}: not a 128 KiB flash save ({len(raw)} bytes) — skipped")
        return False

    results = []
    changed = False
    for slot in range(SLOT_COUNT):
        base = slot * NUM_SECTORS_PER_SLOT * SECTOR_SIZE
        sectors = [
            raw[base + i * SECTOR_SIZE : base + (i + 1) * SECTOR_SIZE]
            for i in range(NUM_SECTORS_PER_SLOT)
        ]
        status = convert_slot(sectors, f"slot {slot}", force)
        results.append(f"  slot {slot}: {status}")
        if status.startswith("converted"):
            changed = True
            if not check_only:
                for i, sec in enumerate(sectors):
                    off = base + i * SECTOR_SIZE
                    raw[off : off + SECTOR_SIZE] = sec

    print(path + ":")
    for line in results:
        print(line)

    if not changed:
        return False
    if check_only:
        print("  (--check: no changes written)")
        return True

    backup = path + ".pre-bag-expansion.bak"
    shutil.copy2(path, backup)
    with open(path, "wb") as f:
        f.write(raw)
    print(f"  written; original backed up to {backup}")
    return True


def main():
    args = sys.argv[1:]
    check_only = "--check" in args
    force = "--force-old" in args
    paths = [a for a in args if a not in ("--check", "--force-old")]
    if not paths:
        print(__doc__)
        sys.exit(1)
    for path in paths:
        process(path, check_only, force)


if __name__ == "__main__":
    main()
