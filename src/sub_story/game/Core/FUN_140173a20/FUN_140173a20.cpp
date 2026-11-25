// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140173a20  size: 123 bytes
// Name:    FUN_140173a20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1420cbb60, FUN_1419bcb90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong *
FUN_140173a20(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_28 = *param_4;
  uStack_20 = param_4[1];
  uStack_38 = *param_3;
  uStack_30 = param_3[1];
  lVar1 = func_0x000144f97130(0x50);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    FUN_1419bcb90(lVar1);
  }
  FUN_1420cbb60(param_1,lVar1,0,&uStack_38,&uStack_28);
  *(undefined4 *)(*param_1 + 0x40) = param_2;
  return param_1;
}

