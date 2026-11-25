#!/usr/bin/env python3
"""Turn matched string addresses into function addresses, without Ghidra analysis.

`gtav_strings.py` finds literals that GTA V's source and the executable share and
records where the bytes live. This tool finds the code that loads each one: a
RIP-relative operand is stored as a 32-bit displacement from the end of the
instruction, so for every 4-byte window `p` the target is `p + 4 + value`.
Vectorised over the whole 100 MB `.text`, that is a couple of seconds, and it
does not need the program to be disassembled first.

    python3 gta6decomp/tools/resolve_strings.py

Writes `matches/gtav_source_functions.tsv` (one row per GTA V function that
could be tied to a GTA VI function), which `ApplyRefs.java` renames.
"""

import argparse
import bisect
import os
import sys

import numpy as np

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
sys.path.insert(0, HERE)
from pe import PE  # noqa: E402


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--exe", default=os.path.join(ROOT, "6RE", "DUMP", "game_scarlett_master.exe"))
    ap.add_argument("--hits", default=os.path.join(ROOT, "gta6decomp", "matches", "gtav_source_hits.tsv"))
    ap.add_argument("--out", default=os.path.join(ROOT, "gta6decomp", "matches"))
    args = ap.parse_args()

    pe = PE(args.exe)
    tx = next(s for s in pe.sections if s["name"] == ".text")
    text = pe.data[tx["raw_off"]:tx["raw_off"] + tx["vsize"]]
    # Instructions are not 4-byte aligned: `FF 15 disp32` puts the displacement
    # at an odd phase, so every phase must be swept. Build target -> position
    # for the addresses we care about only, which keeps memory flat.

    rows = []
    with open(args.hits, encoding="utf-8", errors="replace") as handle:
        header = handle.readline()
        for line in handle:
            c = line.rstrip("\n").split("\t")
            if len(c) < 4:
                continue
            rows.append((int(c[0]), c[1], c[2], c[3]))
    print("string hits:", len(rows))
    wanted = np.array(sorted({r[0] - tx["va"] for r in rows}), dtype=np.int64)
    at_target = {}
    for phase in range(4):
        count = (len(text) - phase) // 4
        if count < 2:
            continue
        u32 = np.frombuffer(text[phase:phase + count * 4], dtype="<u4").astype(np.int64)
        disp = np.where(u32 >= 0x80000000, u32 - 0x100000000, u32)
        target = phase + np.arange(count, dtype=np.int64) * 4 + 4 + disp
        hit = np.isin(target, wanted)
        if not hit.any():
            continue
        for p, addr in zip(np.nonzero(hit)[0], target[hit]):
            at_target.setdefault(int(addr), []).append(phase + int(p) * 4)

    funcs = [(b, e) for b, e, _u in pe.pdata()
             if tx["va"] <= b < e <= tx["va"] + tx["vsize"]]
    funcs.sort()
    starts = [b for b, _e in funcs]
    ends = [e for _b, e in funcs]

    best = {}
    for rva, literal, func, rel in rows:
        addr = rva - tx["va"]
        if not (0 <= addr < pe.size_of_image):
            continue
        hits = at_target.get(addr, [])
        if not hits:
            best.setdefault((func, rel), []).append((addr, 0))
            continue
        for p in hits[:64]:
            code_rva = tx["va"] + int(p)
            i = bisect.bisect_right(starts, code_rva) - 1
            if i < 0 or code_rva >= ends[i]:
                continue
            key = func
            prev = best.get(key)
            if prev is None or prev[2] < len(hits):
                best[key] = (starts[i], func, len(hits), rel, literal)

    out = []
    for key, value in best.items():
        if len(value) != 5:          # never resolved to code
            continue
        vi, func, nhits, rel, literal = value
        out.append((vi, func, nhits, rel, literal))
    out.sort()
    print("GTAV source functions tied to a VI function:", len(out))
    os.makedirs(args.out, exist_ok=True)
    path = os.path.join(args.out, "gtav_source_functions.tsv")
    with open(path, "w", encoding="utf-8", newline="\n", errors="replace") as handle:
        handle.write("vi_rva\tgtav_function\thits\tgtav_file\tliteral\n")
        for vi, func, nhits, rel, literal in out:
            handle.write("%d\t%s\t%d\t%s\t%s\n" % (
                vi, func, nhits, rel,
                literal.replace("\\", "\\\\").replace("\t", "\\t")
                .replace("\n", "\\n").replace("\r", "\\r")))
    print("wrote", path)


if __name__ == "__main__":
    main()
