#!/usr/bin/env python3
"""Resolve RPF9 white-box key ids to their blob inside eboot.bin.

The RPF9 open path asks the key cache at 0x8477e00 for a key id, and that cache
is built from a 24-record list at 0x9ed4620.  Each record is

    +0x00  u64  key = (id << 32) | (flags << 24)
    +0x08  u64  ptr            <- zero in the file
    +0x10  u64  len

The pointer field is zero in the shipped image because it is filled by the
*standard* ELF RELA table reachable from PT_DYNAMIC, not by PT_SCE_RELA.  That
table is fully readable, so the id -> blob mapping is recoverable statically.

The blobs are not key bytes: a 0x10f4 blob is a white-box AES-256 table set.
`0x255a3b0` validates the magic, converts 60 big-endian dwords from blob+4 into
host round-key words, and copies the 0x1000 bytes at blob+0xf4 as sixteen
256-byte tables.  Every one of those tables is a permutation of 0..255.

Usage:
    python3 tools/rpf9key.py --list
    python3 tools/rpf9key.py --id 0x10000005 --dump key.blob
    python3 tools/rpf9key.py --id 0x10000005 --decode
    python3 tools/rpf9key.py --verify
"""

import argparse
import os
import struct
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import ps5elf

DEFAULT_EBOOT = "../6RE/DUMPS/PS5Dump/eboot.bin"

KEY_LIST_VA = 0x9ED4620
KEY_COUNT = 24
RECORD_SIZE = 24

PT_DYNAMIC = 2
DT_NULL = 0
DT_RELA = 7
DT_RELASZ = 8
DT_RELACOUNT = 0x6FFFFFF9
R_X86_64_RELATIVE = 8

MAGIC_WHITEBOX = 0x4E3B9B8E

# Every blob magic has exactly one 32-bit immediate compare in an executable
# segment; that compare names the class which consumes the blob.
MAGIC_CLASS = {
    0x4E3B9B8E: ("0x255a3b0", "white-box AES-256 table set (RPF9)"),
    0x4131537E: ("0x436a220", "white-box, other"),
    0x2718CE5D: ("0x3985bf0", "stream cipher"),
    0x6F24AB44: ("0x436eb10", "white-box, other"),
    0x35853740: ("0x436c800", "white-box, other"),
    0x57AA38AA: ("0x4371020", "white-box, other"),
    0x3FF44BFB: ("0x43739e0", "white-box, other"),
    0x5E864F50: ("0x226eb00", "white-box, other"),
}


def read_at(image, va, length):
    off = ps5elf.resolve(image, va=va)
    if off is None:
        raise ValueError("address %#x is not backed by the file" % va)
    return image["data"][off:off + length]


def dynamic_tags(image):
    """Parse PT_DYNAMIC into a tag -> value dict (first occurrence wins)."""
    tags = {}
    for p in image["phdrs"]:
        p_type, p_flags, p_offset, p_vaddr, p_paddr, p_filesz, p_memsz, _ = p
        if p_type != PT_DYNAMIC or not p_filesz:
            continue
        blob = read_at(image, p_vaddr, p_filesz)
        for i in range(0, len(blob) - 15, 16):
            tag, val = struct.unpack_from("<qQ", blob, i)
            if tag == DT_NULL:
                break
            tags.setdefault(tag, val)
    return tags


def rela_map(image):
    """Return {slot_va: value} for every R_X86_64_RELATIVE in DT_RELA."""
    tags = dynamic_tags(image)
    if DT_RELA not in tags:
        raise ValueError("no DT_RELA in PT_DYNAMIC")
    table = read_at(image, tags[DT_RELA], tags.get(DT_RELASZ, 0))
    out = {}
    for i in range(0, len(table) - 23, 24):
        r_offset, r_info, r_addend = struct.unpack_from("<QQq", table, i)
        if (r_info & 0xFFFFFFFF) != R_X86_64_RELATIVE:
            continue
        out[r_offset] = r_addend & 0xFFFFFFFFFFFFFFFF
    return out


def key_records(image):
    """Decode the 24-record key list, filling ptr from the RELA table."""
    relocs = rela_map(image)
    raw = read_at(image, KEY_LIST_VA, KEY_COUNT * RECORD_SIZE)
    records = []
    for i in range(KEY_COUNT):
        key, ptr, length = struct.unpack_from("<QQQ", raw, i * RECORD_SIZE)
        slot = KEY_LIST_VA + i * RECORD_SIZE + 8
        records.append({
            "index": i,
            "key": key,
            "id": key >> 32,
            "flags": (key >> 24) & 0xFF,
            "slot": slot,
            "ptr": relocs.get(slot, ptr),
            "len": length,
        })
    return records


def find_key(image, key_id):
    for rec in key_records(image):
        if rec["id"] == key_id:
            return rec
    return None


