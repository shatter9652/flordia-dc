// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140165f70  size: 374 bytes
// Name:    FUN_140165f70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450225d0, FUN_14185d560, FUN_1401667d0, FUN_140167c80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140165f70(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  uVar3 = *(uint *)(param_1 + 100);
  if ((ulonglong)uVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x68);
    lVar8 = 0;
    do {
      FUN_1450225d0(*(undefined8 *)(lVar5 + lVar8),param_2,1);
      lVar8 = lVar8 + 8;
    } while ((ulonglong)uVar3 << 3 != lVar8);
  }
  *(undefined4 *)(param_1 + 100) = 0;
  FUN_1401667d0(*(longlong *)(param_1 + 0xb8),
                *(longlong *)(param_1 + 0xb8) + (ulonglong)*(uint *)(param_1 + 0xb4) * 8);
  uVar4 = (ulonglong)*(uint *)(param_1 + 0xb4);
  if (uVar4 != 0) {
    puVar9 = *(undefined8 **)(param_1 + 0xb8);
    puVar1 = puVar9 + uVar4;
    lVar5 = 8;
    do {
      lVar8 = lVar5;
      if (uVar4 * 8 - lVar8 == 0) goto LAB_140166072;
      lVar7 = *(longlong *)((longlong)puVar9 + lVar8 + -8);
      lVar5 = lVar8 + 8;
    } while (lVar7 != *(longlong *)((longlong)puVar9 + lVar8));
    lVar8 = (longlong)puVar9 + lVar8 + -8;
    if ((undefined8 *)(lVar8 + 0x10) != puVar1) {
      do {
        lVar2 = *(longlong *)((longlong)puVar9 + lVar5);
        if (lVar7 != lVar2) {
          *(longlong *)(lVar8 + 8) = lVar2;
          lVar8 = lVar8 + 8;
        }
        lVar5 = lVar5 + 8;
        lVar7 = lVar2;
      } while (uVar4 * 8 - lVar5 != 0);
      puVar9 = *(undefined8 **)(param_1 + 0xb8);
    }
    puVar6 = (undefined8 *)(lVar8 + 8);
    if (puVar6 != puVar1) {
      func_0x000145f40570(puVar6,puVar1,(longlong)puVar9 + (uVar4 * 8 - (longlong)puVar1));
      uVar3 = *(int *)(param_1 + 0xb4) -
              (int)((ulonglong)((longlong)puVar1 - (longlong)puVar6) >> 3);
      uVar4 = (ulonglong)uVar3;
      *(uint *)(param_1 + 0xb4) = uVar3;
      if (uVar3 == 0) goto LAB_140165fdb;
      puVar9 = *(undefined8 **)(param_1 + 0xb8);
    }
LAB_140166072:
    puVar1 = puVar9 + uVar4;
    do {
      FUN_14185d560(*puVar9);
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar1);
  }
LAB_140165fdb:
  *(undefined4 *)(param_1 + 0xb4) = 0;
  uVar3 = *(uint *)(param_1 + 0x74);
  if ((ulonglong)uVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x78);
    lVar8 = 0;
    do {
      FUN_140167c80(*(undefined8 *)(lVar5 + lVar8));
      lVar8 = lVar8 + 8;
    } while ((ulonglong)uVar3 << 3 != lVar8);
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}

