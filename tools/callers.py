#!/usr/bin/env python3
"""Find the functions that call a target address, from the raw image.

Ghidra would answer this after a full analysis pass; a full pass on 299,257
functions is minutes of work for a question that is two instruction forms. This
scans `.text` for:

  * `E8 rel32`      -- call target, resolved as `position + 5 + rel`
  * `FF 15 disp32`   -- call [rip+disp], which is how the IAT and most function
                       pointer tables are reached

and maps each hit to its containing function through `.pdata`. No disassembly,
no analysis database, a couple of seconds on the whole section.

    python3 gta6decomp/tools/callers.py --target 0x140fc21c0
    python3 gta6decomp/tools/callers.py --target 0x140fc21c0 --depth 2
    python3 gta6decomp/tools/callers.py --target 0x140fc2240,0x1456dd530
"""

import argparse
import bisect
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
sys.path.insert(0, HERE)
from pe import PE  # noqa: E402

EXE = os.path.join(ROOT, "6RE", "DUMP", "game_scarlett_master.exe")


def load_pdata(pe):
    rows = sorted((r[0], r[1]) for r in pe.pdata() if r[1] > r[0])
    return [r[0] for r in rows], rows


def containing(begins, rows, rva):
    i = bisect.bisect_right(begins, rva) - 1
    if i < 0:
        return None
    begin, end = rows[i]
    if begin <= rva < end:
        return begin, end
    return None


def direct_callers(pe, targets):
    """{target_rva: set(caller_func_rva)} for `call rel32` hits."""
    begins, rows = load_pdata(pe)
    text_section = next(s for s in pe.sections if s["name"] == ".text")
    raw = text_section["raw_off"]
    body = pe.data[raw:raw + text_section["vsize"]]
    base = text_section["va"]
    out = {t: set() for t in targets}
    for i in range(len(body) - 5):
        if body[i] != 0xE8:
            continue
        rel = struct.unpack_from("<i", body, i + 1)[0]
        target = base + i + 5 + rel
        if target not in out:
            continue
        fn = containing(begins, rows, base + i)
        if fn:
            out[target].add(fn[0])
    return out, begins, rows


def indirect_slots(pe, targets):
    """`call [rip+disp]` sites whose slot holds one of the targets."""
    begins, rows = load_pdata(pe)
    text_section = next(s for s in pe.sections if s["name"] == ".text")
    raw = text_section["raw_off"]
    body = pe.data[raw:raw + text_section["vsize"]]
    base = text_section["va"]
    out = {t: set() for t in targets}
    for i in range(len(body) - 6):
        if body[i] != 0xFF or body[i + 1] != 0x15:
            continue
        disp = struct.unpack_from("<i", body, i + 2)[0]
        slot = base + i + 6 + disp
        value = None
        for section in pe.sections:
            if section["raw_off"] <= 0 and section["va"] <= slot < section["va"] + section["vsize"]:
                pass
        try:
            value = struct.unpack("<Q", pe.read(slot, 8))[0]
        except Exception:
            continue
        if value not in out:
            continue
        fn = containing(begins, rows, base + i)
        if fn:
            out[value].add(fn[0])
    return out


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--exe", default=EXE)
    ap.add_argument("--target", required=True,
                    help="comma-separated VAs (0x140...) or RVAs")
    ap.add_argument("--depth", type=int, default=1,
                    help="walk callers this many levels up")
    args = ap.parse_args()

    pe = PE(args.exe)
    targets = []
    for token in args.target.split(","):
        token = token.strip()
        if not token:
            continue
        value = int(token, 16)
        if value >= pe.image_base:
            value -= pe.image_base
        targets.append(value)

    begins, rows = load_pdata(pe)
    frontier = list(targets)
    seen = set(frontier)
    for level in range(args.depth):
        direct, _b, _r = direct_callers(pe, set(frontier))
        indirect = indirect_slots(pe, set(frontier))
        nxt = []
        for target in frontier:
            callers = direct.get(target, set()) | indirect.get(target, set())
            print("level %d: %08x called by %d function(s)" % (
                level, target, len(callers)))
            for fn in sorted(callers):
                size = containing(begins, rows, fn)[1] - fn
                print("    FUN_%08x  (%d B)" % (fn, size))
            nxt.extend(c for c in callers if c not in seen)
        seen.update(nxt)
        frontier = sorted(set(nxt))
        if not frontier:
            break


if __name__ == "__main__":
    main()