def decode_whitebox(blob):
    """Decode a 0x4e3b9b8e blob into (round_keys, sbox_tables)."""
    magic, = struct.unpack_from("<I", blob, 0)
    if magic != MAGIC_WHITEBOX:
        raise ValueError("blob magic is %#010x, expected %#010x"
                         % (magic, MAGIC_WHITEBOX))
    # 0x255a420..0x255a465: 60 iterations of rdx += 4 until rdx == 0xf0,
    # each assembling blob[4+rdx .. 7+rdx] big-endian into out[rdx].
    round_keys = [int.from_bytes(blob[4 + 4 * i:8 + 4 * i], "big")
                  for i in range(60)]
    # 0x255a467 onward copies the 0x1000 bytes at blob+0xf4.
    sboxes = blob[0xF4:0xF4 + 0x1000]
    return round_keys, sboxes


def describe(image, rec):
    print("key id      %#010x   flags %#04x" % (rec["id"], rec["flags"]))
    print("record #    %d at %#x (ptr slot %#x)"
          % (rec["index"], KEY_LIST_VA + rec["index"] * RECORD_SIZE, rec["slot"]))
    print("blob        %#x   length %#x" % (rec["ptr"], rec["len"]))
    if not rec["ptr"]:
        print("            (unresolved: no RELA entry and zero in file)")
        return 1
    blob = read_at(image, rec["ptr"], rec["len"])
    magic, = struct.unpack_from("<I", blob, 0)
    site, kind = MAGIC_CLASS.get(magic, ("unknown", "unknown"))
    print("magic       %#010x  -> %s  (%s)" % (magic, site, kind))
    if magic != MAGIC_WHITEBOX:
        return 0
    keys, sboxes = decode_whitebox(blob)
    print("round keys  %d words (AES-256 uses 60)" % len(keys))
    for r in range(0, 15):
        print("  rk[%2d]  %s" % (r, " ".join("%08x" % k
                                            for k in keys[r * 4:r * 4 + 4])))
    print("sbox tables %d x 0x100" % (len(sboxes) // 0x100))
    bad = 0
    for t in range(len(sboxes) // 0x100):
        chunk = sboxes[t * 0x100:(t + 1) * 0x100]
        if sorted(chunk) != list(range(256)):
            bad += 1
    print("permutations %d/%d bijective"
          % (len(sboxes) // 0x100 - bad, len(sboxes) // 0x100))
    return 0


def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--eboot", default=DEFAULT_EBOOT)
    ap.add_argument("--list", action="store_true", help="list every resolved key id")
    ap.add_argument("--id", type=lambda s: int(s, 0), help="key id, e.g. 0x10000005")
    ap.add_argument("--dump", metavar="PATH", help="write the raw blob to PATH")
    ap.add_argument("--decode", action="store_true",
                    help="decode and print the white-box tables")
    ap.add_argument("--verify", action="store_true",
                    help="check every white-box blob's S-box permutations")
    args = ap.parse_args(argv)

    image = ps5elf.load_image(args.eboot)
    tags = dynamic_tags(image)
    print("DT_RELA %#x  DT_RELASZ %#x  entries %d  DT_RELACOUNT %#x"
          % (tags.get(DT_RELA, 0), tags.get(DT_RELASZ, 0),
             tags.get(DT_RELASZ, 0) // 24, tags.get(DT_RELACOUNT, 0)))

    if args.verify:
        failures = 0
        checked = 0
        for rec in key_records(image):
            if not rec["ptr"] or not rec["len"]:
                continue
            blob = read_at(image, rec["ptr"], rec["len"])
            magic, = struct.unpack_from("<I", blob, 0)
            if magic != MAGIC_WHITEBOX:
                continue
            checked += 1
            _, sboxes = decode_whitebox(blob)
            n = len(sboxes) // 0x100
            good = sum(1 for t in range(n)
                       if sorted(sboxes[t * 0x100:(t + 1) * 0x100])
                       == list(range(256)))
            if good != n:
                failures += 1
                print("  id %#010x blob %#x: %d/%d permutations"
                      % (rec["id"], rec["ptr"], good, n))
            else:
                print("  id %#010x blob %#x: %d/%d permutations"
                      % (rec["id"], rec["ptr"], good, n))
        print("\n%d/%d white-box blobs decode to bijective table sets"
              % (checked - failures, checked))
        return 0 if failures == 0 else 1

    if args.id is not None:
        rec = find_key(image, args.id)
        if rec is None:
            print("key id %#010x is not in the list" % args.id, file=sys.stderr)
            return 1
        if args.dump:
            blob = read_at(image, rec["ptr"], rec["len"])
            with open(args.dump, "wb") as fh:
                fh.write(blob)
            print("wrote %d bytes to %s" % (len(blob), args.dump))
        if args.decode:
            return describe(image, rec)
        if not args.dump:
            return describe(image, rec)
        return 0

    for rec in key_records(image):
        magic = "-"
        kind = "-"
        if rec["ptr"] and rec["len"]:
            try:
                m, = struct.unpack_from("<I", read_at(image, rec["ptr"], 4), 0)
                magic = "%08x" % m
                kind = MAGIC_CLASS.get(m, ("?", "?"))[1]
            except ValueError:
                kind = "unmapped"
        print("  #%2d  id %#010x  flags %#04x  blob %#010x  len %#06x  %s  %s"
              % (rec["index"], rec["id"], rec["flags"], rec["ptr"],
                 rec["len"], magic, kind))
    return 0


if __name__ == "__main__":
    sys.exit(main())
