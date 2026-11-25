// FUN_14087b0f0 -- the table-of-contents geometry walk
// Address: 14087b0f0  size: 64 bytes (0x40, ends at the next .pdata record)
//
// This body is hand-reconstructed: it has **no .pdata record**, so Ghidra never
// defined it as a function and the batch export skipped it. Both of its callers
// reach it by direct `E9`/`E8`:
//
//   FUN_14087b0b0 (64 B)  writes the result to index +0x38 / +0x40
//   FUN_14087aec0 (126 B) kind 0 and kind 1, writes index +0x38 / +0x40
//
// Disassembly of the whole function (objdump, image base 0x140000000):
//
//   14087b0f0  8b 44 24 28        mov    0x28(%rsp),%eax     ; arg5 (u8)
//   14087b0f4  45 0f af c1        imul   %r9d,%r8d           ; count * stride
//   14087b0f8  44 0f af c0        imul   %eax,%r8d           ; * arg5
//   14087b0fc  48 8d 54 02 ff     lea    -0x1(%rdx,%rax,1),%rdx
//   14087b101  48 f7 d8           neg    %rax
//   14087b104  48 21 d0           and    %rdx,%rax           ; align_up(base,arg5)
//   14087b107  48 89 01           mov    %rax,(%rcx)         ; out[0]
//   14087b10a  4a 8d 44 00 07     lea    0x7(%rax,%r8,1),%rax
//   14087b10f  48 83 e0 f8        and    $~7,%rax            ; align8
//   14087b113  48 89 41 08        mov    %rax,0x8(%rcx)      ; out[1]
//   14087b117  48 83 c0 0f        add    $0xf,%rax
//   14087b11b  48 83 e0 f0        and    $~0xf,%rax          ; align16
//   14087b11f  48 89 41 10        mov    %rax,0x10(%rcx)     ; out[2]
//   14087b123  c3                 ret
//
// The three outputs are a begin, a `data` end and an aligned end for one run of
// records. `arg4` is the per-record stride and `arg5` is the alignment (and a
// multiplier) -- in the packfile caller they come from header +0x24 (the entry
// count) and +0x2C (the mode byte, 1 or 2). What the product counts is *not*
// the name region: the four archives fix that at align16(count * (8 + mode)),
// which is a different number for every archive but appdata0. So this body is
// reconstructed for what it does, and the meaning of its run is still open --
// the same 1-or-2 byte distinction shows up in both places, and only the key
// would let the decrypted region say which is which.
//
// Syntax-checked with g++ -std=c++17 -fsyntax-only -Wall -Wextra.

#include <cstdint>

namespace rage {

// The three pointers the walk produces. Callers keep the first two (index
// +0x38 / +0x40); the aligned end is written and then unused by both recovered
// call sites.
struct fiPackRun {
    uint64_t begin;    // out[0]  aligned up from the base
    uint64_t dataEnd;  // out[1]  end of the records, 8-aligned
    uint64_t end;      // out[2]  the same, 16-aligned
};

// The exact arithmetic of 14087b0f0. `base` is a pointer, `stride` and
// `align` are the two 32-bit arguments the callers pass, and `align` doubles
// as the multiplier in the recovered code (`imul %r9d,%r8d` then `imul
// %eax,%r8d`), so it is kept that way rather than "cleaned up".
fiPackRun fiPack_ComputeRun(uint64_t base, uint32_t count, uint32_t stride,
                           uint32_t align) {
    fiPackRun run{};
    const uint64_t bytes =
        static_cast<uint64_t>(count) * stride * static_cast<uint64_t>(align);
    run.begin = (base + align - 1) & ~static_cast<uint64_t>(align - 1);
    run.dataEnd = (run.begin + bytes + 7) & ~static_cast<uint64_t>(7);
    run.end = (run.dataEnd + 15) & ~static_cast<uint64_t>(15);
    return run;
}

}  // namespace rage
