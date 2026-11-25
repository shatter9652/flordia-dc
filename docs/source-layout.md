# Source layout recovered from the executable

The tree is not invented: it is the layout the image itself still carries.

## The project root

The only absolute path in the binary is the linker's PDB path:

```
X:/americas/src/sub_story/game/vs_project/Gaming.Xbox.Scarlett.x64/Build/master/game_scarlett_master.pdb
```

`americas` is the project codename, `src/sub_story` is the source root, and `game` is the layer. GTA V's
tree has the same shape at `src/dev_ng/game` (and `rage/…` next to it), so this project uses:

```
src/sub_story/game/<area>/<Function>/<Function>.cpp
src/sub_story/rage/<layer>/<Function>/<Function>.cpp
```

`tools/exe_paths.py` extracts that path plus every content namespace and writes `names/exe_paths.tsv`
(65 rows: 1 build root, 14 build paths, 50 content paths).

## Content namespaces

Release builds carry the mount points the game reads its data from, and the first segment of each names the
area of the engine that owns it. The ones present in this image:

| Prefix | Count | Filed under |
|---|---|---|
| `common:/data/ai/…` (conversations, conditionalanims, hazardnodes, trainConfigs, …) | 16 | `game/ai` |
| `platform:/data/ui/loose/…` (map/data/gps, feeds/uiFeedConditions, …) | 9 | `game/frontend/ui` |
| `common:/data/audio…` | 1 | `game/audio` |
| `common:/data/<setting>` (timecycle-ish tables: visualsettings, materials, garages, …) | 20 | `game/Core` |

`ReSource.java` uses the same table when a body loads one of these strings: the body is written under the
area the path belongs to (`assetTree`), one level of sub-area included when the path has one. A function
named from GTA V's source takes priority and lands in that source file's directory instead; a body with no
evidence falls back to its subsystem bucket.

## What is not in the image

- **No `__FILE__` strings.** There is no `.cpp` path anywhere except the PDB. The build has asserts but its
  file names were stripped, so per-function source files cannot be recovered from strings.
- **No `rage/…` path.** The rage layer is visible only through class names (`rage::`, `fw*`, `grc*`) and the
  GTA V source match table, not through a path string.
- **RAGE 9 hashes name pools**, so most gameplay identifiers are not strings at all.

That makes the source-directory assignment three-tiered and evidence-ordered: GTA V source file (130
functions) → content namespace loaded by the body → subsystem bucket. Every body header states which tier
placed it.
