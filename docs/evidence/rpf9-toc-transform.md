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

## Jump table 0x9d4d350 enumerated — it is a switch, not a table of algorithms

All 23 entries resolve inside `0x00b08790`–`0x00b08c9b`, i.e. *within the body of
`0xb08740` itself*. So `0xb08740` is one hand-written MSVC switch that jumps to
local blocks, not a registry of separate algorithm constructors. Offsets are
signed 32-bit displacements from `0x9d4d350`:

| index | target | note |
|---|---|---|
| 0 | 0xb08b41 | |
| 1 | 0xb08921 | used by retail selector 1 |
| 2 | 0xb08ab5 | used by retail selector 2 |
| 3 | 0xb08853 | allocates only `0x40` |
| 4–15 | 0xb08790 | begins `INT 0x41` — unsupported-selector assert |
| 16 | 0xb08c9b | |
| 17 | 0xb088c8 | |
| 18 | 0xb08a5c | |
| 19 | 0xb08c42 | |
| 20 | 0xb089aa | |
| 21 | 0xb08a03 | |
| 22 | 0xb08bcf | |

Selector values 4–15 abort, so the reachable set from the `0x9e607e0` table
(`1, 2, 13…18`) is exactly `{1, 2, 13→assert, 14→assert, 15→assert, 16, 17, 18}`.
Retail archives only ever ask for 1 or 2.

### Cases 1 and 2

Both allocate the same `0x1a0` (416-byte) object and differ only in one mode
byte, so they are two variants of one construction, not two ciphers:

```
case 1 (0xb08921)                case 2 (0xb08ab5)
MOV [RAX+8], 0x2                 MOV [RAX+8], 0x1
VXORPS/VMOVUPS [RAX+0x10]        same zeroing of 0x10..0x30
LEA RAX,[0xa3b1f18]              same
LEA RAX,[0xa3b1eb8]              same (sub-object at +0x40)
CALL 0x438b830(sub, 0, -2)       same
```

`0x438b830` is a reset: it zeroes the sub-object through `[+0x50]` and stores the
second argument. Case 3 allocates only `0x40`, a smaller object entirely.

The three vtables (`0xa3b1e58`, `0xa3b1eb8`, `0xa3b1f18`) read as **zero bytes in
the file image**. PS5 keeps relocations and patches them at load, so method
pointers cannot be recovered statically — vtable-driven identification is a dead
end on this artifact.

## The cipher is software AES, and it is in the image

Scanning the data segment for canonical Rijndael constants found a complete
table-driven implementation:

| object | VA | first word |
|---|---|---|
| Te0 | 0x9c4cfc0 | `0xc66363a5` |
| Te1 | 0x9c4d3c0 | `0xa5c66363` |
| Td0 | 0x9c4dff0 | `0x51f4a750` |
| Td1 | 0x9c4e3f0 | standard |
| inverse S-box | 0x9c4eff0 | `0x52 09 6a d5 …`, one copy |

That is the textbook OpenSSL/Rijndael layout (four 256-dword T-tables plus
S-boxes). `0xb08740` contains **no** `AESENC`, `AESKEYGENASSIST`, `PCLMUL` or
`PSHUFB`, so the transform is the software path. A 416-byte context is the
expected size for round keys plus IV and counters.

Conclusion: **the RPF9 TOC transform is AES** — a per-entry 16-byte material
block and a selector choosing among two AES constructions in the same factory.
This matches RAGE's RPF7 design rather than being a bespoke cipher.

## Key material carried in the eboot

`0x8e1100` copies two 16-byte constants into its context templates, both looking
like key/IV material rather than configuration:

```
0x9ab0a20  27 b3 a6 d5 3f 7d d6 b1 55 24 d8 31 8a 33 75 82
0x9ac0a80  7d 27 cb 09 4c a6 46 c0 da 72 c9 50 de 05 4c 5f
```

(the `0x9ac0a80` block is followed by structured values `0x260, 0x1000000,
0xe0, 0xe0`, so the 16 bytes are embedded in a config record.)

### Negative test, recorded deliberately

AES-128 ECB and CBC were tried against the first 20 bytes of the `shaders.rpf`
TOC region (`file 0x40`) with: both eboot constants, and the archive nonce at
`file 0x10` (`ea1541a407fe53e10070040050010000`), with zero and nonce IVs.
**No combination produced a plausible first entry type (1, 2 or 6).** So the
working key is not one of these 16-byte constants used directly at `0x40`; it is
more likely a 32-byte AES-256 key elsewhere in the image, a CTR-style mode, or
the encrypted region does not begin at `0x40`. This is a ruled-out hypothesis,
not a solved one.

### Tooling note

