#!/usr/bin/env python3
"""Run the RPF9 cipher init on this host and dump its 0x1a0-byte context.

The retail image cannot be *booted* here: there is no Orbis loader and no
PS4/PS5. But the cipher context is built by ordinary x86-64 position-independent
code that needs nothing from the kernel except memory, so the init path alone
can be executed natively. That gives the same bytes a load-time hook on the
console would read, without the console.

Why the init can be located at all
----------------------------------
Cipher objects are built in `FUN_00b08740` (jump table 0x9d4d350; case 1 ->
0xb08921 allocates the 0x1a0 context, case 2 -> 0xb08ab5 the mode-1 variant).
The decode routine is reached as `[vtable+0x10]`. Those vtables read as zero in
the file because they are filled by relocation at load -- but the relocated
values survive in the stride-0xd8 fixup records at 0xf425c78 / 0xf425d50:

    vtable 0xa3b1eb8  +0x10 -> 0x84787a0      (cipher init)

`0x84787a0` stores the blob pointer/length, copies the IV to ctx+0x20, then
calls `0x43879d0(ctx+0x40, blob, blob_len, iv, flag)`. That routine accepts a
key length of 0x10/0x18/0x20, writes `key_len/4 + 6` to ctx+0xf0 and the key
length to ctx+0xf4, copies the IV to ctx+0x100, and expands the key; the
32-byte case lands on the AES-256 expander at 0x438806e. So the context is a
standard AES schedule and the only secret is the key itself.

    python3 tools/rpf9ctx.py ../6RE/DUMPS/PS5Dump/eboot.bin --key 00..00
    python3 tools/rpf9ctx.py ../6RE/DUMPS/PS5Dump/eboot.bin --key-file key.bin

The dump is evidence about the layout, not a recovered key: with a wrong key
every round key is wrong too.
"""
import argparse
import ctypes
import os
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
if HERE not in sys.path:
    sys.path.insert(0, HERE)
import ps5elf  # noqa: E402

INIT = 0x84787a0          # cipher init, from vtable 0xa3b1eb8 slot +0x10
CTX_SIZE = 0x1a0
MEMCPY = 0x8f67840        # import thunk; jumps through a load-relocated table
STACK_GUARD = 0xa3e9fa8   # `mov r12,[..]; mov rax,[r12]` in the expander

# The image's first segment is mapped at VA 0, which mmap refuses (mmap_min_addr)
# and which would also collide with the host's NULL page. Shift every segment by
# a constant: the code is rip-relative, so relative layout is all that matters.
DELTA = 0x100000000

PROT_RWX = 1 | 2 | 4
MAP_PRIVATE = 0x02
MAP_ANONYMOUS = 0x20
MAP_FIXED = 0x10
PAGE = 0x1000


class Image:
    """The eboot's PT_LOAD segments, mapped and executable at DELTA + VA."""

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
        self._map()

    def _map(self):
        data = self.image["data"]
        for i, p in enumerate(self.image["phdrs"]):
            p_type, _flags, off, vaddr, _paddr, filesz, memsz, _align = p
            if p_type != ps5elf.PT_LOAD or memsz == 0:
                continue
            mapped = self.image["maps"][i]
            src = mapped[0] if mapped else off
            start = (vaddr + DELTA) & ~(PAGE - 1)
            end = (vaddr + DELTA + memsz + PAGE - 1) & ~(PAGE - 1)
            got = self.libc.mmap(ctypes.c_void_p(start), end - start,
                                 PROT_RWX, MAP_PRIVATE | MAP_ANONYMOUS | MAP_FIXED,
                                 -1, 0)
            if got in (None, ctypes.c_void_p(-1).value):
                raise SystemExit("mmap failed at %#x: %s"
                                 % (start, os.strerror(ctypes.get_errno())))
            if filesz:
                body = data[src:src + filesz]
                buf = ctypes.create_string_buffer(body, len(body))
                self.libc.memmove(ctypes.c_void_p(vaddr + DELTA), buf, len(body))

    def ptr(self, va):
        return ctypes.c_void_p(va + DELTA)

    def write(self, va, blob):
        self.libc.memmove(self.ptr(va), blob, len(blob))

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

    def patch_stubs(self):
        """Point the import thunks at host implementations.

        A SELF import stub is an indirect jump through a slot that the loader
        fills in. Nothing filled it here, so the slot is zero and the first
        call lands on address 0. Replace the stub body with an absolute jump.
        """
        MEMCPY_T = ctypes.CFUNCTYPE(ctypes.c_void_p, ctypes.c_void_p,
                                    ctypes.c_void_p, ctypes.c_size_t)

        def host_memcpy(dst, src, n):
            ctypes.memmove(dst, src, n)
            return dst

        self._memcpy_cb = MEMCPY_T(host_memcpy)
        target = ctypes.cast(self._memcpy_cb, ctypes.c_void_p).value
        # mov rax, imm64 ; jmp rax
        stub = b"\x48\xb8" + struct.pack("<Q", target) + b"\xff\xe0"
        self.write(MEMCPY, stub)
        # The expander reads a pointer-to-pointer here; give it a zero qword.
        guard = self.alloc(0x10)
        self.write(STACK_GUARD, struct.pack("<Q", guard))


