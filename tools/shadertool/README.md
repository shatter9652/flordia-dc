# shadertool

A native Linux CLI around the shader machinery that actually exists for PS4 and
PS5. It is deliberately small, because the three things a "shader compiler and
decompiler" needs are in very different states.

```
make -C tools/shadertool
tools/shadertool/shadertool info      <shader.bin>
tools/shadertool/shadertool compile   <shader.pssl> --target ps4|ps5 -o out.bin [--sdk DIR] [-- extra]
tools/shadertool/shadertool decompile <shader.bin> [--recompiler PATH]
```

## `info` — exact

Parses a GNM shader container. The layout is public in the console SDK headers
and mirrored by `ps5ref/AnyDevKit/3rdparty/opengnm/include/gnm_shaderbinary.h`:

* `GnmShaderFileHeader` (0x10 bytes): magic `"Shdr"` (0x72646853), version,
  stage type, header size in dwords, target GPU mode;
* `GnmShaderCommonData`: code size in dwords, SRT flag, input usage slots,
  embedded constant-buffer dqwords, scratch dwords;
* the embedded `GnmShaderBinaryInfo` (`"OrbShdr"`): binary type, source type,
  code length, two hashes and a CRC32 over everything up to the CRC field,
  which `info` recomputes and reports as `match` or `MISMATCH`.

Anything without the `"Shdr"` magic is reported as unknown with a CRC32 of the
whole file; PS5 Wave binaries and DXBC/SPIR-V wrappers are not parsed yet.

## `compile` — wraps Sony's compiler

PSSL is proprietary, and neither SDK describes its back end. What both SDKs do
ship is the compiler binary:

| target | compiler | in the SDK at |
| --- | --- | --- |
| PS4 | `orbis-wave-psslc.exe` (also `orbis-psslc.exe`) | `SonySDKS/PS4/2.500/host_tools/bin` |
| PS5 | `prospero-wave-psslc.exe` | `SonySDKS/PS5/11.000/host_tools/bin` |

`compile` resolves that executable under `--sdk` (or `$PS_SDK_ROOT`), runs it
through Wine, and forwards anything after `--` to it verbatim. It prints the
command it runs. It does not pretend to compile when Wine or the SDK is
missing: it reports the failure and the path it looked in.

The signature of a psslc invocation is not documented in the SDK tree, so the
flags are yours to supply (`-- -I target/include_common ...`) rather than
guessed here.

## `decompile` — refuses until a recompiler is built

Going from GCN/RDNA2 machine code back to PSSL or HLSL needs three things no
Sony SDK contains: an ISA decoder, an SSA intermediate representation, and a
control-flow structurizer. The AnyPS5 tree in `ps5ref` vendors exactly those:

```
ps5ref/AnyDevKit/3rdparty/AnyPS5/core/shader/recompiler/
  RdnaDecoder/                 RDNA instruction decoding
  IntermediateRepresentation/  IR
  ControlFlow/Structurizer     structured control flow
  (SPIR-V back end)
ps5ref/AnyDevKit/3rdparty/opengnm-psbc/libpsbc
  SPIR-V -> GCN shader binary with a GnmShaderFileHeader   (compile direction)
```

Build one of them and pass `--recompiler PATH`; `shadertool decompile` then runs
it and nothing else. Without it the command exits non-zero and says what is
missing, because emitting plausible-looking PSSL from a header alone would be
invention.

## Status

* `info`: implemented and exercised on a synthetic container (header, common
  data, stage and code-size fields all round-trip).
* `compile`: implemented as a resolver plus Wine invocation. Not exercised here:
  Wine is installed and the compilers are present, but running a Sony Windows
  binary needs its own prefix and licence acceptance, which is a host decision.
* `decompile`: not implemented; dispatch only.
