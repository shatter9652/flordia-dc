// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140036930  size: 483 bytes
// Name:    FUN_140036930
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140056cb0, FUN_140037a50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140036930(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  uVar6 = *(uint *)(param_1 + 0x1b1a0);
  lVar1 = param_1 + -0x12780;
  if ((ulonglong)uVar6 == 0) {
LAB_1400369a1:
    uVar7 = 1;
  }
  else {
    lVar9 = (ulonglong)uVar6 * 0x10;
    if (*(int *)(param_1 + 0x90 + lVar9) == 2) {
      puVar10 = (undefined8 *)(param_1 + 0x90 + lVar9);
      goto LAB_1400369b8;
    }
    uVar7 = (ulonglong)(uVar6 + 1);
    if (0x100 < uVar6 + 1) {
      func_0x000144e34020(param_1);
      if ((**(uint **)(param_1 + -0x5e8) & 0xc000000) == 0) {
        cVar5 = func_0x000144e88f60(lVar1);
        if (cVar5 != '\0') {
          puVar4 = *(uint **)(param_1 + -0x5e8);
          while ((*puVar4 & 0xe000000) != 0x2000000) {
            FUN_140037a50(puVar4,0,1);
          }
          FUN_140056cb0(lVar1);
        }
      }
      goto LAB_1400369a1;
    }
  }
  uVar6 = (uint)uVar7;
  puVar10 = (undefined8 *)(param_1 + 0x90 + uVar7 * 0x10);
  *puVar10 = 2;
LAB_1400369b8:
  uVar8 = *(int *)(param_1 + 0x1b1ac) + 1;
  if (0x400 < uVar8) {
    func_0x000144e34020(param_1);
    if ((**(uint **)(param_1 + -0x5e8) & 0xc000000) == 0) {
      cVar5 = func_0x000144e88f60(lVar1);
      if (cVar5 != '\0') {
        puVar4 = *(uint **)(param_1 + -0x5e8);
        while ((*puVar4 & 0xe000000) != 0x2000000) {
          FUN_140037a50(puVar4,0,1);
        }
        FUN_140056cb0(lVar1);
      }
    }
    uVar6 = 1;
    uVar8 = 1;
    *(undefined8 *)(param_1 + 0xa0) = 2;
    puVar10 = (undefined8 *)(param_1 + 0xa0);
  }
  iVar2 = *(int *)((longlong)puVar10 + 4);
  lVar1 = param_1 + 0x111a0 + (ulonglong)uVar8 * 0x28;
  lVar9 = param_1 + 0x11178 + (ulonglong)uVar8 * 0x28;
  *(int *)((longlong)puVar10 + 4) = iVar2 + 1;
  if (iVar2 == 0) {
    puVar10[1] = lVar9;
  }
  param_2 = (undefined8 *)*param_2;
  lVar3 = param_2[5];
  *(undefined4 *)(lVar1 + -0x28) = *(undefined4 *)*param_2;
  *(undefined4 *)(lVar1 + -0x24) = *(undefined4 *)param_2[1];
  *(undefined4 *)(lVar1 + -0x20) = *(undefined4 *)param_2[2];
  *(undefined4 *)(lVar1 + -0x1c) = *(undefined4 *)param_2[3];
  *(undefined8 *)(lVar1 + -0x18) = *(undefined8 *)(*(longlong *)param_2[4] + 0x20);
  *(undefined8 *)(lVar1 + -0x10) = 0;
  *(undefined8 *)(lVar1 + -8) = 0xffffffffffffffff;
  *(longlong *)(lVar3 + 0x1b1b0) = lVar9;
  *(uint *)(param_1 + 0x1b1ac) = uVar8;
  *(uint *)(param_1 + 0x1b1a0) = uVar6;
  *(byte *)(param_1 + -0x1275c) = *(byte *)(param_1 + -0x1275c) | 2;
  return;
}

