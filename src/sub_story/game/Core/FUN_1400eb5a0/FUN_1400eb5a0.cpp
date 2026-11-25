// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400eb5a0  size: 22 bytes
// Name:    FUN_1400eb5a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f6aa10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_1400eb5a0(void)

{
  int iVar1;
  
  iVar1 = FUN_144f6aa10();
  return CONCAT31((int3)(iVar1 - 1U >> 8),iVar1 - 1U < 5);
}

