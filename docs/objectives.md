# Objectives

The order below is the build order for this project. Each objective ends with
readable C for one subsystem, not with a rename list: a subsystem counts as done
when its files compile against `include/gta6decomp/`, read like RAGE code, and
every name in them is backed by evidence recorded in `docs/`.

The final objective, byte matching, is deliberately last. It is the only way to
prove the C is *correct* rather than merely plausible, and it needs the earlier
objectives to exist first.

| # | Objective | State | First evidence |
|---|---|---|---|
| 1 | **RPF loading / extracting** (archives, packfile index, streaming) | **9/10 "Streams"** — a byte range of an entry is served without materialising it (1,128 entries, 3,551 windows, checked against an independent decode) and nested RPF9s open and verify; the over-`0x1c00` class and the encrypted name heap remain for level 10 (`docs/progress-scale.md`) | `RPF9` magic `0x52504639` in `.text` → `FUN_00fc21c0`, `FUN_01fb2600` |
| 2 | **Fuel** (tank, consumption, low-fuel dash state) | anchors only | literal `LOW_FUELH` |
| 3 | **Police & wanted** (crime tracking, wanted level, dispatch) | anchors only | literals `Wanted Tuning`, `Crime Tuning`, `CrimeReport`, `CrimeChainId`, `CrimeStgEndRsn`, `CrimeCurr`, `CrimeTgt` |
| 4 | **Taunt / aggravate / diffuse / threaten** (ped interaction set) | unanchored | see note below |
| 5 | **Cameras**, including the vehicle slow-motion injury camera | anchors only | literal `Camera_Move` → `FUN_03301850` (133 B); literals `CameraSetting`, `EntityInteractionCamera`, `ptxu_CameraEvolution`, `core_cameras_cinematic` |
| 6 | …remaining subsystems, in `docs/layout.md` area order | not started | — |
| 7 | **Byte matching** (rebuild and diff every function) | tooling ready | `tools/gen_objdiff.py`, `docs/objdiff.md` |

`tools/anchors.py --all` regenerates the anchor table into
`matches/objective_anchors.tsv`.

## What the anchors told us

Three measurements shaped the plan, and they are worth stating because they
change *how* each objective is attacked.

**1. Most subsystem names are lookup keys, not code strings.** `%s.rpf`,
`Crime Tuning`, `Wanted Tuning`, `LOW_FUELH` and the `driverSettings_Rpf*`
names all exist exactly once in the image and have **zero** RIP-relative
references, in either the direct or the pointer-slot form. That is what a
hash-keyed lookup table looks like: the string is data that a settings or
tuning system finds by `joaat`, so it never appears in an instruction. Only
`Camera_Move` is addressed by code. Conclusion: names tell us *what the data is
called*, never *where the function is*.

**2. Structure has to come from constants.** `0x52504639` is `"RPF9"`, the
archive magic. It appears three times in `.text`, in two functions:

| Function | Size | Reading |
|---|---|---|
| `FUN_00fc21c0` | 113 B | smallest body testing the magic — the version probe |
| `FUN_01fb2600` | 372 B | the header/entry reader |

`RPF0`, `RPF7`, `RPF8` appear **zero** times, so this build reads RPF9 only.
Those two functions are objective 1's entry points; everything else is reached
from their callers and callees.

**3. The native hash set was regenerated.** `GTA-V-PS4-1.57/natives.h` lists
6,691 natives with their PS4 handler addresses. **None** of those 64-bit hashes
occurs as an 8-byte value in this image. `include/gta6decomp/natives.h` keeps
the reference vocabulary and the invocation contract, with zero resolved
entries, until the script VM objective recovers the real table.

## Objective 1 — RPF loading, extracting, streaming

**First readable code is written:** `src/sub_story/rage/base/file/packfile.cpp`
reconstructs both functions with names, and syntax-checks clean under
`g++ -std=c++17 -Wall -Wextra -fsyntax-only`. What it establishes:

