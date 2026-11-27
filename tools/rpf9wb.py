#!/usr/bin/env python3
"""Decrypt an RPF9 TOC by running the game's own white-box cipher natively.

The key for the RPF9 header is key id 0x10000005, which resolves (through the
standard DT_RELA table, see tools/rpf9key.py) to the 0x10f4-byte blob at
0x9e6fe90. That blob is not key bytes: 0x255a3b0 validates magic 0x4e3b9b8e and
decodes it into a 0x1100-byte table set

    +0x0000  60 round-key words, from blob+4, big-endian
    +0x00f0  16 x 256-byte S-box tables, from blob+0xf4
    +0x10f0  16-byte CBC chaining state (supplied by the caller, not the blob)

and 0x2ae0890(tables, src, len, dst) is the CBC decrypt over that table set,
0x4000 bytes at a time, carrying the last ciphertext block of each chunk as the
next IV.

Two chained stages, per the documented decrypt order:

    1. [A, B + bsz - tail)        header key 0x10000005, IV from the header
    2. [B + bsz - tail, idx_end)  the key and IV named by section 1's crypto
                                  record, which stage 1 just revealed

Stage 1 is scored by parsing the plaintext as the section table. Stage 2 is
scored by recognising the column-table hashes at C.

    python3 tools/rpf9wb.py --archive ../6RE/DUMPS/PS5Dump/appdata0.rpf
    python3 tools/rpf9wb.py --archive ... --hexdump --out toc.bin
"""
import argparse
import ctypes
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
if HERE not in sys.path:
    sys.path.insert(0, HERE)
import ps5elf   # noqa: E402
import rpf9key  # noqa: E402

INIT = 0x255A3B0          # decode blob -> 0x1100 table set (magic 0x4e3b9b8e)
DECRYPT = 0x2AE0890       # CBC decrypt over the table set
READY_FLAG = 0xAC6E511    # 0x43697c0 returns success immediately when non-zero
MEMCPY_INTERNAL = 0x1A1D5F0
MEMCPY_IMPORT = 0x8F67840
MEMSET_IMPORT = 0x84783B0
ALLOC = 0x36696A0
STACK_GUARD = 0xA3E9FA8

TABLES_SIZE = 0x1100
STATE_OFF = 0x10F0

DEFAULT_IV = "7d27cb094ca646c0da72c950de054c5f"

# Column-table record hashes, from the SixNG column store spec.
COLUMN_HASHES = {
    0x33F70DFAF2C50989: "file entry",
    0xBA180AFB232D1B4B: "resource entry",
    0x286030A358A789FB: "crypto record",
    0x73BCB72DCE74F11F: "file id",
}

DELTA = 0x100000000
PROT_RWX = 1 | 2 | 4
MAP_PRIVATE = 0x02
MAP_ANONYMOUS = 0x20
MAP_FIXED = 0x10
PAGE = 0x1000


