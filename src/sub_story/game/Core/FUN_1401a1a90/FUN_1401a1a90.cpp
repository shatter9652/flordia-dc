// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a1a90  size: 44 bytes
// Name:    FUN_1401a1a90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145069db0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_1401a1a90(longlong param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = FUN_145069db0();
  iVar2 = func_0x000144ed0ab0(1);
  uVar3 = iVar2 - *(int *)(param_1 + 0x50);
  return CONCAT31((int3)(uVar3 >> 8),*(uint *)(param_1 + 0x24) < uVar3 | bVar1);
}

