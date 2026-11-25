#!/usr/bin/env python3
"""Read a PS5 SELF container and rewrite it as a plain ELF64 for Ghidra.

A PS5 `eboot.bin` / `*.prx` is a SELF container: a SELF header, an 8-byte-key
body, and an embedded ELF64 program header table. Two things stop a stock
loader:

  * the file starts with the SELF magic ``4f 15 3d 1d`` (or ``54 14 f5 ee``
    for the updater), not with ``\\x7fELF``, so detection either gives up or
    guesses; and
  * the embedded ELF is ``ET_SCE_EXEC`` (0xfe00) / ``ET_SCE_DYNEXEC``
    (0xfe10), which is not a type Ghidra's ELF loader accepts -- so it is
    reported as an unsupported/orbis image instead of a Prospero one.

Both are container-level facts, not properties of the code. The program header
table already describes the Prospero image correctly; its ``p_offset`` values
are *image* offsets, and the SELF stores each segment in its own block at a
different file offset (the blocks are listed in the SELF entry table right
after the 0x20-byte header). For the GTA VI eboot the text block sits at file
``0x485d0`` while ``p_offset`` says ``0x4000``: a 0x445d0-byte block of zero
padding, so reading at ``p_offset`` reads the wrong bytes and every virtual
address comes out shifted. This tool resolves each program header to its
block by exact length and rewrites only the container around those bytes:

  * a 64-byte ELF header at offset 0, ``e_type = ET_DYN`` (3);
  * the original ``PT_LOAD`` entries, with their ``p_vaddr`` / ``p_memsz``
    unchanged, so every virtual address in the decompiler matches the retail
    image; and
  * the new program header table appended at end of file, leaving every byte
    the segments describe exactly where it was.

Nothing is decrypted, unpacked or relocated: a SELF from a decrypted dump is
already plaintext, and a still-encrypted one stays encrypted and will not
disassemble. ``info`` exists to tell those two cases apart before a long
Ghidra import.

Usage:
    ps5elf.py info <self-file>
    ps5elf.py convert <self-file> <out.elf>            # every PT_LOAD
    ps5elf.py convert <self-file> <out.elf> --window 0x8e0800:0x8e0c00
    ps5elf.py convert <self-file> <out.elf> --window 0x8e0800+0x400
    ps5elf.py va  <self-file> 0x929092                 # file offset -> vaddr
    ps5elf.py off <self-file> 0x8e0ac2                 # vaddr -> file offset

Addresses are printed in the image's own space; the eboot's text starts at
virtual address 0.
"""

import argparse
import struct
import sys

ELF_MAGIC = b"\x7fELF"
SELF_MAGICS = (b"\x4f\x15\x3d\x1d", b"\x54\x14\xf5\xee")

PT_LOAD = 1

ET_SCE_EXEC = 0xFE00
ET_SCE_RELEXEC = 0xFE04
ET_SCE_DYNEXEC = 0xFE10
ET_SCE_DYNAMIC = 0xFE18

TYPE_NAMES = {
    0xFE00: "ET_SCE_EXEC",
    0xFE01: "ET_SCE_STUBLIB",
    0xFE02: "ET_SCE_DYNEXEC16?",
    0xFE04: "ET_SCE_RELEXEC",
    0xFE0C: "ET_SCE_STUBLIB?",
    0xFE10: "ET_SCE_DYNEXEC",
    0xFE18: "ET_SCE_DYNAMIC",
    PT_LOAD: "PT_LOAD",
    2: "PT_DYNAMIC",
    3: "PT_INTERP",
    4: "PT_NOTE",
    6: "PT_PHDR",
    7: "PT_TLS",
    0x6474E550: "PT_GNU_EH_FRAME",
    0x6474E551: "PT_GNU_STACK",
    0x6474E552: "PT_GNU_RELRO",
    0x61000001: "PT_SCE_DYNLIBDATA",
    0x61000002: "PT_SCE_PROCPARAM",
    0x61000003: "PT_SCE_MODULE_PARAM",
    0x61000005: "PT_SCE_COMMENT",
    0x61000006: "PT_SCE_VERSION",
    0x6FFFFF00: "PT_SCE_LIBVERSION",
    0x6FFFFF01: "PT_SCE_RELA",
}

SELF_HEADER_NAMES = {
    0x0001: "PT_NULL?",
    0x0004: "SELF_ENTRY_TEXT",
    0x0005: "SELF_ENTRY_DYNAMIC",
}


