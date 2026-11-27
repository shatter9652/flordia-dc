---
title: Native Orbis plan — port, rehost or rebuild
type: reference
status: current
created: 2026-11-27
updated: 2026-11-27
tags: [ps4, orbis, porting, engine]
---

# Native Orbis plan

No emulation: the target is an OpenOrbis ELF/fpkg driving GNM. Full plan in
`docs/native-orbis-plan.md`. What matters:

* **Formats and engine plumbing transfer; behaviour does not.** The RPF9 reader
  is decompiled and portable (`0x8e0990` open, `0x8e1100` TOC/decrypt init,
  entries 8 bytes `{u16 type, u32 offset}`, header count at `+0x1A`, key at
  `+0x2C`, flags `+0x2D`, mode `+0x2E`).
* **GTAVSRC as the base is a dead end** — it cannot ship, its `game/` layer is
  GTA V's, and GTA VI's systems need RAGE 9 types and ttdb. Use it as a design
  reference (`fiPackfile`, `device_gnm.cpp`).
* **Own engine, OpenRW-style, is the only shippable route**, and it must start at
  the pipeline, not at gameplay: M1 RPF9 mount → M2 ttdb parse → M3 one cell
  drawn through GNM → M4 player/camera → M5 vehicles.

Next decompilation targets: RSC container, ttdb loader, streaming engine, AGC
command submission.

Related: [[ps4-route]], [[port-paths]]
