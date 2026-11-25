// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400097f0  size: 508 bytes
// Name:    FUN_1400097f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140037a50, FUN_140056cb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400097f0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  
  uVar5 = *(uint *)(param_1 + 0x1b1a0);
  lVar1 = param_1 + -0x12780;
  if ((ulonglong)uVar5 == 0) {
LAB_140009861:
    uVar6 = 1;
  }
  else {
    lVar8 = (ulonglong)uVar5 * 0x10;
    if (*(int *)(param_1 + 0x90 + lVar8) == 1) {
      puVar9 = (undefined8 *)(param_1 + 0x90 + lVar8);
      goto LAB_140009878;
    }
    uVar6 = (ulonglong)(uVar5 + 1);
    if (0x100 < uVar5 + 1) {
      func_0x000144e34020(param_1);
      if ((**(uint **)(param_1 + -0x5e8) & 0xc000000) == 0) {
        cVar4 = func_0x000144e88f60(lVar1);
        if (cVar4 != '\0') {
          puVar3 = *(uint **)(param_1 + -0x5e8);
          while ((*puVar3 & 0xe000000) != 0x2000000) {
            FUN_140037a50(puVar3,0,1);
          }
          FUN_140056cb0(lVar1);
        }
      }
      goto LAB_140009861;
    }
  }
  uVar5 = (uint)uVar6;
  puVar9 = (undefined8 *)(param_1 + 0x90 + uVar6 * 0x10);
  *puVar9 = 1;
LAB_140009878:
  uVar7 = *(int *)(param_1 + 0x1b1a8) + 1;
  if (0x400 < uVar7) {
    func_0x000144e34020(param_1);
    if ((**(uint **)(param_1 + -0x5e8) & 0xc000000) == 0) {
      cVar4 = func_0x000144e88f60(lVar1);
      if (cVar4 != '\0') {
        puVar3 = *(uint **)(param_1 + -0x5e8);
        while ((*puVar3 & 0xe000000) != 0x2000000) {
          FUN_140037a50(puVar3,0,1);
        }
        FUN_140056cb0(lVar1);
      }
    }
    uVar5 = 1;
    uVar7 = 1;
    *(undefined8 *)(param_1 + 0xa0) = 1;
    puVar9 = (undefined8 *)(param_1 + 0xa0);
  }
  iVar2 = *(int *)((longlong)puVar9 + 4);
  lVar1 = param_1 + 0x11a0 + (ulonglong)uVar7 * 0x40;
  *(int *)((longlong)puVar9 + 4) = iVar2 + 1;
  if (iVar2 == 0) {
    puVar9[1] = param_1 + 0x1160 + (ulonglong)uVar7 * 0x40;
  }
  param_2 = (undefined8 *)*param_2;
  auVar10._0_12_ = ZEXT812(0);
  auVar10._12_4_ = 0;
  *(undefined4 *)(lVar1 + -0x40) = *(undefined4 *)*param_2;
  *(undefined4 *)(lVar1 + -0x3c) = *(undefined4 *)param_2[1];
  *(undefined4 *)(lVar1 + -0x38) = *(undefined4 *)param_2[2];
  *(undefined4 *)(lVar1 + -0x34) = *(undefined4 *)param_2[3];
  *(undefined4 *)(lVar1 + -0x30) = *(undefined4 *)param_2[4];
  *(undefined4 *)(lVar1 + -0x2c) = *(undefined4 *)param_2[5];
  *(undefined8 *)(lVar1 + -0x28) = *(undefined8 *)(param_2[6] + 0x20);
  *(undefined4 *)(lVar1 + -0x20) = 0xffffffff;
  *(undefined1 (*) [16])(lVar1 + -0x1c) = auVar10;
  *(undefined4 *)(lVar1 + -0xc) = 0;
  *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_2 + 7);
  *(uint *)(param_1 + 0x1b1a8) = uVar7;
  *(uint *)(param_1 + 0x1b1a0) = uVar5;
  *(byte *)(param_1 + -0x1275c) = *(byte *)(param_1 + -0x1275c) | 2;
  return;
}

