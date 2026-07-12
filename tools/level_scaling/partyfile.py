"""Parser for src/data/trainers.party (Showdown-style trainer definitions).

Keeps raw lines so the file can be rewritten with minimal diffs.
"""
import re

GENDERS = {"M", "F"}


def normalize_name(s):
    return re.sub(r"[^a-z0-9]", "", s.lower())


class Mon:
    __slots__ = ("species_line", "level_line", "species", "nickname", "level",
                 "moves", "move_lines")

    def __init__(self):
        self.species_line = None   # index into file lines
        self.level_line = None
        self.species = None        # display name string as written
        self.nickname = None
        self.level = None
        self.moves = []            # move name strings
        self.move_lines = []       # line indices of "- Move" lines


class Trainer:
    __slots__ = ("tid", "start_line", "end_line", "mons")

    def __init__(self, tid, start_line):
        self.tid = tid
        self.start_line = start_line
        self.end_line = None
        self.mons = []


def parse_species_from_line(line):
    """Return (nickname_or_None, species, rest) from a mon's first line."""
    s = line.split("@")[0].strip()
    # strip trailing gender marker
    m = re.match(r"^(.*)\(([MF])\)\s*$", s)
    if m:
        s = m.group(1).strip()
    # nickname (Species)
    m = re.match(r"^(.*)\((.+)\)\s*$", s)
    if m:
        return m.group(1).strip(), m.group(2).strip()
    return None, s


def parse_party_file(path):
    lines = open(path).read().split("\n")
    trainers = []
    cur = None
    cur_mon = None
    in_header = False

    for i, line in enumerate(lines):
        hm = re.match(r"^=== (TRAINER_\w+) ===", line)
        if hm:
            if cur:
                cur.end_line = i - 1
            cur = Trainer(hm.group(1), i)
            trainers.append(cur)
            cur_mon = None
            in_header = True
            continue
        if cur is None:
            continue
        stripped = line.strip()
        if not stripped:
            cur_mon = None
            continue
        if stripped.startswith("/*") or stripped.startswith("*"):
            continue
        # header key: value lines
        if in_header and re.match(r"^[A-Za-z ]+:", stripped) and cur_mon is None and not stripped.startswith("Level:"):
            continue
        if cur_mon is None and not stripped.startswith("-") and ":" not in stripped.split("(")[0].split("@")[0]:
            # new mon block
            in_header = False
            cur_mon = Mon()
            cur_mon.species_line = i
            nick, spec = parse_species_from_line(stripped)
            cur_mon.nickname = nick
            cur_mon.species = spec
            cur.mons.append(cur_mon)
            continue
        if cur_mon is not None:
            if stripped.startswith("Level:"):
                cur_mon.level = int(stripped.split(":")[1].strip())
                cur_mon.level_line = i
            elif stripped.startswith("- "):
                cur_mon.moves.append(stripped[2:].strip())
                cur_mon.move_lines.append(i)
    if cur:
        cur.end_line = len(lines) - 1
    return lines, trainers
