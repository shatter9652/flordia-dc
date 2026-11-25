// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140136670  size: 754 bytes
// Name:    FUN_140136670
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140136fc0, FUN_140136d20, FUN_140136c10, FUN_144fefc00, FUN_145440e10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 * FUN_140136670(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  uVar3 = *(undefined8 *)(param_2 + 10);
  uVar4 = *(undefined8 *)(param_2 + 0xc);
  uVar5 = *(undefined8 *)(param_2 + 0xe);
  uVar6 = *(undefined8 *)(param_2 + 0xc);
  uVar7 = *(undefined8 *)(param_2 + 0xe);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  uVar9 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar3;
  *(undefined8 *)(param_1 + 0xc) = uVar4;
  *(undefined8 *)(param_1 + 0xe) = uVar5;
  *(undefined8 *)(param_1 + 0xc) = uVar6;
  *(undefined8 *)(param_1 + 0xe) = uVar7;
  *(undefined8 *)(param_1 + 0x10) = uVar8;
  *(undefined8 *)(param_1 + 0x12) = uVar9;
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 5);
  param_1[7] = param_2[7];
  uVar3 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = uVar3;
  param_1[0x18] = param_2[0x18];
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x19) = *(undefined8 *)(param_2 + 0x19);
  param_1[0x1b] = param_2[0x1b];
  if (param_2 != param_1) {
    lVar10 = *(longlong *)(param_1 + 0x2a);
    uVar2 = param_1[0x29];
    if ((ulonglong)uVar2 != 0) {
      lVar11 = 0;
      do {
        func_0x000144fefc30(lVar10 + 0x134 + lVar11);
        FUN_145440e10(lVar10 + 0x130 + lVar11);
        FUN_145440e10(lVar10 + 300 + lVar11);
        FUN_145440e10(lVar10 + 0x128 + lVar11);
        FUN_145440e10(lVar10 + 0x124 + lVar11);
        lVar1 = lVar10 + 0x120 + lVar11;
        FUN_145440e10(lVar1);
        *(undefined4 *)(lVar1 + -0xc) = 0;
        if (*(longlong *)(lVar1 + -8) != 0) {
          func_0x000144d9c130();
        }
        *(undefined4 *)(lVar10 + 0x110 + lVar11) = 0;
        *(undefined8 *)(lVar10 + 0x118 + lVar11) = 0;
        lVar11 = lVar11 + 0x140;
      } while ((ulonglong)uVar2 * 0x140 != lVar11);
      lVar10 = *(longlong *)(param_1 + 0x2a);
    }
    param_1[0x29] = 0;
    if (lVar10 != 0) {
      func_0x000144d9c130(lVar10,param_2 + 0x28);
    }
    *(undefined8 *)(param_1 + 0x2a) = 0;
    param_1[0x28] = 0;
    FUN_140136d20(param_1 + 0x28,param_2 + 0x28);
    if (param_2 != param_1) {
      lVar10 = *(longlong *)(param_1 + 0x2e);
      if ((ulonglong)(uint)param_1[0x2d] != 0) {
        lVar11 = (ulonglong)(uint)param_1[0x2d] << 5;
        lVar10 = lVar10 + 0x10;
        do {
          FUN_140136fc0(lVar10);
          lVar10 = lVar10 + 0x20;
          lVar11 = lVar11 + -0x20;
        } while (lVar11 != 0);
        lVar10 = *(longlong *)(param_1 + 0x2e);
      }
      param_1[0x2d] = 0;
      if (lVar10 != 0) {
        func_0x000144d9c130(lVar10,param_2 + 0x2c);
      }
      *(undefined8 *)(param_1 + 0x2e) = 0;
      param_1[0x2c] = 0;
      FUN_140136c10(param_1 + 0x2c,param_2 + 0x2c);
    }
  }
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
  param_1[0x24] = param_2[0x24];
  *(undefined8 *)((longlong)param_1 + 0x96) = *(undefined8 *)((longlong)param_2 + 0x96);
  *(undefined2 *)((longlong)param_1 + 0x9e) = *(undefined2 *)((longlong)param_2 + 0x9e);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  *(undefined8 *)(param_1 + 0x34) = uVar3;
  FUN_144fefc00(param_1 + 0x36,param_2 + 0x36);
  FUN_144fefc00(param_1 + 0x37,param_2 + 0x37);
  return param_1;
}