| Item | Value | Evidence |
|---|---|---|
| archive magic | `0x52504639` (`"RPF9"`), little-endian | 3 immediates in `.text` |
| header size | 64 bytes | `namesOffset + align16(entryCount * (8 + mode)) == tocEnd` exactly on all 4 archives |
| `+0x00` | magic | compared before anything else |
| `+0x04` | `tocEnd` — end of the TOC | the name geometry is exact against it; 6RE calls it the TOC size and so starts the data area `0x40` late |
| `+0x08` | `namesOffset` — first name record; entry records are `[0x40, namesOffset)` | `FUN_14087aec0` kind 0 computes `block + *(u32*)(block + 8)` |
| `+0x0C` | unnamed | 6RE calls it `names_size`; it is not `tocEnd - namesOffset` on any sampled archive |
| `+0x20`/`+0x22` | `field20` (u16), `field22` (u16) | `3,6,6,7` and `1` in the four; `field22` is passed to the geometry walk |
| `+0x24` | `entryCount` (u32) | the name region is exactly `align16(entryCount * (8 + mode))` |
| `+0x2C` | `mode` (u8) | 1 or 2; a name record is `8 + mode` bytes |
| file object | `0x60` bytes, vtable `0x1462fd890` | the allocation in `FUN_00fc21c0` |
| packfile object | `0x80` bytes, vtable `0x1462fd480` | the allocation in `FUN_00fc2490` |
| device | `+0x10` of the file object | `FUN_140fc2240` stores `FUN_140968480(path, 1)` |
| handle | `+0x18` of the file object, `-1` = failed open | the test `FUN_00fc21c0` makes |
| path | `+0x38`, 16-byte `atString` with inline flag in the high bit of `+0x47` | both constructor and destructor branch on it |
| size | `+0x30` | device vtable `+0x108`, or header `+0x18` |
| extra handles | `+0x4C` count, `+0x50` array | the destructor's loop |
| header / names | `+0x18` / `+0x20` of the packfile object | `ReadHeader`'s two out-parameters |
| device read | vtable slot `+0x60`, `Read(handle, offset, dst, bytes)` | both readers |
| device close | vtable slot `+0x90`, `Close(handle)` | the destructor |
| mounted flag | `+0x08` bit 0 of the file object | `FUN_140fc2540` tests `*(uint8_t*)(file+8) & 1` and only then calls `FUN_1428ce230(file, pack)` |
| index kind | packfile `+0x28`, initialised to 2 | the ctor's `*(uint32_t*)(pack+0x28) = 2`, which is "empty index" |
| TOC cipher | AES-256, ECB, over `[0x40, tocEnd)` | rage `data/aes.cpp` + `tools/cli/rekey_rpf/rekey_rpf.cpp`; core `FUN_0215f06c`, tables `TE0 0x5fc1b20` / `TD0 0x5fc2b50` / `rcon 0x5fc2b20`, dispatcher `FUN_021a8e3d` |
| key source | `rage::cryKeyRing`, supplied at run time | the retail arrays are data, not source: `unique_key_gta5_xboxone` is still at RVA `0x65b5758` |

The encryption half of the objective is written up separately in
`docs/rpf-crypto.md`. Both gaps it recorded are now closed: the PS5 build's
own keyed cipher decrypts the TOC on all 18 retail archives (white-box, not
the RAGE AES block), and the entry records are a column store whose fields are
placed and verified. `docs/evidence/rpf9-toc-transform.md` has the record; the
remaining gap to level 6 is the decompression hand-off, and entries are
addressed by id because the name heap is still encrypted.

The working scale (`docs/progress-scale.md`) now measures capability rather than byte
matching. Levels 6–10 are met: the payload cipher is driven natively, entries
inflate to their recorded sizes, whole archives extract with **0 failures on
all ten archives that fit on this disk** (1,257 rows), and ranges are served
without materialising an entry, including the archives stored inside entries.
The class that blocked level 10 was not a second compression scheme: the crypto
record's pattern declares *windows*, so a payload is encrypted at `[0, 0x400)`
and then once per `0x2000` region, not just at the head.

What is still open in objective 1 is the name heap: entries are addressed by id
because the trailing name blob cannot be decrypted from the eboot. Its section-5
record names key id `0x10000007`, which no record in the eboot's key list
provides, and 22 key blobs x 8 candidate seeds reproduce nothing but noise.

Work order inside the objective:

The open path is now a complete call chain, walked with `tools/callers.py`:

