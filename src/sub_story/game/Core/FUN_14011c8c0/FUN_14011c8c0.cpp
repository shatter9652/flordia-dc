// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011c8c0  size: 46 bytes
// Name:    FUN_14011c8c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14011c850
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011c8c0(longlong param_1)

{
  uint uVar1;
  
  if (0 < *(int *)(param_1 + 0x570)) {
    uVar1 = *(int *)(param_1 + 0x570) + 1;
    do {
      FUN_14011c850(param_1,uVar1 - 2);
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}

