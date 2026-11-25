// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bc9c0  size: 415 bytes
// Name:    FUN_1401bc9c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401bc9c0(undefined1 (*param_1) [16],float *param_2,undefined1 (*param_3) [16],
                  float *param_4,undefined1 (*param_5) [16],float *param_6,
                  undefined1 (*param_7) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  
  auVar9 = *param_3;
  auVar11._4_4_ = _DAT_146159ec4;
  auVar11._0_4_ = _DAT_146159ec4;
  auVar11._8_4_ = _DAT_146159ec4;
  auVar11._12_4_ = _DAT_146159ec4;
  auVar1 = *param_5;
  auVar6 = vshufps_avx(auVar9,auVar9,0xc9);
  auVar2 = vshufps_avx(auVar9,auVar9,0xd2);
  auVar7 = vshufps_avx(auVar1,auVar1,0xd2);
  auVar8 = vshufps_avx(auVar1,auVar1,0xc9);
  auVar4._0_4_ = -(auVar2._0_4_ * auVar8._0_4_) + auVar6._0_4_ * auVar7._0_4_;
  auVar4._4_4_ = -(auVar2._4_4_ * auVar8._4_4_) + auVar6._4_4_ * auVar7._4_4_;
  auVar4._8_4_ = -(auVar2._8_4_ * auVar8._8_4_) + auVar6._8_4_ * auVar7._8_4_;
  auVar4._12_4_ = -(auVar2._12_4_ * auVar8._12_4_) + auVar6._12_4_ * auVar7._12_4_;
  auVar5 = ZEXT416(0) << 0x20;
  auVar3 = vunpcklps_avx(auVar1,auVar5);
  auVar6._0_4_ = auVar4._0_4_ * auVar4._0_4_;
  auVar6._4_4_ = auVar4._4_4_ * auVar4._4_4_;
  auVar6._8_4_ = auVar4._8_4_ * auVar4._8_4_;
  auVar6._12_4_ = auVar4._12_4_ * auVar4._12_4_;
  auVar6 = vblendps_avx(auVar6,auVar5,8);
  auVar6 = vhaddps_avx(auVar6,auVar6);
  auVar6 = vhaddps_avx(auVar6,auVar6);
  auVar6 = vcmpps_avx(auVar11,auVar6,1);
  *param_1 = auVar6;
  auVar7._0_4_ = auVar1._0_4_ * *param_4;
  auVar7._4_4_ = auVar1._4_4_ * param_4[1];
  auVar7._8_4_ = auVar1._8_4_ * param_4[2];
  auVar7._12_4_ = auVar1._12_4_ * param_4[3];
  auVar12._0_4_ = auVar9._0_4_ * *param_2;
  auVar12._4_4_ = auVar9._4_4_ * param_2[1];
  auVar12._8_4_ = auVar9._8_4_ * param_2[2];
  auVar12._12_4_ = auVar9._12_4_ * param_2[3];
  auVar2 = vunpckhps_avx(auVar1,auVar5);
  auVar1 = vblendps_avx(auVar7,auVar5,8);
  auVar6 = vblendps_avx(auVar12,auVar5,8);
  auVar6 = vhaddps_avx(auVar6,auVar1);
  auVar1 = vhaddps_avx(auVar5,auVar1);
  auVar1 = vhaddps_avx(auVar6,auVar1);
  auVar6 = vunpcklps_avx(auVar9,auVar4);
  auVar7 = vunpckhps_avx(auVar9,auVar4);
  auVar10 = vunpcklps_avx(auVar6,auVar3);
  auVar9 = vshufps_avx(auVar6,auVar3,0xeb);
  auVar8 = vunpckhps_avx(auVar6,auVar3);
  auVar6 = vshufps_avx(auVar6,auVar3,0x41);
  auVar11 = vunpcklps_avx(auVar7,auVar2);
  auVar2 = vshufps_avx(auVar7,auVar2,0x41);
  auVar7 = vshufps_avx(auVar10,auVar10,0xc9);
  auVar8 = vshufps_avx(auVar8,auVar8,0xc9);
  auVar18._0_4_ = -(auVar8._0_4_ * auVar6._0_4_) + auVar9._0_4_ * auVar7._0_4_;
  auVar18._4_4_ = -(auVar8._4_4_ * auVar6._4_4_) + auVar9._4_4_ * auVar7._4_4_;
  auVar18._8_4_ = -(auVar8._8_4_ * auVar6._8_4_) + auVar9._8_4_ * auVar7._8_4_;
  auVar18._12_4_ = -(auVar8._12_4_ * auVar6._12_4_) + auVar9._12_4_ * auVar7._12_4_;
  auVar3 = vshufps_avx(auVar11,auVar11,0xc9);
  auVar10._0_4_ = -(auVar3._0_4_ * auVar9._0_4_) + auVar8._0_4_ * auVar2._0_4_;
  auVar10._4_4_ = -(auVar3._4_4_ * auVar9._4_4_) + auVar8._4_4_ * auVar2._4_4_;
  auVar10._8_4_ = -(auVar3._8_4_ * auVar9._8_4_) + auVar8._8_4_ * auVar2._8_4_;
  auVar10._12_4_ = -(auVar3._12_4_ * auVar9._12_4_) + auVar8._12_4_ * auVar2._12_4_;
  auVar13._0_4_ = -(auVar7._0_4_ * auVar2._0_4_) + auVar3._0_4_ * auVar6._0_4_;
  auVar13._4_4_ = -(auVar7._4_4_ * auVar2._4_4_) + auVar3._4_4_ * auVar6._4_4_;
  auVar13._8_4_ = -(auVar7._8_4_ * auVar2._8_4_) + auVar3._8_4_ * auVar6._8_4_;
  auVar13._12_4_ = -(auVar7._12_4_ * auVar2._12_4_) + auVar3._12_4_ * auVar6._12_4_;
  auVar9._0_4_ = auVar18._0_4_ * auVar11._0_4_;
  auVar9._4_4_ = auVar18._4_4_ * auVar11._4_4_;
  auVar9._8_4_ = auVar18._8_4_ * auVar11._8_4_;
  auVar9._12_4_ = auVar18._12_4_ * auVar11._12_4_;
  auVar9 = vblendps_avx(auVar9,auVar5,8);
  auVar9 = vhaddps_avx(auVar9,auVar9);
  auVar9 = vhaddps_avx(auVar9,auVar9);
  auVar6 = vrcpps_avx(auVar9);
  fVar14 = auVar6._0_4_;
  fVar15 = auVar6._4_4_;
  fVar16 = auVar6._8_4_;
  fVar17 = auVar6._12_4_;
  auVar7 = vunpcklps_avx(auVar10,auVar18);
  auVar6 = vunpckhps_avx(auVar10,auVar18);
  auVar8 = vunpcklps_avx(auVar13,auVar5);
  auVar2 = vunpckhps_avx(auVar13,auVar5);
  auVar2 = vunpcklps_avx(auVar6,auVar2);
  auVar3 = vunpcklps_avx(auVar7,auVar8);
  auVar6 = vunpckhps_avx(auVar7,auVar8);
  auVar8._0_4_ = (-((fVar14 * auVar9._0_4_ - _DAT_145fc6ed8) * fVar14) + fVar14) * auVar1._0_4_;
  auVar8._4_4_ = (-((fVar15 * auVar9._4_4_ - _DAT_145fc6ed8) * fVar15) + fVar15) * auVar1._4_4_;
  auVar8._8_4_ = (-((fVar16 * auVar9._8_4_ - _DAT_145fc6ed8) * fVar16) + fVar16) * auVar1._8_4_;
  auVar8._12_4_ = (-((fVar17 * auVar9._12_4_ - _DAT_145fc6ed8) * fVar17) + fVar17) * auVar1._12_4_;
  auVar9 = vshufps_avx(auVar8,auVar8,0x55);
  auVar1 = vshufps_avx(auVar8,auVar8,0xaa);
  *param_6 = auVar2._0_4_ * auVar1._0_4_ + auVar6._0_4_ * auVar9._0_4_ + auVar8._0_4_ * auVar3._0_4_
  ;
  param_6[1] = auVar2._4_4_ * auVar1._4_4_ +
               auVar6._4_4_ * auVar9._4_4_ + auVar8._0_4_ * auVar3._4_4_;
  param_6[2] = auVar2._8_4_ * auVar1._8_4_ +
               auVar6._8_4_ * auVar9._8_4_ + auVar8._0_4_ * auVar3._8_4_;
  param_6[3] = auVar2._12_4_ * auVar1._12_4_ +
               auVar6._12_4_ * auVar9._12_4_ + auVar8._0_4_ * auVar3._12_4_;
  *param_7 = auVar4;
  return;
}

