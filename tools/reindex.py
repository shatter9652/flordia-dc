#!/usr/bin/env python3
"""Rebuild index.tsv from the exported tree, dropping rows whose file is gone.

The exporter appends to the index, so successive runs (and the older flat
layout) leave stale rows. The provenance header in every .cpp is the source of
truth; this reads it back.

    python3 gta6decomp/tools/reindex.py
"""

import os
import re

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
OUT = os.path.join(ROOT, "gta6decomp")

ADDR = re.compile(r"^// Address:\s*(\S+)\s+size:\s*(\d+)")
NAME = re.compile(r"^// Name:\s*(.+)$")
SUB = re.compile(r"^// Subsystem:\s*(.+)$")
STR = re.compile(r"^// Referenced strings \((\d+) in this body")


def main():
    rows = []
    for base, _dirs, files in os.walk(os.path.join(OUT, "src")):
        for name in files:
            if not name.endswith(".cpp"):
                continue
            path = os.path.join(base, name)
            address = size = fname = sub = None
            nstr = 0
            with open(path, encoding="utf-8", errors="replace") as handle:
                for i, line in enumerate(handle):
                    if i > 12:
                        break
                    m = ADDR.match(line)
                    if m:
                        address, size = m.group(1), m.group(2)
                    m = NAME.match(line)
                    if m:
                        fname = m.group(1).strip()
                    m = SUB.match(line)
                    if m:
                        sub = m.group(1).strip()
                    m = STR.match(line)
                    if m:
                        nstr = int(m.group(1))
            if address and fname and sub:
                rel = os.path.relpath(path, OUT)
                rows.append((address, size, fname, sub, nstr, rel))
    rows.sort(key=lambda r: int(r[0], 16) if r[0].startswith("1") else 0)
    with open(os.path.join(OUT, "index.tsv"), "w", encoding="utf-8", newline="\n") as handle:
        handle.write("address\tsize\tname\tsubsystem\tstrings\tfile\n")
        for r in rows:
            handle.write("\t".join(str(x) for x in r) + "\n")
    print("index rows:", len(rows))


if __name__ == "__main__":
    main()