def find_elf(data):
    """Return (offset, header) of the embedded ELF64 header.

    A SELF keeps its ELF header after a small metadata area, so the search is
    the first ``\\x7fELF`` whose header parses as ELF64 with a sane program
    header table inside the file. Anything else is a false positive from data.
    """
    start = 0
    while True:
        i = data.find(ELF_MAGIC, start)
        if i < 0 or i > 0x2000:
            raise SystemExit("no embedded ELF64 header in the first 8 KiB")
        start = i + 1
        if len(data) < i + 64:
            continue
        h = data[i:i + 64]
        if h[4] != 2 or h[5] != 1:            # ELFCLASS64, ELFDATA2LSB
            continue
        e_phoff, = struct.unpack_from("<Q", h, 32)
        e_phentsize, = struct.unpack_from("<H", h, 54)
        e_phnum, = struct.unpack_from("<H", h, 56)
        if e_phentsize != 56 or not (0 < e_phnum <= 128):
            continue
        if not (0 < e_phoff < len(data)) or e_phoff + e_phnum * 56 > len(data):
            continue
        return i, h
    raise SystemExit("unreachable")


    
def read_self_blocks(data):
    """Return the SELF entry table as [(props, file offset, length, stored)].

    The SELF header is 0x20 bytes and each entry is 32 bytes: a properties
    word, the block's offset in the SELF file, its length, and the length it
    occupies when stored (equal to the length when the block is not
    compressed). The blocks are in program-header order for the PT_LOADs.
    """
    if data[:4] not in SELF_MAGICS or len(data) < 0x20:
        return []
    num_entries, = struct.unpack_from("<H", data, 24)
    out = []
    for i in range(num_entries):
        o = 0x20 + i * 32
        if o + 32 > len(data):
            break
        out.append(struct.unpack_from("<QQQQ", data, o))
    return out


def map_segments(data, phdrs):
    """Pair each program header with the SELF block that holds its bytes.

    Returns a list parallel to ``phdrs`` of (file offset, delta) where delta
    is ``file offset - p_offset``, or None when no block matches. Matching is
    by exact length because that is what the container records, and a block is
    consumed once so two headers can never claim the same bytes.
    """
    blocks = read_self_blocks(data)
    used = [False] * len(blocks)
    out = []
    for p_type, p_flags, p_offset, p_vaddr, p_paddr, p_filesz, p_memsz, p_align in phdrs:
        found = None
        if p_filesz:
            for i, (_props, off, length, _stored) in enumerate(blocks):
                if used[i] or length != p_filesz:
                    continue
                used[i] = True
                found = (off, off - p_offset)
                break
        out.append(found)
    return out


def resolve(image, va=None, offset=None):
    """Translate between image virtual addresses and SELF file offsets."""
    for i, p in enumerate(image["phdrs"]):
        p_type, p_flags, p_offset, p_vaddr, p_paddr, p_filesz, p_memsz, p_align = p
        if p_type != PT_LOAD or p_filesz == 0:
            continue
        mapped = image["maps"][i]
        src = mapped[0] if mapped else p_offset
        if va is not None and p_vaddr <= va < p_vaddr + p_filesz:
            return src + (va - p_vaddr)
        if offset is not None and src <= offset < src + p_filesz:
            return p_vaddr + (offset - src)
    return None


def load_image(path):
    data = open(path, "rb").read()
    elf_off, header = find_elf(data)
    phdrs = read_phdrs(data, elf_off, header)
    return {"data": data, "elf_off": elf_off, "header": header,
            "phdrs": phdrs, "maps": map_segments(data, phdrs),
            "entry": struct.unpack_from("<Q", header, 24)[0]}


def read_phdrs(data, elf_off, header):
    e_phoff, = struct.unpack_from("<Q", header, 32)
    e_phnum, = struct.unpack_from("<H", header, 56)
    out = []
    for i in range(e_phnum):
        o = elf_off + e_phoff + i * 56
        out.append(struct.unpack_from("<IIQQQQQQ", data, o))
    return out


def parse_window(text):
    if ":" in text:
        a, b = text.split(":", 1)
        start, end = int(a, 0), int(b, 0)
    elif "+" in text:
        a, b = text.split("+", 1)
        start = int(a, 0)
        end = start + int(b, 0)
    else:
        start = int(text, 0)
        end = start + 0x1000
    if end <= start:
        raise SystemExit("--window needs start < end")
    return start, end


