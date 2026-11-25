// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f9c20  size: 21 bytes
// Name:    FUN_1400f9c20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_1400f9c20(void)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = func_0x000144fab120();
  uVar1 = 1;
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 0xec);
  }
  return uVar1;
}

