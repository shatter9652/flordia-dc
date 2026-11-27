#!/usr/bin/env python3
"""Check whether the emulated cipher context is a standard AES-256 schedule.

The context dump has a 32-byte permuted copy of the key at sub+0xd0 (ctx+0x110)
and 240 bytes of schedule material at ctx+0x40. If the schedule equals a normal
AES-256 expansion of the permuted key, the only obfuscation is a key-byte
permutation and plain AES-256 with a permuted key will decrypt the TOC.
"""
import struct
import sys

RCON = [0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x1B, 0x36]

SBOX = bytes.fromhex(
    "637c777bf26b6fc53001672bfed7ab76ca82c97dfa5947f0add4a2af9ca472c0"
    "b7fd9326363ff7cc34a5e5f171d8311504c723c31896059a071280e2eb27b275"
    "09832c1a1b6e5aa0523bd6b329e32f8453d100ed20fcb15b6acbbe394a4c58cf"
    "d0efaafb434d338545f9027f503c9fa851a3408f929d38f5bcb6da2110fff3d2"
    "cd0c13ec5f974417c4a77e3d645d197360814fdc222a908846eeb814de5e0bdb"
    "e0323a0a4906245cc2d3ac629195e479e7c8376d8dd54ea96c56f4ea657aae08"
    "ba78252e1ca6b4c6e8dd741f4bbd8b8a703eb5664803f60e613557b986c11d9e"
    "e1f8981169d98e949b1e87e9ce5528df8ca1890dbfe6426841992d0fb054bb16")


def expand(key):
    """AES-256 key expansion, returning 15 round keys of 16 bytes."""
    nk = len(key) // 4
    nr = nk + 6
    w = [list(key[4 * i:4 * i + 4]) for i in range(nk)]
    for i in range(nk, 4 * (nr + 1)):
        temp = list(w[i - 1])
        if i % nk == 0:
            temp = temp[1:] + temp[:1]
            temp = [SBOX[b] for b in temp]
            temp[0] ^= RCON[i // nk - 1]
        elif nk > 6 and i % nk == 4:
            temp = [SBOX[b] for b in temp]
        w.append([a ^ b for a, b in zip(w[i - nk], temp)])
    out = []
    for r in range(nr + 1):
        block = b"".join(bytes(x) for x in w[4 * r:4 * r + 4])
        out.append(block)
    return out


def main(argv):
    ctx = open(argv[0], "rb").read()
    assert len(ctx) == 0x1A0, len(ctx)
    rounds = struct.unpack_from("<I", ctx, 0x130)[0]
    keylen = struct.unpack_from("<I", ctx, 0x134)[0]
    print("rounds %d  key length %#x" % (rounds, keylen))
    print("ctx+0x110 %s" % ctx[0x110:0x120].hex())
    print("ctx+0x120 %s" % ctx[0x120:0x130].hex())

    sched = ctx[0x40:0x130]                      # 240 bytes = 15 round keys
    print("schedule at ctx+0x40 (%d bytes)" % len(sched))

    candidates = {
        "perm(key) as stored": ctx[0x110:0x130],
        "halves swapped": ctx[0x120:0x130] + ctx[0x110:0x120],
        "verbatim 00..1f": bytes(range(32)),
    }
    for name, key in candidates.items():
        want = b"".join(expand(key))
        print("%-22s expand(%s) == schedule: %s"
              % (name, key.hex()[:16] + "..", want == sched))
        if want != sched:
            for r in range(15):
                if want[16 * r:16 * r + 16] != sched[16 * r:16 * r + 16]:
                    print("   first differing round %d" % r)
                    print("     want %s" % want[16 * r:16 * r + 16].hex())
                    print("     got  %s" % sched[16 * r:16 * r + 16].hex())
                    break
    return 0


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
