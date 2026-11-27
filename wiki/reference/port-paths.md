---
title: Recomp, HLE or decomp — which loads the game first
type: reference
status: current
created: 2026-11-27
updated: 2026-11-27
tags: [porting, recomp, emulation, decompilation]
---

# Recomp, HLE or decomp

Full reasoning in `docs/port-paths.md`. The measured inputs:

* the eboot imports **56 libraries / 730 stubs**, of which **`libSceAgc` is 78**.
  The graphics API surface is small because AGC is a command-buffer API; the
  volume is in the command streams and the shaders, not in imported functions.
* `ps5ref/AnyDevKit/3rdparty/AnyPS5` already does **AOT relinking**: imports by
  NID, native dynamic section, `--to-intel`, optional RDNA2 → SPIR-V recompiler.
* `ps5ref/KytyPS5` already does **HLE**: PM4 command processor
  (`src/graphics/guest_gpu`), SPIR-V shader backend
  (`src/graphics/shader/recompiler/backend/spirv`), kernel/loader, 255 C++ files.

## Answer

**Recompilation is quickest to a running game; HLE emulation is a close second
because it needs the same graphics work; decompilation is slowest to load but
the only route that ends with no AGC dependency.**

Order of work that benefits all three: shader translator → AGC/PM4 against the
78 imports, tested on `shaders.rpf` and one level → relink the eboot; keep the
decompilation running because it is what makes the RPF layer reusable and what
eventually removes the console graphics API entirely.

Related: [[objective-1-rpf]], [[ps5ref-corpus]], [[shader-compilers]]
