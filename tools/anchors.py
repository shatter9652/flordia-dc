#!/usr/bin/env python3
"""Find the code that loads a literal, without Ghidra and without analysis.

Each decompilation objective starts from a subsystem we cannot name from a
symbol table: the image is a stripped retail PE with no RTTI for gameplay code.
What it does carry is a handful of literals that only that subsystem would
load -- `%s.rpf` for the archive layer, `Crime Tuning` for the wanted tuning
block, `Camera_Move` for the camera director. This tool turns such a literal
into a function address, in two phases, because MSVC uses both forms:

  1. **direct** -- a RIP-relative operand resolving to the literal's RVA
     (`target = position + 4 + disp`; every byte phase, since `FF 15 disp32`
     puts the displacement at an odd phase).
  2. **pointer slot** -- an 8-byte absolute pointer (`image_base + rva`) in a
     read-only section, then the RIP-relative operand that loads that slot.
     Long-lived string tables and vtables are built this way, which is why a
     literal can have zero direct references and still be used.

Each hit is mapped to its function through `.pdata`, which is complete for this
image (299,257 entries) even though no function has been disassembled. Entries
are `(begin, end, unwind)`.

    python3 gta6decomp/tools/anchors.py --literal "%s.rpf"
    python3 gta6decomp/tools/anchors.py --keyword fuel,petrol,crime
    python3 gta6decomp/tools/anchors.py --all

`--all` writes `matches/objective_anchors.tsv`, one row per (literal, xref,
containing function), which `docs/objectives.md` links to.
"""

import argparse
import bisect
import os
import re
import struct
import sys

import numpy as np

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(os.path.dirname(HERE))
sys.path.insert(0, HERE)
from pe import PE  # noqa: E402

EXE = os.path.join(ROOT, "6RE", "DUMP", "game_scarlett_master.exe")

OBJECTIVES = {
    "rpf": [
        "%s.rpf",
        "driverSettings_RpfConfig",
        "driverSettings_RpfDirectory",
        "fiDeviceDirectStorage",
    ],
    "fuel": [
        "LOW_FUELH",
        "fuelLevel",
        "FuelLevel",
        "fuelTank",
        "FuelTank",
        "fuelConsumption",
    ],
    "police": [
        "Wanted Tuning",
        "Crime Tuning",
        "CrimeReport",
        "CrimeChainId",
        "CrimeStgEndRsn",
        "CrimeCurr",
        "CrimeTgt",
        "WantedLevel",
    ],
    "taunt": [
        "taunt",
        "Taunt",
        "TAUNT",
        "tauntAnim",
        "Provoke",
        "provoke",
        "Diffuse",
        "Threaten",
        "threaten",
        "Aggravate",
        "aggravate",
    ],
    "camera": [
        "CameraSetting",
        "Camera_Move",
        "EntityInteractionCamera",
        "ptxu_CameraEvolution",
        "core_cameras_cinematic",
        "SlowMo",
        "slowMo",
        "InjuryCamera",
    ],
}


# Format magics are the only structural evidence a stripped image gives for a
# container layer. They are compared as little-endian 32-bit immediates, which
# is how MSVC spells a `cmp eax, 'RPF9'`-style test.
MAGICS = {
    "rpf": [("RPF9", 0x52504639), ("RPF8", 0x52504638), ("RPF7", 0x52504637)],
}


def immediate_functions(pe, value, begins, rows):
    """Functions containing a 4-byte immediate equal to `value`."""
    text_section = next(s for s in pe.sections if s["name"] == ".text")
    raw = text_section["raw_off"]
    body = pe.data[raw:raw + text_section["vsize"]]
    base = text_section["va"]
    pattern = struct.pack("<I", value)
    found = []
    start = 0
    while True:
        off = body.find(pattern, start)
        if off < 0:
            break
        start = off + 1
        fn = containing(begins, rows, base + off)
        if fn:
            found.append((base + off, fn[0], fn[1]))
    return found


