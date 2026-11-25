// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b0c50  size: 51 bytes
// Name:    FUN_1401b0c50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b0dc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_1401b0c50(byte param_1)

{
  longlong lVar1;
  
  lVar1 = func_0x000144f01450();
  if (lVar1 != 0) {
    param_1 = FUN_1401b0dc0(*(undefined8 *)(lVar1 + 0xfd8));
  }
  return lVar1 != 0 & param_1;
}

