---
title: The eboot's imports, named where a name exists
type: finding
status: solved
created: 2026-11-25
updated: 2026-11-25
tags: [ps5, nid, imports, symbols]
---

# All 730 imports, named

`tools/DumpImports.java` lists every external/thunk function of the analysed
eboot; `tools/ps5nids.py imports` joins those NIDs against three corpora and
writes `names/ps5_eboot_imports.tsv`:

```
va	nid	library	symbol	source
1060f000	bzQExy189ZI	libSceLibcInternal	_init_env	GhidraProspero/nid_db.xml
1060f008	8G2LB+A3rzg	libSceLibcInternal	atexit	GhidraProspero/nid_db.xml
1060f010	XKRegsFpEpk	<EXTERNAL>	catchReturnFromMain	GhidraProspero/nid_db.xml
```

Result: **730 stubs, 713 named, 17 module-only, 0 unknown**.

| source | stubs | what it gives |
| --- | --- | --- |
| GhidraProspero `nid_db.xml` (154,478 pairs) | 713 | symbol name |
| `ps5-nid-map` corpus (328,561 NIDs, 541 modules) | 17 | module only |

The 17 are ones the shipped database does not carry — `libSceAgc` (8) and
`libScePsml_mfsr2` (9). The corpus lists NIDs per module and no symbol names,
so for those the honest output is "this stub is exported by libSceAgc" and
nothing more; `ApplyImports.java` refuses to "rename" a stub to its own NID.

## Applied into the project

```
- postScript ApplyImports.java <repo>
IMPORTS_APPLIED|730|skipped=0
```

A second run reports `skipped=706` as `already named _init_env`, which is the
proof that the renames were saved into the project rather than made in a
throw-away copy.

## Why the stubs were unnamed in the program

The saved project's externals are named after the NID with its SCE version
suffix intact (`ou16V5hh5sg#Z#X`, `bzQExy189ZI#A#B`), and their namespace is
`<EXTERNAL>`. The resolver that runs during analysis prints
`Resolved name: ...` for the versions it knows; the `#Z#X` variants are the ones
it does not, so the names have to come from the corpora instead of from Ghidra.

Related: [[nid-names]], [[nid = sha1(symbol + salt)]]
