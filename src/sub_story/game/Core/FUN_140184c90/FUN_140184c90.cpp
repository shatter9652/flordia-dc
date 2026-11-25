// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140184c90  size: 207 bytes
// Name:    FUN_140184c90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14503e890
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140184c90(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  auVar8._0_12_ = ZEXT812(0);
  auVar8._12_4_ = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  *param_1 = &UNK_146633fb0;
  *(undefined1 (*) [16])(param_1 + 2) = auVar8;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  FUN_14503e890(0,param_2,0);
  *(undefined1 *)(param_1 + 6) = 1;
  *param_1 = &UNK_146632080;
  *(undefined4 *)(param_1 + 9) = 1;
  param_1[8] = &UNK_1466320f8;
  param_1[10] = &UNK_146634020;
  *(undefined1 (*) [32])(param_1 + 0xc) = ZEXT1232(ZEXT812(0));
  *(undefined1 (*) [32])(param_1 + 0x10) = ZEXT1232(ZEXT812(0));
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 0x10);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    uVar3 = *(undefined8 *)(param_3 + 0x20);
    uVar4 = *(undefined8 *)(param_3 + 0x28);
    uVar5 = *(undefined8 *)(param_3 + 0x38);
    uVar6 = *(undefined8 *)(param_3 + 0x40);
    uVar7 = *(undefined8 *)(param_3 + 0x48);
    param_1[0x10] = *(undefined8 *)(param_3 + 0x30);
    param_1[0x11] = uVar5;
    param_1[0x12] = uVar6;
    param_1[0x13] = uVar7;
    param_1[0xc] = uVar1;
    param_1[0xd] = uVar2;
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar4;
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  return param_1;
}

