# objdiff

objdiff is the tool this project will use for objective 7 (byte matching). It
compares **two relocatable object files**, function by function, and shows the
instruction and relocation diffs. It supports x86_64 and demangles MSVC symbols,
so the architecture is not a blocker.

## Why the report is empty

A linked retail PE is not a relocatable object. `game_scarlett_master.exe` has
299,257 `.pdata` function starts and no per-translation-unit `.obj` alongside it
in `6RE/DUMP/`. objdiff needs an `expected` object to diff against, and there is
none until a matching-toolchain rebuild produces one.

So the honest baseline is **0 matched functions**, and `docs/objdiff.svg` shows
0.0% filled. The graph exists now so that the number moves automatically when
matching starts, instead of being typed by hand at the end.

## What has actually been run

objdiff-cli was built from `objdiff/` on this machine:

```
cargo build --release -p objdiff-cli     # Finished in 16m 31s
objdiff/target/release/objdiff-cli --version   # 3.8.3
```

and the base side of `packfile.cpp` is compiled with clang-cl, whose default
target here is `x86_64-pc-windows-msvc` — the ABI the retail image was built
with:

```
clang-cl /c /O2 /GS- /Gy /GR- /std:c++17 /I build/compat
         /Fo:build/rage/base/file/packfile.obj src/sub_story/rage/base/file/packfile.cpp
  -> build/rage/base/file/packfile.obj, 6,475 bytes
```

`build/compat/` holds four shim headers (`cstdint`, `cstddef`, `cstring`, `new`)
because clang-cl on Linux has no MSVC standard library. They are declarations
only; the recovered code needs nothing else.

Pointing objdiff at the project resolves the unit and then fails on the missing
retail object, which is the honest state:

```
$ objdiff/target/release/objdiff-cli diff -p gta6decomp sub_story/rage/base/file/packfile
Failed: No such file or directory (os error 2)
```

So: **the tool works, the project loads, the base object exists, the target
object does not.** That is why the matched count is 0 and not an error in the
configuration.

## The configuration

`tools/gen_objdiff.py` writes `objdiff.json` with one unit per function folder,
and a distinct `kind` for hand-written files. Generated units do not compile yet
(Ghidra's `undefined8` / `param_N` is not C++), so they are marked
`awaiting_rewrite`; a hand-written unit is `built` when its object exists.

```json
{
  "name": "rage/base/file/FUN_01fb2600",
  "target_path": "build/rage/base/file/FUN_01fb2600.obj",
  "base_path":   "build/rage/base/file/FUN_01fb2600.obj",
  "metadata": {
    "source_path": "src/sub_story/rage/base/file/FUN_01fb2600/FUN_01fb2600.cpp",
    "status": "awaiting_build"
  }
}
```

One unit per function, not per source file, because the final objective is
per-function equivalence: a unit must stay comparable to the single retail
function it transcribes. `build_base` is on and `build_target` is off, matching
the objdiff-project convention where the retail side is fixed and the rebuilt
side is what changes.

Run it with:

```sh
python3 gta6decomp/tools/gen_objdiff.py          # write objdiff.json
python3 gta6decomp/tools/gen_objdiff.py --check  # counts only
```

## What has to exist before a diff is meaningful

1. A build that emits `.obj` per unit. x64 MSVC (or `clang-cl` with
   `-fms-compatibility`) into `build/<area>/<Function>.obj`.
2. A **retail-side** object for the same function. This is the hard part: it
   requires either a real `.obj` from the build tree, or a synthetic object
   assembled from the retail bytes plus relocation records read out of the
   image. Without it objdiff has one side only.
3. Symbol names that line up after demangling, which is why the tree keeps
   `FUN_<address>` until evidence renames a body — an address is a stable key,
   a guessed name is not.

Point 2 is the reason objective 7 is last and why `reprobit` was evaluated (see
`docs/toolchain.md`): a certified rebuild is the correct standard, and this
project has neither the compiler profile nor the retail objects that standard
needs yet.

## Reporting

`tools/progress.py` reads `index.tsv` and `.pdata`, optionally reads
`matches/objdiff_summary.json` (written by whatever produces a real diff), and
renders both `docs/objdiff.svg` and `docs/progress.svg`. Both are embedded in
the README. To change the matched number without a diff run:

```sh
echo '{"matched_functions": 3}' > gta6decomp/matches/objdiff_summary.json
python3 gta6decomp/tools/progress.py
```

That is deliberately the only way the number can change, and it is recorded in
version control with the tree it describes.

## Function match first, byte match last

Two different counts are easy to confuse, so the tree keeps them apart:

| Tier | Question | Where it is recorded |
|---|---|---|
| **function match** | does the readable body do what the Ghidra body does? | the body itself, plus the evidence header; all 4,626 exported bodies and the 4 hand-written ones |
| **byte match** | are the compiled instructions identical to retail? | `tools/funcmatch.py`, objdiff, objective 7 |

Byte matching needs the same compiler and flags as the retail build. Until that
exists, `tools/funcmatch.py` answers the narrower question directly: it pulls the
retail bytes at an RVA out of the PE, pulls the rebuilt section out of a COFF
object, blanks relocation placeholders, and prints the first difference.

The only function with a hand-disassembled reference body is `FUN_14087b0f0`
(52 bytes, no `.pdata` entry):

```
$ python3 tools/funcmatch.py --rva 0x87b0f0 --size 0x34 \
      --obj build/game/Core/FUN_14087b0f0.obj --symbol fiPack_ComputeRun
retail   .text:0x87b0f0  52 bytes
rebuilt  .text          73 bytes (8 relocation bytes blanked)
retail   8b 44 24 28 45 0f af c1 44 0f af c0 48 8d 54 02 ff ...
rebuilt  48 89 c8 8b 4c 24 28 45 89 c0 45 89 c9 4d 0f af c8 ...
first difference at +0x0: retail 8b, rebuilt 48
NOT BYTE-IDENTICAL
```

The gap is codegen, not the reconstruction:

- retail reads the fifth argument with `mov 0x28(%rsp),%eax` and multiplies with
  32-bit `imul`; clang-cl zero-extends `%r8d`/`%r9d` and uses 64-bit `imulq`;
- retail stores `out[0]` before computing the rest; clang keeps the sret pointer
  in `%rax` and stores later;
- clang folds the two `align` steps into `paddq`/`pand` against two `.rdata`
  constants; MSVC emits `add`/`and` per step.

So this body is a **function match** and not a byte match, and the diff names
exactly what the byte-matching tier still needs: an MSVC toolchain (or objdiff's
normalisation) and the last objective's full pass. Nothing in the readable body
is adjusted to chase clang's instruction selection, because that would make the
source less like the RAGE original, not more.
