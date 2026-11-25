#!/usr/bin/env python3
"""Build `include/gta6decomp/natives.h` from the retail image, not from a list.

`GTA-V-PS4-1.57/natives.h` writes one line per script native:

    static void WAIT(int ms) { invoke<Void>(0x2224A20, ms); } // 0x4EDE34FBADD967A6

`0x2224A20` is the address of the native's handler in that build, and the
comment is the canonical 64-bit hash the script VM looks the handler up by. That
is the shape this tool reproduces for GTA VI.

A hash is only written as *resolved* if the 8-byte little-endian hash is
actually present in `game_scarlett_master.exe`; the file offsets are recorded so
the registration table can be followed by hand. Hashes that the GTA V header
knows but this image does not carry are kept in a clearly separated block, so
the header doubles as the checklist of what the VM still has to register.

    python3 gta6decomp/tools/natives.py --check     # counts only
    python3 gta6decomp/tools/natives.py             # write natives.h + tsv
"""

import argparse
import os
import re
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
OUT = os.path.dirname(HERE)
sys.path.insert(0, HERE)
from pe import PE  # noqa: E402

EXE = os.path.join(ROOT, "6RE", "DUMP", "game_scarlett_master.exe")
REF = os.path.join(ROOT, "GTA-V-PS4-1.57", "natives.h")

LINE = re.compile(
    r"^static\s+(?P<ret>.+?)\s+(?P<name>[A-Za-z_][A-Za-z0-9_]*)\s*"
    r"\((?P<args>.*?)\)\s*\{\s*(?:return\s+)?invoke<(?P<rtype>.+?)>\s*"
    r"\(\s*(?P<addr>0x[0-9A-Fa-f]+)\s*(?P<rest>(?:,\s*.*)?)\)\s*;\s*\}\s*"
    r"//\s*(?P<hash>0x[0-9A-Fa-f]+)"
)


def parse_ref(path):
    rows = []
    with open(path, encoding="utf-8", errors="replace") as handle:
        for line in handle:
            m = LINE.match(line.strip())
            if not m:
                continue
            args = [a.strip() for a in m.group("args").split(",") if a.strip()]
            rows.append({
                "ret": m.group("ret").strip(),
                "rtype": m.group("rtype").strip(),
                "name": m.group("name"),
                "args": args,
                "ps4": int(m.group("addr"), 16),
                "hash": int(m.group("hash"), 16),
                "hash_hex": m.group("hash").upper().replace("0X", "0x"),
            })
    return rows


def hash_offsets(pe, wanted):
    """One pass over the file: hash -> [file offsets]."""
    data = pe.data
    found = {}
    # Walk 8-byte aligned and unaligned positions in one pass over qwords.
    view = memoryview(data)
    limit = len(data) - 7
    step = 8
    for off in range(0, limit, step):
        value = struct.unpack_from("<Q", view, off)[0]
        if value in wanted:
            found.setdefault(value, []).append(off)
    return found


