// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013d370  size: 104 bytes
// Name:    FUN_14013d370
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1410a54f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013d370(longlong param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined4 uVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  short sVar12;
  short sVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar20 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_50 = 0x14013d391;
  FUN_1410a54f0(param_1 + 0x60,&uStack_28);
  auVar13._4_4_ = _DAT_145fc6f70;
  auVar13._0_4_ = _DAT_145fc6f70;
  auVar13._8_4_ = _DAT_145fc6f70;
  auVar13._12_4_ = _DAT_145fc6f70;
  auVar15._0_4_ = _DAT_145fc6f4c & (uint)uStack_28;
  auVar15._4_4_ = _DAT_145fc6f4c & uStack_28._4_4_;
  auVar15._8_4_ = _DAT_145fc6f4c & (uint)uStack_20;
  auVar15._12_4_ = _DAT_145fc6f4c & uStack_20._4_4_;
  auVar15 = vcmpps_avx(auVar15,auVar13,0x11);
  uVar6 = vmovmskps_avx(auVar15);
  if ((~(byte)uVar6 & 7) != 0) {
    *param_2 = ZEXT816(0) << 0x20;
    return;
  }
  uVar5 = *(undefined8 *)(param_1 + 0xe8);
  *(undefined8 *)*param_2 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(*param_2 + 8) = uVar5;
  puVar7 = (uint *)func_0x000145491cc0(*(undefined4 *)(param_1 + 0x90),
                                       *(undefined1 *)(param_1 + 0x94));
  if (puVar7 != (uint *)0x0) {
    uVar2 = *puVar7;
    uVar8 = (ulonglong)uVar2 & 0x1ffff;
    if ((uVar8 == 0x1ffff) ||
       (plVar3 = *(longlong **)((ulonglong)(uVar2 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar3 == (longlong *)0x0)) {
      lVar9 = 0;
    }
    else {
      uVar10 = *(uint *)(plVar3[5] + uVar8 * 4);
      lVar9 = 0;
      if (uVar2 >> 0x16 == (uVar10 >> 0x11 & 0x3ff) &&
          (uVar10 & *(uint *)(plVar3 + 6)) == *(uint *)(plVar3 + 6)) {
        lVar9 = (ulonglong)(uint)((int)plVar3[1] * (int)uVar8) + *plVar3;
      }
    }
    lVar9 = FUN_1410a5a80(lVar9);
    if (lVar9 != 0) {
      uVar10 = uVar2 & 0x1ffff;
      if ((((uVar10 == 0x1ffff) ||
           (plVar3 = *(longlong **)((ulonglong)(uVar2 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar3 == (longlong *)0x0)) ||
          (uVar1 = *(uint *)(plVar3[5] + (ulonglong)uVar10 * 4),
          (uVar1 >> 0x11 & 0x3ff) != uVar2 >> 0x16)) ||
         (((uVar1 & *(uint *)(plVar3 + 6)) != *(uint *)(plVar3 + 6) || (*plVar3 == 0)))) {
        return;
      }
      lVar9 = *plVar3 + (ulonglong)(uVar10 * (int)plVar3[1]);
      if ((0x1cU >> (*(uint *)(lVar9 + 0x30) & 0x1f) & 1) == 0) {
        uStack_48 = *(undefined8 *)(lVar9 + 0x40);
        uStack_40 = *(undefined8 *)(lVar9 + 0x48);
        uStack_38 = *(undefined8 *)(lVar9 + 0x50);
        uStack_30 = *(undefined8 *)(lVar9 + 0x58);
        uStack_28 = *(undefined8 *)(lVar9 + 0x60);
        uStack_20 = *(undefined8 *)(lVar9 + 0x68);
        auVar15 = vpunpckhwd_avx(*(undefined1 (*) [16])(lVar9 + 0x70),
                                 *(undefined1 (*) [16])(lVar9 + 0x70));
        auVar15 = vpsrad_avx(auVar15,0x10);
        auVar15 = vcvtdq2ps_avx(auVar15);
        vshufpd_avx(auVar15,auVar15,3);
        func_0x0001425711d0(param_2,&uStack_48);
        return;
      }
      goto code_r0x000142571130;
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x98);
  if (lVar9 != 0) {
    if ((0x1cU >> (*(uint *)(lVar9 + 0x30) & 0x1f) & 1) != 0) {
code_r0x000142571130:
      fVar19 = *(float *)*param_2;
      auVar15 = *(undefined1 (*) [16])(lVar9 + 0x70);
      fVar21 = *(float *)(*param_2 + 4);
      fVar22 = *(float *)(*param_2 + 8);
      auVar11._0_4_ =
           fVar22 * *(float *)(lVar9 + 0x60) +
           fVar21 * *(float *)(lVar9 + 0x50) + fVar19 * *(float *)(lVar9 + 0x40) + auVar15._0_4_;
      auVar11._4_4_ =
           fVar22 * *(float *)(lVar9 + 100) +
           fVar21 * *(float *)(lVar9 + 0x54) + fVar19 * *(float *)(lVar9 + 0x44) + auVar15._4_4_;
      auVar11._8_4_ =
           fVar22 * *(float *)(lVar9 + 0x68) +
           fVar21 * *(float *)(lVar9 + 0x58) + fVar19 * *(float *)(lVar9 + 0x48) + auVar15._8_4_;
      auVar11._12_4_ =
           fVar22 * *(float *)(lVar9 + 0x6c) +
           fVar21 * *(float *)(lVar9 + 0x5c) + fVar19 * *(float *)(lVar9 + 0x4c) + auVar15._12_4_;
      auVar17._4_4_ = _DAT_14615a290;
      auVar17._0_4_ = _DAT_14615a290;
      auVar17._8_4_ = _DAT_14615a290;
      auVar17._12_4_ = _DAT_14615a290;
      auVar17 = vrcpps_avx(auVar17);
      auVar13 = vblendps_avx(auVar11,auVar15,8);
      fVar19 = auVar17._0_4_;
      fVar21 = auVar17._4_4_;
      fVar22 = auVar17._8_4_;
      fVar23 = auVar17._12_4_;
      auVar20._0_4_ =
           ((-(fVar19 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar19 + fVar19) * auVar13._0_4_;
      auVar20._4_4_ =
           ((-(fVar21 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar21 + fVar21) * auVar13._4_4_;
      auVar20._8_4_ =
           ((-(fVar22 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar22 + fVar22) * auVar13._8_4_;
      auVar20._12_4_ =
           ((-(fVar23 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar23 + fVar23) * auVar13._12_4_;
      auVar17 = vroundps_avx(auVar20,3);
      auVar18._0_4_ = -(auVar17._0_4_ * _DAT_14615a290) + auVar13._0_4_;
      auVar18._4_4_ = -(auVar17._4_4_ * _DAT_14615a290) + auVar13._4_4_;
      auVar18._8_4_ = -(auVar17._8_4_ * _DAT_14615a290) + auVar13._8_4_;
      auVar18._12_4_ = -(auVar17._12_4_ * _DAT_14615a290) + auVar13._12_4_;
      auVar14._0_4_ = (int)auVar17._0_4_;
      auVar14._4_4_ = (int)auVar17._4_4_;
      auVar14._8_4_ = (int)auVar17._8_4_;
      auVar14._12_4_ = (int)auVar17._12_4_;
      auVar13 = vblendps_avx(auVar11,auVar18,3);
      auVar17 = vpackssdw_avx(auVar14,auVar14);
      sVar12 = auVar17._0_2_;
      auVar4._0_2_ = sVar12 + auVar15._0_2_;
      sVar16 = auVar17._2_2_;
      auVar4._2_2_ = sVar16 + auVar15._2_2_;
      auVar4._4_2_ = sVar12 + auVar15._4_2_;
      auVar4._6_2_ = sVar16 + auVar15._6_2_;
      auVar4._8_2_ = sVar12 + auVar15._8_2_;
      auVar4._10_2_ = sVar16 + auVar15._10_2_;
      auVar4._12_2_ = sVar12 + auVar15._12_2_;
      auVar4._14_2_ = sVar16 + auVar15._14_2_;
      auVar13 = vpblendd_avx2(auVar13,auVar4,8);
      auVar15 = vpunpckhwd_avx(auVar13,auVar13);
      auVar15 = vpsrad_avx(auVar15,0x10);
      auVar15 = vcvtdq2ps_avx(auVar15);
      auVar15 = vshufpd_avx(auVar15,auVar15,3);
      fVar19 = auVar15._4_4_ * _UNK_146159c94;
      fVar21 = auVar15._8_4_ * _UNK_146159c98;
      fVar22 = auVar15._12_4_ * _UNK_146159c9c;
      *(float *)*param_2 = auVar15._0_4_ * _DAT_146159c90 + auVar13._0_4_;
      *(float *)(*param_2 + 4) = fVar19 + auVar13._4_4_;
      *(float *)(*param_2 + 8) = fVar21 + auVar13._8_4_;
      *(float *)(*param_2 + 0xc) = fVar22 + auVar13._12_4_;
      return;
    }
    uStack_58 = *(undefined8 *)(lVar9 + 0x40);
    uStack_50 = *(undefined8 *)(lVar9 + 0x48);
    uStack_48 = *(undefined8 *)(lVar9 + 0x50);
    uStack_40 = *(undefined8 *)(lVar9 + 0x58);
    uStack_38 = *(undefined8 *)(lVar9 + 0x60);
    uStack_30 = *(undefined8 *)(lVar9 + 0x68);
    auVar15 = *(undefined1 (*) [16])(lVar9 + 0x70);
    auVar13 = vpunpckhwd_avx(auVar15,auVar15);
    auVar13 = vpsrad_avx(auVar13,0x10);
    auVar13 = vcvtdq2ps_avx(auVar13);
    auVar13 = vshufpd_avx(auVar13,auVar13,3);
    uStack_28 = CONCAT44(auVar13._4_4_ * _UNK_146159c94 + auVar15._4_4_,
                         auVar13._0_4_ * _DAT_146159c90 + auVar15._0_4_);
    uStack_20 = CONCAT44(auVar13._12_4_ * _UNK_146159c9c + auVar15._12_4_,
                         auVar13._8_4_ * _UNK_146159c98 + auVar15._8_4_);
    func_0x0001425711d0(param_2,&uStack_58);
  }
  return;
}

