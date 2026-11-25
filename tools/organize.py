#!/usr/bin/env python3
"""Place unnamed bodies by the directories of the functions they call.

The exporter can only classify a body from its own strings and class. That leaves
every leaf and small helper in the fallback bucket (`game/Core`), even when it is
glue for a subsystem whose other functions are known. This pass reads the call
list from each body header, votes with the directories those callees are already
filed under, and moves the body when the vote is decisive.

Only named/evidence-placed bodies vote, only an unnamed body carrying no evidence
of its own moves, and a move needs at least two agreeing callees and 60% of the
vote. Everything else stays where the exporter put it.

    python3 gta6decomp/tools/organize.py [--dry-run]
"""

import os
import re
import shutil
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
OUT = os.path.join(ROOT, "gta6decomp")
SRC = os.path.join(OUT, "src")
CALLEES = re.compile(r"^// Callees:\s*(.*)$")
ADDR = re.compile(r"^// Address:\s*(\S+)")
NAME = re.compile(r"^// Name:\s*(.+)$")


def read_header(path):
    address = name = None
    callees = []
    with open(path, encoding="utf-8", errors="replace") as handle:
        for i, line in enumerate(handle):
            if i > 20:
                break
            m = ADDR.match(line)
            if m:
                address = m.group(1)
            m = NAME.match(line)
            if m:
                name = m.group(1).strip()
            m = CALLEES.match(line)
            if m:
                callees = [c.strip() for c in m.group(1).split(",") if c.strip()]
    return address, name, callees


def dir_of(path):
    # src/sub_story/game/audio/Fn/Fn.cpp -> sub_story/game/audio
    rel = os.path.relpath(os.path.dirname(os.path.dirname(path)), SRC)
    return rel.replace(os.sep, "/")


# Where an objective's bodies belong, in GTAVSRC's own directory vocabulary.
# Objective 1 is the archive layer: GTA V keeps it in rage/base/src/file
# (packfile.cpp, device*.cpp), so that is the directory the VI bodies join.
OBJECTIVE_DIRS = {
    "rpf": "sub_story/rage/base/file",
}

# Two evidence sources for placement, in the same table shape:
#   objective_anchors.tsv -- literal/magic hits from tools/anchors.py
#   objective_bodies.tsv  -- bodies found by walking the call graph by hand
ANCHOR_FILES = [
    os.path.join(os.path.dirname(SRC), "matches", "objective_anchors.tsv"),
    os.path.join(os.path.dirname(SRC), "matches", "objective_bodies.tsv"),
]


IMAGE_BASE = 0x140000000


def to_rva(address):
    """Body headers carry VAs (`140fc21c0`); anchor rows carry RVAs."""
    try:
        value = int(address, 16)
    except (TypeError, ValueError):
        return None
    if value >= IMAGE_BASE:
        value -= IMAGE_BASE
    return "%08x" % value


def anchor_placements():
    """{address_hex: directory} from every objective evidence table."""
    place = {}
    for path in ANCHOR_FILES:
        if not os.path.exists(path):
            continue
        with open(path, encoding="utf-8", errors="replace") as handle:
            header = handle.readline().rstrip("\n").split("\t")
            try:
                io = header.index("objective")
                iv = header.index("func_rva")
            except ValueError:
                continue
            for line in handle:
                cells = line.rstrip("\n").split("\t")
                if len(cells) <= max(io, iv) or not cells[iv]:
                    continue
                target = OBJECTIVE_DIRS.get(cells[io])
                if target:
                    place[cells[iv].lower()] = target
    return place


def main():
    dry = "--dry-run" in sys.argv
    bodies = {}
    for base, _dirs, files in os.walk(SRC):
        for entry in files:
            if not entry.endswith(".cpp"):
                continue
            path = os.path.join(base, entry)
            address, name, callees = read_header(path)
            if not address:
                continue
            bodies[address] = {
                "path": path,
                "name": name or "",
                "dir": dir_of(path),
                "callees": callees,
            }

    def anonymous(body):
        return body["name"].startswith(("FUN_", "sub_"))

    # Pass 0: objective anchors beat callee votes. A function we can prove
    # belongs to a subsystem (RPF9 magic, say) is filed by that proof.
    placements = anchor_placements()
    moved = 0
    for address, body in list(bodies.items()):
        target_dir = placements.get(to_rva(address))
        if not target_dir or body["dir"] == target_dir:
            continue
        stem = os.path.basename(os.path.dirname(body["path"]))
        target = os.path.join(SRC, target_dir, stem, stem + ".cpp")
        if dry:
            print("anchor: would move", body["path"], "->", target)
        else:
            os.makedirs(os.path.dirname(target), exist_ok=True)
            if os.path.exists(target):
                continue
            shutil.move(body["path"], target)
            body["path"] = target
            body["dir"] = target_dir
            try:
                os.rmdir(os.path.dirname(os.path.join(SRC, body["dir"], stem)))
            except OSError:
                pass
        moved += 1
    print("anchors: placed %d" % moved)

    for _pass in range(4):
        moved = 0
        for body in bodies.values():
            if not anonymous(body):
                continue
            votes = {}
            for callee in body["callees"]:
                other = bodies.get(callee)
                if other and other["dir"].count("/") > 0 and not anonymous(other):
                    votes[other["dir"]] = votes.get(other["dir"], 0) + 1
                elif other and other["dir"] not in ("sub_story/game/Core",):
                    votes[other["dir"]] = votes.get(other["dir"], 0) + 0.5
            if not votes:
                continue
            total = sum(votes.values())
            best, count = max(votes.items(), key=lambda kv: kv[1])
            if count < 2 or count / total < 0.6 or best == body["dir"]:
                continue
            stem = os.path.basename(os.path.dirname(body["path"]))
            target = os.path.join(SRC, best, stem, stem + ".cpp")
            if dry:
                print("would move", body["path"], "->", target)
            else:
                os.makedirs(os.path.dirname(target), exist_ok=True)
                if os.path.exists(target):
                    continue
                shutil.move(body["path"], target)
                body["path"] = target
                body["dir"] = best
            moved += 1
        print("pass %d: moved %d" % (_pass + 1, moved))
        if moved == 0:
            break


if __name__ == "__main__":
    main()
