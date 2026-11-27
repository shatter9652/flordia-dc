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

## The real spec was in `6RE/tools/SixNG` all along

`crates/sixng-core/src/rpf9toc.rs` documents the table of contents as a column
store, and `gamecipher.rs` shows how the game itself decrypts it. Both match the
PS5 geometry exactly, so the spec below is the one to build against. (The old
`6RE/tools/rpf9` has been deleted; its model was a guess at this one.)

### Header fields that matter

| offset | meaning |
|---|---|
| `+0x04` | `toc_end` — size of the table of contents |
| `+0x08` | `idx_end` — end of the column data region |
| `+0x1A` | `u16 nsec` — section count |
| `+0x1C` | `u32 bsz` — size of block B |
| `+0x20` | `u16 ncol` — column count |
| `+0x22` | `u16 n22` — direct (flag-1) columns |
| `+0x24` | `u32 rows` |
| `+0x2C` | `u8 w` — row-index element width, 1..4 |
| **`+0x2E`** | **`u8 crypto selector`** |
| `+0x30` | `u32 tail` |

The selector byte is `+0x2E`, **not** `+0x2D`. These archives read `0x07`:

```
shaders.rpf  2c=01 2d=0f 2e=07 30=0x16
common.rpf   2c=02 2d=0f 2e=07 30=0x16
```

`mode = (selector & 1) + 1` must be 2 (CBC), and `key = selector >> 1`. So PS5
selects **key 3**; SixNG's Windows table lists selectors 1 and 4, which is why
borrowing a Windows key id would fail.

### Layout

```
A = 0x40                    section table: nsec x { u16 id, u16, u32 offset from B }
B = A + r16(nsec * 8)       block of bsz bytes
C = r16(B + bsz)            column table: ncol x 24 bytes
D = C + ncol * 24           row index: indexed*rows elements of w bytes
T = align8(D + ...)         column data; flag-1 columns start at idx_end
```

Verified on the two archives without decrypting anything structural:

| file | toc_end | idx_end | nsec | bsz | ncol | n22 | rows | w | tail | C | T |
|---|---|---|---|---|---|---|---|---|---|---|---|
| shaders.rpf | 0x280 | 0x260 | 4 | 0x150 | 4 | 1 | 2 | 1 | 0x10 | 0x1b0 | 0x218 |
| common.rpf | 0x6260 | 0x5200 | 4 | 0x150 | 5 | 1 | 418 | 2 | 0x10 | 0x1b0 | 0xf38 |

`B + bsz == C == 0x1b0` in both, and `T <= toc_end`, `idx_end <= toc_end`. That
is four independent constants agreeing, which is what makes this spec credible
where the earlier model was not.

### Decrypt order

1. `[A, B)` then `[B, B+bsz-tail)` — **one chained CBC run**, header key.
2. Section 1, at `B + offset`, is `{ u32 key_id, u16 type, 16-byte IV at +6 }`.
3. `[B+bsz-tail, B+bsz)` then `[B+bsz, idx_end)` — chained with that key, IV
   reset between the two when `type` is 3..5.
4. `[idx_end, toc_end)` is not encrypted.

Columns: `33f70dfaf2c50989` file entry (24 B: offset/16 in the low 40 bits with
flags above, stored/16, unpacked), `ba180afb232d1b4b` resource entry (20 B),
`286030a358a789fb` crypto record (64 B: key id, type `0x11` = stream, IV, five
pattern u64), `73bcb72dce74f11f` file id (MurmurHash3 x64-128 low half of the
lower-case name).

## Where the key comes from — and there is no 32-byte expansion at runtime

`gamecipher.rs` never derives a key. It loads a **key list** and calls the
game's own `BLOCK_SETKEY(blob, iv, &ctx)`, so the blobs are pre-expanded
schedules. The PS5 image matches that exactly: nineteen blobs with magic
`8e9b3b4e` sit at `0x9e67670`, `0x9e68770`, `0x9e68790`, `0x9e69890`,
`0x9e6a990`, … `0x9e7ec90`, i.e. stride `0x1000` with one pair `0x20` apart, and
each is `0x10f4` bytes:

