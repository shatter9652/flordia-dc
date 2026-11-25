// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011bd30  size: 216 bytes
// Name:    FUN_14011bd30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14011bd30(longlong param_1,undefined1 (*param_2) [16],char param_3)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  auVar12._0_12_ = ZEXT812(0);
  auVar12._12_4_ = 0;
  auVar11 = **(undefined1 (**) [16])(param_1 + 0xc30);
  auVar2 = vblendps_avx(auVar11,auVar12,4);
  fVar3 = auVar2._0_4_;
  auVar16._0_4_ = fVar3 * fVar3;
  fVar5 = auVar2._4_4_;
  auVar16._4_4_ = fVar5 * fVar5;
  fVar7 = auVar2._8_4_;
  auVar16._8_4_ = fVar7 * fVar7;
  fVar9 = auVar2._12_4_;
  auVar16._12_4_ = fVar9 * fVar9;
  auVar2 = vblendps_avx(auVar16,auVar12,8);
  auVar2 = vhaddps_avx(auVar2,auVar2);
  auVar16 = vhaddps_avx(auVar2,auVar2);
  auVar13 = vrsqrtps_avx(auVar16);
  auVar2 = vcmpps_avx(auVar12,auVar16,1);
  fVar4 = auVar13._0_4_;
  fVar6 = auVar13._4_4_;
  fVar8 = auVar13._8_4_;
  fVar10 = auVar13._12_4_;
  auVar13._0_4_ =
       auVar2._0_4_ &
       (uint)(((fVar4 * fVar4 * auVar16._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar4 + fVar4) *
             fVar3);
  auVar13._4_4_ =
       auVar2._4_4_ &
       (uint)(((fVar6 * fVar6 * auVar16._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar6 + fVar6) *
             fVar5);
  auVar13._8_4_ =
       auVar2._8_4_ &
       (uint)(((fVar8 * fVar8 * auVar16._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar8 + fVar8) *
             fVar7);
  auVar13._12_4_ =
       auVar2._12_4_ &
       (uint)(((fVar10 * fVar10 * auVar16._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar10 +
              fVar10) * fVar9);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = _DAT_146159bc0;
  auVar2 = vshufps_avx(auVar13,auVar13,0xc9);
  auVar16 = vshufps_avx(auVar13,auVar13,0xd2);
  auVar13 = vshufps_avx(auVar15,auVar15,0xc9);
  auVar14._0_4_ = -((float)_DAT_146159bc0 * auVar16._0_4_) + auVar2._0_4_ * auVar13._0_4_;
  auVar14._4_4_ = -((float)(_DAT_146159bc0 >> 0x20) * auVar16._4_4_) + auVar2._4_4_ * auVar13._4_4_;
  auVar14._8_4_ = -(auVar16._8_4_ * 0.0) + auVar2._8_4_ * auVar13._8_4_;
  auVar14._12_4_ = -(auVar16._12_4_ * 0.0) + auVar2._12_4_ * auVar13._12_4_;
  auVar2 = vshufps_avx(auVar11,auVar11,0xd2);
  auVar16 = vshufps_avx(auVar14,auVar14,0xc9);
  *param_2 = auVar14;
  param_2[1] = auVar11;
  auVar13 = vshufps_avx(auVar14,auVar14,0xd2);
  auVar11 = vshufps_avx(auVar11,auVar11,0xc9);
  *(float *)param_2[2] = -(auVar13._0_4_ * auVar11._0_4_) + auVar16._0_4_ * auVar2._0_4_;
  *(float *)(param_2[2] + 4) = -(auVar13._4_4_ * auVar11._4_4_) + auVar16._4_4_ * auVar2._4_4_;
  *(float *)(param_2[2] + 8) = -(auVar13._8_4_ * auVar11._8_4_) + auVar16._8_4_ * auVar2._8_4_;
  *(float *)(param_2[2] + 0xc) = -(auVar13._12_4_ * auVar11._12_4_) + auVar16._12_4_ * auVar2._12_4_
  ;
  auVar11 = ZEXT416(0) << 0x20;
  pfVar1 = *(float **)(param_1 + 0xc28);
  if (param_3 == '\0') {
    auVar11 = ZEXT416(*(uint *)(param_1 + 0xc74));
  }
  auVar11 = vinsertps_avx(auVar11,auVar11,0x2b);
  fVar3 = pfVar1[1];
  fVar4 = pfVar1[2];
  fVar5 = pfVar1[3];
  *(float *)param_2[3] = auVar11._0_4_ + *pfVar1;
  *(float *)(param_2[3] + 4) = auVar11._4_4_ + fVar3;
  *(float *)(param_2[3] + 8) = auVar11._8_4_ + fVar4;
  *(float *)(param_2[3] + 0xc) = auVar11._12_4_ + fVar5;
  return;
}