```
FUN_00fc20b0 (30 B)   thin wrapper
  └─ FUN_00fc20d0 (230 B)   mount: swap the manager's packfile
       └─ FUN_00fc21c0 (113 B)   open a file, accept only if RPF9
            └─ FUN_140fc2240 (591 B)  fiFile::Initialise
                 ├─ format the path into a 0x100 stack buffer (FUN_14056eb30)
                 ├─ FUN_140968480(path, 1)      -> device at +0x10
                 ├─ device vtable +0x28         -> handle at +0x18
                 ├─ device vtable +0x108        -> size at +0x30
                 └─ register the object         -> id at +0x0C

FUN_00fc2490 (158 B)  allocate the 0x80 packfile
  └─ FUN_140fc2540 (370 B)  packfile ctor
       └─ FUN_141fb2600 (372 B)  ReadHeader
            -> header at +0x18, names at +0x20
```

Two things this corrected from the first draft of `packfile.cpp`:

* **The 0x60 object is not the packfile.** `vtable[1]` of the 0x60 object is
  `FUN_140fc2490`, which allocates **0x80** bytes; that ctor calls `ReadHeader`
  with `*(file+0x10)`, `*(file+0x18)`, `*(file+0x20)` as device, handle and base
  offset. So `0x60` is a file handle wrapper and `0x80` is the packfile.
* **`%s.rpf` is not the path formatter.** The name goes through
  `FUN_14056eb30(manager, buf, name, literal)`, and the literal sits in a UTF-16
  block whose neighbours are `%llu`, `D:\LocalDumps`, `.dmp` and
  `crashcontext.log` — not `%s.rpf`. The archive path is a formatted key, which
  is consistent with `%s.rpf` having no code reference anywhere.

Three more fields settled by the later bodies:

* **`flag08` is not padding.** `FUN_140fc2540` tests `(*(uint8_t*)(file + 8) & 1)`
  and only then calls `FUN_1428ce230(file, pack)`, which caches the packfile at
  the file's `+0x58`. Bit 0 means "a packfile is already mounted here", and a
  freshly opened file starts clear.
* **`+0x2C` is the mode, and it is measured now.** It is `1` or `2`, and a name
  record is `8 + mode` bytes: the name region equals `align16(entryCount *
  (8 + mode))` exactly in all four archives. The walk `FUN_14087b0f0` also takes
  it as its alignment/multiplier argument. `+0x0C` still has no proven name.
* **The path resolver is shared, not RPF-specific.** `FUN_14056eb30` walks the
  device mount table (count `+0xC04`, names `+0x300` at 0x100 each, default index
  `+0xC00`, skip index `+0xC08` with enable byte `+0xC0C`), formats the caller's
  path, normalises it, opens the device read-only, and returns on the first mount
  that has the file. That is why its format argument sits in a UTF-16 block next
  to the crash-dump strings — the same routine resolves crash paths.

Work order from here:

1. `FUN_14056eb30` — the formatter, to settle what the path actually looks like
   (the recovered argument points at `0x14678d1bb`, five bytes before `%llu`,
   so the exact literal needs its call-site decoded before it is trusted).
2. `FUN_14087b0f0` — **done**, hand-disassembled, because it has no `.pdata`
   record and the batch export skipped it. It computes
   `{align_up(base, align), align8(begin + count * stride * align), align16(...)}`
   and both call sites store the first two into index `+0x38` / `+0x40`; see
   `src/sub_story/game/Core/FUN_14087b0f0/`. What the run counts is open.
3. Extraction, then the streaming/decompress path (`fiDeviceDirectStorage` is
   the only device literal in the image).

Files land in `src/sub_story/rage/base/file/` for the archive layer and
`src/sub_story/game/streaming/` for the game-side manager, mirroring GTAVSRC.

## Objective 2 — Fuel

`LOW_FUELH` is a dashboard/HUD state name, so the readable entry is the vehicle
fuel model that produces it. GTA V has no fuel simulation; RDR2 does
(`CTaskVehicleFSM`-adjacent), so the RDR2 build is the naming reference and the
GTA VI logic is new. Expect to derive the tank/consumption fields from float
offsets, then name the struct in `include/gta6decomp/`.

### Started: anchors, now that objective 1 can read the archives

`tools/anchors.py` cannot run here — it walks the Xbox image's `.pdata`, and
`6RE/DUMP/game_scarlett_master.exe` is not on this machine. Two replacements
work on the PS5 eboot instead.