```
+0x000  4  magic 8e9b3b4e
+0x004 240  60 round-key words  (AES-256 schedule)
+0x0f4 0x1000  16 per-key S-boxes
```

The expansion routine I decompiled at `0x438806e` exists in the image, but the
archive path does not reach it: it uses the stored schedules. So "recover the
key" means *read the blob*, not *invert the schedule* — and the blob cannot be
reduced to a 32-byte AES key, because its S-boxes are key-dependent.

The selector→key-id table itself is not a flat stride-24 array (the array at
`0xe7e2560` turned out to be a name/address registration list, not keys). The
PS5 mapping for selector 3 still needs to be read out of the code that consumes
`header[0x2E]`.

## The 0x1a0-byte cipher context (`0xb08740`), mapped

The handle the caller owns (`in_RDI`, `uint *`) is a small state record; the
cipher object hangs off it and is created lazily, then cached:

| handle | type | meaning |
|---|---|---|
| `+0x00` | `u32` | mode (`1` at every RPF9 call site) |
| `+0x04` | `u32` | algorithm/selector id |
| `+0x08` | `void *` | cipher object, built on first use |
| `+0x10` | `u32` | additional value from the descriptor |

```c
if (ctx->obj == NULL || ctx->algo != param_1) {   /* build once */
    ... switch on param_1 -> 0x1a0-byte object ...
}
ctx->[4] = in_ECX;      /* +0x10 */
ctx->[0] = in_ESI;      /* +0x00 mode  */
ctx->[1] = param_1;     /* +0x08 algo  */
```

The object the switch allocates (cases 1 and 2, same 0x1a0 bytes):

| offset | content |
|---|---|
| `+0x00` | vtable `0xa3b1f18` |
| `+0x08` | mode byte — `2` for algo 1, `1` for algo 2 |
| `+0x10`..`+0x30` | zeroed (`VXORPS`/`VMOVUPS`) |
| `+0x40` | sub-object, vtable `0xa3b1eb8`, reset by `0x438b830(sub, 0, -2)` |
| rest | AES round keys (240 B) and the 0x1000 S-box set, per the blob layout |

For the downport, none of this needs reproducing: the reader only needs
`(key blob, IV) → CBC block decrypt`, and the blob layout above is the contract.
`0x438b830` is the same reset that lives in the AES module at `0x4388xxx`, which
is why the factory call and the primitive line up.

## Selector 3 → key id 0x10000005 (read out of `0x8e1100`)

The code that consumes `header[0x2E]` is `FUN_008e1100` itself, and it follows
SixNG's rule exactly:

```c
bVar6 = *(byte *)(*(long *)(param_1 + 2) + 0x2e) >> 1;      /* key selector */
if (bVar6 == 3) {
    _DAT_0e060f58 = 0x10000005;                              /* key id        */
    _DAT_0e060f5c = 0x10;                                    /* 16-byte IV    */
    _DAT_0e060f5e = _DAT_09ac0a80;                           /* IV bytes      */
    uRam000000000e060f66 = uRam0000000009ac0a88;
} else if (bVar6 == 1) {
    _DAT_0e060f38 = 1;
    _DAT_0e060f3c = 3;
    _DAT_0e060f3e = _DAT_09ab0a20;                           /* other key     */
}
cVar11 = (*(byte *)(lVar3 + 0x2e) & 1) + 1;                  /* mode          */
if (cVar11 == '\x02') {                                      /* CBC           */
    local_50 = r16(nsec * 8);            /* span 1 length  [A, B)     */
    local_40 = bsz - tail;               /* span 2 length  [B, B+bsz-tail) */
    uVar12 = 2;
}
cVar11 = func_0x08400600(&local_58, uVar12);
```

That is the whole first stage in one call: two spans, one chained run, the
built-in key. Both prior 16-byte constants are accounted for — `0x9ac0a80` is
the selector-3 IV, `0x9ab0a20` the selector-1 IV.

