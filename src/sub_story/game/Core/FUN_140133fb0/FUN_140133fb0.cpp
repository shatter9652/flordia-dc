// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140133fb0  size: 37 bytes
// Name:    FUN_140133fb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144de6230
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_140133fb0(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_144de6230();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT31((int3)(*(uint *)(lVar2 + 0x30) >> 8),
                     (0x1cU >> (*(uint *)(lVar2 + 0x30) & 0x1f) & 1) != 0);
  }
  return uVar1;
}

