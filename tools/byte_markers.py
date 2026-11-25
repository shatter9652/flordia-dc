#!/usr/bin/env python3
"""Match byte markers from reference binaries into the GTA VI executable.

The GTA VI executable is stripped, but two reference corpora survive with code
that came from the same engine and the same toolchain family:

  * the Xbox GDK DLLs the title links against (`libHttpClient.GDK.dll`,
    `Bink2Scarlett.dll`, ...) - MSVC x64 PE images with an export table and
    `.pdata`, so every function there has a name and exact bounds;
  * the GTA V and RDR2 PS4 eboots - stripped ELF64 images, but `.eh_frame_hdr`
    still lists every function start, which is enough to fingerprint bodies.

Matching is relocation-agnostic. A byte that is part of a 32-bit value pointing
back into the image is a call/jump displacement or a RIP-relative address and
differs between builds; those bytes are masked out. What remains is the
instruction and constant skeleton, hashed into 8-byte shingles and looked up in
an index of every `.pdata` function in the executable.

    python3 gta6decomp/tools/byte_markers.py --corpus gdk
    python3 gta6decomp/tools/byte_markers.py --corpus gtav,rrd2 --min-shared 8

Output goes to `gta6decomp/matches/` as TSV so a Ghidra script can apply the
names. Nothing here writes to the executable.
"""

import argparse
import os
import sys

import numpy as np

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
sys.path.insert(0, HERE)
from pe import PE, ELF  # noqa: E402

DEFAULT_EXE = os.path.join(ROOT, "6RE", "DUMP", "game_scarlett_master.exe")
DEFAULT_GDK_DUMP = os.path.join(ROOT, "6RE", "DUMP")
DEFAULT_PS4 = {
    "gtav": os.path.join(ROOT, "roms", "gtavps4", "upd", "eboot.bin"),
    "rdr2": os.path.join(ROOT, "roms", "rdr2ps4", "upd", "eboot.bin"),
}
SHINGLE = 8          # bytes per shingle
STRIDE = 4           # shingle step; every other 4-byte boundary
MIN_FUNC = 24
MAX_FUNC = 4000


