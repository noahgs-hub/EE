#!/usr/bin/env python3
"""Fix Battle Frontier sets broken by the physical/special split.

A move is swapped when BOTH of these hold (split-changed or vanilla jank alike):
  1. It keys off the clearly weaker BASE attacking stat (gap > 25). Base stats,
     not EVs, define what a species is good at — vanilla loves to dump special
     EVs on 60-base-SpA Gyarados, and that shouldn't protect the set.
  2. The mon is not "mixed-capable": kept as-is if the move's stat has base >= 80
     and the attacking bases are within 30 points (Noah's rule: logical mixed
     sets like Swampert's Surf/Ice Beam stay).
If a fix leaves every damaging move on the other category, the Atk/SpA EVs are
swapped and the nature's atk/spa role is mirrored (e.g. Modest -> Adamant) so
the build matches the moves.

Replacement = learnable move of the same type and the corrected category, closest
in power (ghost<->dark treated as coverage twins as a fallback). Natures, EVs,
items and all vanilla-era "jank" (moves that were off-stat in gen3 too) are kept.

Usage: frontier_split_fix.py <scratchpad-with-move_pp.i-and-pokemon_pp.i> [--dry-run]
"""
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
REPO = os.path.join(HERE, "..")
sys.path.insert(0, os.path.join(HERE, "level_scaling"))
from adjust_moves import parse_moves, eval_c_int, BAD_REPLACEMENTS  # noqa: E402

SCRATCH = sys.argv[1]
DRY = "--dry-run" in sys.argv

POOL_H = os.path.join(REPO, "src/data/battle_frontier/battle_frontier_mons.h")
BRAINS_C = os.path.join(REPO, "src/frontier_util.c")

GEN3_SPECIAL_TYPES = {"TYPE_FIRE", "TYPE_WATER", "TYPE_ELECTRIC", "TYPE_GRASS",
                      "TYPE_ICE", "TYPE_PSYCHIC", "TYPE_DRAGON", "TYPE_DARK"}
COVERAGE_TWINS = {"TYPE_GHOST": "TYPE_DARK", "TYPE_DARK": "TYPE_GHOST"}
SKIP_MOVES = {"MOVE_HIDDEN_POWER", "MOVE_NONE"}
# friendship moves report power 1 in the data but hit like ~102 BP in practice
EFFECTIVE_POWER = {"MOVE_RETURN": 102, "MOVE_FRUSTRATION": 102}

NATURES = {
    "LONELY": ("atk", "def"), "BRAVE": ("atk", "spe"), "ADAMANT": ("atk", "spa"), "NAUGHTY": ("atk", "spd"),
    "BOLD": ("def", "atk"), "RELAXED": ("def", "spe"), "IMPISH": ("def", "spa"), "LAX": ("def", "spd"),
    "TIMID": ("spe", "atk"), "HASTY": ("spe", "def"), "JOLLY": ("spe", "spa"), "NAIVE": ("spe", "spd"),
    "MODEST": ("spa", "atk"), "MILD": ("spa", "def"), "QUIET": ("spa", "spe"), "RASH": ("spa", "spd"),
    "CALM": ("spd", "atk"), "GENTLE": ("spd", "def"), "SASSY": ("spd", "spe"), "CAREFUL": ("spd", "spa"),
}