def cmd_info(args):
    data = open(args.file, "rb").read()
    print("file            %s" % args.file)
    print("size            %d bytes (%#x)" % (len(data), len(data)))
    head = data[:4]
    if head in SELF_MAGICS:
        print("container       SELF (%s)" % head.hex())
        # SELF header: magic(4) version mode endian attrs key_type(s16)
        # header_size(s16) meta_size(s16) file_size(u64) num_entries(s16)
        # flags(s16) pad(4)
        ver, mode, endn, attrs = data[4], data[5], data[6], data[7]
        file_size, = struct.unpack_from("<Q", data, 16)
        num_entries, flags = struct.unpack_from("<HH", data, 24)
        print("self version    %d mode %#x endian %d attrs %#x"
              % (ver, mode, endn, attrs))
        print("self file_size  %#x  entries %d  flags %#x"
              % (file_size, num_entries, flags))
    else:
        print("container       plain ELF (no SELF magic)")

    elf_off, header = find_elf(data)
    e_type, e_machine, e_version, e_entry, e_phoff, e_shoff, e_flags, \
        e_ehsize, e_phentsize, e_phnum, e_shentsize, e_shnum, e_shstrndx = \
        struct.unpack_from("<HHIQQQIHHHHHH", header, 16)
    print("elf header      offset %#x" % elf_off)
    print("  e_type        %#x (%s)"
          % (e_type, TYPE_NAMES.get(e_type, "unknown")))
    print("  e_machine     %#x (%s)"
          % (e_machine, "x86-64" if e_machine == 0x3E else "unknown"))
    print("  osabi/abiver  %d/%d (%s)"
          % (header[7], header[8],
             "Prospero" if header[8] == 2 else
             "Orbis" if header[8] == 1 else "System V"))
    print("  e_entry       %#x" % e_entry)
    print("  phoff %#x phentsize %d phnum %d  shoff %#x shnum %d"
          % (e_phoff, e_phentsize, e_phnum, e_shoff, e_shnum))
    phdrs = read_phdrs(data, elf_off, header)
    maps = map_segments(data, phdrs)
    print("segments")
    for i, (p_type, p_flags, p_offset, p_vaddr, p_paddr,
            p_filesz, p_memsz, p_align) in enumerate(phdrs):
        perm = "".join(c if p_flags & m else "-"
                       for c, m in (("r", 4), ("w", 2), ("x", 1)))
        mapped = maps[i]
        # A SELF repacks segments, so the bytes live at the block offset, not
        # at p_offset. Printing both makes a shifted window obvious up front.
        where = ("file %#010x (p_offset + %#x)" % (mapped[0], mapped[1])
                 if mapped else "no SELF block matched p_offset")
        print("  [%2d] %-18s %s off %#010x vaddr %#010x filesz %#09x "
              "memsz %#09x align %#x"
              % (i, TYPE_NAMES.get(p_type, "type %#x" % p_type), perm,
                 p_offset, p_vaddr, p_filesz, p_memsz, p_align))
        if p_filesz:
            print("       %s" % where)
    loads = [p for p in phdrs if p[0] == PT_LOAD]
    print("load image      %#x .. %#x (%d PT_LOAD)"
          % (min(p[3] for p in loads),
             max(p[3] + p[6] for p in loads), len(loads)))
    return 0