class Image:
    def __init__(self, self_file):
        self.image = ps5elf.load_image(self_file)
        self.libc = ctypes.CDLL("libc.so.6", use_errno=True)
        self.libc.mmap.restype = ctypes.c_void_p
        self.libc.mmap.argtypes = [ctypes.c_void_p, ctypes.c_size_t,
                                   ctypes.c_int, ctypes.c_int, ctypes.c_int,
                                   ctypes.c_long]
        self.libc.memmove.restype = ctypes.c_void_p
        self.libc.memmove.argtypes = [ctypes.c_void_p, ctypes.c_void_p,
                                      ctypes.c_size_t]
        self.libc.malloc.restype = ctypes.c_void_p
        self.libc.malloc.argtypes = [ctypes.c_size_t]
        self._map()

    def _map(self):
        """Map the whole image span once, then drop each PT_LOAD's file bytes in.

        A single mapping keeps the BSS hole live, which matters: the crypto
        module's ready flag at 0xac6e511 sits there and is not file-backed.
        """
        top = 0
        loads = []
        for i, p in enumerate(self.image["phdrs"]):
            p_type, _f, off, vaddr, _pa, filesz, memsz, _al = p
            if p_type != ps5elf.PT_LOAD or memsz == 0:
                continue
            loads.append((vaddr, filesz, off, i))
            top = max(top, vaddr + memsz)
        size = (top + PAGE - 1) & ~(PAGE - 1)
        got = self.libc.mmap(ctypes.c_void_p(DELTA), size, PROT_RWX,
                             MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED, -1, 0)
        if got in (None, ctypes.c_void_p(-1).value):
            raise SystemExit("mmap %#x bytes at %#x failed: %s"
                             % (size, DELTA, os.strerror(ctypes.get_errno())))
        data = self.image["data"]
        for vaddr, filesz, off, i in loads:
            if not filesz:
                continue
            mapped = self.image["maps"][i]
            src = mapped[0] if mapped else off
            body = data[src:src + filesz]
            buf = ctypes.create_string_buffer(body, len(body))
            self.libc.memmove(ctypes.c_void_p(vaddr + DELTA), buf, len(body))
        self.span = size

    def ptr(self, va):
        return ctypes.c_void_p(va + DELTA)

    def write(self, va, blob):
        buf = ctypes.create_string_buffer(bytes(blob), len(blob))
        self.libc.memmove(self.ptr(va), buf, len(blob))

    def read(self, va, size):
        return ctypes.string_at(self.ptr(va), size)

    def alloc(self, size, zero=True):
        got = self.libc.mmap(None, size, PROT_RWX,
                             MAP_PRIVATE | MAP_ANONYMOUS, -1, 0)
        if got in (None, ctypes.c_void_p(-1).value):
            raise SystemExit("alloc failed: %s" % os.strerror(ctypes.get_errno()))
        if zero:
            ctypes.memset(ctypes.c_void_p(got), 0, size)
        return got

    # alloc() hands back a host pointer, not an image VA, so it must not go
    # through ptr(). These two keep the two address spaces apart.
    def hwrite(self, host_ptr, blob):
        buf = ctypes.create_string_buffer(bytes(blob), len(blob))
        self.libc.memmove(ctypes.c_void_p(host_ptr), buf, len(blob))

    def hread(self, host_ptr, size):
        return ctypes.string_at(ctypes.c_void_p(host_ptr), size)

    def _jump_stub(self, va, target):
        # mov rax, imm64 ; jmp rax
        self.write(va, b"\x48\xb8" + struct.pack("<Q", target) + b"\xff\xe0")

    def patch(self):
        MEMCPY_T = ctypes.CFUNCTYPE(ctypes.c_void_p, ctypes.c_void_p,
                                    ctypes.c_void_p, ctypes.c_size_t)

        def host_memcpy(dst, src, n):
            ctypes.memmove(dst, src, n)
            return dst

        self._memcpy_cb = MEMCPY_T(host_memcpy)
        mc = ctypes.cast(self._memcpy_cb, ctypes.c_void_p).value
        self._jump_stub(MEMCPY_INTERNAL, mc)
        self._jump_stub(MEMCPY_IMPORT, mc)

        # The stream-cipher init (0x3985bf0) clears its keystream buffer with
        # 0x84783b0(state+0x1101, 0, 16). That is an import thunk like memcpy,
        # so without a host body it jumps through a zero slot and faults --
        # which is exactly how the earlier direct calls died.
        MEMSET_T = ctypes.CFUNCTYPE(ctypes.c_void_p, ctypes.c_void_p,
                                    ctypes.c_int, ctypes.c_size_t)

        def host_memset(dst, value, n):
            ctypes.memset(dst, value & 0xFF, n)
            return dst

        self._memset_cb = MEMSET_T(host_memset)
        self._jump_stub(MEMSET_IMPORT,
                        ctypes.cast(self._memset_cb, ctypes.c_void_p).value)

        MALLOC_T = ctypes.CFUNCTYPE(ctypes.c_void_p, ctypes.c_size_t)

        def host_malloc(n):
            return self.libc.malloc(n)

        self._malloc_cb = MALLOC_T(host_malloc)
        self._jump_stub(ALLOC, ctypes.cast(self._malloc_cb, ctypes.c_void_p).value)

        guard = self.alloc(0x10)
        self.write(STACK_GUARD, struct.pack("<Q", guard))
        # Tell 0x43697c0 the crypto module is already initialised. The init it
        # would otherwise run decompresses a global table block that the
        # white-box path does not use -- the tables come from the blob.
        self.write(READY_FLAG, b"\x01")