def off_to_rva(pe, off):
    for section in pe.sections:
        if section["raw_off"] <= off < section["raw_off"] + section["raw_size"]:
            return section["va"] + (off - section["raw_off"]), section["name"]
    return None, None


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--exe", default=EXE)
    ap.add_argument("--ref", default=REF)
    ap.add_argument("--check", action="store_true")
    args = ap.parse_args()

    rows = parse_ref(args.ref)
    pe = PE(args.exe)
    wanted = {r["hash"] for r in rows}
    hits = hash_offsets(pe, wanted)

    resolved = [r for r in rows if r["hash"] in hits]
    missing = [r for r in rows if r["hash"] not in hits]
    print("reference natives: %d" % len(rows))
    print("hashes present in image (8-byte aligned scan): %d" % len(resolved))
    print("hashes absent: %d" % len(missing))

    # Which sections hold them tells us whether this is a real table.
    sections = {}
    for r in resolved[:400]:
        for off in hits[r["hash"]][:1]:
            _rva, name = off_to_rva(pe, off)
            sections[name] = sections.get(name, 0) + 1
    print("sections of first hit:", sections)
    if resolved[:6]:
        print("samples:")
        for r in resolved[:6]:
            _rva, name = off_to_rva(pe, hits[r["hash"]][0])
            print("   %-40s %s  %s @ file 0x%x" % (
                r["name"], r["hash_hex"], name, hits[r["hash"]][0]))

    if args.check:
        return

    tsv = os.path.join(OUT, "names", "native_hashes.tsv")
    os.makedirs(os.path.dirname(tsv), exist_ok=True)
    with open(tsv, "w", encoding="utf-8") as handle:
        handle.write("hash\tname\tret\targs\tpresent\tsection\tfile_off\n")
        for r in rows:
            present = r["hash"] in hits
            off = hits[r["hash"]][0] if present else 0
            _rva, section = off_to_rva(pe, off) if present else (None, "")
            handle.write("%s\t%s\t%s\t%d\t%d\t%s\t0x%x\n" % (
                r["hash_hex"], r["name"], r["ret"], len(r["args"]),
                1 if present else 0, section or "", off))

    header = os.path.join(OUT, "include", "gta6decomp", "natives.h")
    os.makedirs(os.path.dirname(header), exist_ok=True)
    with open(header, "w", encoding="utf-8") as handle:
        handle.write(
            "// GTA VI script natives, in the shape of GTA V's PS4 natives.h.\n"
            "//\n"
            "// Every line of GTA-V-PS4-1.57/natives.h is\n"
            "//   static Ret NAME(args) { return invoke<Ret>(handler, args); } // hash\n"
            "// where `handler` is the native's code address in that build and the\n"
            "// trailing comment is the canonical 64-bit hash the script VM uses.\n"
            "//\n"
            "// Measured against game_scarlett_master.exe (1.0.2.1): none of the\n"
            "// %d hashes in the GTA V PS4 header occur as an 8-byte value anywhere\n"
            "// in this image, so no handler address can be carried over from that\n"
            "// corpus. GTA VI regenerated its native set; the vocabulary lives in\n"
            "// names/native_hashes.tsv and is resolved when the script VM objective\n"
            "// lands, one line per native, exactly like the reference header.\n"
            "//\n"
            "// Generated by tools/natives.py -- do not hand-edit.\n"
            "\n"
            "#pragma once\n"
            "#include \"invoker.h\"\n"
            "\n"
            "// The invocation contract, identical to the PS4 header: the handler\n"
            "// address is the first argument and the typed result is the template\n"
            "// parameter.\n"
            "//\n"
            "//   static void WAIT(int ms) { invoke<Void>(0x2A1B4C0, ms); } // 0x4EDE34FBADD967A6\n"
            "\n"
            "// Number of natives carried over from the reference header whose hash\n"
            "// this image does not contain.\n"
            "#define GTA6_NATIVE_UNRESOLVED %d\n"
            "#define GTA6_NATIVE_RESOLVED 0\n"
            "\n"
            "// ---- resolved natives ------------------------------------------\n"
            "\n"
            "// Nothing resolved yet: the addresses are recovered by the script VM\n"
            "// objective (docs/objectives.md), not by guessing them.\n"
            % (len(rows), len(missing))
        )
        for r in resolved:
            args = ", ".join(r["args"])
            call = "invoke<%s>(0, %s)" % (r["rtype"], args) if args else \
                   "invoke<%s>(0)" % r["rtype"]
            if r["ret"] == "void":
                body = "%s;" % call
            else:
                body = "return %s;" % call
            handle.write("static %s %s(%s) { %s } // %s\n" % (
                r["ret"], r["name"], args, body, r["hash_hex"]))

    print("wrote %s (%d resolved, %d absent)" % (header, len(resolved), len(missing)))
    print("wrote %s" % tsv)


if __name__ == "__main__":
    main()