**Summary: PS5 header key = id `0x10000005`, IV `7d27cb09 4ca646c0 da72c950
de054c5f`, CBC.**

## The key list, and why the blob pointer is zero

A 24-byte record list exists at `0x9ed45f0`-ish with ids and `0x10f4` lengths:

```
id 01000080 ... 10000008 1000000f 10000010 10000011 10000012 10000013
   10000014 10000005 10000006 10000021 ... 10000028
```

`0x10000005` is present, so this is SixNG's `KEY_LIST` shape
(`{ u64 id<<32|flag<<24, u64 address, u64 length }`). The address fields read
as **zero in the file** because PS5 keeps relocations and patches them at load.
Mapping a key id to its blob therefore needs the `PT_SCE_RELA` entries for that
range, not a scan of the file image.

## The S-box sets are per-key: this is white-box, not keyed AES

Comparing the `0x1000`-byte S-box region across the blobs:

| blob | rk[0] | rk[1] | S-box set sha8 |
|---|---|---|---|
| 0x9e67670 | 3a42e942 | efb7d3da | 9244264f |
| 0x9e69890 | 34112d98 | 14f894cd | f35f29af |
| 0x9e6a990 | ca3d3285 | c7f21fb4 | 69dc0830 |
| 0x9e6ba90 | 3cda2540 | b8ae6ae3 | ce3760aa |
| 0x9e6cb90 | 2280e98a | 8c68e1e6 | f95c7ddf |
| 0x9e6dc90 | cde18d60 | bccee862 | d6375997 |
| 0x9e6ed90 | 04ed81cd | 806e0a9c | 646d7b22 |
| 0x9e6fe90 | c2795db5 | bb4ef90e | 68e78e38 |
| 0x9e70f90 | b52f0e98 | d80f98a6 | 168697c1 |

Eleven of eleven sampled sets are distinct. Each first S-box is a permutation of
0..255, but the sixteen S-boxes *within* one blob are **not** identical. So the
transform is keyed at the S-box level: a white-box construction, not AES with a
different key. This is why round-key-only decryption cannot work.

## Decrypt attempts, and the result

With the header key id known and its IV in hand, I tried 72 hypotheses: the nine
blobs × four S-box placements (`std`, per-byte-position, per-round,
round+position) × both IVs, each decrypting `[A, B)` (32 bytes for `nsec=4`) as
CBC and scoring the section table (ids in `1..nsec`, offsets `< bsz`).

**Every one scored 0** — no id was in range and no offset was below `bsz`. So
none of the straightforward AES-256 placements is the real round structure. The
oracle itself is sound and cheap (8 possible points per attempt), so the next
step is to read the actual decrypt loop at `0x438c639` (`Td0` reference) and
`0x438d237` (inverse S-box reference) and transcribe its table indices, rather
than guessing at them.

What is now settled: selector → key id `0x10000005`, IV, CBC mode, span layout,
key blob layout, and that the S-boxes are per-key. What is open: the round
function's exact use of those tables.

## Round function: transcribed instructions, and the correction

The two addresses I had been calling "AES table references" were right, but the
Ghidra window dump showed them desynced (it printed `MOV RCX,[R14+8]` at
`0x438c639`). Extracting the raw bytes and disassembling linearly gives the real
instructions:

```
0x438c639: lea r8,[rip+0x58c19b0]      # 0x9c4dff0 = Td0
0x438d237: lea rdx,[rip+0x58c1db2]      # 0x9c4eff0 = inverse S-box
0x438806e: lea r9,[rip+0x58c4f4b]       # 0x9c4cfc0 = Te0
0x4388075: lea r10,[rip+0x58c5f44]      # 0x9c4dfc0 = rcon table
0x4388a66: lea rdx,[rip+0x58c4553]      # Te0 (as the byte S-box source)
0x4388a6d: lea rsi,[rip+0x58c557c]      # Td0
```

What the code at those sites actually does:

