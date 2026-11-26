---
title: PS5 NIDs are hashes of symbol names
category: finding
tags: [ps5, nid, imports, sdk]
sources: [docs/ps5-symbols.md, tools/ps5nids.py, names/ps5_nid_symbols.tsv]
updated: 2026-11-25
---

# NID = sha1(name + salt)

The loader identifies imports by 11-character NIDs. No image ships the mapping,
but a NID is a *hash* of the symbol name, so the mapping is regenerated instead
of searched:

```
digest = sha1(name + 518d64a635ded8c1e6b039b1c3e55230)
digest[0:8] byte-swapped, digest[8:16] zeroed
three 24-bit groups -> 11 chars of base64 with '+' '-' as the last two
```

`tools/ps5nids.py` matches `prospero-nid` byte for byte.

## Verification

Against the AnyDevKit NID map (546 module `.inc`, produced by a different tool):

```
sceKernelGetProcessTime     4J2sUJmuHZQ  in NID map
sceSystemServiceGetStatus   rPo6tV8D9bM  in NID map
sceSaveDataMount            32HQAQdwM2o  in NID map
3/3
```

## The better table that already exists

GhidraProspero ships `data/nid_db.xml` — **154,478** NID→symbol pairs, one
`<Entry obf="NID" sym="name"/>` each, covering libc, libkernel and SCE C++.
`tools/ps5nids.py lookup` reads it automatically and agrees with the loader:
`f7uOxY9mM1U` = `__stack_chk_guard`, `2sWzhYqFH4E` = `_Stdout`,
`4J2sUJmuHZQ` = `sceKernelGetProcessTime`. It is generated, not committed
(16 MB of TSV); `export-db` writes it on demand.

## The generated table

`names/ps5_nid_symbols.tsv` — 3,407 `sce*` symbols scanned from
`SonySDKS/PS5/11.000/target/include` (987 headers) and
`/opt/ps5-payload-sdk/target/include` (2,598 headers), each with its NID and
source path. `lookup` and `encode` work in both directions from it.

## What this does and does not do

- **Does** name imported system calls, wherever the SDK declares the symbol.
- **Does not** name internal `sub_...` functions: statically linked code has no
  NID, and the SDKs contain no game symbols.
- Aliases are a real gap: 11.000 declares `sceSaveDataMount3`; the older plain
  `sceSaveDataMount` is a macro and so is absent from the scan.

## Why it matters here

The RPF layer's device calls (`Open`, `Read`, `Close`) go through PS5 file APIs.
Naming those imports turns `FUN_xxx` call sites into `sceKernel*`-level evidence
without needing a decrypted firmware module.

## Related

- [[ps5-entry-index]]
- [[ps5-toolchain]]
