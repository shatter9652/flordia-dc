// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140018780  size: 47 bytes
// Name:    FUN_140018780
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14540abb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140018780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = func_0x00014555b010();
  if (lVar1 != 0) {
    FUN_14540abb0(*(undefined8 *)(lVar1 + 0x18),param_3);
  }
  return lVar1 != 0;
}