**1. `joaat` hash immediates.** RAGE's tuning system finds a field by hash, so
the field name appears in code as a 32-bit immediate, never as a string. Two
names resolve that way, and both are real code sites (`ps5elf.resolve`, i.e. the
SELF block map — a constant `offset - 0x4000` delta is wrong for this container):

| name | `joaat` | code VAs |
|---|---|---|
| `fuelTank` | `0xd95d39a4` | `0x27d089`, `0x27d0d4`, `0x27d46f`, `0x27d4b2`, `0x545133`, `0x54517a`, `0x546739`, `0x546780` |
| `fuelLevel` | `0xf24a9f14` | `0x15a99be`, `0x15b1099` |

`LOW_FUELH` itself (`0x7861cc7a`) is **not** present as an immediate — it is HUD
state data, consistent with the earlier finding that these literals are
hash-keyed lookup data and never instructions.

**2. The tuning-field lookup shape.** At `0x27d089` the code selects a table by
the entity's class byte at `(entity + 8 & ~0xF) + 0x30` — `0xd6fff80` for class 2,
`0xae8ef00` for class 3 — and then calls

```
FUN_0027d5e0(0, *(u32 *)(table + 8), *(u64 *)(table + 0x10), 0xd95d39a4)
```

i.e. `lookup(mode, fieldArray, fieldCount, joaat("fuelTank"))`, and reads the hit
as a float. The eight `fuelTank` sites form two clusters of four — the same two
paths over both tables — which is what a two-table accessor looks like.

**3. Function boundaries without Ghidra.** The windowed-ELF route imported each
window as its own program, so a window's base was decompiled as one function and
the locals were artefacts. The eboot has no `.pdata`, but `PT_GNU_EH_FRAME` is
the same information: a sorted table of function starts. `tools/ps5callers.py`
(new) parses it, so `--addr` gives a containing function, `--imm` attributes an
immediate to one, `--refs` finds rip-relative readers of a data address, and
`--target` walks callers — none of which needs a Ghidra pass.

Two traps, both of which produced plausible-looking wrong answers first:

* the `datarel` base is the header's **virtual** address. Using the file offset
  instead still yields a sorted, monotone table (275,856 entries) and every
  lookup looks reasonable; only the `--check` cross-validation caught it, going
  from 2% to 29.7% of sampled starts being direct call targets, and 221/400
  opening with a prologue.
* a `jmp`/`je` target in a resolver is a leaf `mov eax, <offset>`, not a whole
  function — the leaf has to be followed before it means anything.

**4. The tank array, proven.** `FUN_0027d050` (320 bytes, one `push rbp` /
`ret`) is the whole model:

```
call 0x2864e0                       ; the vehicle entity
edx = [rax+0x15c]; rsi = [rax+0x160]   ; runtime field-override list
for (i = 0; i != edx*8; i += 8)
    if ([ [rsi+i] + 8 ] == 0xd95d39a4) goto hit    ; joaat("fuelTank")
class = [[[rax+8] & ~0xf] + 0x30]   ; 2 -> 0xd6fff80, 3 -> the other table
hit: count = [rcx+0x1c]; array = [rcx+0x20]
     for each of count:
         tank   = [array + i*8]
         cap    = [tank+8] or [[ [tank] + 0x10] + 8]
         ratio  = [tank+0x10] / *cap
         sum   += (ratio < 0) ? 0 : min(1.0, ratio)
     return min(1.0, 1.0 - sum/count)
```

So the fuel object is `{ +0x1c u32 tankCount, +0x20 tank*[] }`, the tank is
`{ +0x00 ptr, +0x08 float *capacity, +0x10 float level }`, stride 8, and the
result is the *used* fraction — the mean is fill, so the return is `1 - fill`.
The two clamp constants are `1.0` (`0x9c7a2dc`) and a `-0.001` (`0x9c7a9a4`)
that both callers apply as `1 - 0.001 * used`.

**5. The field tables are the aircraft-warning settings.** The two resolvers are
`AircraftWarningSettings::GetFieldPtr`, the function GTA V generates as a switch
over joaat field names; their leaves are byte offsets into that settings struct.
`FUN_044bad90` carries GTA V's layout unchanged, all 19 fields at the offsets
`src/dev_ng/game/audio/gameobjects.h` gives them:

