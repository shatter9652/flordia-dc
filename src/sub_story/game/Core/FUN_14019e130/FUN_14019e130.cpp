// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019e130  size: 730 bytes
// Name:    FUN_14019e130
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145063b10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_14019e130(longlong param_1,undefined1 (*param_2) [16],undefined8 param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  
  cVar2 = func_0x000144eec1e0(*(undefined4 *)(param_1 + 0x40));
  if (cVar2 == '\0') {
    uStack_d8 = *(undefined8 *)(param_1 + 0x10);
    uStack_d0 = *(undefined8 *)(param_1 + 0x18);
    func_0x000144e46d90(&uStack_d8,&fStack_c8);
    auVar13._4_4_ = _DAT_145fc6edc;
    auVar13._0_4_ = _DAT_145fc6edc;
    auVar13._8_4_ = _DAT_145fc6edc;
    auVar13._12_4_ = _DAT_145fc6edc;
    fVar6 = *(float *)(param_1 + 0x20) * _DAT_146159b48;
    fVar9 = *(float *)(param_1 + 0x24) * _DAT_146159b48;
    fVar10 = *(float *)(param_1 + 0x28) * _DAT_146159b48;
    fVar11 = *(float *)(param_1 + 0x2c) * _DAT_146159b48;
    auVar12._0_4_ = (uint)fVar6 & _DAT_145fc6f10;
    auVar12._4_4_ = (uint)fVar9 & _DAT_145fc6f10;
    auVar12._8_4_ = (uint)fVar10 & _DAT_145fc6f10;
    auVar12._12_4_ = (uint)fVar11 & _DAT_145fc6f10;
    auVar12 = auVar12 | auVar13;
    auVar14._4_4_ = _DAT_145f43778;
    auVar14._0_4_ = _DAT_145f43778;
    auVar14._8_4_ = _DAT_145f43778;
    auVar14._12_4_ = _DAT_145f43778;
    auVar13 = vpcmpeqd_avx(auVar12,auVar12);
    auVar7._0_4_ = (int)(fVar6 + auVar12._0_4_);
    auVar7._4_4_ = (int)(fVar9 + auVar12._4_4_);
    auVar7._8_4_ = (int)(fVar10 + auVar12._8_4_);
    auVar7._12_4_ = (int)(fVar11 + auVar12._12_4_);
    auVar12 = vcvtdq2ps_avx(auVar7);
    auVar1 = vpsubd_avx(auVar7,auVar13);
    auVar13 = vpand_avx(auVar7,auVar14);
    fVar17 = auVar12._0_4_ * _DAT_146159b50 +
             auVar12._0_4_ * _DAT_146159b4c + *(float *)(param_1 + 0x20) * _DAT_145fc6edc;
    fVar20 = auVar12._4_4_ * _DAT_146159b50 +
             auVar12._4_4_ * _DAT_146159b4c + *(float *)(param_1 + 0x24) * _DAT_145fc6edc;
    fVar21 = auVar12._8_4_ * _DAT_146159b50 +
             auVar12._8_4_ * _DAT_146159b4c + *(float *)(param_1 + 0x28) * _DAT_145fc6edc;
    fVar22 = auVar12._12_4_ * _DAT_146159b50 +
             auVar12._12_4_ * _DAT_146159b4c + *(float *)(param_1 + 0x2c) * _DAT_145fc6edc;
    fVar6 = fVar17 * fVar17;
    fVar9 = fVar20 * fVar20;
    fVar10 = fVar21 * fVar21;
    fVar11 = fVar22 * fVar22;
    auVar24._0_4_ =
         fVar6 * (fVar6 * (fVar6 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar24._4_4_ =
         fVar9 * (fVar9 * (fVar9 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar24._8_4_ =
         fVar10 * (fVar10 * (fVar10 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar24._12_4_ =
         fVar11 * (fVar11 * (fVar11 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar3 = ZEXT416(0) << 0x20;
    auVar23._0_4_ =
         fVar6 * fVar17 * (fVar6 * (fVar6 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar17;
    auVar23._4_4_ =
         fVar9 * fVar20 * (fVar9 * (fVar9 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar20;
    auVar23._8_4_ =
         fVar10 * fVar21 * (fVar10 * (fVar10 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar21;
    auVar23._12_4_ =
         fVar11 * fVar22 * (fVar11 * (fVar11 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar22;
    auVar18._4_4_ = _DAT_145f43774;
    auVar18._0_4_ = _DAT_145f43774;
    auVar18._8_4_ = _DAT_145f43774;
    auVar18._12_4_ = _DAT_145f43774;
    auVar12 = vpcmpeqd_avx(auVar13,auVar3);
    auVar13 = vpsubd_avx(auVar3,auVar13);
    auVar12 = vblendvps_avx(auVar24,auVar23,auVar12);
    auVar13 = vblendvps_avx(auVar24,auVar23,auVar13);
    auVar7 = vpand_avx(auVar7,auVar18);
    auVar1 = vpand_avx(auVar1,auVar18);
    auVar7 = vpcmpeqd_avx(auVar7,auVar3);
    auVar1 = vpcmpeqd_avx(auVar1,auVar3);
    auVar15._0_4_ = auVar12._0_4_ ^ _DAT_145fc6f10;
    auVar15._4_4_ = auVar12._4_4_ ^ _DAT_145fc6f10;
    auVar15._8_4_ = auVar12._8_4_ ^ _DAT_145fc6f10;
    auVar15._12_4_ = auVar12._12_4_ ^ _DAT_145fc6f10;
    auVar3._0_4_ = auVar13._0_4_ ^ _DAT_145fc6f10;
    auVar3._4_4_ = auVar13._4_4_ ^ _DAT_145fc6f10;
    auVar3._8_4_ = auVar13._8_4_ ^ _DAT_145fc6f10;
    auVar3._12_4_ = auVar13._12_4_ ^ _DAT_145fc6f10;
    auVar13 = vblendvps_avx(auVar3,auVar13,auVar1);
    auVar12 = vblendvps_avx(auVar15,auVar12,auVar7);
    fVar6 = auVar13._0_4_;
    auVar7 = vshufps_avx(auVar12,auVar13,0x55);
    fVar9 = auVar12._0_4_;
    auVar1 = vshufps_avx(auVar13,auVar12,0x55);
    auVar3 = vshufps_avx(auVar12,auVar13,0xaa);
    auVar12 = vshufps_avx(auVar13,auVar12,0xaa);
    auVar12 = vshufps_avx(auVar12,auVar12,0xd8);
    auVar13 = vshufps_avx(auVar3,auVar3,0xd8);
    auVar4._0_4_ = (float)((uint)(auVar7._0_4_ * fVar6 * auVar13._0_4_) ^ _DAT_146159b70) +
                   (float)((uint)(fVar9 * auVar1._0_4_ * auVar12._0_4_) ^ _DAT_146159b80);
    auVar4._4_4_ = (float)((uint)(auVar7._4_4_ * fVar6 * auVar13._4_4_) ^ _UNK_146159b74) +
                   (float)((uint)(fVar9 * auVar1._4_4_ * auVar12._4_4_) ^ _UNK_146159b84);
    auVar4._8_4_ = (float)((uint)(auVar7._8_4_ * fVar6 * auVar13._8_4_) ^ _UNK_146159b78) +
                   (float)((uint)(fVar9 * auVar1._8_4_ * auVar12._8_4_) ^ _UNK_146159b88);
    auVar4._12_4_ =
         (float)((uint)(auVar7._12_4_ * fVar6 * auVar13._12_4_) ^ _UNK_146159b7c) +
         (float)((uint)(fVar9 * auVar1._12_4_ * auVar12._12_4_) ^ _UNK_146159b8c);
    auVar8._0_4_ = auVar4._0_4_ + auVar4._0_4_;
    auVar8._4_4_ = auVar4._4_4_ + auVar4._4_4_;
    auVar8._8_4_ = auVar4._8_4_ + auVar4._8_4_;
    auVar8._12_4_ = auVar4._12_4_ + auVar4._12_4_;
    auVar12 = vshufps_avx(auVar4,auVar4,0xff);
    auVar13 = vshufps_avx(auVar4,auVar4,0xc9);
    auVar7 = vshufps_avx(auVar4,auVar4,0xd2);
    auVar1 = vshufps_avx(auVar8,auVar8,0xc9);
    auVar3 = vshufps_avx(auVar8,auVar8,0xd2);
    auVar19._0_4_ = auVar7._0_4_ * auVar8._0_4_ + auVar1._0_4_ * auVar12._0_4_;
    auVar19._4_4_ = auVar7._4_4_ * auVar8._4_4_ + auVar1._4_4_ * auVar12._4_4_;
    auVar19._8_4_ = auVar7._8_4_ * auVar8._8_4_ + auVar1._8_4_ * auVar12._8_4_;
    auVar19._12_4_ = auVar7._12_4_ * auVar8._12_4_ + auVar1._12_4_ * auVar12._12_4_;
    auVar5._0_4_ = -(auVar12._0_4_ * auVar3._0_4_) + auVar13._0_4_ * auVar8._0_4_;
    auVar5._4_4_ = -(auVar12._4_4_ * auVar3._4_4_) + auVar13._4_4_ * auVar8._4_4_;
    auVar5._8_4_ = -(auVar12._8_4_ * auVar3._8_4_) + auVar13._8_4_ * auVar8._8_4_;
    auVar5._12_4_ = -(auVar12._12_4_ * auVar3._12_4_) + auVar13._12_4_ * auVar8._12_4_;
    auVar16._0_4_ = -(auVar3._0_4_ * auVar7._0_4_) - (auVar13._0_4_ * auVar1._0_4_ - _DAT_145fc6ed8)
    ;
    auVar16._4_4_ = -(auVar3._4_4_ * auVar7._4_4_) - (auVar13._4_4_ * auVar1._4_4_ - _DAT_145fc6ed8)
    ;
    auVar16._8_4_ = -(auVar3._8_4_ * auVar7._8_4_) - (auVar13._8_4_ * auVar1._8_4_ - _DAT_145fc6ed8)
    ;
    auVar16._12_4_ =
         -(auVar3._12_4_ * auVar7._12_4_) - (auVar13._12_4_ * auVar1._12_4_ - _DAT_145fc6ed8);
    auVar12 = vblendps_avx(auVar19,auVar5,2);
    auVar13 = vblendps_avx(auVar16,auVar19,2);
    auVar7 = vblendps_avx(auVar5,auVar16,2);
    auVar13 = vblendps_avx(auVar5,auVar13,3);
    *param_2 = auVar13;
    auVar13 = vblendps_avx(auVar19,auVar7,3);
    param_2[1] = auVar13;
    auVar12 = vblendps_avx(auVar16,auVar12,3);
    param_2[2] = auVar12;
  }
  else {
    FUN_145063b10(param_1,&uStack_b8,param_3);
    *(undefined8 *)param_2[1] = uStack_a8;
    *(undefined8 *)(param_2[1] + 8) = uStack_a0;
    *(undefined8 *)param_2[2] = uStack_98;
    *(undefined8 *)(param_2[2] + 8) = uStack_90;
    *(undefined8 *)*param_2 = uStack_b8;
    *(undefined8 *)(*param_2 + 8) = uStack_b0;
    *(undefined8 *)param_2[1] = uStack_a8;
    *(undefined8 *)(param_2[1] + 8) = uStack_a0;
    auVar12 = vpunpckhwd_avx(auStack_88,auStack_88);
    auVar12 = vpsrad_avx(auVar12,0x10);
    auVar12 = vcvtdq2ps_avx(auVar12);
    auVar12 = vshufpd_avx(auVar12,auVar12,3);
    fStack_c8 = auVar12._0_4_ * _DAT_146159c90 + auStack_88._0_4_;
    fStack_c4 = auVar12._4_4_ * _UNK_146159c94 + auStack_88._4_4_;
    fStack_c0 = auVar12._8_4_ * _UNK_146159c98 + auStack_88._8_4_;
    fStack_bc = auVar12._12_4_ * _UNK_146159c9c + auStack_88._12_4_;
  }
  *(float *)param_2[3] = fStack_c8;
  *(float *)(param_2[3] + 4) = fStack_c4;
  *(float *)(param_2[3] + 8) = fStack_c0;
  *(float *)(param_2[3] + 0xc) = fStack_bc;
  return param_2;
}

