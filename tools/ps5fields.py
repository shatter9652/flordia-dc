#!/usr/bin/env python3
"""Recover a RAGE settings resolver: joaat field-name hash -> struct byte offset.

Several settings classes find a field by name. Their `GetFieldPtr(hash)` is a
compiled binary search over *sorted* joaat constants, and it is trivially
readable because every leaf is `mov eax, <offset>`:

    cmp esi, 0x8420c727        ; joaat("lowFuel")
    je  0x44baeee              ; -> mov eax, 0xe0 / jmp epilogue
    ...                        ; default: xor eax, eax (unknown name -> 0)

Two details make a naive scan lie, and both mattered here:

* the search emits `cmp esi, K-1 ; jle left` before `cmp esi, K ; je leaf`.
  K-1 is a *bound*, not a field. Pairing every cmp with the next `je` (as an
  earlier version of this tool did) invents a phantom field at K-1 for every
  real one, which is where "38 unnamed hashes" came from;
* some leaves are reached by `cmp ; jne default` and fall through into the
  value loads, so they have no `je` at all.

Names are recovered by hashing candidate strings, since a hash cannot be
inverted. `--vocab` accepts files or directories and harvests identifiers from
them; the eboot's own pooled strings are another useful corpus.

    python3 tools/ps5fields.py --func 0x44bad90:0x44baf50 \\
        --vocab ../MiscRef/GTAVSRC/src/dev_ng/game/audio/gameobjects.h
"""

import argparse
import os
import re
import sys

from capstone import Cs, CS_ARCH_X86, CS_MODE_64

HERE = os.path.dirname(os.path.abspath(__file__))
if HERE not in sys.path:
    sys.path.insert(0, HERE)

import ps5elf            # noqa: E402

# Field names of AircraftWarningSettings, whose resolver the eboot carries at
# 0x44bad90. They come from the generated `GetFieldPtr` switch in GTAVSRC
# (game/audio/gameobjects.cpp), so the spelling is the source's, not a guess.
CANDIDATES = """
MinTimeBetweenDamageReports TargetedLock MissleFired AcquiringTarget
TargetAcquired AllClear PlaneWarningStall AltitudeWarningLow AltitudeWarningHigh
AltitudeWarning Engine_1_Fire Engine_2_Fire Engine_3_Fire Engine_4_Fire
DamagedSerious DamagedCritical Overspeed Terrain PullUp LowFuel
lowFuel lowFuelWarning fuel fuelTank fuelLevel fuelConsumption fuelRate
fuelBurn burnRate fuelCapacity fuelType fuelBoost fuelEconomy fuelGauge
fuelPercent fuelAmount fuelMax fuelCurrent fPetrolTankVolume fOilVolume
fInitialDriveForce fMass fDriveInertia fBrakeForce fSteeringLock
fTractionCurveMax fTractionCurveMin fSuspensionForce fSuspensionCompDamp
fSuspensionReboundDamp fSuspensionUpperLimit fSuspensionLowerLimit
nInitialDriveGears fInitialDriveMaxFlatVel fBrakeBiasFront fHandBrakeForce
fCollisionDamageMult fWeaponDamageMult fDeformationDamageMult
fEngineDamageMult fRollCentreHeightFront fRollCentreHeightRear
handling handlingId vehicleClass vehicleLayout maxHealth
""".split()

IDENT = re.compile(r"[A-Za-z_][A-Za-z0-9_.]{2,80}")


def joaat(text):
    h = 0
    for ch in text.lower().encode():
        h = (h + ch) & 0xFFFFFFFF
        h = (h + (h << 10)) & 0xFFFFFFFF
        h ^= h >> 6
    h = (h + (h << 3)) & 0xFFFFFFFF
    h ^= h >> 11
    h = (h + (h << 15)) & 0xFFFFFFFF
    return h


def segment(image, va):
    for i, p in enumerate(image["phdrs"]):
        if p[0] != 1 or not p[5]:
            continue
        if p[3] <= va < p[3] + p[5]:
            mapped = image["maps"][i]
            src = mapped[0] if mapped else p[2]
            return p[3], image["data"][src:src + p[5]]
    return None