```
+0x004 MinTimeBetweenDamageReports   +0x078 Engine_2_Fire
+0x008 TargetedLock                  +0x084 Engine_3_Fire
+0x014 MissleFired                   +0x090 Engine_4_Fire
+0x020 AcquiringTarget               +0x09c DamagedSerious
+0x02c TargetAcquired                +0x0a8 DamagedCritical
+0x038 AllClear                      +0x0b4 Overspeed
+0x044 PlaneWarningStall             +0x0c0 Terrain
+0x050 AltitudeWarningLow            +0x0d0 PullUp
+0x060 AltitudeWarningHigh           +0x0e0 LowFuel
```

`FUN_044b5d10` is the expanded VI variant: 35 hashes over `0x8`…`0x128`. From
`PlaneWarningStall` on, every shared warning sits exactly `+0x28` later than in
the GTA V class, `MinTimeBetweenDamageReports` moved from `+0x4` to `+0x68`, and
a run of six new 4-byte fields follows `LowFuel` at `0x114`…`0x128`. Seventeen of
the 35 hashes resolve against GTA V's vocabulary:

```
+0x008 modulesettings                +0x094 Engine_1_Fire
+0x01c StallWarning                  +0x0a0 Engine_2_Fire
+0x024 AltitudeWarning               +0x0ac Engine_3_Fire
+0x068 MinTimeBetweenDamageReports   +0x0b8 Engine_4_Fire
+0x06c PlaneWarningStall             +0x0c4 DamagedSerious
+0x078 AltitudeWarningLow            +0x0d0 DamagedCritical
+0x088 AltitudeWarningHigh           +0x0dc Overspeed
+0x0e8 Terrain                       +0x0f8 PullUp
+0x108 LowFuel
```

The other eighteen have no `case <hash>U:` anywhere in GTA V's game source, so
they are fields VI added and no local vocabulary can name them:

```
+0x00c 8e9705ff    +0x034 3f08820c    +0x054 c6e784ba    +0x118 8a53ff14
+0x010 60029f78    +0x03c fc61b68e    +0x05c 43f21933    +0x11c 0387f83d
+0x014 aa086792    +0x044 710a319a    +0x064 11e5e05b    +0x120 7d3e6a58
+0x018 3d6910c7    +0x04c 4f24c8ba    +0x114 ddf78c74    +0x124 981dc547
+0x02c 92954320                                        +0x128 17787303
```

That sweep is what `tools/ps5fields.py --vocab` exists for: every identifier in
`game/*.h` (711k) and `game/*.cpp` (465k), every token in the 131 GTA V `.meta`
files on hand (77k), and every pooled string in the eboot itself. No RDR2 source
is available locally, but RDR2 has no aircraft warnings and its `handling.meta`
keys are GTA V's, which the `.meta` sweep already hashed.

Two extractor bugs had inflated the tables these numbers come from. The binary
search emits `cmp esi, K-1 ; jle left` before `cmp esi, K ; je leaf`, and pairing
every `cmp` with the next `je` maps each bound onto the *following* field; other
leaves are reached by `cmp ; jne default` and have no `je` at all. Fixing both
turned 14/26 fields into 19/35 and deleted every `K-1` phantom — the "38 unnamed
hashes" were mostly those bounds.

**What this means for the fuel model.** `LowFuel` at `+0xe0`/`+0x108` is the
aircraft **audio warning** block (three `s32`: `MinTimeInStateToTrigger`,
`MaxTimeBetweenTriggerAndPlay`, `MinTimeBetweenPlay`), not the tank gauge and not
the dashboard threshold. The earlier revision of this section read those offsets
as fuel-struct fields; that reading is withdrawn. The tank array, tank record and
fill/used formula stand on the decompiled reader (`FUN_0027d050`) alone.

**6. The 5% gate.** `FUN_00baed50` caches `*(float *)(entity + 0x70)` into its own
`+0x168` (`0xbaee6f`), then after the tank block compares it against a literal at
`0x9c7c28c` and skips the block when it is *above*:

```
0xbaf00c  vmovss xmm0, [rbx+0x168]
0xbaf014  vucomiss xmm0, [rip+0x90cd270]   ; = 0.05
0xbaf01c  ja 0xbb033c                      ; > 5% -> skip
```

