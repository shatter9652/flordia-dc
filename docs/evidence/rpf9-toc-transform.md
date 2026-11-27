# The RPF9 decrypt chain: 0x8400600 → 0xb08740

Raw evidence for what `0x8e1100` calls when it hits an entry. Reproduce with:

```bash
python3 tools/ghidra_dump.py 6RE/DUMPS/PS5Dump/eboot.bin \
    --window 0x83e0000:0x8420000 --addrs 0x8400600 \
    --script "DumpAsm.java 0x8400600:0x8400a1d,0x8400df0:0x8400fb0"
```

Ghidra reports script output in
`~/.config/ghidra/ghidra_12.1.4_PUBLIC/application.log`, not stdout.

## First: both addresses are real entries

An earlier run that decompiled them by address produced a body with duplicated
loops and a `Could not recover jumptable` warning, which looked like a function
boundary problem. It is not: the instruction stream shows ordinary prologues.

```
084005fd: RET
084005fe: INT3
084005ff: INT3
08400600: PUSH RBP
08400601: MOV RBP,RSP
...
0840060e: MOV RAX,qword ptr FS:[0x0]      ; stack canary
08400617: MOVZX R12D,word ptr [RDX + 0x4]
0840061c: MOV R15,RDX
0840061f: MOV R14D,ESI
08400622: MOV RBX,RDI

08400de8..08400def: INT3 (eight of them)  ; padding between functions
08400df0: PUSH RBP
08400df1: MOV RBP,RSP
08400dfd: SUB RSP,0x38
08400e01: MOV RAX,qword ptr [0x0a3e9fa8]
```

`INT3` padding on both sides settles it: two functions, back to back.

## 0x8400600 — the decrypt driver

Argument registers on entry: `RCX` = output descriptor, `ESI` = mode (1 at every
call site seen), `RDX` = pointer **into the archive** (`0x8e1100` passes
`dataBase + entry.offset`).

```
08400617: MOVZX R12D,word ptr [RDX + 0x4]   ; u16 selector from the archive
0840062c: MOV EAX,R12D
0840063e: DEC EAX
08400649: CMP AX,0x11                      ; selector-1 <= 17
0840064d: JA  0x0840065c
08400652: LEA RCX,[0x9e607e0]              ; 18-entry table
08400659: MOV EDX,dword ptr [RCX + RAX*0x4]
0840065c: MOV ECX,dword ptr [R15]          ; u32 at p+0
0840065f: ADD R15,0x6                      ; p+6
08400663: MOV R9D,0x10                     ; 16
08400669: MOV ESI,0x1
0840066e: MOV R8,R15                       ; p+6, sixteen bytes
08400671: CALL 0x00b08740
```

So the call is `0xb08740(mode, table[selector-1], p+6, 16)`, with `p` being a
**per-entry header inside the archive** that carries a `u32` at `+0`, a `u16`
selector at `+4`, and **16 bytes at `+6`**.

The table at `0x9e607e0`, as dumped (`DumpAsm.java d:0x9e607e0:0x9e60828`):

```
01 00 00 00  02 00 00 00  10 00 00 00  10 00 00 00
10 00 00 00  12 00 00 00  12 00 00 00  12 00 00 00
00 00 00 00  10 00 00 00  10 00 00 00  10 00 00 00
0d 00 00 00  0e 00 00 00  0f 00 00 00  10 00 00 00
11 00 00 00  12 00 00 00
```

= `1, 2, 16, 16, 16, 18, 18, 18, 0, 16, 16, 16, 13, 14, 15, 16, 17, 18`.

After the cipher call the function walks `{pointer, length}` pairs and dispatches
through three vtable slots:

```
cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3, lVar4, uVar10, lVar4, uVar10);
...
UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x28);
   compared against 0x8478170, 0x1b35930, 0x1b35960, 0x1b359d0
```

Those are addressed by Ghidra as code-pointer comparisons, which is how folded
`rage::` virtual thunks show up in this binary.

## 0xb08740 — a cipher factory, not a cipher

```
python3 tools/ghidra_dump.py … --window 0xb08000:0xb09000 --addrs 0xb08740
```

```
undefined8 entry(uint param_1)
{
  if (param_1 < 0x17) {
    /* WARNING: Could not emulate address calculation */
    uVar4 = (*(code *)((long)*(int *)((ulong)param_1 * 4 + 0x9d4d350) + 0x9d4d350))();
    ...
  }
  pauVar6 = (**(code **)*local_38)(local_38,0x40,0x10);   // 0x40-byte object
  *(undefined8 *)*pauVar6 = 0xa3b1e58;                    // vtable
```

**23 cases** (`param_1 < 0x17`) dispatched through a jump table at `0x9d4d350`,
each allocating a `0x40`-byte context with vtable `0xa3b1e58`. That is a
`CreateContext(algorithm)` shape, and the selector reaching it is
`table[selector-1]` — i.e. values 1, 2, 13…18, which matches a small algorithm
enum rather than a byte length.

## What this means for the reader

1. **The TOC transform is not a missing hardcoded key.** The material and the
   selector are *in the archive*: `u16` at `p+4` picks an algorithm, and 16 bytes
   at `p+6` are its input (key or IV). That is why no key is needed to explain
   the ciphertext — only the cipher.
2. **The geometry was right.** These calls sit exactly where `0x8e1100` computes
   `dataBase + entry.offset`, so entry offsets point at a **16 + 6 byte
   per-entry header**, not directly at payload.
3. **`0x8400df0` is a sibling, not the cipher**: a second entry with its own
   prologue and canary, called for entry types 2 and 6 with a 32-byte descriptor
   whose field at `+0x10` is `0x100`. Its body, like this one's, runs through the
   same vtable slots.

## Still unknown, and the next probe

* Which algorithm each of the 23 jump-table cases builds (AES-128/192/256, CBC
  vs CTR, or a stream cipher). Probe: list the 23 targets at `0x9d4d350` and
  decompile the ones reached by selectors 1 and 2 — those are the only ones the
  retail archives use (every archive has `keyId` 1 or 2).
* Whether the 16 bytes at `p+6` are a key or an IV. Probe: read a real entry
  header once the first block decrypts, and check whether the same 16 bytes
  reappear across files with the same selector.
* The vtable at `0xa3b1e58` — its `Encrypt`/`Decrypt`/`SetKey` slots are the
  actual primitives.
