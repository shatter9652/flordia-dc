// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401736a0  size: 97 bytes
// Name:    FUN_1401736a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1420cbb00, FUN_1415608b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_1401736a0(longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *param_3;
  uStack_20 = param_3[1];
  lVar1 = func_0x000144f97130(0x40);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_1415608b0(lVar1);
  }
  FUN_1420cbb00(param_1,lVar1,0,&uStack_28);
  *(undefined4 *)(*param_1 + 0x30) = param_2;
  return param_1;
}

