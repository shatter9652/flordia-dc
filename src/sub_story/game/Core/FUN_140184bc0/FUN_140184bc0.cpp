// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140184bc0  size: 198 bytes
// Name:    FUN_140184bc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14503e890
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140184bc0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  auVar6._0_12_ = ZEXT812(0);
  auVar6._12_4_ = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &UNK_146633fb0;
  *(undefined1 (*) [16])(param_1 + 2) = auVar6;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  FUN_14503e890(0,param_2,0);
  *(undefined1 *)(param_1 + 6) = 1;
  *param_1 = &UNK_146632080;
  *(undefined4 *)(param_1 + 9) = 1;
  param_1[8] = &UNK_1466320f8;
  param_1[10] = &UNK_146634000;
  *(undefined1 (*) [32])(param_1 + 0xc) = ZEXT1232(ZEXT812(0));
  *(undefined1 (*) [32])(param_1 + 0xe) = ZEXT1232(ZEXT812(0));
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    uVar3 = *(undefined8 *)(param_3 + 0x18);
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    uVar5 = *(undefined8 *)(param_3 + 0x28);
    uVar1 = *(undefined8 *)(param_3 + 0x38);
    param_1[0x10] = *(undefined8 *)(param_3 + 0x30);
    param_1[0x11] = uVar1;
    param_1[0xc] = uVar2;
    param_1[0xd] = uVar3;
    param_1[0xe] = uVar4;
    param_1[0xf] = uVar5;
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  return param_1;
}

