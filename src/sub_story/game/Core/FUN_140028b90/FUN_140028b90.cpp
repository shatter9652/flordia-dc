// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140028b90  size: 517 bytes
// Name:    FUN_140028b90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140028b90(float *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar15;
  float fVar17;
  float fVar19;
  undefined1 auVar13 [16];
  float fVar16;
  float fVar18;
  float fVar20;
  undefined1 auVar14 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  auVar1 = *param_3;
  auVar14 = *param_2;
  auVar8 = vshufps_avx(auVar14,auVar14,0xc9);
  auVar21 = vshufps_avx(auVar1,auVar1,0xd2);
  auVar14 = vshufps_avx(auVar14,auVar14,0xd2);
  auVar22 = vshufps_avx(auVar1,auVar1,0xc9);
  fVar11 = -(auVar14._0_4_ * auVar22._0_4_) + auVar8._0_4_ * auVar21._0_4_;
  fVar15 = -(auVar14._4_4_ * auVar22._4_4_) + auVar8._4_4_ * auVar21._4_4_;
  fVar17 = -(auVar14._8_4_ * auVar22._8_4_) + auVar8._8_4_ * auVar21._8_4_;
  fVar19 = -(auVar14._12_4_ * auVar22._12_4_) + auVar8._12_4_ * auVar21._12_4_;
  auVar13._0_4_ = fVar11 + fVar11;
  auVar13._4_4_ = fVar15 + fVar15;
  auVar13._8_4_ = fVar17 + fVar17;
  auVar13._12_4_ = fVar19 + fVar19;
  auVar21 = vshufps_avx(auVar13,auVar13,0xd2);
  auVar22 = vshufps_avx(auVar13,auVar13,0xc9);
  fVar11 = *(float *)(*param_2 + 0xc);
  auVar23 = ZEXT816(0) << 0x20;
  fVar2 = auVar1._0_4_;
  fVar5 = auVar1._4_4_;
  fVar6 = auVar1._8_4_;
  fVar7 = auVar1._12_4_;
  fVar12 = auVar13._0_4_ * fVar11 + fVar2 +
           -(auVar14._0_4_ * auVar22._0_4_) + auVar21._0_4_ * auVar8._0_4_;
  fVar16 = auVar13._4_4_ * fVar11 + fVar5 +
           -(auVar14._4_4_ * auVar22._4_4_) + auVar21._4_4_ * auVar8._4_4_;
  fVar18 = auVar13._8_4_ * fVar11 + fVar6 +
           -(auVar14._8_4_ * auVar22._8_4_) + auVar21._8_4_ * auVar8._8_4_;
  fVar20 = auVar13._12_4_ * fVar11 + fVar7 +
           -(auVar14._12_4_ * auVar22._12_4_) + auVar21._12_4_ * auVar8._12_4_;
  auVar1._0_4_ = fVar2 * fVar2;
  auVar1._4_4_ = fVar5 * fVar5;
  auVar1._8_4_ = fVar6 * fVar6;
  auVar1._12_4_ = fVar7 * fVar7;
  auVar1 = vblendps_avx(auVar1,auVar23,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar14 = vrsqrtps_avx(auVar1);
  fVar11 = auVar14._0_4_;
  fVar15 = auVar14._4_4_;
  fVar17 = auVar14._8_4_;
  fVar19 = auVar14._12_4_;
  auVar8._0_4_ = ((_DAT_145fc6f08 * fVar11 * fVar11 * auVar1._0_4_ - _DAT_145fc6f08) * fVar11 +
                 fVar11) * fVar2;
  auVar8._4_4_ = ((_DAT_145fc6f08 * fVar15 * fVar15 * auVar1._4_4_ - _DAT_145fc6f08) * fVar15 +
                 fVar15) * fVar5;
  auVar8._8_4_ = ((_DAT_145fc6f08 * fVar17 * fVar17 * auVar1._8_4_ - _DAT_145fc6f08) * fVar17 +
                 fVar17) * fVar6;
  auVar8._12_4_ =
       ((_DAT_145fc6f08 * fVar19 * fVar19 * auVar1._12_4_ - _DAT_145fc6f08) * fVar19 + fVar19) *
       fVar7;
  auVar21._0_4_ = fVar12 * fVar12;
  auVar21._4_4_ = fVar16 * fVar16;
  auVar21._8_4_ = fVar18 * fVar18;
  auVar21._12_4_ = fVar20 * fVar20;
  auVar1 = vblendps_avx(auVar21,auVar23,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar14 = vrsqrtps_avx(auVar1);
  fVar11 = auVar14._0_4_;
  fVar15 = auVar14._4_4_;
  fVar17 = auVar14._8_4_;
  fVar19 = auVar14._12_4_;
  auVar22._0_4_ =
       ((_DAT_145fc6f08 * fVar11 * fVar11 * auVar1._0_4_ - _DAT_145fc6f08) * fVar11 + fVar11) *
       fVar12;
  auVar22._4_4_ =
       ((_DAT_145fc6f08 * fVar15 * fVar15 * auVar1._4_4_ - _DAT_145fc6f08) * fVar15 + fVar15) *
       fVar16;
  auVar22._8_4_ =
       ((_DAT_145fc6f08 * fVar17 * fVar17 * auVar1._8_4_ - _DAT_145fc6f08) * fVar17 + fVar17) *
       fVar18;
  auVar22._12_4_ =
       ((_DAT_145fc6f08 * fVar19 * fVar19 * auVar1._12_4_ - _DAT_145fc6f08) * fVar19 + fVar19) *
       fVar20;
  auVar14._0_4_ = auVar22._0_4_ * auVar8._0_4_;
  auVar14._4_4_ = auVar22._4_4_ * auVar8._4_4_;
  auVar14._8_4_ = auVar22._8_4_ * auVar8._8_4_;
  auVar14._12_4_ = auVar22._12_4_ * auVar8._12_4_;
  auVar1 = vblendps_avx(auVar14,auVar23,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  fVar12 = auVar1._0_4_;
  fVar16 = auVar1._4_4_;
  fVar18 = auVar1._8_4_;
  fVar20 = auVar1._12_4_;
  auVar25._0_4_ = (uint)(fVar12 + _DAT_145fc6f48) & _DAT_145fc6f4c;
  auVar25._4_4_ = (uint)(fVar16 + _DAT_145fc6f48) & _DAT_145fc6f4c;
  auVar25._8_4_ = (uint)(fVar18 + _DAT_145fc6f48) & _DAT_145fc6f4c;
  auVar25._12_4_ = (uint)(fVar20 + _DAT_145fc6f48) & _DAT_145fc6f4c;
  auVar23._4_4_ = _DAT_14615a034;
  auVar23._0_4_ = _DAT_14615a034;
  auVar23._8_4_ = _DAT_14615a034;
  auVar23._12_4_ = _DAT_14615a034;
  auVar1 = vcmpps_avx(auVar25,auVar23,5);
  fVar11 = _DAT_145fc6ee0;
  fVar15 = _UNK_145fc6ee4;
  fVar17 = _UNK_145fc6ee8;
  fVar19 = _UNK_145fc6eec;
  if ((((SUB161(auVar1 >> 0x1f,0) & 1) != 0 || (SUB161(auVar1 >> 0x3f,0) & 1) != 0) ||
      (SUB161(auVar1 >> 0x5f,0) & 1) != 0) || auVar1[0xf] < '\0') {
    auVar3._0_4_ = (uint)fVar2 & _DAT_145fc6f4c;
    auVar3._4_4_ = (uint)fVar5 & _DAT_145fc6f4c;
    auVar3._8_4_ = (uint)fVar6 & _DAT_145fc6f4c;
    auVar3._12_4_ = (uint)fVar7 & _DAT_145fc6f4c;
    auVar21 = vshufps_avx(auVar3,auVar3,0x55);
    auVar26._0_4_ = (uint)(fVar12 + _DAT_145fc6ed8) & _DAT_145fc6f4c;
    auVar26._4_4_ = (uint)(fVar16 + _DAT_145fc6ed8) & _DAT_145fc6f4c;
    auVar26._8_4_ = (uint)(fVar18 + _DAT_145fc6ed8) & _DAT_145fc6f4c;
    auVar26._12_4_ = (uint)(fVar20 + _DAT_145fc6ed8) & _DAT_145fc6f4c;
    auVar24._4_4_ = auVar3._0_4_;
    auVar24._0_4_ = auVar3._0_4_;
    auVar24._8_4_ = auVar3._0_4_;
    auVar24._12_4_ = auVar3._0_4_;
    auVar1 = vshufps_avx(auVar3,auVar3,0xaa);
    auVar14 = vcmpps_avx(auVar24,auVar1,1);
    auVar1 = vcmpps_avx(auVar21,auVar1,1);
    auVar21 = vcmpps_avx(auVar24,auVar21,1);
    auVar13 = vcmpps_avx(auVar26,auVar23,1);
    auVar1 = vblendvps_avx(_DAT_14614f7f0,_DAT_146159bc0,auVar1);
    auVar14 = vblendvps_avx(_DAT_14614f7f0,ZEXT416((uint)_DAT_145fc6ed8),auVar14);
    auVar1 = vblendvps_avx(auVar1,auVar14,auVar21);
    auVar1 = vblendvps_avx(auVar22,auVar1,auVar13);
    auVar14 = vshufps_avx(auVar8,auVar8,0xc9);
    auVar8 = vshufps_avx(auVar8,auVar8,0xd2);
    auVar21 = vshufps_avx(auVar1,auVar1,0xd2);
    auVar1 = vshufps_avx(auVar1,auVar1,0xc9);
    auVar4._0_4_ = -(auVar8._0_4_ * auVar1._0_4_) + auVar21._0_4_ * auVar14._0_4_;
    auVar4._4_4_ = -(auVar8._4_4_ * auVar1._4_4_) + auVar21._4_4_ * auVar14._4_4_;
    auVar4._8_4_ = -(auVar8._8_4_ * auVar1._8_4_) + auVar21._8_4_ * auVar14._8_4_;
    auVar4._12_4_ = -(auVar8._12_4_ * auVar1._12_4_) + auVar21._12_4_ * auVar14._12_4_;
    auVar9._0_4_ = _DAT_145fc6ed8 + fVar12;
    auVar9._4_4_ = fVar16 + 0.0;
    auVar9._8_4_ = fVar18 + 0.0;
    auVar9._12_4_ = fVar20 + 0.0;
    auVar1 = vinsertps_avx(auVar4,auVar9,0x30);
    fVar11 = auVar1._0_4_;
    auVar10._0_4_ = fVar11 * fVar11;
    fVar17 = auVar1._4_4_;
    auVar10._4_4_ = fVar17 * fVar17;
    fVar2 = auVar1._8_4_;
    auVar10._8_4_ = fVar2 * fVar2;
    fVar6 = auVar1._12_4_;
    auVar10._12_4_ = fVar6 * fVar6;
    auVar1 = vhaddps_avx(auVar10,auVar10);
    auVar1 = vhaddps_avx(auVar1,auVar1);
    auVar14 = vrsqrtps_avx(auVar1);
    fVar15 = auVar14._0_4_;
    fVar19 = auVar14._4_4_;
    fVar5 = auVar14._8_4_;
    fVar7 = auVar14._12_4_;
    fVar11 = ((fVar15 * fVar15 * auVar1._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar15 + fVar15)
             * fVar11;
    fVar15 = ((fVar19 * fVar19 * auVar1._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar19 + fVar19)
             * fVar17;
    fVar17 = ((fVar5 * fVar5 * auVar1._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar5 + fVar5) *
             fVar2;
    fVar19 = ((fVar7 * fVar7 * auVar1._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar7 + fVar7) *
             fVar6;
  }
  *param_1 = fVar11;
  param_1[1] = fVar15;
  param_1[2] = fVar17;
  param_1[3] = fVar19;
  return;
}

