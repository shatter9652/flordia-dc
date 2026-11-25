// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003dfb0  size: 60 bytes
// Name:    FUN_14003dfb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14546d520
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14003dfb0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14546d520(param_2);
  if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0xc4) & 6) != 0)) &&
     (lVar1 = func_0x000144fe4680(param_2), lVar1 == param_1)) {
    return 1;
  }
  return 0;
}

