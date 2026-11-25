// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140013e80  size: 971 bytes
// Name:    FUN_140013e80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142b7e2f0, FUN_1455b4640, FUN_1454fe360
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140013e80(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte bVar6;
  undefined8 *puVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  byte bVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 in_ZMM7 [64];
  undefined1 auVar21 [64];
  undefined4 uStack_94;
  float fStack_90;
  undefined2 uStack_8c;
  byte bStack_8a;
  longlong lStack_88;
  undefined4 uStack_7c;
  longlong lStack_78;
  longlong lStack_70;
  undefined1 auStack_58 [16];
  
  auStack_58 = in_ZMM7._0_16_;
  uVar5 = *(uint *)(param_2 + 4);
  lStack_88 = param_2;
  if ((ulonglong)uVar5 < 0x7b) {
    uVar3 = (ulonglong)(uVar5 * 0x2f0);
    auVar18._0_12_ = ZEXT812(0);
    auVar18._12_4_ = 0;
    do {
      *(undefined2 *)(param_2 + 8 + uVar3) = 0;
      *(undefined1 *)(param_2 + 10 + uVar3) = 0;
      *(undefined1 (*) [16])(param_2 + 0xc + uVar3) = auVar18;
      *(undefined8 *)(param_2 + 0x20 + uVar3) = 6;
      uVar3 = uVar3 + 0x2f0;
    } while (uVar3 != 0x16950);
  }
  else if (uVar5 != 0x7b) {
    lVar10 = param_2 + 0x16958;
    lVar9 = param_2 + 0x169d0;
    do {
      if ((ulonglong)*(uint *)(lVar10 + 0x1c) != 0) {
        lVar12 = (ulonglong)*(uint *)(lVar10 + 0x1c) * 0x78;
        lVar15 = lVar9;
        do {
          *(undefined4 *)(lVar15 + -0xc) = 0;
          if ((lVar15 != *(longlong *)(lVar15 + -8)) && (*(longlong *)(lVar15 + -8) != 0)) {
            func_0x000144d9c130();
          }
          *(undefined4 *)(lVar15 + -0x10) = 3;
          *(undefined8 *)(lVar15 + -8) = 0;
          lVar15 = lVar15 + 0x78;
          lVar12 = lVar12 + -0x78;
        } while (lVar12 != 0);
      }
      *(undefined8 *)(lVar10 + 0x18) = 6;
      lVar10 = lVar10 + 0x2f0;
      lVar9 = lVar9 + 0x2f0;
    } while (lVar10 != param_2 + 8 + (ulonglong)uVar5 * 0x2f0);
  }
  *(undefined4 *)(lStack_88 + 4) = 0x7b;
  lStack_78 = *(longlong *)(param_1 + 0x898);
  if (*(int *)(param_1 + 0x14c) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x150);
    lVar15 = *(longlong *)(param_1 + 0x8a0);
    lVar10 = lStack_88 + 8;
    lVar12 = lVar9;
    lVar14 = lVar9;
    do {
      uVar5 = (uint)((ulonglong)(lVar12 - lVar9) >> 5);
      if (0x7a < uVar5) break;
      uVar3 = (ulonglong)(uVar5 & 0x7f);
      lVar9 = uVar3 * 0x2f0 + lVar10;
      FUN_1455b4640(lVar9);
      uVar2 = func_0x0001455c1940(*(undefined4 *)(param_1 + 0x260));
      func_0x0001455b46b0(lVar9,*(undefined4 *)(lVar15 + 8 + uVar3 * 4),uVar2);
      lVar9 = *(longlong *)(param_1 + 0x150);
      lVar14 = lVar14 + 0x20;
      lVar12 = lVar12 + 0x20;
    } while (lVar14 != (ulonglong)*(uint *)(param_1 + 0x14c) * 0x20 + lVar9);
  }
  if ((ulonglong)*(uint *)(param_1 + 0x594) != 0) {
    lVar10 = (ulonglong)*(uint *)(param_1 + 0x594) * 0x78;
    lVar9 = *(longlong *)(param_1 + 0x598) + 0x58;
    do {
      *(undefined4 *)(lVar9 + -0xc) = 0;
      if ((lVar9 != *(longlong *)(lVar9 + -8)) && (*(longlong *)(lVar9 + -8) != 0)) {
        func_0x000144d9c130();
      }
      *(undefined4 *)(lVar9 + -0x10) = 3;
      *(undefined8 *)(lVar9 + -8) = 0;
      lVar9 = lVar9 + 0x78;
      lVar10 = lVar10 + -0x78;
    } while (lVar10 != 0);
  }
  *(undefined4 *)(param_1 + 0x594) = 0;
  if (*(int *)(param_1 + 0x554) != 0) {
    lStack_70 = param_1 + 0x590;
    uVar3 = *(ulonglong *)(param_1 + 8);
    lStack_78 = lStack_78 + 8;
    lStack_88 = lStack_88 + 8;
    puVar4 = *(undefined8 **)(param_1 + 0x558);
    puVar11 = puVar4;
    do {
      uStack_8c = 0;
      bVar16 = bStack_8a & 0xfc;
      if (*(int *)(param_1 + 0x14c) == 0) {
        fVar20 = 0.0;
        uStack_94 = 0;
      }
      else {
        puVar7 = *(undefined8 **)(param_1 + 0x150);
        auVar21 = ZEXT1264(ZEXT812(0));
        fVar20 = 0.0;
        uStack_94 = 0;
        uVar13 = (ulonglong)((longlong)puVar11 - (longlong)puVar4) >> 3 & 0xffffffff;
        bVar8 = 0;
        puVar4 = puVar7;
        puVar17 = puVar7;
        do {
          uVar5 = (uint)((ulonglong)((longlong)puVar4 - (longlong)puVar7) >> 5);
          if (0x7a < uVar5) break;
          uVar5 = uVar5 & 0x7f;
          auVar19._0_12_ = ZEXT812(0);
          auVar19._12_4_ = 0;
          lVar10 = *(longlong *)(lStack_78 + 8 + (ulonglong)(uVar5 << 6));
          puVar1 = (uint *)(lVar10 + uVar13 * 8);
          if ((char)puVar1[1] == '\0') {
            auVar19 = ZEXT416(*puVar1);
          }
          bVar6 = *(byte *)(lVar10 + 6 + uVar13 * 8) & 2;
          if (auVar19._0_4_ <= auVar21._0_4_) {
            if (bVar6 != 0 && bVar8 == 0) goto LAB_1400140c9;
          }
          else if ((bVar8 != bVar6 >> 1 & (bVar6 == 0 | bVar8)) == 0) {
LAB_1400140c9:
            auVar21 = ZEXT1664(auVar19);
            bVar16 = bVar16 & 0xfd | bVar6;
            uStack_94 = *(undefined4 *)*puVar17;
            bVar8 = bVar6 >> 1;
          }
          fVar20 = fVar20 + auVar19._0_4_;
          FUN_1454fe360((ulonglong)uVar5 * 0x2f0 + lStack_88,*puVar11,puVar1,*puVar17,puVar17[1],
                        *(char *)((uVar3 & 0xfffffffffffffff0) + 0x30) == '\x03');
          puVar7 = *(undefined8 **)(param_1 + 0x150);
          puVar17 = puVar17 + 4;
          puVar4 = puVar4 + 4;
        } while (puVar17 != puVar7 + (ulonglong)*(uint *)(param_1 + 0x14c) * 4);
      }
      uStack_7c = uStack_94;
      fStack_90 = fVar20;
      bStack_8a = bVar16;
      FUN_142b7e2f0(lStack_70,*puVar11,&fStack_90,&uStack_7c);
      puVar4 = *(undefined8 **)(param_1 + 0x558);
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar4 + *(uint *)(param_1 + 0x554));
  }
  return;
}

