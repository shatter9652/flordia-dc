// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000c980  size: 700 bytes
// Name:    FUN_14000c980
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000c980(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16])

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  uint uVar31;
  float fVar32;
  uint uVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  fVar3 = _DAT_145fc6f08;
  auVar6 = *(undefined1 (*) [16])(param_2 + (longlong)*(int *)(param_1[3] + 4) * 0x10);
  auVar5 = *(undefined1 (*) [16])(param_2 + (longlong)*(int *)(param_1[2] + 0xc) * 0x10);
  auVar10 = *(undefined1 (*) [16])(param_2 + (longlong)*(int *)(param_1[2] + 8) * 0x10);
  auVar20 = *(undefined1 (*) [16])(param_2 + (longlong)*(int *)param_1[3] * 0x10);
  auVar35 = vsubps_avx(auVar5,auVar6);
  auVar13 = *param_1;
  auVar14 = vsubps_avx(auVar20,auVar10);
  fVar27 = *(float *)(param_1[1] + 4);
  fVar30 = *(float *)(param_1[1] + 8);
  fVar1 = *(float *)(param_1[1] + 0xc);
  auVar12._0_4_ = auVar13._0_4_ * (auVar5._0_4_ + auVar6._0_4_);
  auVar12._4_4_ = auVar13._4_4_ * (auVar5._4_4_ + auVar6._4_4_);
  auVar12._8_4_ = auVar13._8_4_ * (auVar5._8_4_ + auVar6._8_4_);
  auVar12._12_4_ = auVar13._12_4_ * (auVar5._12_4_ + auVar6._12_4_);
  auVar6 = vhaddps_avx(auVar12,auVar13);
  fVar24 = auVar6._0_4_;
  auVar5._0_4_ = fVar24 * auVar13._0_4_;
  auVar5._4_4_ = fVar24 * auVar13._4_4_;
  auVar5._8_4_ = fVar24 * auVar13._8_4_;
  auVar5._12_4_ = fVar24 * auVar13._12_4_;
  auVar13._0_4_ = *(float *)param_1[1] * (auVar20._0_4_ + auVar10._0_4_);
  auVar13._4_4_ = fVar27 * (auVar20._4_4_ + auVar10._4_4_);
  auVar13._8_4_ = fVar30 * (auVar20._8_4_ + auVar10._8_4_);
  auVar13._12_4_ = fVar1 * (auVar20._12_4_ + auVar10._12_4_);
  auVar6 = vhaddps_avx(auVar13,auVar5);
  fVar19 = auVar6._0_4_;
  fVar24 = *(float *)(param_1[3] + 8);
  auVar6._4_4_ = fVar24;
  auVar6._0_4_ = fVar24;
  auVar6._8_4_ = fVar24;
  auVar6._12_4_ = fVar24;
  auVar6 = vrcpps_avx(auVar6);
  fVar9 = auVar6._0_4_;
  fVar26 = auVar6._4_4_;
  fVar29 = auVar6._8_4_;
  fVar32 = auVar6._12_4_;
  fVar26 = _DAT_145fc6f08 * ((fVar26 * fVar24 - _DAT_145fc6ed8) * fVar26 - fVar26);
  fVar29 = _DAT_145fc6f08 * ((fVar29 * fVar24 - _DAT_145fc6ed8) * fVar29 - fVar29);
  fVar32 = _DAT_145fc6f08 * ((fVar32 * fVar24 - _DAT_145fc6ed8) * fVar32 - fVar32);
  *(float *)*param_3 =
       (*(float *)param_1[1] * fVar19 + auVar5._0_4_) *
       _DAT_145fc6f08 * ((fVar9 * fVar24 - _DAT_145fc6ed8) * fVar9 - fVar9);
  *(float *)(*param_3 + 4) = (fVar27 * fVar19 + auVar5._4_4_) * fVar26;
  *(float *)(*param_3 + 8) = (fVar30 * fVar19 + auVar5._8_4_) * fVar29;
  *(float *)(*param_3 + 0xc) = (fVar1 * fVar19 + auVar5._12_4_) * fVar32;
  fVar27 = _DAT_145fc6edc;
  auVar10._0_4_ = auVar35._0_4_ * *(float *)*param_1;
  auVar10._4_4_ = auVar35._4_4_ * *(float *)(*param_1 + 4);
  auVar10._8_4_ = auVar35._8_4_ * *(float *)(*param_1 + 8);
  auVar10._12_4_ = auVar35._12_4_ * *(float *)(*param_1 + 0xc);
  auVar6 = vhaddps_avx(auVar10,auVar10);
  fVar24 = auVar6._0_4_ * _DAT_145fc6edc;
  fVar9 = SQRT((fVar24 * fVar24) / *(float *)(param_1[3] + 8));
  *(float *)param_3[3] = fVar9;
  uVar4 = _DAT_145fc6f4c;
  auVar20._0_4_ = auVar14._0_4_ * *(float *)param_1[1];
  auVar20._4_4_ = auVar14._4_4_ * *(float *)(param_1[1] + 4);
  auVar20._8_4_ = auVar14._8_4_ * *(float *)(param_1[1] + 8);
  auVar20._12_4_ = auVar14._12_4_ * *(float *)(param_1[1] + 0xc);
  auVar6 = vhaddps_avx(auVar20,auVar20);
  fVar27 = auVar6._0_4_ * fVar27;
  fVar26 = SQRT((fVar27 * fVar27) / *(float *)(param_1[3] + 8));
  *(float *)(param_3[3] + 4) = fVar26;
  fVar19 = _DAT_145fc6ed8;
  fVar24 = *(float *)*param_1;
  fVar27 = *(float *)(*param_1 + 4);
  fVar30 = *(float *)(*param_1 + 8);
  fVar1 = *(float *)(*param_1 + 0xc);
  auVar35._0_4_ = (uint)fVar24 & uVar4;
  auVar35._4_4_ = (uint)fVar27 & uVar4;
  auVar35._8_4_ = (uint)fVar30 & uVar4;
  auVar35._12_4_ = (uint)fVar1 & uVar4;
  auVar6 = vshufps_avx(auVar35,auVar35,0xf5);
  auVar6 = vmaxss_avx(auVar35,auVar6);
  if (fVar26 <= fVar9) {
    fVar29 = _DAT_145fc6f48 / auVar6._0_4_;
    fVar24 = fVar29 * fVar24;
    fVar27 = fVar29 * fVar27;
    fVar30 = fVar29 * fVar30;
    fVar29 = fVar29 * fVar1;
    auVar14._0_4_ = fVar24 * fVar24;
    auVar14._4_4_ = fVar27 * fVar27;
    auVar14._8_4_ = fVar30 * fVar30;
    auVar14._12_4_ = fVar29 * fVar29;
    auVar6 = vhaddps_avx(auVar14,auVar14);
    auVar15._0_4_ = auVar6._0_4_;
    auVar15._4_4_ = auVar15._0_4_;
    auVar15._8_4_ = auVar15._0_4_;
    auVar15._12_4_ = auVar15._0_4_;
    auVar6 = vrsqrtps_avx(auVar15);
    fVar1 = auVar6._0_4_;
    fVar19 = auVar6._4_4_;
    fVar9 = auVar6._8_4_;
    fVar26 = auVar6._12_4_;
    auVar6 = vcmpps_avx(ZEXT816(0) << 0x20,auVar15,1);
    *(uint *)param_3[1] =
         auVar6._0_4_ &
         (uint)(fVar24 * ((fVar3 * fVar1 * fVar1 * auVar15._0_4_ - fVar3) * fVar1 + fVar1));
    *(uint *)(param_3[1] + 4) =
         auVar6._4_4_ &
         (uint)(fVar27 * ((fVar3 * fVar19 * fVar19 * auVar15._0_4_ - fVar3) * fVar19 + fVar19));
    *(uint *)(param_3[1] + 8) =
         auVar6._8_4_ &
         (uint)(fVar30 * ((fVar3 * fVar9 * fVar9 * auVar15._0_4_ - fVar3) * fVar9 + fVar9));
    *(uint *)(param_3[1] + 0xc) =
         auVar6._12_4_ &
         (uint)(fVar29 * ((fVar3 * fVar26 * fVar26 * auVar15._0_4_ - fVar3) * fVar26 + fVar26));
    auVar16._0_4_ = (uint)*(float *)param_1[1] & uVar4;
    auVar16._4_4_ = (uint)*(float *)(param_1[1] + 4) & uVar4;
    auVar16._8_4_ = (uint)*(float *)(param_1[1] + 8) & uVar4;
    auVar16._12_4_ = (uint)*(float *)(param_1[1] + 0xc) & uVar4;
    auVar6 = vshufps_avx(auVar16,auVar16,0xf5);
    auVar6 = vmaxss_avx(auVar16,auVar6);
    fVar29 = _DAT_145fc6ed8 / auVar6._0_4_;
    fVar19 = fVar29 * *(float *)param_1[1];
    fVar9 = fVar29 * *(float *)(param_1[1] + 4);
    fVar26 = fVar29 * *(float *)(param_1[1] + 8);
    fVar29 = fVar29 * *(float *)(param_1[1] + 0xc);
    auVar17._0_4_ = fVar19 * fVar19;
    auVar17._4_4_ = fVar9 * fVar9;
    auVar17._8_4_ = fVar26 * fVar26;
    auVar17._12_4_ = fVar29 * fVar29;
    auVar6 = vhaddps_avx(auVar17,auVar17);
    auVar18._0_4_ = auVar6._0_4_;
    auVar18._4_4_ = auVar18._0_4_;
    auVar18._8_4_ = auVar18._0_4_;
    auVar18._12_4_ = auVar18._0_4_;
    auVar6 = vrsqrtps_avx(auVar18);
    fVar24 = auVar6._0_4_;
    fVar27 = auVar6._4_4_;
    fVar30 = auVar6._8_4_;
    fVar1 = auVar6._12_4_;
    auVar6 = vcmpps_avx(ZEXT816(0) << 0x20,auVar18,1);
    *(uint *)param_3[2] =
         auVar6._0_4_ &
         (uint)(fVar19 * ((fVar3 * fVar24 * fVar24 * auVar18._0_4_ - fVar3) * fVar24 + fVar24));
    *(uint *)(param_3[2] + 4) =
         auVar6._4_4_ &
         (uint)(fVar9 * ((fVar3 * fVar27 * fVar27 * auVar18._0_4_ - fVar3) * fVar27 + fVar27));
    *(uint *)(param_3[2] + 8) =
         auVar6._8_4_ &
         (uint)(fVar26 * ((fVar3 * fVar30 * fVar30 * auVar18._0_4_ - fVar3) * fVar30 + fVar30));
    *(uint *)(param_3[2] + 0xc) =
         auVar6._12_4_ &
         (uint)(fVar29 * ((fVar3 * fVar1 * fVar1 * auVar18._0_4_ - fVar3) * fVar1 + fVar1));
  }
  else {
    fVar34 = _DAT_145fc6ed8 / auVar6._0_4_;
    fVar24 = fVar34 * fVar24;
    fVar27 = fVar34 * fVar27;
    fVar30 = fVar34 * fVar30;
    fVar34 = fVar34 * fVar1;
    auVar36._0_4_ = fVar24 * fVar24;
    auVar36._4_4_ = fVar27 * fVar27;
    auVar36._8_4_ = fVar30 * fVar30;
    auVar36._12_4_ = fVar34 * fVar34;
    auVar6 = vhaddps_avx(auVar36,auVar36);
    auVar37._0_4_ = auVar6._0_4_;
    auVar37._4_4_ = auVar37._0_4_;
    auVar37._8_4_ = auVar37._0_4_;
    auVar37._12_4_ = auVar37._0_4_;
    auVar6 = vrsqrtps_avx(auVar37);
    fVar1 = auVar6._0_4_;
    fVar29 = auVar6._4_4_;
    fVar32 = auVar6._8_4_;
    fVar23 = auVar6._12_4_;
    auVar6 = vcmpps_avx(ZEXT816(0) << 0x20,auVar37,1);
    uVar25 = auVar6._0_4_ &
             (uint)(((fVar3 * fVar1 * fVar1 * auVar37._0_4_ - fVar3) * fVar1 + fVar1) * fVar24);
    uVar28 = auVar6._4_4_ &
             (uint)(((fVar3 * fVar29 * fVar29 * auVar37._0_4_ - fVar3) * fVar29 + fVar29) * fVar27);
    uVar31 = auVar6._8_4_ &
             (uint)(((fVar3 * fVar32 * fVar32 * auVar37._0_4_ - fVar3) * fVar32 + fVar32) * fVar30);
    uVar33 = auVar6._12_4_ &
             (uint)(((fVar3 * fVar23 * fVar23 * auVar37._0_4_ - fVar3) * fVar23 + fVar23) * fVar34);
    *(uint *)param_3[1] = uVar25;
    *(uint *)(param_3[1] + 4) = uVar28;
    *(uint *)(param_3[1] + 8) = uVar31;
    *(uint *)(param_3[1] + 0xc) = uVar33;
    auVar21._0_4_ = (uint)*(float *)param_1[1] & uVar4;
    auVar21._4_4_ = (uint)*(float *)(param_1[1] + 4) & uVar4;
    auVar21._8_4_ = (uint)*(float *)(param_1[1] + 8) & uVar4;
    auVar21._12_4_ = (uint)*(float *)(param_1[1] + 0xc) & uVar4;
    auVar6 = vshufps_avx(auVar21,auVar21,0xf5);
    auVar6 = vmaxss_avx(auVar21,auVar6);
    fVar19 = fVar19 / auVar6._0_4_;
    fVar29 = fVar19 * *(float *)param_1[1];
    fVar32 = fVar19 * *(float *)(param_1[1] + 4);
    fVar23 = fVar19 * *(float *)(param_1[1] + 8);
    fVar19 = fVar19 * *(float *)(param_1[1] + 0xc);
    auVar38._0_4_ = fVar29 * fVar29;
    auVar38._4_4_ = fVar32 * fVar32;
    auVar38._8_4_ = fVar23 * fVar23;
    auVar38._12_4_ = fVar19 * fVar19;
    auVar6 = vhaddps_avx(auVar38,auVar38);
    auVar39._0_4_ = auVar6._0_4_;
    auVar39._4_4_ = auVar39._0_4_;
    auVar39._8_4_ = auVar39._0_4_;
    auVar39._12_4_ = auVar39._0_4_;
    auVar6 = vrsqrtps_avx(auVar39);
    fVar24 = auVar6._0_4_;
    fVar27 = auVar6._4_4_;
    fVar30 = auVar6._8_4_;
    fVar1 = auVar6._12_4_;
    auVar6 = vcmpps_avx(ZEXT816(0) << 0x20,auVar39,1);
    *(uint *)param_3[2] =
         auVar6._0_4_ &
         (uint)(((fVar3 * fVar24 * fVar24 * auVar39._0_4_ - fVar3) * fVar24 + fVar24) * fVar29);
    *(uint *)(param_3[2] + 4) =
         auVar6._4_4_ &
         (uint)(((fVar3 * fVar27 * fVar27 * auVar39._0_4_ - fVar3) * fVar27 + fVar27) * fVar32);
    *(uint *)(param_3[2] + 8) =
         auVar6._8_4_ &
         (uint)(((fVar3 * fVar30 * fVar30 * auVar39._0_4_ - fVar3) * fVar30 + fVar30) * fVar23);
    *(uint *)(param_3[2] + 0xc) =
         auVar6._12_4_ &
         (uint)(((fVar3 * fVar1 * fVar1 * auVar39._0_4_ - fVar3) * fVar1 + fVar1) * fVar19);
    *(float *)param_3[3] = fVar26;
    *(float *)(param_3[3] + 4) = fVar9;
    uVar2 = *(undefined8 *)(param_3[2] + 8);
    *(undefined8 *)param_3[1] = *(undefined8 *)param_3[2];
    *(undefined8 *)(param_3[1] + 8) = uVar2;
    *(uint *)param_3[2] = uVar25;
    *(uint *)(param_3[2] + 4) = uVar28;
    *(uint *)(param_3[2] + 8) = uVar31;
    *(uint *)(param_3[2] + 0xc) = uVar33;
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = *(ulonglong *)param_3[3];
  auVar6 = vshufps_avx(auVar7,auVar7,0x55);
  fVar24 = (float)*(ulonglong *)param_3[3];
  auVar11._0_4_ = auVar6._0_4_ * *(float *)param_3[2];
  auVar11._4_4_ = auVar6._4_4_ * *(float *)(param_3[2] + 4);
  auVar11._8_4_ = auVar6._8_4_ * *(float *)(param_3[2] + 8);
  auVar11._12_4_ = auVar6._12_4_ * *(float *)(param_3[2] + 0xc);
  auVar8._0_4_ = fVar24 * *(float *)param_3[1];
  auVar8._4_4_ = fVar24 * *(float *)(param_3[1] + 4);
  auVar8._8_4_ = fVar24 * *(float *)(param_3[1] + 8);
  auVar8._12_4_ = fVar24 * *(float *)(param_3[1] + 0xc);
  auVar22._0_4_ = auVar8._0_4_ + auVar11._0_4_;
  auVar22._4_4_ = auVar8._4_4_ + auVar11._4_4_;
  auVar22._8_4_ = auVar8._8_4_ + auVar11._8_4_;
  auVar22._12_4_ = auVar8._12_4_ + auVar11._12_4_;
  auVar6 = vsubps_avx(*param_3,auVar22);
  param_3[4] = auVar6;
  auVar6 = vsubps_avx(*param_3,auVar11);
  auVar5 = vsubps_avx(auVar11,auVar8);
  *(float *)param_3[5] = auVar6._0_4_ + auVar8._0_4_;
  *(float *)(param_3[5] + 4) = auVar6._4_4_ + auVar8._4_4_;
  *(float *)(param_3[5] + 8) = auVar6._8_4_ + auVar8._8_4_;
  *(float *)(param_3[5] + 0xc) = auVar6._12_4_ + auVar8._12_4_;
  fVar24 = *(float *)(*param_3 + 4);
  fVar27 = *(float *)(*param_3 + 8);
  fVar30 = *(float *)(*param_3 + 0xc);
  *(float *)param_3[6] = auVar22._0_4_ + *(float *)*param_3;
  *(float *)(param_3[6] + 4) = auVar22._4_4_ + fVar24;
  *(float *)(param_3[6] + 8) = auVar22._8_4_ + fVar27;
  *(float *)(param_3[6] + 0xc) = auVar22._12_4_ + fVar30;
  fVar24 = *(float *)(*param_3 + 4);
  fVar27 = *(float *)(*param_3 + 8);
  fVar30 = *(float *)(*param_3 + 0xc);
  *(float *)param_3[7] = auVar5._0_4_ + *(float *)*param_3;
  *(float *)(param_3[7] + 4) = auVar5._4_4_ + fVar24;
  *(float *)(param_3[7] + 8) = auVar5._8_4_ + fVar27;
  *(float *)(param_3[7] + 0xc) = auVar5._12_4_ + fVar30;
  return;
}

