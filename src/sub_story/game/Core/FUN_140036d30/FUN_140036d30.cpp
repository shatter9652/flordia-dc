// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140036d30  size: 693 bytes
// Name:    FUN_140036d30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140036ff0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140036d30(undefined1 (*param_1) [16],longlong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  
  FUN_140036ff0(&fStack_a8);
  auVar1._4_4_ = _DAT_146159bd4;
  auVar1._0_4_ = _DAT_146159bd4;
  auVar1._8_4_ = _DAT_146159bd4;
  auVar1._12_4_ = _DAT_146159bd4;
  auVar5._4_4_ = _DAT_145fc6ed8;
  auVar5._0_4_ = _DAT_145fc6ed8;
  auVar5._8_4_ = _DAT_145fc6ed8;
  auVar5._12_4_ = _DAT_145fc6ed8;
  auVar14._4_4_ = _DAT_145fc6edc;
  auVar14._0_4_ = _DAT_145fc6edc;
  auVar14._8_4_ = _DAT_145fc6edc;
  auVar14._12_4_ = _DAT_145fc6edc;
  fVar18 = *(float *)(*(longlong *)(param_2 + 0x40) + 0x3c);
  auVar1 = vrcpps_avx(auVar1);
  fVar7 = auVar1._0_4_;
  fVar15 = auVar1._4_4_;
  fVar16 = auVar1._8_4_;
  fVar17 = auVar1._12_4_;
  auVar2._0_4_ = ((-(fVar7 * _DAT_146159bd4) + _DAT_145fc6ed8) * fVar7 + fVar7) * fStack_a8;
  auVar2._4_4_ = ((-(fVar15 * _DAT_146159bd4) + _DAT_145fc6ed8) * fVar15 + fVar15) * fStack_a4;
  auVar2._8_4_ = ((-(fVar16 * _DAT_146159bd4) + _DAT_145fc6ed8) * fVar16 + fVar16) * fStack_a0;
  auVar2._12_4_ = ((-(fVar17 * _DAT_146159bd4) + _DAT_145fc6ed8) * fVar17 + fVar17) * fStack_9c;
  auVar1 = *(undefined1 (*) [16])(param_2 + 0x20);
  auVar4 = vshufpd_avx(auVar2,auVar2,1);
  fVar7 = *(float *)(param_2 + 0x28) + _DAT_146159ca4 + auVar4._0_4_;
  fVar15 = fVar18 * _DAT_146159c48;
  auVar13._0_4_ = (uint)fVar15 & _DAT_145fc6f10;
  auVar13._4_4_ = (uint)fVar15 & _DAT_145fc6f10;
  auVar13._8_4_ = (uint)fVar15 & _DAT_145fc6f10;
  auVar13._12_4_ = (uint)fVar15 & _DAT_145fc6f10;
  auVar14 = auVar14 | auVar13;
  auVar19._4_4_ = _DAT_145f43778;
  auVar19._0_4_ = _DAT_145f43778;
  auVar19._8_4_ = _DAT_145f43778;
  auVar19._12_4_ = _DAT_145f43778;
  auVar6 = vpcmpeqd_avx(auVar14,auVar14);
  auVar12._0_4_ = (int)(fVar15 + auVar14._0_4_);
  auVar12._4_4_ = (int)(fVar15 + auVar14._4_4_);
  auVar12._8_4_ = (int)(fVar15 + auVar14._8_4_);
  auVar12._12_4_ = (int)(fVar15 + auVar14._12_4_);
  auVar4 = vcvtdq2ps_avx(auVar12);
  auVar8 = vpsubd_avx(auVar12,auVar6);
  fVar15 = auVar4._0_4_ * _DAT_146159b50 + auVar4._0_4_ * _DAT_146159b4c + fVar18;
  fVar16 = auVar4._4_4_ * _DAT_146159b50 + auVar4._4_4_ * _DAT_146159b4c + fVar18;
  fVar17 = auVar4._8_4_ * _DAT_146159b50 + auVar4._8_4_ * _DAT_146159b4c + fVar18;
  fVar18 = auVar4._12_4_ * _DAT_146159b50 + auVar4._12_4_ * _DAT_146159b4c + fVar18;
  fVar20 = fVar15 * fVar15;
  fVar22 = fVar16 * fVar16;
  fVar23 = fVar17 * fVar17;
  fVar24 = fVar18 * fVar18;
  auVar27._0_4_ =
       fVar20 * (fVar20 * (fVar20 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar27._4_4_ =
       fVar22 * (fVar22 * (fVar22 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar27._8_4_ =
       fVar23 * (fVar23 * (fVar23 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar27._12_4_ =
       fVar24 * (fVar24 * (fVar24 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar28._0_4_ =
       fVar20 * fVar15 * (fVar20 * (fVar20 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar15;
  auVar28._4_4_ =
       fVar22 * fVar16 * (fVar22 * (fVar22 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar16;
  auVar28._8_4_ =
       fVar23 * fVar17 * (fVar23 * (fVar23 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar17;
  auVar28._12_4_ =
       fVar24 * fVar18 * (fVar24 * (fVar24 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar18;
  auVar25._4_4_ = _DAT_145f43774;
  auVar25._0_4_ = _DAT_145f43774;
  auVar25._8_4_ = _DAT_145f43774;
  auVar25._12_4_ = _DAT_145f43774;
  auVar4 = vpand_avx(auVar19,auVar12);
  auVar6 = vpcmpeqd_avx((undefined1  [16])0x0,auVar4);
  auVar9 = vpsubd_avx((undefined1  [16])0x0,auVar4);
  auVar4 = vblendps_avx(auVar5,(undefined1  [16])0x0,0xb);
  auVar6 = vblendvps_avx(auVar27,auVar28,auVar6);
  auVar9 = vblendvps_avx(auVar27,auVar28,auVar9);
  auVar3 = vpand_avx(auVar25,auVar12);
  auVar8 = vpand_avx(auVar25,auVar8);
  auVar26._0_4_ = auVar6._0_4_ ^ _DAT_145fc6f10;
  auVar26._4_4_ = auVar6._4_4_ ^ _DAT_145fc6f10;
  auVar26._8_4_ = auVar6._8_4_ ^ _DAT_145fc6f10;
  auVar26._12_4_ = auVar6._12_4_ ^ _DAT_145fc6f10;
  auVar3 = vpcmpeqd_avx((undefined1  [16])0x0,auVar3);
  auVar8 = vpcmpeqd_avx((undefined1  [16])0x0,auVar8);
  auVar3 = vblendvps_avx(auVar26,auVar6,auVar3);
  auVar21._0_4_ = auVar9._0_4_ ^ _DAT_145fc6f10;
  auVar21._4_4_ = auVar9._4_4_ ^ _DAT_145fc6f10;
  auVar21._8_4_ = auVar9._8_4_ ^ _DAT_145fc6f10;
  auVar21._12_4_ = auVar9._12_4_ ^ _DAT_145fc6f10;
  auVar8 = vblendvps_avx(auVar21,auVar9,auVar8);
  auVar10._0_4_ = auVar3._0_4_ ^ _DAT_145fc6f10;
  auVar10._4_4_ = auVar3._4_4_ ^ _DAT_145fc6f10;
  auVar10._8_4_ = auVar3._8_4_ ^ _DAT_145fc6f10;
  auVar10._12_4_ = auVar3._12_4_ ^ _DAT_145fc6f10;
  auVar6 = vblendps_avx((undefined1  [16])0x0,auVar10,1);
  auVar9 = vblendps_avx((undefined1  [16])0x0,auVar8,1);
  auVar5 = vinsertps_avx(auVar8,auVar10,0x1c);
  auVar10 = vunpcklps_avx(auVar9,auVar3);
  auVar12 = vunpcklps_avx(auVar6,auVar8);
  auVar6 = vinsertps_avx(auVar3,auVar8,0x1c);
  fVar18 = auVar1._0_4_;
  auVar1 = vshufps_avx(auVar1,auVar1,0x55);
  auVar9._0_4_ = -(auVar4._0_4_ * fVar7) - (auVar6._0_4_ * auVar1._0_4_ + auVar5._0_4_ * fVar18);
  auVar9._4_4_ = -(auVar4._4_4_ * fVar7) - (auVar6._4_4_ * auVar1._4_4_ + auVar5._4_4_ * fVar18);
  auVar9._8_4_ = -(auVar4._8_4_ * fVar7) - (auVar6._8_4_ * auVar1._8_4_ + auVar5._8_4_ * fVar18);
  auVar9._12_4_ =
       -(auVar4._12_4_ * fVar7) - (auVar6._12_4_ * auVar1._12_4_ + auVar5._12_4_ * fVar18);
  auVar6._0_4_ = auVar9._0_4_ + auVar2._0_4_;
  auVar6._4_4_ = auVar9._4_4_ + auVar2._4_4_;
  auVar6._8_4_ = auVar9._8_4_ + auVar2._8_4_;
  auVar6._12_4_ = auVar9._12_4_ + auVar2._12_4_;
  auVar1 = vsubps_avx(auVar2,auVar9);
  auVar4 = vsubps_avx(auVar1,auVar6);
  auVar8._0_4_ = auVar4._0_4_ * _DAT_145fc6edc;
  auVar8._4_4_ = auVar4._4_4_ * _DAT_145fc6edc;
  auVar8._8_4_ = auVar4._8_4_ * _DAT_145fc6edc;
  auVar8._12_4_ = auVar4._12_4_ * _DAT_145fc6edc;
  auVar3._0_4_ = (auVar1._0_4_ + auVar6._0_4_) * _DAT_145fc6edc;
  auVar3._4_4_ = (auVar1._4_4_ + auVar6._4_4_) * _DAT_145fc6edc;
  auVar3._8_4_ = (auVar1._8_4_ + auVar6._8_4_) * _DAT_145fc6edc;
  auVar3._12_4_ = (auVar1._12_4_ + auVar6._12_4_) * _DAT_145fc6edc;
  auVar1 = vshufps_avx(auVar8,auVar8,0x55);
  auVar4 = vshufps_avx(auVar8,auVar8,0xaa);
  auVar6 = vshufps_avx(auVar3,auVar3,0x55);
  auVar9 = vshufps_avx(auVar3,auVar3,0xaa);
  auVar11._0_4_ =
       _DAT_146159cd0 * auVar4._0_4_ + auVar12._0_4_ * auVar1._0_4_ + auVar8._0_4_ * auVar10._0_4_;
  auVar11._4_4_ =
       _UNK_146159cd4 * auVar4._4_4_ + auVar12._4_4_ * auVar1._4_4_ + auVar8._0_4_ * auVar10._4_4_;
  auVar11._8_4_ =
       _UNK_146159cd8 * auVar4._8_4_ + auVar12._8_4_ * auVar1._8_4_ + auVar8._0_4_ * auVar10._8_4_;
  auVar11._12_4_ =
       _UNK_146159cdc * auVar4._12_4_ +
       auVar12._12_4_ * auVar1._12_4_ + auVar8._0_4_ * auVar10._12_4_;
  auVar4._0_4_ = _DAT_146159cd0 * auVar9._0_4_ +
                 (float)((uint)auVar12._0_4_ & _DAT_145fc6f4c) * auVar6._0_4_ +
                 auVar3._0_4_ * (float)((uint)auVar10._0_4_ & _DAT_145fc6f4c);
  auVar4._4_4_ = _UNK_146159cd4 * auVar9._4_4_ +
                 (float)((uint)auVar12._4_4_ & _DAT_145fc6f4c) * auVar6._4_4_ +
                 auVar3._0_4_ * (float)((uint)auVar10._4_4_ & _DAT_145fc6f4c);
  auVar4._8_4_ = _UNK_146159cd8 * auVar9._8_4_ +
                 (float)((uint)auVar12._8_4_ & _DAT_145fc6f4c) * auVar6._8_4_ +
                 auVar3._0_4_ * (float)((uint)auVar10._8_4_ & _DAT_145fc6f4c);
  auVar4._12_4_ =
       _UNK_146159cdc * auVar9._12_4_ +
       (float)((uint)auVar12._12_4_ & _DAT_145fc6f4c) * auVar6._12_4_ +
       auVar3._0_4_ * (float)((uint)auVar10._12_4_ & _DAT_145fc6f4c);
  auVar1 = vsubps_avx(auVar11,auVar4);
  *param_1 = auVar1;
  *(float *)param_1[1] = auVar11._0_4_ + auVar4._0_4_;
  *(float *)(param_1[1] + 4) = auVar11._4_4_ + auVar4._4_4_;
  *(float *)(param_1[1] + 8) = auVar11._8_4_ + auVar4._8_4_;
  *(float *)(param_1[1] + 0xc) = auVar11._12_4_ + auVar4._12_4_;
  return;
}

