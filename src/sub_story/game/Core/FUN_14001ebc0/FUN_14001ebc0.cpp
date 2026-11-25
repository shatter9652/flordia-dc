// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001ebc0  size: 825 bytes
// Name:    FUN_14001ebc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144db6f00, FUN_144e15620, FUN_144da0e70, FUN_144daa460
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001ebc0(longlong param_1,longlong *param_2,char param_3,undefined1 (*param_4) [16],
                  float param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar7;
  float fVar8;
  undefined1 auVar5 [16];
  float fVar9;
  undefined1 auVar6 [16];
  float fVar10;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  float fVar28;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [12];
  float fStack_ac;
  undefined1 aauStack_a8 [7] [16];
  
  uVar1 = (**(code **)(*param_2 + 0x28))(param_2);
  FUN_144db6f00(param_1,aauStack_a8,uVar1);
  auVar31 = vsubps_avx(*param_4,aauStack_a8[0]);
  auVar35 = ZEXT1664(auVar31);
  (**(code **)(*param_2 + 8))(param_2,auStack_b8);
  auVar31._12_4_ = fStack_ac;
  auVar31._0_12_ = auStack_b8;
  auVar6 = auVar35._0_16_;
  auVar12 = vshufps_avx(auVar6,auVar6,0xd2);
  auVar6 = vshufps_avx(auVar6,auVar6,0xc9);
  auVar5._0_4_ = auStack_b8._0_4_ ^ _DAT_145fc6f10;
  auVar5._4_4_ = auStack_b8._4_4_ ^ _DAT_145fc6f10;
  auVar5._8_4_ = auStack_b8._8_4_ ^ _DAT_145fc6f10;
  auVar5._12_4_ = (uint)fStack_ac ^ _DAT_145fc6f10;
  auVar31 = vblendps_avx(auVar5,auVar31,8);
  auVar5 = vshufps_avx(auVar31,auVar31,0xc9);
  auVar31 = vshufps_avx(auVar31,auVar31,0xd2);
  fVar10 = -(auVar31._0_4_ * auVar6._0_4_) + auVar5._0_4_ * auVar12._0_4_;
  fVar14 = -(auVar31._4_4_ * auVar6._4_4_) + auVar5._4_4_ * auVar12._4_4_;
  fVar15 = -(auVar31._8_4_ * auVar6._8_4_) + auVar5._8_4_ * auVar12._8_4_;
  fVar16 = -(auVar31._12_4_ * auVar6._12_4_) + auVar5._12_4_ * auVar12._12_4_;
  auVar11._0_4_ = fVar10 + fVar10;
  auVar11._4_4_ = fVar14 + fVar14;
  auVar11._8_4_ = fVar15 + fVar15;
  auVar11._12_4_ = fVar16 + fVar16;
  auVar12 = vshufps_avx(auVar11,auVar11,0xd2);
  auVar6 = vshufps_avx(auVar11,auVar11,0xc9);
  fVar4 = auVar11._0_4_ * fStack_ac + auVar35._0_4_ +
          -(auVar31._0_4_ * auVar6._0_4_) + auVar12._0_4_ * auVar5._0_4_;
  fVar7 = auVar11._4_4_ * fStack_ac + auVar35._4_4_ +
          -(auVar31._4_4_ * auVar6._4_4_) + auVar12._4_4_ * auVar5._4_4_;
  fVar8 = auVar11._8_4_ * fStack_ac + auVar35._8_4_ +
          -(auVar31._8_4_ * auVar6._8_4_) + auVar12._8_4_ * auVar5._8_4_;
  fVar9 = auVar11._12_4_ * fStack_ac + auVar35._12_4_ +
          -(auVar31._12_4_ * auVar6._12_4_) + auVar12._12_4_ * auVar5._12_4_;
  auVar3 = ZEXT416(0) << 0x20;
  auVar12._0_4_ = fVar4 * fVar4;
  auVar12._4_4_ = fVar7 * fVar7;
  auVar12._8_4_ = fVar8 * fVar8;
  auVar12._12_4_ = fVar9 * fVar9;
  auVar31 = vblendps_avx(auVar12,auVar3,8);
  auVar31 = vhaddps_avx(auVar31,auVar31);
  auVar5 = vhaddps_avx(auVar31,auVar31);
  auVar31 = vrsqrtps_avx(auVar5);
  fVar10 = auVar31._0_4_;
  fVar14 = auVar31._4_4_;
  fVar15 = auVar31._8_4_;
  fVar16 = auVar31._12_4_;
  auVar6 = vcmpps_avx(auVar3,auVar5,1);
  auVar22._4_4_ = _DAT_145fc6edc;
  auVar22._0_4_ = _DAT_145fc6edc;
  auVar22._8_4_ = _DAT_145fc6edc;
  auVar22._12_4_ = _DAT_145fc6edc;
  fVar21 = param_5 * _DAT_145fc6edc;
  param_5 = param_5 * _DAT_146159b48;
  auVar17._0_4_ = (uint)param_5 & _DAT_145fc6f10;
  auVar17._4_4_ = (uint)param_5 & _DAT_145fc6f10;
  auVar17._8_4_ = (uint)param_5 & _DAT_145fc6f10;
  auVar17._12_4_ = (uint)param_5 & _DAT_145fc6f10;
  auVar17 = auVar17 | auVar22;
  auVar23._4_4_ = _DAT_145f43778;
  auVar23._0_4_ = _DAT_145f43778;
  auVar23._8_4_ = _DAT_145f43778;
  auVar23._12_4_ = _DAT_145f43778;
  auVar12 = vpcmpeqd_avx(auVar17,auVar17);
  auVar13._0_4_ = (int)(param_5 + auVar17._0_4_);
  auVar13._4_4_ = (int)(param_5 + auVar17._4_4_);
  auVar13._8_4_ = (int)(param_5 + auVar17._8_4_);
  auVar13._12_4_ = (int)(param_5 + auVar17._12_4_);
  auVar31 = vcvtdq2ps_avx(auVar13);
  auVar17 = vpsubd_avx(auVar13,auVar12);
  fVar18 = auVar31._0_4_ * _DAT_146159b50 + auVar31._0_4_ * _DAT_146159b4c + fVar21;
  fVar19 = auVar31._4_4_ * _DAT_146159b50 + auVar31._4_4_ * _DAT_146159b4c + fVar21;
  fVar20 = auVar31._8_4_ * _DAT_146159b50 + auVar31._8_4_ * _DAT_146159b4c + fVar21;
  fVar21 = auVar31._12_4_ * _DAT_146159b50 + auVar31._12_4_ * _DAT_146159b4c + fVar21;
  fVar28 = fVar18 * fVar18;
  fVar32 = fVar19 * fVar19;
  fVar33 = fVar20 * fVar20;
  fVar34 = fVar21 * fVar21;
  auVar37._0_4_ =
       fVar28 * fVar18 * (fVar28 * (fVar28 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar18;
  auVar37._4_4_ =
       fVar32 * fVar19 * (fVar32 * (fVar32 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar19;
  auVar37._8_4_ =
       fVar33 * fVar20 * (fVar33 * (fVar33 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar20;
  auVar37._12_4_ =
       fVar34 * fVar21 * (fVar34 * (fVar34 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar21;
  auVar31 = vpand_avx(auVar13,auVar23);
  auVar12 = vpcmpeqd_avx(auVar31,auVar3);
  auVar11 = vpsubd_avx(auVar3,auVar31);
  auVar38._0_4_ =
       fVar28 * (fVar28 * (fVar28 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar38._4_4_ =
       fVar32 * (fVar32 * (fVar32 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar38._8_4_ =
       fVar33 * (fVar33 * (fVar33 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar38._12_4_ =
       fVar34 * (fVar34 * (fVar34 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar29._4_4_ = _DAT_145f43774;
  auVar29._0_4_ = _DAT_145f43774;
  auVar29._8_4_ = _DAT_145f43774;
  auVar29._12_4_ = _DAT_145f43774;
  auVar31 = vblendvps_avx(auVar38,auVar37,auVar12);
  auVar12 = vblendvps_avx(auVar38,auVar37,auVar11);
  auVar11 = vpand_avx(auVar13,auVar29);
  auVar17 = vpand_avx(auVar17,auVar29);
  auVar30._0_4_ = auVar31._0_4_ ^ _DAT_145fc6f10;
  auVar30._4_4_ = auVar31._4_4_ ^ _DAT_145fc6f10;
  auVar30._8_4_ = auVar31._8_4_ ^ _DAT_145fc6f10;
  auVar30._12_4_ = auVar31._12_4_ ^ _DAT_145fc6f10;
  auVar11 = vpcmpeqd_avx(auVar11,auVar3);
  auVar17 = vpcmpeqd_avx(auVar17,auVar3);
  auVar31 = vblendvps_avx(auVar30,auVar31,auVar11);
  auVar35 = ZEXT1664(CONCAT412(auVar31._12_4_ *
                               (float)(auVar6._12_4_ &
                                      (uint)(fVar9 * ((fVar16 * fVar16 * auVar5._12_4_ *
                                                       _DAT_145fc6f08 - _DAT_145fc6f08) * fVar16 +
                                                     fVar16))),
                               CONCAT48(auVar31._8_4_ *
                                        (float)(auVar6._8_4_ &
                                               (uint)(fVar8 * ((fVar15 * fVar15 * auVar5._8_4_ *
                                                                _DAT_145fc6f08 - _DAT_145fc6f08) *
                                                               fVar15 + fVar15))),
                                        CONCAT44(auVar31._4_4_ *
                                                 (float)(auVar6._4_4_ &
                                                        (uint)(fVar7 * ((fVar14 * fVar14 *
                                                                         auVar5._4_4_ *
                                                                         _DAT_145fc6f08 -
                                                                        _DAT_145fc6f08) * fVar14 +
                                                                       fVar14))),
                                                 auVar31._0_4_ *
                                                 (float)(auVar6._0_4_ &
                                                        (uint)(fVar4 * ((fVar10 * fVar10 *
                                                                         auVar5._0_4_ *
                                                                         _DAT_145fc6f08 -
                                                                        _DAT_145fc6f08) * fVar10 +
                                                                       fVar10)))))));
  auVar6._0_4_ = auVar12._0_4_ ^ _DAT_145fc6f10;
  auVar6._4_4_ = auVar12._4_4_ ^ _DAT_145fc6f10;
  auVar6._8_4_ = auVar12._8_4_ ^ _DAT_145fc6f10;
  auVar6._12_4_ = auVar12._12_4_ ^ _DAT_145fc6f10;
  auVar31 = vblendvps_avx(auVar6,auVar12,auVar17);
  auVar36 = ZEXT1664(auVar31);
  uVar24 = _DAT_145fc6f10;
  uVar25 = _DAT_145fc6f10;
  uVar26 = _DAT_145fc6f10;
  uVar27 = _DAT_145fc6f10;
  FUN_144daa460(param_1,auStack_c8,uVar1);
  auVar6 = vshufps_avx(auVar36._0_16_,auVar36._0_16_,0xff);
  fVar10 = auVar35._0_4_;
  auVar31 = auVar35._0_16_;
  auVar5 = vshufps_avx(auVar31,auVar31,0x55);
  auVar11 = vshufps_avx(auVar31,auVar31,0xaa);
  auVar3._0_4_ = (uint)auStack_c8._0_4_ ^ uVar24;
  auVar3._4_4_ = (uint)auStack_c8._4_4_ ^ uVar25;
  auVar3._8_4_ = (uint)auStack_c8._8_4_ ^ uVar26;
  auVar3._12_4_ = (uint)auStack_c8._12_4_ ^ uVar27;
  auVar31 = vblendps_avx(auVar3,auStack_c8,10);
  auVar17 = vshufps_avx(auVar31,auVar31,0x1b);
  auVar12 = vshufpd_avx(auStack_c8,auVar3,1);
  auVar31 = vblendps_avx(auVar3,auStack_c8,9);
  auVar31 = vshufps_avx(auVar31,auVar31,0xb1);
  auStack_e8._0_4_ =
       auVar11._0_4_ * auVar31._0_4_ +
       auVar5._0_4_ * auVar12._0_4_ + fVar10 * auVar17._0_4_ + auVar6._0_4_ * auStack_c8._0_4_;
  auStack_e8._4_4_ =
       auVar11._4_4_ * auVar31._4_4_ +
       auVar5._4_4_ * auVar12._4_4_ + fVar10 * auVar17._4_4_ + auVar6._4_4_ * auStack_c8._4_4_;
  auStack_e8._8_4_ =
       auVar11._8_4_ * auVar31._8_4_ +
       auVar5._8_4_ * auVar12._8_4_ + fVar10 * auVar17._8_4_ + auVar6._8_4_ * auStack_c8._8_4_;
  auStack_e8._12_4_ =
       auVar11._12_4_ * auVar31._12_4_ +
       auVar5._12_4_ * auVar12._12_4_ + fVar10 * auVar17._12_4_ + auVar6._12_4_ * auStack_c8._12_4_;
  if (param_3 != '\0') {
    lVar2 = (**(code **)(*param_2 + 0x40))(param_2,(int)param_2[3]);
    if (lVar2 != 0) {
      FUN_144e15620(auStack_d8,*(undefined8 *)(param_1 + 8),uVar1,auStack_e8,lVar2,0);
    }
  }
  FUN_144da0e70(param_1,uVar1,auStack_e8);
  return;
}

