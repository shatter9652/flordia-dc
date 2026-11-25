// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140136980  size: 643 bytes
// Name:    FUN_140136980
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400e8f70, FUN_142576980, FUN_144e4f4f0, FUN_144d9df60, FUN_140137310, FUN_1400e8c30, FUN_144fd5f70, FUN_1414b2b20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140136980(longlong param_1,uint param_2,undefined2 param_3,undefined4 param_4,
                  ushort param_5)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uStack_50;
  undefined2 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uStack_44 = (uint)param_5;
    uStack_50 = param_2;
    uStack_4c = param_3;
    uStack_48 = param_4;
    cVar3 = FUN_140137310(param_1);
    if (cVar3 != '\0') {
      return;
    }
  }
  FUN_1400e8f70(&uStack_50,0);
  lVar5 = FUN_144e4f4f0(param_1,param_2);
  if ((lVar5 == 0) || (func_0x0001425768c0(param_1,lVar5), param_5 == 0)) {
    FUN_1400e8c30(&uStack_50);
    uVar10 = param_2 & 0xfffffff;
    uVar11 = 0xbd;
    if (uVar10 != 0xfffffff) {
      uVar11 = (ulonglong)(uVar10 % 0x1f7);
    }
    FUN_1400e8f70(&uStack_50,4);
    lVar5 = uVar11 * 0xa0 + param_1;
    lVar7 = (ulonglong)*(uint *)(param_1 + 0x14) * 0x10;
    puVar6 = *(uint **)(lVar7 + 0x28 + lVar5);
    uVar1 = *(uint *)(lVar7 + 0x24 + lVar5);
    uVar11 = (ulonglong)uVar1;
    if (uVar11 != 0) {
      lVar8 = uVar11 * 0x1c;
      puVar9 = puVar6;
      do {
        bVar2 = uVar10 == (*puVar9 & 0xfffffff) && uVar10 != 0xfffffff;
        if ((*puVar9 & 0xfffffff) == 0xfffffff) {
          bVar2 = uVar10 == 0xfffffff;
        }
        if (bVar2) {
          bVar2 = false;
          goto LAB_140136b00;
        }
        puVar9 = puVar9 + 7;
        lVar8 = lVar8 + -0x1c;
      } while (lVar8 != 0);
    }
    puVar9 = (uint *)(lVar7 + 0x20 + lVar5);
    if (uVar1 == *puVar9) {
      uVar10 = 1;
      if (1 < uVar1) {
        uVar10 = uVar1 >> 1;
      }
      puVar6 = (uint *)func_0x000144d9c140(4,(ulonglong)(uVar10 + uVar1) * 0x1c);
      if ((ulonglong)puVar9[1] != 0) {
        func_0x000145f40560(puVar6,*(undefined8 *)(puVar9 + 2),(ulonglong)puVar9[1] * 0x1c);
      }
      if (*(longlong *)(puVar9 + 2) != 0) {
        func_0x000144d9c130();
      }
      *(uint **)(puVar9 + 2) = puVar6;
      *puVar9 = uVar10 + uVar1;
      uVar11 = (ulonglong)puVar9[1];
    }
    puVar9[1] = (int)uVar11 + 1;
    puVar9 = puVar6 + uVar11 * 7;
    bVar2 = true;
    if (puVar6 != (uint *)0x0) {
      FUN_144fd5f70(puVar9,param_2);
    }
LAB_140136b00:
    FUN_1414b2b20(puVar9,param_3);
    if (param_5 != 0) {
      func_0x000142576970(puVar9,param_5);
    }
    *(byte *)(puVar9 + 6) = (byte)puVar9[6] | 4;
    uVar4 = func_0x000144db6ef0(param_4);
    func_0x0001400b87a0(puVar9,uVar4);
    if (bVar2) {
      FUN_142576980(param_1,puVar9);
    }
    FUN_144d9df60(param_1 + 0x13a80,puVar9);
  }
  else {
    func_0x000142576970(lVar5,param_5);
  }
  FUN_1400e8c30(&uStack_50);
  return;
}

