#!/usr/bin/env python3
"""Simulate player levels through the Hoenn main story and compute scaled trainer levels.

Models the game's actual EXP rules for this repo's config:
  - B_SPLIT_EXP >= GEN_6: participant gets 100% of calculatedExp,
    every other party member gets 50% each (Gen6 Exp.All, always on).
  - B_SCALED_EXP (Gen7): per-recipient level scaling ((2L+10)/(L+Lp+10))^2.5 then +1.
  - B_TRAINER_EXP_MULTIPLIER = GEN_LATEST: no 1.5x for trainer battles.
  - calculatedExp = yield * level / 5.
Player team: 6 mons (growing from 1 early), medium-slow growth, lead rotates per battle.
Wild encounters / catch EXP / rare candies are ignored (thorough-player baseline).

Outputs scratchpad/scaled_levels.json + a checkpoint report on stdout.
"""
import json
import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
from partyfile import parse_party_file, normalize_name  # noqa: E402

SCRATCH = sys.argv[1] if len(sys.argv) > 1 else "."
REPO = os.path.join(HERE, "..", "..")

EXCLUDE_ALWAYS = {"TRAINER_PETER", "TRAINER_STEVEN"}  # never rescaled
RIVAL_RE = re.compile(r"^TRAINER_(MAY|BRENDAN)_")
PLAYER_GROWTH = "GROWTH_MEDIUM_SLOW"
MAX_LEVEL = 100
ITERATIONS = 6

# (segment name, [maps], checkpoint trainer, party size, target offset, checkpoint scaled?)
SEGMENTS = [
    ("Rival 1 (Route 103)",   [], "TRAINER_MAY_ROUTE_103_TORCHIC", 1, 0, True),
    ("Roxanne",               ["Route102", "Route104", "PetalburgWoods", "RustboroCity_Gym"],
                              "TRAINER_ROXANNE_1", 3, 0, True),
    ("Rival 2 (Rustboro)",    ["Route116", "RusturfTunnel"], "TRAINER_MAY_RUSTBORO_TORCHIC", 4, 0, True),
    ("Brawly",                ["Route106", "DewfordTown_Gym"], "TRAINER_BRAWLY_1", 4, 0, True),
    ("Rival 3 (Route 110)",   ["Route109", "Route109_SeashoreHouse", "SlateportCity_OceanicMuseum_2F", "Route110"],
                              "TRAINER_MAY_ROUTE_110_TORCHIC", 5, 0, True),
    ("Wattson",               ["MauvilleCity", "MauvilleCity_Gym"], "TRAINER_WATTSON_1", 5, 0, True),
    ("Maxie (Mt. Chimney)",   ["Route117", "Route112", "Route113", "Route114", "MtChimney"],
                              "TRAINER_MAXIE_MT_CHIMNEY", 6, 0, True),
    ("Flannery",              ["JaggedPass", "LavaridgeTown_Gym_1F"], "TRAINER_FLANNERY_1", 6, 0, True),
    ("Norman",                ["Route115", "PetalburgCity_Gym"], "TRAINER_NORMAN_1", 6, 0, True),
    ("Rival 4 (Route 119)",   ["Route118", "Route119", "Route119_WeatherInstitute_1F", "Route119_WeatherInstitute_2F"],
                              "TRAINER_MAY_ROUTE_119_TORCHIC", 6, 0, True),
    ("Winona",                ["Route120", "FortreeCity_Gym"], "TRAINER_WINONA_1", 6, 0, True),
    ("Rival 5 (Lilycove)",    ["Route121"], "TRAINER_MAY_LILYCOVE_TORCHIC", 6, 0, True),
    ("Mt. Pyre",              ["MtPyre_2F", "MtPyre_3F", "MtPyre_4F", "MtPyre_5F", "MtPyre_6F", "MtPyre_Summit"],
                              "TRAINER_GRUNT_MT_PYRE_4", 6, 0, True),
    ("Maxie (Magma Hideout)", ["MagmaHideout_1F", "MagmaHideout_2F_1R", "MagmaHideout_2F_2R",
                               "MagmaHideout_3F_1R", "MagmaHideout_3F_2R", "MagmaHideout_4F"],
                              "TRAINER_MAXIE_MAGMA_HIDEOUT", 6, 0, True),
    ("Matt (Aqua Hideout)",   ["AquaHideout_1F", "AquaHideout_B1F", "AquaHideout_B2F"],
                              "TRAINER_MATT", 6, 0, True),
    ("Tate & Liza",           ["MossdeepCity_Gym"], "TRAINER_TATE_AND_LIZA_1", 6, 0, True),
    ("Space Center (multi)",  ["MossdeepCity_SpaceCenter_1F", "MossdeepCity_SpaceCenter_2F",
                               "@TRAINER_TABITHA_MOSSDEEP"],
                              "TRAINER_MAXIE_MOSSDEEP", 6, 0, True),
    ("Archie",                ["SeafloorCavern_Room1", "SeafloorCavern_Room3", "SeafloorCavern_Room4"],
                              "TRAINER_ARCHIE", 6, 0, True),
    ("Juan",                  ["SootopolisCity_Gym_B1F", "SootopolisCity_Gym_1F"], "TRAINER_JUAN_1", 6, 0, True),
    ("Wally (Victory Road)",  ["Route128", "VictoryRoad_1F", "VictoryRoad_B1F", "VictoryRoad_B2F"],
                              "TRAINER_WALLY_VR_1", 6, 0, True),
    ("Peter (Ever Grande)",   [], "TRAINER_PETER", 6, 0, False),
    ("Sidney",                [], "TRAINER_SIDNEY", 6, 1, True),
    ("Phoebe",                [], "TRAINER_PHOEBE", 6, 1, True),
    ("Glacia",                [], "TRAINER_GLACIA", 6, 1, True),
    ("Drake",                 [], "TRAINER_DRAKE", 6, 1, True),
    ("Wallace",               [], "TRAINER_WALLACE", 6, 3, True),
]

