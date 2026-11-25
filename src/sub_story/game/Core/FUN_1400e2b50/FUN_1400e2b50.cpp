// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e2b50  size: 271 bytes
// Name:    FUN_1400e2b50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e2b50(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  fVar5 = *param_4;
  fVar6 = param_4[1];
  fVar7 = param_4[2];
  fVar8 = param_4[3];
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  auVar15._0_12_ = ZEXT812(0);
  auVar15._12_4_ = 0;
  auVar14._0_4_ = fVar1 * fVar5;
  auVar14._4_4_ = fVar2 * fVar6;
  auVar14._8_4_ = fVar3 * fVar7;
  auVar14._12_4_ = fVar4 * fVar8;
  auVar14 = vblendps_avx(auVar14,auVar15,8);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  fVar13 = auVar14._0_4_;
  if ((fVar13 != 0.0) || (NAN(fVar13))) {
    fVar9 = param_3[1];
    fVar10 = param_3[2];
    fVar11 = param_3[3];
    auVar17._0_4_ = fVar1 * *param_1;
    auVar17._4_4_ = fVar2 * param_1[1];
    auVar17._8_4_ = fVar3 * param_1[2];
    auVar17._12_4_ = fVar4 * param_1[3];
    auVar18._0_4_ = fVar5 * fVar5;
    auVar18._4_4_ = fVar6 * fVar6;
    auVar18._8_4_ = fVar7 * fVar7;
    auVar18._12_4_ = fVar8 * fVar8;
    auVar16._0_4_ = *param_3 * fVar1;
    auVar16._4_4_ = fVar9 * fVar2;
    auVar16._8_4_ = fVar10 * fVar3;
    auVar16._12_4_ = fVar11 * fVar4;
    auVar14 = vblendps_avx(auVar17,auVar15,8);
    auVar12 = vblendps_avx(auVar16,auVar15,8);
    auVar15 = vblendps_avx(auVar18,auVar15,8);
    auVar14 = vhaddps_avx(auVar14,auVar14);
    auVar15 = vhaddps_avx(auVar15,auVar15);
    auVar12 = vhaddps_avx(auVar12,auVar12);
    auVar14 = vhaddps_avx(auVar14,auVar14);
    auVar15 = vhaddps_avx(auVar15,auVar15);
    auVar12 = vhaddps_avx(auVar12,auVar12);
    auVar16 = vrsqrtps_avx(auVar15);
    fVar13 = (auVar14._0_4_ - auVar12._0_4_) / fVar13;
    fVar1 = auVar16._0_4_;
    fVar2 = auVar16._4_4_;
    fVar3 = auVar16._8_4_;
    fVar4 = auVar16._12_4_;
    auVar12._0_4_ =
         ((fVar1 * fVar1 * auVar15._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar1 + fVar1) * fVar5
    ;
    auVar12._4_4_ =
         ((fVar2 * fVar2 * auVar15._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar2 + fVar2) * fVar6
    ;
    auVar12._8_4_ =
         ((fVar3 * fVar3 * auVar15._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar3 + fVar3) * fVar7
    ;
    auVar12._12_4_ =
         ((fVar4 * fVar4 * auVar15._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar4 + fVar4) *
         fVar8;
    auVar19._4_4_ = _DAT_145fc6f00;
    auVar19._0_4_ = _DAT_145fc6f00;
    auVar19._8_4_ = _DAT_145fc6f00;
    auVar19._12_4_ = _DAT_145fc6f00;
    auVar14 = vcmpps_avx(auVar19,auVar15,1);
    auVar14 = vblendvps_avx(ZEXT416(_DAT_145fc6ed8),auVar12,auVar14);
    *param_5 = auVar14._0_4_ * fVar13 + *param_3;
    param_5[1] = auVar14._4_4_ * fVar13 + fVar9;
    param_5[2] = auVar14._8_4_ * fVar13 + fVar10;
    param_5[3] = auVar14._12_4_ * fVar13 + fVar11;
  }
  else {
    *param_5 = *param_3;
    param_5[1] = param_3[1];
    param_5[2] = param_1[2];
  }
  return;
}

