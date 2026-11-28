#!/usr/bin/env python3
"""Recover a RAGE field resolver: joaat name hash -> struct byte offset.

Several vehicle subsystems find a tuning field by hash. The resolver is a
compiled binary search over *sorted* joaat constants, and it is trivially
readable because every leaf is `mov eax, <offset>`:

    cmp esi, 0x8420c727        ; joaat("lowFuel")
    je  0x44b606d              ; -> mov eax, 0xe0 / jmp epilogue
    ...
    xor eax, eax               ; unknown name returns 0

Extracting the pairs turns "the fuel struct" into a table of proven offsets.
Names are recovered by hashing a candidate list, since a hash cannot be
inverted; the unresolved hashes are still offsets, they just have no name yet.

    python3 tools/ps5fields.py --eboot ../6RE/DUMPS/PS5Dump/eboot.bin \\
        --func 0x44bad90:0x44baf50 --func 0x44b5d10:0x44b60b0
"""

import argparse
import os
import sys

from capstone import Cs, CS_ARCH_X86, CS_MODE_64

HERE = os.path.dirname(os.path.abspath(__file__))
if HERE not in sys.path:
    sys.path.insert(0, HERE)

import ps5elf            # noqa: E402

CANDIDATES = """
fuel fuelTank fuelLevel lowFuel fuelConsumption fuelRate fuelBurn burnRate
fuelCapacity fuelType fuelBoost fuelBoostCharge fuelRefill fuelEconomy
fuelPrice fuelGauge fuelPercent fuelAmount fuelMax fuelCurrent
fInitialDriveForce fInitialDriveMaxFlatVel fInitialDragCoeff fMass
fDriveInertia fBrakeForce fBrakeFriction fHandBrakeForce fSteeringLock
fTractionCurveMax fTractionCurveMin fSuspensionForce fSuspensionCompDamp
fSuspensionReboundDamp fSuspensionUpperLimit fSuspensionLowerLimit
nInitialDriveGears fClutchChangeRateScaleUpShift fClutchChangeRateScaleDownShift
fPetrolTankVolume fOilVolume fSeatOffsetDistX fSeatOffsetDistY fSeatOffsetDistZ
fWeaponDamageMult fWeaponAccuracy fWeaponRange fWeaponClipSize
fMaxSpeed fMaxBraking fMaxTraction fAcceleration fDriveBiasFront
fSteeringLockRatio fTractionBiasFront fTractionLossMult fEngineDamageMult
fDeformationDamageMult fWeaponDamageMult fRollCentreHeightFront
fRollCentreHeightRear fAntiRollBarForce fAntiRollBarBiasFront
fSuspensionBiasFront fSuspensionBiasRear fBrakeBiasFront fBrakeBiasRear
fEnginePower fEngineTorque fEngineAcceleration fEngineInertia
fTankCapacity fFuelTankSize fFuelConsumptionRate fFuelLowThreshold
fLowFuelThreshold fLowFuelWarning threshold warning lowFuelWarning
fUvAnimationMult fClothBoneScale fHelicopterTurbineForce
""".split()


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


def resolver(image, start, end, md):
    """[(hash, offset)] for one resolver, following one jump level."""
    base, body = segment(image, start)
    insns = list(md.disasm(body[start - base:end - base], start))
    leaves = {}
    for ins in insns:
        if ins.mnemonic == "mov" and ins.op_str.startswith("eax, 0x"):
            leaves[ins.address] = int(ins.op_str.split(", ")[1], 16)
    pairs = []
    for i, ins in enumerate(insns):
        if ins.mnemonic != "cmp" or "esi" not in ins.op_str:
            continue
        try:
            value = int(ins.op_str.split(", ")[1], 0)
        except (IndexError, ValueError):
            continue
        target = None
        for follow in insns[i + 1:i + 4]:
            if follow.mnemonic == "je":
                target = int(follow.op_str, 16)
                break
        if target is None:
            continue
        if target in leaves:
            pairs.append((value & 0xFFFFFFFF, leaves[target]))
            continue
        for follow in insns:
            if follow.address != target:
                continue
            if follow.mnemonic == "mov" and follow.op_str.startswith("eax, 0x"):
                pairs.append((value & 0xFFFFFFFF, int(follow.op_str.split(", ")[1], 16)))
            elif follow.mnemonic == "jmp":
                hop = int(follow.op_str, 16)
                if hop in leaves:
                    pairs.append((value & 0xFFFFFFFF, leaves[hop]))
            break
    return pairs


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--eboot", default="../6RE/DUMPS/PS5Dump/eboot.bin")
    ap.add_argument("--func", action="append", required=True,
                    help="resolver range START:END")
    ap.add_argument("--neighbours", action="store_true",
                    help="also print offsets in order with their names")
    args = ap.parse_args(argv)

    image = ps5elf.load_image(args.eboot)
    md = Cs(CS_ARCH_X86, CS_MODE_64)
    names = {joaat(n): n for n in CANDIDATES}

    for spec in args.func:
        start, end = (int(v, 0) for v in spec.split(":"))
        pairs = resolver(image, start, end, md)
        print("== resolver FUN_%08x: %d fields, offsets %#x..%#x"
              % (start, len(pairs), min(p[1] for p in pairs),
                 max(p[1] for p in pairs)))
        by_offset = {}
        for h, off in sorted(set(pairs), key=lambda p: p[1]):
            by_offset.setdefault(off, []).append(h)
        for off in sorted(by_offset):
            labelled = [names.get(h, "%08x" % h) for h in by_offset[off]]
            print("   +%#04x  %s" % (off, ", ".join(sorted(labelled))))
        hit = sorted(set(pairs))
        print("   named: %s" % ", ".join(
            "%s->%#x" % (names.get(h, "%08x" % h), off) for h, off in hit
            if h in names))
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
