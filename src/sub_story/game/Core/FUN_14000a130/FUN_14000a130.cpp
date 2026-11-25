// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000a130  size: 568 bytes
// Name:    FUN_14000a130
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1456a4940, FUN_140037a50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14000a130(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  uVar6 = *(uint *)(param_1 + 0x1b1a0);
  lVar1 = param_1 + -0x12300;
  if ((ulonglong)uVar6 == 0) {
LAB_14000a1a1:
    uVar7 = 1;
  }
  else {
    lVar9 = (ulonglong)uVar6 * 0x10;
    if (*(int *)(param_1 + 0x90 + lVar9) == 1) {
      puVar10 = (undefined8 *)(param_1 + 0x90 + lVar9);
      goto LAB_14000a1b8;
    }
    uVar7 = (ulonglong)(uVar6 + 1);
    if (0x100 < uVar6 + 1) {
      func_0x000144da61a0(param_1);
      if ((**(uint **)(param_1 + -0x168) & 0xc000000) == 0) {
        cVar5 = func_0x000144f25d00(lVar1);
        if (cVar5 != '\0') {
          puVar4 = *(uint **)(param_1 + -0x168);
          while ((*puVar4 & 0xe000000) != 0x2000000) {
            FUN_140037a50(puVar4,0,1);
          }
          FUN_1456a4940(lVar1);
        }
      }
      goto LAB_14000a1a1;
    }
  }
  uVar6 = (uint)uVar7;
  puVar10 = (undefined8 *)(param_1 + 0x90 + uVar7 * 0x10);
  *puVar10 = 1;
LAB_14000a1b8:
  uVar8 = *(int *)(param_1 + 0x1b1a8) + 1;
  if (0x400 < uVar8) {
    func_0x000144da61a0(param_1);
    if ((**(uint **)(param_1 + -0x168) & 0xc000000) == 0) {
      cVar5 = func_0x000144f25d00(lVar1);
      if (cVar5 != '\0') {
        puVar4 = *(uint **)(param_1 + -0x168);
        while ((*puVar4 & 0xe000000) != 0x2000000) {
          FUN_140037a50(puVar4,0,1);
        }
        FUN_1456a4940(lVar1);
      }
    }
    uVar6 = 1;
    uVar8 = 1;
    *(undefined8 *)(param_1 + 0xa0) = 1;
    puVar10 = (undefined8 *)(param_1 + 0xa0);
  }
  iVar2 = *(int *)((longlong)puVar10 + 4);
  lVar1 = param_1 + 0x11a0 + (ulonglong)uVar8 * 0x40;
  *(int *)((longlong)puVar10 + 4) = iVar2 + 1;
  if (iVar2 == 0) {
    puVar10[1] = param_1 + 0x1160 + (ulonglong)uVar8 * 0x40;
  }
  param_2 = (longlong *)*param_2;
  uVar3 = *(uint *)(param_2 + 1);
  uVar7 = (ulonglong)uVar3;
  *(undefined4 *)(lVar1 + -0x40) = *(undefined4 *)(*param_2 + uVar7 * 4);
  *(undefined4 *)(lVar1 + -0x3c) = *(undefined4 *)(param_2[2] + uVar7 * 4);
  *(undefined4 *)(lVar1 + -0x38) = *(undefined4 *)(param_2[3] + uVar7 * 4);
  *(undefined4 *)(lVar1 + -0x34) = *(undefined4 *)(param_2[4] + uVar7 * 4);
  *(undefined4 *)(lVar1 + -0x30) = *(undefined4 *)(param_2[5] + uVar7 * 4);
  *(undefined4 *)(lVar1 + -0x2c) = *(undefined4 *)(param_2[6] + uVar7 * 4);
  *(undefined8 *)(lVar1 + -0x28) = *(undefined8 *)(param_2[7] + 0x20);
  *(uint *)(lVar1 + -0x20) = *(ushort *)(param_2 + 8) & 0xf;
  *(uint *)(lVar1 + -0x1c) = *(ushort *)((longlong)param_2 + 0x42) & 0xf;
  *(uint *)(lVar1 + -0x18) = (uint)(*(ushort *)(param_2 + 8) >> 5);
  *(uint *)(lVar1 + -0x14) = (uint)(*(ushort *)((longlong)param_2 + 0x42) >> 5);
  *(uint *)(lVar1 + -0x10) = uVar3;
  *(uint *)(lVar1 + -0xc) = (*(uint *)(param_2 + 9) < *(uint *)((longlong)param_2 + 0x4c)) + 1;
  *(int *)(lVar1 + -8) = (int)param_2[10];
  *(uint *)(param_1 + 0x1b1a8) = uVar8;
  *(uint *)(param_1 + 0x1b1a0) = uVar6;
  *(byte *)(param_1 + -0x122dc) = *(byte *)(param_1 + -0x122dc) | 2;
  return;
}

