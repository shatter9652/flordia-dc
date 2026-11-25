// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140173450  size: 74 bytes
// Name:    FUN_140173450
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141c7e630
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140173450(undefined8 *param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  undefined4 uStack_14;
  
  *param_1 = 0;
  func_0x000141c170c0(param_1 + 1);
  auVar1._0_12_ = ZEXT812(0);
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 9) = auVar1;
  FUN_141c7e630(param_1,param_2);
  func_0x000144380410(&uStack_14);
  *(undefined4 *)(param_1 + 5) = uStack_14;
  return param_1;
}

