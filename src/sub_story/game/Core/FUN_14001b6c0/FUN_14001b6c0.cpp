// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001b6c0  size: 265 bytes
// Name:    FUN_14001b6c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001b6c0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16],undefined1 (*param_5) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  auVar1 = *param_2;
  auVar13._0_12_ = ZEXT812(0);
  auVar13._12_4_ = 0;
  auVar12 = vsubps_avx(*param_4,auVar1);
  auVar7 = vsubps_avx(*param_3,auVar1);
  fVar2 = auVar7._0_4_;
  fVar16 = auVar12._0_4_;
  auVar14._0_4_ = fVar16 * fVar2;
  fVar3 = auVar7._4_4_;
  fVar17 = auVar12._4_4_;
  auVar14._4_4_ = fVar17 * fVar3;
  fVar4 = auVar7._8_4_;
  fVar18 = auVar12._8_4_;
  auVar14._8_4_ = fVar18 * fVar4;
  fVar5 = auVar7._12_4_;
  fVar19 = auVar12._12_4_;
  auVar14._12_4_ = fVar19 * fVar5;
  auVar15._0_4_ = fVar16 * fVar16;
  auVar15._4_4_ = fVar17 * fVar17;
  auVar15._8_4_ = fVar18 * fVar18;
  auVar15._12_4_ = fVar19 * fVar19;
  auVar8 = vsubps_avx(*param_5,auVar1);
  auVar6._0_4_ = fVar2 * fVar2;
  auVar6._4_4_ = fVar3 * fVar3;
  auVar6._8_4_ = fVar4 * fVar4;
  auVar6._12_4_ = fVar5 * fVar5;
  auVar1 = vblendps_avx(auVar14,auVar13,8);
  auVar12 = vblendps_avx(auVar15,auVar13,8);
  auVar7 = vhaddps_avx(auVar1,auVar1);
  auVar9._0_4_ = auVar8._0_4_ * fVar16;
  auVar9._4_4_ = auVar8._4_4_ * fVar17;
  auVar9._8_4_ = auVar8._8_4_ * fVar18;
  auVar9._12_4_ = auVar8._12_4_ * fVar19;
  auVar1 = vblendps_avx(auVar6,auVar13,8);
  auVar6 = vhaddps_avx(auVar12,auVar12);
  auVar12._0_4_ = auVar8._0_4_ * fVar2;
  auVar12._4_4_ = auVar8._4_4_ * fVar3;
  auVar12._8_4_ = auVar8._8_4_ * fVar4;
  auVar12._12_4_ = auVar8._12_4_ * fVar5;
  auVar8 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vblendps_avx(auVar9,auVar13,8);
  auVar12 = vblendps_avx(auVar12,auVar13,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar12 = vhaddps_avx(auVar12,auVar12);
  auVar7 = vhaddps_avx(auVar7,auVar7);
  auVar6 = vhaddps_avx(auVar6,auVar6);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  auVar9 = vhaddps_avx(auVar1,auVar1);
  auVar12 = vhaddps_avx(auVar12,auVar12);
  fVar2 = auVar7._0_4_;
  fVar3 = auVar7._4_4_;
  fVar4 = auVar7._8_4_;
  fVar5 = auVar7._12_4_;
  auVar10._0_4_ = auVar6._0_4_ * auVar8._0_4_ - fVar2 * fVar2;
  auVar10._4_4_ = auVar6._4_4_ * auVar8._4_4_ - fVar3 * fVar3;
  auVar10._8_4_ = auVar6._8_4_ * auVar8._8_4_ - fVar4 * fVar4;
  auVar10._12_4_ = auVar6._12_4_ * auVar8._12_4_ - fVar5 * fVar5;
  auVar1 = vrcpps_avx(auVar10);
  fVar16 = auVar1._0_4_;
  fVar17 = auVar1._4_4_;
  fVar18 = auVar1._8_4_;
  fVar19 = auVar1._12_4_;
  fVar16 = -((fVar16 * auVar10._0_4_ - _DAT_145fc6ed8) * fVar16) + fVar16;
  fVar17 = -((fVar17 * auVar10._4_4_ - _DAT_145fc6ed8) * fVar17) + fVar17;
  fVar18 = -((fVar18 * auVar10._8_4_ - _DAT_145fc6ed8) * fVar18) + fVar18;
  fVar19 = -((fVar19 * auVar10._12_4_ - _DAT_145fc6ed8) * fVar19) + fVar19;
  auVar11._0_4_ = fVar16 * (auVar12._0_4_ * auVar6._0_4_ - auVar9._0_4_ * fVar2);
  auVar11._4_4_ = fVar17 * (auVar12._4_4_ * auVar6._4_4_ - auVar9._4_4_ * fVar3);
  auVar11._8_4_ = fVar18 * (auVar12._8_4_ * auVar6._8_4_ - auVar9._8_4_ * fVar4);
  auVar11._12_4_ = fVar19 * (auVar12._12_4_ * auVar6._12_4_ - auVar9._12_4_ * fVar5);
  auVar1 = vblendps_avx(auVar11,*param_1,0xc);
  auVar7._0_4_ = fVar16 * (auVar9._0_4_ * auVar8._0_4_ - auVar12._0_4_ * fVar2);
  auVar7._4_4_ = fVar17 * (auVar9._4_4_ * auVar8._4_4_ - auVar12._4_4_ * fVar3);
  auVar7._8_4_ = fVar18 * (auVar9._8_4_ * auVar8._8_4_ - auVar12._8_4_ * fVar4);
  auVar7._12_4_ = fVar19 * (auVar9._12_4_ * auVar8._12_4_ - auVar12._12_4_ * fVar5);
  auVar1 = vblendps_avx(auVar1,auVar7,4);
  auVar12 = vshufps_avx(auVar7,auVar7,0xaa);
  auVar8._0_4_ = auVar11._0_4_ + auVar12._0_4_;
  auVar8._4_4_ = auVar11._4_4_ + auVar12._4_4_;
  auVar8._8_4_ = auVar11._8_4_ + auVar12._8_4_;
  auVar8._12_4_ = auVar11._12_4_ + auVar12._12_4_;
  auVar12 = vmovshdup_avx(auVar8);
  auVar1 = vblendps_avx(auVar1,ZEXT416((uint)(_DAT_145fc6ed8 - auVar12._0_4_)),1);
  *param_1 = auVar1;
  return;
}