# trainers listed on sim maps that must not be simmed (rematch clones on same map)
SIM_SKIP = {"TRAINER_WALLY_VR_2", "TRAINER_WALLY_VR_3", "TRAINER_WALLY_VR_4", "TRAINER_WALLY_VR_5"}


def load_data():
    species = json.load(open(os.path.join(SCRATCH, "species_data.json")))
    maps = json.load(open(os.path.join(SCRATCH, "map_trainers.json")))
    lines, trainers = parse_party_file(os.path.join(REPO, "src/data/trainers.party"))
    return species, maps, {t.tid: t for t in trainers}


def build_name_map(species):
    by_name = {}
    for const, info in species["species"].items():
        by_name.setdefault(normalize_name(info["name"]), const)
    return by_name


def evolve(species_data, const, level):
    """Follow plain EVO_LEVEL chains as far as `level` allows."""
    seen = set()
    while const not in seen:
        seen.add(const)
        info = species_data["species"].get(const)
        if not info:
            break
        nxt = None
        for method, param, target in info["evolutions"]:
            # param 0 encodes condition-based level-up evos (friendship etc.) — skip those
            if method == "EVO_LEVEL" and param.isdigit() and 2 <= int(param) <= level:
                nxt = target
                break
        if not nxt:
            break
        const = nxt
    return const


class PlayerSim:
    def __init__(self, exp_table):
        self.exp_table = exp_table
        self.exp = [0] * 6
        self.set_min_level(0, 5)
        self.battle_count = 0

    def level_of(self, i):
        e = self.exp[i]
        lo = 1
        for lvl in range(1, MAX_LEVEL + 1):
            if self.exp_table[lvl] <= e:
                lo = lvl
            else:
                break
        return lo

    def set_min_level(self, i, level):
        if self.exp[i] < self.exp_table[level]:
            self.exp[i] = self.exp_table[level]

    def grow_party(self, size, avg_hint):
        """New catches join at roughly 60% of current average level."""
        for i in range(size):
            joining = max(3, int(avg_hint * 0.6))
            self.set_min_level(i, joining if self.exp[i] == 0 else self.level_of(i))

    def fight(self, enemy_mons, party_size, species_data):
        lead = self.battle_count % party_size
        self.battle_count += 1
        for (yield_, lvl) in enemy_mons:
            base = yield_ * lvl // 5
            for r in range(party_size):
                amount = base if r == lead else base // 2
                if amount == 0:
                    amount = 1
                rl = self.level_of(r)
                amount = int(amount * ((2 * lvl + 10) / (lvl + rl + 10)) ** 2.5) + 1
                self.exp[r] = min(self.exp[r] + amount, self.exp_table[MAX_LEVEL])

    def levels(self, party_size):
        return [self.level_of(i) for i in range(party_size)]


