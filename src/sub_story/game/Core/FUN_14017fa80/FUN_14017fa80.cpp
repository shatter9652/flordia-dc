// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017fa80  size: 611 bytes
// Name:    FUN_14017fa80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14017fd90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14017fa80(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong unaff_GS_OFFSET;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [32];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  FUN_14017fd90();
  uVar9 = _DAT_146159bc0;
  uVar12 = _UNK_14614f7f8;
  uVar11 = _DAT_14614f7f0;
  uVar1 = _DAT_145fc6ed8;
  uVar10 = 0;
  auVar3._0_12_ = ZEXT812(0);
  auVar3._12_4_ = 0;
  auVar6._0_12_ = ZEXT812(0);
  auVar6._12_4_ = 0;
  *param_1 = &UNK_1466d0cb0;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined1 (*) [32])(param_1 + 0x75) = ZEXT1632(auVar3);
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x3d4) = 0;
  param_1[0x7e] = 0;
  auVar7 = ZEXT416(uVar1);
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar7;
  param_1[0x82] = uVar9;
  param_1[0x83] = 0;
  param_1[0x84] = uVar11;
  param_1[0x85] = uVar12;
  *(undefined1 (*) [16])(param_1 + 0x86) = auVar6;
  *(undefined1 (*) [16])(param_1 + 0x88) = auVar7;
  param_1[0x8a] = uVar9;
  param_1[0x8b] = 0;
  param_1[0x8c] = uVar11;
  param_1[0x8d] = uVar12;
  *(undefined2 *)(param_1 + 0xad) = 0;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 (*) [16])(param_1 + 0x8e) = auVar6;
  *(undefined1 (*) [32])(param_1 + 0x97) = ZEXT1632(auVar3);
  *(undefined1 (*) [32])(param_1 + 0x95) = ZEXT1632(auVar3);
  *(undefined1 (*) [32])(param_1 + 0x91) = ZEXT1632(auVar3);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    auVar8 = ZEXT1664(auVar7);
    uVar10 = 0;
    func_0x0001455db994();
    auVar7 = auVar8._0_16_;
  }
  if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) == 0) {
    *(undefined2 *)((longlong)param_1 + 0x56a) = 0;
  }
  uVar2 = _DAT_14615a990;
  auVar4._0_12_ = ZEXT812(0);
  auVar4._12_4_ = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  *(undefined1 (*) [32])((longlong)param_1 + 0x3ac) = ZEXT1632(auVar4);
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0x3f80000000000000;
  *(undefined2 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0;
  *(undefined1 (*) [16])(param_1 + 0x7e) = ZEXT816(0) << 0x20;
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar7;
  param_1[0x82] = uVar9;
  param_1[0x83] = uVar10;
  param_1[0x84] = uVar11;
  param_1[0x85] = uVar12;
  *(undefined1 (*) [16])(param_1 + 0x86) = ZEXT816(0) << 0x20;
  *(undefined1 (*) [16])(param_1 + 0x88) = auVar7;
  param_1[0x8a] = uVar9;
  param_1[0x8b] = uVar10;
  param_1[0x8c] = uVar11;
  param_1[0x8d] = uVar12;
  *(undefined1 (*) [32])(param_1 + 0x98) = ZEXT1632(auVar4);
  auVar5 = ZEXT1632(auVar4);
  *(undefined1 (*) [32])(param_1 + 0x96) = auVar5;
  *(undefined1 (*) [32])(param_1 + 0x92) = auVar5;
  *(undefined1 (*) [32])(param_1 + 0x8e) = auVar5;
  return param_1;
}

