# Getting GTA VI to run off the console: recomp, HLE or decomp

Three routes exist, and they share more work than their names suggest. This note
records what each one actually costs, using measurements from this tree rather
than general impressions.

## What the game asks of the platform

From `names/ps5_eboot_imports.tsv` (every stub of the 187 MB eboot, named):

| | count |
| --- | --- |
| imported libraries | **56** |
| import stubs total | **730** |
| `libSceLibcInternal` | 146 |
| `libkernel` | 90 |
| **`libSceAgc`** (graphics) | **78** |
| `libScePosix` | 20 |
| `libSceAmpr` | 20 |
| `libSceAudioOut2` | 19 |
| `libSceVideoOut` | 17 |
| `libSceNpManager` | 16 |
| `libSceAvPlayer` | 15 |
| `libScePsml_mfsr2` (FSR2) | 9 |
| other 45 libraries | 300 |

The graphics surface is **78 functions**, not thousands: AGC is a command-buffer
API, so the volume lives in the command streams the game writes and in the
shaders, not in imported functions. That single number decides most of the
comparison below.

## The three routes

### 1. Recompilation / AOT relink (AnyPS5's model)

`ps5ref/AnyDevKit/3rdparty/AnyPS5` converts a PS5 executable into a native
ELF/PE, keeps the game code, and implements the system libraries natively:
`core/relinker` reads imports **by NID**, filters unused ones, builds a native
dynamic section, optionally lowers AMD-only instructions (`--to-intel`), and
`core/libs/prx/*` provides the library side. `core/libs/nid` renames exports to
their NIDs so the OS loader binds them.

* **Game logic**: free. The shipped binary is reused.
* **What must be written**: the 56 libraries (730 stubs) — the 300 "other" and
  kernel/libc are routine; **AGC is the hard one**, and it needs an RDNA2
  command processor plus a shader translator.
* **Existing help**: AnyPS5 already has an RDNA2 → SPIR-V recompiler
  (`core/shader/recompiler`: RdnaDecoder, IR, Structurizer) and an AGC library.

### 2. HLE emulation (KytyPS5's model)

`ps5ref/KytyPS5` is a translation layer with the same shape of graphics problem
solved further along: `src/graphics/guest_gpu` has a PM4 command processor and
`pssr.h`; `src/graphics/shader/recompiler/backend/spirv` emits SPIR-V from guest
shaders; `src/kernel` and `src/loader` supply the platform. 255 C++ files, 8.2 MB.

* **Game logic**: free, and the game binary is untouched, so no per-game code
  work.
* **Cost**: the same graphics/shader stack as route 1, plus CPU JIT/loader and
  the emulation tax (timing, memory, sync). Per-game fixes are normal.
* **Reuse**: none of it becomes a native port; it stays an emulator.

### 3. Decompilation (this repository)

Reconstructing `src/` until the game logic compiles natively. Objective 1 (RPF9)
is level 5/10; there are 4,629 objdiff units and 0 byte-identical functions.

* **Game logic**: all of it, by hand, from 27,903 registered classes and the
  4,629-function inventory — the work that a decade of GTA V reverse engineering
  has only partly covered.
* **Platform cost**: eventually *zero*, because a decompiled game stops calling
  AGC and gets its own renderer. That is also why it is the slowest route to
  "it loads".

## Verdict

**Recompilation is the fastest route to a running game**, and emulation is a
close second because it needs the identical graphics work (AGC/PM4 command
processing plus RDNA2 → SPIR-V). The deciding fact is the 78-stub graphics
surface: you do not reimplement GTA VI's rendering, you translate its command
streams and shaders, and two public projects already contain most of that
translator.

Concretely, in order of effort per unit of progress:

1. **Take the shader translator first** (KytyPS5's `recompiler/backend/spirv`,
   or AnyPS5's `core/shader/recompiler`). Every route needs it, and it is also
   what `tools/shadertool` is missing for `decompile`.
2. **Then AGC/PM4** against those 78 imports, testing on `shaders.rpf` and one
   level rather than the whole 500 GB dump.
3. **Recomp the eboot** with AnyPS5's relinker once the library side boots; keep
   the decompilation going in parallel, because it is the only route that ends
   with no AGC dependency at all, and it is what makes the RPF layer (this
   objective) reusable by the other two.

## The dump itself

`6RE/DUMPS/PS5Dump` is 103 files, the eboot plus RPF9 archives:
`levels_concat.rpf` 189 GB, `data` 161 GB, `pack` 103 GB, `audio_concat.rpf`
28 GB, `navmeshes_concat.rpf` 25 GB, `anim_concat.rpf` 15 GB, `packs_concat.rpf`
12 GB, `movies.rpf` 8.3 GB, `data_concat.rpf` 1.5 GB, and
`shaders.rpf` **236 MB**.

`shaders.rpf` starts with `39 46 50 52` — **"9FPR" little-endian, i.e. the same
`0x52504639` the recovered open path compares** — so the shader archive is an
ordinary RPF9 and the level-5 packfile work applies to it directly. Its header
continues `0x280, 0x260, 0x70`, then a 16-byte field, and at `+0x2C` the byte
`0x01` with `+0x2D = 0x0f`: bit 0 of `+0x2D` is set, which is exactly the flag
the open path uses to select the `0x40` alignment base ("encrypted" archives).
That is one observation from one archive, not yet a proven reading of the
field.

The dump's `pack/` directory carries the per-content packs (`core_bvh4/8`,
`story000` and its `_bvh4`/`_bvh8`/`_restofworld` variants,
`shared_minigame000*`), and `data/ttdb/` the data-driven tables by subject
(`maps`, `terrain`, `lighting`, `props`, `peds`, `weapons`, `interiors`,
`graphics`).
