// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002c020  size: 513 bytes
// Name:    FUN_14002c020
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144db6f00, FUN_144db6f30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14002c020(float *param_1,void *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar17;
  float fVar19;
  float fVar21;
  undefined1 auVar15 [16];
  float fVar18;
  float fVar20;
  float fVar22;
  undefined1 auVar16 [16];
  undefined1 auVar23 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_98 [12];
  float fStack_8c;
  undefined1 auStack_88 [12];
  float fStack_7c;
  undefined1 auStack_78 [16];
  undefined1 aauStack_68 [3] [16];
  undefined1 auVar24 [64];
  
  uVar1 = *(undefined4 *)(param_3 + 0xc);
  uVar2 = *(undefined4 *)(param_3 + 0x10);
  FUN_144db6f00(param_2,aauStack_68,*(undefined4 *)(param_3 + 8));
  FUN_144db6f00(param_2,auStack_78,uVar2);
  auVar23._0_12_ = ZEXT812(0);
  auVar23._12_4_ = 0;
  auVar24 = ZEXT1664(auVar23);
  auVar6 = vsubps_avx(auStack_78,aauStack_68[0]);
  fVar13 = auVar6._0_4_;
  auVar9._0_4_ = fVar13 * fVar13;
  fVar19 = auVar6._4_4_;
  auVar9._4_4_ = fVar19 * fVar19;
  fVar14 = auVar6._8_4_;
  auVar9._8_4_ = fVar14 * fVar14;
  fVar20 = auVar6._12_4_;
  auVar9._12_4_ = fVar20 * fVar20;
  auVar6 = vblendps_avx(auVar9,auVar23,8);
  auVar6 = vhaddps_avx(auVar6,auVar6);
  auVar3 = vhaddps_avx(auVar6,auVar6);
  auVar6 = vrsqrtps_avx(auVar3);
  fVar17 = auVar6._0_4_;
  fVar21 = auVar6._4_4_;
  fVar18 = auVar6._8_4_;
  fVar22 = auVar6._12_4_;
  auVar6 = vcmpps_avx(auVar23,auVar3,1);
  fVar25 = (float)(auVar6._0_4_ &
                  (uint)(((fVar17 * fVar17 * auVar3._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                          fVar17 + fVar17) * fVar13));
  fVar26 = (float)(auVar6._4_4_ &
                  (uint)(((fVar21 * fVar21 * auVar3._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                          fVar21 + fVar21) * fVar19));
  fVar27 = (float)(auVar6._8_4_ &
                  (uint)(((fVar18 * fVar18 * auVar3._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                          fVar18 + fVar18) * fVar14));
  fVar28 = (float)(auVar6._12_4_ &
                  (uint)(((fVar22 * fVar22 * auVar3._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                          fVar22 + fVar22) * fVar20));
  FUN_144db6f30(param_2,auStack_88,uVar2);
  puVar5 = auStack_98;
  FUN_144db6f30(param_2,puVar5,uVar1);
  auVar6 = *(undefined1 (*) [16])(param_3 + 0x140);
  auVar4._12_4_ = fStack_8c;
  auVar4._0_12_ = auStack_98;
  auVar3 = vshufps_avx(auVar4,auVar4,0xc9);
  auVar9 = vshufps_avx(auVar6,auVar6,0xd2);
  auVar4 = vshufps_avx(auVar4,auVar4,0xd2);
  auVar7 = vshufps_avx(auVar6,auVar6,0xc9);
  fVar13 = -(auVar4._0_4_ * auVar7._0_4_) + auVar3._0_4_ * auVar9._0_4_;
  fVar17 = -(auVar4._4_4_ * auVar7._4_4_) + auVar3._4_4_ * auVar9._4_4_;
  fVar19 = -(auVar4._8_4_ * auVar7._8_4_) + auVar3._8_4_ * auVar9._8_4_;
  fVar21 = -(auVar4._12_4_ * auVar7._12_4_) + auVar3._12_4_ * auVar9._12_4_;
  auVar15._0_4_ = fVar13 + fVar13;
  auVar15._4_4_ = fVar17 + fVar17;
  auVar15._8_4_ = fVar19 + fVar19;
  auVar15._12_4_ = fVar21 + fVar21;
  auVar9 = vshufps_avx(auVar15,auVar15,0xd2);
  auVar7 = vshufps_avx(auVar15,auVar15,0xc9);
  fVar13 = auVar15._0_4_ * fStack_8c + auVar6._0_4_ +
           -(auVar4._0_4_ * auVar7._0_4_) + auVar9._0_4_ * auVar3._0_4_;
  fVar17 = auVar15._4_4_ * fStack_8c + auVar6._4_4_ +
           -(auVar4._4_4_ * auVar7._4_4_) + auVar9._4_4_ * auVar3._4_4_;
  fVar19 = auVar15._8_4_ * fStack_8c + auVar6._8_4_ +
           -(auVar4._8_4_ * auVar7._8_4_) + auVar9._8_4_ * auVar3._8_4_;
  fVar21 = auVar15._12_4_ * fStack_8c + auVar6._12_4_ +
           -(auVar4._12_4_ * auVar7._12_4_) + auVar9._12_4_ * auVar3._12_4_;
  auVar3._12_4_ = fStack_7c;
  auVar3._0_12_ = auStack_88;
  auVar6 = vshufps_avx(auVar3,auVar3,0xc9);
  auVar3 = vshufps_avx(auVar3,auVar3,0xd2);
  fVar14 = auVar3._0_4_ * _DAT_14615bd00 + auVar6._0_4_ * _DAT_145fc6ed8;
  fVar18 = auVar3._4_4_ * _UNK_14615bd04 + auVar6._4_4_ * 0.0;
  fVar20 = auVar3._8_4_ * _UNK_14615bd08 + auVar6._8_4_ * 0.0;
  fVar22 = auVar3._12_4_ * _UNK_14615bd0c + auVar6._12_4_ * 0.0;
  auVar16._0_4_ = fVar14 + fVar14;
  auVar16._4_4_ = fVar18 + fVar18;
  auVar16._8_4_ = fVar20 + fVar20;
  auVar16._12_4_ = fVar22 + fVar22;
  auVar9 = vshufps_avx(auVar16,auVar16,0xd2);
  auVar4 = vshufps_avx(auVar16,auVar16,0xc9);
  fVar14 = auVar16._0_4_ * fStack_7c + _DAT_14614f7f0 +
           -(auVar3._0_4_ * auVar4._0_4_) + auVar9._0_4_ * auVar6._0_4_;
  fVar18 = auVar16._4_4_ * fStack_7c + _UNK_14614f7f4 +
           -(auVar3._4_4_ * auVar4._4_4_) + auVar9._4_4_ * auVar6._4_4_;
  fVar20 = auVar16._8_4_ * fStack_7c + _UNK_14614f7f8 +
           -(auVar3._8_4_ * auVar4._8_4_) + auVar9._8_4_ * auVar6._8_4_;
  fVar22 = auVar16._12_4_ * fStack_7c + _UNK_14614f7fc +
           -(auVar3._12_4_ * auVar4._12_4_) + auVar9._12_4_ * auVar6._12_4_;
  auVar11._0_4_ = fVar13 * fVar25;
  auVar11._4_4_ = fVar17 * fVar26;
  auVar11._8_4_ = fVar19 * fVar27;
  auVar11._12_4_ = fVar21 * fVar28;
  auVar15 = auVar24._0_16_;
  auVar6 = vblendps_avx(auVar11,auVar15,8);
  auVar6 = vhaddps_avx(auVar6,auVar6);
  auVar6 = vhaddps_avx(auVar6,auVar6);
  auVar12._0_4_ = -(fVar25 * auVar6._0_4_) + fVar13;
  auVar12._4_4_ = -(fVar26 * auVar6._4_4_) + fVar17;
  auVar12._8_4_ = -(fVar27 * auVar6._8_4_) + fVar19;
  auVar12._12_4_ = -(fVar28 * auVar6._12_4_) + fVar21;
  auVar6._0_4_ = fVar14 * fVar25;
  auVar6._4_4_ = fVar18 * fVar26;
  auVar6._8_4_ = fVar20 * fVar27;
  auVar6._12_4_ = fVar22 * fVar28;
  auVar6 = vblendps_avx(auVar6,auVar15,8);
  auVar6 = vhaddps_avx(auVar6,auVar6);
  auVar3 = vshufps_avx(auVar12,auVar12,0xc9);
  auVar6 = vhaddps_avx(auVar6,auVar6);
  auVar7._0_4_ = -(fVar25 * auVar6._0_4_) + fVar14;
  auVar7._4_4_ = -(fVar26 * auVar6._4_4_) + fVar18;
  auVar7._8_4_ = -(fVar27 * auVar6._8_4_) + fVar20;
  auVar7._12_4_ = -(fVar28 * auVar6._12_4_) + fVar22;
  auVar9 = vshufps_avx(auVar7,auVar7,0xd2);
  auVar10._0_4_ = auVar7._0_4_ * auVar12._0_4_;
  auVar10._4_4_ = auVar7._4_4_ * auVar12._4_4_;
  auVar10._8_4_ = auVar7._8_4_ * auVar12._8_4_;
  auVar10._12_4_ = auVar7._12_4_ * auVar12._12_4_;
  auVar4 = vshufps_avx(auVar12,auVar12,0xd2);
  auVar7 = vshufps_avx(auVar7,auVar7,0xc9);
  auVar6 = vblendps_avx(auVar10,auVar15,8);
  auVar6 = vhaddps_avx(auVar6,auVar6);
  auVar8._0_4_ = (-(auVar4._0_4_ * auVar7._0_4_) + auVar9._0_4_ * auVar3._0_4_) * fVar25;
  auVar8._4_4_ = (-(auVar4._4_4_ * auVar7._4_4_) + auVar9._4_4_ * auVar3._4_4_) * fVar26;
  auVar8._8_4_ = (-(auVar4._8_4_ * auVar7._8_4_) + auVar9._8_4_ * auVar3._8_4_) * fVar27;
  auVar8._12_4_ = (-(auVar4._12_4_ * auVar7._12_4_) + auVar9._12_4_ * auVar3._12_4_) * fVar28;
  vhaddps_avx(auVar6,auVar6);
  auVar6 = vblendps_avx(auVar8,auVar15,8);
  auVar6 = vhaddps_avx(auVar6,auVar6);
  auVar6 = vhaddps_avx(auVar6,auVar6);
  auVar24 = ZEXT1664(auVar6);
  atan2f(param_2,puVar5);
  *param_1 = fVar25;
  param_1[1] = fVar26;
  param_1[2] = fVar27;
  param_1[3] = fVar28;
  param_1[4] = auVar24._0_4_;
  return;
}

