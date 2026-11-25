// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401822e0  size: 116 bytes
// Name:    FUN_1401822e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140182360, FUN_14503e890
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 *
FUN_1401822e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  
  auVar1._0_12_ = ZEXT812(0);
  auVar1._12_4_ = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &UNK_146633fb0;
  *(undefined1 (*) [16])(param_1 + 2) = auVar1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  FUN_14503e890(0,param_2,0);
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[7] = param_3;
  *param_1 = &UNK_146631fc0;
  FUN_140182360(param_1 + 8,*(undefined8 *)(param_4 + 8));
  return param_1;
}