def literal_rvas(pe, literal):
    """Every RVA whose bytes spell `literal`."""
    out = []
    pattern = literal.encode("latin-1")
    start = 0
    while True:
        off = pe.data.find(pattern, start)
        if off < 0:
            break
        start = off + 1
        for section in pe.sections:
            if section["raw_off"] <= off < section["raw_off"] + section["raw_size"]:
                out.append((section["va"] + (off - section["raw_off"]),
                            off, section["name"]))
                break
    return out


def pointer_slots(pe, rvas):
    """Absolute 8-byte pointers to any of `rvas`; returns {slot_rva: target_rva}."""
    if not rvas:
        return {}
    base = pe.image_base
    wanted = {base + rva: rva for rva in rvas}
    slots = {}
    for section in pe.sections:
        # Only read-only data can hold a static pointer, and scanning .text
        # would produce false positives from immediates.
        if section["chars"] & 0x20000000 or section["name"] == ".text":
            continue
        raw = section["raw_off"]
        size = min(section["raw_size"], section["vsize"])
        body = pe.data[raw:raw + size]
        limit = len(body) - 7
        for off in range(0, limit, 8):
            value = struct.unpack_from("<Q", body, off)[0]
            target = wanted.get(value)
            if target is not None:
                slots[section["va"] + off] = target
    return slots


def rip_xrefs(pe, targets, chunk=16 << 20):
    """One sweep of .text; returns {target_rva: [xref_rva, ...]}."""
    wanted = sorted(set(targets))
    if not wanted:
        return {}
    wanted_arr = np.array(wanted, dtype=np.int64)
    text_section = next(s for s in pe.sections if s["name"] == ".text")
    raw = text_section["raw_off"]
    size = text_section["vsize"]
    base = text_section["va"]
    body = pe.data[raw:raw + size]
    hits = {}
    for start in range(0, len(body) - 4, chunk):
        stop = min(start + chunk, len(body))
        window = body[start:stop + 4]
        if len(window) < 8:
            break
        for phase in range(4):
            n = (len(window) - phase) // 4
            if n <= 0:
                continue
            disp = np.frombuffer(window, dtype="<i4", count=n, offset=phase)
            # `n` counts 4-byte words, so the byte position of word k is 4*k.
            # Without the *4 every hit past the first few KiB was missed.
            pos = np.arange(n, dtype=np.int64) * 4 + start + phase
            resolved = base + pos + 4 + disp.astype(np.int64)
            slot = np.searchsorted(wanted_arr, resolved)
            slot[slot >= len(wanted_arr)] = 0
            for idx in np.nonzero(wanted_arr[slot] == resolved)[0]:
                target = int(resolved[idx])
                hits.setdefault(target, []).append(int(pos[idx]) + base)
    return hits


def load_pdata(pe):
    """`(begin, end)` pairs, sorted by begin. pdata is (begin, end, unwind)."""
    rows = sorted((r[0], r[1]) for r in pe.pdata() if r[1] > r[0])
    return [r[0] for r in rows], rows


