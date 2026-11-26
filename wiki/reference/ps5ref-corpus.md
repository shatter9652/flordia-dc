---
title: The ps5ref corpus — what is worth reading
type: reference
status: current
created: 2026-11-25
updated: 2026-11-25
tags: [ps5, reference, shaders, nid]
---

# The ps5ref corpus

Everything below lives under `ps5ref/AnyDevKit/3rdparty/` unless stated.

## `ps5-nid-map` — the largest NID corpus

`data/Modules/*.inc`, one file per module: `PS5_NID_MAP_FILES(...)` for PRX
filenames, then `PS5_NID_MAP_LIBRARY("lib", { "NID", ... })` blocks.

* **541** module files carrying NIDs, **777** library blocks, **328,561** NIDs.
* Keyed by 11-character NID, stored as 64-bit with two-level perfect hashing and
  compile-time seeds (README: 52 ns filename, 40 ns module, 113 ns NID lookups).
* It is the source `ps5nids.py` prefers for anything the GhidraProspero database
  (154,478 pairs) does not carry.

## `AnyPS5` — console-to-native porting tool

Not a reference for game data, but the best public description of PS5 graphics
and shader plumbing:

* `core/relinker/` converts a PS5 executable to the host format; `core/libs/prx`
  implements the system PRX libraries the relinked executable calls.
* `core/libs/nid/` is the NID layer: `NidCompute.cpp` (the sha1-of-name
  generator), `NidResolver.cpp`, and per-format patchers for ELF, PE and Mach-O.
* `core/shader/recompiler/` is a **GCN/RDNA2 -> SPIR-V** pipeline: `RdnaDecoder`,
  `IntermediateRepresentation`, `ControlFlow/Structurizer`, SPIR-V backend, plus
  a disk cache. This is the piece a shader decompiler needs.
* `tools/symbolize_samples.py` matches sampled `module+0xRVA` frames against the
  COFF symbol table or export table of the modules that ran.

## `opengnm-psbc` — SPIR-V to GCN shader binaries

`libpsbc/psbc_compile.h`: *"SPIR-V to PS4/PS5 Shader Binary Compiler Library …
compiling SPIR-V shaders into GCN shader binaries with GnmShaderFileHeader"*,
used by the `psbc` CLI and by the Vulkan-on-PS4 ICD. This is the **compile**
direction, and it is why `tools/shadertool` can name a real target format
without reimplementing one.

## `opengnm` — GNM (PS4 graphics API) on the host

`include/gnm_shaderbinary.h` is the authoritative public description of the PS4
shader container:

* `GnmShaderFileHeader`: magic `"Shdr"` (0x72646853), version, stage type
  (vertex/pixel/geometry/compute/...), header size in dwords, GPU mode
  (BASE or NEO/PS4 Pro).
* `GnmShaderCommonData`: 23-bit code size in dwords, SRT flag, input usage slots,
  embedded constant-buffer dqwords, scratch dwords per thread.
* `GnmShaderBinaryInfo`: magic `"OrbShdr"`, binary type, source type, 24-bit
  length, two hashes, CRC32 over everything up to the CRC field.
* Per-stage structs (`GnmVsShader` 0x28, `GnmPsShader` 0x3C, `GnmCsShader` 0x24)
  with size assertions, plus helpers that locate the code by the stage's
  `spishaderpgm*` register offset.

`tools/shadertool info` implements this layout and checks the CRC.

Related: [[ps5-toolchain]], [[ps5-import-names]]