def load_tables(img, blob):
    """0x255a3b0(blob, ctx, &out) -> host pointer to the 0x1100 table set."""
    blob_at = img.alloc(0x2000)
    img.hwrite(blob_at, blob)
    out_slot = img.alloc(0x10)
    ctx = img.alloc(0x40)
    PROTO = ctypes.CFUNCTYPE(ctypes.c_int, ctypes.c_void_p, ctypes.c_void_p,
                             ctypes.POINTER(ctypes.c_void_p))
    init = PROTO(img.ptr(INIT).value)
    rc = init(ctypes.c_void_p(blob_at), ctypes.c_void_p(ctx),
              ctypes.cast(out_slot, ctypes.POINTER(ctypes.c_void_p)))
    tables, = struct.unpack("<Q", img.hread(out_slot, 8))
    if not tables:
        raise SystemExit("0x%x produced no table set (rc %#x)" % (INIT, rc & 0xFFFFFFFF))
    return tables, rc


def run_decrypt(img, tables, data, iv):
    """0x2ae0890(tables, src, len, dst) with the IV written to tables+0x10f0."""
    img.hwrite(tables + STATE_OFF, iv)
    length = len(data)
    src = img.alloc(length + 0x20)
    dst = img.alloc(length + 0x20)
    img.hwrite(src, data)
    PROTO = ctypes.CFUNCTYPE(ctypes.c_int, ctypes.c_void_p, ctypes.c_void_p,
                             ctypes.c_size_t, ctypes.c_void_p)
    dec = PROTO(img.ptr(DECRYPT).value)
    rc = dec(ctypes.c_void_p(tables), ctypes.c_void_p(src),
             ctypes.c_size_t(length), ctypes.c_void_p(dst))
    return img.hread(dst, length), rc


def rpf9_geometry(hdr):
    magic, toc_end, idx_end, _names = struct.unpack_from("<IIII", hdr, 0)
    if magic != 0x52504639:
        raise SystemExit("not an RPF9 archive (magic %#x)" % magic)
    nsec, = struct.unpack_from("<H", hdr, 0x1A)
    bsz, = struct.unpack_from("<I", hdr, 0x1C)
    ncol, = struct.unpack_from("<H", hdr, 0x20)
    tail, = struct.unpack_from("<I", hdr, 0x30)
    a = 0x40
    b = a + ((nsec * 8 + 0xF) & ~0xF)
    c = (b + bsz + 0xF) & ~0xF
    return {"toc_end": toc_end, "idx_end": idx_end, "nsec": nsec, "bsz": bsz,
            "ncol": ncol, "tail": tail, "A": a, "B": b, "C": c}


def score(plain, geo):
    """Does the plaintext look like an RPF9 section table?"""
    nsec = geo["nsec"]
    bsz = geo["bsz"]
    problems = []
    if len(plain) < nsec * 8:
        problems.append("shorter than the %d-entry table" % nsec)
        return False, problems
    offs = []
    for i in range(nsec):
        sid, unk, off = struct.unpack_from("<HHI", plain, i * 8)
        offs.append(off)
        if not (1 <= sid <= 0x40):
            problems.append("entry %d: id %#x outside 1..0x40" % (i, sid))
        if off >= bsz:
            problems.append("entry %d: offset %#x >= bsz %#x" % (i, off, bsz))
    if offs != sorted(offs):
        problems.append("offsets are not ascending: %s" % [hex(o) for o in offs])
    return not problems, problems


