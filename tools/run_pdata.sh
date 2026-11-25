#!/usr/bin/env bash
# Resumable .pdata-driven disassembly of game_scarlett_master.exe (GTA VI, Xbox Series X).
# .pdata holds 299,264 RUNTIME_FUNCTION entries; each one is created, sized and disassembled.
# Usage: run_pdata.sh [start_cursor] [chunk_size]
set -u
cd "$(dirname "$0")/../.." || exit 1
HL=/home/nate/ghidra/ghidra_12.1.4_PUBLIC/support/analyzeHeadless
PROJ=ghidra_proj/game_scarlett_master
NAME=game_scarlett_master.exe
START=${1:-500}
CHUNK=${2:-20000}
TOTAL=299264
rm -f "$PROJ"/*.lock
for ((c=START; c<TOTAL; c+=CHUNK)); do
  echo "== chunk $c"
  MAXMEM=1800M "$HL" "$PROJ" game_scarlett_master -process "$NAME" \
    -noanalysis -scriptPath /tmp/ghidra_scripts \
    -postScript RePdata.java "$c" "$CHUNK" 2>&1 \
    | grep -E 'PDATA\||NEXT\||ERROR'
done
echo "== done"
