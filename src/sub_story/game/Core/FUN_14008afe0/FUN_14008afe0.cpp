// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008afe0  size: 930 bytes
// Name:    FUN_14008afe0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1420706f0, FUN_145647140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14008afe0(uint *param_1,uint param_2,undefined1 (*param_3) [16])

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  ushort *puVar11;
  longlong lVar12;
  ushort *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 auStack_d0 [4];
  undefined8 uStack_b0;
  undefined4 auStack_a8 [2];
  undefined1 *puStack_a0;
  uint uStack_98;
  undefined1 (*pauStack_90) [16];
  uint *puStack_88;
  longlong lStack_80;
  
  puVar8 = auStack_a8;
  lVar12 = *(longlong *)(param_1 + 10);
  uVar2 = *(uint *)(lVar12 + 0x10274);
  uVar9 = param_2;
  if (*(int *)(lVar12 + 0x18) != 10) {
    uVar9 = uVar2;
    if (0 < (int)uVar2) {
      lVar3 = *(longlong *)(param_1 + 2);
      uVar9 = uVar2 - 1;
      uVar15 = 0;
      do {
        uVar1 = *(ushort *)(lVar3 + uVar15 * 2);
        if ((*(byte *)(lVar12 + 0x10288 + (ulonglong)((uint)uVar1 * 0x50)) & 2) == 0) {
          uVar14 = (ulonglong)uVar9;
          uVar9 = uVar9 - 1;
          *(undefined2 *)(lVar3 + uVar15 * 2) = *(undefined2 *)(lVar3 + uVar14 * 2);
          *(ushort *)(lVar3 + uVar14 * 2) = uVar1;
        }
        else {
          uVar15 = (ulonglong)((int)uVar15 + 1);
        }
      } while ((int)uVar15 <= (int)uVar9);
      uVar9 = uVar9 + 1;
    }
    if ((int)uVar2 <= (int)uVar9) {
      uVar9 = uVar2;
    }
  }
  fVar22 = _DAT_14615b74c;
  if ((uVar9 < uVar2) && (0 < (int)uVar9)) {
    auVar16._0_12_ = ZEXT812(0);
    auVar16._12_4_ = 0;
    lVar7 = *(longlong *)(param_1 + 2);
    lVar3 = lVar12 + 0x1c0;
    uVar15 = (ulonglong)uVar9;
    do {
      uVar14 = (ulonglong)((uint)*(ushort *)(lVar7 + uVar15 * 2) * 0x50);
      if ((*(byte *)(lVar12 + 0x1028c + uVar14) & 1) != 0) {
        puVar13 = (ushort *)(uVar14 + lVar12 + 0x10280);
        uVar14 = 0;
        do {
          uVar10 = (ulonglong)((uint)*(ushort *)(lVar7 + uVar14 * 2) * 0x50);
          if ((*(byte *)(lVar12 + 0x1028c + uVar10) & 1) == 0) {
            puVar11 = (ushort *)(uVar10 + lVar12 + 0x10280);
            auVar17 = vsubps_avx(*(undefined1 (*) [16])
                                  ((ulonglong)((*puVar13 & 0x3fff) << 4) + lVar3),
                                 *(undefined1 (*) [16])
                                  (lVar3 + (ulonglong)((puVar11[2] & 0x3fff) << 4)));
            auVar18._0_4_ = auVar17._0_4_ * auVar17._0_4_;
            auVar18._4_4_ = auVar17._4_4_ * auVar17._4_4_;
            auVar18._8_4_ = auVar17._8_4_ * auVar17._8_4_;
            auVar18._12_4_ = auVar17._12_4_ * auVar17._12_4_;
            auVar17 = vblendps_avx(auVar18,auVar16,8);
            auVar17 = vhaddps_avx(auVar17,auVar17);
            auVar17 = vhaddps_avx(auVar17,auVar17);
            if (fVar22 < auVar17._0_4_) {
              auVar17 = vsubps_avx(*(undefined1 (*) [16])
                                    ((ulonglong)((puVar13[2] & 0x3fff) << 4) + lVar3),
                                   *(undefined1 (*) [16])
                                    (lVar3 + (ulonglong)((*puVar11 & 0x3fff) << 4)));
              auVar19._0_4_ = auVar17._0_4_ * auVar17._0_4_;
              auVar19._4_4_ = auVar17._4_4_ * auVar17._4_4_;
              auVar19._8_4_ = auVar17._8_4_ * auVar17._8_4_;
              auVar19._12_4_ = auVar17._12_4_ * auVar17._12_4_;
              auVar17 = vblendps_avx(auVar19,auVar16,8);
              auVar17 = vhaddps_avx(auVar17,auVar17);
              auVar17 = vhaddps_avx(auVar17,auVar17);
              if (fVar22 < auVar17._0_4_) goto LAB_14008b180;
            }
            *(byte *)(puVar13 + 4) = (byte)puVar13[4] | 2;
          }
LAB_14008b180:
          uVar14 = uVar14 + 1;
        } while (uVar9 != uVar14);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar2);
  }
  if ((int)param_2 < (int)uVar2) {
    lVar3 = *(longlong *)(param_1 + 2);
    uVar6 = uVar2 - 1;
    do {
      uVar1 = *(ushort *)(lVar3 + (ulonglong)param_2 * 2);
      if ((*(byte *)(lVar12 + 0x10288 + (ulonglong)((uint)uVar1 * 0x50)) & 1) == 0) {
        uVar15 = (ulonglong)uVar6;
        uVar6 = uVar6 - 1;
        *(undefined2 *)(lVar3 + (ulonglong)param_2 * 2) = *(undefined2 *)(lVar3 + uVar15 * 2);
        *(ushort *)(lVar3 + uVar15 * 2) = uVar1;
      }
      else {
        param_2 = param_2 + 1;
      }
    } while ((int)param_2 <= (int)uVar6);
  }
  pauStack_90 = param_3;
  puStack_88 = param_1;
  lStack_80 = lVar12;
  if (1 < (int)uVar9) {
    uStack_b0 = 0x14008b206;
    lVar7 = FUN_145647140();
    lVar7 = -lVar7;
    puStack_a0 = (undefined1 *)((longlong)auStack_a8 + lVar7);
    uVar6 = param_1[1];
    lVar3 = *(longlong *)(param_1 + 2);
    if ((ulonglong)uVar6 != 0) {
      lVar4 = *(longlong *)(param_1 + 10);
      auVar17._0_12_ = ZEXT812(0);
      auVar17._12_4_ = 0;
      auVar20._0_12_ = ZEXT812(0);
      auVar20._12_4_ = 0;
      auVar16 = *pauStack_90;
      uVar15 = 0;
      do {
        uVar1 = *(ushort *)(lVar3 + uVar15 * 2);
        auVar29._0_12_ = ZEXT812(0);
        auVar29._12_4_ = 0;
        uVar14 = (ulonglong)((uint)uVar1 * 0x50);
        auVar18 = *(undefined1 (*) [16])
                   (lVar4 + 0x1c0 +
                   (ulonglong)((*(uint *)(lVar12 + 0x10280 + uVar14) & 0x3fff) << 4));
        auVar19 = vsubps_avx(*(undefined1 (*) [16])
                              (lVar4 + 0x1c0 +
                              (ulonglong)((*(uint *)(lVar12 + 0x10284 + uVar14) & 0x3fff) << 4)),
                             auVar18);
        fVar22 = auVar19._0_4_;
        auVar27._0_4_ = fVar22 * fVar22;
        fVar23 = auVar19._4_4_;
        auVar27._4_4_ = fVar23 * fVar23;
        fVar24 = auVar19._8_4_;
        auVar27._8_4_ = fVar24 * fVar24;
        fVar25 = auVar19._12_4_;
        auVar27._12_4_ = fVar25 * fVar25;
        auVar19 = vblendps_avx(auVar27,auVar17,8);
        auVar19 = vhaddps_avx(auVar19,auVar19);
        auVar19 = vhaddps_avx(auVar19,auVar19);
        if (_DAT_14615af54 < auVar19._0_4_) {
          auVar27 = vsubps_avx(auVar16,auVar18);
          auVar28._0_4_ = auVar27._0_4_ * fVar22;
          auVar28._4_4_ = auVar27._4_4_ * fVar23;
          auVar28._8_4_ = auVar27._8_4_ * fVar24;
          auVar28._12_4_ = auVar27._12_4_ * fVar25;
          auVar27 = vblendps_avx(auVar28,auVar17,8);
          auVar27 = vhaddps_avx(auVar27,auVar27);
          auVar27 = vhaddps_avx(auVar27,auVar27);
          auVar29._0_4_ = auVar27._0_4_ / auVar19._0_4_;
          auVar29._4_12_ = auVar27._4_12_;
        }
        auVar27 = vminss_avx(ZEXT416(_DAT_145fc6ed8),auVar29);
        auVar19 = vcmpss_avx(auVar29,auVar20,1);
        auVar18 = vsubps_avx(auVar18,auVar16);
        uVar15 = uVar15 + 1;
        fVar26 = (float)(~auVar19._0_4_ & auVar27._0_4_);
        fVar22 = fVar26 * fVar22 + auVar18._0_4_;
        fVar23 = fVar26 * fVar23 + auVar18._4_4_;
        fVar24 = fVar26 * fVar24 + auVar18._8_4_;
        fVar25 = fVar26 * fVar25 + auVar18._12_4_;
        auVar21._0_4_ = fVar22 * fVar22;
        auVar21._4_4_ = fVar23 * fVar23;
        auVar21._8_4_ = fVar24 * fVar24;
        auVar21._12_4_ = fVar25 * fVar25;
        auVar18 = vblendps_avx(auVar21,auVar17,8);
        auVar18 = vhaddps_avx(auVar18,auVar18);
        auVar18 = vhaddps_avx(auVar18,auVar18);
        *(int *)((longlong)auStack_a8 + (ulonglong)uVar1 * 4 + lVar7) = auVar18._0_4_;
      } while (uVar6 != uVar15);
    }
    if (uVar9 <= uVar6) {
      uVar6 = uVar9;
    }
    uStack_98 = uVar2;
    *(undefined8 *)((longlong)auStack_d0 + lVar7) = 0x14008b31c;
    FUN_1420706f0(lVar3,uVar6);
    puVar8 = (undefined4 *)((longlong)auStack_a8 + lVar7);
  }
  uVar2 = param_1[1];
  uVar6 = 0xff;
  if ((int)uVar9 < 0xff) {
    uVar6 = uVar9;
  }
  if ((uVar2 < uVar6) && (*param_1 < uVar6)) {
    if ((ulonglong)uVar2 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)((longlong)puVar8 + -0x28) = 0x14008b355;
      func_0x000145f40560(0,uVar5,(ulonglong)uVar2 * 2);
    }
    *param_1 = uVar6;
  }
  param_1[1] = uVar6;
  return;
}

