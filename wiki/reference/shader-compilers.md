---
title: The shader compilers, decompiled
type: reference
status: current
created: 2026-11-25
updated: 2026-11-25
tags: [shaders, pssl, sdk, ghidra]
---

# The shader compilers, decompiled

The SDK's shader compilers are ordinary PE32+ x86-64 Windows console programs,
so no PS5 loader is involved in reading them:

| binary | size | target | SDK path |
| --- | --- | --- | --- |
| `orbis-psslc.exe` | 9.1 MB | PS4, PSSL | `SonySDKS/PS4/2.500/host_tools/bin` |
| `orbis-wave-psslc.exe` | 6.6 MB | PS4, Wave | `SonySDKS/PS4/2.500/host_tools/bin` |
| `prospero-wave-psslc.exe` | 16 MB | PS5, Wave | `SonySDKS/PS5/11.000/host_tools/bin` |

Output lives in `ps_shader_dc/<binary>/`: one `.c` per function plus
`index.tsv` (`va`, `size`, `name`, `file`, `program`, `sha256`), produced by
`tools/DumpAll.java`. Measured on this host: **`orbis-psslc.exe` — 11,662
functions written, 3 failed** (`DUMPALL|written=11662|failed=3`), 69 MB. The
`.c` files are decompiler output with the function's address, size and
signature in the header — evidence, not recovered source.
The trees are generated, so they are not committed; the recipe is.

## Three host facts, all measured

1. **`MAXMEM` above ~1 GB is killed.** The JVM disappears right after
   `Creating project`, with no Ghidra error and no `EXIT=` line; `MAXMEM=900M`
   survives on a 9 MB PE.
2. **The project's parent directory must exist** before `-import`, or Ghidra
   aborts with `Directory not found`.
3. **REA cannot do this**: it opens the PE instantly, but every
   analysis-backed call (`binary_overview`) exceeds the MCP deadline, so the
   MCP route yields nothing for these binaries. Headless with `-noanalysis` is
   not enough either — without analysis there are almost no functions to dump.

## Where this leads

`tools/shadertool` wraps the same compilers for actual use (`compile --target
ps4|ps5` runs them under Wine), and its `decompile` command is dispatch-only:
AnyPS5's recompiler is a library (`add_shader_recompiler(...)` under
`core/libs/prx/libSceAgcDriver`), not a CLI, so a wrapper has to be written
against `ShaderRecompiler` before shader binaries can go back to PSSL.

Related: [[ps5ref-corpus]]