def cmd_convert(args):
    data = bytearray(open(args.file, "rb").read())
    elf_off, header = find_elf(data)
    e_entry, = struct.unpack_from("<Q", header, 24)
    phdrs = read_phdrs(data, elf_off, header)

    if args.entry:
        e_entry = int(args.entry, 0)
    windows = [parse_window(w) for w in (args.window or [])]
    maps = map_segments(data, phdrs)
    blocks = []          # (flags, source offset, vaddr, size)
    for i, (p_type, p_flags, p_offset, p_vaddr, p_paddr,
            p_filesz, p_memsz, p_align) in enumerate(phdrs):
        if p_type != PT_LOAD or p_filesz == 0:
            continue
        # p_offset addresses the image, not the file: use the SELF block that
        # holds this segment's bytes.
        src_off = maps[i][0] if maps[i] else p_offset
        if src_off + p_filesz > len(data):
            print("warning: segment vaddr %#x runs past EOF, clipping"
                  % p_vaddr, file=sys.stderr)
            p_filesz = len(data) - src_off
            p_memsz = min(p_memsz, p_filesz)
            if p_filesz <= 0:
                continue
        ranges = [(p_vaddr, p_vaddr + p_filesz)]
        if windows:
            ranges = [(max(p_vaddr, ws), min(p_vaddr + p_filesz, we))
                      for ws, we in windows]
            ranges = [r for r in ranges if r[1] > r[0]]
        # SCE marks the text PT_LOAD PF_X only (--x). A loader still maps it
        # as RX, but Ghidra will not disassemble a non-readable block, so the
        # executable bit implies readable here.
        if p_flags & 1:
            p_flags |= 4
        for lo, hi in ranges:
            blocks.append((p_flags, src_off + (lo - p_vaddr), lo, hi - lo))

    if not blocks:
        raise SystemExit("no PT_LOAD segment matched the requested range")

    ident = bytearray(16)
    ident[0:4] = ELF_MAGIC
    ident[4] = 2          # ELFCLASS64
    ident[5] = 1          # ELFDATA2LSB
    ident[6] = 1          # EV_CURRENT
    ident[7] = 0          # ELFOSABI_SYSV: a plain loadable image, not a SCE module
    ident[8] = 0

    if len(blocks) == 1 and not windows:
        # Whole image: leave every byte in place, put the header table at EOF.
        out = data
        out_phdrs = []
        for flags, src, vaddr, size in blocks:
            out_phdrs.append([PT_LOAD, flags, src, vaddr, vaddr, size, size, 0x4000])
        phoff = (len(out) + 7) & ~7
        out[0:64] = struct.pack("<16sHHIQQQIHHHHHH", bytes(ident), 3, 0x3E, 1,
                                e_entry, phoff, 0, 0, 64, 56,
                                len(out_phdrs), 0, 0, 0)
        out.extend(b"\0" * (phoff - len(out)))
        for p in out_phdrs:
            out.extend(struct.pack("<IIQQQQQQ", *p))
    else:
        # Windowed: repack only the selected bytes, keeping each vaddr.
        out = bytearray(64)
        out_phdrs = []
        for flags, src, vaddr, size in blocks:
            off = (len(out) + 0xF) & ~0xF
            out.extend(b"\0" * (off - len(out)))
            out.extend(data[src:src + size])
            out_phdrs.append([PT_LOAD, flags, off, vaddr, vaddr, size, size, 0x10])
        phoff = (len(out) + 7) & ~7
        out.extend(b"\0" * (phoff - len(out)))
        for p in out_phdrs:
            out.extend(struct.pack("<IIQQQQQQ", *p))
        out[0:64] = struct.pack("<16sHHIQQQIHHHHHH", bytes(ident), 3, 0x3E, 1,
                                e_entry, phoff, 0, 0, 64, 56,
                                len(out_phdrs), 0, 0, 0)

    open(args.out, "wb").write(out)
    print("wrote %s: %d PT_LOAD, %#x .. %#x, %d bytes"
          % (args.out, len(out_phdrs), min(p[3] for p in out_phdrs),
             max(p[3] + p[5] for p in out_phdrs), len(out)))
    print("windows         %s" % (args.window or "whole image"))
    print("open it as x86-64; virtual addresses are the image's own")
    return 0


def cmd_va(args):
    image = load_image(args.file)
    va = resolve(image, offset=int(args.addr, 0))
    if va is None:
        raise SystemExit("%s is not inside a PT_LOAD block" % args.addr)
    print("%s" % hex(va))
    return 0


def cmd_off(args):
    image = load_image(args.file)
    off = resolve(image, va=int(args.addr, 0))
    if off is None:
        raise SystemExit("%s is not inside a PT_LOAD block" % args.addr)
    print("%s" % hex(off))
    return 0


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = ap.add_subparsers(dest="cmd", required=True)
    p = sub.add_parser("info", help="print container and segment map")
    p.add_argument("file")
    p.set_defaults(func=cmd_info)
    p = sub.add_parser("convert", help="write a plain ELF64")
    p.add_argument("file")
    p.add_argument("out")
    p.add_argument("--entry", metavar="ADDR",
                   help="override e_entry; Ghidra disassembles the entry point "
                        "and creates its function, which is what makes a "
                        "windowed import useful")
    p.add_argument("--window", metavar="START:END", action="append",
                   help="keep only the part of each PT_LOAD inside this "
                        "virtual-address range (START+SIZE is also accepted); "
                        "repeat to add more windows")
    p.set_defaults(func=cmd_convert)
    p = sub.add_parser("va", help="map a SELF file offset to a virtual address")
    p.add_argument("file")
    p.add_argument("addr")
    p.set_defaults(func=cmd_va)
    p = sub.add_parser("off", help="map a virtual address to a SELF file offset")
    p.add_argument("file")
    p.add_argument("addr")
    p.set_defaults(func=cmd_off)
    args = ap.parse_args(argv)
    return args.func(args)


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
