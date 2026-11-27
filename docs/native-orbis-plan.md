# Native Orbis: what to port, where, and in what order

Constraint for this plan: **the result has to run inside Orbis** — a homebrew
ELF or fpkg built with OpenOrbis, driving the PS4 GPU through GNM (`opengnm` /
`libSceGnmDriver`) or Vulkan-on-PS4 (`vulkan-ps4`). No emulation, no KytyPS5, no
Linux payload. That removes the fastest route from `docs/ps4-downport.md` and
leaves two real ones: put the game's logic on an existing RAGE-shaped engine, or
build our own engine and feed it the game.

## What the decompilation just produced

`tools/ghidra_dump.py --window 0x8d0000:0x8f0000 --script "DumpAll.java …"`
dumped the RPF9 cluster: 17 functions, `docs/evidence/rpf9-cluster/`. The two
that matter:

**`0x8e0990`** — the open path (`docs/evidence/ps5-rpf9-open-8e0990.c`):
allocates 0x80 bytes, stamps vtable `0xa3dca50`, checks `0x52504639` ("RPF9"),
computes the TOC geometry, selects the alignment base on the encryption bit, and
calls `0x8e1100`.

**`0x8e1100`** — the TOC/decrypt init, and the first place the container's real
layout appears. Ghidra's `param_1` is a `uint*`, so `param_1 + n` is byte offset
`4n`; the byte offsets are:

| offset | type | meaning (confidence) |
| --- | --- | --- |
| `obj+0x00` | u32 | mount state / flags, compared with 1 and 2 |
| `obj+0x08` | ptr | **header** |
| `obj+0x10` | ptr | **entry array** |
| `obj+0x18` | ptr | **data base** |
| `obj+0x38` | ptr | secondary buffer, used for the `*obj < 2` case |
| `hdr+0x1A` | u16 | **entry count** (loop bound everywhere) |
| `hdr+0x1C` | u32 | TOC size / data start |
| `hdr+0x2C` | u8 | key id (matches RPF7's `m_Encrypted`) |
| `hdr+0x2D` | u8 | flags; bit 0 = encrypted (selects the `0x40` base) |
| `hdr+0x2E` | u8 | mode: `>>1` picks one of four cached key/decrypt contexts, `&1` picks the branch |
| `hdr+0x30` | i32 | offset subtracted for the `*obj >= 2` region |

Entries are **8 bytes**: `u16 type` at +0, `u32 offset` at +4 (the `u16` gap is
unused). The type switch is `1` (file: region starts at
`((count*8+0xF)&~0xF) + 0x40 + hdr+0x1C`), `2`, and `6` (block: reads a byte and
a `u16` at `base + 4 + offset - 4` and calls the 0x100-length helper). Types 1
and 6 call imported helpers `0x8400600` / `0x8400df0`; type 1 additionally
handles the `*obj < 2` case with `hdr+4 - hdr+8` bytes from `obj+0x38`.

That is enough to write a reader, and it is portable C++ — no console APIs in
it. **This is the one feature that transfers for free.**

## M1 status: the reader exists, listing needs the key

`src/file/packfile_rpf9.{h,cpp}` implements the header, the geometry and the
entry parser; `src/file/rpf9_list.cpp` is the test tool (`make -C src/file`,
then `./rpf9_list --selftest --file …`). The self-test builds a plaintext
archive to this layout and checks 28 assertions: header fields, alignment
selection (4 plain / 16 encrypted), table geometry, entry parse, unknown-type
rejection, and the decryptor hook (ciphertext refused without it, parsed with it).

On the retail archives the header parses and the geometry is consistent:

```
shaders.rpf      file=246563760  entries=4 keyId=1 flags=0x0f mode=7
                 entries@0x40 payload@0x1b0 data@0x1e0 decryptSpan=0x90  toc=ciphertext
common.rpf       file=58591712   entries=4 keyId=2 stride=418   decryptSpan=0x5030
levels_concat    file=202542676032 entries=4 keyId=2 stride=2049 decryptSpan=0x12050
appdata0.rpf     file=7232       entries=4 keyId=1 stride=2     decryptSpan=0x130
```

**All twenty retail archives are TOC-encrypted** (`flags` is `0x0f` in every
one), so `readEntries()` correctly refuses them and no key ships here. Listing
real entries therefore needs the decryptor on the other side of that hook — the
helper at `0x8400600` that `0x8e1100` calls with `{data, span}` — or an
unencrypted archive built by the same tool chain. The header, geometry and
type/offset model are settled; only the transform is missing.

## Feature portability

| feature | transfers? | why |
| --- | --- | --- |
| RPF9 archive reader | **yes, direct** | decompiled above; pure file format |
| `fiDevice` / `fiStream` layering | yes | design, not code: same RAGE patterns |
| resource (RSC) container + streaming | mostly | format is versioned; the *engine design* is known, the RSC9 layout is not yet decompiled |
| ttdb tables | parser yes, semantics no | the container is parseable; what each table means is game logic |
| rendering | **no** | AGC Gen5 command streams + RDNA2 shaders must become GNM Gen4 + GCN shaders |
| physics | partly | `ph*` structures are RAGE-wide; solver behaviour is our choice |
| animation | partly | `crSkeleton`/`crClip` are RAGE-wide; the clip formats are versioned |
| gameplay (missions, AI, traffic, cameras) | **no shortcut** | 27,903 classes, all data-driven through ttdb |

The pattern: **formats and engine plumbing transfer; behaviour does not.**

## Route A — put it on GTA V's engine (`MiscRef/GTAVSRC`)

What it would buy: `fiPackfile` (RPF7, AES/TransformIT decryption, name heap),
`fiDevice`/streaming, physics, and `grcore/device_gnm.cpp` — a 3,573-line PS4 GNM
device. That is genuinely most of the platform work.

What it costs:

* RPF9 is a header/entry variant, so that part is days of work — but the
  **resource and ttdb formats are GTA VI's**, and GTAVSRC's `game/` layer is
  GTA V's, so every GTA VI system would be written against types that do not
  exist there.
* GTAVSRC is reference material in this repository and **cannot be shipped**: a
  distributable fpkg cannot contain it. That alone makes it a private harness,
  not a product.
* Building it for Orbis means linking an MSVC tree (9,169 cpp / 17,068 h) against
  OpenOrbis, and `device_gnm.cpp` is written against Sony's `sceGnm*` headers.

**Verdict: use it as a design reference — particularly `fiPackfile` and the GNM
device — not as the base of a build.**

## Route B — our own engine, OpenRW-style

OpenRW reimplemented GTA III: one city, 1990s asset formats, a fixed mission set,
and it still took a team years. GTA VI is 500 GB of RPF9 assets, a `ttdb`
data-driven content system, RAGE 9 rendering, and 27,903 classes. A clean-room
engine for it is a multi-year project — but it is the **only route that can ship
inside Orbis legally**, and the only one where every line is ours.

The mistake to avoid is starting at gameplay. Start at the pipeline that proves
the console can show the world:

1. **M1 — RPF9 mount and listing, on console.** Reader written
   (`src/file/packfile_rpf9.cpp`, plain C++, no Orbis calls); the remaining work
   is the TOC decryptor (see the M1 status above) and an OpenOrbis file device.
   Exit criterion: the console lists the entries of `shaders.rpf` and
   `common.rpf` and prints a CRC32 per entry.
2. **M2 — ttdb parse.** Walk `data/ttdb/*` and dump table names, row counts and
   field types. Exit criterion: a text dump of every ttdb table on the console.
3. **M3 — one cell on screen.** Stream one `levels_concat.rpf` cell, build a draw
   list, submit GNM command buffers with a trivial shader compiled by `libpsbc`
   (`PSBC_TARGET_PS4_BASE`). Exit criterion: geometry from the game's own assets
   drawn at 30 fps — the "it runs in Orbis" proof.
4. **M4 — player and camera.** Movement over the streamed collision, camera
   behaviour from the decompiled camera code. Exit criterion: walk around one
   cell with the game's camera feel.
5. **M5 — vehicles.** Physics from the decompiled `ph*` usage, or a solver of our
   own tuned to the extracted parameters.

Gameplay after that is per-system work with a decompiled reference for each
system, which is the honest description of what "reimplement GTA VI" means.

## What to decompile next, in order

1. **The RSC/resource container** (the reader behind the entry types `2`/`6`):
   xrefs into `0x8e1100`'s helpers `0x8400600` and `0x8400df0`. Needed before M2.
2. **The ttdb loader**: search strings for `ttdb`, then xrefs from the loader to
   the table parser. Needed for M2.
3. **The streaming engine** (the `strStreamingEngine`-shaped singleton): find it
   through the packfile object's vtable `0xa3dca50` and its `+0x68` slot.
4. **The GNM/AGC submission path**: xrefs from the 78 `libSceAgc` stubs to the
   game's command-buffer builders. This is what M3 needs and what `shadertool`
   will consume.

Each of these is a windowed `ghidra_dump.py` run plus a note in
`docs/evidence/`; the tooling for that is already in place.

Related: [[ps4-route]], [[port-paths]], [[objective-1-rpf]]
