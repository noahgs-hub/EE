#!/usr/bin/env python3
"""One-time save converter for the July 2026 multi-roamer expansion.

Converts pokeemerald-expansion .sav files from the post-TM-pocket SaveBlock1
layout to the multi-roamer layout:
  - ROAMER_COUNT grown 1 -> 4 (Latias/Latios + Raikou/Entei/Suicune roamers)
  - 3 empty struct Roamer slots (84 bytes, all zero => active = FALSE) inserted
    right after the old roamer[0] (i.e. at offsetof(SaveBlock1, roamer) +
    sizeof(struct Roamer)). enigmaBerry and everything after it shift up 84 B.

This is the FOURTH link in the save-conversion chain. A save must already be
bag-converted (convert_bag_save.py), flag-converted (convert_flag_save.py) and
TM-pocket-converted (convert_tmpocket_save.py); this script validates that by
requiring the post-TM-pocket SaveBlock1 layout and refuses anything else.

All offsets below were dumped from an arm-none-eabi-gcc offsetof probe against
the exact struct definitions before/after the change — do not hand-edit them.

Usage:
    python3 tools/convert_roamer_save.py [--check] SAVE.sav [MORE.sav ...]

In-place conversion; the original is first copied to SAVE.sav.pre-roamer.bak.
--check only reports what would happen.

Detection: both layouts pass both sector-4 checksum interpretations (the moved
tail regions are zero-padded), so like the TM-pocket converter we use a data
discriminator. In the old layout, file bytes [OLD_DEXSEEN_OFF,
OLD_DEXSEEN_OFF+84) are the seen-flags for national dex #1-#672 — nonzero for
any real save. In a converted save the same bytes are the tail of the (shifted)
mysteryGift block — zero unless Mystery Gift was ever used. A nonzero byte
there is a positive "unconverted" signal; all-zero is ambiguous and requires
--force-old. Run this once, right after building the multi-roamer ROM.
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

# --- probe-dumped offsets (arm-none-eabi-gcc, ROAMER_COUNT 1 vs 4) ---
OLD_SB1_SIZE = 0x3C30          # 15408 (post-TM-pocket-expansion)
NEW_SB1_SIZE = 0x3C84          # 15492
ROAMER_OFF = 0x3528            # offsetof(SaveBlock1, roamer), same in both
ROAMER_SIZE = 0x1C             # sizeof(struct Roamer) = 28
INSERT_AT = ROAMER_OFF + ROAMER_SIZE  # 0x3544, end of old roamer[0]
INSERT_LEN = 3 * ROAMER_SIZE   # 84 bytes = 3 empty (inactive) roamer slots
OLD_DEXSEEN_OFF = 0x38E4       # offsetof(SaveBlock1, dexSeen), old layout
# new-layout dexSeen = 0x3938 = OLD_DEXSEEN_OFF + INSERT_LEN (sanity-checked)
assert 0x3938 == OLD_DEXSEEN_OFF + INSERT_LEN


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
    if new_ok and not old_ok:
        return "checksums match the multi-roamer layout -> already converted — skipped"
    if not old_ok:
        return (
            "SaveBlock1 checksums don't match the post-TM-pocket layout — skipped "
            "(run convert_bag_save.py, convert_flag_save.py, convert_tmpocket_save.py first)"
        )

    sb2 = by_id[SECTOR_ID_SAVEBLOCK2]
    if footer(sb2)[1] != checksum(sb2[:SB2_SIZE]):
        return "SaveBlock2 checksum mismatch (layout drift?) — skipped"

    hours = struct.unpack_from("<H", sb2, SB2_PLAYTIME_HOURS_OFF)[0]
    name = decode_name(sb2[:8])

    old_sb1 = b"".join(bytes(by_id[i][: old_sizes[i]]) for i in SB1_SECTOR_IDS)
    assert len(old_sb1) == OLD_SB1_SIZE

    # Discriminate converted from unconverted (see module docstring): in the old
    # layout this range is the seen-flags for dex #1-#672 (nonzero for any real
    # save); in a converted save it's the tail of the shifted mysteryGift block.
    dexseen_head = old_sb1[OLD_DEXSEEN_OFF : OLD_DEXSEEN_OFF + INSERT_LEN]
    if not any(dexseen_head) and not force:
        return (
            "dexSeen probe region is all zero -> ambiguous (blank dex, or already "
            "converted) — skipped (use --force-old only if this is an unconverted save)"
        )

    # Insert 3 zeroed roamer slots (active = FALSE) right after roamer[0];
    # enigmaBerry and everything after shift up.
    new = old_sb1[:INSERT_AT] + bytes(INSERT_LEN) + old_sb1[INSERT_AT:]
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

    backup = path + ".pre-roamer.bak"
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
