// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140089a50  size: 1539 bytes
// Name:    FUN_140089a50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140089a50(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  float param_4,float param_5,float *param_6)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar11;
  float fVar12;
  undefined1 auVar4 [16];
  float fVar13;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar22;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar29;
  float fVar30;
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [64];
  float fVar44;
  float fVar47;
  float fVar48;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [64];
  undefined1 auVar56 [16];
  undefined1 auVar57 [64];
  float fVar58;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 auVar51 [64];
  
  auVar42 = *param_2;
  auVar50._4_4_ = (float)_DAT_145fc6f70;
  auVar50._0_4_ = (float)_DAT_145fc6f70;
  auVar50._8_4_ = (float)_DAT_145fc6f70;
  auVar50._12_4_ = (float)_DAT_145fc6f70;
  auVar24 = vsubps_avx(*param_3,auVar42);
  auVar43 = ZEXT1664(auVar24);
  auVar52 = vsubps_avx(auVar42,*param_1);
  fVar3 = auVar52._0_4_;
  auVar31._0_4_ = (uint)fVar3 & _DAT_145fc6f4c;
  fVar27 = auVar52._4_4_;
  auVar31._4_4_ = (uint)fVar27 & _DAT_145fc6f4c;
  fVar29 = auVar52._8_4_;
  auVar31._8_4_ = (uint)fVar29 & _DAT_145fc6f4c;
  fVar30 = auVar52._12_4_;
  auVar31._12_4_ = (uint)fVar30 & _DAT_145fc6f4c;
  auVar52 = vcmpps_avx(auVar31,auVar50,0x11);
  uVar1 = vmovmskps_avx(auVar52);
  fVar58 = (float)(_DAT_146159bc0 >> 0x20);
  auVar52 = auVar50;
  if ((~(byte)uVar1 & 7) == 0) {
    auVar32._0_4_ = fVar3 * fVar3;
    auVar32._4_4_ = fVar27 * fVar27;
    auVar32._8_4_ = fVar29 * fVar29;
    auVar32._12_4_ = fVar30 * fVar30;
    auVar41._0_12_ = ZEXT812(0);
    auVar41._12_4_ = 0;
    auVar52 = vblendps_avx(auVar32,auVar41,8);
    auVar52 = vhaddps_avx(auVar52,auVar52);
    auVar52 = vhaddps_avx(auVar52,auVar52);
    auVar31 = vrsqrtps_avx(auVar52);
    fVar2 = auVar31._0_4_;
    fVar11 = auVar31._4_4_;
    fVar12 = auVar31._8_4_;
    fVar13 = auVar31._12_4_;
    auVar4._0_4_ = ((_DAT_145fc6f08 * fVar2 * fVar2 * auVar52._0_4_ - _DAT_145fc6f08) * fVar2 +
                   fVar2) * fVar3;
    auVar4._4_4_ = ((_DAT_145fc6f08 * fVar11 * fVar11 * auVar52._4_4_ - _DAT_145fc6f08) * fVar11 +
                   fVar11) * fVar27;
    auVar4._8_4_ = ((_DAT_145fc6f08 * fVar12 * fVar12 * auVar52._8_4_ - _DAT_145fc6f08) * fVar12 +
                   fVar12) * fVar29;
    auVar4._12_4_ =
         ((_DAT_145fc6f08 * fVar13 * fVar13 * auVar52._12_4_ - _DAT_145fc6f08) * fVar13 + fVar13) *
         fVar30;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = _DAT_146159bc0;
    auVar52 = vshufps_avx(auVar4,auVar4,0xc9);
    auVar31 = vshufps_avx(auVar4,auVar4,0xd2);
    auVar4 = vshufps_avx(auVar25,auVar25,0xc9);
    fVar2 = -((float)_DAT_146159bc0 * auVar31._0_4_) + auVar52._0_4_ * auVar4._0_4_;
    fVar11 = -(fVar58 * auVar31._4_4_) + auVar52._4_4_ * auVar4._4_4_;
    fVar12 = -(auVar31._8_4_ * 0.0) + auVar52._8_4_ * auVar4._8_4_;
    fVar13 = -(auVar31._12_4_ * 0.0) + auVar52._12_4_ * auVar4._12_4_;
    auVar33._0_4_ = fVar2 * fVar2;
    auVar33._4_4_ = fVar11 * fVar11;
    auVar33._8_4_ = fVar12 * fVar12;
    auVar33._12_4_ = fVar13 * fVar13;
    auVar52 = vblendps_avx(auVar33,auVar41,8);
    auVar52 = vhaddps_avx(auVar52,auVar52);
    auVar31 = vhaddps_avx(auVar52,auVar52);
    auVar52 = vrsqrtps_avx(auVar31);
    fVar3 = auVar52._0_4_;
    fVar27 = auVar52._4_4_;
    fVar29 = auVar52._8_4_;
    fVar30 = auVar52._12_4_;
    auVar52._0_4_ =
         fVar2 * ((_DAT_145fc6f08 * fVar3 * fVar3 * auVar31._0_4_ - _DAT_145fc6f08) * fVar3 + fVar3)
    ;
    auVar52._4_4_ =
         fVar11 * ((_DAT_145fc6f08 * fVar27 * fVar27 * auVar31._4_4_ - _DAT_145fc6f08) * fVar27 +
                  fVar27);
    auVar52._8_4_ =
         fVar12 * ((_DAT_145fc6f08 * fVar29 * fVar29 * auVar31._8_4_ - _DAT_145fc6f08) * fVar29 +
                  fVar29);
    auVar52._12_4_ =
         fVar13 * ((_DAT_145fc6f08 * fVar30 * fVar30 * auVar31._12_4_ - _DAT_145fc6f08) * fVar30 +
                  fVar30);
  }
  fVar2 = auVar52._0_4_;
  auVar4 = vsubps_avx(*param_1,auVar42);
  auVar55 = ZEXT1664(auVar4);
  fVar3 = auVar24._0_4_;
  auVar14._0_4_ = (uint)fVar3 & _DAT_145fc6f4c;
  fVar27 = auVar24._4_4_;
  auVar14._4_4_ = (uint)fVar27 & _DAT_145fc6f4c;
  fVar29 = auVar24._8_4_;
  auVar14._8_4_ = (uint)fVar29 & _DAT_145fc6f4c;
  fVar30 = auVar24._12_4_;
  auVar14._12_4_ = (uint)fVar30 & _DAT_145fc6f4c;
  auVar31 = vcmpps_avx(auVar14,auVar50,0x11);
  uVar1 = vmovmskps_avx(auVar31);
  if ((~(byte)uVar1 & 7) == 0) {
    auVar15._0_4_ = fVar3 * fVar3;
    auVar15._4_4_ = fVar27 * fVar27;
    auVar15._8_4_ = fVar29 * fVar29;
    auVar15._12_4_ = fVar30 * fVar30;
    auVar31 = vblendps_avx(auVar15,ZEXT416(0) << 0x20,8);
    auVar31 = vhaddps_avx(auVar31,auVar31);
    auVar31 = vhaddps_avx(auVar31,auVar31);
    auVar50 = vrsqrtps_avx(auVar31);
    fVar11 = auVar50._0_4_;
    fVar12 = auVar50._4_4_;
    fVar13 = auVar50._8_4_;
    fVar22 = auVar50._12_4_;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = _DAT_146159bc0;
    auVar16._0_4_ =
         ((_DAT_145fc6f08 * fVar11 * fVar11 * auVar31._0_4_ - _DAT_145fc6f08) * fVar11 + fVar11) *
         fVar3;
    auVar16._4_4_ =
         ((_DAT_145fc6f08 * fVar12 * fVar12 * auVar31._4_4_ - _DAT_145fc6f08) * fVar12 + fVar12) *
         fVar27;
    auVar16._8_4_ =
         ((_DAT_145fc6f08 * fVar13 * fVar13 * auVar31._8_4_ - _DAT_145fc6f08) * fVar13 + fVar13) *
         fVar29;
    auVar16._12_4_ =
         ((_DAT_145fc6f08 * fVar22 * fVar22 * auVar31._12_4_ - _DAT_145fc6f08) * fVar22 + fVar22) *
         fVar30;
    auVar31 = vshufps_avx(auVar16,auVar16,0xc9);
    auVar50 = vshufps_avx(auVar34,auVar34,0xc9);
    auVar32 = vshufps_avx(auVar16,auVar16,0xd2);
    fVar11 = -((float)_DAT_146159bc0 * auVar32._0_4_) + auVar31._0_4_ * auVar50._0_4_;
    fVar12 = -(fVar58 * auVar32._4_4_) + auVar31._4_4_ * auVar50._4_4_;
    fVar13 = -(auVar32._8_4_ * 0.0) + auVar31._8_4_ * auVar50._8_4_;
    fVar22 = -(auVar32._12_4_ * 0.0) + auVar31._12_4_ * auVar50._12_4_;
    auVar35._0_4_ = fVar11 * fVar11;
    auVar35._4_4_ = fVar12 * fVar12;
    auVar35._8_4_ = fVar13 * fVar13;
    auVar35._12_4_ = fVar22 * fVar22;
    auVar31 = vblendps_avx(auVar35,ZEXT416(0) << 0x20,8);
    auVar31 = vhaddps_avx(auVar31,auVar31);
    auVar31 = vhaddps_avx(auVar31,auVar31);
    auVar50 = vrsqrtps_avx(auVar31);
    fVar27 = auVar50._0_4_;
    fVar29 = auVar50._4_4_;
    fVar30 = auVar50._8_4_;
    fVar58 = auVar50._12_4_;
    auVar50._0_4_ =
         fVar11 * ((_DAT_145fc6f08 * fVar27 * fVar27 * auVar31._0_4_ - _DAT_145fc6f08) * fVar27 +
                  fVar27);
    auVar50._4_4_ =
         fVar12 * ((_DAT_145fc6f08 * fVar29 * fVar29 * auVar31._4_4_ - _DAT_145fc6f08) * fVar29 +
                  fVar29);
    auVar50._8_4_ =
         fVar13 * ((_DAT_145fc6f08 * fVar30 * fVar30 * auVar31._8_4_ - _DAT_145fc6f08) * fVar30 +
                  fVar30);
    auVar50._12_4_ =
         fVar22 * ((_DAT_145fc6f08 * fVar58 * fVar58 * auVar31._12_4_ - _DAT_145fc6f08) * fVar58 +
                  fVar58);
  }
  auVar51 = ZEXT1664(auVar50);
  fVar27 = *param_6;
  fVar29 = param_6[1];
  auVar24 = vmovshdup_avx(auVar24);
  auVar52 = vmovshdup_avx(auVar52);
  auVar57 = ZEXT1664(auVar52);
  fVar30 = auVar52._0_4_;
  auVar52 = vmovshdup_avx(auVar4);
  auVar31 = vmovshdup_avx(auVar50);
  fVar58 = auVar31._0_4_ * auVar52._0_4_ + auVar50._0_4_ * auVar4._0_4_;
  fVar11 = fVar29 * auVar52._0_4_ + fVar27 * auVar4._0_4_;
  if ((fVar30 * auVar24._0_4_ + fVar2 * fVar3 < param_5 * auVar24._0_4_ + fVar3 * param_4) &&
     (0.0 < param_5 * auVar31._0_4_ + auVar50._0_4_ * param_4)) {
    fVar12 = fVar30 * param_5 + fVar2 * param_4;
    fVar3 = _DAT_145fc6f80;
    if (_DAT_145fc6f48 < fVar12) {
      if (_DAT_145fc6ed8 <= fVar12) {
        fVar3 = 0.0;
      }
      else {
        fVar3 = (float)func_0x000145f40740();
        fVar30 = auVar57._0_4_;
        auVar4 = auVar55._0_16_;
        auVar50 = auVar51._0_16_;
      }
    }
    fVar12 = fVar3 * _DAT_146159c48;
    auVar38._4_4_ = _DAT_145fc6edc;
    auVar38._0_4_ = _DAT_145fc6edc;
    auVar38._8_4_ = _DAT_145fc6edc;
    auVar38._12_4_ = _DAT_145fc6edc;
    auVar24._0_4_ = (uint)fVar12 & _DAT_145fc6f10;
    auVar24._4_4_ = (uint)fVar12 & _DAT_145fc6f10;
    auVar24._8_4_ = (uint)fVar12 & _DAT_145fc6f10;
    auVar24._12_4_ = (uint)fVar12 & _DAT_145fc6f10;
    auVar24 = auVar24 | auVar38;
    auVar39._4_4_ = _DAT_145f43778;
    auVar39._0_4_ = _DAT_145f43778;
    auVar39._8_4_ = _DAT_145f43778;
    auVar39._12_4_ = _DAT_145f43778;
    auVar52 = vpcmpeqd_avx(auVar24,auVar24);
    auVar28._0_4_ = (int)(fVar12 + auVar24._0_4_);
    auVar28._4_4_ = (int)(fVar12 + auVar24._4_4_);
    auVar28._8_4_ = (int)(fVar12 + auVar24._8_4_);
    auVar28._12_4_ = (int)(fVar12 + auVar24._12_4_);
    auVar32 = vpsubd_avx(auVar28,auVar52);
    auVar52 = vcvtdq2ps_avx(auVar28);
    fVar44 = auVar52._0_4_ * _DAT_146159b50 + auVar52._0_4_ * _DAT_146159b4c + fVar3;
    fVar47 = auVar52._4_4_ * _DAT_146159b50 + auVar52._4_4_ * _DAT_146159b4c + fVar3;
    fVar48 = auVar52._8_4_ * _DAT_146159b50 + auVar52._8_4_ * _DAT_146159b4c + fVar3;
    fVar49 = auVar52._12_4_ * _DAT_146159b50 + auVar52._12_4_ * _DAT_146159b4c + fVar3;
    fVar3 = fVar44 * fVar44;
    fVar12 = fVar47 * fVar47;
    fVar13 = fVar48 * fVar48;
    fVar22 = fVar49 * fVar49;
    auVar19._0_4_ =
         fVar3 * fVar44 * (fVar3 * (fVar3 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar44;
    auVar19._4_4_ =
         fVar12 * fVar47 * (fVar12 * (fVar12 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar47;
    auVar19._8_4_ =
         fVar13 * fVar48 * (fVar13 * (fVar13 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar48;
    auVar19._12_4_ =
         fVar22 * fVar49 * (fVar22 * (fVar22 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar49;
    auVar53._0_4_ =
         fVar3 * (fVar3 * (fVar3 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar53._4_4_ =
         fVar12 * (fVar12 * (fVar12 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar53._8_4_ =
         fVar13 * (fVar13 * (fVar13 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar53._12_4_ =
         fVar22 * (fVar22 * (fVar22 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar52 = vpand_avx(auVar28,auVar39);
    auVar25 = ZEXT416(0) << 0x20;
    auVar24 = vpcmpeqd_avx(auVar52,auVar25);
    auVar31 = vpsubd_avx(auVar25,auVar52);
    auVar52 = vblendvps_avx(auVar53,auVar19,auVar24);
    auVar24 = vblendvps_avx(auVar53,auVar19,auVar31);
    auVar20._4_4_ = _DAT_145f43774;
    auVar20._0_4_ = _DAT_145f43774;
    auVar20._8_4_ = _DAT_145f43774;
    auVar20._12_4_ = _DAT_145f43774;
    auVar31 = vpand_avx(auVar28,auVar20);
    auVar32 = vpand_avx(auVar20,auVar32);
    auVar31 = vpcmpeqd_avx(auVar31,auVar25);
    auVar32 = vpcmpeqd_avx(auVar32,auVar25);
    auVar26._0_4_ = auVar52._0_4_ ^ _DAT_145fc6f10;
    auVar26._4_4_ = auVar52._4_4_ ^ _DAT_145fc6f10;
    auVar26._8_4_ = auVar52._8_4_ ^ _DAT_145fc6f10;
    auVar26._12_4_ = auVar52._12_4_ ^ _DAT_145fc6f10;
    auVar52 = vblendvps_avx(auVar26,auVar52,auVar31);
    auVar40._0_4_ = auVar24._0_4_ ^ _DAT_145fc6f10;
    auVar40._4_4_ = auVar24._4_4_ ^ _DAT_145fc6f10;
    auVar40._8_4_ = auVar24._8_4_ ^ _DAT_145fc6f10;
    auVar40._12_4_ = auVar24._12_4_ ^ _DAT_145fc6f10;
    auVar24 = vblendvps_avx(auVar40,auVar24,auVar32);
    auVar21._0_4_ = auVar4._0_4_ * auVar52._0_4_;
    auVar21._4_4_ = auVar4._4_4_ * auVar52._4_4_;
    auVar21._8_4_ = auVar4._8_4_ * auVar52._8_4_;
    auVar21._12_4_ = auVar4._12_4_ * auVar52._12_4_;
    auVar9._0_4_ = auVar4._0_4_ * auVar24._0_4_;
    auVar9._4_4_ = auVar4._4_4_ * auVar24._4_4_;
    auVar9._8_4_ = auVar4._8_4_ * auVar24._8_4_;
    auVar9._12_4_ = auVar4._12_4_ * auVar24._12_4_;
    auVar52 = vshufps_avx(auVar9,auVar9,0xf1);
    auVar24 = vsubps_avx(auVar52,auVar21);
    auVar10._0_4_ = auVar21._0_4_ + auVar52._0_4_;
    auVar10._4_4_ = auVar21._4_4_ + auVar52._4_4_;
    auVar10._8_4_ = auVar21._8_4_ + auVar52._8_4_;
    auVar10._12_4_ = auVar21._12_4_ + auVar52._12_4_;
    auVar24 = vunpcklps_avx(auVar24,auVar10);
    auVar52 = vshufps_avx(auVar4,auVar10,0xd6);
    auVar52 = vshufps_avx(auVar24,auVar52,0x86);
    fStack_d8 = auVar42._0_4_;
    fStack_d4 = auVar42._4_4_;
    fStack_d0 = auVar42._8_4_;
    fStack_cc = auVar42._12_4_;
    *(float *)*param_1 = auVar52._0_4_ + fStack_d8;
    *(float *)(*param_1 + 4) = auVar52._4_4_ + fStack_d4;
    *(float *)(*param_1 + 8) = auVar52._8_4_ + fStack_d0;
    *(float *)(*param_1 + 0xc) = auVar52._12_4_ + fStack_cc;
  }
  auVar42 = auVar43._0_16_;
  if ((fVar58 < fVar11) && (0.0 < fVar29 * fVar30 + fVar27 * fVar2)) {
    auVar5._0_4_ = auVar50._0_4_ * (float)*(undefined8 *)param_6;
    auVar5._4_4_ = auVar50._4_4_ * (float)((ulonglong)*(undefined8 *)param_6 >> 0x20);
    auVar5._8_4_ = auVar50._8_4_ * 0.0;
    auVar5._12_4_ = auVar50._12_4_ * 0.0;
    auVar52 = vhaddps_avx(auVar5,auVar5);
    fVar3 = _DAT_145fc6f80;
    if (_DAT_145fc6f48 < auVar52._0_4_) {
      if (_DAT_145fc6ed8 <= auVar52._0_4_) {
        fVar3 = 0.0;
      }
      else {
        fVar3 = (float)func_0x000145f40740();
        auVar42 = auVar43._0_16_;
      }
    }
    fVar27 = fVar3 * _DAT_146159c48;
    auVar36._4_4_ = _DAT_145fc6edc;
    auVar36._0_4_ = _DAT_145fc6edc;
    auVar36._8_4_ = _DAT_145fc6edc;
    auVar36._12_4_ = _DAT_145fc6edc;
    auVar23._0_4_ = (uint)fVar27 & _DAT_145fc6f10;
    auVar23._4_4_ = (uint)fVar27 & _DAT_145fc6f10;
    auVar23._8_4_ = (uint)fVar27 & _DAT_145fc6f10;
    auVar23._12_4_ = (uint)fVar27 & _DAT_145fc6f10;
    auVar23 = auVar23 | auVar36;
    auVar37._4_4_ = _DAT_145f43778;
    auVar37._0_4_ = _DAT_145f43778;
    auVar37._8_4_ = _DAT_145f43778;
    auVar37._12_4_ = _DAT_145f43778;
    auVar24 = vpcmpeqd_avx(auVar23,auVar23);
    auVar17._0_4_ = (int)(fVar27 + auVar23._0_4_);
    auVar17._4_4_ = (int)(fVar27 + auVar23._4_4_);
    auVar17._8_4_ = (int)(fVar27 + auVar23._8_4_);
    auVar17._12_4_ = (int)(fVar27 + auVar23._12_4_);
    auVar52 = vcvtdq2ps_avx(auVar17);
    auVar31 = vpsubd_avx(auVar17,auVar24);
    fVar27 = auVar52._0_4_ * _DAT_146159b50 + auVar52._0_4_ * _DAT_146159b4c + fVar3;
    fVar29 = auVar52._4_4_ * _DAT_146159b50 + auVar52._4_4_ * _DAT_146159b4c + fVar3;
    fVar30 = auVar52._8_4_ * _DAT_146159b50 + auVar52._8_4_ * _DAT_146159b4c + fVar3;
    fVar3 = auVar52._12_4_ * _DAT_146159b50 + auVar52._12_4_ * _DAT_146159b4c + fVar3;
    fVar58 = fVar27 * fVar27;
    fVar2 = fVar29 * fVar29;
    fVar11 = fVar30 * fVar30;
    fVar12 = fVar3 * fVar3;
    auVar56._0_4_ =
         fVar58 * fVar27 * (fVar58 * (fVar58 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar27;
    auVar56._4_4_ =
         fVar2 * fVar29 * (fVar2 * (fVar2 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar29;
    auVar56._8_4_ =
         fVar11 * fVar30 * (fVar11 * (fVar11 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar30;
    auVar56._12_4_ =
         fVar12 * fVar3 * (fVar12 * (fVar12 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar3;
    auVar45._4_4_ = _DAT_145f43774;
    auVar45._0_4_ = _DAT_145f43774;
    auVar45._8_4_ = _DAT_145f43774;
    auVar45._12_4_ = _DAT_145f43774;
    auVar52 = vpand_avx(auVar17,auVar37);
    auVar54._0_4_ =
         fVar58 * (fVar58 * (fVar58 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar54._4_4_ =
         fVar2 * (fVar2 * (fVar2 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar54._8_4_ =
         fVar11 * (fVar11 * (fVar11 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar54._12_4_ =
         fVar12 * (fVar12 * (fVar12 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar24 = vpcmpeqd_avx(auVar52,(undefined1  [16])0x0);
    auVar50 = vpsubd_avx((undefined1  [16])0x0,auVar52);
    auVar31 = vpand_avx(auVar31,auVar45);
    auVar52 = vblendvps_avx(auVar54,auVar56,auVar24);
    auVar24 = vblendvps_avx(auVar54,auVar56,auVar50);
    auVar50 = vpand_avx(auVar17,auVar45);
    auVar46._0_4_ = auVar52._0_4_ ^ _DAT_145fc6f10;
    auVar46._4_4_ = auVar52._4_4_ ^ _DAT_145fc6f10;
    auVar46._8_4_ = auVar52._8_4_ ^ _DAT_145fc6f10;
    auVar46._12_4_ = auVar52._12_4_ ^ _DAT_145fc6f10;
    auVar31 = vpcmpeqd_avx(auVar31,(undefined1  [16])0x0);
    auVar6._0_4_ = auVar24._0_4_ ^ _DAT_145fc6f10;
    auVar6._4_4_ = auVar24._4_4_ ^ _DAT_145fc6f10;
    auVar6._8_4_ = auVar24._8_4_ ^ _DAT_145fc6f10;
    auVar6._12_4_ = auVar24._12_4_ ^ _DAT_145fc6f10;
    auVar50 = vpcmpeqd_avx(auVar50,(undefined1  [16])0x0);
    auVar24 = vblendvps_avx(auVar6,auVar24,auVar31);
    auVar52 = vblendvps_avx(auVar46,auVar52,auVar50);
    auVar7._0_4_ = auVar24._0_4_ * auVar42._0_4_;
    auVar7._4_4_ = auVar24._4_4_ * auVar42._4_4_;
    auVar7._8_4_ = auVar24._8_4_ * auVar42._8_4_;
    auVar7._12_4_ = auVar24._12_4_ * auVar42._12_4_;
    auVar18._0_4_ = auVar52._0_4_ * auVar42._0_4_;
    auVar18._4_4_ = auVar52._4_4_ * auVar42._4_4_;
    auVar18._8_4_ = auVar52._8_4_ * auVar42._8_4_;
    auVar18._12_4_ = auVar52._12_4_ * auVar42._12_4_;
    auVar52 = vshufps_avx(auVar7,auVar7,0xf1);
    auVar24 = vsubps_avx(auVar52,auVar18);
    auVar8._0_4_ = auVar18._0_4_ + auVar52._0_4_;
    auVar8._4_4_ = auVar18._4_4_ + auVar52._4_4_;
    auVar8._8_4_ = auVar18._8_4_ + auVar52._8_4_;
    auVar8._12_4_ = auVar18._12_4_ + auVar52._12_4_;
    auVar52 = vunpcklps_avx(auVar24,auVar8);
    auVar42 = vshufps_avx(auVar42,auVar8,0xd6);
    auVar42 = vshufps_avx(auVar52,auVar42,0x86);
    fVar3 = *(float *)(*param_2 + 4);
    fVar27 = *(float *)(*param_2 + 8);
    fVar29 = *(float *)(*param_2 + 0xc);
    *(float *)*param_3 = auVar42._0_4_ + *(float *)*param_2;
    *(float *)(*param_3 + 4) = auVar42._4_4_ + fVar3;
    *(float *)(*param_3 + 8) = auVar42._8_4_ + fVar27;
    *(float *)(*param_3 + 0xc) = auVar42._12_4_ + fVar29;
  }
  return;
}

