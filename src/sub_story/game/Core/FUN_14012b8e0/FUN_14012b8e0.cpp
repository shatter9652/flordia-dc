// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012b8e0  size: 1897 bytes
// Name:    FUN_14012b8e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14012b8e0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
             float *param_4,undefined1 (*param_5) [16],undefined1 (*param_6) [16],float *param_7,
             float *param_8,int *param_9,int *param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  float fVar8;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [64];
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar45;
  float fVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  float fVar63;
  undefined1 auStack_108 [16];
  undefined1 aauStack_f8 [11] [16];
  undefined1 auVar33 [64];
  undefined1 auVar42 [64];
  undefined1 auVar49 [64];
  
  uVar5 = _DAT_145fc6f48;
  auVar37._4_4_ = _DAT_145fc6f00;
  auVar37._0_4_ = _DAT_145fc6f00;
  auVar37._8_4_ = _DAT_145fc6f00;
  auVar37._12_4_ = _DAT_145fc6f00;
  auVar42 = ZEXT1664(auVar37);
  *(undefined4 *)*param_5 = _DAT_145fc6f48;
  *(undefined4 *)(*param_5 + 4) = uVar5;
  *(undefined4 *)(*param_5 + 8) = uVar5;
  *(undefined4 *)(*param_5 + 0xc) = uVar5;
  *(undefined4 *)*param_6 = uVar5;
  *(undefined4 *)(*param_6 + 4) = uVar5;
  *(undefined4 *)(*param_6 + 8) = uVar5;
  *(undefined4 *)(*param_6 + 0xc) = uVar5;
  *param_9 = -1;
  *param_10 = -1;
  uVar4 = _DAT_145fc6f10;
  fVar14 = _DAT_145fc6f08;
  fVar36 = _DAT_145fc6ed8;
  auVar32._0_4_ = _DAT_145fc6edc * *(float *)*param_3;
  auVar32._4_4_ = _DAT_145fc6edc * *(float *)(*param_3 + 4);
  auVar32._8_4_ = _DAT_145fc6edc * *(float *)(*param_3 + 8);
  auVar32._12_4_ = _DAT_145fc6edc * *(float *)(*param_3 + 0xc);
  auVar33 = ZEXT1664(auVar32);
  auVar38 = *param_1;
  auVar30 = *param_2;
  fVar8 = *(float *)(*param_1 + 4);
  auVar47._4_4_ = fVar8;
  auVar47._0_4_ = fVar8;
  auVar47._8_4_ = fVar8;
  auVar47._12_4_ = fVar8;
  auVar49 = ZEXT1664(auVar47);
  auVar18 = vsubps_avx(auVar30,auVar38);
  fVar12 = auVar18._0_4_;
  auVar50._0_4_ = fVar12 * fVar12;
  fVar13 = auVar18._4_4_;
  auVar50._4_4_ = fVar13 * fVar13;
  fVar15 = auVar18._8_4_;
  auVar50._8_4_ = fVar15 * fVar15;
  fVar29 = auVar18._12_4_;
  auVar50._12_4_ = fVar29 * fVar29;
  auVar48 = vshufps_avx(auVar18,auVar18,0x55);
  auVar35 = ZEXT1664(auVar48);
  auVar28 = vshufps_avx(auVar50,auVar50,0xaa);
  auVar52._0_4_ = auVar50._0_4_ + auVar28._0_4_;
  auVar52._4_4_ = auVar50._0_4_ + auVar28._4_4_;
  auVar52._8_4_ = auVar50._0_4_ + auVar28._8_4_;
  auVar52._12_4_ = auVar50._0_4_ + auVar28._12_4_;
  auVar28 = vcmpps_avx(auVar37,auVar52,5);
  auVar20._0_4_ = *param_4 * *param_4;
  auVar20._4_4_ = param_4[1] * param_4[1];
  auVar20._8_4_ = param_4[2] * param_4[2];
  auVar20._12_4_ = param_4[3] * param_4[3];
  if ((((SUB161(auVar28 >> 0x1f,0) & 1) == 0 && (SUB161(auVar28 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar28 >> 0x5f,0) & 1) == 0) && -1 < auVar28[0xf]) {
    auVar28 = vshufps_avx(auVar18,auVar18,0xaa);
    fVar63 = auVar38._0_4_;
    auVar18 = vshufps_avx(auVar38,auVar38,0xaa);
    auVar62._0_4_ = auVar52._0_4_ * auVar20._0_4_;
    auVar62._4_4_ = auVar52._4_4_ * auVar20._4_4_;
    auVar62._8_4_ = auVar52._8_4_ * auVar20._8_4_;
    auVar62._12_4_ = auVar52._12_4_ * auVar20._12_4_;
    fVar55 = fVar12 * auVar18._0_4_ - auVar28._0_4_ * fVar63;
    fVar59 = fVar12 * auVar18._4_4_ - auVar28._4_4_ * fVar63;
    fVar60 = fVar12 * auVar18._8_4_ - auVar28._8_4_ * fVar63;
    fVar61 = fVar12 * auVar18._12_4_ - auVar28._12_4_ * fVar63;
    auVar56._0_4_ = fVar55 * fVar55;
    auVar56._4_4_ = fVar59 * fVar59;
    auVar56._8_4_ = fVar60 * fVar60;
    auVar56._12_4_ = fVar61 * fVar61;
    auVar30 = vcmpps_avx(auVar62,auVar56,5);
    if ((((SUB161(auVar30 >> 0x1f,0) & 1) == 0 && (SUB161(auVar30 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar30 >> 0x5f,0) & 1) == 0) && -1 < auVar30[0xf]) {
      return 0;
    }
    auVar9._0_4_ = fVar63 * fVar63;
    auVar9._4_4_ = auVar38._4_4_ * auVar38._4_4_;
    auVar9._8_4_ = auVar38._8_4_ * auVar38._8_4_;
    auVar9._12_4_ = auVar38._12_4_ * auVar38._12_4_;
    auVar38 = vshufps_avx(auVar9,auVar9,0xaa);
    auVar16._0_4_ = fVar12 * fVar63 + auVar18._0_4_ * auVar28._0_4_;
    auVar16._4_4_ = fVar12 * fVar63 + auVar18._4_4_ * auVar28._4_4_;
    auVar16._8_4_ = fVar12 * fVar63 + auVar18._8_4_ * auVar28._8_4_;
    auVar16._12_4_ = fVar12 * fVar63 + auVar18._12_4_ * auVar28._12_4_;
    auVar10._0_4_ = auVar38._0_4_ + auVar9._0_4_;
    auVar10._4_4_ = auVar38._4_4_ + auVar9._0_4_;
    auVar10._8_4_ = auVar38._8_4_ + auVar9._0_4_;
    auVar10._12_4_ = auVar38._12_4_ + auVar9._0_4_;
    auVar38 = vsubps_avx(auVar20,auVar10);
    auVar11._0_4_ = auVar16._0_4_ * auVar16._0_4_ + auVar52._0_4_ * auVar38._0_4_;
    auVar11._4_4_ = auVar16._4_4_ * auVar16._4_4_ + auVar52._4_4_ * auVar38._4_4_;
    auVar11._8_4_ = auVar16._8_4_ * auVar16._8_4_ + auVar52._8_4_ * auVar38._8_4_;
    auVar11._12_4_ = auVar16._12_4_ * auVar16._12_4_ + auVar52._12_4_ * auVar38._12_4_;
    auVar38 = vrsqrtps_avx(auVar11);
    fVar63 = auVar38._0_4_;
    fVar55 = auVar38._4_4_;
    fVar59 = auVar38._8_4_;
    fVar60 = auVar38._12_4_;
    auVar31._4_4_ = _DAT_146159bfc;
    auVar31._0_4_ = _DAT_146159bfc;
    auVar31._8_4_ = _DAT_146159bfc;
    auVar31._12_4_ = _DAT_146159bfc;
    auVar38 = vcmpps_avx(auVar31,auVar11,2);
    auVar30 = vcmpps_avx(auVar11,ZEXT416(0) << 0x20,5);
    auVar57._0_4_ =
         (float)((uint)(((_DAT_145fc6f08 * fVar63 * fVar63 * auVar11._0_4_ - _DAT_145fc6f08) *
                         fVar63 + fVar63) * auVar11._0_4_) & auVar38._0_4_ & auVar30._0_4_);
    auVar57._4_4_ =
         (float)((uint)(((_DAT_145fc6f08 * fVar55 * fVar55 * auVar11._4_4_ - _DAT_145fc6f08) *
                         fVar55 + fVar55) * auVar11._4_4_) & auVar38._4_4_ & auVar30._4_4_);
    auVar57._8_4_ =
         (float)((uint)(((_DAT_145fc6f08 * fVar59 * fVar59 * auVar11._8_4_ - _DAT_145fc6f08) *
                         fVar59 + fVar59) * auVar11._8_4_) & auVar38._8_4_ & auVar30._8_4_);
    auVar57._12_4_ =
         (float)((uint)(((_DAT_145fc6f08 * fVar60 * fVar60 * auVar11._12_4_ - _DAT_145fc6f08) *
                         fVar60 + fVar60) * auVar11._12_4_) & auVar38._12_4_ & auVar30._12_4_);
    auVar38 = vrcpps_avx(auVar52);
    auVar30 = vsubps_avx(auVar57,auVar16);
    fVar55 = auVar38._0_4_;
    fVar59 = auVar38._4_4_;
    fVar60 = auVar38._8_4_;
    fVar63 = auVar38._12_4_;
    fVar55 = -((auVar52._0_4_ * fVar55 - _DAT_145fc6ed8) * fVar55) + fVar55;
    fVar59 = -((auVar52._4_4_ * fVar59 - _DAT_145fc6ed8) * fVar59) + fVar59;
    fVar60 = -((auVar52._8_4_ * fVar60 - _DAT_145fc6ed8) * fVar60) + fVar60;
    fVar63 = -((auVar52._12_4_ * fVar63 - _DAT_145fc6ed8) * fVar63) + fVar63;
    fVar61 = (float)((uint)fVar59 ^ _DAT_145fc6f10);
    fVar45 = (float)((uint)fVar60 ^ _DAT_145fc6f10);
    fVar46 = (float)((uint)fVar63 ^ _DAT_145fc6f10);
    auVar58._0_4_ = _DAT_145fc6f10 ^ (uint)auVar32._0_4_;
    auVar58._4_4_ = _DAT_145fc6f10 ^ (uint)auVar32._4_4_;
    auVar58._8_4_ = _DAT_145fc6f10 ^ (uint)auVar32._8_4_;
    auVar58._12_4_ = _DAT_145fc6f10 ^ (uint)auVar32._12_4_;
    *(float *)*param_5 = (auVar57._0_4_ + auVar16._0_4_) * (float)((uint)fVar55 ^ _DAT_145fc6f10);
    *(float *)(*param_5 + 4) = (auVar57._4_4_ + auVar16._4_4_) * fVar61;
    *(float *)(*param_5 + 8) = (auVar57._8_4_ + auVar16._8_4_) * fVar45;
    *(float *)(*param_5 + 0xc) = (auVar57._12_4_ + auVar16._12_4_) * fVar46;
    fVar55 = fVar55 * auVar30._0_4_;
    fVar59 = fVar59 * auVar30._4_4_;
    fVar60 = fVar60 * auVar30._8_4_;
    fVar63 = fVar63 * auVar30._12_4_;
    *(float *)*param_6 = fVar55;
    *(float *)(*param_6 + 4) = fVar59;
    *(float *)(*param_6 + 8) = fVar60;
    *(float *)(*param_6 + 0xc) = fVar63;
    auVar17._0_4_ = *(float *)*param_5 * auVar48._0_4_ + fVar8;
    auVar17._4_4_ = *(float *)(*param_5 + 4) * auVar48._4_4_ + fVar8;
    auVar17._8_4_ = *(float *)(*param_5 + 8) * auVar48._8_4_ + fVar8;
    auVar17._12_4_ = *(float *)(*param_5 + 0xc) * auVar48._12_4_ + fVar8;
    auVar34._0_4_ = fVar55 * auVar48._0_4_ + fVar8;
    auVar34._4_4_ = fVar59 * auVar48._4_4_ + fVar8;
    auVar34._8_4_ = fVar60 * auVar48._8_4_ + fVar8;
    auVar34._12_4_ = fVar63 * auVar48._12_4_ + fVar8;
    auVar38 = vcmpps_avx(auVar58,auVar17,6);
    auVar30 = vcmpps_avx(auVar17,auVar32,6);
    auVar38 = auVar38 | auVar30;
    if ((((SUB161(auVar38 >> 0x1f,0) & 1) == 0 && (SUB161(auVar38 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar38 >> 0x5f,0) & 1) == 0) && -1 < auVar38[0xf]) {
      *param_9 = 2;
    }
    auVar38 = vcmpps_avx(auVar58,auVar34,6);
    auVar30 = vcmpps_avx(auVar34,auVar32,6);
    auVar38 = auVar38 | auVar30;
    if (((((SUB161(auVar38 >> 0x1f,0) & 1) != 0 || (SUB161(auVar38 >> 0x3f,0) & 1) != 0) ||
         (SUB161(auVar38 >> 0x5f,0) & 1) != 0) || auVar38[0xf] < '\0') ||
       (*param_10 = 2, *param_9 != 2)) {
      auVar38 = vshufps_avx(auVar50,auVar50,0x55);
      auVar48._0_4_ = auVar52._0_4_ + auVar38._0_4_;
      auVar48._4_4_ = auVar52._4_4_ + auVar38._4_4_;
      auVar48._8_4_ = auVar52._8_4_ + auVar38._8_4_;
      auVar48._12_4_ = auVar52._12_4_ + auVar38._12_4_;
      auVar38 = vrcpps_avx(auVar48);
      fVar8 = auVar38._0_4_;
      fVar63 = auVar38._4_4_;
      fVar55 = auVar38._8_4_;
      fVar59 = auVar38._12_4_;
      fVar8 = -((auVar48._0_4_ * fVar8 - fVar36) * fVar8) + fVar8;
      fVar63 = -((auVar48._4_4_ * fVar63 - fVar36) * fVar63) + fVar63;
      fVar55 = -((auVar48._8_4_ * fVar55 - fVar36) * fVar55) + fVar55;
      fVar59 = -((auVar48._12_4_ * fVar59 - fVar36) * fVar59) + fVar59;
      auVar38 = vcmpps_avx(auVar17,auVar58,5);
      iVar7 = vmovmskps_avx(auVar38);
      auVar38 = vcmpps_avx(auVar34,auVar58,5);
      uVar5 = vmovmskps_avx(auVar38);
      if ((iVar7 == 0) || ((char)uVar5 == '\0')) {
        fVar36 = auVar32._0_4_ * (float)_DAT_146159bc0 + *(float *)*param_1;
        fVar60 = auVar32._4_4_ * (float)((ulonglong)_DAT_146159bc0 >> 0x20) +
                 *(float *)(*param_1 + 4);
        fVar61 = auVar32._8_4_ * 0.0 + *(float *)(*param_1 + 8);
        fVar45 = auVar32._12_4_ * 0.0 + *(float *)(*param_1 + 0xc);
        auVar43._0_4_ = fVar36 * fVar36;
        auVar43._4_4_ = fVar60 * fVar60;
        auVar43._8_4_ = fVar61 * fVar61;
        auVar43._12_4_ = fVar45 * fVar45;
        auVar39._0_4_ = fVar36 * fVar12;
        auVar39._4_4_ = fVar60 * fVar13;
        auVar39._8_4_ = fVar61 * fVar15;
        auVar39._12_4_ = fVar45 * fVar29;
        auVar38 = vblendps_avx(auVar43,ZEXT416(0) << 0x20,8);
        auVar30 = vblendps_avx(auVar39,ZEXT416(0) << 0x20,8);
        auVar38 = vhaddps_avx(auVar38,auVar38);
        auVar30 = vhaddps_avx(auVar30,auVar30);
        auVar38 = vhaddps_avx(auVar38,auVar38);
        auVar30 = vhaddps_avx(auVar30,auVar30);
        auVar38 = vsubps_avx(auVar20,auVar38);
        auVar40._4_4_ = _DAT_14615a034;
        auVar40._0_4_ = _DAT_14615a034;
        auVar40._8_4_ = _DAT_14615a034;
        auVar40._12_4_ = _DAT_14615a034;
        fVar36 = auVar30._0_4_;
        auVar53._0_4_ = fVar36 * fVar36 + auVar38._0_4_ * auVar48._0_4_;
        fVar60 = auVar30._4_4_;
        auVar53._4_4_ = fVar60 * fVar60 + auVar38._4_4_ * auVar48._4_4_;
        fVar61 = auVar30._8_4_;
        auVar53._8_4_ = fVar61 * fVar61 + auVar38._8_4_ * auVar48._8_4_;
        fVar45 = auVar30._12_4_;
        auVar53._12_4_ = fVar45 * fVar45 + auVar38._12_4_ * auVar48._12_4_;
        auVar38 = vcmpps_avx(auVar40,auVar53,5);
        if ((((SUB161(auVar38 >> 0x1f,0) & 1) == 0 && (SUB161(auVar38 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar38 >> 0x5f,0) & 1) == 0) && -1 < auVar38[0xf]) {
          auVar38 = vrsqrtps_avx(auVar53);
          fVar46 = auVar38._0_4_;
          fVar1 = auVar38._4_4_;
          fVar2 = auVar38._8_4_;
          fVar3 = auVar38._12_4_;
          auVar38 = vcmpps_avx(auVar31,auVar53,2);
          auVar54._0_4_ =
               (float)(auVar38._0_4_ &
                      (uint)(((fVar14 * fVar46 * fVar46 * auVar53._0_4_ - fVar14) * fVar46 + fVar46)
                            * auVar53._0_4_));
          auVar54._4_4_ =
               (float)(auVar38._4_4_ &
                      (uint)(((fVar14 * fVar1 * fVar1 * auVar53._4_4_ - fVar14) * fVar1 + fVar1) *
                            auVar53._4_4_));
          auVar54._8_4_ =
               (float)(auVar38._8_4_ &
                      (uint)(((fVar14 * fVar2 * fVar2 * auVar53._8_4_ - fVar14) * fVar2 + fVar2) *
                            auVar53._8_4_));
          auVar54._12_4_ =
               (float)(auVar38._12_4_ &
                      (uint)(((fVar14 * fVar3 * fVar3 * auVar53._12_4_ - fVar14) * fVar3 + fVar3) *
                            auVar53._12_4_));
          if ((char)iVar7 == '\0') {
            *param_9 = 0;
            *(float *)*param_5 = (auVar54._0_4_ + fVar36) * (float)(uVar4 ^ (uint)fVar8);
            *(float *)(*param_5 + 4) = (auVar54._4_4_ + fVar60) * (float)(uVar4 ^ (uint)fVar63);
            *(float *)(*param_5 + 8) = (auVar54._8_4_ + fVar61) * (float)(uVar4 ^ (uint)fVar55);
            *(float *)(*param_5 + 0xc) = (auVar54._12_4_ + fVar45) * (float)(uVar4 ^ (uint)fVar59);
          }
          if ((char)uVar5 == '\0') {
            auVar38 = vsubps_avx(auVar54,auVar30);
            *param_10 = 0;
            *(float *)*param_6 = auVar38._0_4_ * fVar8;
            *(float *)(*param_6 + 4) = auVar38._4_4_ * fVar63;
            *(float *)(*param_6 + 8) = auVar38._8_4_ * fVar55;
            *(float *)(*param_6 + 0xc) = auVar38._12_4_ * fVar59;
          }
        }
      }
      auVar38 = vcmpps_avx(auVar32,auVar17,5);
      auVar30 = vcmpps_avx(auVar32,auVar34,5);
      iVar7 = vmovmskps_avx(auVar38);
      uVar5 = vmovmskps_avx(auVar30);
      if ((iVar7 == 0) || ((char)uVar5 == '\0')) {
        auVar51._0_12_ = ZEXT812(0);
        auVar51._12_4_ = 0;
        fVar36 = auVar32._0_4_ * _DAT_14615bd00 + *(float *)*param_1;
        fVar60 = auVar32._4_4_ * _UNK_14615bd04 + *(float *)(*param_1 + 4);
        fVar61 = auVar32._8_4_ * _UNK_14615bd08 + *(float *)(*param_1 + 8);
        fVar45 = auVar32._12_4_ * _UNK_14615bd0c + *(float *)(*param_1 + 0xc);
        auVar44._0_4_ = fVar36 * fVar36;
        auVar44._4_4_ = fVar60 * fVar60;
        auVar44._8_4_ = fVar61 * fVar61;
        auVar44._12_4_ = fVar45 * fVar45;
        auVar26._0_4_ = fVar36 * fVar12;
        auVar26._4_4_ = fVar60 * fVar13;
        auVar26._8_4_ = fVar61 * fVar15;
        auVar26._12_4_ = fVar45 * fVar29;
        auVar41._4_4_ = _DAT_14615a034;
        auVar41._0_4_ = _DAT_14615a034;
        auVar41._8_4_ = _DAT_14615a034;
        auVar41._12_4_ = _DAT_14615a034;
        auVar38 = vblendps_avx(auVar44,auVar51,8);
        auVar30 = vblendps_avx(auVar26,auVar51,8);
        auVar38 = vhaddps_avx(auVar38,auVar38);
        auVar30 = vhaddps_avx(auVar30,auVar30);
        auVar38 = vhaddps_avx(auVar38,auVar38);
        auVar30 = vhaddps_avx(auVar30,auVar30);
        auVar38 = vsubps_avx(auVar20,auVar38);
        fVar12 = auVar30._0_4_;
        auVar21._0_4_ = fVar12 * fVar12 + auVar48._0_4_ * auVar38._0_4_;
        fVar13 = auVar30._4_4_;
        auVar21._4_4_ = fVar13 * fVar13 + auVar48._4_4_ * auVar38._4_4_;
        fVar15 = auVar30._8_4_;
        auVar21._8_4_ = fVar15 * fVar15 + auVar48._8_4_ * auVar38._8_4_;
        fVar29 = auVar30._12_4_;
        auVar21._12_4_ = fVar29 * fVar29 + auVar48._12_4_ * auVar38._12_4_;
        auVar38 = vcmpps_avx(auVar41,auVar21,5);
        if ((((SUB161(auVar38 >> 0x1f,0) & 1) == 0 && (SUB161(auVar38 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar38 >> 0x5f,0) & 1) == 0) && -1 < auVar38[0xf]) {
          auVar38 = vrsqrtps_avx(auVar21);
          fVar36 = auVar38._0_4_;
          fVar60 = auVar38._4_4_;
          fVar61 = auVar38._8_4_;
          fVar45 = auVar38._12_4_;
          auVar38 = vcmpps_avx(auVar31,auVar21,2);
          auVar22._0_4_ =
               (float)(auVar38._0_4_ &
                      (uint)(((fVar36 * fVar36 * auVar21._0_4_ * fVar14 - fVar14) * fVar36 + fVar36)
                            * auVar21._0_4_));
          auVar22._4_4_ =
               (float)(auVar38._4_4_ &
                      (uint)(((fVar60 * fVar60 * auVar21._4_4_ * fVar14 - fVar14) * fVar60 + fVar60)
                            * auVar21._4_4_));
          auVar22._8_4_ =
               (float)(auVar38._8_4_ &
                      (uint)(((fVar61 * fVar61 * auVar21._8_4_ * fVar14 - fVar14) * fVar61 + fVar61)
                            * auVar21._8_4_));
          auVar22._12_4_ =
               (float)(auVar38._12_4_ &
                      (uint)(((fVar45 * fVar45 * auVar21._12_4_ * fVar14 - fVar14) * fVar45 + fVar45
                             ) * auVar21._12_4_));
          if ((char)iVar7 == '\0') {
            *param_9 = 1;
            *(float *)*param_5 = (auVar22._0_4_ + fVar12) * (float)(uVar4 ^ (uint)fVar8);
            *(float *)(*param_5 + 4) = (auVar22._4_4_ + fVar13) * (float)(uVar4 ^ (uint)fVar63);
            *(float *)(*param_5 + 8) = (auVar22._8_4_ + fVar15) * (float)(uVar4 ^ (uint)fVar55);
            *(float *)(*param_5 + 0xc) = (auVar22._12_4_ + fVar29) * (float)(uVar4 ^ (uint)fVar59);
          }
          auVar37._4_4_ = _DAT_145fc6f00;
          auVar37._0_4_ = _DAT_145fc6f00;
          auVar37._8_4_ = _DAT_145fc6f00;
          auVar37._12_4_ = _DAT_145fc6f00;
          if ((char)uVar5 == '\0') {
            auVar38 = vsubps_avx(auVar22,auVar30);
            *param_10 = 1;
            fVar8 = auVar38._0_4_ * fVar8;
            fVar63 = auVar38._4_4_ * fVar63;
            fVar55 = auVar38._8_4_ * fVar55;
            fVar59 = auVar38._12_4_ * fVar59;
            goto LAB_14012bd5b;
          }
          goto LAB_14012bc2f;
        }
      }
      auVar37._4_4_ = _DAT_145fc6f00;
      auVar37._0_4_ = _DAT_145fc6f00;
      auVar37._8_4_ = _DAT_145fc6f00;
      auVar37._12_4_ = _DAT_145fc6f00;
      goto LAB_14012bc2f;
    }
    auVar38 = *param_3;
    auVar37._4_4_ = _DAT_145fc6f00;
    auVar37._0_4_ = _DAT_145fc6f00;
    auVar37._8_4_ = _DAT_145fc6f00;
    auVar37._12_4_ = _DAT_145fc6f00;
    auVar30 = vrcpps_avx(auVar38);
    fVar8 = auVar30._0_4_;
    fVar12 = auVar30._4_4_;
    fVar13 = auVar30._8_4_;
    fVar15 = auVar30._12_4_;
    fVar8 = -((auVar38._0_4_ * fVar8 - fVar36) * fVar8) + fVar8;
    fVar12 = -((auVar38._4_4_ * fVar12 - fVar36) * fVar12) + fVar12;
    fVar13 = -((auVar38._8_4_ * fVar13 - fVar36) * fVar13) + fVar13;
    fVar15 = -((auVar38._12_4_ * fVar15 - fVar36) * fVar15) + fVar15;
  }
  else {
    auVar28 = vcmpps_avx(auVar37,auVar48,5);
    if ((((SUB161(auVar28 >> 0x1f,0) & 1) != 0 || (SUB161(auVar28 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar28 >> 0x5f,0) & 1) != 0) || auVar28[0xf] < '\0') {
      auVar28._4_4_ = _DAT_146159f9c;
      auVar28._0_4_ = _DAT_146159f9c;
      auVar28._8_4_ = _DAT_146159f9c;
      auVar28._12_4_ = _DAT_146159f9c;
      auVar28 = vcmpps_avx(auVar48,auVar28,5);
      uVar5 = vmovmskps_avx(auVar28);
      if ((char)uVar5 != '\0') {
        return 0;
      }
    }
    auVar18._0_4_ = auVar30._0_4_ * auVar30._0_4_;
    auVar18._4_4_ = auVar30._4_4_ * auVar30._4_4_;
    auVar18._8_4_ = auVar30._8_4_ * auVar30._8_4_;
    auVar18._12_4_ = auVar30._12_4_ * auVar30._12_4_;
    auVar30 = vshufps_avx(auVar18,auVar18,0xaa);
    auVar19._0_4_ = auVar30._0_4_ + auVar18._0_4_;
    auVar19._4_4_ = auVar30._4_4_ + auVar18._0_4_;
    auVar19._8_4_ = auVar30._8_4_ + auVar18._0_4_;
    auVar19._12_4_ = auVar30._12_4_ + auVar18._0_4_;
    auVar28 = vsubps_avx(auVar20,auVar19);
    auVar30._4_4_ = _DAT_14615a034;
    auVar30._0_4_ = _DAT_14615a034;
    auVar30._8_4_ = _DAT_14615a034;
    auVar30._12_4_ = _DAT_14615a034;
    auVar30 = vcmpps_avx(auVar28,auVar30,6);
    if ((((SUB161(auVar30 >> 0x1f,0) & 1) == 0 && (SUB161(auVar30 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar30 >> 0x5f,0) & 1) == 0) && -1 < auVar30[0xf]) {
      return 0;
    }
    auVar18 = vrsqrtps_avx(auVar28);
    auVar30 = vmovshdup_avx(auVar38);
    fVar8 = auVar18._0_4_;
    fVar12 = auVar18._4_4_;
    fVar13 = auVar18._8_4_;
    fVar15 = auVar18._12_4_;
    auVar38._4_4_ = _DAT_146159bfc;
    auVar38._0_4_ = _DAT_146159bfc;
    auVar38._8_4_ = _DAT_146159bfc;
    auVar38._12_4_ = _DAT_146159bfc;
    auVar38 = vcmpps_avx(auVar38,auVar28,2);
    auStack_108._0_4_ =
         (float)(auVar38._0_4_ &
                (uint)(((fVar8 * fVar8 * auVar28._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar8 +
                       fVar8) * auVar28._0_4_)) + auVar32._0_4_;
    auStack_108._4_4_ =
         (float)(auVar38._4_4_ &
                (uint)(((fVar12 * fVar12 * auVar28._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar12
                       + fVar12) * auVar28._4_4_)) + auVar32._4_4_;
    auStack_108._8_4_ =
         (float)(auVar38._8_4_ &
                (uint)(((fVar13 * fVar13 * auVar28._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar13
                       + fVar13) * auVar28._8_4_)) + auVar32._8_4_;
    auStack_108._12_4_ =
         (float)(auVar38._12_4_ &
                (uint)(((fVar15 * fVar15 * auVar28._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                        fVar15 + fVar15) * auVar28._12_4_)) + auVar32._12_4_;
    aauStack_f8[0]._0_4_ = (uint)auStack_108._0_4_ ^ _DAT_145fc6f10;
    aauStack_f8[0]._4_4_ = (uint)auStack_108._4_4_ ^ _DAT_145fc6f10;
    aauStack_f8[0]._8_4_ = (uint)auStack_108._8_4_ ^ _DAT_145fc6f10;
    aauStack_f8[0]._12_4_ = (uint)auStack_108._12_4_ ^ _DAT_145fc6f10;
    *param_9 = 0;
    *param_10 = 1;
    if (*(float *)(*param_2 + 4) < auVar30._0_4_) {
      func_0x000140135d00(aauStack_f8,auStack_108);
      func_0x000144f67a40(param_9,param_10);
      auVar32 = auVar33._0_16_;
      auVar37 = auVar42._0_16_;
      auVar48 = auVar35._0_16_;
      auVar47 = auVar49._0_16_;
    }
    auVar38 = vrcpps_avx(auVar48);
    fVar8 = auVar38._0_4_;
    fVar63 = auVar38._4_4_;
    fVar55 = auVar38._8_4_;
    fVar59 = auVar38._12_4_;
    fVar8 = -((fVar8 * auVar48._0_4_ - _DAT_145fc6ed8) * fVar8) + fVar8;
    fVar63 = -((fVar63 * auVar48._4_4_ - _DAT_145fc6ed8) * fVar63) + fVar63;
    fVar55 = -((fVar55 * auVar48._8_4_ - _DAT_145fc6ed8) * fVar55) + fVar55;
    fVar59 = -((fVar59 * auVar48._12_4_ - _DAT_145fc6ed8) * fVar59) + fVar59;
    auVar38 = vsubps_avx(aauStack_f8[0],auVar47);
    *(float *)*param_5 = auVar38._0_4_ * fVar8;
    *(float *)(*param_5 + 4) = auVar38._4_4_ * fVar63;
    *(float *)(*param_5 + 8) = auVar38._8_4_ * fVar55;
    *(float *)(*param_5 + 0xc) = auVar38._12_4_ * fVar59;
    auVar38 = vsubps_avx(auStack_108,auVar47);
    fVar8 = auVar38._0_4_ * fVar8;
    fVar63 = auVar38._4_4_ * fVar63;
    fVar55 = auVar38._8_4_ * fVar55;
    fVar59 = auVar38._12_4_ * fVar59;
    auVar34 = auStack_108;
    auVar17 = aauStack_f8[0];
LAB_14012bd5b:
    *(float *)*param_6 = fVar8;
    *(float *)(*param_6 + 4) = fVar63;
    *(float *)(*param_6 + 8) = fVar55;
    *(float *)(*param_6 + 0xc) = fVar59;
LAB_14012bc2f:
    auVar38 = *param_3;
    auVar30 = vrcpps_avx(auVar38);
    fVar8 = auVar30._0_4_;
    fVar12 = auVar30._4_4_;
    fVar13 = auVar30._8_4_;
    fVar15 = auVar30._12_4_;
    fVar8 = -((auVar38._0_4_ * fVar8 - _DAT_145fc6ed8) * fVar8) + fVar8;
    fVar12 = -((auVar38._4_4_ * fVar12 - _DAT_145fc6ed8) * fVar12) + fVar12;
    fVar13 = -((auVar38._8_4_ * fVar13 - _DAT_145fc6ed8) * fVar13) + fVar13;
    fVar15 = -((auVar38._12_4_ * fVar15 - _DAT_145fc6ed8) * fVar15) + fVar15;
    if (*param_9 == -1) goto LAB_14012be83;
  }
  auVar24._0_12_ = ZEXT812(0);
  auVar24._12_4_ = 0;
  auVar30 = vcmpps_avx(auVar24,*param_5,6);
  auVar25._4_4_ = _DAT_145fc6ed8;
  auVar25._0_4_ = _DAT_145fc6ed8;
  auVar25._8_4_ = _DAT_145fc6ed8;
  auVar25._12_4_ = _DAT_145fc6ed8;
  auVar28 = vcmpps_avx(*param_5,auVar25,6);
  auVar30 = auVar30 | auVar28;
  if ((((SUB161(auVar30 >> 0x1f,0) & 1) == 0 && (SUB161(auVar30 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar30 >> 0x5f,0) & 1) == 0) && -1 < auVar30[0xf]) {
    auVar38 = vcmpps_avx(auVar37,auVar38,5);
    fVar29 = _DAT_145fc6edc;
    fVar36 = _DAT_145fc6edc;
    fVar14 = _DAT_145fc6edc;
    fVar63 = _DAT_145fc6edc;
    if ((((SUB161(auVar38 >> 0x1f,0) & 1) == 0 && (SUB161(auVar38 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar38 >> 0x5f,0) & 1) == 0) && -1 < auVar38[0xf]) {
      fVar29 = (auVar17._0_4_ + auVar32._0_4_) * fVar8;
      fVar36 = (auVar17._4_4_ + auVar32._4_4_) * fVar12;
      fVar14 = (auVar17._8_4_ + auVar32._8_4_) * fVar13;
      fVar63 = (auVar17._12_4_ + auVar32._12_4_) * fVar15;
    }
    *param_7 = fVar29;
    param_7[1] = fVar36;
    param_7[2] = fVar14;
    param_7[3] = fVar63;
    if (*param_10 == -1) {
      return 1;
    }
    auVar38 = vcmpps_avx(ZEXT816(0) << 0x20,*param_6,6);
    auVar30 = vcmpps_avx(*param_6,auVar25,6);
    auVar38 = auVar38 | auVar30;
    if ((((SUB161(auVar38 >> 0x1f,0) & 1) != 0 || (SUB161(auVar38 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar38 >> 0x5f,0) & 1) != 0) || auVar38[0xf] < '\0') {
      return 1;
    }
    auVar38 = vcmpps_avx(auVar37,*param_3,5);
    fVar29 = _DAT_145fc6edc;
    fVar36 = _DAT_145fc6edc;
    fVar14 = _DAT_145fc6edc;
    fVar63 = _DAT_145fc6edc;
    if ((((SUB161(auVar38 >> 0x1f,0) & 1) == 0 && (SUB161(auVar38 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar38 >> 0x5f,0) & 1) == 0) && -1 < auVar38[0xf]) {
      fVar29 = (auVar34._0_4_ + auVar32._0_4_) * fVar8;
      fVar36 = (auVar34._4_4_ + auVar32._4_4_) * fVar12;
      fVar14 = (auVar34._8_4_ + auVar32._8_4_) * fVar13;
      fVar63 = (auVar34._12_4_ + auVar32._12_4_) * fVar15;
    }
    *param_8 = fVar29;
    param_8[1] = fVar36;
    param_8[2] = fVar14;
    param_8[3] = fVar63;
    auVar38 = vcmpps_avx(*param_6,*param_5,5);
    if ((((SUB161(auVar38 >> 0x1f,0) & 1) != 0 || (SUB161(auVar38 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar38 >> 0x5f,0) & 1) != 0) || auVar38[0xf] < '\0') {
      return 2;
    }
    func_0x000140135d00(param_5,param_6);
    func_0x000140135d00(param_7,param_8);
    func_0x000144f67a40(param_9,param_10);
    return 2;
  }
LAB_14012be83:
  uVar6 = 0;
  if (*param_10 != -1) {
    auVar27._4_4_ = _DAT_145fc6ed8;
    auVar27._0_4_ = _DAT_145fc6ed8;
    auVar27._8_4_ = _DAT_145fc6ed8;
    auVar27._12_4_ = _DAT_145fc6ed8;
    auVar23._0_12_ = ZEXT812(0);
    auVar23._12_4_ = 0;
    auVar38 = vcmpps_avx(auVar23,*param_6,6);
    auVar30 = vcmpps_avx(*param_6,auVar27,6);
    auVar38 = auVar38 | auVar30;
    if ((((SUB161(auVar38 >> 0x1f,0) & 1) == 0 && (SUB161(auVar38 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar38 >> 0x5f,0) & 1) == 0) && -1 < auVar38[0xf]) {
      uVar6 = *(undefined8 *)(*param_6 + 8);
      *(undefined8 *)*param_5 = *(undefined8 *)*param_6;
      *(undefined8 *)(*param_5 + 8) = uVar6;
      auVar38 = vcmpps_avx(auVar37,*param_3,5);
      fVar29 = _DAT_145fc6edc;
      fVar36 = _DAT_145fc6edc;
      fVar14 = _DAT_145fc6edc;
      fVar63 = _DAT_145fc6edc;
      if ((((SUB161(auVar38 >> 0x1f,0) & 1) == 0 && (SUB161(auVar38 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar38 >> 0x5f,0) & 1) == 0) && -1 < auVar38[0xf]) {
        fVar29 = (auVar34._0_4_ + auVar32._0_4_) * fVar8;
        fVar36 = (auVar34._4_4_ + auVar32._4_4_) * fVar12;
        fVar14 = (auVar34._8_4_ + auVar32._8_4_) * fVar13;
        fVar63 = (auVar34._12_4_ + auVar32._12_4_) * fVar15;
      }
      *param_7 = fVar29;
      param_7[1] = fVar36;
      param_7[2] = fVar14;
      param_7[3] = fVar63;
      *param_9 = *param_10;
      uVar6 = 1;
    }
  }
  return uVar6;
}