def leaf(insns, index, addr, depth=0):
    """(eax, ecx) written by the value block at addr, following one jmp."""
    if depth > 3:
        return None
    i = index.get(addr)
    if i is None:
        return None
    eax = ecx = None
    for ins in insns[i:i + 12]:
        if ins.mnemonic == "mov" and ins.op_str.startswith("eax, "):
            try:
                eax = int(ins.op_str.split(", ")[1], 0)
            except ValueError:
                return None
        elif ins.mnemonic == "mov" and ins.op_str.startswith("ecx, "):
            try:
                ecx = int(ins.op_str.split(", ")[1], 0)
            except ValueError:
                pass
        elif ins.mnemonic == "jmp":
            sub = leaf(insns, index, int(ins.op_str, 16), depth + 1)
            if sub:
                if sub[0] is not None:
                    eax = sub[0]
                if sub[1] is not None:
                    ecx = sub[1]
            break
        elif ins.mnemonic in ("ret", "je", "jne"):
            break
    return None if eax is None else (eax, ecx)


def resolver(image, start, end, md):
    """[(hash, offset, aux)] for one resolver, bounds excluded."""
    base, body = segment(image, start)
    insns = list(md.disasm(body[start - base:end - base], start))
    index = {ins.address: i for i, ins in enumerate(insns)}
    pairs = []
    for i, ins in enumerate(insns):
        if ins.mnemonic != "cmp" or not ins.op_str.startswith("esi, "):
            continue
        try:
            key = int(ins.op_str.split(", ")[1], 0) & 0xFFFFFFFF
        except (IndexError, ValueError):
            continue
        if i + 1 >= len(insns):
            continue
        branch = insns[i + 1]
        if branch.mnemonic == "je":
            target = int(branch.op_str, 16)
        elif branch.mnemonic == "jne" and i + 2 < len(insns):
            # `cmp ; jne default` falls through into the loads; a `jne` that
            # leads to a subtree has a cmp/jmp next, not a value load.
            if not insns[i + 2].op_str.startswith("eax, "):
                continue
            target = insns[i + 2].address
        else:
            continue          # jle / jg / jge : this cmp is a search bound
        value = leaf(insns, index, target)
        if value:
            pairs.append((key, value[0], value[1]))
    return pairs


def harvest(paths):
    """Every identifier in the given files and directories."""
    names = set()
    for path in paths:
        files = []
        if os.path.isdir(path):
            for root, _dirs, entries in os.walk(path):
                files.extend(os.path.join(root, e) for e in entries)
        else:
            files.append(path)
        for name in files:
            try:
                with open(name, "r", errors="ignore") as handle:
                    text = handle.read()
            except OSError:
                continue
            for token in IDENT.findall(text):
                names.add(token)
                if "." in token:
                    names.add(token.rsplit(".", 1)[1])
    return names


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--eboot", default="../6RE/DUMPS/PS5Dump/eboot.bin")
    ap.add_argument("--func", action="append", required=True,
                    help="resolver range START:END")
    ap.add_argument("--vocab", action="append", default=[],
                    help="file or directory of names to hash (repeatable)")
    ap.add_argument("--neighbours", action="store_true",
                    help="also print every offset in order")
    args = ap.parse_args(argv)

    image = ps5elf.load_image(args.eboot)
    md = Cs(CS_ARCH_X86, CS_MODE_64)
    names = {}
    for candidate in list(CANDIDATES) + sorted(harvest(args.vocab)):
        names[joaat(candidate)] = candidate

    for spec in args.func:
        start, end = (int(v, 0) for v in spec.split(":"))
        pairs = resolver(image, start, end, md)
        if not pairs:
            print("== resolver FUN_%08x: no fields found" % start)
            continue
        offsets = sorted({p[1] for p in pairs})
        labelled = {h for h, _o, _a in pairs if h in names}
        print("== resolver FUN_%08x: %d fields, offsets %#x..%#x, %d named"
              % (start, len(pairs), offsets[0], offsets[-1], len(labelled)))
        by_offset = {}
        for h, off, aux in pairs:
            by_offset.setdefault(off, []).append((h, aux))
        for off in offsets:
            for h, aux in sorted(by_offset[off]):
                extra = "" if aux is None else "   (aux %#x)" % aux
                print("   +%#05x  %s%s" % (off, names.get(h, "%08x" % h), extra))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
