# Getting GTA VI onto a PS4: which route is fastest

PS4 is a much better target than "other platforms" because it is the same CPU
ISA family, the same OS library family and the same command-buffer graphics API
family as PS5. That changes the ranking: the fastest route to *running* is not a
decompilation and not a rewrite — it is reusing the shipped code and translating
the three things the console does differently.

## What differs, measured

| | PS4 | PS4 Pro | PS5 |
| --- | --- | --- | --- |
| CPU | 8× Jaguar 1.6 GHz | 8× Jaguar 2.1 GHz | 8× Zen 2 3.5 GHz |
| CPU features | SSE4.2, AVX, BMI1 | same | + AVX2, BMI2, FMA |
| GPU | GCN Gen4 / GFX7, 18 CU, 1.84 TF | GFX8, 36 CU, 4.2 TF | RDNA2 / GFX10.3, 36 CU, 10.3 TF |
| GPU features | no mesh/primitive shaders, no RT, no VRS | same | Geometry Engine, primitive shaders, RT, VRS |
| Memory | 8 GB GDDR5, 176 GB/s | 8 GB, 217 GB/s | 16 GB GDDR6, 448 GB/s |
| Storage | HDD 50–100 MB/s | same | NVMe 5.5 GB/s raw |
| Homebrew memory | ~4.4 GiB direct (native ELF, OpenOrbis layout); ~2 GB Linux payload | — | — |

Sources for the console figures: Digital Foundry's PS5 spec piece and the
Push Square comparison; the homebrew numbers are measured in
`alechurri/nx-on-orbis` (`docs/TECHNICAL.md`) and EmuFive's install notes.

Our own import table says what the game actually asks of the platform: **56
libraries, 730 stubs, `libSceAgc` 78**, plus **`libScePsml_mfsr2` 9** (FSR2 —
there is no FSR2 library on PS4, so that has to be replaced or dropped).

## Precedent: PS5 games already run on PS4

`blue0x1/EmuFive` is KytyPS5 ported to a PS4 Linux payload, and its results are
the strongest evidence available:

* it builds KytyPS5 with `-march=btver2` (Jaguar) and **rewrites every AVX2, FMA
  and BMI2 instruction** into SSE4.2/AVX/BMI1 at module load, replacing the rare
  forms it cannot rewrite the first time they execute (patch `0004`, validated by
  `tools/jaguar-test/` against the real instructions — **287 forms** found in God
  of War: Sons of Sparta alone);
* God of War: Sons of Sparta ≈ 40 FPS on PS4 Pro, Hollow Knight: Silksong 60 FPS,
  PvZ: Replanted 60 FPS, Vampire Survivors 60 FPS on a Slim, Teardown 9–12 FPS;
* the failures are informative: **Dragon Ball Sparking! ZERO and Hello Neighbor
  stop at mesh shaders**, NFS Unbound on "unsupported depth copy", Invincible VS
  at 4–5 FPS.

So the CPU gap is a solved, bounded problem (~287 instruction forms, with known
last-bit FMA differences), and the two real blockers are **geometry features**
and **memory**.

## The three routes, ranked for PS4

### 1. HLE on PS4 Linux — fastest

KytyPS5 in an EmuFive-style payload, on the PS4's Mesa/RADV with
`RADV_EXPERIMENTAL=sparse`. Nothing of the game is rewritten: the CPU translator,
the loader, the PM4 command processor and the SPIR-V shader backend already
exist, and this exact stack is *demonstrated* running PS5 titles on PS4 hardware.

Cost: near zero game-specific work, plus the ordinary emulator work of getting
GTA VI to boot. Blockers you would hit, in order: mesh/primitive shaders
(the failures above are exactly this), 16 GB → 8 GB memory pressure, and Jaguar
throughput on a CPU-heavy open world.

### 2. Recompilation / native downport — second, and the only shippable one

Reuse the eboot's code (same ISA), relink against PS4 libraries, and translate:

* **CPU**: AnyPS5's `--to-intel` does the reverse direction; for PS4 you want the
  EmuFive approach — AVX2/FMA/BMI2 → SSE4.2/AVX/BMI1 — which is already written
  and validated.
* **Shaders**: RDNA2 → SPIR-V (AnyPS5's `core/shader/recompiler`) → GCN GFX7.
  The last step exists in this tree: `opengnm-psbc/libpsbc/psbc_compile.h`
  declares `PSBC_TARGET_PS4_BASE` (GFX7), `PSBC_TARGET_PS4_NEO` (GFX8) and
  `PSBC_TARGET_PS5` (GFX10.3), and `vulkan-ps4` uses it at
  `vkCreateShaderModule`.
* **AGC Gen5 → GNM Gen4**: the 78 imports, but the work is in the command
  streams. PS4 has no mesh/primitive shader stage, so those must be emulated as
  compute or restructured — this is where the cost lives.
* **Memory and streaming**: 8 GB, HDD. A 16 GB target has to be cut, and that is
  content work, not code work.

This is strictly more work than route 1 but yields a native fpkg at native
speed instead of an emulator, and it is the only route that ends in something a
console can install.

### 3. Decompilation — slowest, and it does not remove the walls

Years of work (objective 1 is at level 5 of 10; 0 of 4,629 functions
byte-identical), and when it compiles it still has to fit in 8 GB and run on a
1.6 GHz Jaguar. Its value is different: it is the only route that ends without
AGC at all, and it is what makes the RPF9 layer reusable by both routes above.

Reimplementation from the pseudocode is the same cost as decompilation with the
fidelity thrown away, so it is never the fast option.

## Recommendation

**Use the HLE stack first.** Boot the eboot under KytyPS5 on this PC (AVX2 is
available here, so the CPU translation is not in the way), which tells you within
days whether the game's geometry and memory fit the PS4 at all. If it boots and
draws, porting that stack to a PS4 Linux payload is the EmuFive recipe, and the
shader/CPU translators are already written.

Only then decide whether a native downport is worth it: it needs AGC Gen5 → Gen4
command translation plus a memory plan, and no amount of decompilation makes
that cheaper.

Related: [[port-paths]], [[shader-compilers]], [[objective-1-rpf]]
