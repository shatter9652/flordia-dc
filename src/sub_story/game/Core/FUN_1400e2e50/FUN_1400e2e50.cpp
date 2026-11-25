// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e2e50  size: 57 bytes
// Name:    FUN_1400e2e50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e63cf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_1400e2e50(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = FUN_144e63cf0();
  if (((lVar3 == 0) || ((byte)(*(char *)(lVar3 + 0xc) - 1U) < 2)) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0x1c8) - 3;
    uVar1 = CONCAT31((int3)(uVar2 >> 8),uVar2 < 2);
  }
  return uVar1;
}

