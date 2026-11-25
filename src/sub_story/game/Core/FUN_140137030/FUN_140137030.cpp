// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140137030  size: 515 bytes
// Name:    FUN_140137030
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140136d20, FUN_140136c10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_140137030(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong unaff_GS_OFFSET;
  undefined1 auVar10 [16];
  undefined1 auVar11 [64];
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar1 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar9 = *(longlong *)(lVar1 + 0x1448);
  if (lVar9 == 0) {
    param_1[2] = 0;
  }
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar9 = *(longlong *)(lVar1 + 0x1448);
  }
  if (lVar9 == 0) {
    param_1[4] = 0;
  }
  auVar10._0_12_ = ZEXT812(0);
  auVar10._12_4_ = 0;
  param_1[4] = param_2[4];
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 5);
  param_1[7] = param_2[7];
  uVar2 = *(undefined8 *)(param_2 + 10);
  uVar3 = *(undefined8 *)(param_2 + 0xc);
  uVar4 = *(undefined8 *)(param_2 + 0xe);
  uVar5 = *(undefined8 *)(param_2 + 0xc);
  uVar6 = *(undefined8 *)(param_2 + 0xe);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar8 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar2;
  *(undefined8 *)(param_1 + 0xc) = uVar3;
  *(undefined8 *)(param_1 + 0xe) = uVar4;
  *(undefined8 *)(param_1 + 0xc) = uVar5;
  *(undefined8 *)(param_1 + 0xe) = uVar6;
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  *(undefined8 *)(param_1 + 0x12) = uVar8;
  uVar2 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = uVar2;
  param_1[0x18] = param_2[0x18];
  *(undefined8 *)(param_1 + 0x19) = *(undefined8 *)(param_2 + 0x19);
  param_1[0x1b] = param_2[0x1b];
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  param_1[0x24] = param_2[0x24];
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
  *(undefined1 *)((longlong)param_1 + 0x95) = 0;
  *(undefined8 *)((longlong)param_1 + 0x96) = *(undefined8 *)((longlong)param_2 + 0x96);
  *(undefined2 *)((longlong)param_1 + 0x9e) = *(undefined2 *)((longlong)param_2 + 0x9e);
  *(undefined1 (*) [16])(param_1 + 0x28) = auVar10;
  auVar11 = ZEXT1664(auVar10);
  FUN_140136d20(param_1 + 0x28,param_2 + 0x28);
  *(undefined1 (*) [16])(param_1 + 0x2c) = auVar11._0_16_;
  FUN_140136c10(param_1 + 0x2c,param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x34) = uVar2;
  func_0x0001451fb610(param_1 + 0x36,param_2 + 0x36);
  func_0x0001451fb610(param_1 + 0x37,param_2 + 0x37);
  *(undefined1 (*) [16])(param_2 + 0x32) = auVar11._0_16_;
  return param_1;
}