# ---------------------------------------------------------------- masking
def mask_relocations(text, image_size):
    """Boolean per byte: True when the byte belongs to an image-relative value.

    A 4-byte little-endian value at p is treated as a rel32 displacement when
    `p + 4 + value` lands inside the image, which is exactly how a call, jump or
    RIP-relative operand stores its target. Masking those bytes removes build
    addresses without touching opcodes or immediates.
    """
    n = len(text)
    mask = np.zeros(n, dtype=bool)
    usable = (n // 4) * 4
    if usable < 8:
        return mask
    # Instructions are not 4-byte aligned, so a call's rel32 can start at any
    # phase. Sweep all four phases, mark the first byte of each image-relative
    # value, then dilate by four bytes.
    starts = np.zeros(n, dtype=bool)
    for phase in range(4):
        count = (n - phase) // 4
        if count < 2:
            continue
        u32 = np.frombuffer(text[phase:phase + count * 4], dtype="<u4")
        v = u32.astype(np.int64)
        signed = np.where(v >= 0x80000000, v - 0x100000000, v)
        pos = phase + np.arange(count, dtype=np.int64) * 4
        target = pos + 4 + signed
        inside = (target >= 0) & (target < image_size)
        if not inside.any():
            continue
        view = starts[phase::4]
        view[:count] |= inside
    if not starts.any():
        return mask
    mask[:] = starts
    for k in range(1, 4):
        mask[k:] |= starts[:-k]
    return mask


def shingle_hashes(text, mask, start, end):
    """Hashes of unmasked 8-byte shingles inside [start, end), plus positions."""
    lo = start
    hi = min(end, len(text)) - SHINGLE
    if hi <= lo:
        return np.empty(0, np.uint32), np.empty(0, np.int64)
    lo = ((lo + 3) // 4) * 4          # u32 reads must be 4-byte aligned
    offs = np.arange(lo, hi, STRIDE, dtype=np.int64)
    if offs.size == 0:
        return np.empty(0, np.uint32), np.empty(0, np.int64)
    ok = ~mask[offs]
    for k in range(1, SHINGLE):
        ok &= ~mask[offs + k]
    offs = offs[ok]
    if offs.size == 0:
        return np.empty(0, np.uint32), np.empty(0, np.int64)
    usable = (len(text) // 4) * 4
    u32 = np.frombuffer(text[:usable], dtype="<u4")
    offs = offs[offs // 4 + 1 < u32.shape[0]]
    if offs.size == 0:
        return np.empty(0, np.uint32), np.empty(0, np.int64)
    a = u32[offs // 4].astype(np.uint64)
    b = u32[offs // 4 + 1].astype(np.uint64)
    h = ((a * np.uint64(0x9E3779B1)) ^ (b * np.uint64(0x85EBCA6B))) & np.uint64(0xFFFFFFFF)
    return h.astype(np.uint32), offs


# ------------------------------------------------------------ reference set
class RefFunction:
    __slots__ = ("addr", "size", "name", "source")

    def __init__(self, addr, size, name, source):
        self.addr = addr
        self.size = size
        self.name = name
        self.source = source


def gdk_functions(dump_dir):
    """Named functions from the GDK/middleware DLLs in the dump."""
    out, dlls = [], []
    for name in sorted(os.listdir(dump_dir)):
        if not name.lower().endswith(".dll"):
            continue
        path = os.path.join(dump_dir, name)
        try:
            pe = PE(path)
        except Exception:
            continue
        if pe.machine != 0x8664:
            continue
        dlls.append(name)
        exports = {e["rva"]: e["name"] for e in pe.exports() if e.get("name")}
        pdata = pe.pdata()
        if pdata:
            for begin, end, _u in pdata:
                label = exports.get(begin, "")
                if not label:
                    continue
                out.append(RefFunction(begin, end - begin, label, name))
        else:
            for rva, label in exports.items():
                out.append(RefFunction(rva, 0, label, name))
    return out, dlls


def elf_functions(path, label):
    """Function ranges from .eh_frame_hdr; names are empty (stripped image)."""
    elf = ELF(path)
    starts = elf.function_starts()
    ranges = elf.executable_ranges()

    def inside(va):
        return any(a <= va < b for a, b in ranges)

    starts = [s for s in starts if inside(s)]
    out = []
    for i, start in enumerate(starts):
        end = starts[i + 1] if i + 1 < len(starts) else start + 256
        size = min(end - start, MAX_FUNC)
        if size >= MIN_FUNC:
            out.append(RefFunction(start, size, "", label))
    return out, elf


# --------------------------------------------------------------- VI corpus
def vi_functions(pe):
    text = pe.sections
    tx = next((s for s in text if s["name"] == ".text"), None)
    if tx is None:
        raise SystemExit("no .text section")
    funcs = []
    for begin, end, _u in pe.pdata():
        if begin < tx["va"] or end > tx["va"] + tx["vsize"]:
            continue
        size = end - begin
        if MIN_FUNC <= size <= MAX_FUNC:
            funcs.append((begin, end))
    funcs.sort()
    return tx, funcs


def build_index(text_bytes, image_size, funcs, tx_va):
    """Vectorised shingle index: hash -> function id, sorted for lookup."""
    n = len(text_bytes)
    usable = (n // 4) * 4
    mask = mask_relocations(text_bytes, image_size)
    # Index every shingle, masked or not. A relocation is ~4 bytes of every
    # instruction stream, so requiring 8 unmasked bytes would throw away almost
    # all windows; a shingle that happens to include a displacement simply fails
    # to match, which is the correct outcome. The mask is only used to score the
    # candidate pairs afterwards.
    offs = np.arange(0, usable - SHINGLE, STRIDE, dtype=np.int32)
    u32 = np.frombuffer(text_bytes[:usable], dtype="<u4")
    idx = offs.astype(np.int64) // 4
    keep = idx + 1 < u32.shape[0]
    idx = idx[keep]
    offs = offs[keep]
    a = u32[idx].astype(np.uint64)
    b = u32[idx + 1].astype(np.uint64)
    h = ((a * np.uint64(0x9E3779B1)) ^ (b * np.uint64(0x85EBCA6B))).astype(np.uint32)

    starts = np.array([f[0] for f in funcs], dtype=np.int64) - tx_va
    ends = np.array([f[1] for f in funcs], dtype=np.int64) - tx_va
    fi = np.searchsorted(starts, offs, side="right") - 1
    valid = fi >= 0
    fi, offs, h = fi[valid], offs[valid], h[valid]
    valid = (offs + SHINGLE) <= ends[fi]
    h, fi = h[valid], fi[valid]
    del offs

    order = np.argsort(h, kind="stable")
    return {"hash": h[order], "fid": fi[order].astype(np.int32),
            "funcs": funcs, "mask": mask}


def match_reference(ref_bytes, ref_len, index, min_shared, min_cov):
    text = index["text"]
    mask = index["mask"]
    h, p = shingle_hashes(ref_bytes, np.zeros(len(ref_bytes), dtype=bool), 0, ref_len)
    if h.size == 0:
        return []
    uniq = np.unique(h)
    lo = np.searchsorted(index["hash"], uniq, side="left")
    hi = np.searchsorted(index["hash"], uniq, side="right")
    counts = hi - lo
    keep = counts > 0
    if not keep.any():
        return []
    lo, hi, counts = lo[keep], hi[keep], counts[keep]
    # accumulate per candidate function without building huge intermediate lists
    total = int(counts.sum())
    if total > 4_000_000:
        return []
    fid = np.concatenate([index["fid"][a:b] for a, b in zip(lo, hi)])
    vals, cnt = np.unique(fid, return_counts=True)
    order = np.argsort(cnt)[::-1][:8]
    out = []
    for i in order:
        shared = int(cnt[i])
        cov = shared / float(uniq.size)
        if shared < min_shared or cov < min_cov:
            continue
        f = index["funcs"][int(vals[i])]
        out.append((int(vals[i]), f[0], f[1] - f[0], shared, cov))
    return out


def verify(ref_bytes, ref_len, vi_text, index, fid, vi_rva, vi_size):
    """Fraction of equal bytes at unmasked positions, best of small shifts."""
    mask = index["mask"]
    off = vi_rva - index["tx_va"]
    best = 0.0
    for shift in range(0, 17):
        n = min(ref_len, vi_size) - shift
        if n < 16:
            break
        a = np.frombuffer(ref_bytes[:n], dtype=np.uint8)
        b = np.frombuffer(vi_text[off + shift:off + shift + n], dtype=np.uint8)
        m = mask[off + shift:off + shift + n]
        usable = ~m
        if usable.sum() < 16:
            continue
        frac = float((a[usable] == b[usable]).mean())
        best = max(best, frac)
    return best


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--exe", default=DEFAULT_EXE)
    ap.add_argument("--corpus", default="gdk,gtav",
                    help="comma list of gdk,gtav,rdr2")
    ap.add_argument("--out", default=os.path.join(ROOT, "gta6decomp", "matches"))
    ap.add_argument("--min-shared", type=int, default=6)
    ap.add_argument("--min-cov", type=float, default=0.40)
    ap.add_argument("--min-bytes", type=float, default=0.80)
    ap.add_argument("--limit", type=int, default=0, help="cap reference functions (debug)")
    ap.add_argument("--self-test", type=int, default=0,
                    help="look up N random VI functions in the index and report hits")
    args = ap.parse_args()

    corpora = [c.strip() for c in args.corpus.split(",") if c.strip()]
    pe = PE(args.exe)
    tx, funcs = vi_functions(pe)
    text = pe.data[tx["raw_off"]:tx["raw_off"] + tx["vsize"]]
    print("VI: %d .pdata functions in .text (%.1f MB)" % (len(funcs), len(text) / 1e6))

    refs = []
    if "gdk" in corpora:
        g, dlls = gdk_functions(DEFAULT_GDK_DUMP)
        print("GDK: %d named functions from %d DLLs" % (len(g), len(dlls)))
        refs.extend(g)
    for key in ("gtav", "rdr2"):
        if key in corpora and os.path.isfile(DEFAULT_PS4[key]):
            f, _elf = elf_functions(DEFAULT_PS4[key], key)
            print("%s: %d .eh_frame functions" % (key.upper(), len(f)))
            refs.extend(f)
    if args.limit:
        refs = refs[:args.limit]
    print("reference functions:", len(refs))

    index = build_index(text, pe.size_of_image, funcs, tx["va"])
    if index is None:
        raise SystemExit("no shingles")
    index["text"] = text
    index["tx_va"] = tx["va"]
    print("shingles indexed: %d" % index["hash"].size)

    if args.self_test:
        rng = np.random.default_rng(7)
        picks = rng.choice(len(funcs), size=min(args.self_test, len(funcs)), replace=False)
        hits = 0
        for i in picks:
            b, e = funcs[int(i)]
            blob = text[b - tx["va"]:e - tx["va"]]
            cands = match_reference(blob, len(blob), index, args.min_shared, args.min_cov)
            if any(c[1] == b for c in cands):
                hits += 1
        print("SELFTEST|%d/%d functions found their own index entry" % (hits, len(picks)))

    os.makedirs(args.out, exist_ok=True)
    per_source = {}
    cache = {}
    for n, ref in enumerate(refs):
        if ref.source not in cache:
            if ref.source.startswith("gtav") or ref.source.startswith("rdr2"):
                elf = ELF(DEFAULT_PS4[ref.source])
                blob = elf.read(ref.addr, ref.size)
            else:
                dll = PE(os.path.join(DEFAULT_GDK_DUMP, ref.source))
                blob = dll.read(ref.addr, ref.size)
            cache[ref.source] = blob
        blob = cache[ref.source]
        if not blob or len(blob) < MIN_FUNC:
            continue
        cands = match_reference(blob, len(blob), index, args.min_shared, args.min_cov)
        for fid, vi_rva, vi_size, shared, cov in cands:
            eq = verify(blob, len(blob), text, index, fid, vi_rva, vi_size)
            if eq < args.min_bytes:
                continue
            per_source.setdefault(ref.source, []).append(
                (vi_rva, vi_size, ref.addr, ref.size, ref.name, shared, cov, eq))
        if (n + 1) % 20000 == 0:
            print("  matched %d/%d refs" % (n + 1, len(refs)))

    total = 0
    for source, rows in sorted(per_source.items()):
        rows.sort(key=lambda r: (-r[7], -r[6]))
        name = "bytes_%s.tsv" % source.replace(".dll", "").replace(".", "_")
        path = os.path.join(args.out, name)
        with open(path, "w", encoding="utf-8", newline="\n") as handle:
            handle.write("vi_rva\tvi_size\tref_addr\tref_size\tref_name\tshared\tcoverage\tequal\n")
            for row in rows:
                handle.write("%d\t%d\t%d\t%d\t%s\t%d\t%.3f\t%.3f\n" % row)
        print("%-28s %6d matches -> %s" % (source, len(rows), path))
        total += len(rows)
    print("TOTAL|%d matches across %d corpora" % (total, len(per_source)))


if __name__ == "__main__":
    main()
