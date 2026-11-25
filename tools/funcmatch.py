#!/usr/bin/env python3
"""Compare a rebuilt function against the retail bytes at an address.

The matching plan has two tiers, and they answer different questions:

  * **function match** -- the readable body implements the same operations as
    the Ghidra body, checked by reading the two. This is what every recovered
    body in the tree has.
  * **byte match** -- the compiled body is instruction-identical to retail.
    That needs the same compiler and flags, and it is the last objective, not
    the first: it can only be run once the whole game is function-matched.

This tool is the second tier's plumbing: it pulls the retail bytes out of the
PE and the rebuilt bytes out of a COFF object built by `objdiff.build.mk`, then
prints an exact diff. It never edits either side.

    python3 tools/funcmatch.py --rva 0x87b0f0 --size 0x34 \
        --obj build/game/Core/FUN_14087b0f0.obj --symbol fiPack_ComputeRun

Exit status is 0 when the bytes are identical, 1 when they differ, 2 on a usage
or parse error -- so it can gate a match count in CI later.
"""

import argparse
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
EXE = os.path.join(ROOT, "6RE", "DUMP", "game_scarlett_master.exe")


def read(path):
    with open(path, "rb") as f:
        return f.read()


def pe_sections(image):
    """[(name, rva, raw_offset, raw_size)] from a PE32+ image."""
    pe = struct.unpack_from("<I", image, 0x3C)[0]
    if image[pe:pe + 4] != b"PE\0\0":
        raise ValueError("not a PE image")
    count = struct.unpack_from("<H", image, pe + 6)[0]
    optional = struct.unpack_from("<H", image, pe + 20)[0]
    walk = pe + 24 + optional
    out = []
    for _ in range(count):
        name = image[walk:walk + 8].rstrip(b"\0").decode("latin1")
        vsize, rva, raw_size, raw = struct.unpack_from("<IIII", image, walk + 8)
        out.append((name, rva, raw, raw_size or vsize))
        walk += 40
    return out


def retail_bytes(image, rva, size):
    for name, base, raw, raw_size in pe_sections(image):
        if base <= rva < base + raw_size:
            offset = raw + (rva - base)
            return name, image[offset:offset + size]
    raise ValueError("rva 0x%x is not in a section" % rva)


def coff_sections(obj):
    """COFF section headers, in index order (1-based indices in symbols)."""
    # machine(2) nsec(2) timestamp(4) symptr(4) nsyms(4) optsize(2) flags(2)
    _machine, count, _ts, symtab, nsyms, optsize, _flags = struct.unpack_from(
        "<HHIIIHH", obj, 0)
    walk = 20 + optsize
    headers = []
    for _ in range(count):
        name = obj[walk:walk + 8].rstrip(b"\0").decode("latin1")
        vsize, vaddr, raw_size, raw = struct.unpack_from("<IIII", obj, walk + 8)
        reloc = struct.unpack_from("<I", obj, walk + 24)[0]
        nreloc = struct.unpack_from("<H", obj, walk + 32)[0]
        headers.append({"name": name, "raw": raw, "size": raw_size,
                        "reloc": reloc, "nreloc": nreloc, "vaddr": vaddr})
        walk += 40
    return headers, symtab, nsyms


