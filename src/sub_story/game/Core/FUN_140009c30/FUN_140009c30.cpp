// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140009c30  size: 523 bytes
// Name:    FUN_140009c30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1456a4940, FUN_140037a50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140009c30(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 *puVar5;
  uint *puVar6;
  char cVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  uVar12 = *(uint *)(param_1 + 0x1b1a0);
  lVar1 = param_1 + -0x12300;
  if ((ulonglong)uVar12 == 0) {
LAB_140009ca9:
    uVar13 = 1;
  }
  else {
    lVar9 = (ulonglong)uVar12 * 0x10;
    if (*(int *)(param_1 + 0x90 + lVar9) == 2) {
      puVar10 = (undefined8 *)(param_1 + 0x90 + lVar9);
      goto LAB_140009cc2;
    }
    uVar13 = (ulonglong)(uVar12 + 1);
    if (0x100 < uVar12 + 1) {
      func_0x000144da61a0(param_1);
      if ((**(uint **)(param_1 + -0x168) & 0xc000000) == 0) {
        cVar7 = func_0x000144f25d00(lVar1);
        if (cVar7 != '\0') {
          puVar6 = *(uint **)(param_1 + -0x168);
          while ((*puVar6 & 0xe000000) != 0x2000000) {
            FUN_140037a50(puVar6,0,1);
          }
          FUN_1456a4940(lVar1);
        }
      }
      goto LAB_140009ca9;
    }
  }
  uVar12 = (uint)uVar13;
  puVar10 = (undefined8 *)(param_1 + 0x90 + uVar13 * 0x10);
  *puVar10 = 2;
LAB_140009cc2:
  uVar11 = *(int *)(param_1 + 0x1b1ac) + 1;
  if (0x400 < uVar11) {
    func_0x000144da61a0(param_1);
    if ((**(uint **)(param_1 + -0x168) & 0xc000000) == 0) {
      cVar7 = func_0x000144f25d00(lVar1);
      if (cVar7 != '\0') {
        puVar6 = *(uint **)(param_1 + -0x168);
        while ((*puVar6 & 0xe000000) != 0x2000000) {
          FUN_140037a50(puVar6,0,1);
        }
        FUN_1456a4940(lVar1);
      }
    }
    uVar12 = 1;
    uVar11 = 1;
    *(undefined8 *)(param_1 + 0xa0) = 2;
    puVar10 = (undefined8 *)(param_1 + 0xa0);
  }
  iVar4 = *(int *)((longlong)puVar10 + 4);
  lVar9 = param_1 + 0x111a0 + (ulonglong)uVar11 * 0x28;
  *(int *)((longlong)puVar10 + 4) = iVar4 + 1;
  if (iVar4 == 0) {
    puVar10[1] = param_1 + 0x11178 + (ulonglong)uVar11 * 0x28;
  }
  puVar5 = (undefined2 *)*param_2;
  uVar2 = *puVar5;
  uVar13 = CONCAT71((int7)((ulonglong)lVar1 >> 8),
                    *(undefined1 *)(*(longlong *)(puVar5 + 4) + 0x12295));
  uVar8 = func_0x000144e3a780(uVar2,uVar13 & 0xffffffff,0);
  *(undefined4 *)(lVar9 + -0x28) = uVar8;
  uVar3 = puVar5[8];
  uVar8 = func_0x000144e3a780(uVar3,uVar13 & 0xffffffff,0);
  *(undefined4 *)(lVar9 + -0x24) = uVar8;
  uVar8 = func_0x000144e3a820(uVar2,0);
  *(undefined4 *)(lVar9 + -0x20) = uVar8;
  uVar8 = func_0x000144e3a820(uVar3,0);
  *(undefined4 *)(lVar9 + -0x1c) = uVar8;
  *(undefined8 *)(lVar9 + -0x18) = *(undefined8 *)(*(longlong *)(puVar5 + 0xc) + 0x20);
  *(undefined8 *)(lVar9 + -0x10) = 0;
  *(undefined8 *)(lVar9 + -8) = 0xffffffffffffffff;
  *(uint *)(param_1 + 0x1b1ac) = uVar11;
  *(uint *)(param_1 + 0x1b1a0) = uVar12;
  *(byte *)(param_1 + -0x122dc) = *(byte *)(param_1 + -0x122dc) | 2;
  return;
}

