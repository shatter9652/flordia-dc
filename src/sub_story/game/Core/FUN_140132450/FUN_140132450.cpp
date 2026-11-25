// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140132450  size: 383 bytes
// Name:    FUN_140132450
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fdef30, FUN_1401329f0, FUN_144ed0150
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140132450(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined2 uStack_a18;
  undefined1 uStack_a16;
  undefined1 auStack_a10 [32];
  undefined1 auStack_9f0 [32];
  undefined2 uStack_9d0;
  undefined1 auStack_9c8 [32];
  undefined4 uStack_9a8;
  undefined1 *puStack_9a0;
  undefined1 auStack_998 [32];
  undefined1 auStack_978 [32];
  undefined1 auStack_958 [32];
  undefined1 auStack_938 [32];
  undefined2 uStack_918;
  undefined1 auStack_910 [2264];
  
  lVar11 = *(longlong *)(param_1 + 0xf8);
  if (((lVar11 != 0) && (lVar10 = func_0x000144f98d80(lVar11), lVar10 != 0)) &&
     (lVar11 = func_0x000144ed0b20(*(undefined4 *)(lVar11 + 0xc)), lVar11 != 0)) {
    uVar15 = 0;
    auVar16._0_12_ = ZEXT812(0);
    auVar16._12_4_ = 0;
    uStack_a18 = 0;
    uStack_a16 = 1;
    auStack_a10 = ZEXT1632(auVar16);
    uStack_9d0 = 0;
    auStack_9c8 = ZEXT1632(auVar16);
    uStack_9a8 = 0;
    auStack_938 = ZEXT1632(auVar16);
    uStack_918 = 0;
    auStack_9f0 = auStack_a10;
    auStack_998 = auStack_9c8;
    auStack_978 = auStack_9c8;
    auStack_958 = auStack_9c8;
    FUN_144ed0150(auStack_910);
    func_0x000144ed0120(&uStack_a18,0,lVar10);
    func_0x000144ed0120(&uStack_a18,1,param_2);
    puStack_9a0 = auStack_910;
    FUN_144fdef30(param_1,lVar10,param_2,&uStack_a18);
    if (0 < *(int *)(param_1 + 0xf0)) {
      lVar11 = param_1 + 0x10;
      do {
        iVar14 = (int)uVar15;
        FUN_1401329f0(param_1,lVar10,param_2,lVar11 + uVar15 * 0x38,&uStack_a18);
        if (*(int *)(lVar11 + uVar15 * 0x38) == 0) {
          lVar13 = (longlong)iVar14;
          iVar14 = iVar14 + -1;
          lVar12 = (longlong)*(int *)(param_1 + 0xf0) + -1;
          *(int *)(param_1 + 0xf0) = (int)lVar12;
          lVar12 = lVar12 * 0x38;
          puVar1 = (undefined8 *)(lVar11 + lVar12);
          uVar3 = *puVar1;
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          puVar1 = (undefined8 *)(param_1 + 0x28 + lVar12);
          uVar7 = puVar1[1];
          uVar8 = puVar1[2];
          uVar9 = puVar1[3];
          puVar2 = (undefined8 *)(param_1 + 0x28 + lVar13 * 0x38);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar2[2] = uVar8;
          puVar2[3] = uVar9;
          puVar1 = (undefined8 *)(lVar11 + lVar13 * 0x38);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          puVar1[2] = uVar5;
          puVar1[3] = uVar6;
        }
        uVar15 = (ulonglong)(iVar14 + 1U);
      } while ((int)(iVar14 + 1U) < *(int *)(param_1 + 0xf0));
    }
  }
  return;
}

