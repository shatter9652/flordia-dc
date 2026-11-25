// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b6c20  size: 77 bytes
// Name:    FUN_1401b6c20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14528c8f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401b6c20(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = func_0x000140019d80(param_1,0x764827df);
  if (lVar1 == 0) {
    lVar1 = func_0x000140019d80(param_1,0xb8431f4);
  }
  FUN_14528c8f0(param_2,lVar1);
  return;
}

