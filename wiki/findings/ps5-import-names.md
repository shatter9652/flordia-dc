---
title: The eboot's imports, named
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

Result: **730 stubs, 730 named, 0 left as NIDs**.

| source | stubs |
| --- | --- |
| GhidraProspero `nid_db.xml` (154,478 pairs) | 713 |
| `ps5-nid-map` corpus (328,561 NIDs, 541 modules) | 17 |

The 17 are the ones the shipped database does not carry — `libSceAgc` (8) and
`libScePsml_mfsr2` (9) — which is why the ps5-nid-map corpus is worth keeping as
a third source even though the database is larger for libc and libkernel.

## Why the stubs were unnamed in the program

The saved project's externals are named after the NID with its SCE version
suffix intact (`ou16V5hh5sg#Z#X`, `bzQExy189ZI#A#B`), and their namespace is
`<EXTERNAL>`. The resolver that runs during analysis prints
`Resolved name: ...` for the versions it knows; the `#Z#X` variants are the ones
it does not, so the names have to come from the corpora instead of from Ghidra.

Related: [[nid-names]], [[nid = sha1(symbol + salt)]]