def containing(begins, rows, rva):
    i = bisect.bisect_right(begins, rva) - 1
    if i < 0:
        return None
    begin, end = rows[i]
    if begin <= rva < end:
        return begin, end - begin
    return None


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--exe", default=EXE)
    ap.add_argument("--literal", action="append", default=[])
    ap.add_argument("--objective", action="append", default=[],
                    choices=sorted(OBJECTIVES))
    ap.add_argument("--all", action="store_true")
    ap.add_argument("--keyword", default="",
                    help="comma-separated substring probes over every ASCII "
                         "string in the image (report only, no xrefs)")
    ap.add_argument("--out", default=os.path.join(ROOT, "gta6decomp", "matches",
                                                  "objective_anchors.tsv"))
    args = ap.parse_args()

    pe = PE(args.exe)

    if args.keyword:
        words = [w.strip() for w in args.keyword.split(",") if w.strip()]
        buckets = {w: set() for w in words}
        for m in re.finditer(rb"[\x20-\x7e]{5,}", pe.data):
            s = m.group().decode("latin-1")
            low = s.lower()
            for word in words:
                if word.lower() in low:
                    buckets[word].add(s[:120])
        for word in words:
            hits = buckets[word]
            print("\n### %s  (%d unique)" % (word, len(hits)))
            for s in sorted(hits)[:20]:
                print("   ", s)
        return

    literals = list(args.literal)
    objectives = sorted(OBJECTIVES) if args.all else list(args.objective)
    for name in objectives:
        literals.extend(OBJECTIVES[name])
    literals = list(dict.fromkeys(literals))
    if not literals:
        ap.error("give --literal, --objective or --all")

    begins, rows = load_pdata(pe)

    per_literal = {}
    all_literal_rvas = set()
    for literal in literals:
        rvas = literal_rvas(pe, literal)
        per_literal[literal] = rvas
        all_literal_rvas.update(r[0] for r in rvas)

    slots = pointer_slots(pe, all_literal_rvas)
    slot_owner = {}
    for slot_rva, target_rva in slots.items():
        slot_owner[slot_rva] = target_rva

    xrefs = rip_xrefs(pe, all_literal_rvas | set(slots))

    out_rows = []
    seen = set()
    for literal in literals:
        rvas = per_literal[literal]
        direct = 0
        indirect = 0
        for rva, off, section in rvas:
            for x in xrefs.get(rva, ()):
                direct += 1
                out_rows.append((literal, rva, section, x, "direct"))
            for slot_rva, target in slots.items():
                if target != rva:
                    continue
                for x in xrefs.get(slot_rva, ()):
                    indirect += 1
                    out_rows.append((literal, slot_rva, section, x, "ptr"))
        funcs = {containing(begins, rows, r[3])[0]
                 for r in out_rows if r[0] == literal
                 and containing(begins, rows, r[3])}
        print("%-30s in-image=%d direct=%d ptr=%d functions=%d" % (
            literal, len(rvas), direct, indirect, len(funcs)))

    # Magic immediates: the structural anchors, filed under their objective.
    magic_rows = []
    for objective, entries in sorted(MAGICS.items()):
        if objectives and objective not in objectives:
            continue
        for label, value in entries:
            for imm_rva, fn_rva, fn_size in immediate_functions(pe, value, begins, rows):
                magic_rows.append((objective, "imm:%s" % label, value, imm_rva,
                                   fn_rva, fn_size))
                print("    imm  %s 0x%08X at %08x -> FUN_%08x (%d B)" % (
                    label, value, imm_rva, fn_rva, fn_size))

    written = 0
    os.makedirs(os.path.dirname(args.out), exist_ok=True)
    with open(args.out, "w", encoding="utf-8") as handle:
        handle.write("objective\tliteral\trva\tsection\tvia\txref_rva"
                     "\tfunc_rva\tfunc_size\n")
        for literal, rva, section, x, via in sorted(out_rows):
            if (literal, x) in seen:
                continue
            seen.add((literal, x))
            fn = containing(begins, rows, x)
            objective = ""
            for name, entries in OBJECTIVES.items():
                if literal in entries:
                    objective = name
                    break
            handle.write("%s\t%s\t%08x\t%s\t%s\t%08x\t%s\t%s\n" % (
                objective, literal.replace("\t", " "), rva, section, via, x,
                "%08x" % fn[0] if fn else "", fn[1] if fn else ""))
            written += 1
            print("    %-4s xref %08x -> %s (%s B)" % (
                via, x, "FUN_%08x" % fn[0] if fn else "?", fn[1] if fn else "?"))
        for objective, literal, value, imm_rva, fn_rva, fn_size in magic_rows:
            handle.write("%s\t%s\t%08x\t.text\timm\t%08x\t%08x\t%d\n" % (
                objective, literal, imm_rva, imm_rva, fn_rva, fn_size))
            written += 1
    print("\n%d anchors -> %s" % (written, args.out))


if __name__ == "__main__":
    main()
