// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001e960  size: 606 bytes
// Name:    FUN_14001e960
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
FUN_14001e960(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
             undefined1 (*param_4) [16])

{
  undefined8 uVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar3 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar9 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar22;
  float fVar23;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar24;
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  auVar3 = *param_2;
  auVar15 = *param_1;
  auVar21 = vsubps_avx(*param_4,auVar3);
  auVar7 = ZEXT816(0) << 0x20;
  fVar8 = auVar21._0_4_;
  auVar18._0_4_ = fVar8 * fVar8;
  fVar10 = auVar21._4_4_;
  auVar18._4_4_ = fVar10 * fVar10;
  fVar11 = auVar21._8_4_;
  auVar18._8_4_ = fVar11 * fVar11;
  fVar12 = auVar21._12_4_;
  auVar18._12_4_ = fVar12 * fVar12;
  auVar21 = vblendps_avx(auVar18,auVar7,8);
  auVar21 = vhaddps_avx(auVar21,auVar21);
  auVar21 = vhaddps_avx(auVar21,auVar21);
  auVar21 = vrsqrtps_avx(auVar21);
  fVar8 = auVar21._0_4_ * fVar8;
  fVar10 = auVar21._4_4_ * fVar10;
  fVar11 = auVar21._8_4_ * fVar11;
  fVar12 = auVar21._12_4_ * fVar12;
  auVar21 = vsubps_avx(*param_3,auVar3);
  auVar19._0_4_ = auVar21._0_4_ * fVar8;
  auVar19._4_4_ = auVar21._4_4_ * fVar10;
  auVar19._8_4_ = auVar21._8_4_ * fVar11;
  auVar19._12_4_ = auVar21._12_4_ * fVar12;
  auVar21 = vblendps_avx(auVar19,auVar7,8);
  auVar21 = vhaddps_avx(auVar21,auVar21);
  auVar21 = vhaddps_avx(auVar21,auVar21);
  auVar25._0_4_ = fVar8 * auVar21._0_4_ + auVar3._0_4_;
  auVar25._4_4_ = fVar10 * auVar21._4_4_ + auVar3._4_4_;
  auVar25._8_4_ = fVar11 * auVar21._8_4_ + auVar3._8_4_;
  auVar25._12_4_ = fVar12 * auVar21._12_4_ + auVar3._12_4_;
  auVar3 = vsubps_avx(auVar15,auVar25);
  auVar21 = vsubps_avx(*param_3,auVar25);
  auVar14._0_4_ = auVar3._0_4_ * fVar8;
  auVar14._4_4_ = auVar3._4_4_ * fVar10;
  auVar14._8_4_ = auVar3._8_4_ * fVar11;
  auVar14._12_4_ = auVar3._12_4_ * fVar12;
  fVar17 = auVar21._0_4_;
  auVar20._0_4_ = fVar17 * fVar17;
  fVar23 = auVar21._4_4_;
  auVar20._4_4_ = fVar23 * fVar23;
  fVar31 = auVar21._8_4_;
  auVar20._8_4_ = fVar31 * fVar31;
  fVar33 = auVar21._12_4_;
  auVar20._12_4_ = fVar33 * fVar33;
  auVar3 = vblendps_avx(auVar14,auVar7,8);
  auVar21 = vblendps_avx(auVar20,auVar7,8);
  auVar3 = vhaddps_avx(auVar3,auVar3);
  auVar21 = vhaddps_avx(auVar21,auVar21);
  auVar3 = vhaddps_avx(auVar3,auVar3);
  auVar21 = vhaddps_avx(auVar21,auVar21);
  auVar13 = vrsqrtps_avx(auVar21);
  fVar2 = auVar15._0_4_ + (-(fVar8 * auVar3._0_4_) - auVar25._0_4_);
  fVar4 = auVar15._4_4_ + (-(fVar10 * auVar3._4_4_) - auVar25._4_4_);
  fVar5 = auVar15._8_4_ + (-(fVar11 * auVar3._8_4_) - auVar25._8_4_);
  fVar6 = auVar15._12_4_ + (-(fVar12 * auVar3._12_4_) - auVar25._12_4_);
  fVar22 = auVar13._0_4_;
  fVar24 = auVar13._4_4_;
  fVar32 = auVar13._8_4_;
  fVar34 = auVar13._12_4_;
  auVar15._0_4_ = fVar2 * fVar2;
  auVar15._4_4_ = fVar4 * fVar4;
  auVar15._8_4_ = fVar5 * fVar5;
  auVar15._12_4_ = fVar6 * fVar6;
  auVar3 = vblendps_avx(auVar15,auVar7,8);
  auVar3 = vhaddps_avx(auVar3,auVar3);
  auVar3 = vhaddps_avx(auVar3,auVar3);
  auVar15 = vrsqrtps_avx(auVar3);
  auVar13._0_4_ =
       ((_DAT_145fc6f08 * fVar22 * fVar22 * auVar21._0_4_ - _DAT_145fc6f08) * fVar22 + fVar22) *
       fVar17;
  auVar13._4_4_ =
       ((_DAT_145fc6f08 * fVar24 * fVar24 * auVar21._4_4_ - _DAT_145fc6f08) * fVar24 + fVar24) *
       fVar23;
  auVar13._8_4_ =
       ((_DAT_145fc6f08 * fVar32 * fVar32 * auVar21._8_4_ - _DAT_145fc6f08) * fVar32 + fVar32) *
       fVar31;
  auVar13._12_4_ =
       ((_DAT_145fc6f08 * fVar34 * fVar34 * auVar21._12_4_ - _DAT_145fc6f08) * fVar34 + fVar34) *
       fVar33;
  fVar17 = auVar15._0_4_;
  fVar22 = auVar15._4_4_;
  fVar23 = auVar15._8_4_;
  fVar24 = auVar15._12_4_;
  auVar29._4_4_ = _DAT_145fc6ed8;
  auVar29._0_4_ = _DAT_145fc6ed8;
  auVar29._8_4_ = _DAT_145fc6ed8;
  auVar29._12_4_ = _DAT_145fc6ed8;
  auVar26._4_4_ = _DAT_145fc6f48;
  auVar26._0_4_ = _DAT_145fc6f48;
  auVar26._8_4_ = _DAT_145fc6f48;
  auVar26._12_4_ = _DAT_145fc6f48;
  auVar16._0_4_ =
       ((_DAT_145fc6f08 * fVar17 * fVar17 * auVar3._0_4_ - _DAT_145fc6f08) * fVar17 + fVar17) *
       fVar2;
  auVar16._4_4_ =
       ((_DAT_145fc6f08 * fVar22 * fVar22 * auVar3._4_4_ - _DAT_145fc6f08) * fVar22 + fVar22) *
       fVar4;
  auVar16._8_4_ =
       ((_DAT_145fc6f08 * fVar23 * fVar23 * auVar3._8_4_ - _DAT_145fc6f08) * fVar23 + fVar23) *
       fVar5;
  auVar16._12_4_ =
       ((_DAT_145fc6f08 * fVar24 * fVar24 * auVar3._12_4_ - _DAT_145fc6f08) * fVar24 + fVar24) *
       fVar6;
  auVar3._0_4_ = auVar16._0_4_ * auVar13._0_4_;
  auVar3._4_4_ = auVar16._4_4_ * auVar13._4_4_;
  auVar3._8_4_ = auVar16._8_4_ * auVar13._8_4_;
  auVar3._12_4_ = auVar16._12_4_ * auVar13._12_4_;
  auVar3 = vblendps_avx(auVar3,auVar7,8);
  auVar3 = vhaddps_avx(auVar3,auVar3);
  auVar3 = vhaddps_avx(auVar3,auVar3);
  auVar3 = vmaxps_avx(auVar3,auVar26);
  auVar15 = vminps_avx(auVar3,auVar29);
  fVar31 = auVar15._0_4_;
  auVar27._0_4_ = (float)((uint)fVar31 & _DAT_145fc6f4c);
  fVar32 = auVar15._4_4_;
  auVar27._4_4_ = (float)((uint)fVar32 & _DAT_145fc6f4c);
  fVar33 = auVar15._8_4_;
  auVar27._8_4_ = (float)((uint)fVar33 & _DAT_145fc6f4c);
  fVar34 = auVar15._12_4_;
  auVar27._12_4_ = (float)((uint)fVar34 & _DAT_145fc6f4c);
  auVar21 = vsubps_avx(auVar29,auVar27);
  auVar3 = vrsqrtps_avx(auVar21);
  fVar17 = auVar3._0_4_;
  fVar22 = auVar3._4_4_;
  fVar23 = auVar3._8_4_;
  fVar24 = auVar3._12_4_;
  auVar30._4_4_ = _DAT_146159bfc;
  auVar30._0_4_ = _DAT_146159bfc;
  auVar30._8_4_ = _DAT_146159bfc;
  auVar30._12_4_ = _DAT_146159bfc;
  auVar3 = vcmpps_avx(auVar30,auVar21,2);
  fVar17 = (float)(auVar3._0_4_ &
                  (uint)(((_DAT_145fc6f08 * fVar17 * fVar17 * auVar21._0_4_ - _DAT_145fc6f08) *
                          fVar17 + fVar17) * auVar21._0_4_));
  fVar22 = (float)(auVar3._4_4_ &
                  (uint)(((_DAT_145fc6f08 * fVar22 * fVar22 * auVar21._4_4_ - _DAT_145fc6f08) *
                          fVar22 + fVar22) * auVar21._4_4_));
  fVar23 = (float)(auVar3._8_4_ &
                  (uint)(((_DAT_145fc6f08 * fVar23 * fVar23 * auVar21._8_4_ - _DAT_145fc6f08) *
                          fVar23 + fVar23) * auVar21._8_4_));
  fVar24 = (float)(auVar3._12_4_ &
                  (uint)(((_DAT_145fc6f08 * fVar24 * fVar24 * auVar21._12_4_ - _DAT_145fc6f08) *
                          fVar24 + fVar24) * auVar21._12_4_));
  fVar31 = fVar31 * fVar31 * fVar31 * fVar31 *
           (auVar27._0_4_ *
            (auVar27._0_4_ * (auVar27._0_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
           _DAT_146159c0c) +
           auVar27._0_4_ *
           (auVar27._0_4_ * (auVar27._0_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
           _DAT_146159c1c;
  fVar32 = fVar32 * fVar32 * fVar32 * fVar32 *
           (auVar27._4_4_ *
            (auVar27._4_4_ * (auVar27._4_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
           _DAT_146159c0c) +
           auVar27._4_4_ *
           (auVar27._4_4_ * (auVar27._4_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
           _DAT_146159c1c;
  fVar33 = fVar33 * fVar33 * fVar33 * fVar33 *
           (auVar27._8_4_ *
            (auVar27._8_4_ * (auVar27._8_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
           _DAT_146159c0c) +
           auVar27._8_4_ *
           (auVar27._8_4_ * (auVar27._8_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
           _DAT_146159c1c;
  fVar34 = fVar34 * fVar34 * fVar34 * fVar34 *
           (auVar27._12_4_ *
            (auVar27._12_4_ * (auVar27._12_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
           _DAT_146159c0c) +
           auVar27._12_4_ *
           (auVar27._12_4_ * (auVar27._12_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
           _DAT_146159c1c;
  auVar28._0_4_ = -(fVar31 * fVar17) + _DAT_145fc6f80;
  auVar28._4_4_ = -(fVar32 * fVar22) + _DAT_145fc6f80;
  auVar28._8_4_ = -(fVar33 * fVar23) + _DAT_145fc6f80;
  auVar28._12_4_ = -(fVar34 * fVar24) + _DAT_145fc6f80;
  auVar21._0_4_ = fVar31 * fVar17;
  auVar21._4_4_ = fVar32 * fVar22;
  auVar21._8_4_ = fVar33 * fVar23;
  auVar21._12_4_ = fVar34 * fVar24;
  auVar3 = vblendvps_avx(auVar21,auVar28,auVar15);
  uVar1 = auVar3._0_8_;
  fVar17 = auVar3._0_4_;
  if ((fVar17 != 0.0) || (NAN(fVar17))) {
    auVar15 = vshufps_avx(auVar13,auVar13,0xc9);
    auVar21 = vshufps_avx(auVar16,auVar16,0xd2);
    auVar13 = vshufps_avx(auVar13,auVar13,0xd2);
    auVar14 = vshufps_avx(auVar16,auVar16,0xc9);
    auVar9._0_4_ = (-(auVar13._0_4_ * auVar14._0_4_) + auVar21._0_4_ * auVar15._0_4_) * fVar8;
    auVar9._4_4_ = (-(auVar13._4_4_ * auVar14._4_4_) + auVar21._4_4_ * auVar15._4_4_) * fVar10;
    auVar9._8_4_ = (-(auVar13._8_4_ * auVar14._8_4_) + auVar21._8_4_ * auVar15._8_4_) * fVar11;
    auVar9._12_4_ = (-(auVar13._12_4_ * auVar14._12_4_) + auVar21._12_4_ * auVar15._12_4_) * fVar12;
    auVar15 = vblendps_avx(auVar9,auVar7,8);
    auVar15 = vhaddps_avx(auVar15,auVar15);
    auVar15 = vhaddps_avx(auVar15,auVar15);
    auVar7._0_4_ = (uint)fVar17 ^ _DAT_145fc6f10;
    auVar7._4_4_ = auVar3._4_4_ ^ _DAT_145fc6f10;
    auVar7._8_4_ = auVar3._8_4_ ^ _DAT_145fc6f10;
    auVar7._12_4_ = auVar3._12_4_ ^ _DAT_145fc6f10;
    auVar15 = vcmpss_avx(auVar15,ZEXT416(0) << 0x20,6);
    auVar3 = vblendvps_avx(auVar7,auVar3,auVar15);
    uVar1 = auVar3._0_8_;
  }
  return uVar1;
}