# Sets that cannot be fixed by same-type swaps (mostly special attackers whose
# gen3 tutor-punch coverage has no special equivalent they can learn). Keyed by
# (species, exact old moves); every replacement move is validated as learnable.
HAND_SETS = {
    # Anabel's Silver-symbol ace
    ("SPECIES_ALAKAZAM", "MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_DISABLE"):
        "MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_DISABLE",
    ("SPECIES_ALAKAZAM", "MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_THUNDER_WAVE"):
        "MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_THUNDER_WAVE",
    ("SPECIES_ALAKAZAM", "MOVE_PSYCHIC, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH"):
        "MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_DAZZLING_GLEAM, MOVE_FOCUS_BLAST",
    ("SPECIES_GENGAR", "MOVE_PSYCHIC, MOVE_FIRE_PUNCH, MOVE_ICE_PUNCH, MOVE_DESTINY_BOND"):
        "MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_SLUDGE_BOMB, MOVE_DESTINY_BOND",
    ("SPECIES_GENGAR", "MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH"):
        "MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_SLUDGE_BOMB",
    ("SPECIES_GENGAR", "MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_DESTINY_BOND"):
        "MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_DESTINY_BOND",
    ("SPECIES_LUDICOLO", "MOVE_SURF, MOVE_RAIN_DANCE, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH"):
        "MOVE_SURF, MOVE_RAIN_DANCE, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM",
    ("SPECIES_LUDICOLO", "MOVE_SURF, MOVE_ICE_BEAM, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH"):
        "MOVE_SURF, MOVE_ICE_BEAM, MOVE_GIGA_DRAIN, MOVE_FOCUS_BLAST",
    ("SPECIES_AMPHAROS", "MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_FOCUS_PUNCH, MOVE_THUNDER_WAVE"):
        "MOVE_THUNDERBOLT, MOVE_DRAGON_PULSE, MOVE_FOCUS_BLAST, MOVE_THUNDER_WAVE",
    ("SPECIES_AMPHAROS", "MOVE_THUNDERBOLT, MOVE_FIRE_PUNCH, MOVE_THUNDER_WAVE, MOVE_REFLECT"):
        "MOVE_THUNDERBOLT, MOVE_DRAGON_PULSE, MOVE_THUNDER_WAVE, MOVE_REFLECT",
    ("SPECIES_GRUMPIG", "MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH"):
        "MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_POWER_GEM, MOVE_FOCUS_BLAST",
    ("SPECIES_GRANBULL", "MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_ROCK_SLIDE"):
        "MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_PLAY_ROUGH, MOVE_ROCK_SLIDE",
    ("SPECIES_QUAGSIRE", "MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_DOUBLE_EDGE, MOVE_CURSE"):
        "MOVE_EARTHQUAKE, MOVE_WATERFALL, MOVE_DOUBLE_EDGE, MOVE_CURSE",
    # Noland's Aggron: two-turn Solar Beam off base 60 SpA -> STAB Rock Slide
    ("SPECIES_AGGRON", "MOVE_THUNDERBOLT, MOVE_PROTECT, MOVE_SOLAR_BEAM, MOVE_DRAGON_CLAW"):
        "MOVE_THUNDER_PUNCH, MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_DRAGON_CLAW",

    # Second pass (Noah): converted sets with a stranded off-stat move get setup
    # or coverage instead. Keys reflect the post-first-run state of the files.
    ("SPECIES_GYARADOS", "MOVE_AQUA_TAIL, MOVE_THUNDERBOLT, MOVE_TEMPER_FLARE, MOVE_ICE_FANG"):
        "MOVE_AQUA_TAIL, MOVE_DRAGON_DANCE, MOVE_TEMPER_FLARE, MOVE_ICE_FANG",
    ("SPECIES_GYARADOS", "MOVE_AQUA_TAIL, MOVE_THUNDER, MOVE_RAIN_DANCE, MOVE_EARTHQUAKE"):
        "MOVE_AQUA_TAIL, MOVE_DRAGON_DANCE, MOVE_RAIN_DANCE, MOVE_EARTHQUAKE",
    ("SPECIES_JOLTEON", "MOVE_THUNDERBOLT, MOVE_DIG, MOVE_DOUBLE_KICK, MOVE_ROAR"):
        "MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_DOUBLE_KICK, MOVE_ROAR",
    ("SPECIES_ILLUMISE", "MOVE_SILVER_WIND, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_GIGA_DRAIN"):
        "MOVE_SILVER_WIND, MOVE_THUNDERBOLT, MOVE_ENCORE, MOVE_GIGA_DRAIN",
    ("SPECIES_TAUROS", "MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_FLAMETHROWER, MOVE_ICE_BEAM"):
        "MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ZEN_HEADBUTT, MOVE_WORK_UP",
    ("SPECIES_TAUROS", "MOVE_DOUBLE_EDGE, MOVE_ROCK_TOMB, MOVE_WILD_CHARGE, MOVE_SURF"):
        "MOVE_DOUBLE_EDGE, MOVE_ROCK_TOMB, MOVE_WILD_CHARGE, MOVE_WORK_UP",
    ("SPECIES_MUK", "MOVE_POISON_JAB, MOVE_BRICK_BREAK, MOVE_GIGA_DRAIN, MOVE_EXPLOSION"):
        "MOVE_POISON_JAB, MOVE_BRICK_BREAK, MOVE_ICE_PUNCH, MOVE_EXPLOSION",
    ("SPECIES_DUGTRIO", "MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_SLUDGE_BOMB, MOVE_FISSURE"):
        "MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_SUCKER_PUNCH, MOVE_FISSURE",
    ("SPECIES_FORRETRESS", "MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_SEED_BOMB, MOVE_ZAP_CANNON"):
        "MOVE_EXPLOSION, MOVE_EARTHQUAKE, MOVE_SEED_BOMB, MOVE_SPIKES",
    # Noah's rebalance made these two special attackers (Ninetales 71/101, Golduck 77/115)
    ("SPECIES_NINETALES", "MOVE_FIRE_BLAST, MOVE_IRON_TAIL, MOVE_CONFUSE_RAY, MOVE_ATTRACT"):
        "MOVE_FIRE_BLAST, MOVE_ENERGY_BALL, MOVE_CONFUSE_RAY, MOVE_ATTRACT",
    ("SPECIES_GOLDUCK", "MOVE_SURF, MOVE_FOCUS_BLAST, MOVE_ICE_BEAM, MOVE_AERIAL_ACE"):
        "MOVE_SURF, MOVE_FOCUS_BLAST, MOVE_ICE_BEAM, MOVE_CALM_MIND",
}


