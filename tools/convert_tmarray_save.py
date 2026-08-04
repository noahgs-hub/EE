#!/usr/bin/env python3
"""One-time save converter for the August 2026 all-time-TM expansion.

Converts pokeemerald-expansion .sav files from the multi-roamer SaveBlock1
layout to the TM-array layout:
  - BAG_TMHM_COUNT grown 192 -> 340 (every move that has ever been a TM:
    332 TMs + 8 HMs, deduplicated by move)
  - The TM/HM pocket changes element type from `struct ItemSlot` (itemId u16 +
    encrypted quantity u16, 4 bytes) to a bare `u16` item id (2 bytes).
    Reusable TMs are owned-or-not, so the quantity carried no information.
  - Net effect on the pocket: 192*4 = 768 bytes -> 340*2 = 680 bytes, so
    `berries` and everything after it shift DOWN by 88 bytes and SaveBlock1
    shrinks 15492 -> 15404.

This is the FIFTH link in the save-conversion chain. A save must already be
bag-converted (convert_bag_save.py), flag-converted (convert_flag_save.py),
TM-pocket-converted (convert_tmpocket_save.py) and roamer-converted
(convert_roamer_save.py); this script validates that by requiring the
multi-roamer SaveBlock1 layout and refuses anything else.

All offsets below were dumped from an arm-none-eabi-gcc offsetof probe against
the exact struct definitions before/after the change -- do not hand-edit them.

Usage:
    python3 tools/convert_tmarray_save.py [--check] SAVE.sav [MORE.sav ...]

In-place conversion; the original is first copied to SAVE.sav.pre-tmarray.bak.
--check only reports what would happen.

Detection: a converted save passes BOTH sector-4 checksum interpretations
whenever its trailing 88 bytes are zero (they belong to trainerHill, which is
unused in most saves), so checksums alone cannot discriminate. We therefore
also parse the pocket region both ways:
  - old: 192 ItemSlots. Every id must be 0 or a real TM/HM id; an owned slot's
    quantity (XORed with SaveBlock2's encryption key) must be 1..999 and an
    empty slot's must be 0.
  - new: 340 bare u16 ids, compacted, each 0 or a real TM/HM id.
Conversion requires the old reading to hold and the new one to fail. Anything
ambiguous is skipped unless --force-old is given.
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

# --- probe-dumped offsets (arm-none-eabi-gcc, BAG_TMHM_COUNT 192 vs 340) ---
OLD_SB1_SIZE = 0x3C84          # 15492 (post-multi-roamer)
NEW_SB1_SIZE = 0x3C2C          # 15404
TMHM_OFF = 0x768               # offsetof(SaveBlock1, bag.TMsHMs), same in both
OLD_TMHM_COUNT = 192
NEW_TMHM_COUNT = 340
OLD_TMHM_BYTES = OLD_TMHM_COUNT * 4   # 768: struct ItemSlot
NEW_TMHM_BYTES = NEW_TMHM_COUNT * 2   # 680: bare u16 id
OLD_BERRIES_OFF = 0xA68        # 2664 = TMHM_OFF + OLD_TMHM_BYTES
NEW_BERRIES_OFF = 0xA10        # 2576 = TMHM_OFF + NEW_TMHM_BYTES
assert OLD_BERRIES_OFF == TMHM_OFF + OLD_TMHM_BYTES
assert NEW_BERRIES_OFF == TMHM_OFF + NEW_TMHM_BYTES
assert OLD_SB1_SIZE - OLD_BERRIES_OFF == NEW_SB1_SIZE - NEW_BERRIES_OFF

# Item ids a TM/HM slot may legally hold in the OLD layout.
# TM01-100 = 582-681, HM01-08 = 682-689, TM101-184 = 883-966.
OLD_VALID_IDS = set(range(582, 690)) | set(range(883, 967))
# The NEW layout may additionally hold TM185-332 = 968-1115, but those cannot
# appear in an unconverted save.
NEW_VALID_IDS = OLD_VALID_IDS | set(range(968, 1116))


def _parse_old(region, key16):
    """192 ItemSlots -> list of owned item ids, or None if it doesn't parse."""
    ids = []
    for k in range(OLD_TMHM_COUNT):
        item, qty_enc = struct.unpack_from("<HH", region, 4 * k)
        qty = qty_enc ^ key16
        if item == 0:
            if qty != 0:
                return None
            continue
        # Quantity is normally 1 (reusable TMs), but a save can hold duplicates
        # picked up before I_REUSABLE_TMS; any sane count means "owned". The new
        # format drops quantity entirely, so duplicates simply collapse to one.
        if item not in OLD_VALID_IDS or not (1 <= qty <= 999):
            return None
        ids.append(item)
    return ids