- **`0x438806e`** is the AES-256 key expansion. It is reached with
  `cmp r15d,0x20` (256-bit key) and runs 60 words, with the standard S-box read
  byte-wise out of the *Te1* view (`[r9 + idx*4 + 0x400]`, `+0x803`, `+0xc02`)
  and `rcon` from `0x9c4dfc0`. This confirms 14 rounds and a standard expander.
- **`0x4388a66`/`0x4388a6d`** rewrite the expanded key in place at `rbx+0x1c`,
  gated by `cmp dword [rbx+0xf0], 2`. The body is
  `Td0[S(b2)] ^ Td1[S(b3)] ^ Td2[S(b1)] ^ Td3[S(b0)]`, i.e. the equivalent
  inverse cipher key transform. So the context holds *decryption* round keys.
- **`0x438c639`** is the block decrypt: a vectorized T-table InvCipher. State
  words arrive via `movbe` (so the schedule and state are big-endian dwords),
  rounds index `[r8 + idx*4 + 0x400/0x800/0xc00]` (Td1/Td2/Td3 rotations), round
  keys are plain dwords at `[r13 + 0xc4]` … `[r13 + 0xdc]`, and the result is
  finished with `vpxor` + `vpshufb` against `0x9abbcc0` for byte order.
- **`0x438d237`** is a byte-wise companion that assembles a 16-byte vector with
  `vpinsrb`/`vpsllvd`/`vpshufb` from the inverse S-box — a setup/init path, not
  a second cipher.

So the *algorithm* is plain AES-256 InvCipher on standard tables. What is not
plain is the key material.

## Retest: the blob is not round-key material

Following the transcribed code:

- The schedule invariant (`w[i] = w[i-8] ^ f(w[i-1])`) fails for **every** 4-byte
  offset in **every** blob, in both little- and big-endian word order. So the
  `0x10f4` blob contains no forward AES-256 schedule at any alignment.
- The `0x1000` region is not 16 byte permutations (all 16 blocks of all 9 blobs
  fail a permutation test), and neither its strided dwords nor its low bytes
  form a permutation either.
- Running the transcribed equivalent-inverse InvCipher, `[A,B)` as CBC, over
  9 blobs × 3 candidate key offsets (0x1004, 0xf4, 0x4) × 2 byte orders × 2 IV
  forms = 108 further hypotheses scores **0** on the section-table oracle.

Conclusion: the blob's tables are *encoded* — the values are not the plain
round-key or T-table bytes the loop consumes at runtime, which is what a
white-box construction looks like from the outside. Feeding `0x9c4xxx`-style
arithmetic at these blobs cannot work, and no amount of re-ordering will fix it.

## PT_SCE_RELA cannot resolve the blob at all

The image does carry `PT_SCE_RELA` (`p_filesz = 0x283a`, 429 entries), but:

- no relocation entry targets the key-list window `0x9ed4000`–`0x9ed5000`, so
  the zero address field is **not** loader-patched by this table; and
- the segment has `p_vaddr = 0`, is not matched to a SELF block by length
  (`read_self_blocks` yields 12 blocks, none of length `0x283a`), so its bytes
  are not readable from the dump at all — the relocation payload sits in a
  protected block.

That closes the id→blob route statically: the key list's address field is
genuinely zero in the shipped image and the relocation data needed to fill it is
in an encrypted block. Resolving `0x10000005` to a blob has to come from the
runtime (a hook on the key-lookup), not from the file.

## Where this leaves objective 1

Settled: selector byte, selector→id `0x10000005`, IV, CBC, span layout and
chaining, the full decrypt algorithm, and that the cipher is white-box with
encoded tables.

Open: the encodings. The next probe that can actually make progress is a runtime
one — hook the key lookup at load time and dump the 0x1a0-byte context the
factory fills, because that context is where the decoded tables and the final
round keys live.

## The 0x1a0 context, dumped by running the init natively

