// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401323e0  size: 107 bytes
// Name:    FUN_1401323e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f989b0, FUN_1403ac8e0, FUN_1403acb70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401323e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
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
  undefined1 auStack_910 [2256];
  undefined8 uStack_40;
  
  uStack_40 = 0x1401323ef;
  uVar13 = FUN_144f989b0();
  lVar11 = _DAT_14ab56e38;
  if ((-1 < (int)uVar13) && (_DAT_14ab56e38 != 0)) {
    uStack_40 = 0x140132409;
    cVar12 = FUN_1403ac8e0(param_1);
    if (cVar12 != '\0') {
      uStack_40 = 0x140132418;
      cVar12 = FUN_1403acb70(param_1,lVar11);
      if (cVar12 != '\0') {
        lVar3 = (ulonglong)uVar13 * 0x108;
        lVar15 = *(longlong *)(lVar3 + 0x1477af8a8);
        if (((lVar15 != 0) && (lVar14 = func_0x000144f98d80(lVar15), lVar14 != 0)) &&
           (lVar15 = func_0x000144ed0b20(*(undefined4 *)(lVar15 + 0xc)), lVar15 != 0)) {
          uVar19 = 0;
          auVar20._0_12_ = ZEXT812(0);
          auVar20._12_4_ = 0;
          uStack_a18 = 0;
          uStack_a16 = 1;
          auStack_a10 = ZEXT1632(auVar20);
          uStack_9d0 = 0;
          auStack_9c8 = ZEXT1632(auVar20);
          uStack_9a8 = 0;
          auStack_938 = ZEXT1632(auVar20);
          uStack_918 = 0;
          auStack_9f0 = auStack_a10;
          auStack_998 = auStack_9c8;
          auStack_978 = auStack_9c8;
          auStack_958 = auStack_9c8;
          FUN_144ed0150(auStack_910);
          func_0x000144ed0120(&uStack_a18,0,lVar14);
          func_0x000144ed0120(&uStack_a18,1,lVar11);
          puStack_9a0 = auStack_910;
          FUN_144fdef30(lVar3 + 0x1477af7b0,lVar14,lVar11,&uStack_a18);
          if (0 < *(int *)(lVar3 + 0x1477af8a0)) {
            lVar15 = lVar3 + 0x1477af7c0;
            do {
              iVar18 = (int)uVar19;
              FUN_1401329f0(lVar3 + 0x1477af7b0,lVar14,lVar11,lVar15 + uVar19 * 0x38,&uStack_a18);
              if (*(int *)(lVar15 + uVar19 * 0x38) == 0) {
                lVar17 = (longlong)iVar18;
                iVar18 = iVar18 + -1;
                lVar16 = (longlong)*(int *)(lVar3 + 0x1477af8a0) + -1;
                *(int *)(lVar3 + 0x1477af8a0) = (int)lVar16;
                lVar16 = lVar16 * 0x38;
                puVar1 = (undefined8 *)(lVar15 + lVar16);
                uVar4 = *puVar1;
                uVar5 = puVar1[1];
                uVar6 = puVar1[2];
                uVar7 = puVar1[3];
                puVar1 = (undefined8 *)(lVar3 + 0x1477af7d8 + lVar16);
                uVar8 = puVar1[1];
                uVar9 = puVar1[2];
                uVar10 = puVar1[3];
                puVar2 = (undefined8 *)(lVar3 + 0x1477af7d8 + lVar17 * 0x38);
                *puVar2 = *puVar1;
                puVar2[1] = uVar8;
                puVar2[2] = uVar9;
                puVar2[3] = uVar10;
                puVar1 = (undefined8 *)(lVar15 + lVar17 * 0x38);
                *puVar1 = uVar4;
                puVar1[1] = uVar5;
                puVar1[2] = uVar6;
                puVar1[3] = uVar7;
              }
              uVar19 = (ulonglong)(iVar18 + 1U);
            } while ((int)(iVar18 + 1U) < *(int *)(lVar3 + 0x1477af8a0));
          }
        }
        return;
      }
    }
  }
  return;
}

