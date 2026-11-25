// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002ba70  size: 642 bytes
// Name:    FUN_14002ba70
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
FUN_14002ba70(undefined1 (*param_1) [16],float *param_2,undefined1 (*param_3) [16],float *param_4,
             float param_5,float *param_6,float *param_7)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar5;
  undefined1 auVar4 [16];
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  uVar1 = _DAT_145fc6f10;
  fVar7 = _DAT_145fc6ed8;
  fVar25 = *param_4;
  fVar26 = param_4[1];
  fVar27 = param_4[2];
  fVar5 = param_4[3];
  auVar15._0_12_ = ZEXT812(0);
  auVar15._12_4_ = 0;
  auVar18 = vsubps_avx(*param_1,*param_3);
  auVar4._0_4_ = fVar25 * fVar25;
  auVar4._4_4_ = fVar26 * fVar26;
  auVar4._8_4_ = fVar27 * fVar27;
  auVar4._12_4_ = fVar5 * fVar5;
  auVar14._0_4_ = *param_2 * fVar25;
  auVar14._4_4_ = param_2[1] * fVar26;
  auVar14._8_4_ = param_2[2] * fVar27;
  auVar14._12_4_ = param_2[3] * fVar5;
  auVar4 = vblendps_avx(auVar4,auVar15,8);
  auVar14 = vblendps_avx(auVar14,auVar15,8);
  auVar17._0_4_ = auVar18._0_4_ * fVar25;
  auVar17._4_4_ = auVar18._4_4_ * fVar26;
  auVar17._8_4_ = auVar18._8_4_ * fVar27;
  auVar17._12_4_ = auVar18._12_4_ * fVar5;
  auVar11 = vhaddps_avx(auVar4,auVar4);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar4 = vblendps_avx(auVar17,auVar15,8);
  auVar4 = vhaddps_avx(auVar4,auVar4);
  auVar11 = vhaddps_avx(auVar11,auVar11);
  auVar17 = vhaddps_avx(auVar14,auVar14);
  auVar12 = vhaddps_avx(auVar4,auVar4);
  fVar9 = auVar11._0_4_;
  fVar3 = _DAT_145fc6ed8 / fVar9;
  fVar6 = auVar17._0_4_;
  fVar28 = fVar6 * fVar3;
  fVar21 = -(fVar25 * fVar28) + *param_2;
  fVar22 = -(fVar26 * fVar28) + param_2[1];
  fVar23 = -(fVar27 * fVar28) + param_2[2];
  fVar24 = -(fVar5 * fVar28) + param_2[3];
  fVar16 = auVar12._0_4_;
  fVar28 = fVar16 * fVar3;
  fVar25 = -(fVar25 * fVar28) + auVar18._0_4_;
  fVar26 = -(fVar26 * fVar28) + auVar18._4_4_;
  fVar27 = -(fVar27 * fVar28) + auVar18._8_4_;
  fVar28 = -(fVar5 * fVar28) + auVar18._12_4_;
  auVar18._0_4_ = fVar21 * fVar21;
  auVar18._4_4_ = fVar22 * fVar22;
  auVar18._8_4_ = fVar23 * fVar23;
  auVar18._12_4_ = fVar24 * fVar24;
  auVar4 = vblendps_avx(auVar18,auVar15,8);
  auVar4 = vhaddps_avx(auVar4,auVar4);
  auVar20._0_4_ = fVar25 * fVar25;
  auVar20._4_4_ = fVar26 * fVar26;
  auVar20._8_4_ = fVar27 * fVar27;
  auVar20._12_4_ = fVar28 * fVar28;
  auVar18 = vhaddps_avx(auVar4,auVar4);
  auVar19._0_4_ = fVar25 * fVar21;
  auVar19._4_4_ = fVar26 * fVar22;
  auVar19._8_4_ = fVar27 * fVar23;
  auVar19._12_4_ = fVar28 * fVar24;
  auVar4 = vblendps_avx(auVar19,auVar15,8);
  auVar14 = vblendps_avx(auVar20,auVar15,8);
  auVar4 = vhaddps_avx(auVar4,auVar4);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar4 = vhaddps_avx(auVar4,auVar4);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  fVar28 = param_5 * param_5;
  fVar25 = auVar4._0_4_;
  fVar26 = auVar18._0_4_ * (fVar28 - auVar14._0_4_) + fVar25 * fVar25;
  if (fVar26 < 0.0) {
LAB_14002bcd9:
    uVar2 = 0;
  }
  else {
    fVar26 = (float)((uint)(SQRT(fVar26) + fVar25) ^ _DAT_145fc6f10) / auVar18._0_4_;
    fVar25 = fVar26 * fVar6 + fVar16;
    *param_6 = fVar26;
    if ((fVar25 <= 0.0) || (fVar9 <= fVar25)) {
      if (0.0 < fVar25) {
        auVar4 = vsubps_avx(auVar11,auVar12);
        auVar4 = vdivps_avx(auVar4,auVar17);
        fVar25 = auVar4._0_4_;
        *param_6 = fVar25;
        auVar11._0_4_ = fVar25 * *param_2 + *(float *)*param_1;
        auVar11._4_4_ = fVar25 * param_2[1] + *(float *)(*param_1 + 4);
        auVar11._8_4_ = fVar25 * param_2[2] + *(float *)(*param_1 + 8);
        auVar11._12_4_ = fVar25 * param_2[3] + *(float *)(*param_1 + 0xc);
        auVar13._0_4_ = *param_4 + *(float *)*param_3;
        auVar13._4_4_ = param_4[1] + *(float *)(*param_3 + 4);
        auVar13._8_4_ = param_4[2] + *(float *)(*param_3 + 8);
        auVar13._12_4_ = param_4[3] + *(float *)(*param_3 + 0xc);
        auVar4 = vsubps_avx(auVar11,auVar13);
        auVar12._0_4_ = auVar4._0_4_ * auVar4._0_4_;
        auVar12._4_4_ = auVar4._4_4_ * auVar4._4_4_;
        auVar12._8_4_ = auVar4._8_4_ * auVar4._8_4_;
        auVar12._12_4_ = auVar4._12_4_ * auVar4._12_4_;
        auVar4 = vblendps_avx(auVar12,ZEXT416(0) << 0x20,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        if (fVar28 + _DAT_145fc6f00 <= auVar4._0_4_) goto LAB_14002bcd2;
        fVar3 = SQRT(fVar3);
        fVar28 = *param_4 * fVar3;
        fVar27 = param_4[1] * fVar3;
        fVar5 = param_4[2] * fVar3;
        fVar3 = param_4[3] * fVar3;
      }
      else {
        fVar6 = (float)((uint)fVar16 ^ uVar1) / fVar6;
        *param_6 = fVar6;
        auVar10._0_4_ = fVar6 * *param_2 + *(float *)*param_1;
        auVar10._4_4_ = fVar6 * param_2[1] + *(float *)(*param_1 + 4);
        auVar10._8_4_ = fVar6 * param_2[2] + *(float *)(*param_1 + 8);
        auVar10._12_4_ = fVar6 * param_2[3] + *(float *)(*param_1 + 0xc);
        auVar4 = vsubps_avx(auVar10,*param_3);
        auVar8._0_4_ = auVar4._0_4_ * auVar4._0_4_;
        auVar8._4_4_ = auVar4._4_4_ * auVar4._4_4_;
        auVar8._8_4_ = auVar4._8_4_ * auVar4._8_4_;
        auVar8._12_4_ = auVar4._12_4_ * auVar4._12_4_;
        auVar4 = vblendps_avx(auVar8,ZEXT416(0) << 0x20,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        if (fVar28 + _DAT_145fc6f00 <= auVar4._0_4_) {
LAB_14002bcd2:
          *param_6 = 0.0;
          goto LAB_14002bcd9;
        }
        fVar3 = SQRT(fVar3);
        fVar28 = (float)((uint)fVar3 ^ uVar1) * *param_4;
        fVar27 = (float)((uint)fVar3 ^ uVar1) * param_4[1];
        fVar5 = (float)((uint)fVar3 ^ uVar1) * param_4[2];
        fVar3 = (float)((uint)fVar3 ^ uVar1) * param_4[3];
      }
    }
    else {
      fVar7 = fVar7 / param_5;
      fVar25 = fVar25 / fVar9;
      fVar28 = (fVar26 * *param_2 + *(float *)*param_1 + (-(fVar25 * *param_4) - *(float *)*param_3)
               ) * fVar7;
      fVar27 = (fVar26 * param_2[1] + *(float *)(*param_1 + 4) +
               (-(fVar25 * param_4[1]) - *(float *)(*param_3 + 4))) * fVar7;
      fVar5 = (fVar26 * param_2[2] + *(float *)(*param_1 + 8) +
              (-(fVar25 * param_4[2]) - *(float *)(*param_3 + 8))) * fVar7;
      fVar3 = (fVar26 * param_2[3] + *(float *)(*param_1 + 0xc) +
              (-(fVar25 * param_4[3]) - *(float *)(*param_3 + 0xc))) * fVar7;
    }
    *param_7 = fVar28;
    param_7[1] = fVar27;
    param_7[2] = fVar5;
    param_7[3] = fVar3;
    uVar2 = 1;
  }
  return uVar2;
}

