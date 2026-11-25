#!/usr/bin/env python3
"""Recover the original source/content layout from the executable's own strings.

Release builds do not keep ``__FILE__`` paths (MSVC only emits them for assert
messages, and this title ships without them), but they do keep the linker path
and the content namespaces:

    X:/americas/src/sub_story/game/vs_project/.../game_scarlett_master.pdb
    common:/data/ai/conversations
    platform:/data/ui/loose/map/data/gps
    persistent_assets/fps_counter

The first one gives the project root (``src/sub_story/game``), the rest give the
area names the tree is split into. This writes them out so the export layout and
the docs can be checked against the image rather than guessed.

    python3 gta6decomp/tools/exe_paths.py
"""

import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
OUT = os.path.join(ROOT, "gta6decomp")
EXE = os.path.join(ROOT, "6RE", "DUMP", "game_scarlett_master.exe")
STRINGS = os.path.join(ROOT, "6RE", "DUMP", "strings2.txt")

NS = re.compile(
    r"^(?:common|platform|assets|levels|update|patch|dlc)[a-z]*:/(?:[\w.\-]+/)*[\w.\-]+$", re.I
)
DRIVE = re.compile(r"^[A-Za-z]:[\\/].+")
REL = re.compile(r"^(?:[\w.\-]+/)+[\w.\-]+\.(?:cpp|h|hpp|inl|c|cc|pdb|lib|obj|sps|ytd|yft)$", re.I)

# first content segment -> source directory it belongs to
AREAS = {
    "ai": "game/ai",
    "animation": "game/animation",
    "audio": "game/audio",
    "camera": "game/camera",
    "frontend": "game/frontend",
    "ui": "game/frontend/ui",
    "network": "game/network",
    "pathserver": "game/pathserver",
    "peds": "game/Peds",
    "physics": "game/physics",
    "pickups": "game/pickups",
    "renderer": "game/renderer",
    "scene": "game/scene",
    "script": "game/script",
    "shaders": "game/shaders",
    "streaming": "game/streaming",
    "task": "game/task",
    "text": "game/text",
    "timecycle": "game/timecycle",
    "vehicles": "game/Vehicles",
    "vfx": "game/vfx",
    "weapons": "game/weapons",
}


def read_strings():
    seen = set()
    for path, minlen in ((STRINGS, 4), (EXE, 6)):
        if not os.path.isfile(path):
            continue
        if path.lower().endswith(".exe"):
            sys.path.insert(0, HERE)
            from pe import PE

            for _rva, text in PE(path).strings(min_length=minlen):
                seen.add(text)
        else:
            with open(path, encoding="utf-8", errors="replace") as handle:
                for line in handle:
                    seen.add(line.rstrip("\n"))
    return seen


def kind_of(text):
    if text.startswith("X:/americas/src/sub_story") or "/americas/src/sub_story" in text:
        return "build-root"
    if NS.match(text):
        return "content-path"
    if DRIVE.match(text):
        return "build-path"
    if REL.match(text):
        return "file"
    return None


def area_of(text):
    body = re.sub(r"^[A-Za-z]+:/", "", text).strip("/")
    if body.startswith("data/"):
        body = body[5:]
    first = body.split("/")[0].lower()
    return AREAS.get(first, "")


def main():
    rows = []
    for text in sorted(read_strings()):
        if len(text) > 200:
            continue
        kind = kind_of(text)
        if not kind:
            continue
        rows.append((kind, text, area_of(text)))
    rows.sort(key=lambda r: (r[0], r[1]))

    names = os.path.join(OUT, "names")
    os.makedirs(names, exist_ok=True)
    target = os.path.join(names, "exe_paths.tsv")
    with open(target, "w", encoding="utf-8", newline="\n") as handle:
        handle.write("kind\tpath\tarea\n")
        for kind, text, area in rows:
            handle.write("%s\t%s\t%s\n" % (kind, text, area))

    by_kind = {}
    by_area = {}
    for kind, _text, area in rows:
        by_kind[kind] = by_kind.get(kind, 0) + 1
        if area:
            by_area[area] = by_area.get(area, 0) + 1
    print("paths written:", len(rows), "->", target)
    for kind, n in sorted(by_kind.items()):
        print("  %-13s %d" % (kind, n))
    for area, n in sorted(by_area.items(), key=lambda kv: -kv[1]):
        print("  %-20s %d paths" % (area, n))


if __name__ == "__main__":
    main()