def _parse_new(region):
    """340 bare u16 ids, compacted -> list, or None if it doesn't parse."""
    ids = []
    seen_zero = False
    for k in range(NEW_TMHM_COUNT):
        item = struct.unpack_from("<H", region, 2 * k)[0]
        if item == 0:
            seen_zero = True
            continue
        if seen_zero or item not in NEW_VALID_IDS:
            return None
        ids.append(item)
    return ids


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
    if not old_ok:
        if new_ok:
            return "checksums match the TM-array layout -> already converted — skipped"
        return (
            "SaveBlock1 checksums don't match the multi-roamer layout — skipped "
            "(run the earlier converters first)"
        )

    sb2 = by_id[SECTOR_ID_SAVEBLOCK2]
    if footer(sb2)[1] != checksum(sb2[:SB2_SIZE]):
        return "SaveBlock2 checksum mismatch (layout drift?) — skipped"

    # Positive pre-roamer gate (added after an Aug 4 2026 near-miss where a
    # pre-roamer save slipped past this converter because its zero-padded tail
    # let it satisfy the multi-roamer size checksums). A save is treated as
    # pre-roamer only if BOTH hold:
    #   1. its sectors also checksum as the PRE-roamer SaveBlock1 size (15408) —
    #      genuine multi-roamer saves with live tail data (e.g. Trainer Hill)
    #      fail this, and
    #   2. offset 0x38E4 (dexSeen in the pre-roamer layout; mysteryGift tail in
    #      the multi-roamer layout) is nonzero — true of any real pre-roamer
    #      save, but also of multi-roamer saves that used Mystery Gift, which is
    #      why check 1 is required as well.
    pre_roamer_sizes = dict(zip(SB1_SECTOR_IDS, chunk_sizes(0x3C30)))  # 15408
    pre_roamer_ok = all(
        footer(by_id[i])[1] == checksum(by_id[i][: pre_roamer_sizes[i]])
        for i in SB1_SECTOR_IDS
    )
    probe = b"".join(bytes(by_id[i][: old_sizes[i]]) for i in SB1_SECTOR_IDS)[0x38E4:0x38E4 + 84]
    if pre_roamer_ok and any(probe):
        return (
            "save also matches the PRE-roamer layout (dexSeen probe nonzero) -> "
            "it has not been through convert_roamer_save.py — run the earlier "
            "chain first; skipped"
        )

    key16 = struct.unpack_from("<I", sb2, SB2_ENCRYPTION_KEY_OFF)[0] & 0xFFFF
    hours = struct.unpack_from("<H", sb2, SB2_PLAYTIME_HOURS_OFF)[0]
    name = decode_name(sb2[:8])

    old_sb1 = b"".join(bytes(by_id[i][: old_sizes[i]]) for i in SB1_SECTOR_IDS)
    assert len(old_sb1) == OLD_SB1_SIZE

    as_old = _parse_old(old_sb1[TMHM_OFF : TMHM_OFF + OLD_TMHM_BYTES], key16)
    as_new = _parse_new(old_sb1[TMHM_OFF : TMHM_OFF + NEW_TMHM_BYTES])
    if as_old is None:
        return "TM pocket doesn't parse as ItemSlots — skipped (already converted?)"
    if as_new is not None and not force:
        return (
            "TM pocket parses as BOTH layouts -> ambiguous — skipped "
            "(use --force-old only if this is definitely an unconverted save)"
        )

    # Rebuild the pocket as bare, compacted u16 ids.
    packed = b"".join(struct.pack("<H", i) for i in as_old)
    packed += bytes(NEW_TMHM_BYTES - len(packed))
    assert len(packed) == NEW_TMHM_BYTES

    new = (
        old_sb1[:TMHM_OFF]
        + packed
        + old_sb1[OLD_BERRIES_OFF:]
    )
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

    return (
        f"converted (player {name!r}, {hours}h playtime, "
        f"counter {counters.pop()}, {len(as_old)} TMs/HMs kept)"
    )


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

    backup = path + ".pre-tmarray.bak"
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
