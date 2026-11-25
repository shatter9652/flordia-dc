// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140063960  size: 707 bytes
// Name:    FUN_140063960
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ea79f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140063960(longlong *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  float fVar26;
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [64];
  undefined1 auVar34 [16];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 auVar31 [64];
  undefined1 auVar35 [64];
  
  if (((char)param_1[4] == '\x01') &&
     ((cVar9 = (**(code **)(*param_1 + 0xb0))(), cVar9 == '\0' ||
      (cVar9 = (**(code **)(*param_1 + 0xb0))(param_1), cVar9 == '\0')))) {
    fVar1 = *param_2;
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    fVar4 = param_3[2];
    fVar15 = *param_3;
    auVar30._0_4_ =
         *(float *)(param_1 + 0xc) * fVar3 +
         *(float *)(param_1 + 10) * fVar2 +
         *(float *)(param_1 + 8) * fVar1 + *(float *)(param_1 + 0xe);
    auVar30._4_4_ =
         *(float *)((longlong)param_1 + 100) * fVar3 +
         *(float *)((longlong)param_1 + 0x54) * fVar2 +
         *(float *)((longlong)param_1 + 0x44) * fVar1 + *(float *)((longlong)param_1 + 0x74);
    auVar30._8_4_ =
         *(float *)(param_1 + 0xd) * fVar3 +
         *(float *)(param_1 + 0xb) * fVar2 +
         *(float *)(param_1 + 9) * fVar1 + *(float *)(param_1 + 0xf);
    auVar30._12_4_ =
         *(float *)((longlong)param_1 + 0x6c) * fVar3 +
         *(float *)((longlong)param_1 + 0x5c) * fVar2 +
         *(float *)((longlong)param_1 + 0x4c) * fVar1 + *(float *)((longlong)param_1 + 0x7c);
    auVar31 = ZEXT1664(auVar30);
    fVar1 = param_3[1];
    auVar27 = ZEXT416(0) << 0x20;
    auVar22._0_4_ =
         *(float *)(param_1 + 0xc) * fVar4 +
         *(float *)(param_1 + 10) * fVar1 +
         *(float *)(param_1 + 8) * fVar15 + *(float *)(param_1 + 0xe);
    auVar22._4_4_ =
         *(float *)((longlong)param_1 + 100) * fVar4 +
         *(float *)((longlong)param_1 + 0x54) * fVar1 +
         *(float *)((longlong)param_1 + 0x44) * fVar15 + *(float *)((longlong)param_1 + 0x74);
    auVar22._8_4_ =
         *(float *)(param_1 + 0xd) * fVar4 +
         *(float *)(param_1 + 0xb) * fVar1 +
         *(float *)(param_1 + 9) * fVar15 + *(float *)(param_1 + 0xf);
    auVar22._12_4_ =
         *(float *)((longlong)param_1 + 0x6c) * fVar4 +
         *(float *)((longlong)param_1 + 0x5c) * fVar1 +
         *(float *)((longlong)param_1 + 0x4c) * fVar15 + *(float *)((longlong)param_1 + 0x7c);
    auVar12 = vsubps_avx(auVar22,auVar30);
    auVar33 = ZEXT1664(auVar12);
    fVar1 = auVar12._0_4_;
    auVar11._0_4_ = fVar1 * fVar1;
    fVar2 = auVar12._4_4_;
    auVar11._4_4_ = fVar2 * fVar2;
    fVar3 = auVar12._8_4_;
    auVar11._8_4_ = fVar3 * fVar3;
    fVar4 = auVar12._12_4_;
    auVar11._12_4_ = fVar4 * fVar4;
    auVar12 = vblendps_avx(auVar11,auVar27,8);
    auVar12 = vhaddps_avx(auVar12,auVar12);
    auVar11 = vhaddps_avx(auVar12,auVar12);
    auVar12 = vcmpps_avx(auVar27,auVar11,5);
    if ((((SUB161(auVar12 >> 0x1f,0) & 1) == 0 && (SUB161(auVar12 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar12 >> 0x5f,0) & 1) == 0) && -1 < auVar12[0xf]) {
      auVar12._0_4_ = auVar30._0_4_ * auVar30._0_4_;
      auVar12._4_4_ = auVar30._4_4_ * auVar30._4_4_;
      auVar12._8_4_ = auVar30._8_4_ * auVar30._8_4_;
      auVar12._12_4_ = auVar30._12_4_ * auVar30._12_4_;
      auVar12 = vblendps_avx(auVar12,auVar27,8);
      auVar12 = vhaddps_avx(auVar12,auVar12);
      auVar23 = vhaddps_avx(auVar12,auVar12);
      auVar13._0_4_ = fVar1 * auVar30._0_4_;
      auVar13._4_4_ = fVar2 * auVar30._4_4_;
      auVar13._8_4_ = fVar3 * auVar30._8_4_;
      auVar13._12_4_ = fVar4 * auVar30._12_4_;
      auVar12 = vblendps_avx(auVar13,auVar27,8);
      auVar12 = vhaddps_avx(auVar12,auVar12);
      auVar30 = vhaddps_avx(auVar12,auVar12);
      auVar14._4_4_ = _DAT_145fc6ed8;
      auVar14._0_4_ = _DAT_145fc6ed8;
      auVar14._8_4_ = _DAT_145fc6ed8;
      auVar14._12_4_ = _DAT_145fc6ed8;
      auVar12 = vsubps_avx(auVar14,auVar23);
      fVar1 = auVar11._0_4_;
      fVar2 = auVar11._4_4_;
      fVar3 = auVar11._8_4_;
      fVar4 = auVar11._12_4_;
      fVar15 = auVar30._0_4_;
      auVar19._0_4_ = fVar15 * fVar15 + auVar12._0_4_ * fVar1;
      fVar16 = auVar30._4_4_;
      auVar19._4_4_ = fVar16 * fVar16 + auVar12._4_4_ * fVar2;
      fVar17 = auVar30._8_4_;
      auVar19._8_4_ = fVar17 * fVar17 + auVar12._8_4_ * fVar3;
      fVar18 = auVar30._12_4_;
      auVar19._12_4_ = fVar18 * fVar18 + auVar12._12_4_ * fVar4;
      auVar12 = vcmpps_avx(auVar19,auVar27,5);
      if ((((SUB161(auVar12 >> 0x1f,0) & 1) != 0 || (SUB161(auVar12 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || auVar12[0xf] < '\0') {
        auVar12 = vcmpps_avx(auVar14,auVar23,5);
        if ((((SUB161(auVar12 >> 0x1f,0) & 1) == 0 && (SUB161(auVar12 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar12 >> 0x5f,0) & 1) == 0) && -1 < auVar12[0xf]) {
          auVar12 = vrcpps_avx(auVar11);
          fVar21 = auVar12._0_4_;
          fVar24 = auVar12._4_4_;
          fVar25 = auVar12._8_4_;
          fVar26 = auVar12._12_4_;
          auVar12 = vrsqrtps_avx(auVar19);
          fVar5 = auVar12._0_4_;
          fVar6 = auVar12._4_4_;
          fVar7 = auVar12._8_4_;
          fVar8 = auVar12._12_4_;
          auVar28._4_4_ = _DAT_146159bfc;
          auVar28._0_4_ = _DAT_146159bfc;
          auVar28._8_4_ = _DAT_146159bfc;
          auVar28._12_4_ = _DAT_146159bfc;
          auVar12 = vcmpps_avx(auVar28,auVar19,2);
          auVar34._0_4_ =
               ((float)(auVar12._0_4_ &
                       (uint)(((fVar5 * fVar5 * auVar19._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                               fVar5 + fVar5) * auVar19._0_4_)) + fVar15) *
               ((fVar21 * fVar1 - _DAT_145fc6ed8) * fVar21 - fVar21);
          auVar34._4_4_ =
               ((float)(auVar12._4_4_ &
                       (uint)(((fVar6 * fVar6 * auVar19._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                               fVar6 + fVar6) * auVar19._4_4_)) + fVar16) *
               ((fVar24 * fVar2 - _DAT_145fc6ed8) * fVar24 - fVar24);
          auVar34._8_4_ =
               ((float)(auVar12._8_4_ &
                       (uint)(((fVar7 * fVar7 * auVar19._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                               fVar7 + fVar7) * auVar19._8_4_)) + fVar17) *
               ((fVar25 * fVar3 - _DAT_145fc6ed8) * fVar25 - fVar25);
          auVar34._12_4_ =
               ((float)(auVar12._12_4_ &
                       (uint)(((fVar8 * fVar8 * auVar19._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                               fVar8 + fVar8) * auVar19._12_4_)) + fVar18) *
               ((fVar26 * fVar4 - _DAT_145fc6ed8) * fVar26 - fVar26);
          auVar12 = vcmpps_avx(auVar34,ZEXT416(0) << 0x20,5);
          if ((((SUB161(auVar12 >> 0x1f,0) & 1) == 0 && (SUB161(auVar12 >> 0x3f,0) & 1) == 0) &&
              (SUB161(auVar12 >> 0x5f,0) & 1) == 0) && -1 < auVar12[0xf]) {
            return 0;
          }
          auVar12 = vcmpps_avx(auVar14,auVar34,5);
          uVar10 = vmovmskps_avx(auVar12);
          if ((char)uVar10 == '\0') {
            return 0;
          }
        }
        else {
          auVar27._4_4_ = _DAT_14615a034;
          auVar27._0_4_ = _DAT_14615a034;
          auVar27._8_4_ = _DAT_14615a034;
          auVar27._12_4_ = _DAT_14615a034;
          auVar12 = vcmpps_avx(auVar11,auVar27,5);
          if ((((SUB161(auVar12 >> 0x1f,0) & 1) == 0 && (SUB161(auVar12 >> 0x3f,0) & 1) == 0) &&
              (SUB161(auVar12 >> 0x5f,0) & 1) == 0) && -1 < auVar12[0xf]) {
            return 0;
          }
          auVar23._0_4_ = auVar22._0_4_ * auVar22._0_4_;
          auVar23._4_4_ = auVar22._4_4_ * auVar22._4_4_;
          auVar23._8_4_ = auVar22._8_4_ * auVar22._8_4_;
          auVar23._12_4_ = auVar22._12_4_ * auVar22._12_4_;
          auVar12 = vblendps_avx(auVar23,ZEXT816(0) << 0x20,8);
          auVar12 = vhaddps_avx(auVar12,auVar12);
          auVar12 = vhaddps_avx(auVar12,auVar12);
          auVar12 = vcmpps_avx(auVar14,auVar12,5);
          uVar10 = vmovmskps_avx(auVar12);
          if ((char)uVar10 != '\0') {
            return 0;
          }
          auVar12 = vrsqrtps_avx(auVar19);
          fVar15 = auVar12._0_4_;
          fVar16 = auVar12._4_4_;
          fVar17 = auVar12._8_4_;
          fVar18 = auVar12._12_4_;
          auVar29._4_4_ = _DAT_146159bfc;
          auVar29._0_4_ = _DAT_146159bfc;
          auVar29._8_4_ = _DAT_146159bfc;
          auVar29._12_4_ = _DAT_146159bfc;
          auVar12 = vcmpps_avx(auVar29,auVar19,2);
          auVar20._0_4_ =
               auVar12._0_4_ &
               (uint)(((fVar15 * fVar15 * auVar19._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar15
                      + fVar15) * auVar19._0_4_);
          auVar20._4_4_ =
               auVar12._4_4_ &
               (uint)(((fVar16 * fVar16 * auVar19._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar16
                      + fVar16) * auVar19._4_4_);
          auVar20._8_4_ =
               auVar12._8_4_ &
               (uint)(((fVar17 * fVar17 * auVar19._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar17
                      + fVar17) * auVar19._8_4_);
          auVar20._12_4_ =
               auVar12._12_4_ &
               (uint)(((fVar18 * fVar18 * auVar19._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar18
                      + fVar18) * auVar19._12_4_);
          auVar12 = vrcpps_avx(auVar11);
          auVar11 = vsubps_avx(auVar30,auVar20);
          fVar15 = auVar12._0_4_;
          fVar16 = auVar12._4_4_;
          fVar17 = auVar12._8_4_;
          fVar18 = auVar12._12_4_;
          auVar34._0_4_ = auVar11._0_4_ * ((fVar15 * fVar1 - _DAT_145fc6ed8) * fVar15 - fVar15);
          auVar34._4_4_ = auVar11._4_4_ * ((fVar16 * fVar2 - _DAT_145fc6ed8) * fVar16 - fVar16);
          auVar34._8_4_ = auVar11._8_4_ * ((fVar17 * fVar3 - _DAT_145fc6ed8) * fVar17 - fVar17);
          auVar34._12_4_ = auVar11._12_4_ * ((fVar18 * fVar4 - _DAT_145fc6ed8) * fVar18 - fVar18);
        }
        auVar35 = ZEXT1664(auVar34);
        FUN_144ea79f0(param_1,&fStack_98);
        auVar32._0_4_ = auVar35._0_4_ * auVar33._0_4_ + auVar31._0_4_;
        auVar32._4_4_ = auVar35._4_4_ * auVar33._4_4_ + auVar31._4_4_;
        auVar32._8_4_ = auVar35._8_4_ * auVar33._8_4_ + auVar31._8_4_;
        auVar32._12_4_ = auVar35._12_4_ * auVar33._12_4_ + auVar31._12_4_;
        auVar12 = vshufps_avx(auVar32,auVar32,0x55);
        auVar11 = vshufps_avx(auVar32,auVar32,0xaa);
        *param_4 = auVar11._0_4_ * fStack_78 +
                   auVar12._0_4_ * fStack_88 + fStack_98 * auVar32._0_4_ + fStack_68;
        param_4[1] = auVar11._4_4_ * fStack_74 +
                     auVar12._4_4_ * fStack_84 + fStack_94 * auVar32._0_4_ + fStack_64;
        param_4[2] = auVar11._8_4_ * fStack_70 +
                     auVar12._8_4_ * fStack_80 + fStack_90 * auVar32._0_4_ + fStack_60;
        param_4[3] = auVar11._12_4_ * fStack_6c +
                     auVar12._12_4_ * fStack_7c + fStack_8c * auVar32._0_4_ + fStack_5c;
        return 1;
      }
    }
  }
  return 0;
}

