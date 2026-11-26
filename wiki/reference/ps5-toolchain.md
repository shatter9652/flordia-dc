---
title: PS5 toolchain on this machine
category: reference
tags: [tooling, ghidra, rea, ps5, sdk]
sources: [skills/ghidra-headless/SKILL.md, docs/ps5-build.md, docs/ps5-symbols.md]
updated: 2026-11-25
---

# What actually runs here

| Tool | State | Use |
|---|---|---|
| REA | **works, except Ghidra** — provider requires Ghidra ≥ 12.2, installed is 12.1.4 | file/ELF/PE/APK structure, evidence bundles |
| Ghidra 12.1.4 `analyzeHeadless` | works | decompilation, vtable recovery |
| `tools/ps5elf.py` | works | SELF → windowed ELF, VA/offset, `--entry` |
| `tools/ghidra_dump.py` + `DumpC.java` | works | decompile an address list in ~7 s per 12 KB window |
| `tools/ps5nids.py` | works, verified | symbol ↔ NID |
| `tools/ps5imports.py` | works | 46-library import manifest |
| Hopper / IDA / Kuna | macOS-only / unconfigured | none |
| GhidraMCP | **not installed** | needs a GUI Ghidra; see [[ghidra-headless]] |

## Rules learned

1. **Windows must not overlap** when calling `ghidra_dump.py`; overlapping
   `PT_LOAD`s silently yield `no function at` for every address.
2. **Script output lands in `application.log`**, not stdout, even when stdout
   looks empty.
3. **PS5 vtable bytes are zero on disk** — rebuild from the `---` segment
   pointer table.
4. **`ApplyPs5.java` does not complete** on the 195 MB eboot: 3 GB RAM, a 941 MB
   project and `MAXMEM=6000M` add up to an OOM kill right after `Opening
   project`, with no `REFS|` line. Blocked, not passing. A 1800 MB retry is the
   last thing this host can try.
5. Use the **SELF**, not the converted ELF.

## Reference trees

| Path | What it gives |
|---|---|
| `SonySDKS/PS5/11.000/target/include` | Sony 11.000 headers: names, signatures, structs |
| `/opt/ps5-payload-sdk` | payload headers + `prospero-nid`, `ps5/nid.h` |
| `ps5ref/AnyDevKit/3rdparty/{AnyPS5,ps5-nid-map}` | per-module NID lists (verification) |
| `ps5ref/KytyPS5/src/loader` | symbol database, runtime linker |
| `ps5ref/ps5-tools/*` | `resolve_call.py`, `fw_exports.py`, self-tools |
| `6RE/DUMPS/PS5Dump/PS5_Firmware` | containers only — every module is SELF `5414f5ee`, encrypted |

## Related

- [[nid-names]]
- [[objective-1-rpf]]
