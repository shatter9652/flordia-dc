// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140173710  size: 132 bytes
// Name:    FUN_140173710
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141de8c20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8
FUN_140173710(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = *param_3;
  uStack_30 = param_3[1];
  puVar1 = (undefined8 *)func_0x000144f97130(0x30);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    func_0x000141718370(puVar1);
    *puVar1 = &UNK_1465e9620;
  }
  FUN_141de8c20(param_1,puVar1,1,param_2,&uStack_38,param_4);
  return param_1;
}

