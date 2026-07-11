#!/usr/bin/env python3
"""One-time save converter for the July 2026 trainer-flag expansion.

Converts pokeemerald-expansion .sav files from the post-bag-expansion
SaveBlock1 layout to the expanded-trainer-flags layout:
  - MAX_TRAINERS_COUNT_EMERALD grown 864 -> 1024
  - 20 zero bytes (160 new trainer flags, IDs 0x860-0x8FF) inserted into
    SaveBlock1.flags; every flag >= 0x860 (system flags, badges, dailies)
    shifts up by 160

Saves that predate the bag expansion must be run through
tools/convert_bag_save.py FIRST; this script detects and refuses them.

All offsets below were dumped from arm-none-eabi-gcc against the exact
struct definitions before/after the change — do not hand-edit them.

Usage:
    python3 tools/convert_flag_save.py [--check] SAVE.sav [MORE.sav ...]

In-place conversion; the original is first copied to SAVE.sav.pre-flag-expansion.bak.
--check only reports what would happen.

Already-converted detection: the byte at the insertion point holds
FLAG_SYS_POKEMON_GET/POKEDEX_GET/POKENAV_GET in an unconverted save (always
nonzero once the game has begun), but is a freshly-inserted trainer-flag byte
(zero until trainer IDs 864-871 are defeated) in a converted one. Run this
once, right after building the expanded ROM — not months later.
"""

import shutil
import struct
import sys

from convert_bag_save import (
    SECTOR_DATA_SIZE,
    SECTOR_SIZE,
    NUM_SECTORS_PER_SLOT,
    SLOT_COUNT,
    FLASH_SIZE,
    SECTOR_ID_SAVEBLOCK2,
    SB1_SECTOR_IDS,
    SB2_SIZE,
    SB2_PLAYTIME_HOURS_OFF,
    FOOTER_OFF,
    SECTOR_SIGNATURE,
    chunk_sizes,
    checksum,
    footer,
    decode_name,
)

# --- old layout (post bag expansion, pre flag expansion) ---
OLD_SB1_SIZE = 0x3AD4          # 15060
FLAGS_OFF = 5216               # offsetof(SaveBlock1, flags); unchanged by this conversion

# --- new layout ---
NEW_SB1_SIZE = 0x3AE8          # 15080
INSERT_AT = FLAGS_OFF + 0x10C  # byte holding flag 0x860 (old SYSTEM_FLAGS start)
INSERT_LEN = 20                # 160 new trainer flags


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
    # An unconverted save passes both checks (its padding beyond OLD_SB1_SIZE is
    # zeros, and zero words don't affect the checksum), so new_ok alone only
    # proves conversion when old_ok fails; the ambiguous both-pass case falls
    # through to the insertion-point byte discriminator below.
    if new_ok and not old_ok:
        return "checksums match the expanded-flags layout -> already converted — skipped"
    if not old_ok:
        return (
            "SaveBlock1 checksums don't match the post-bag-expansion layout — "
            "skipped (pre-bag-expansion save? run convert_bag_save.py first)"
        )

    sb2 = by_id[SECTOR_ID_SAVEBLOCK2]
    if footer(sb2)[1] != checksum(sb2[:SB2_SIZE]):
        return "SaveBlock2 checksum mismatch (layout drift?) — skipped"

    old_sb1 = b"".join(bytes(by_id[i][: old_sizes[i]]) for i in SB1_SECTOR_IDS)
    assert len(old_sb1) == OLD_SB1_SIZE

    # Discriminate converted from unconverted (checksums can't: the inserted
    # bytes are zero and zero words don't change the checksum). See module doc.
    if old_sb1[INSERT_AT] == 0 and not force:
        return (
            "system-flags byte at insertion point is zero -> already converted "
            "(or never played) — skipped (use --force-old to override)"
        )

    hours = struct.unpack_from("<H", sb2, SB2_PLAYTIME_HOURS_OFF)[0]
    name = decode_name(sb2[:8])

    new = old_sb1[:INSERT_AT] + b"\x00" * INSERT_LEN + old_sb1[INSERT_AT:]
    assert len(new) == NEW_SB1_SIZE

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

    backup = path + ".pre-flag-expansion.bak"
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