`0.05` on a value derived from the entity is the right shape for the low-fuel
warning, and the block it guards rebuilds a float trio and calls `0xd1ebe0`
twice — but nothing yet ties `entity + 0x70` to the tank mean, so this is the
threshold *candidate*, not a proven driver of `LOW_FUELH`.

**7. A string that isn't.** `LOW_FUEL` does appear in the eboot, at
`0x2f1c780` — but the bytes are `4c 4f 57 5f 46 55 45 4c 88 87 8f 73 c5 f8 11 87`,
i.e. instruction bytes that happen to spell it, followed by a `vmovss`. It has
zero rip-relative references, which is the tell. A plain `grep` for the HUD name
would have taken it as the state name; it is still hash-keyed data.

**4. What the data says.** `tools/rpf9grep.py` (new) searches entry contents
without extracting:

```
python3 tools/rpf9grep.py --archive common.rpf --pattern fuel
python3 tools/rpf9grep.py --archive data.rpf --pattern fuel --context 0x80
```

`common.rpf` row 86 carries `Vehicle_FuelBoost` / `Vehicle_FuelBoostIntro`
dispatch names and row 1 registers `TrailerFuel` as a vehicle model; `data.rpf`
hits on `fuel_tank` and `fuel_cap` are vehicle **fragment bone names** (the
entries are `PSIN` fragment lists ending in `chassis`, `bodyshell`, `wheel_lf`,
…), so they are geometry, not the model. The tuning values themselves are not
stored as text — they are the hashed field table the lookup above walks.

**Where this stands: rung 3 ("Layout").** The tank structure is proven — array,
record, fill/used formula and its constants — by decompiled reader code. What is
*not* done: the consumption rate has no name and no location yet, the settings
resolvers above turned out to be audio warnings rather than fuel, and the `0.05`
gate is not proven to be what sets the HUD state. Reaching the consumers of the
gate needs the vtable route, because the settings resolvers are reached through
constructor-registered function pointers (`FUN_049af7d0` is a static-initialiser
loop), so a plain caller scan legitimately finds none.

## Objective 3 — Police and wanted

The `Crime*` set is the most useful name block found in the whole image:
`CrimeReport`, `CrimeChainId`, `CrimeStgEndRsn`, `CrimeCurr`, `CrimeTgt`,
`CrimeRep`, `CrimeStg`. They read like fields of a crime-event record and the
staging/chain/reputation model GTA V calls `CCrime`. `Wanted Tuning` and
`Crime Tuning` are the tuning blocs, which gives the tunable field list for
free once the parser is found (objective 1's tuning reader is a prerequisite).

## Objective 4 — Taunt, aggravate, diffuse, threaten

No string anchor exists: `taunt`, `provoke`, `diffuse`, `threaten` and
`aggravate` all return zero hits in the image. These are ped-interaction
*states*, and in RAGE they surface as `CTask` subclasses dispatched from
`CPedIntelligence`, so they are reached through the task tree, not through
strings. The approach is therefore:

1. find `CPedIntelligence::m_TaskTree` (GTA V class layout reference), then
2. walk the task-type enum for the interaction family, then
3. name from RDR2's `CTaskAmbientClips` / greeting-taunt machinery.

This objective is honestly blocked until the task system has a named root, and
that is a consequence of the ordering, not a gap in the plan.

## Objective 5 — Cameras

`FUN_03301850` is the only code-anchored function in the whole anchor sweep, and
it is reached from `Camera_Move`. From there the director, the base camera and
the vehicle-injury slow-motion camera follow. The RDR2 slow-motion death/hurt
camera is `camSplineNode`-driven with time-warp (`CTimeWarp`); the equivalent
GTA VI names are not in the image, so the RDR2 source naming is the reference
and the GTA VI constants are recovered from the director's tuning data.

## Objective 7 — Byte matching

Tooling is in place ahead of the code:

* `tools/gen_objdiff.py` writes `objdiff.json` (one unit per function folder,
  all marked `awaiting_build`).
* `docs/objdiff.md` records why there is no diff yet: objdiff compares
  relocatable objects, and a linked retail PE is not one.
* `tools/progress.py` renders the matched-code count into `docs/objdiff.svg`,
  so the README number moves as soon as a unit matches.

The measured baseline is **0 matched functions**. That is the honest number and
it will stay 0 until a rebuilt object exists.