def describe(ctx):
    def u32(off):
        return struct.unpack_from("<I", ctx, off)[0]

    def u64(off):
        return struct.unpack_from("<Q", ctx, off)[0]

    rows = [
        ("+0x00 mode/algo word", "%#x" % u32(0x00)),
        ("+0x04 algo id", "%#x" % u32(0x04)),
        ("+0x08 mode byte", "%#x" % ctx[0x08]),
        ("+0x10 blob pointer", "%#x" % u64(0x10)),
        ("+0x18 blob length", "%#x" % u64(0x18)),
        ("+0x20 IV", ctx[0x20:0x30].hex()),
        ("+0x30 IV length", "%#x" % u64(0x30)),
        # The key schedule lives in the sub-object at +0x40, so its fields
        # appear at ctx+0x40+offset, not at the bare offset.
        ("+0x130 round count", "%d" % u32(0x130)),
        ("+0x134 key length", "%#x" % u32(0x134)),
        ("+0x140 IV copy", ctx[0x140:0x150].hex()),
        ("+0x180 flag", "%#x" % u32(0x180)),
        ("+0x190 flag", "%#x" % u32(0x190)),
    ]
    return "\n".join("  %-22s %s" % r for r in rows)


def main(argv):
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("self_file")
    ap.add_argument("--key", help="key as hex (16, 24 or 32 bytes)")
    ap.add_argument("--key-file", help="file holding the raw key")
    ap.add_argument("--iv", default="7d27cb094ca646c0da72c950de054c5f",
                    help="16-byte IV as hex (default: key id 0x10000005's IV)")
    ap.add_argument("--mode", type=lambda s: int(s, 0), default=2,
                    help="ctx mode byte (2 = CBC, 1 = ECB); default 2")
    ap.add_argument("--out", help="write the raw 0x1a0 context here")
    args = ap.parse_args(argv)

    if args.key_file:
        key = open(args.key_file, "rb").read()
    elif args.key:
        key = bytes.fromhex(args.key)
    else:
        raise SystemExit("need --key or --key-file")
    if len(key) not in (16, 24, 32):
        raise SystemExit("key must be 16, 24 or 32 bytes, got %d" % len(key))
    iv = bytes.fromhex(args.iv)
    if len(iv) != 16:
        raise SystemExit("IV must be 16 bytes")

    img = Image(args.self_file)
    img.patch_stubs()

    ctx = img.alloc(CTX_SIZE)
    key_at = img.alloc(0x100)
    iv_at = img.alloc(0x100)
    # The constructor writes the mode byte at +0x08 before the init is
    # tail-called; reproduce it so the init takes the same branches.
    ctypes.memmove(ctypes.c_void_p(ctx + 0x08), bytes([args.mode & 0xFF]), 1)
    ctypes.memmove(ctypes.c_void_p(key_at), key, len(key))
    ctypes.memmove(ctypes.c_void_p(iv_at), iv, 16)

    PROTO = ctypes.CFUNCTYPE(ctypes.c_int, ctypes.c_void_p, ctypes.c_void_p,
                             ctypes.c_size_t, ctypes.c_void_p, ctypes.c_size_t,
                             ctypes.c_int)
    init = PROTO(img.ptr(INIT).value)
    rc = init(ctypes.c_void_p(ctx), ctypes.c_void_p(key_at), len(key),
              ctypes.c_void_p(iv_at), 16, 1)

    body = ctypes.string_at(ctx, CTX_SIZE)
    print("init %#x returned %d (%s)" % (INIT, rc, "ok" if rc else "rejected"))
    print(describe(body))
    print()
    print("// context (%d bytes)" % CTX_SIZE)
    for i in range(0, CTX_SIZE, 16):
        print("  %#04x  %s" % (i, " ".join("%02x" % b for b in body[i:i + 16])))
    if args.out:
        with open(args.out, "wb") as fh:
            fh.write(body)
        print("\n// wrote %s" % args.out)
    return 0 if rc else 1


if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
