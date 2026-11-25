// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011d540  size: 44 bytes
// Name:    FUN_14011d540
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fd0130
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14011d540(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = func_0x00014011d570();
  if ((char)uVar1 != '\0') {
    FUN_144fd0130(_DAT_14a9e88c0,param_1);
  }
  return uVar1;
}