def column_name(h):
    if h in COLUMN_HASHES:
        return COLUMN_HASHES[h]
    swapped = int.from_bytes(h.to_bytes(8, "little"), "big")
    return COLUMN_HASHES.get(swapped)


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--eboot", default="../6RE/DUMPS/PS5Dump/eboot.bin")
    ap.add_argument("--archive", required=True)
    ap.add_argument("--key-id", type=lambda s: int(s, 0), default=0x10000005)
    ap.add_argument("--iv", default=DEFAULT_IV)
    ap.add_argument("--out", help="write the decrypted spans here")
    ap.add_argument("--hexdump", action="store_true")
    ap.add_argument("--no-stage2", action="store_true")
    args = ap.parse_args(argv)

    keyimg = ps5elf.load_image(args.eboot)
    rec = rpf9key.find_key(keyimg, args.key_id)
    if rec is None or not rec["ptr"]:
        raise SystemExit("key id %#x did not resolve" % args.key_id)
    blob = rpf9key.read_at(keyimg, rec["ptr"], rec["len"])
    print("key id %#x -> blob %#x (%d bytes)" % (args.key_id, rec["ptr"], len(blob)))

    hdr = open(args.archive, "rb").read(0x40)
    geo = rpf9_geometry(hdr)
    print("archive %s" % os.path.basename(args.archive))
    print("  toc_end %#x  idx_end %#x  nsec %d  bsz %#x  ncol %d  tail %#x"
          % (geo["toc_end"], geo["idx_end"], geo["nsec"], geo["bsz"],
             geo["ncol"], geo["tail"]))
    print("  A %#x  B %#x  C %#x" % (geo["A"], geo["B"], geo["C"]))

    start = geo["A"]
    end = geo["B"] + geo["bsz"] - geo["tail"]
    length = end - start
    if length <= 0 or length % 0x10:
        raise SystemExit("span [%#x,%#x) is %d bytes, not a multiple of 16"
                         % (start, end, length))
    print("  stage 1 span [%#x, %#x) = %#x bytes" % (start, end, length))

    img = Image(args.eboot)
    img.patch()
    print("  mapped %#x bytes at %#x" % (img.span, DELTA))

    tables, rc = load_tables(img, blob)
    print("  0x%x returned %#x -> table set at %#x"
          % (INIT, rc & 0xFFFFFFFF, tables))
    head = img.hread(tables, TABLES_SIZE)
    print("  rk[0..3] = %s"
          % " ".join("%08x" % struct.unpack_from(">I", head, 4 * i)[0]
                     for i in range(4)))
    print("  state at +0x10f0 = %s (caller-supplied)"
          % head[STATE_OFF:STATE_OFF + 16].hex())

    iv = bytes.fromhex(args.iv)
    if len(iv) != 16:
        raise SystemExit("IV must be 16 bytes")

    raw = open(args.archive, "rb").read(geo["idx_end"])
    plain, rc = run_decrypt(img, tables, raw[start:end], iv)
    print("  stage 1: 0x%x returned %#x" % (DECRYPT, rc & 0xFFFFFFFF))
    if args.hexdump:
        for i in range(0, min(len(plain), 0x100), 16):
            print("    %#06x  %s"
                  % (i, " ".join("%02x" % b for b in plain[i:i + 16])))

    ok, problems = score(plain, geo)
    print()
    print("section table at [A,B):")
    for i in range(min(geo["nsec"], 16)):
        sid, unk, off = struct.unpack_from("<HHI", plain, i * 8)
        print("  %2d  id %#06x  unk %#06x  offset %#010x" % (i, sid, unk, off))
    print()
    print("ORACLE(stage 1): %s"
          % ("PASS - parses as an RPF9 section table" if ok else "FAIL"))
    for p in problems[:10]:
        print("  - %s" % p)

    stage2_ok = None
    plain2 = b""
    if ok and not args.no_stage2:
        sec1 = geo["B"] - start
        key_id, typ = struct.unpack_from("<IH", plain, sec1)
        iv2 = plain[sec1 + 6:sec1 + 22]
        print()
        print("stage 2: section 1 crypto record -> key id %#x, type %#x"
              % (key_id, typ))
        print("         IV %s" % iv2.hex())
        rec2 = rpf9key.find_key(keyimg, key_id)
        if rec2 is None or not rec2["ptr"]:
            print("  key id %#x is not in the key list; stopping here" % key_id)
        else:
            blob2 = rpf9key.read_at(keyimg, rec2["ptr"], rec2["len"])
            print("  key id %#x -> blob %#x" % (key_id, rec2["ptr"]))
            t2, _ = load_tables(img, blob2)
            s2 = geo["B"] + geo["bsz"] - geo["tail"]
            plain2, rc2 = run_decrypt(img, t2, raw[s2:geo["idx_end"]], iv2)
            print("  stage 2 span [%#x, %#x)" % (s2, geo["idx_end"]))
            print("  stage 2: 0x%x returned %#x" % (DECRYPT, rc2 & 0xFFFFFFFF))
            coff = geo["C"] - s2
            hits = 0
            print("  column table at C:")
            for i in range(geo["ncol"]):
                h, = struct.unpack_from("<Q", plain2, coff + i * 24)
                name = column_name(h)
                print("    %d  %016x  %s" % (i, h, name or "(unrecognised)"))
                hits += 1 if name else 0
            stage2_ok = hits > 0
            print("ORACLE(stage 2): %s"
                  % ("PASS - %d/%d column hashes recognised"
                     % (hits, geo["ncol"]) if stage2_ok
                     else "FAIL - no recognised column hash"))

    if args.out:
        with open(args.out, "wb") as fh:
            fh.write(plain)
            fh.write(plain2)
        print("wrote %s (%d + %d bytes)" % (args.out, len(plain), len(plain2)))

    if not ok:
        return 1
    if stage2_ok is False:
        return 1
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
