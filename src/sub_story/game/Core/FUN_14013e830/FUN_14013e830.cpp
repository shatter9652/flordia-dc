// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013e830  size: 1460 bytes
// Name:    FUN_14013e830
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013e830(uint param_1,longlong param_2,int param_3,float *param_4,
                  undefined1 (*param_5) [16])

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar20;
  float fVar28;
  float fVar29;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
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
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  
  fVar6 = *param_4;
  fVar15 = param_4[1];
  fVar17 = param_4[2];
  fVar19 = param_4[3];
  auVar1 = vcvtph2ps_f16c(*(undefined1 (*) [16])(param_2 + 0x50));
  fVar5 = fVar6 * _DAT_146159b38;
  fVar14 = fVar15 * _DAT_146159b38;
  fVar16 = fVar17 * _DAT_146159b38;
  fVar18 = fVar19 * _DAT_146159b38;
  auVar12 = vunpcklps_avx(*param_5,param_5[2]);
  auVar36 = vunpckhps_avx(*param_5,param_5[2]);
  auVar39 = vshufps_avx(auVar1._0_16_,auVar1._0_16_,0xff);
  auVar2._0_4_ = auVar1._0_4_ * auVar39._0_4_;
  auVar2._4_4_ = auVar1._4_4_ * auVar39._4_4_;
  auVar2._8_4_ = auVar1._8_4_ * auVar39._8_4_;
  auVar2._12_4_ = auVar1._12_4_ * auVar39._12_4_;
  auVar21 = ZEXT816(0) << 0x20;
  auVar39 = vunpckhps_avx(param_5[1],auVar21);
  auVar3 = vunpcklps_avx(param_5[1],auVar21);
  auVar13 = vunpcklps_avx(auVar36,auVar39);
  auVar26 = vunpcklps_avx(auVar12,auVar3);
  auVar12 = vunpckhps_avx(auVar12,auVar3);
  auVar39 = vshufps_avx(auVar2,auVar2,0x55);
  auVar36 = vshufps_avx(auVar2,auVar2,0xaa);
  auVar3._0_4_ = auVar13._0_4_ * auVar36._0_4_ +
                 auVar12._0_4_ * auVar39._0_4_ + auVar2._0_4_ * auVar26._0_4_;
  auVar3._4_4_ = auVar13._4_4_ * auVar36._4_4_ +
                 auVar12._4_4_ * auVar39._4_4_ + auVar2._0_4_ * auVar26._4_4_;
  auVar3._8_4_ = auVar13._8_4_ * auVar36._8_4_ +
                 auVar12._8_4_ * auVar39._8_4_ + auVar2._0_4_ * auVar26._8_4_;
  auVar3._12_4_ =
       auVar13._12_4_ * auVar36._12_4_ +
       auVar12._12_4_ * auVar39._12_4_ + auVar2._0_4_ * auVar26._12_4_;
  if (param_3 == 0) {
    auVar44._4_4_ = _DAT_145fc6edc;
    auVar44._0_4_ = _DAT_145fc6edc;
    auVar44._8_4_ = _DAT_145fc6edc;
    auVar44._12_4_ = _DAT_145fc6edc;
    auVar41._0_4_ = (uint)(fVar6 * _DAT_14615a294) & _DAT_145fc6f10;
    auVar41._4_4_ = (uint)(fVar15 * _DAT_14615a294) & _DAT_145fc6f10;
    auVar41._8_4_ = (uint)(fVar17 * _DAT_14615a294) & _DAT_145fc6f10;
    auVar41._12_4_ = (uint)(fVar19 * _DAT_14615a294) & _DAT_145fc6f10;
    auVar41 = auVar41 | auVar44;
    auVar45._4_4_ = _DAT_145f43778;
    auVar45._0_4_ = _DAT_145f43778;
    auVar45._8_4_ = _DAT_145f43778;
    auVar45._12_4_ = _DAT_145f43778;
    auVar36 = vpcmpeqd_avx(auVar41,auVar41);
    auVar35._0_4_ = (int)(auVar41._0_4_ + fVar6 * _DAT_14615a294);
    auVar35._4_4_ = (int)(auVar41._4_4_ + fVar15 * _DAT_14615a294);
    auVar35._8_4_ = (int)(auVar41._8_4_ + fVar17 * _DAT_14615a294);
    auVar35._12_4_ = (int)(auVar41._12_4_ + fVar19 * _DAT_14615a294);
    auVar39 = vcvtdq2ps_avx(auVar35);
    auVar13 = vpsubd_avx(auVar35,auVar36);
    fVar6 = auVar39._0_4_ * _DAT_146159b50 + auVar39._0_4_ * _DAT_146159b4c + fVar5;
    fVar15 = auVar39._4_4_ * _DAT_146159b50 + auVar39._4_4_ * _DAT_146159b4c + fVar14;
    fVar17 = auVar39._8_4_ * _DAT_146159b50 + auVar39._8_4_ * _DAT_146159b4c + fVar16;
    fVar19 = auVar39._12_4_ * _DAT_146159b50 + auVar39._12_4_ * _DAT_146159b4c + fVar18;
    fVar5 = fVar6 * fVar6;
    fVar14 = fVar15 * fVar15;
    fVar16 = fVar17 * fVar17;
    fVar18 = fVar19 * fVar19;
    auVar52._0_4_ =
         fVar5 * fVar6 * (fVar5 * (fVar5 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar6;
    auVar52._4_4_ =
         fVar14 * fVar15 * (fVar14 * (fVar14 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar15;
    auVar52._8_4_ =
         fVar16 * fVar17 * (fVar16 * (fVar16 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar17;
    auVar52._12_4_ =
         fVar18 * fVar19 * (fVar18 * (fVar18 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar19;
    auVar39 = vpand_avx(auVar45,auVar35);
    auVar36 = vpcmpeqd_avx(auVar39,auVar21);
    auVar12 = vpsubd_avx(auVar21,auVar39);
    auVar55._0_4_ =
         fVar5 * (fVar5 * (fVar5 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar55._4_4_ =
         fVar14 * (fVar14 * (fVar14 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar55._8_4_ =
         fVar16 * (fVar16 * (fVar16 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar55._12_4_ =
         fVar18 * (fVar18 * (fVar18 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar46._4_4_ = _DAT_145f43774;
    auVar46._0_4_ = _DAT_145f43774;
    auVar46._8_4_ = _DAT_145f43774;
    auVar46._12_4_ = _DAT_145f43774;
    auVar39 = vblendvps_avx(auVar55,auVar52,auVar36);
    auVar36 = vblendvps_avx(auVar55,auVar52,auVar12);
    auVar12 = vpand_avx(auVar46,auVar35);
    auVar13 = vpand_avx(auVar13,auVar46);
    auVar47._0_4_ = auVar39._0_4_ ^ _DAT_145fc6f10;
    auVar47._4_4_ = auVar39._4_4_ ^ _DAT_145fc6f10;
    auVar47._8_4_ = auVar39._8_4_ ^ _DAT_145fc6f10;
    auVar47._12_4_ = auVar39._12_4_ ^ _DAT_145fc6f10;
    auVar31._0_4_ = auVar36._0_4_ ^ _DAT_145fc6f10;
    auVar31._4_4_ = auVar36._4_4_ ^ _DAT_145fc6f10;
    auVar31._8_4_ = auVar36._8_4_ ^ _DAT_145fc6f10;
    auVar31._12_4_ = auVar36._12_4_ ^ _DAT_145fc6f10;
    auVar12 = vpcmpeqd_avx(auVar12,auVar21);
    auVar21 = vpcmpeqd_avx(auVar13,auVar21);
    auVar36 = vblendvps_avx(auVar31,auVar36,auVar21);
    auVar39 = vblendvps_avx(auVar47,auVar39,auVar12);
    auVar7._0_4_ = auVar36._0_4_ * auVar3._0_4_;
    auVar7._4_4_ = auVar36._4_4_ * auVar3._4_4_;
    auVar7._8_4_ = auVar36._8_4_ * auVar3._8_4_;
    auVar7._12_4_ = auVar36._12_4_ * auVar3._12_4_;
    auVar22._0_4_ = auVar39._0_4_ * auVar3._0_4_;
    auVar22._4_4_ = auVar39._4_4_ * auVar3._4_4_;
    auVar22._8_4_ = auVar39._8_4_ * auVar3._8_4_;
    auVar22._12_4_ = auVar39._12_4_ * auVar3._12_4_;
    auVar39 = vshufps_avx(auVar7,auVar7,0xdb);
    auVar36 = vsubps_avx(auVar39,auVar22);
    auVar8._0_4_ = auVar22._0_4_ + auVar39._0_4_;
    auVar8._4_4_ = auVar22._4_4_ + auVar39._4_4_;
    auVar8._8_4_ = auVar22._8_4_ + auVar39._8_4_;
    auVar8._12_4_ = auVar22._12_4_ + auVar39._12_4_;
    auVar39 = vmovlhps_avx(auVar3,auVar8);
    auVar39 = vblendps_avx(auVar39,auVar36,4);
    auVar21 = vshufps_avx(auVar39,auVar39,0xf8);
  }
  else if (param_3 == 1) {
    auVar37._4_4_ = _DAT_145fc6edc;
    auVar37._0_4_ = _DAT_145fc6edc;
    auVar37._8_4_ = _DAT_145fc6edc;
    auVar37._12_4_ = _DAT_145fc6edc;
    auVar36._0_4_ = (uint)(fVar6 * _DAT_14615a294) & _DAT_145fc6f10;
    auVar36._4_4_ = (uint)(fVar15 * _DAT_14615a294) & _DAT_145fc6f10;
    auVar36._8_4_ = (uint)(fVar17 * _DAT_14615a294) & _DAT_145fc6f10;
    auVar36._12_4_ = (uint)(fVar19 * _DAT_14615a294) & _DAT_145fc6f10;
    auVar37 = auVar37 | auVar36;
    auVar42._4_4_ = _DAT_145f43778;
    auVar42._0_4_ = _DAT_145f43778;
    auVar42._8_4_ = _DAT_145f43778;
    auVar42._12_4_ = _DAT_145f43778;
    auVar36 = vpcmpeqd_avx(auVar37,auVar37);
    auVar32._0_4_ = (int)(fVar6 * _DAT_14615a294 + auVar37._0_4_);
    auVar32._4_4_ = (int)(fVar15 * _DAT_14615a294 + auVar37._4_4_);
    auVar32._8_4_ = (int)(fVar17 * _DAT_14615a294 + auVar37._8_4_);
    auVar32._12_4_ = (int)(fVar19 * _DAT_14615a294 + auVar37._12_4_);
    auVar39 = vcvtdq2ps_avx(auVar32);
    auVar21 = vpsubd_avx(auVar32,auVar36);
    fVar6 = auVar39._0_4_ * _DAT_146159b50 + auVar39._0_4_ * _DAT_146159b4c + fVar5;
    fVar15 = auVar39._4_4_ * _DAT_146159b50 + auVar39._4_4_ * _DAT_146159b4c + fVar14;
    fVar17 = auVar39._8_4_ * _DAT_146159b50 + auVar39._8_4_ * _DAT_146159b4c + fVar16;
    fVar19 = auVar39._12_4_ * _DAT_146159b50 + auVar39._12_4_ * _DAT_146159b4c + fVar18;
    fVar5 = fVar6 * fVar6;
    fVar14 = fVar15 * fVar15;
    fVar16 = fVar17 * fVar17;
    fVar18 = fVar19 * fVar19;
    auVar56._0_4_ =
         fVar5 * fVar6 * (fVar5 * (fVar5 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar6;
    auVar56._4_4_ =
         fVar14 * fVar15 * (fVar14 * (fVar14 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar15;
    auVar56._8_4_ =
         fVar16 * fVar17 * (fVar16 * (fVar16 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar17;
    auVar56._12_4_ =
         fVar18 * fVar19 * (fVar18 * (fVar18 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar19;
    auVar48._4_4_ = _DAT_145f43774;
    auVar48._0_4_ = _DAT_145f43774;
    auVar48._8_4_ = _DAT_145f43774;
    auVar48._12_4_ = _DAT_145f43774;
    auVar39 = vpand_avx(auVar42,auVar32);
    auVar53._0_4_ =
         fVar5 * (fVar5 * (fVar5 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar53._4_4_ =
         fVar14 * (fVar14 * (fVar14 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar53._8_4_ =
         fVar16 * (fVar16 * (fVar16 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar53._12_4_ =
         fVar18 * (fVar18 * (fVar18 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar36 = vpcmpeqd_avx((undefined1  [16])0x0,auVar39);
    auVar12 = vpsubd_avx((undefined1  [16])0x0,auVar39);
    auVar21 = vpand_avx(auVar48,auVar21);
    auVar39 = vblendvps_avx(auVar53,auVar56,auVar36);
    auVar36 = vblendvps_avx(auVar53,auVar56,auVar12);
    auVar12 = vpand_avx(auVar48,auVar32);
    auVar49._0_4_ = auVar39._0_4_ ^ _DAT_145fc6f10;
    auVar49._4_4_ = auVar39._4_4_ ^ _DAT_145fc6f10;
    auVar49._8_4_ = auVar39._8_4_ ^ _DAT_145fc6f10;
    auVar49._12_4_ = auVar39._12_4_ ^ _DAT_145fc6f10;
    auVar21 = vpcmpeqd_avx((undefined1  [16])0x0,auVar21);
    auVar23._0_4_ = auVar36._0_4_ ^ _DAT_145fc6f10;
    auVar23._4_4_ = auVar36._4_4_ ^ _DAT_145fc6f10;
    auVar23._8_4_ = auVar36._8_4_ ^ _DAT_145fc6f10;
    auVar23._12_4_ = auVar36._12_4_ ^ _DAT_145fc6f10;
    auVar12 = vpcmpeqd_avx((undefined1  [16])0x0,auVar12);
    auVar36 = vblendvps_avx(auVar23,auVar36,auVar21);
    auVar39 = vblendvps_avx(auVar49,auVar39,auVar12);
    auVar9._0_4_ = auVar36._0_4_ * auVar3._0_4_;
    auVar9._4_4_ = auVar36._4_4_ * auVar3._4_4_;
    auVar9._8_4_ = auVar36._8_4_ * auVar3._8_4_;
    auVar9._12_4_ = auVar36._12_4_ * auVar3._12_4_;
    auVar24._0_4_ = auVar39._0_4_ * auVar3._0_4_;
    auVar24._4_4_ = auVar39._4_4_ * auVar3._4_4_;
    auVar24._8_4_ = auVar39._8_4_ * auVar3._8_4_;
    auVar24._12_4_ = auVar39._12_4_ * auVar3._12_4_;
    auVar39 = vshufps_avx(auVar9,auVar9,0xce);
    auVar36 = vsubps_avx(auVar39,auVar24);
    auVar10._0_4_ = auVar24._0_4_ + auVar39._0_4_;
    auVar10._4_4_ = auVar24._4_4_ + auVar39._4_4_;
    auVar10._8_4_ = auVar24._8_4_ + auVar39._8_4_;
    auVar10._12_4_ = auVar24._12_4_ + auVar39._12_4_;
    auVar39 = vshufps_avx(auVar10,auVar3,0xd6);
    auVar21 = vshufps_avx(auVar39,auVar36,0x48);
  }
  else if (param_3 == 2) {
    auVar40._4_4_ = _DAT_145fc6edc;
    auVar40._0_4_ = _DAT_145fc6edc;
    auVar40._8_4_ = _DAT_145fc6edc;
    auVar40._12_4_ = _DAT_145fc6edc;
    auVar39._0_4_ = (uint)(fVar6 * _DAT_14615a294) & _DAT_145fc6f10;
    auVar39._4_4_ = (uint)(fVar15 * _DAT_14615a294) & _DAT_145fc6f10;
    auVar39._8_4_ = (uint)(fVar17 * _DAT_14615a294) & _DAT_145fc6f10;
    auVar39._12_4_ = (uint)(fVar19 * _DAT_14615a294) & _DAT_145fc6f10;
    auVar40 = auVar40 | auVar39;
    auVar43._4_4_ = _DAT_145f43778;
    auVar43._0_4_ = _DAT_145f43778;
    auVar43._8_4_ = _DAT_145f43778;
    auVar43._12_4_ = _DAT_145f43778;
    auVar36 = vpcmpeqd_avx(auVar40,auVar40);
    auVar34._0_4_ = (int)(fVar6 * _DAT_14615a294 + auVar40._0_4_);
    auVar34._4_4_ = (int)(fVar15 * _DAT_14615a294 + auVar40._4_4_);
    auVar34._8_4_ = (int)(fVar17 * _DAT_14615a294 + auVar40._8_4_);
    auVar34._12_4_ = (int)(fVar19 * _DAT_14615a294 + auVar40._12_4_);
    auVar39 = vcvtdq2ps_avx(auVar34);
    auVar21 = vpsubd_avx(auVar34,auVar36);
    fVar6 = auVar39._0_4_ * _DAT_146159b50 + auVar39._0_4_ * _DAT_146159b4c + fVar5;
    fVar15 = auVar39._4_4_ * _DAT_146159b50 + auVar39._4_4_ * _DAT_146159b4c + fVar14;
    fVar17 = auVar39._8_4_ * _DAT_146159b50 + auVar39._8_4_ * _DAT_146159b4c + fVar16;
    fVar19 = auVar39._12_4_ * _DAT_146159b50 + auVar39._12_4_ * _DAT_146159b4c + fVar18;
    fVar5 = fVar6 * fVar6;
    fVar14 = fVar15 * fVar15;
    fVar16 = fVar17 * fVar17;
    fVar18 = fVar19 * fVar19;
    auVar57._0_4_ =
         fVar5 * fVar6 * (fVar5 * (fVar5 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar6;
    auVar57._4_4_ =
         fVar14 * fVar15 * (fVar14 * (fVar14 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar15;
    auVar57._8_4_ =
         fVar16 * fVar17 * (fVar16 * (fVar16 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar17;
    auVar57._12_4_ =
         fVar18 * fVar19 * (fVar18 * (fVar18 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar19;
    auVar50._4_4_ = _DAT_145f43774;
    auVar50._0_4_ = _DAT_145f43774;
    auVar50._8_4_ = _DAT_145f43774;
    auVar50._12_4_ = _DAT_145f43774;
    auVar39 = vpand_avx(auVar43,auVar34);
    auVar54._0_4_ =
         fVar5 * (fVar5 * (fVar5 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar54._4_4_ =
         fVar14 * (fVar14 * (fVar14 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar54._8_4_ =
         fVar16 * (fVar16 * (fVar16 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar54._12_4_ =
         fVar18 * (fVar18 * (fVar18 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar36 = vpcmpeqd_avx((undefined1  [16])0x0,auVar39);
    auVar12 = vpsubd_avx((undefined1  [16])0x0,auVar39);
    auVar21 = vpand_avx(auVar50,auVar21);
    auVar39 = vblendvps_avx(auVar54,auVar57,auVar36);
    auVar36 = vblendvps_avx(auVar54,auVar57,auVar12);
    auVar12 = vpand_avx(auVar50,auVar34);
    auVar51._0_4_ = auVar39._0_4_ ^ _DAT_145fc6f10;
    auVar51._4_4_ = auVar39._4_4_ ^ _DAT_145fc6f10;
    auVar51._8_4_ = auVar39._8_4_ ^ _DAT_145fc6f10;
    auVar51._12_4_ = auVar39._12_4_ ^ _DAT_145fc6f10;
    auVar21 = vpcmpeqd_avx((undefined1  [16])0x0,auVar21);
    auVar26._0_4_ = auVar36._0_4_ ^ _DAT_145fc6f10;
    auVar26._4_4_ = auVar36._4_4_ ^ _DAT_145fc6f10;
    auVar26._8_4_ = auVar36._8_4_ ^ _DAT_145fc6f10;
    auVar26._12_4_ = auVar36._12_4_ ^ _DAT_145fc6f10;
    auVar12 = vpcmpeqd_avx((undefined1  [16])0x0,auVar12);
    auVar36 = vblendvps_avx(auVar26,auVar36,auVar21);
    auVar39 = vblendvps_avx(auVar51,auVar39,auVar12);
    auVar12._0_4_ = auVar36._0_4_ * auVar3._0_4_;
    auVar12._4_4_ = auVar36._4_4_ * auVar3._4_4_;
    auVar12._8_4_ = auVar36._8_4_ * auVar3._8_4_;
    auVar12._12_4_ = auVar36._12_4_ * auVar3._12_4_;
    auVar27._0_4_ = auVar39._0_4_ * auVar3._0_4_;
    auVar27._4_4_ = auVar39._4_4_ * auVar3._4_4_;
    auVar27._8_4_ = auVar39._8_4_ * auVar3._8_4_;
    auVar27._12_4_ = auVar39._12_4_ * auVar3._12_4_;
    auVar39 = vshufps_avx(auVar12,auVar12,0xf1);
    auVar36 = vsubps_avx(auVar39,auVar27);
    auVar13._0_4_ = auVar27._0_4_ + auVar39._0_4_;
    auVar13._4_4_ = auVar27._4_4_ + auVar39._4_4_;
    auVar13._8_4_ = auVar27._8_4_ + auVar39._8_4_;
    auVar13._12_4_ = auVar27._12_4_ + auVar39._12_4_;
    auVar36 = vunpcklps_avx(auVar36,auVar13);
    auVar39 = vshufps_avx(auVar3,auVar13,0xd6);
    auVar21 = vshufps_avx(auVar36,auVar39,0x86);
  }
  if ((param_1 & 1) != 0) {
    auVar4._0_4_ = auVar21._0_4_ * auVar21._0_4_;
    auVar4._4_4_ = auVar21._4_4_ * auVar21._4_4_;
    auVar4._8_4_ = auVar21._8_4_ * auVar21._8_4_;
    auVar4._12_4_ = auVar21._12_4_ * auVar21._12_4_;
    auVar11._0_12_ = ZEXT812(0);
    auVar11._12_4_ = 0;
    auVar39 = vblendps_avx(auVar4,auVar11,8);
    auVar39 = vhaddps_avx(auVar39,auVar39);
    auVar12 = vhaddps_avx(auVar39,auVar39);
    auVar39 = vrsqrtps_avx(auVar12);
    fVar6 = auVar39._0_4_;
    fVar17 = auVar39._4_4_;
    fVar5 = auVar39._8_4_;
    fVar16 = auVar39._12_4_;
    auVar38._4_4_ = _DAT_146159bfc;
    auVar38._0_4_ = _DAT_146159bfc;
    auVar38._8_4_ = _DAT_146159bfc;
    auVar38._12_4_ = _DAT_146159bfc;
    auVar36 = vcmpps_avx(auVar38,auVar12,2);
    auVar3 = vshufps_avx(auVar21,auVar21,0xc9);
    auVar21 = vshufps_avx(auVar21,auVar21,0xd2);
    auVar39 = param_5[4];
    auVar13 = vshufps_avx(auVar39,auVar39,0xd2);
    auVar39 = vshufps_avx(auVar39,auVar39,0xc9);
    auVar25._0_4_ = -(auVar39._0_4_ * auVar21._0_4_) + auVar13._0_4_ * auVar3._0_4_;
    auVar25._4_4_ = -(auVar39._4_4_ * auVar21._4_4_) + auVar13._4_4_ * auVar3._4_4_;
    auVar25._8_4_ = -(auVar39._8_4_ * auVar21._8_4_) + auVar13._8_4_ * auVar3._8_4_;
    auVar25._12_4_ = -(auVar39._12_4_ * auVar21._12_4_) + auVar13._12_4_ * auVar3._12_4_;
    auVar21 = vshufps_avx(auVar25,auVar25,0xd2);
    auVar3 = vshufps_avx(auVar25,auVar25,0xc9);
    fVar20 = -(auVar13._0_4_ * auVar3._0_4_) + auVar21._0_4_ * auVar39._0_4_;
    fVar28 = -(auVar13._4_4_ * auVar3._4_4_) + auVar21._4_4_ * auVar39._4_4_;
    fVar29 = -(auVar13._8_4_ * auVar3._8_4_) + auVar21._8_4_ * auVar39._8_4_;
    fVar30 = -(auVar13._12_4_ * auVar3._12_4_) + auVar21._12_4_ * auVar39._12_4_;
    auVar33._0_4_ = fVar20 * fVar20;
    auVar33._4_4_ = fVar28 * fVar28;
    auVar33._8_4_ = fVar29 * fVar29;
    auVar33._12_4_ = fVar30 * fVar30;
    auVar39 = vblendps_avx(auVar33,auVar11,8);
    auVar39 = vhaddps_avx(auVar39,auVar39);
    auVar39 = vhaddps_avx(auVar39,auVar39);
    auVar21 = vrsqrtps_avx(auVar39);
    fVar15 = auVar21._0_4_;
    fVar19 = auVar21._4_4_;
    fVar14 = auVar21._8_4_;
    fVar18 = auVar21._12_4_;
    auVar21._0_4_ =
         fVar20 * (float)(auVar36._0_4_ &
                         (uint)(((_DAT_145fc6f08 * fVar6 * fVar6 * auVar12._0_4_ - _DAT_145fc6f08) *
                                 fVar6 + fVar6) * auVar12._0_4_)) *
         ((_DAT_145fc6f08 * fVar15 * fVar15 * auVar39._0_4_ - _DAT_145fc6f08) * fVar15 + fVar15);
    auVar21._4_4_ =
         fVar28 * (float)(auVar36._4_4_ &
                         (uint)(((_DAT_145fc6f08 * fVar17 * fVar17 * auVar12._4_4_ - _DAT_145fc6f08)
                                 * fVar17 + fVar17) * auVar12._4_4_)) *
         ((_DAT_145fc6f08 * fVar19 * fVar19 * auVar39._4_4_ - _DAT_145fc6f08) * fVar19 + fVar19);
    auVar21._8_4_ =
         fVar29 * (float)(auVar36._8_4_ &
                         (uint)(((_DAT_145fc6f08 * fVar5 * fVar5 * auVar12._8_4_ - _DAT_145fc6f08) *
                                 fVar5 + fVar5) * auVar12._8_4_)) *
         ((_DAT_145fc6f08 * fVar14 * fVar14 * auVar39._8_4_ - _DAT_145fc6f08) * fVar14 + fVar14);
    auVar21._12_4_ =
         fVar30 * (float)(auVar36._12_4_ &
                         (uint)(((_DAT_145fc6f08 * fVar16 * fVar16 * auVar12._12_4_ - _DAT_145fc6f08
                                 ) * fVar16 + fVar16) * auVar12._12_4_)) *
         ((_DAT_145fc6f08 * fVar18 * fVar18 * auVar39._12_4_ - _DAT_145fc6f08) * fVar18 + fVar18);
  }
  vshufps_avx(auVar21,auVar21,0x55);
  vshufps_avx(auVar21,auVar21,0xaa);
  func_0x000144eb9160();
  return;
}

