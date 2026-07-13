#!/usr/bin/env python3
"""One-time save converter for the July 2026 TM-pocket expansion.

Converts pokeemerald-expansion .sav files from the post-flag-expansion
SaveBlock1 layout to the expanded-TM-pocket layout:
  - BAG_TMHM_COUNT grown 110 -> 192 (holds all 184 TMs + 8 HMs)
  - 82 empty ItemSlots (328 bytes) inserted into SaveBlock1.bag, right after
    the old TMsHMs[110] array (i.e. at offsetof(SaveBlock1, bag.berries)).
    berries and everything after it in SaveBlock1 shift up by 328 bytes.

This is the THIRD link in the save-conversion chain. A save must already be
bag-converted (convert_bag_save.py) and flag-converted (convert_flag_save.py);
this script validates that by requiring the post-flag SaveBlock1 layout and
refuses anything else.

All offsets below were dumped from an arm-none-eabi-gcc offsetof probe against
the exact struct definitions before/after the change — do not hand-edit them.

Usage:
    python3 tools/convert_tmpocket_save.py [--check] SAVE.sav [MORE.sav ...]

In-place conversion; the original is first copied to SAVE.sav.pre-tm-pocket.bak.
--check only reports what would happen.

Detection is unambiguous via the last SB1 sector's chunk size: the old layout
splits SaveBlock1 (15080 B) as [3968,3968,3968,3176] and the new (15408 B) as
[3968,3968,3968,3504], so only sector 4's checksum range differs between them.
Run this once, right after building the expanded ROM.
"""

import shutil
import struct
import sys

from convert_bag_save import (
    SECTOR_SIZE,
    SECTOR_DATA_SIZE,
    NUM_SECTORS_PER_SLOT,
    SLOT_COUNT,
    FLASH_SIZE,
    SECTOR_ID_SAVEBLOCK2,
    SB1_SECTOR_IDS,
    SB2_SIZE,
    SB2_ENCRYPTION_KEY_OFF,
    SB2_PLAYTIME_HOURS_OFF,
    FOOTER_OFF,
    SECTOR_SIGNATURE,
    chunk_sizes,
    checksum,
    footer,
    decode_name,
)

# --- probe-dumped offsets (arm-none-eabi-gcc, BAG_TMHM_COUNT 110 vs 192) ---
OLD_SB1_SIZE = 0x3AE8          # 15080 (post-flag-expansion)
NEW_SB1_SIZE = 0x3C30          # 15408
INSERT_AT = 0x920              # offsetof(SaveBlock1, bag.berries) in old layout
INSERT_LEN = (192 - 110) * 4   # 328 bytes = 82 empty ItemSlots


def convert_slot(sectors, force=False):
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

    old_sizes = dict(zip(SB1_SECTOR_IDS, chunk_sizes(OLD_SB1_SIZE)))
    new_sizes = dict(zip(SB1_SECTOR_IDS, chunk_sizes(NEW_SB1_SIZE)))
    old_ok = all(
        footer(by_id[i])[1] == checksum(by_id[i][: old_sizes[i]]) for i in SB1_SECTOR_IDS
    )
    new_ok = all(
        footer(by_id[i])[1] == checksum(by_id[i][: new_sizes[i]]) for i in SB1_SECTOR_IDS
    )
    # Sectors 1-3 have identical chunk size (3968) in both layouts so they always
    # pass both; sector 4 (3176 vs 3504) discriminates. But because old SB1
    # (15080) ends exactly on sector 4 offset 3176, an unconverted save's tail is
    # zero padding -> new_ok also passes (both-pass). So checksums alone can't tell
    # unconverted from converted here; use the insertion-point item slot below.
    if new_ok and not old_ok:
        return "checksums match the expanded-TM-pocket layout -> already converted — skipped"
    if not old_ok:
        return (
            "SaveBlock1 checksums don't match the post-flag-expansion layout — "
            "skipped (run convert_bag_save.py then convert_flag_save.py first)"
        )

    sb2 = by_id[SECTOR_ID_SAVEBLOCK2]
    if footer(sb2)[1] != checksum(sb2[:SB2_SIZE]):
        return "SaveBlock2 checksum mismatch (layout drift?) — skipped"

    key16 = struct.unpack_from("<I", sb2, SB2_ENCRYPTION_KEY_OFF)[0] & 0xFFFF
    hours = struct.unpack_from("<H", sb2, SB2_PLAYTIME_HOURS_OFF)[0]
    name = decode_name(sb2[:8])

    old_sb1 = b"".join(bytes(by_id[i][: old_sizes[i]]) for i in SB1_SECTOR_IDS)
    assert len(old_sb1) == OLD_SB1_SIZE

    # Discriminate converted from unconverted: at INSERT_AT the old layout has the
    # berries pocket (item id in the berry range for any save with a berry), while
    # a converted save has an inserted EMPTY TM slot (item id 0). A nonzero id here
    # is a positive "unconverted" signal. If it's 0 (no berry in slot 0), the state
    # is genuinely ambiguous and we require --force-old.
    insert_item_id = struct.unpack_from("<H", old_sb1, INSERT_AT)[0]
    if insert_item_id == 0 and not force:
        return (
            "insertion-point item slot is empty -> ambiguous (no berries, or already "
            "converted) — skipped (use --force-old only if this is an unconverted save)"
        )

    # Insert 82 empty TM slots (itemId 0, quantity 0-XOR-key = key16) right after
    # the old TMsHMs[110] array; berries and everything after shift up.
    empty = struct.pack("<HH", 0, key16) * (INSERT_LEN // 4)
    new = old_sb1[:INSERT_AT] + empty + old_sb1[INSERT_AT:]
    assert len(new) == NEW_SB1_SIZE, (len(new), NEW_SB1_SIZE)

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
        status = convert_slot(sectors, force)
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

    backup = path + ".pre-tm-pocket.bak"
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
