---
title: Fastest route to a PS4 build
type: reference
status: current
created: 2026-11-27
updated: 2026-11-27
tags: [ps4, porting, recomp, emulation]
---

# Fastest route to a PS4 build

Reasoning and numbers in `docs/ps4-downport.md`. The short version:

* PS4 is the **same ISA family, OS library family and command-buffer API family**
  as PS5, so this is a translation problem, not a rewrite problem.
* **EmuFive** (KytyPS5 in a PS4 Linux payload) already runs PS5 games on PS4:
  ~40 FPS God of War: Sons of Sparta on a Pro, 60 FPS Silksong, and its CPU patch
  rewrites **287 AVX2/FMA/BMI2 forms** into SSE4.2/AVX/BMI1. Its failures are
  mesh shaders (Sparking! ZERO, Hello Neighbor) and depth copies.
* The shader chain exists in this tree: AnyPS5 RDNA2 → SPIR-V, then
  `opengnm-psbc` `PSBC_TARGET_PS4_BASE` (GFX7) → GCN.
* The walls that no route removes: **8 GB RAM (~4.4 GiB direct for native
  homebrew), Jaguar 1.6 GHz, HDD, no mesh/primitive shaders, no FSR2 library**
  (the game imports `libScePsml_mfsr2` 9 functions).

## Porting into GTAVSRC?

The engine half works and the game half does not. `MiscRef/GTAVSRC` already has
the PS4 GNM device (`grcore/device_gnm.cpp`, 3,573 lines), `fiPackfile` with a
16-byte RPF7 header and AES/TransformIT decryption, and the entry/name-shift
layout. RPF9 is a version switch plus the TOC geometry recovered at `0x8e0990` —
days, not a project. GTA VI's *gameplay* cannot be dropped in: it needs RAGE 9
types and the `ttdb` schemas, which GTAVSRC does not have.

Policy: GTAVSRC is read-only here; reuse by copying into `gta6decomp/`.

## Answer

**HLE first (EmuFive/KytyPS5 stack), native recomp/downport second, decompilation
never for "fastest".** Boot it under KytyPS5 on a PC first: that answers the
geometry and memory question before any AGC or AGC-to-GNM work is started.

Related: [[port-paths]], [[shader-compilers]]