def nature_mult(nature, stat):
    up, down = NATURES.get(nature, (None, None))
    return 1.1 if stat == up else 0.9 if stat == down else 1.0


def parse_base_stats(pp):
    text = open(pp).read()
    start = text.index("const struct SpeciesInfo gSpeciesInfo[] =")
    stats = {}
    for m in re.finditer(r"\[(SPECIES_\w+)\] =\s*\{\s*\.baseHP = [^,\n]+,\s*\.baseAttack = ([^,\n]+),"
                         r"\s*\.baseDefense = [^,\n]+,\s*\.baseSpeed = [^,\n]+,\s*\.baseSpAttack = ([^,\n]+),",
                         text[start:]):
        try:
            stats[m.group(1)] = (eval_c_int(m.group(2)), eval_c_int(m.group(3)))
        except ValueError:
            pass
    return stats


class Fixer:
    def __init__(self):
        self.movedb = parse_moves(os.path.join(SCRATCH, "move_pp.i"))
        self.base = parse_base_stats(os.path.join(SCRATCH, "pokemon_pp.i"))
        self.learnables = json.load(open(os.path.join(REPO, "src/data/pokemon/all_learnables.json")))
        self.changes = []
        self.unresolved = []
        self.kept_mixed = []

    def find_replacement(self, species, mtype, want_phys, power, current_set):
        key = species.replace("SPECIES_", "")
        learn = set(self.learnables.get(key, []))
        want_cat = "DAMAGE_CATEGORY_PHYSICAL" if want_phys else "DAMAGE_CATEGORY_SPECIAL"
        for allowed_type in (mtype, COVERAGE_TWINS.get(mtype)):
            if not allowed_type:
                continue
            cands = [(abs(info["power"] - power), -info["power"], mc)
                     for mc, info in self.movedb.items()
                     if mc in learn and mc not in current_set and mc not in BAD_REPLACEMENTS
                     and info["type"] == allowed_type and info["category"] == want_cat
                     and info["power"] >= 40 and info["priority"] == 0]
            if cands:
                return min(cands)[2]
        return None

    def mirror_nature(self, nature):
        """Return the nature with atk and spa roles swapped (Modest -> Adamant)."""
        up, down = NATURES.get(nature, (None, None))
        if not up:
            return nature
        swap = {"atk": "spa", "spa": "atk"}
        target = (swap.get(up, up), swap.get(down, down))
        if target == (up, down):
            return nature
        for name, ud in NATURES.items():
            if ud == target:
                return name
        return nature

    def fix_moveset(self, tag, species, nature, ev_atk, ev_spa, moves_str):
        """Returns (fixed_moves_str, swap_offense_build)."""
        hand = HAND_SETS.get((species, ", ".join(x.strip() for x in moves_str.split(","))))
        if hand:
            learn = set(self.learnables.get(species.replace("SPECIES_", ""), []))
            for mv in hand.split(", "):
                assert mv in learn or self.movedb.get(mv, {}).get("power", 1) == 0, \
                    f"hand set move not learnable: {species} {mv}"
            self.changes.append((tag, species, "HAND SET", hand))
            return hand, False, None
        if species not in self.base:
            return moves_str, False, None
        batk, bspa = self.base[species]
        moves = [x.strip() for x in moves_str.split(",")]
        out = list(moves)
        for i, mv in enumerate(moves):
            if mv in SKIP_MOVES or mv not in self.movedb:
                continue
            info = self.movedb[mv]
            power = EFFECTIVE_POWER.get(mv, info["power"])
            if power <= 1:
                continue
            phys = info["category"] == "DAMAGE_CATEGORY_PHYSICAL"
            used_base, other_base = (batk, bspa) if phys else (bspa, batk)
            if other_base - used_base <= 25:
                continue  # the species is fine using this stat
            if used_base >= 80 and other_base - used_base <= 35:
                self.kept_mixed.append((tag, species, info["name"]))
                continue  # mixed-capable mon: keep the set (Noah's caveat)
            repl = self.find_replacement(species, info["type"], not phys, power, out)
            if repl:
                out[i] = repl
                self.changes.append((tag, species, mv, repl))
            else:
                self.unresolved.append((tag, species, mv))
        # mirror the EV/nature build when the offense now leans the other way
        # AND the species' base stats actually support the mirrored direction
        n_phys = n_spec = 0
        for m in out:
            if m in SKIP_MOVES or m not in self.movedb:
                continue
            if EFFECTIVE_POWER.get(m, self.movedb[m]["power"]) <= 1:
                continue
            if self.movedb[m]["category"] == "DAMAGE_CATEGORY_PHYSICAL":
                n_phys += 1
            elif self.movedb[m]["category"] == "DAMAGE_CATEGORY_SPECIAL":
                n_spec += 1
        swap_evs = False
        new_nature = None
        offense_phys = None
        if n_phys > n_spec and ev_spa > ev_atk and batk >= bspa - 10:
            swap_evs, offense_phys = True, True
        elif n_spec > n_phys and ev_atk > ev_spa and bspa >= batk - 10:
            swap_evs, offense_phys = True, False
        if offense_phys is not None:
            up, down = NATURES.get(nature, (None, None))
            misaligned = (up == "spa" or down == "atk") if offense_phys \
                else (up == "atk" or down == "spa")
            if misaligned:
                new_nature = self.mirror_nature(nature)
        return ", ".join(out), swap_evs, new_nature

    def fix_pool(self):
        text = open(POOL_H).read()
        def sub(m):
            fixed, swap_evs, new_nature = self.fix_moveset(m.group(1), m.group(2), m.group(10),
                                                           int(m.group(5)), int(m.group(8)), m.group(3))
            block = m.group(0).replace("{" + m.group(3) + "}", "{" + fixed + "}", 1)
            if swap_evs:
                hp, atk, dfn, spe, spa, spd = (m.group(i) for i in range(4, 10))
                old_evs = f"TRAINER_PARTY_EVS({hp}, {atk}, {dfn}, {spe}, {spa}, {spd})"
                new_evs = f"TRAINER_PARTY_EVS({hp}, {spa}, {dfn}, {spe}, {atk}, {spd})"
                block = block.replace(old_evs, new_evs, 1)
                note = "EVs atk<->spa"
                if new_nature:
                    block = block.replace("NATURE_" + m.group(10), "NATURE_" + new_nature, 1)
                    note += f", {m.group(10)}->{new_nature}"
                self.changes.append((m.group(1), m.group(2), "BUILD FIX", note))
            return block
        new = re.sub(
            r"\[(FRONTIER_MON_\w+)\] = \{\s*\.species = (SPECIES_\w+),\s*"
            r"\.moves = \{([^}]*)\},\s*\.heldItem = \w+,\s*"
            r"\.ev = TRAINER_PARTY_EVS\((\d+), (\d+), (\d+), (\d+), (\d+), (\d+)\),\s*"
            r"\.nature = NATURE_(\w+)", sub, text)
        if not DRY:
            open(POOL_H, "w").write(new)

    def fix_brains(self):
        text = open(BRAINS_C).read()
        bstart = text.index("sFrontierBrainsMons")
        bend = text.index("\n};", text.index("[FRONTIER_FACILITY_PYRAMID]", bstart))
        btext = text[bstart:bend]
        fac_sym = {"cur": "?"}
        def sub(m):
            if m.group(1):
                fac_sym["cur"] = m.group(1).replace("FRONTIER_FACILITY_", "")
                return m.group(0)
            if m.group(2):
                fac_sym["cur"] = fac_sym["cur"].split(" ")[0] + " " + m.group(2)
                return m.group(0)
            fixed, swap_evs, new_nature = self.fix_moveset("BRAIN " + fac_sym["cur"], m.group(3), m.group(4),
                                                           int(m.group(6)), int(m.group(9)), m.group(11))
            block = m.group(0).replace("{" + m.group(11) + "}", "{" + fixed + "}", 1)
            if swap_evs:
                hp, atk, dfn, spe, spa, spd = (m.group(i) for i in range(5, 11))
                old_evs = f"{{{hp}, {atk}, {dfn}, {spe}, {spa}, {spd}}}"
                new_evs = f"{{{hp}, {spa}, {dfn}, {spe}, {atk}, {spd}}}"
                block = block.replace(old_evs, new_evs, 1)
                note = "EVs atk<->spa"
                if new_nature:
                    block = block.replace("NATURE_" + m.group(4), "NATURE_" + new_nature, 1)
                    note += f", {m.group(4)}->{new_nature}"
                self.changes.append(("BRAIN " + fac_sym["cur"], m.group(3), "BUILD FIX", note))
            return block
        new_btext = re.sub(
            r"\[(FRONTIER_FACILITY_\w+)\]|// (Silver|Gold) Symbol|"
            r"\.species = (SPECIES_\w+),\s*\.heldItem = \w+,\s*\.fixedIV = \w+,\s*"
            r"\.nature = NATURE_(\w+),\s*\.evs = \{(\d+), (\d+), (\d+), (\d+), (\d+), (\d+)\},\s*"
            r"\.moves = \{([^}]*)\}", sub, btext)
        if not DRY:
            open(BRAINS_C, "w").write(text[:bstart] + new_btext + text[bend:])


def main():
    f = Fixer()
    f.fix_pool()
    f.fix_brains()
    for tag, sp, old, new in f.changes:
        print(f"{tag:<28} {sp.replace('SPECIES_',''):<12} {old.replace('MOVE_',''):<18} -> {new.replace('MOVE_','')}")
    print(f"\n{len(f.changes)} swaps, {len(f.kept_mixed)} kept as logical mixed sets, "
          f"{len(f.unresolved)} unresolved{' (dry run)' if DRY else ''}")
    for tag, sp, mv in f.unresolved:
        print(f"  UNRESOLVED: {tag} {sp} {mv}")


if __name__ == "__main__":
    main()
