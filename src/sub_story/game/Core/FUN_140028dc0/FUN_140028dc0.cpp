// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140028dc0  size: 1944 bytes
// Name:    FUN_140028dc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14001ebc0, FUN_144db6f00, FUN_144daa460, FUN_144db6f30, FUN_144e17800, FUN_144f64580, FUN_144e1ff00, FUN_140029560, FUN_144e14710, FUN_14478e420, FUN_144da0e70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140028dc0(longlong param_1,undefined1 (*param_2) [16],undefined8 *param_3,
                  undefined1 (*param_4) [16])

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar20;
  float fVar21;
  undefined1 auVar15 [16];
  float fVar22;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uVar31;
  undefined1 auVar30 [64];
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined8 *puVar38;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [16];
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 auStack_228 [16];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  float fStack_200;
  float fStack_1fc;
  undefined4 uStack_1f8;
  undefined8 uStack_1f4;
  undefined8 uStack_1e8;
  undefined4 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [12];
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  puVar1 = *(undefined4 **)(param_1 + 0x88);
  auVar9._0_12_ = ZEXT812(0);
  auVar9._12_4_ = 0;
  auVar9 = vcmpps_avx(auVar9,*(undefined1 (*) [16])(puVar1 + 0x40),0);
  uVar8 = vmovmskps_avx(auVar9);
  if ((~(byte)uVar8 & 7) != 0) {
    uStack_1e8 = *(undefined8 *)(param_1 + 0x10);
    uStack_1d8 = *(undefined8 *)(puVar1 + 0x44);
    uStack_1d0 = *(undefined8 *)(puVar1 + 0x46);
    uStack_1c8 = *puVar1;
    uStack_1c4 = puVar1[1];
    uStack_1c0 = puVar1[2];
    uStack_1bc = puVar1[3];
    uStack_1b8 = puVar1[4];
    fStack_200 = (float)*(undefined8 *)(puVar1 + 0x4e);
    fStack_1fc = (float)((ulonglong)*(undefined8 *)(puVar1 + 0x4e) >> 0x20);
    uStack_1f8 = puVar1[0x52];
    uStack_1f4 = 0x13f000000;
    puStack_208 = &UNK_146677030;
    puVar38 = &uStack_218;
    uStack_1a8 = *(undefined8 *)(puVar1 + 0x40);
    uStack_1a0 = *(undefined8 *)(puVar1 + 0x42);
    uStack_218 = *(undefined8 *)*param_4;
    uStack_210 = *(undefined8 *)(*param_4 + 8);
    puStack_1e0 = puVar1;
    FUN_144e14710(uStack_1e8,&puStack_208,0,0,puVar38);
    uVar8 = (undefined4)((ulonglong)puVar38 >> 0x20);
    if (*(char *)(*(longlong *)(param_1 + 0x88) + 0x163) == '\0') {
      fVar24 = *(float *)(*(longlong *)(param_1 + 0x88) + 0x140);
      if ((fVar24 != 0.0) || (NAN(fVar24))) {
        FUN_144f64580(uStack_1e8,uStack_1c0,auStack_c8);
        auVar4._8_8_ = uStack_1a0;
        auVar4._0_8_ = uStack_1a8;
        auVar3._12_4_ = fStack_bc;
        auVar3._0_12_ = auStack_c8;
        auVar9 = vshufps_avx(auVar3,auVar3,0xc9);
        auVar27 = vshufps_avx(auVar4,auVar4,0xd2);
        auVar4 = vshufps_avx(auVar4,auVar4,0xc9);
        auVar3 = vshufps_avx(auVar3,auVar3,0xd2);
        fVar24 = -(auVar3._0_4_ * auVar4._0_4_) + auVar9._0_4_ * auVar27._0_4_;
        fVar14 = -(auVar3._4_4_ * auVar4._4_4_) + auVar9._4_4_ * auVar27._4_4_;
        fVar20 = -(auVar3._8_4_ * auVar4._8_4_) + auVar9._8_4_ * auVar27._8_4_;
        fVar21 = -(auVar3._12_4_ * auVar4._12_4_) + auVar9._12_4_ * auVar27._12_4_;
        auVar19._0_4_ = fVar24 + fVar24;
        auVar19._4_4_ = fVar14 + fVar14;
        auVar19._8_4_ = fVar20 + fVar20;
        auVar19._12_4_ = fVar21 + fVar21;
        auVar27 = vshufps_avx(auVar19,auVar19,0xd2);
        auVar4 = vshufps_avx(auVar19,auVar19,0xc9);
        auStack_228._0_4_ =
             auVar19._0_4_ * fStack_bc + (float)uStack_1a8 + fStack_b8 +
             -(auVar3._0_4_ * auVar4._0_4_) + auVar27._0_4_ * auVar9._0_4_;
        auStack_228._4_4_ =
             auVar19._4_4_ * fStack_bc + (float)((ulonglong)uStack_1a8 >> 0x20) + fStack_b4 +
             -(auVar3._4_4_ * auVar4._4_4_) + auVar27._4_4_ * auVar9._4_4_;
        auStack_228._8_4_ =
             auVar19._8_4_ * fStack_bc + (float)uStack_1a0 + fStack_b0 +
             -(auVar3._8_4_ * auVar4._8_4_) + auVar27._8_4_ * auVar9._8_4_;
        auStack_228._12_4_ =
             auVar19._12_4_ * fStack_bc + (float)((ulonglong)uStack_1a0 >> 0x20) + fStack_ac +
             -(auVar3._12_4_ * auVar4._12_4_) + auVar27._12_4_ * auVar9._12_4_;
        FUN_14001ebc0(*(undefined8 *)(param_1 + 0x10),&puStack_208,0,auStack_228,
                      CONCAT44(uVar8,*(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x140)));
      }
    }
    FUN_144f64580(uStack_1e8,uStack_1c0,auStack_c8);
    auVar5._8_8_ = uStack_1a0;
    auVar5._0_8_ = uStack_1a8;
    auVar6._12_4_ = fStack_bc;
    auVar6._0_12_ = auStack_c8;
    auVar9 = vshufps_avx(auVar6,auVar6,0xc9);
    auVar27 = vshufps_avx(auVar5,auVar5,0xd2);
    auVar4 = vshufps_avx(auVar5,auVar5,0xc9);
    auVar3 = vshufps_avx(auVar6,auVar6,0xd2);
    fVar24 = -(auVar3._0_4_ * auVar4._0_4_) + auVar9._0_4_ * auVar27._0_4_;
    fVar14 = -(auVar3._4_4_ * auVar4._4_4_) + auVar9._4_4_ * auVar27._4_4_;
    fVar20 = -(auVar3._8_4_ * auVar4._8_4_) + auVar9._8_4_ * auVar27._8_4_;
    fVar21 = -(auVar3._12_4_ * auVar4._12_4_) + auVar9._12_4_ * auVar27._12_4_;
    auVar15._0_4_ = fVar24 + fVar24;
    auVar15._4_4_ = fVar14 + fVar14;
    auVar15._8_4_ = fVar20 + fVar20;
    auVar15._12_4_ = fVar21 + fVar21;
    auVar27 = vshufps_avx(auVar15,auVar15,0xd2);
    auVar4 = vshufps_avx(auVar15,auVar15,0xc9);
    auVar26._0_4_ =
         auVar15._0_4_ * fStack_bc + (float)uStack_1a8 + fStack_b8 +
         -(auVar3._0_4_ * auVar4._0_4_) + auVar27._0_4_ * auVar9._0_4_;
    auVar26._4_4_ =
         auVar15._4_4_ * fStack_bc + (float)((ulonglong)uStack_1a8 >> 0x20) + fStack_b4 +
         -(auVar3._4_4_ * auVar4._4_4_) + auVar27._4_4_ * auVar9._4_4_;
    auVar26._8_4_ =
         auVar15._8_4_ * fStack_bc + (float)uStack_1a0 + fStack_b0 +
         -(auVar3._8_4_ * auVar4._8_4_) + auVar27._8_4_ * auVar9._8_4_;
    auVar26._12_4_ =
         auVar15._12_4_ * fStack_bc + (float)((ulonglong)uStack_1a0 >> 0x20) + fStack_ac +
         -(auVar3._12_4_ * auVar4._12_4_) + auVar27._12_4_ * auVar9._12_4_;
    goto LAB_140028f7e;
  }
  FUN_144daa460(*(undefined8 *)(param_1 + 0x10),&uStack_d8,*(undefined4 *)(param_1 + 0x74));
  FUN_144db6f30(*(undefined8 *)(param_1 + 0x10),&uStack_e8,*(undefined4 *)(param_1 + 0x70));
  uStack_f8 = uStack_d8;
  uStack_f0 = uStack_d0;
  uVar25 = *(undefined8 *)*param_4;
  uVar31 = *(undefined8 *)(*param_4 + 8);
  FUN_144db6f00(*(undefined8 *)(param_1 + 0x10),&uStack_108,*(undefined4 *)(param_1 + 0x78));
  FUN_144db6f00(*(undefined8 *)(param_1 + 0x10),&uStack_118,*(undefined4 *)(param_1 + 0x74));
  uStack_248 = uStack_108;
  uStack_240 = uStack_100;
  uStack_238 = uStack_118;
  uStack_230 = uStack_110;
  uStack_268 = uStack_e8;
  uStack_260 = uStack_e0;
  uStack_258 = uVar25;
  uStack_250 = uVar31;
  FUN_144e1ff00(&uStack_d8,&uStack_238,&uStack_248,&uStack_258,&uStack_f8,&uStack_268);
  FUN_144da0e70(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x74),&uStack_d8);
  lVar2 = *(longlong *)(param_1 + 0x88);
  if ((*(byte *)(lVar2 + 0x164) & 8) == 0) {
    if (*(char *)(lVar2 + 0x163) == '\0') {
      fVar24 = *(float *)(lVar2 + 0x140);
      goto LAB_140028f39;
    }
  }
  else {
    FUN_144db6f00(*(undefined8 *)(param_1 + 0x10),&uStack_128,*(undefined4 *)(param_1 + 0x78));
    FUN_144db6f30(*(undefined8 *)(param_1 + 0x10),&uStack_138,*(undefined4 *)(param_1 + 0x74));
    uStack_278 = *param_3;
    uStack_270 = param_3[1];
    uStack_288 = uStack_138;
    uStack_280 = uStack_130;
    uStack_298 = uStack_128;
    uStack_290 = uStack_120;
    auStack_2a8 = ZEXT416((uint)_DAT_145fc6ed8);
    uStack_2b8 = _DAT_14615bd00;
    uStack_2b0 = _UNK_14615bd08;
    fVar24 = (float)FUN_14478e420(&uStack_278,&uStack_288,&uStack_298,auStack_2a8,&uStack_2b8);
LAB_140028f39:
    if ((fVar24 != 0.0) || (NAN(fVar24))) {
      FUN_144daa460(*(undefined8 *)(param_1 + 0x10),&puStack_208,*(undefined4 *)(param_1 + 0x74));
      auVar7._8_4_ = fStack_200;
      auVar7._0_8_ = puStack_208;
      auVar7._12_4_ = fStack_1fc;
      auVar19 = vshufps_avx(auVar7,auVar7,0xc9);
      auVar26 = vshufps_avx(auVar7,auVar7,0xd2);
      fVar14 = auVar26._0_4_ * _DAT_14615af60 + auVar19._0_4_ * _DAT_146159bc0;
      fVar20 = auVar26._4_4_ * _UNK_14615af64 + auVar19._4_4_ * _UNK_146159bc4;
      fVar21 = auVar26._8_4_ * _UNK_14615af68 + auVar19._8_4_ * _UNK_146159bc8;
      fVar22 = auVar26._12_4_ * _UNK_14615af6c + auVar19._12_4_ * _UNK_146159bcc;
      auVar16._0_4_ = fVar14 + fVar14;
      auVar16._4_4_ = fVar20 + fVar20;
      auVar16._8_4_ = fVar21 + fVar21;
      auVar16._12_4_ = fVar22 + fVar22;
      auVar5 = vshufps_avx(auVar16,auVar16,0xd2);
      auVar6 = vshufps_avx(auVar16,auVar16,0xc9);
      fVar14 = fVar24 * _DAT_145fc6edc;
      fVar24 = fVar24 * _DAT_146159b48;
      auVar27._4_4_ = _DAT_145fc6edc;
      auVar27._0_4_ = _DAT_145fc6edc;
      auVar27._8_4_ = _DAT_145fc6edc;
      auVar27._12_4_ = _DAT_145fc6edc;
      auVar23._0_4_ = (uint)fVar24 & _DAT_145fc6f10;
      auVar23._4_4_ = (uint)fVar24 & _DAT_145fc6f10;
      auVar23._8_4_ = (uint)fVar24 & _DAT_145fc6f10;
      auVar23._12_4_ = (uint)fVar24 & _DAT_145fc6f10;
      auVar23 = auVar23 | auVar27;
      auVar28._4_4_ = _DAT_145f43778;
      auVar28._0_4_ = _DAT_145f43778;
      auVar28._8_4_ = _DAT_145f43778;
      auVar28._12_4_ = _DAT_145f43778;
      auVar27 = vpcmpeqd_avx(auVar23,auVar23);
      auVar17._0_4_ = (int)(fVar24 + auVar23._0_4_);
      auVar17._4_4_ = (int)(fVar24 + auVar23._4_4_);
      auVar17._8_4_ = (int)(fVar24 + auVar23._8_4_);
      auVar17._12_4_ = (int)(fVar24 + auVar23._12_4_);
      auVar9 = vcvtdq2ps_avx(auVar17);
      auVar3 = vpsubd_avx(auVar17,auVar27);
      fVar24 = auVar9._0_4_ * _DAT_146159b50 + auVar9._0_4_ * _DAT_146159b4c + fVar14;
      fVar20 = auVar9._4_4_ * _DAT_146159b50 + auVar9._4_4_ * _DAT_146159b4c + fVar14;
      fVar21 = auVar9._8_4_ * _DAT_146159b50 + auVar9._8_4_ * _DAT_146159b4c + fVar14;
      fVar14 = auVar9._12_4_ * _DAT_146159b50 + auVar9._12_4_ * _DAT_146159b4c + fVar14;
      fVar22 = fVar24 * fVar24;
      fVar32 = fVar20 * fVar20;
      fVar33 = fVar21 * fVar21;
      fVar34 = fVar14 * fVar14;
      auVar36._0_4_ =
           fVar22 * fVar24 * (fVar22 * (fVar22 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar24;
      auVar36._4_4_ =
           fVar32 * fVar20 * (fVar32 * (fVar32 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar20;
      auVar36._8_4_ =
           fVar33 * fVar21 * (fVar33 * (fVar33 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar21;
      auVar36._12_4_ =
           fVar34 * fVar14 * (fVar34 * (fVar34 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar14;
      auVar9 = vpand_avx(auVar17,auVar28);
      auVar37._0_4_ =
           fVar22 * (fVar22 * (fVar22 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           _DAT_145fc6ed8;
      auVar37._4_4_ =
           fVar32 * (fVar32 * (fVar32 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           _DAT_145fc6ed8;
      auVar37._8_4_ =
           fVar33 * (fVar33 * (fVar33 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           _DAT_145fc6ed8;
      auVar37._12_4_ =
           fVar34 * (fVar34 * (fVar34 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           _DAT_145fc6ed8;
      auVar35._4_4_ = _DAT_145f43774;
      auVar35._0_4_ = _DAT_145f43774;
      auVar35._8_4_ = _DAT_145f43774;
      auVar35._12_4_ = _DAT_145f43774;
      auVar27 = vpcmpeqd_avx(auVar9,(undefined1  [16])0x0);
      auVar4 = vpsubd_avx((undefined1  [16])0x0,auVar9);
      auVar9 = vblendvps_avx(auVar37,auVar36,auVar27);
      auVar27 = vblendvps_avx(auVar37,auVar36,auVar4);
      auVar4 = vpand_avx(auVar35,auVar17);
      auVar3 = vpand_avx(auVar35,auVar3);
      auVar4 = vpcmpeqd_avx(auVar4,(undefined1  [16])0x0);
      auVar3 = vpcmpeqd_avx(auVar3,(undefined1  [16])0x0);
      auVar29._0_4_ = auVar9._0_4_ ^ _DAT_145fc6f10;
      auVar29._4_4_ = auVar9._4_4_ ^ _DAT_145fc6f10;
      auVar29._8_4_ = auVar9._8_4_ ^ _DAT_145fc6f10;
      auVar29._12_4_ = auVar9._12_4_ ^ _DAT_145fc6f10;
      auVar9 = vblendvps_avx(auVar29,auVar9,auVar4);
      auVar12._0_4_ =
           auVar9._0_4_ *
           (auVar16._0_4_ * fStack_1fc + _DAT_145fc6ed8 +
           -(auVar26._0_4_ * auVar6._0_4_) + auVar5._0_4_ * auVar19._0_4_);
      auVar12._4_4_ =
           auVar9._4_4_ *
           (auVar16._4_4_ * fStack_1fc + 0.0 +
           -(auVar26._4_4_ * auVar6._4_4_) + auVar5._4_4_ * auVar19._4_4_);
      auVar12._8_4_ =
           auVar9._8_4_ *
           (auVar16._8_4_ * fStack_1fc + 0.0 +
           -(auVar26._8_4_ * auVar6._8_4_) + auVar5._8_4_ * auVar19._8_4_);
      auVar12._12_4_ =
           auVar9._12_4_ *
           (auVar16._12_4_ * fStack_1fc + 0.0 +
           -(auVar26._12_4_ * auVar6._12_4_) + auVar5._12_4_ * auVar19._12_4_);
      auVar18._0_4_ = auVar27._0_4_ ^ _DAT_145fc6f10;
      auVar18._4_4_ = auVar27._4_4_ ^ _DAT_145fc6f10;
      auVar18._8_4_ = auVar27._8_4_ ^ _DAT_145fc6f10;
      auVar18._12_4_ = auVar27._12_4_ ^ _DAT_145fc6f10;
      auVar13._0_4_ = (uint)SUB84(puStack_208,0) ^ _DAT_145fc6f10;
      fVar24 = (float)((ulonglong)puStack_208 >> 0x20);
      auVar13._4_4_ = (uint)fVar24 ^ _DAT_145fc6f10;
      auVar13._8_4_ = (uint)fStack_200 ^ _DAT_145fc6f10;
      auVar13._12_4_ = (uint)fStack_1fc ^ _DAT_145fc6f10;
      auVar27 = vblendvps_avx(auVar18,auVar27,auVar3);
      auVar9 = vblendps_avx(auVar13,auVar7,10);
      auVar4 = vshufps_avx(auVar27,auVar27,0xff);
      auVar3 = vshufps_avx(auVar9,auVar9,0x1b);
      auVar19 = vshufps_avx(auVar12,auVar12,0x55);
      auVar26 = vshufps_avx(auVar12,auVar12,0xaa);
      auVar27 = vshufpd_avx(auVar7,auVar13,1);
      auVar9 = vblendps_avx(auVar13,auVar7,9);
      auVar9 = vshufps_avx(auVar9,auVar9,0xb1);
      auStack_148._0_4_ =
           auVar26._0_4_ * auVar9._0_4_ +
           auVar19._0_4_ * auVar27._0_4_ +
           auVar12._0_4_ * auVar3._0_4_ + auVar4._0_4_ * SUB84(puStack_208,0);
      auStack_148._4_4_ =
           auVar26._4_4_ * auVar9._4_4_ +
           auVar19._4_4_ * auVar27._4_4_ + auVar12._0_4_ * auVar3._4_4_ + auVar4._4_4_ * fVar24;
      auStack_148._8_4_ =
           auVar26._8_4_ * auVar9._8_4_ +
           auVar19._8_4_ * auVar27._8_4_ + auVar12._0_4_ * auVar3._8_4_ + auVar4._8_4_ * fStack_200;
      auStack_148._12_4_ =
           auVar26._12_4_ * auVar9._12_4_ +
           auVar19._12_4_ * auVar27._12_4_ +
           auVar12._0_4_ * auVar3._12_4_ + auVar4._12_4_ * fStack_1fc;
      FUN_144da0e70(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x74));
    }
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x88) + 0x164) & 8) != 0) {
    FUN_144daa460(*(undefined8 *)(param_1 + 0x10),&uStack_158,*(undefined4 *)(param_1 + 0x78));
    FUN_144db6f30(*(undefined8 *)(param_1 + 0x10),&uStack_168,*(undefined4 *)(param_1 + 0x74));
    uStack_178 = uStack_158;
    uStack_170 = uStack_150;
    uVar25 = *param_3;
    uVar31 = param_3[1];
    FUN_144db6f00(*(undefined8 *)(param_1 + 0x10),&uStack_188,*(undefined4 *)(param_1 + 0x7c));
    FUN_144db6f00(*(undefined8 *)(param_1 + 0x10),&uStack_198,*(undefined4 *)(param_1 + 0x78));
    uStack_2d8 = uStack_188;
    uStack_2d0 = uStack_180;
    uStack_2c8 = uStack_198;
    uStack_2c0 = uStack_190;
    uStack_2f8 = uStack_168;
    uStack_2f0 = uStack_160;
    uStack_2e8 = uVar25;
    uStack_2e0 = uVar31;
    FUN_144e1ff00(&uStack_158,&uStack_2c8,&uStack_2d8,&uStack_2e8,&uStack_178,&uStack_2f8);
    FUN_144da0e70(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x78),&uStack_158);
  }
  FUN_144db6f00(*(undefined8 *)(param_1 + 0x10),&puStack_208,*(undefined4 *)(param_1 + 0x78));
  auVar26._8_4_ = fStack_200;
  auVar26._0_8_ = puStack_208;
  auVar26._12_4_ = fStack_1fc;
LAB_140028f7e:
  auVar30 = ZEXT1664(auVar26);
  FUN_144e17800(param_1);
  FUN_140029560(param_1);
  auVar9 = vsubps_avx(auVar30._0_16_,*param_4);
  auVar11._0_12_ = ZEXT812(0);
  auVar11._12_4_ = 0;
  auVar10._0_4_ = auVar9._0_4_ * auVar9._0_4_;
  auVar10._4_4_ = auVar9._4_4_ * auVar9._4_4_;
  auVar10._8_4_ = auVar9._8_4_ * auVar9._8_4_;
  auVar10._12_4_ = auVar9._12_4_ * auVar9._12_4_;
  auVar9 = vblendps_avx(auVar10,auVar11,8);
  auVar9 = vhaddps_avx(auVar9,auVar9);
  auVar9 = vhaddps_avx(auVar9,auVar9);
  *param_2 = auVar9;
  return;
}

