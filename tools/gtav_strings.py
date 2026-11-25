#!/usr/bin/env python3
"""Carry GTA V source names into GTA VI through the strings the code kept.

GTA V's source tree is the naming reference, but it has no addresses, and GTA VI
has no symbols. What both share is text: assert messages, log lines, asset paths
and format strings survive compilation and are stored as bytes in the
executable. If a string literal that sits inside `CVehicle::SetModelIndex` in
`MiscRef/GTAVSRC` also appears in `game_scarlett_master.exe`, the function that
loads it is almost certainly the GTA VI version of that same function.

This tool writes the literal-to-function table, then finds each literal in the
executable and records its RVA. A Ghidra script turns those RVAs into
cross-references and renames the containing functions.

    python3 gta6decomp/tools/gtav_strings.py
    python3 gta6decomp/tools/gtav_strings.py --min-length 16 --out gta6decomp/matches
"""

import argparse
import os
import re
import sys
from collections import Counter

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
sys.path.insert(0, HERE)
from pe import PE  # noqa: E402

DEFAULT_SRC = os.path.join(ROOT, "MiscRef", "GTAVSRC", "src", "dev_ng")
DEFAULT_EXE = os.path.join(ROOT, "6RE", "DUMP", "game_scarlett_master.exe")

# A qualified C++ definition/reference: rage::fwArchetype::Load, CVehicle::Init
QUALIFIED = re.compile(r"\b((?:[A-Za-z_]\w*::)+~?[A-Za-z_]\w*)\s*\(")
LITERAL = re.compile(r'"((?:[^"\\\n]|\\.){4,400})"')
SKIP_DIRS = {"3rdparty", "stlport", "scaleform", "contrib"}


def unescape(text):
    """Only the escapes that change bytes matter for a match."""
    out = []
    i = 0
    while i < len(text):
        c = text[i]
        if c != "\\" or i + 1 >= len(text):
            out.append(c)
            i += 1
            continue
        n = text[i + 1]
        simple = {"n": "\n", "t": "\t", "r": "\r", "\\": "\\", '"': '"',
                  "0": "\0", "'": "'", "a": "\a", "b": "\b", "f": "\f", "v": "\v"}
        if n in simple:
            out.append(simple[n])
            i += 2
        elif n == "x" and i + 3 < len(text):
            try:
                out.append(chr(int(text[i + 2:i + 4], 16)))
                i += 4
            except ValueError:
                out.append(n)
                i += 2
        else:
            out.append(n)
            i += 2
    return "".join(out)


def scan_source(src):
    """Yield (literal, qualified_function, relative_file)."""
    literal_owner = {}
    files = 0
    for base, dirs, names in os.walk(src):
        dirs[:] = [d for d in dirs if d.lower() not in SKIP_DIRS and not d.startswith(".")]
        for name in names:
            if not name.lower().endswith((".cpp", ".h", ".hpp", ".inl")):
                continue
            path = os.path.join(base, name)
            try:
                with open(path, encoding="utf-8", errors="replace") as handle:
                    text = handle.read()
            except OSError:
                continue
            files += 1
            current = ""
            for m in LITERAL.finditer(text):
                window = text[max(0, m.start() - 4000):m.start()]
                owner = None
                for q in QUALIFIED.finditer(window):
                    owner = q.group(1)
                if owner:
                    current = owner
                if not current:
                    continue
                raw = unescape(m.group(1))
                if len(raw) < 8:
                    continue
                literal_owner.setdefault(raw, (current, os.path.relpath(path, src)))
    return literal_owner, files


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--src", default=DEFAULT_SRC)
    ap.add_argument("--exe", default=DEFAULT_EXE)
    ap.add_argument("--out", default=os.path.join(ROOT, "gta6decomp", "matches"))
    ap.add_argument("--min-length", type=int, default=12)
    args = ap.parse_args()

    owners, files = scan_source(args.src)
    print("source files scanned: %d  unique literals: %d" % (files, len(owners)))
    owners = {k: v for k, v in owners.items() if len(k) >= args.min_length}
    print("literals >= %d: %d" % (args.min_length, len(owners)))

    pe = PE(args.exe)
    found = {}
    # `.text` carries a large string pool in this build, so scan every section.
    for rva, text in pe.strings(min_length=args.min_length):
        found.setdefault(text, rva)
    print("executable strings >= %d: %d" % (args.min_length, len(found)))

    hits = []
    for literal, (func, rel) in owners.items():
        if literal in found:
            hits.append((found[literal], literal, func, rel))
    hits.sort()
    print("MATCH|literals_in_exe=%d|functions=%d" % (
        len(hits), len({h[2] for h in hits})))

    by_func = Counter(h[2] for h in hits)
    print("top owners:", by_func.most_common(8))

    os.makedirs(args.out, exist_ok=True)
    path = os.path.join(args.out, "gtav_source_hits.tsv")
    with open(path, "w", encoding="utf-8", newline="\n", errors="replace") as handle:
        handle.write("rva\tliteral\tgtav_function\tgtav_file\n")
        for rva, literal, func, rel in hits:
            handle.write("%d\t%s\t%s\t%s\n" % (
                rva, literal.replace("\\", "\\\\").replace("\t", "\\t")
                .replace("\n", "\\n").replace("\r", "\\r"),
                func, rel))
    print("wrote", path)


if __name__ == "__main__":
    main()
