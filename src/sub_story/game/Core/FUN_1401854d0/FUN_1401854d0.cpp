// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401854d0  size: 151 bytes
// Name:    FUN_1401854d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140185fc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 *
FUN_1401854d0(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  
  auVar3._0_12_ = ZEXT812(0);
  auVar3._12_4_ = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &UNK_14674aa20;
  param_1[2] = 0;
  *(undefined1 (*) [16])(param_1 + 3) = auVar3;
  *param_1 = &UNK_1466314b0;
  param_1[5] = param_2;
  func_0x00014503e5b0(param_3);
  param_1[6] = param_3;
  param_1[7] = 0x100000001;
  *(undefined4 *)(param_1 + 8) = param_4;
  if (*(int *)(param_3 + 0x10) == 0) {
    uVar2 = 1;
    uVar1 = 0x100;
  }
  else {
    uVar1 = FUN_140185fc0(param_3);
    uVar2 = uVar1;
  }
  *(undefined4 *)(param_1 + 7) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar2;
  return param_1;
}