def coff_section(obj, wanted, symbol=None):
    """Raw bytes of one section, with relocations reported separately.

    clang-cl can emit more than one section with the same name (COMDAT
    groups), so a symbol selects the one that actually holds the body.
    """
    headers, symtab, nsyms = coff_sections(obj)
    index = None
    start = 0
    if symbol:
        found = symbol_range(obj, symbol)
        if found is None:
            raise ValueError("object has no symbol matching %r" % symbol)
        index, start, _size = found
    if index is not None:
        if not (1 <= index <= len(headers)):
            raise ValueError("symbol is in section %d, not in the object" % index)
        chosen = headers[index - 1]
    else:
        matches = [h for h in headers if h["name"] == wanted]
        if not matches:
            names = ", ".join(h["name"] for h in headers)
            raise ValueError("object has no %s (has %s)" % (wanted, names))
        chosen = max(matches, key=lambda h: h["size"])

    data = bytearray(obj[chosen["raw"]:chosen["raw"] + chosen["size"]])
    # A relocation means the four bytes are a placeholder for a link-time
    # address; blank them so the diff is about instructions, not link order.
    masked = []
    for i in range(chosen["nreloc"]):
        entry = chosen["reloc"] + i * 10
        address, _sym, kind = struct.unpack_from("<IIH", obj, entry)
        if kind in (0x0001, 0x0002, 0x0003, 0x0004, 0x0009, 0x000A, 0x000B):
            for b in range(4):
                if address + b < len(data):
                    masked.append(address + b)
    masked = [m - start for m in masked if m >= start]
    return bytes(data)[start:], sorted(masked), headers, chosen["name"]


def symbol_range(obj, name):
    """(section index, value, size) for one COFF symbol, or None."""
    _count = struct.unpack_from("<H", obj, 2)[0]
    symtab = struct.unpack_from("<I", obj, 8)[0]
    nsyms = struct.unpack_from("<I", obj, 12)[0]
    strings = obj[symtab + nsyms * 18:]
    for i in range(nsyms):
        entry = symtab + i * 18
        raw = obj[entry:entry + 8]
        if raw[:4] == b"\0\0\0\0":
            offset = struct.unpack_from("<I", raw, 4)[0]
            end = strings.find(b"\0", offset)
            text = strings[offset:end].decode("latin1")
        else:
            text = raw.rstrip(b"\0").decode("latin1")
        if name not in text:
            continue
        value = struct.unpack_from("<I", obj, entry + 8)[0]
        section = struct.unpack_from("<h", obj, entry + 12)[0]
        # COFF has no size in the symbol; the size lives in an auxiliary record
        # only for functions built with /Gy, so the caller falls back to the
        # rest of the section.
        return section, value, 0
    return None


def hexdump(blob):
    return " ".join("%02x" % b for b in blob)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--rva", required=True, help="retail function RVA, e.g. 0x87b0f0")
    ap.add_argument("--size", required=True, help="retail byte count, e.g. 0x34")
    ap.add_argument("--obj", required=True, help="rebuilt COFF object")
    ap.add_argument("--symbol", help="symbol substring; trims .text to it when given")
    ap.add_argument("--section", default=".text")
    ap.add_argument("--exe", default=EXE)
    args = ap.parse_args()

    rva = int(args.rva, 0)
    size = int(args.size, 0)

    image = read(args.exe)
    section, retail = retail_bytes(image, rva, size)
    obj = read(args.obj)
    ours, masked, headers, chosen_name = coff_section(obj, args.section, args.symbol)

    print("retail   %s:0x%x  %d bytes" % (section, rva, len(retail)))
    print("rebuilt  %s        %d bytes%s" % (chosen_name, len(ours),
                                              " (%d relocation bytes blanked)" % len(masked)
                                              if masked else ""))
    print("retail   " + hexdump(retail))
    print("rebuilt  " + hexdump(ours))

    limit = min(len(retail), len(ours))
    for i in range(limit):
        if i in masked:
            continue
        if retail[i] != ours[i]:
            print("first difference at +0x%x: retail %02x, rebuilt %02x"
                  % (i, retail[i], ours[i]))
            print("NOT BYTE-IDENTICAL")
            if len(ours) != len(retail):
                print("length differs: %d vs %d" % (len(retail), len(ours)))
            return 1
    if len(ours) != len(retail):
        print("length differs: %d vs %d" % (len(retail), len(ours)))
        print("NOT BYTE-IDENTICAL")
        return 1
    print("BYTE-IDENTICAL")
    return 0


if __name__ == "__main__":
    sys.exit(main())
