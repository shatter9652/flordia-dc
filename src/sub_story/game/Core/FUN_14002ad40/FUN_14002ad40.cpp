// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002ad40  size: 462 bytes
// Name:    FUN_14002ad40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14002ad40(undefined1 (*param_1) [16],undefined1 (*param_2) [16],float *param_3)

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
  undefined1 auVar16 [16];
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  auVar1 = *param_1;
  auVar16 = *param_2;
  auVar6._0_12_ = ZEXT812(0);
  auVar6._12_4_ = 0;
  auVar22._4_4_ = _DAT_145fc6ed8;
  auVar22._0_4_ = _DAT_145fc6ed8;
  auVar22._8_4_ = _DAT_145fc6ed8;
  auVar22._12_4_ = _DAT_145fc6ed8;
  fVar17 = auVar16._0_4_;
  auVar9._0_4_ = fVar17 * fVar17;
  fVar21 = auVar16._4_4_;
  auVar9._4_4_ = fVar21 * fVar21;
  fVar26 = auVar16._8_4_;
  auVar9._8_4_ = fVar26 * fVar26;
  fVar3 = auVar16._12_4_;
  auVar9._12_4_ = fVar3 * fVar3;
  fVar19 = auVar1._0_4_;
  auVar12._0_4_ = fVar19 * fVar19;
  fVar24 = auVar1._4_4_;
  auVar12._4_4_ = fVar24 * fVar24;
  fVar27 = auVar1._8_4_;
  auVar12._8_4_ = fVar27 * fVar27;
  fVar4 = auVar1._12_4_;
  auVar12._12_4_ = fVar4 * fVar4;
  auVar8 = vblendps_avx(auVar9,auVar6,8);
  auVar9 = vblendps_avx(auVar12,auVar6,8);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  auVar9 = vhaddps_avx(auVar9,auVar9);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  auVar9 = vhaddps_avx(auVar9,auVar9);
  auVar10._0_4_ = auVar9._0_4_ * auVar8._0_4_;
  auVar10._4_4_ = auVar9._4_4_ * auVar8._4_4_;
  auVar10._8_4_ = auVar9._8_4_ * auVar8._8_4_;
  auVar10._12_4_ = auVar9._12_4_ * auVar8._12_4_;
  auVar8 = vrsqrtps_avx(auVar10);
  fVar20 = auVar8._0_4_;
  fVar25 = auVar8._4_4_;
  fVar2 = auVar8._8_4_;
  fVar5 = auVar8._12_4_;
  auVar13._0_4_ = fVar17 * fVar19;
  auVar13._4_4_ = fVar21 * fVar24;
  auVar13._8_4_ = fVar26 * fVar27;
  auVar13._12_4_ = fVar3 * fVar4;
  auVar8 = vblendps_avx(auVar13,auVar6,8);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  auVar11._0_4_ =
       ((_DAT_145fc6f08 * fVar20 * fVar20 * auVar10._0_4_ - _DAT_145fc6f08) * fVar20 + fVar20) *
       auVar8._0_4_;
  auVar11._4_4_ =
       ((_DAT_145fc6f08 * fVar25 * fVar25 * auVar10._4_4_ - _DAT_145fc6f08) * fVar25 + fVar25) *
       auVar8._4_4_;
  auVar11._8_4_ =
       ((_DAT_145fc6f08 * fVar2 * fVar2 * auVar10._8_4_ - _DAT_145fc6f08) * fVar2 + fVar2) *
       auVar8._8_4_;
  auVar11._12_4_ =
       ((_DAT_145fc6f08 * fVar5 * fVar5 * auVar10._12_4_ - _DAT_145fc6f08) * fVar5 + fVar5) *
       auVar8._12_4_;
  auVar14._4_4_ = _DAT_145fc6f48;
  auVar14._0_4_ = _DAT_145fc6f48;
  auVar14._8_4_ = _DAT_145fc6f48;
  auVar14._12_4_ = _DAT_145fc6f48;
  auVar8 = vmaxps_avx(auVar11,auVar14);
  auVar9 = vminps_avx(auVar8,auVar22);
  fVar24 = auVar9._0_4_;
  auVar15._0_4_ = (float)((uint)fVar24 & _DAT_145fc6f4c);
  fVar25 = auVar9._4_4_;
  auVar15._4_4_ = (float)((uint)fVar25 & _DAT_145fc6f4c);
  fVar26 = auVar9._8_4_;
  auVar15._8_4_ = (float)((uint)fVar26 & _DAT_145fc6f4c);
  fVar27 = auVar9._12_4_;
  auVar15._12_4_ = (float)((uint)fVar27 & _DAT_145fc6f4c);
  auVar10 = vsubps_avx(auVar22,auVar15);
  auVar8 = vrsqrtps_avx(auVar10);
  fVar17 = auVar8._0_4_;
  fVar19 = auVar8._4_4_;
  fVar20 = auVar8._8_4_;
  fVar21 = auVar8._12_4_;
  auVar23._4_4_ = _DAT_146159bfc;
  auVar23._0_4_ = _DAT_146159bfc;
  auVar23._8_4_ = _DAT_146159bfc;
  auVar23._12_4_ = _DAT_146159bfc;
  auVar8 = vcmpps_avx(auVar23,auVar10,2);
  fVar17 = (float)(auVar8._0_4_ &
                  (uint)(((_DAT_145fc6f08 * fVar17 * fVar17 * auVar10._0_4_ - _DAT_145fc6f08) *
                          fVar17 + fVar17) * auVar10._0_4_));
  fVar19 = (float)(auVar8._4_4_ &
                  (uint)(((_DAT_145fc6f08 * fVar19 * fVar19 * auVar10._4_4_ - _DAT_145fc6f08) *
                          fVar19 + fVar19) * auVar10._4_4_));
  fVar20 = (float)(auVar8._8_4_ &
                  (uint)(((_DAT_145fc6f08 * fVar20 * fVar20 * auVar10._8_4_ - _DAT_145fc6f08) *
                          fVar20 + fVar20) * auVar10._8_4_));
  fVar21 = (float)(auVar8._12_4_ &
                  (uint)(((_DAT_145fc6f08 * fVar21 * fVar21 * auVar10._12_4_ - _DAT_145fc6f08) *
                          fVar21 + fVar21) * auVar10._12_4_));
  fVar24 = fVar24 * fVar24 * fVar24 * fVar24 *
           (auVar15._0_4_ *
            (auVar15._0_4_ * (auVar15._0_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
           _DAT_146159c0c) +
           auVar15._0_4_ *
           (auVar15._0_4_ * (auVar15._0_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
           _DAT_146159c1c;
  fVar25 = fVar25 * fVar25 * fVar25 * fVar25 *
           (auVar15._4_4_ *
            (auVar15._4_4_ * (auVar15._4_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
           _DAT_146159c0c) +
           auVar15._4_4_ *
           (auVar15._4_4_ * (auVar15._4_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
           _DAT_146159c1c;
  fVar26 = fVar26 * fVar26 * fVar26 * fVar26 *
           (auVar15._8_4_ *
            (auVar15._8_4_ * (auVar15._8_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
           _DAT_146159c0c) +
           auVar15._8_4_ *
           (auVar15._8_4_ * (auVar15._8_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
           _DAT_146159c1c;
  fVar27 = fVar27 * fVar27 * fVar27 * fVar27 *
           (auVar15._12_4_ *
            (auVar15._12_4_ * (auVar15._12_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
           _DAT_146159c0c) +
           auVar15._12_4_ *
           (auVar15._12_4_ * (auVar15._12_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
           _DAT_146159c1c;
  auVar8 = vshufps_avx(auVar16,auVar16,0xd2);
  auVar10 = vshufps_avx(auVar16,auVar16,0xc9);
  auVar16._0_4_ = -(fVar24 * fVar17) + _DAT_145fc6f80;
  auVar16._4_4_ = -(fVar25 * fVar19) + _DAT_145fc6f80;
  auVar16._8_4_ = -(fVar26 * fVar20) + _DAT_145fc6f80;
  auVar16._12_4_ = -(fVar27 * fVar21) + _DAT_145fc6f80;
  auVar18._0_4_ = fVar24 * fVar17;
  auVar18._4_4_ = fVar25 * fVar19;
  auVar18._8_4_ = fVar26 * fVar20;
  auVar18._12_4_ = fVar27 * fVar21;
  auVar16 = vblendvps_avx(auVar18,auVar16,auVar9);
  auVar9 = vshufps_avx(auVar1,auVar1,0xc9);
  auVar1 = vshufps_avx(auVar1,auVar1,0xd2);
  auVar7._0_4_ = (-(auVar1._0_4_ * auVar10._0_4_) + auVar8._0_4_ * auVar9._0_4_) * *param_3;
  auVar7._4_4_ = (-(auVar1._4_4_ * auVar10._4_4_) + auVar8._4_4_ * auVar9._4_4_) * param_3[1];
  auVar7._8_4_ = (-(auVar1._8_4_ * auVar10._8_4_) + auVar8._8_4_ * auVar9._8_4_) * param_3[2];
  auVar7._12_4_ = (-(auVar1._12_4_ * auVar10._12_4_) + auVar8._12_4_ * auVar9._12_4_) * param_3[3];
  auVar1 = vblendps_avx(auVar7,auVar6,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar8._0_4_ = auVar16._0_4_ ^ _DAT_145fc6f10;
  auVar8._4_4_ = auVar16._4_4_ ^ _DAT_145fc6f10;
  auVar8._8_4_ = auVar16._8_4_ ^ _DAT_145fc6f10;
  auVar8._12_4_ = auVar16._12_4_ ^ _DAT_145fc6f10;
  auVar1 = vcmpss_avx(auVar1,ZEXT416(0) << 0x20,6);
  auVar1 = vblendvps_avx(auVar8,auVar16,auVar1);
  return auVar1._0_8_;
}