The previous section left a runtime hook as the only way forward. That turned out
to be half right: the *console* is not needed, because the cipher init is
ordinary x86-64 position-independent code that only wants memory. It can be run
on this host, and `tools/rpf9ctx.py` does exactly that — the same observation a
load-time hook would make, minus Orbis.

### Locating the init

The vtable slots read as zero in the file because they are filled by relocation
at load, so the decode routine looked unreachable. It is not: the relocated
values survive in the stride-`0xd8` fixup records at `0xf425c78`, `0xf425d50`,
`0xf425e28`, `0xf425f00`, each a list of `{slot, size, value}`:

| vtable | slot | value |
| --- | --- | --- |
| `0xa3b1eb8` | `+0x00` | `0x8478780` |
| `0xa3b1eb8` | `+0x10` | **`0x84787a0`** (cipher init) |
| `0xa3b1eb8` | `+0x40` | `0x8e8e20` |

`0x84787a0(ctx, blob, blob_len, iv, iv_len, flag)` stores the blob at `+0x10`
and its length at `+0x18`, copies the IV to `+0x20` (length at `+0x30`), stores
the flag at `+0x190`, then calls `0x43879d0(ctx+0x40, blob, blob_len, iv, flag)`.
That routine rejects any `blob_len` above `0x20` (`cmp edx,0x20; ja` →
`0xffffff53`) and any length outside `{0x10,0x18,0x20}` (bitmask `0x101010000`),
writes `key_len/4 + 6` round keys at `sub+0xf0`, the key length at `sub+0xf4`,
copies the IV to `sub+0x100`, and expands; the 32-byte case lands on the AES-256
expander at `0x438806e`.

### Running it

`tools/rpf9ctx.py` maps each `PT_LOAD` at `DELTA + p_vaddr` (`DELTA = 1 << 32`,
because segment 0 starts at VA 0 and `mmap_min_addr` refuses that), patches the
`memcpy` import thunk at `0x8f67840` with an absolute jump to a host
implementation (the stub's indirect slot is zero without a loader), points the
stack-guard global `0xa3e9fa8` at a zero qword, and calls the init through
ctypes. With a 32-byte key it returns 1 and fills the context.

Observed layout for a 32-byte key (`mode = 2`):

```
+0x00  mode/algo word        0
+0x04  algo id               0
+0x08  mode byte             2
+0x10  blob pointer
+0x18  blob length           0x20
+0x20  IV                    16 bytes
+0x30  IV length             0x10
+0x40  key schedule          240 bytes (15 x 16), sub-object base
+0x130 round count           14
+0x134 key length            0x20
+0x140 IV copy               16 bytes
+0x180 flag
+0x190 flag
```

The sub-object at `+0x40` is `0x150` bytes and is zeroed by `0x438b830` before
use, which is why the schedule fields appear at `ctx+0x40+offset`.

### The schedule is not AES

`tools/check_schedule.py` compares the 240 bytes at `ctx+0x40` with a standard
AES-256 expansion. It does not match for the key as passed, for the permuted
copy stored at `ctx+0x110`/`ctx+0x120`, or for either half order: the schedule
starts `24fc79cc…` while the key starts `00010203…`. The last 32 bytes of the
schedule are the key bytes *permuted* — the permutation is an involution
(`0↔10, 1↔15, 2↔8, 3↔13, 4↔14, 5↔11, 6↔12, 7↔9`) applied to the second half.

So the earlier white-box conclusion is now confirmed from the inside rather than
inferred: this is not AES-256 with a hidden key, it is a permuted-table AES
variant with its own schedule. Plain-AES hypotheses cannot score on the oracle
because the schedule they would use is never the one the game builds.

### What is still missing

The init needs a 16/24/32-byte key, and the key list entry for `0x10000005`
carries `ptr = 0`, `len = 0x10f4` — a blob descriptor, not key material. The
0x10f4 blobs are rejected outright by the `cmp edx,0x20` check, so the key is
produced by whatever the cache lookup at `0x8477e00` resolves, and that table is
empty in the file. The harness can now be pointed at the real key the moment it
is recovered, and it will produce the exact context the game would.
