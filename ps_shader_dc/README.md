# ps_shader_dc — the console shader compilers, decompiled

The shader compilers are **host** binaries that Sony ships inside the SDK:

| binary | size | target | SDK path |
| --- | --- | --- | --- |
| `orbis-psslc.exe` | 9.1 MB | PS4, PSSL | `SonySDKS/PS4/2.500/host_tools/bin` |
| `orbis-wave-psslc.exe` | 6.6 MB | PS4, Wave | `SonySDKS/PS4/2.500/host_tools/bin` |
| `prospero-wave-psslc.exe` | 16 MB | PS5, Wave | `SonySDKS/PS5/11.000/host_tools/bin` |

All three are PE32+ x86-64 console programs (MS Windows 6.00), so they decompile
with the normal Windows ABI and need no PS5 loader work.

## How the output is produced

One headless import per binary, then `tools/DumpAll.java` writes one `.c` file
per function plus `index.tsv`:

```sh
JAVA_HOME=/usr/lib/jvm/java-21-openjdk \
MAXMEM=700M /home/nate/ghidra/ghidra_12.1.4_PUBLIC/support/analyzeHeadless \
  /tmp/shaderdc_proj psslc \
  -import SonySDKS/PS4/2.500/host_tools/bin/orbis-psslc.exe \
  -analysisTimeoutPerFile 900 \
  -scriptPath tools -postScript DumpAll.java "$PWD/ps_shader_dc/orbis-psslc"
```

Three host facts learned the hard way, all reproducible:

* the project **parent directory must exist** before `-import`, or Ghidra aborts
  with `Directory not found`;
* `MAXMEM` above ~1 GB is killed on this 3 GB host (the JVM disappears right
after `Creating project`, with no Ghidra error); `MAXMEM=900M` survives a 9 MB PE;
* a run started with plain shell backgrounding inside a synchronous command dies
with the command, so the long imports are started as owned background jobs and
their logs polled.

REA cannot do this here: its Ghidra provider opens the PE fine but every
analysis-backed tool call exceeds the MCP deadline (`binary_overview` timed
out), so the MCP route produces nothing for a 9 MB binary.

## What the output is, and is not

`index.tsv` columns: `va`, `size`, `name`, `file`, `program`, `sha256`. Each
file holds the Ghidra decompiler's C for one function with its address, size and
signature in the header comment. Names are the decompiler's (`FUN_...`,
`thunk_FUN_...`), so this is evidence to read, not a recovered source tree:
nothing is renamed and nothing is claimed to be the original.

## Status on this host

| binary | functions dumped | state |
| --- | --- | --- |
| `orbis-psslc.exe` | **11,662** written, 3 failed (69 MB) | complete — `DUMPALL|written=11662|failed=3` |
| `prospero-wave-psslc.exe` | **15,571** written, 3 failed (86 MB) | complete — `DUMPALL|written=15571|failed=3` |
| `orbis-wave-psslc.exe` | not started | same command, swap the input |

`index.tsv` in each subdirectory is the authority on how many functions were
written; the counts above are a snapshot. The `.c` trees are **not committed**
(tens of MB per binary, and regenerable), so a fresh clone has the recipe and
the tooling but not the output.