def curve_from_points(points):
    """points: list of (old, new) -> monotonic piecewise-linear mapping fn."""
    pts = {}
    for old, new in points:
        pts.setdefault(old, []).append(new)
    merged = sorted((old, sum(v) / len(v)) for old, v in pts.items())
    # enforce monotonic targets
    fixed = []
    prev = 0
    for old, new in merged:
        new = max(new, prev)
        fixed.append((old, new))
        prev = new
    def f(x):
        if not fixed:
            return x
        (o0, n0) = fixed[0]
        if x <= o0:
            val = x * (n0 / o0)
        elif x >= fixed[-1][0]:
            if len(fixed) >= 2:
                (oa, na), (ob, nb) = fixed[-2], fixed[-1]
                slope = (nb - na) / (ob - oa) if ob > oa else 1.0
            else:
                slope = 1.0
            val = fixed[-1][1] + (x - fixed[-1][0]) * slope
        else:
            for k in range(len(fixed) - 1):
                (oa, na), (ob, nb) = fixed[k], fixed[k + 1]
                if oa <= x <= ob:
                    t = (x - oa) / (ob - oa)
                    val = na + t * (nb - na)
                    break
        return max(2, min(MAX_LEVEL, int(val + 0.5)))
    return f, fixed


def main():
    species_data, maps, trainers = load_data()
    exp_table = species_data["exp_tables"][PLAYER_GROWTH]
    name_map = build_name_map(species_data)

    unknown = set()

    def mon_const(mon):
        c = name_map.get(normalize_name(mon.species))
        if not c:
            unknown.add(mon.species)
        return c

    # --- build sim battle list per segment ---
    def segment_battles(seg_maps, checkpoint):
        ids = []
        for m in seg_maps:
            if m.startswith("@"):
                ids.append(m[1:])
                continue
            for t in maps[m]["trainers"]:
                if t == checkpoint or RIVAL_RE.match(t) or t in SIM_SKIP:
                    continue
                if t not in trainers:
                    continue
                ids.append(t)
        ids.append(checkpoint)
        return ids

    # trainer id -> per-mon (orig species const, orig level)
    orig = {}
    for tid, t in trainers.items():
        orig[tid] = [(mon_const(mn), mn.level) for mn in t.mons if mn.level]

    # ace level per checkpoint (from original file)
    def ace(tid):
        return max(l for (_c, l) in orig[tid])

    cp_old = {}
    for (_n, _m, cp, _s, _o, scaled) in SEGMENTS:
        if cp not in trainers:
            sys.exit(f"checkpoint {cp} not found in trainers.party")
        cp_old[cp] = ace(cp)

    def rival_siblings(cp):
        m = re.match(r"^TRAINER_(MAY|BRENDAN)_(.*)_(TREECKO|TORCHIC|MUDKIP)$", cp)
        if not m:
            return []
        return [f"TRAINER_{g}_{m.group(2)}_{s}" for g in ("MAY", "BRENDAN")
                for s in ("TREECKO", "TORCHIC", "MUDKIP")]

    # static segment membership: trainer -> checkpoint whose target scales it
    seg_assign = {}
    for (_n, seg_maps, cp, _s, _o, scaled) in SEGMENTS:
        if not scaled:
            continue
        members = [cp] + rival_siblings(cp)
        for m in seg_maps:
            if m.startswith("@"):
                members.append(m[1:])
                continue
            members.extend(t for t in maps[m]["trainers"] if t not in SIM_SKIP)
        for t in members:
            if t in trainers and t not in EXCLUDE_ALWAYS:
                seg_assign.setdefault(t, cp)

    def scaled_level(tid, olvl, targets):
        """Mode A: segment-ratio scaling for on-path trainers."""
        cp = seg_assign.get(tid)
        if not cp or cp not in targets:
            return olvl
        ratio = targets[cp] / cp_old[cp]
        return max(olvl, min(MAX_LEVEL, int(olvl * ratio + 0.5)))

    # --- iterate to fixed point ---
    curve = None
    targets = {}
    history = []
    for it in range(ITERATIONS):
        sim = PlayerSim(exp_table)
        report = []
        for (name, seg_maps, cp, size, offset, scaled) in SEGMENTS:
            sim.grow_party(size, max(5, sim.level_of(0)))
            battles = segment_battles(seg_maps, cp)
            for tid in battles[:-1]:
                enemy = []
                for (const, olvl) in orig[tid]:
                    lvl = scaled_level(tid, olvl, targets) if it > 0 else olvl
                    c2 = evolve(species_data, const, lvl) if (const and lvl != olvl) else const
                    y = species_data["species"][c2]["expYield"] if c2 else 60
                    enemy.append((y, lvl))
                sim.fight(enemy, size, species_data)
            levels = sim.levels(size)
            avg = sum(levels) / len(levels)
            if scaled:
                # "up only": never scale a checkpoint below its current level
                targets[cp] = max(cp_old[cp], min(MAX_LEVEL, int(avg + 0.5) + offset))
            report.append((name, cp, round(avg, 1), max(levels), targets.get(cp)))
            # fight the checkpoint itself
            enemy = []
            for (const, olvl) in orig[cp]:
                if cp in EXCLUDE_ALWAYS or not scaled or it == 0:
                    lvl, c2 = olvl, const
                else:
                    lvl = scaled_level(cp, olvl, targets)
                    c2 = evolve(species_data, const, lvl) if const else const
                y = species_data["species"][c2]["expYield"] if c2 else 60
                enemy.append((y, lvl))
            sim.fight(enemy, size, species_data)
        # global fallback curve for optional/rematch content, built only from
        # checkpoints whose old ace rises monotonically along the progression
        mono_pts = []
        running_max = 0
        for (_n, _m, cp, _s, _o, sc) in SEGMENTS:
            if sc and cp_old[cp] > running_max:
                mono_pts.append((cp_old[cp], targets[cp]))
                running_max = cp_old[cp]
        curve, fixed_pts = curve_from_points(mono_pts)
        history.append([r[2] for r in report])
        if it >= 1 and all(abs(a - b) < 0.5 for a, b in zip(history[-1], history[-2])):
            break

    # --- final report ---
    print(f"converged after {it + 1} iterations")
    print(f"{'checkpoint':<24} {'old ace':>7} {'player avg':>10} {'player max':>10} {'new ace':>8}")
    for (name, cp, avg, mx, tgt) in report:
        print(f"{name:<24} {cp_old[cp]:>7} {avg:>10} {mx:>10} {str(tgt) if tgt else '(fixed)':>8}")

    # --- compute new levels for every trainer in scope ---
    hoenn_trainers = set()
    for m, info in maps.items():
        hoenn_trainers.update(t for t in info["trainers"] if t in trainers)
    # rematch families: _2.._9 siblings of scaled _1 trainers
    for tid in list(hoenn_trainers):
        m = re.match(r"^(.*)_1$", tid)
        if m:
            for n in range(2, 10):
                sib = f"{m.group(1)}_{n}"
                if sib in trainers:
                    hoenn_trainers.add(sib)
    hoenn_trainers.add("TRAINER_TABITHA_MOSSDEEP")
    hoenn_trainers.add("TRAINER_MAXIE_MOSSDEEP")
    hoenn_trainers -= EXCLUDE_ALWAYS

    out = {}
    for tid in sorted(hoenn_trainers):
        mons = []
        changed = False
        mode = "onpath" if tid in seg_assign else "optional"
        for i, (const, olvl) in enumerate(orig[tid]):
            if mode == "onpath":
                nlvl = scaled_level(tid, olvl, targets)
            else:
                nlvl = max(olvl, curve(olvl))  # up only
            nconst = evolve(species_data, const, nlvl) if const else None
            mons.append({
                "idx": i, "old_level": olvl, "new_level": nlvl,
                "old_species": const, "new_species": nconst if nconst != const else None,
            })
            if nlvl != olvl or (nconst and nconst != const):
                changed = True
        if changed:
            out[tid] = {"mode": mode, "mons": mons}

    json.dump({"trainers": out,
               "curve_points": fixed_pts,
               "checkpoints": [(n, cp, a, m, t) for (n, cp, a, m, t) in report]},
              open(os.path.join(SCRATCH, "scaled_levels.json"), "w"), indent=1)
    print(f"\n{len(out)} trainers to rescale; {len(unknown)} unknown species: {sorted(unknown)[:10]}")


if __name__ == "__main__":
    main()