**Correction to an earlier claim in this file:** `tools/ps5elf.py` does not
truncate. A 1 MiB output simply meant the requested window *was* 1 MiB
(`0xb00000:0xc00000`); windows are honoured exactly. What is real: these are
32-bit image VAs, so the crypto module is `0xb08740`, not `0x0b08740`, and
`0x9c4cfc0`, not `0x09c4cfc0`.

## The AES core: located, and it is AES-256 in CBC

Scanning the whole image for RIP-relative references to the four T-tables and
the S-box gives ten sites, all inside one module:

```
0x438806e  Te0      0x438b95b  Te0
0x438816c  Te0      0x438c639  Td0
0x4388516  Te0      0x438d237  inverse S-box
0x43888ea  Te0      0x438d3d6  (16-table S-box set)
0x4388a66  Te0/0x4388a6d Td0
```

That module runs `0x4388xxx`–`0x438dxxx` and contains `0x438b830` — the exact
function `0xb08740`'s cases call. So the chain is confirmed end to end:
`0x8400600` → `0xb08740` (factory) → `0x438b830`/AES module at `0x4388xxx`.

Decompiling the routine at `0x438806e` gives the **key expansion**, and the loop
bound is the key length:

```c
uVar4 = *(uint *)(in_RBX + 0x1c + lVar5 * 8);
in_R8D = *(byte *)((uVar4 >> 0x18) * 4 + 0x9c4d3c0)
       ^ *(byte *)((uVar4 & 0xff) * 4 + 0x9c4cfc1) << 8
       ^ *(byte *)(((uVar4 >> 8) & 0xff) * 4 + 0x9c4dbc2) << 0x10
       ^ *(byte *)(...) * 4 + 0x9c4d7c3) << 0x18
       ^ in_R8D ^ *(uint *)(lVar5 + 0x9c4dfc0);
...
if (lVar5 == 0x18) break;
lVar5 = lVar5 + 4;
```

Eight words per iteration, seven iterations, `0x18` terminal index →
**4 + 56 = 60 round-key words = 240 bytes = AES-256**, 14 rounds. The S-box
lookups read one *byte* at a time out of each rotated table (`+1`, `+0`, `+2`,
`+3` of `0x9c4cfc0`, `0x9c4d3c0`, `0x9c4dbc0`, `0x9c4d7c0`), which is how this
build gets 16 per-position S-boxes out of four T-tables.

### Mode

`0x8e1100` stores a 16-byte value into the context, and the reference
implementation in `6RE/tools/rpf9` runs CBC with a fixed 16-byte IV over exactly
`[0x40, payload_start)`. **AES-256-CBC, 16-byte IV, whole table region in one
chain** is the consistent reading.

## 6RE/tools/rpf9 is a working implementation — read it before re-deriving anything

`src/crypto.rs` + `src/keyring.rs` implement the same cipher and explain why
vanilla AES attempts fail:

| item | meaning |
|---|---|
| `data/tables.bin` (0x5000) | 16 S-boxes × 0x100, then 16 T-tables × 0x400 |
| `data/keys.bin` | 9 key blobs of `0x10f4` each, magic `8e9b3b4e` |
| blob layout | `+0x004` 60 words (240 B) round keys, `+0x0f4` 0x1000 B **key-dependent S-box set** |
| rounds | `round == 0x0c` → 7 double-rounds → **14** |
| mode | CBC, `TAG_IV = c17aad4c53d60efad601d6aeba5fc60e` |
| key choice | try all 9, keep the one producing the longest valid 24-byte record run |

The S-boxes are **keyed** (per-blob, 0x1000 bytes each), not the standard
Rijndael ones. That is precisely why my earlier AES-128 ECB/CBC test against
`shaders.rpf` could not work: wrong key length, wrong S-boxes, wrong mode.

Record format that tool recovers (24 bytes, `entry.rs`):

```
+0x00 u32 size_hint    +0x04 u32 must be 0    +0x08 u32 offset/16
+0x0C u32 flags        +0x10 u32 aux          +0x14 u32 must be 0
```

with a fixed 16-byte graph-header magic
`40000000000000008909c5f2fa0df733` somewhere in the decrypted region.

### Status of the key for this dump (honest)

I ported that exact algorithm to Python and ran all nine blobs against
`shaders.rpf` (A=0x280) and `common.rpf` (A=0x6260): **no graph magic, zero
valid records, for every key.** So either the embedded set does not cover this
build or the port has a defect. `cargo test` plus
`cargo run --example cli -- ../../DUMPS/PS5Dump/common.rpf --list` would settle
it in one step, but that run was interrupted before producing output — this is
an open check, not a negative result.
