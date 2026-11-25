// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f5540  size: 3009 bytes
// Name:    FUN_1400f5540
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e40a00, FUN_1400f6140, FUN_144edcc50, FUN_140c96050, FUN_14551d6b0, FUN_14551dd20, FUN_144fe4920, FUN_144ead850, FUN_1452448d0, FUN_1431e0320
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f5540(longlong param_1,longlong param_2,undefined8 param_3,char param_4,char param_5,
                  char param_6,longlong param_7)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  float fVar8;
  float fVar25;
  float fVar26;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  short sVar27;
  short sVar39;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar52;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar51;
  float fVar53;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar54;
  float fVar67;
  float fVar68;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar69;
  float fVar76;
  float fVar77;
  float fVar78;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar82;
  undefined8 uVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar90;
  float fVar92;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar91;
  undefined1 auVar89 [64];
  undefined1 auVar93 [16];
  undefined1 auVar94 [64];
  uint uVar95;
  uint uVar96;
  float fVar97;
  uint uVar98;
  float fVar99;
  undefined1 auVar100 [16];
  float fVar101;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  uint uVar105;
  uint uVar108;
  uint uVar109;
  undefined1 auVar106 [16];
  uint uVar110;
  undefined1 auVar111 [16];
  undefined1 auVar112 [64];
  undefined1 auVar113 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 aauStack_f8 [11] [16];
  undefined1 auVar104 [64];
  undefined1 auVar107 [64];
  
  uVar1 = *(undefined4 *)(param_2 + 0x9c);
  if (param_7 == 0) {
    param_7 = func_0x000144d9f7c0(uVar1);
  }
  lVar5 = func_0x000144e63d10(uVar1);
  if (lVar5 == 0) {
    _auStack_188 = ZEXT812(0);
    register0x0000120c = 0;
    auVar35 = ZEXT816(0);
  }
  else {
    if ((*(longlong *)(lVar5 + 0x860) == 0) ||
       ((*(byte *)(*(longlong *)(lVar5 + 0x860) + 0x1d) & 2) == 0)) {
LAB_1400f55f8:
      FUN_144fe4920(lVar5,auStack_198);
      _auStack_188 = vsubps_avx(auStack_198,*(undefined1 (*) [16])(lVar5 + 0x840));
    }
    else {
      uStack_168 = 0xffffffff00000000;
      auStack_198._0_8_ = *(undefined8 *)(lVar5 + 0x688);
      auVar35 = vcvtps2ph_f16c(ZEXT416(_DAT_145fc6f48),3);
      uVar7 = auVar35._0_2_ | 0x10000;
      cVar4 = FUN_140c96050(lVar5,auStack_198,&uStack_168,uVar7);
      if (cVar4 == '\0') goto LAB_1400f55f8;
      FUN_144fe4920(lVar5,auStack_198);
      FUN_14551d6b0(uStack_168,auStack_158,uVar7);
      _auStack_188 = vsubps_avx(auStack_198,auStack_158);
    }
    auVar35 = vshufpd_avx(_auStack_188,_auStack_188,1);
  }
  auVar89 = ZEXT1664(auVar35);
  if ((param_4 == '\0') && (param_6 == '\0')) goto LAB_1400f563d;
  bVar2 = func_0x0001400f6110(*(undefined8 *)(param_1 + 0x380));
  bVar3 = FUN_144ead850(param_2);
  lVar5 = func_0x000144e63d10(*(undefined4 *)(param_2 + 0x9c));
  uVar83 = auVar89._0_8_;
  if (lVar5 == 0) {
    auVar35._0_12_ = ZEXT812(0);
    auVar35._12_4_ = 0.0;
  }
  else {
    if ((*(longlong *)(lVar5 + 0x860) != 0) &&
       ((*(byte *)(*(longlong *)(lVar5 + 0x860) + 0x1d) & 2) != 0)) {
      uStack_170 = 0xffffffff00000000;
      auStack_198._0_8_ = *(undefined8 *)(lVar5 + 0x688);
      auVar35 = vcvtps2ph_f16c(ZEXT416(_DAT_145fc6f48),3);
      uVar7 = auVar35._0_2_ | 0x10000;
      cVar4 = FUN_140c96050(lVar5,auStack_198,&uStack_170,uVar7);
      if (cVar4 != '\0') {
        FUN_144e40a00(lVar5,auStack_198);
        uStack_108 = *(undefined8 *)(param_2 + 0x70);
        uStack_100 = *(undefined8 *)(param_2 + 0x78);
        func_0x000144dc3790(&uStack_108,&uStack_168);
        uStack_118 = uStack_168;
        uStack_110 = uStack_160;
        FUN_14551dd20(uStack_170,auStack_158,&uStack_118,uVar7);
        uVar83 = auVar89._0_8_;
        auVar35 = vsubps_avx(auStack_198,auStack_158);
        goto LAB_1400f572d;
      }
    }
    FUN_144e40a00(lVar5,auStack_198);
    uVar83 = auVar89._0_8_;
    auVar35 = vsubps_avx(auStack_198,*(undefined1 (*) [16])(lVar5 + 0x830));
  }
LAB_1400f572d:
  if (0.0 < *(float *)(param_1 + 0x1d0)) {
    auVar10 = *(undefined1 (*) [16])(param_2 + 0x70);
    auVar94 = ZEXT1664(auVar10);
    fVar97 = 0.0;
    fVar99 = 0.0;
    fVar8 = *(float *)(param_2 + 0x40);
    fVar51 = *(float *)(param_2 + 0x44);
    fVar52 = *(float *)(param_2 + 0x48);
    fVar53 = *(float *)(param_2 + 0x4c);
    fVar82 = *(float *)(param_2 + 0x50);
    fVar90 = *(float *)(param_2 + 0x54);
    fVar91 = *(float *)(param_2 + 0x58);
    fVar92 = *(float *)(param_2 + 0x5c);
    fVar101 = *(float *)(param_2 + 0x60);
    fVar76 = *(float *)(param_2 + 100);
    fVar77 = *(float *)(param_2 + 0x68);
    fVar78 = *(float *)(param_2 + 0x6c);
    auVar46._0_12_ = ZEXT812(0);
    auVar46._12_4_ = 0;
    auVar17 = vpunpckhwd_avx(auVar10,auVar10);
    auVar17 = vpsrad_avx(auVar17,0x10);
    auVar17 = vcvtdq2ps_avx(auVar17);
    auVar17 = vshufpd_avx(auVar17,auVar17,3);
    fVar69 = auVar35._0_4_ + (-(_DAT_146159c90 * auVar17._0_4_) - auVar10._0_4_);
    fVar25 = auVar35._4_4_ + (-(_UNK_146159c94 * auVar17._4_4_) - auVar10._4_4_);
    fVar26 = auVar35._8_4_ + (-(auVar17._8_4_ * 0.0) - auVar10._8_4_);
    fVar54 = auVar35._12_4_ + (-(auVar17._12_4_ * 0.0) - auVar10._12_4_);
    auVar10._0_4_ = fVar8 * fVar69;
    auVar10._4_4_ = fVar51 * fVar25;
    auVar10._8_4_ = fVar52 * fVar26;
    auVar10._12_4_ = fVar53 * fVar54;
    auVar63._0_4_ = fVar82 * fVar69;
    auVar63._4_4_ = fVar90 * fVar25;
    auVar63._8_4_ = fVar91 * fVar26;
    auVar63._12_4_ = fVar92 * fVar54;
    auVar18._0_4_ = fVar101 * fVar69;
    auVar18._4_4_ = fVar76 * fVar25;
    auVar18._8_4_ = fVar77 * fVar26;
    auVar18._12_4_ = fVar78 * fVar54;
    auVar35 = vblendps_avx(auVar10,auVar46,8);
    auVar10 = vblendps_avx(auVar63,auVar46,8);
    auVar17 = vblendps_avx(auVar18,auVar46,8);
    auVar18 = vhaddps_avx(auVar17,auVar17);
    auVar17 = vhaddps_avx(auVar17,auVar10);
    auVar35 = vhaddps_avx(auVar35,auVar10);
    auStack_198 = vhaddps_avx(auVar35,auVar17);
    auVar104 = ZEXT1664(auStack_198);
    auVar35 = vhaddps_avx(auVar18,auVar18);
    auVar89 = ZEXT1664(auVar35);
    fVar25 = _DAT_146159c90;
    fVar26 = _UNK_146159c94;
    aauStack_f8[0] = auStack_198;
    FUN_1431e0320(param_1 + 0x1b0,aauStack_f8,auStack_198,uVar83,auStack_188 + 8);
    auVar47._4_4_ = _DAT_14615a290;
    auVar47._0_4_ = _DAT_14615a290;
    auVar47._8_4_ = _DAT_14615a290;
    auVar47._12_4_ = _DAT_14615a290;
    fVar69 = _DAT_145fc6ed8 - *(float *)(param_1 + 0x1e0);
    auVar10 = vsubps_avx(auStack_198,auVar104._0_16_);
    auVar35 = vrcpps_avx(auVar47);
    auVar19._0_4_ = auVar10._0_4_ * fVar69 + auVar104._0_4_;
    auVar19._4_4_ = auVar10._4_4_ * fVar69 + auVar104._4_4_;
    auVar19._8_4_ = auVar10._8_4_ * fVar69 + auVar104._8_4_;
    auVar19._12_4_ = auVar10._12_4_ * fVar69 + auVar104._12_4_;
    fVar69 = auVar35._0_4_;
    fVar54 = auVar35._4_4_;
    fVar67 = auVar35._8_4_;
    fVar68 = auVar35._12_4_;
    auVar35 = vshufps_avx(auVar19,auVar19,0x55);
    auVar33._0_4_ =
         fVar101 * auVar89._0_4_ + fVar82 * auVar35._0_4_ + fVar8 * auVar19._0_4_ + auVar94._0_4_;
    auVar33._4_4_ =
         fVar76 * auVar89._4_4_ + fVar90 * auVar35._4_4_ + fVar51 * auVar19._0_4_ + auVar94._4_4_;
    auVar33._8_4_ =
         fVar77 * auVar89._8_4_ + fVar91 * auVar35._8_4_ + fVar52 * auVar19._0_4_ + auVar94._8_4_;
    auVar33._12_4_ =
         fVar78 * auVar89._12_4_ + fVar92 * auVar35._12_4_ + fVar53 * auVar19._0_4_ + auVar94._12_4_
    ;
    auVar35 = vblendps_avx(auVar33,auVar94._0_16_,8);
    auVar64._0_4_ =
         auVar35._0_4_ * ((-(fVar69 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar69 + fVar69);
    auVar64._4_4_ =
         auVar35._4_4_ * ((-(fVar54 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar54 + fVar54);
    auVar64._8_4_ =
         auVar35._8_4_ * ((-(fVar67 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar67 + fVar67);
    auVar64._12_4_ =
         auVar35._12_4_ * ((-(fVar68 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar68 + fVar68);
    auVar10 = vroundps_avx(auVar64,3);
    auVar48._0_4_ = -(auVar10._0_4_ * _DAT_14615a290) + auVar35._0_4_;
    auVar48._4_4_ = -(auVar10._4_4_ * _DAT_14615a290) + auVar35._4_4_;
    auVar48._8_4_ = -(auVar10._8_4_ * _DAT_14615a290) + auVar35._8_4_;
    auVar48._12_4_ = -(auVar10._12_4_ * _DAT_14615a290) + auVar35._12_4_;
    auVar35 = vblendps_avx(auVar33,auVar48,3);
    auVar34._0_4_ = (int)auVar10._0_4_;
    auVar34._4_4_ = (int)auVar10._4_4_;
    auVar34._8_4_ = (int)auVar10._8_4_;
    auVar34._12_4_ = (int)auVar10._12_4_;
    auVar10 = vpackssdw_avx(auVar34,auVar34);
    sVar27 = auVar10._0_2_;
    auVar17._0_2_ = auVar94._0_2_ + sVar27;
    sVar39 = auVar10._2_2_;
    auVar17._2_2_ = auVar94._2_2_ + sVar39;
    auVar17._4_2_ = auVar94._4_2_ + sVar27;
    auVar17._6_2_ = auVar94._6_2_ + sVar39;
    auVar17._8_2_ = auVar94._8_2_ + sVar27;
    auVar17._10_2_ = auVar94._10_2_ + sVar39;
    auVar17._12_2_ = auVar94._12_2_ + sVar27;
    auVar17._14_2_ = auVar94._14_2_ + sVar39;
    auVar17 = vpblendd_avx2(auVar35,auVar17,8);
    auVar35 = vpunpckhwd_avx(auVar17,auVar17);
    auVar35 = vpsrad_avx(auVar35,0x10);
    auVar35 = vcvtdq2ps_avx(auVar35);
    auVar10 = vshufpd_avx(auVar35,auVar35,3);
    auVar35._0_4_ = fVar25 * auVar10._0_4_ + auVar17._0_4_;
    auVar35._4_4_ = fVar26 * auVar10._4_4_ + auVar17._4_4_;
    auVar35._8_4_ = fVar97 * auVar10._8_4_ + auVar17._8_4_;
    auVar35._12_4_ = fVar99 * auVar10._12_4_ + auVar17._12_4_;
  }
  auVar94 = ZEXT1664(auVar35);
  bVar2 = bVar2 & bVar3;
  auVar84._0_4_ = auVar35._0_4_ * auVar35._0_4_;
  auVar84._4_4_ = auVar35._4_4_ * auVar35._4_4_;
  auVar84._8_4_ = auVar35._8_4_ * auVar35._8_4_;
  auVar84._12_4_ = auVar35._12_4_ * auVar35._12_4_;
  auVar89 = ZEXT1664(auVar84);
  if (param_4 != '\0') {
    if (bVar2 == 0) {
      auVar35 = vhaddps_avx(auVar84,auVar84);
      auVar9._0_4_ = auVar35._0_4_;
      auVar9._4_4_ = auVar9._0_4_;
      auVar9._8_4_ = auVar9._0_4_;
      auVar9._12_4_ = auVar9._0_4_;
    }
    else {
      auVar20._0_12_ = ZEXT812(0);
      auVar20._12_4_ = 0;
      auVar35 = vblendps_avx(auVar84,auVar20,8);
      auVar35 = vhaddps_avx(auVar35,auVar35);
      auVar9 = vhaddps_avx(auVar35,auVar35);
    }
    auVar35 = vrsqrtss_avx(auVar9,auVar9);
    fVar69 = auVar35._0_4_;
    auVar35 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar9,2);
    FUN_1400f6140(param_1,auVar35._0_4_ &
                          (uint)(((fVar69 * fVar69 * auVar9._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc)
                                  * fVar69 + fVar69) * auVar9._0_4_),
                  *(undefined4 *)(param_1 + 0x198),param_3);
    auVar35 = auVar94._0_16_;
    auVar84 = auVar89._0_16_;
  }
  fVar69 = _DAT_145fc6f08;
  fVar101 = (float)param_3;
  if (param_6 != '\0') {
    if (bVar2 == 0) {
      auVar10 = vhaddps_avx(auVar84,auVar84);
      fVar76 = auVar10._0_4_;
    }
    else {
      auVar21._0_12_ = ZEXT812(0);
      auVar21._12_4_ = 0;
      auVar10 = vblendps_avx(auVar84,auVar21,8);
      auVar10 = vhaddps_avx(auVar10,auVar10);
      auVar10 = vhaddps_avx(auVar10,auVar10);
      fVar76 = auVar10._0_4_;
    }
    auVar89 = ZEXT1264(ZEXT812(0));
    if (fVar76 <= 0.0) {
      puVar6 = (undefined8 *)func_0x000144ecfea0(param_7);
      uStack_128 = *puVar6;
      uStack_120 = puVar6[1];
      fVar76 = (float)FUN_144edcc50(&uStack_128,*(undefined4 *)(puVar6 + 2),1);
      fVar69 = fVar76 * _DAT_146159c48;
      auVar73._4_4_ = _DAT_145fc6edc;
      auVar73._0_4_ = _DAT_145fc6edc;
      auVar73._8_4_ = _DAT_145fc6edc;
      auVar73._12_4_ = _DAT_145fc6edc;
      auVar45._0_4_ = (uint)fVar69 & _DAT_145fc6f10;
      auVar45._4_4_ = (uint)fVar69 & _DAT_145fc6f10;
      auVar45._8_4_ = (uint)fVar69 & _DAT_145fc6f10;
      auVar45._12_4_ = (uint)fVar69 & _DAT_145fc6f10;
      auVar45 = auVar45 | auVar73;
      auVar74._4_4_ = _DAT_145f43778;
      auVar74._0_4_ = _DAT_145f43778;
      auVar74._8_4_ = _DAT_145f43778;
      auVar74._12_4_ = _DAT_145f43778;
      auVar10 = vpcmpeqd_avx(auVar45,auVar45);
      auVar31._0_4_ = (int)(fVar69 + auVar45._0_4_);
      auVar31._4_4_ = (int)(fVar69 + auVar45._4_4_);
      auVar31._8_4_ = (int)(fVar69 + auVar45._8_4_);
      auVar31._12_4_ = (int)(fVar69 + auVar45._12_4_);
      auVar35 = vcvtdq2ps_avx(auVar31);
      auVar17 = vpsubd_avx(auVar31,auVar10);
      fVar69 = auVar35._0_4_ * _DAT_146159b50 + auVar35._0_4_ * _DAT_146159b4c + fVar76;
      fVar77 = auVar35._4_4_ * _DAT_146159b50 + auVar35._4_4_ * _DAT_146159b4c + fVar76;
      fVar78 = auVar35._8_4_ * _DAT_146159b50 + auVar35._8_4_ * _DAT_146159b4c + fVar76;
      fVar76 = auVar35._12_4_ * _DAT_146159b50 + auVar35._12_4_ * _DAT_146159b4c + fVar76;
      fVar82 = fVar69 * fVar69;
      fVar90 = fVar77 * fVar77;
      fVar91 = fVar78 * fVar78;
      fVar92 = fVar76 * fVar76;
      auVar103._0_4_ =
           fVar82 * fVar69 * (fVar82 * (fVar82 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar69;
      auVar103._4_4_ =
           fVar90 * fVar77 * (fVar90 * (fVar90 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar77;
      auVar103._8_4_ =
           fVar91 * fVar78 * (fVar91 * (fVar91 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar78;
      auVar103._12_4_ =
           fVar92 * fVar76 * (fVar92 * (fVar92 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar76;
      auVar87._4_4_ = _DAT_145f43774;
      auVar87._0_4_ = _DAT_145f43774;
      auVar87._8_4_ = _DAT_145f43774;
      auVar87._12_4_ = _DAT_145f43774;
      auVar35 = vpand_avx(auVar31,auVar74);
      auVar100._0_4_ =
           fVar82 * (fVar82 * (fVar82 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           _DAT_145fc6ed8;
      auVar100._4_4_ =
           fVar90 * (fVar90 * (fVar90 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           _DAT_145fc6ed8;
      auVar100._8_4_ =
           fVar91 * (fVar91 * (fVar91 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           _DAT_145fc6ed8;
      auVar100._12_4_ =
           fVar92 * (fVar92 * (fVar92 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           _DAT_145fc6ed8;
      auVar10 = vpcmpeqd_avx(auVar35,(undefined1  [16])0x0);
      auVar18 = vpsubd_avx((undefined1  [16])0x0,auVar35);
      auStack_148._4_4_ = _UNK_146159bc4;
      auStack_148._0_4_ = _DAT_146159bc0;
      auStack_148._8_8_ = 0;
      auVar17 = vpand_avx(auVar17,auVar87);
      auVar35 = vblendvps_avx(auVar100,auVar103,auVar10);
      auVar10 = vblendvps_avx(auVar100,auVar103,auVar18);
      auVar18 = vpand_avx(auVar31,auVar87);
      auVar88._0_4_ = auVar35._0_4_ ^ _DAT_145fc6f10;
      auVar88._4_4_ = auVar35._4_4_ ^ _DAT_145fc6f10;
      auVar88._8_4_ = auVar35._8_4_ ^ _DAT_145fc6f10;
      auVar88._12_4_ = auVar35._12_4_ ^ _DAT_145fc6f10;
      auVar17 = vpcmpeqd_avx(auVar17,(undefined1  [16])0x0);
      auVar14._0_4_ = auVar10._0_4_ ^ _DAT_145fc6f10;
      auVar14._4_4_ = auVar10._4_4_ ^ _DAT_145fc6f10;
      auVar14._8_4_ = auVar10._8_4_ ^ _DAT_145fc6f10;
      auVar14._12_4_ = auVar10._12_4_ ^ _DAT_145fc6f10;
      auVar18 = vpcmpeqd_avx(auVar18,(undefined1  [16])0x0);
      auVar10 = vblendvps_avx(auVar14,auVar10,auVar17);
      auVar35 = vblendvps_avx(auVar88,auVar35,auVar18);
      auVar10 = vshufps_avx(auVar10,auVar10,0xf1);
      auVar32._0_4_ = _DAT_146159bc0 * auVar35._0_4_;
      auVar32._4_4_ = _UNK_146159bc4 * auVar35._4_4_;
      auVar32._8_4_ = auVar35._8_4_ * 0.0;
      auVar32._12_4_ = auVar35._12_4_ * 0.0;
      auVar15._0_4_ = auVar10._0_4_ * _DAT_145fc6ed8;
      auVar15._4_4_ = auVar10._4_4_ * 0.0;
      auVar15._8_4_ = auVar10._8_4_ * 0.0;
      auVar15._12_4_ = auVar10._12_4_ * 0.0;
      auVar10 = vsubps_avx(auVar15,auVar32);
      auVar16._0_4_ = auVar32._0_4_ + auVar15._0_4_;
      auVar16._4_4_ = auVar32._4_4_ + auVar15._4_4_;
      auVar16._8_4_ = auVar32._8_4_ + auVar15._8_4_;
      auVar16._12_4_ = auVar32._12_4_ + auVar15._12_4_;
      auVar35 = vshufps_avx(auVar16,auVar16,0x60);
      auVar35 = vinsertps_avx(auVar35,auVar10,0x44);
      *(undefined1 (*) [16])(param_1 + 0x30) = auVar35;
    }
    else {
      auVar102._0_12_ = ZEXT812(0);
      auVar102._12_4_ = 0;
      auVar104 = ZEXT1664(auVar102);
      auVar10 = vblendps_avx(auVar84,auVar102,8);
      auVar10 = vhaddps_avx(auVar10,auVar10);
      auVar10 = vhaddps_avx(auVar10,auVar10);
      auVar17 = vrsqrtps_avx(auVar10);
      fVar76 = auVar17._0_4_;
      fVar77 = auVar17._4_4_;
      fVar78 = auVar17._8_4_;
      fVar82 = auVar17._12_4_;
      auVar93._0_4_ =
           auVar35._0_4_ *
           ((_DAT_145fc6f08 * fVar76 * fVar76 * auVar10._0_4_ - _DAT_145fc6f08) * fVar76 + fVar76);
      auVar93._4_4_ =
           auVar35._4_4_ *
           ((_DAT_145fc6f08 * fVar77 * fVar77 * auVar10._4_4_ - _DAT_145fc6f08) * fVar77 + fVar77);
      auVar93._8_4_ =
           auVar35._8_4_ *
           ((_DAT_145fc6f08 * fVar78 * fVar78 * auVar10._8_4_ - _DAT_145fc6f08) * fVar78 + fVar78);
      auVar93._12_4_ =
           auVar35._12_4_ *
           ((_DAT_145fc6f08 * fVar82 * fVar82 * auVar10._12_4_ - _DAT_145fc6f08) * fVar82 + fVar82);
      auVar94 = ZEXT1664(auVar93);
      *(undefined1 (*) [16])(param_1 + 0x30) = auVar93;
      fVar51 = fVar69;
      fVar52 = fVar69;
      fVar53 = fVar69;
      puVar6 = (undefined8 *)func_0x000144ecfea0(param_7);
      uStack_138 = *puVar6;
      uStack_130 = puVar6[1];
      fVar8 = (float)FUN_144edcc50(&uStack_138,*(undefined4 *)(puVar6 + 2),1);
      auVar40._8_8_ = _DAT_14615afb0;
      auVar40._0_8_ = _DAT_14615afb0;
      auVar17 = auVar94._0_16_;
      fVar76 = auVar94._0_4_;
      auVar28._0_4_ = fVar76 * fVar76;
      fVar78 = auVar94._4_4_;
      auVar28._4_4_ = fVar78 * fVar78;
      auVar28._8_4_ = auVar94._8_4_ * auVar94._8_4_;
      auVar28._12_4_ = auVar94._12_4_ * auVar94._12_4_;
      auVar106._4_4_ = _DAT_145fc6ed8;
      auVar106._0_4_ = _DAT_145fc6ed8;
      auVar106._8_4_ = _DAT_145fc6ed8;
      auVar106._12_4_ = _DAT_145fc6ed8;
      auVar107 = ZEXT1664(auVar106);
      auVar35 = vhaddps_avx(auVar28,auVar28);
      auVar10 = vhaddps_avx(auVar40,auVar40);
      fVar77 = auVar35._0_4_;
      auVar29._0_4_ = auVar10._0_4_ * fVar77;
      auVar29._4_4_ = auVar10._4_4_ * fVar77;
      auVar29._8_4_ = auVar10._8_4_ * fVar77;
      auVar29._12_4_ = auVar10._12_4_ * fVar77;
      auVar35 = vrsqrtps_avx(auVar29);
      fVar77 = auVar35._0_4_;
      fVar82 = auVar35._4_4_;
      fVar91 = auVar35._8_4_;
      fVar92 = auVar35._12_4_;
      auVar35 = vshufps_avx(auVar17,auVar17,0xd2);
      auVar10 = vshufps_avx(_DAT_14614f7f0,_DAT_14614f7f0,0xd2);
      auVar17 = vshufps_avx(auVar17,auVar17,0xc9);
      auVar79._0_4_ = -((float)DAT_14614f7f0 * auVar17._0_4_) + auVar35._0_4_ * auVar10._0_4_;
      auVar79._4_4_ = -(DAT_14614f7f0._4_4_ * auVar17._4_4_) + auVar35._4_4_ * auVar10._4_4_;
      auVar79._8_4_ = -(DAT_14614f7f0._8_4_ * auVar17._8_4_) + auVar35._8_4_ * auVar10._8_4_;
      auVar79._12_4_ = -(DAT_14614f7f0._12_4_ * auVar17._12_4_) + auVar35._12_4_ * auVar10._12_4_;
      auVar41._0_4_ = fVar76 * (float)_DAT_14615afb0;
      fVar90 = (float)((ulonglong)_DAT_14615afb0 >> 0x20);
      auVar41._4_4_ = fVar78 * fVar90;
      auVar41._8_4_ = fVar76 * (float)_DAT_14615afb0;
      auVar41._12_4_ = fVar78 * fVar90;
      auVar55._4_4_ = _DAT_145fc6f48;
      auVar55._0_4_ = _DAT_145fc6f48;
      auVar55._8_4_ = _DAT_145fc6f48;
      auVar55._12_4_ = _DAT_145fc6f48;
      auVar10 = vhaddps_avx(auVar41,auVar41);
      auVar35 = vcmpps_avx(auVar104._0_16_,auVar79,2);
      auVar17 = vshufpd_avx(auVar35,auVar35,3);
      auVar42._0_4_ =
           ((fVar69 * fVar77 * fVar77 * auVar29._0_4_ - fVar69) * fVar77 + fVar77) * auVar10._0_4_;
      auVar42._4_4_ =
           ((fVar51 * fVar82 * fVar82 * auVar29._4_4_ - fVar51) * fVar82 + fVar82) * auVar10._4_4_;
      auVar42._8_4_ =
           ((fVar52 * fVar91 * fVar91 * auVar29._8_4_ - fVar52) * fVar91 + fVar91) * auVar10._8_4_;
      auVar42._12_4_ =
           ((fVar53 * fVar92 * fVar92 * auVar29._12_4_ - fVar53) * fVar92 + fVar92) * auVar10._12_4_
      ;
      auVar35 = vmaxps_avx(auVar42,auVar55);
      auVar10 = vminps_avx(auVar35,auVar106);
      fVar90 = auVar10._0_4_;
      auVar56._0_4_ = (float)((uint)fVar90 & _DAT_145fc6f4c);
      fVar91 = auVar10._4_4_;
      auVar56._4_4_ = (float)((uint)fVar91 & _DAT_145fc6f4c);
      fVar92 = auVar10._8_4_;
      auVar56._8_4_ = (float)((uint)fVar92 & _DAT_145fc6f4c);
      fVar25 = auVar10._12_4_;
      auVar56._12_4_ = (float)((uint)fVar25 & _DAT_145fc6f4c);
      auVar18 = vsubps_avx(auVar106,auVar56);
      auVar35 = vrsqrtps_avx(auVar18);
      fVar76 = auVar35._0_4_;
      fVar77 = auVar35._4_4_;
      fVar78 = auVar35._8_4_;
      fVar82 = auVar35._12_4_;
      auVar85._4_4_ = _DAT_146159bfc;
      auVar85._0_4_ = _DAT_146159bfc;
      auVar85._8_4_ = _DAT_146159bfc;
      auVar85._12_4_ = _DAT_146159bfc;
      auVar35 = vcmpps_avx(auVar85,auVar18,2);
      fVar69 = (float)(auVar35._0_4_ &
                      (uint)(((fVar69 * fVar76 * fVar76 * auVar18._0_4_ - fVar69) * fVar76 + fVar76)
                            * auVar18._0_4_));
      fVar76 = (float)(auVar35._4_4_ &
                      (uint)(((fVar51 * fVar77 * fVar77 * auVar18._4_4_ - fVar51) * fVar77 + fVar77)
                            * auVar18._4_4_));
      fVar77 = (float)(auVar35._8_4_ &
                      (uint)(((fVar52 * fVar78 * fVar78 * auVar18._8_4_ - fVar52) * fVar78 + fVar78)
                            * auVar18._8_4_));
      fVar78 = (float)(auVar35._12_4_ &
                      (uint)(((fVar53 * fVar82 * fVar82 * auVar18._12_4_ - fVar53) * fVar82 + fVar82
                             ) * auVar18._12_4_));
      fVar82 = fVar90 * fVar90 * fVar90 * fVar90 *
               (auVar56._0_4_ *
                (auVar56._0_4_ * (auVar56._0_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08)
               + _DAT_146159c0c) +
               (auVar56._0_4_ *
                (auVar56._0_4_ * (auVar56._0_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18)
               - _DAT_146159b4c);
      fVar90 = fVar91 * fVar91 * fVar91 * fVar91 *
               (auVar56._4_4_ *
                (auVar56._4_4_ * (auVar56._4_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08)
               + _DAT_146159c0c) +
               (auVar56._4_4_ *
                (auVar56._4_4_ * (auVar56._4_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18)
               - _DAT_146159b4c);
      fVar91 = fVar92 * fVar92 * fVar92 * fVar92 *
               (auVar56._8_4_ *
                (auVar56._8_4_ * (auVar56._8_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08)
               + _DAT_146159c0c) +
               (auVar56._8_4_ *
                (auVar56._8_4_ * (auVar56._8_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18)
               - _DAT_146159b4c);
      fVar92 = fVar25 * fVar25 * fVar25 * fVar25 *
               (auVar56._12_4_ *
                (auVar56._12_4_ * (auVar56._12_4_ * _DAT_146159c04 + _DAT_146159c00) +
                _DAT_146159c08) + _DAT_146159c0c) +
               (auVar56._12_4_ *
                (auVar56._12_4_ * (auVar56._12_4_ * _DAT_146159c14 + _DAT_146159c10) +
                _DAT_146159c18) - _DAT_146159b4c);
      auVar94 = ZEXT464((uint)_DAT_145fc6f80);
      auVar57._0_4_ = -(fVar82 * fVar69) + _DAT_145fc6f80;
      auVar57._4_4_ = -(fVar90 * fVar76) + _DAT_145fc6f80;
      auVar57._8_4_ = -(fVar91 * fVar77) + _DAT_145fc6f80;
      auVar57._12_4_ = -(fVar92 * fVar78) + _DAT_145fc6f80;
      auVar70._0_4_ = fVar69 * fVar82;
      auVar70._4_4_ = fVar76 * fVar90;
      auVar70._8_4_ = fVar77 * fVar91;
      auVar70._12_4_ = fVar78 * fVar92;
      auVar35 = vblendvps_avx(auVar70,auVar57,auVar10);
      auVar58._0_4_ = _DAT_145fc6f10 ^ auVar35._0_4_;
      auVar58._4_4_ = _DAT_145fc6f10 ^ auVar35._4_4_;
      auVar58._8_4_ = _DAT_145fc6f10 ^ auVar35._8_4_;
      auVar58._12_4_ = _DAT_145fc6f10 ^ auVar35._12_4_;
      auVar35 = vblendvps_avx(auVar58,auVar35,auVar17);
      auVar59._4_4_ = _DAT_146159be0;
      auVar59._0_4_ = _DAT_146159be0;
      auVar59._8_4_ = _DAT_146159be0;
      auVar59._12_4_ = _DAT_146159be0;
      fVar8 = auVar35._0_4_ - fVar8;
      auVar35 = vcmpss_avx(auVar89._0_16_,ZEXT416((uint)fVar8),2);
      auVar35 = vblendvps_avx(auVar59,ZEXT416((uint)_DAT_145fc6f80),auVar35);
      auVar89 = ZEXT1664(auVar35);
      uVar7 = _DAT_145fc6f10;
      uVar95 = _DAT_145fc6f10;
      uVar96 = _DAT_145fc6f10;
      uVar98 = _DAT_145fc6f10;
      fVar76 = _DAT_146159b4c;
      fVar77 = _DAT_146159b4c;
      fVar78 = _DAT_146159b4c;
      fVar82 = _DAT_146159b4c;
      fVar69 = (float)func_0x000145f40820(auVar35._0_4_ + fVar8,_DAT_145fc6f84);
      auVar10 = ZEXT416((uint)(fVar69 - auVar89._0_4_));
      auVar35 = vcmpss_avx(auVar10,ZEXT416(_DAT_146159be0),2);
      auVar44._4_4_ = _DAT_145fc6edc;
      auVar44._0_4_ = _DAT_145fc6edc;
      auVar44._8_4_ = _DAT_145fc6edc;
      auVar44._12_4_ = _DAT_145fc6edc;
      auVar112 = ZEXT1664(auVar44);
      auVar35 = vblendvps_avx(auVar10,auVar94._0_16_,auVar35);
      fVar90 = auVar35._0_4_;
      fVar69 = fVar90 * _DAT_146159c48;
      auVar43._0_4_ = uVar7 & (uint)fVar69;
      auVar43._4_4_ = uVar95 & (uint)fVar69;
      auVar43._8_4_ = uVar96 & (uint)fVar69;
      auVar43._12_4_ = uVar98 & (uint)fVar69;
      auVar44 = auVar44 | auVar43;
      auVar11._0_4_ = (uint)(fVar69 + auVar44._0_4_);
      auVar11._4_4_ = (uint)(fVar69 + auVar44._4_4_);
      auVar11._8_4_ = (uint)(fVar69 + auVar44._8_4_);
      auVar11._12_4_ = (uint)(fVar69 + auVar44._12_4_);
      auVar35 = vcvtdq2ps_avx(auVar11);
      fVar69 = _DAT_146159b50 * auVar35._0_4_ + auVar35._0_4_ * fVar76 + fVar90;
      fVar91 = _DAT_146159b50 * auVar35._4_4_ + auVar35._4_4_ * fVar77 + fVar90;
      fVar92 = _DAT_146159b50 * auVar35._8_4_ + auVar35._8_4_ * fVar78 + fVar90;
      fVar90 = _DAT_146159b50 * auVar35._12_4_ + auVar35._12_4_ * fVar82 + fVar90;
      fVar8 = fVar69 * fVar69;
      fVar51 = fVar91 * fVar91;
      fVar52 = fVar92 * fVar92;
      fVar53 = fVar90 * fVar90;
      auVar71._0_4_ =
           fVar8 * (fVar8 * (fVar8 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           auVar107._0_4_;
      auVar71._4_4_ =
           fVar51 * (fVar51 * (fVar51 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           auVar107._4_4_;
      auVar71._8_4_ =
           fVar52 * (fVar52 * (fVar52 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           auVar107._8_4_;
      auVar71._12_4_ =
           fVar53 * (fVar53 * (fVar53 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           auVar107._12_4_;
      auVar80._0_4_ =
           fVar8 * fVar69 * (fVar8 * (fVar8 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
           fVar69;
      auVar80._4_4_ =
           fVar51 * fVar91 * (fVar51 * (fVar51 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar91;
      auVar80._8_4_ =
           fVar52 * fVar92 * (fVar52 * (fVar52 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar92;
      auVar80._12_4_ =
           fVar53 * fVar90 * (fVar53 * (fVar53 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar90;
      auVar30._0_4_ = auVar11._0_4_ & _DAT_145f43778;
      auVar30._4_4_ = auVar11._4_4_ & _DAT_145f43778;
      auVar30._8_4_ = auVar11._8_4_ & _DAT_145f43778;
      auVar30._12_4_ = auVar11._12_4_ & _DAT_145f43778;
      auVar86._4_4_ = _DAT_145f43774;
      auVar86._0_4_ = _DAT_145f43774;
      auVar86._8_4_ = _DAT_145f43774;
      auVar86._12_4_ = _DAT_145f43774;
      auVar89 = ZEXT1664(auVar86);
      auVar18 = auVar104._0_16_;
      auVar35 = vpcmpeqd_avx(auVar18,auVar30);
      auVar10 = vpsubd_avx(auVar18,auVar30);
      auVar35 = vblendvps_avx(auVar71,auVar80,auVar35);
      auVar10 = vblendvps_avx(auVar71,auVar80,auVar10);
      auVar72._0_4_ = uVar7 ^ auVar35._0_4_;
      auVar72._4_4_ = uVar95 ^ auVar35._4_4_;
      auVar72._8_4_ = uVar96 ^ auVar35._8_4_;
      auVar72._12_4_ = uVar98 ^ auVar35._12_4_;
      auVar60._0_4_ = auVar11._0_4_ & _DAT_145f43774;
      auVar60._4_4_ = auVar11._4_4_ & _DAT_145f43774;
      auVar60._8_4_ = auVar11._8_4_ & _DAT_145f43774;
      auVar60._12_4_ = auVar11._12_4_ & _DAT_145f43774;
      auVar17 = vpcmpeqd_avx(auVar18,auVar60);
      auVar35 = vblendvps_avx(auVar72,auVar35,auVar17);
      auVar17 = vpcmpeqd_avx(auVar17,auVar17);
      auVar17 = vpsubd_avx(auVar11,auVar17);
      auVar61._0_4_ = uVar7 ^ auVar10._0_4_;
      auVar61._4_4_ = uVar95 ^ auVar10._4_4_;
      auVar61._8_4_ = uVar96 ^ auVar10._8_4_;
      auVar61._12_4_ = uVar98 ^ auVar10._12_4_;
      auVar17 = vpand_avx(auVar17,auVar86);
      auVar17 = vpcmpeqd_avx(auVar18,auVar17);
      auVar10 = vblendvps_avx(auVar61,auVar10,auVar17);
      auVar62._0_4_ = auVar35._0_4_ * _DAT_146159bc0;
      auVar62._4_4_ = auVar35._4_4_ * _UNK_146159bc4;
      auVar62._8_4_ = auVar35._8_4_ * _UNK_146159bc8;
      auVar62._12_4_ = auVar35._12_4_ * _UNK_146159bcc;
      auVar35 = vshufps_avx(auVar10,auVar10,0xf1);
      auVar12._0_4_ = auVar35._0_4_ * _DAT_145fc6ed8;
      auVar12._4_4_ = auVar35._4_4_ * 0.0;
      auVar12._8_4_ = auVar35._8_4_ * 0.0;
      auVar12._12_4_ = auVar35._12_4_ * 0.0;
      auVar10 = vsubps_avx(auVar12,auVar62);
      auVar13._0_4_ = auVar62._0_4_ + auVar12._0_4_;
      auVar13._4_4_ = auVar62._4_4_ + auVar12._4_4_;
      auVar13._8_4_ = auVar62._8_4_ + auVar12._8_4_;
      auVar13._12_4_ = auVar62._12_4_ + auVar12._12_4_;
      auVar35 = vshufps_avx(auVar13,auVar13,0x60);
      auStack_148 = vinsertps_avx(auVar35,auVar10,0x44);
      auVar94 = ZEXT1664(auStack_148);
      if (bVar2 != 0) {
        uVar105 = _DAT_145f43778;
        uVar108 = _DAT_145f43778;
        uVar109 = _DAT_145f43778;
        uVar110 = _DAT_145f43778;
        fVar90 = _DAT_146159b58;
        fVar91 = _DAT_146159b58;
        fVar92 = _DAT_146159b58;
        fVar8 = _DAT_146159b58;
        fVar51 = _DAT_146159b60;
        fVar52 = _DAT_146159b60;
        fVar53 = _DAT_146159b60;
        fVar25 = _DAT_146159b60;
        FUN_1452448d0(puVar6,auStack_198);
        fVar69 = (float)func_0x000145f40890(*(undefined4 *)(param_1 + 0x38));
        auVar49._4_4_ = _DAT_146159be0;
        auVar49._0_4_ = _DAT_146159be0;
        auVar49._8_4_ = _DAT_146159be0;
        auVar49._12_4_ = _DAT_146159be0;
        auVar36._0_12_ = ZEXT812(0);
        auVar36._12_4_ = 0;
        auVar35 = vcmpss_avx(auVar36,ZEXT416((uint)(fVar69 - (float)auStack_198._0_4_)),2);
        auVar35 = vblendvps_avx(auVar49,ZEXT416((uint)_DAT_145fc6f80),auVar35);
        auVar104 = ZEXT1664(auVar35);
        fVar69 = (float)func_0x000145f40820(auVar35._0_4_ + (fVar69 - (float)auStack_198._0_4_),
                                            _DAT_145fc6f84);
        auVar10 = ZEXT416((uint)(fVar69 - auVar104._0_4_));
        auVar35 = vcmpss_avx(auVar10,ZEXT416(_DAT_146159be0),2);
        auVar81._0_12_ = ZEXT812(0);
        auVar81._12_4_ = 0;
        auVar35 = vblendvps_avx(auVar10,ZEXT416((uint)_DAT_145fc6f80),auVar35);
        fVar26 = auVar35._0_4_;
        fVar69 = fVar26 * _DAT_146159c48;
        auVar50._0_4_ = uVar7 & (uint)fVar69;
        auVar50._4_4_ = uVar95 & (uint)fVar69;
        auVar50._8_4_ = uVar96 & (uint)fVar69;
        auVar50._12_4_ = uVar98 & (uint)fVar69;
        auVar50 = auVar112._0_16_ | auVar50;
        auVar22._0_4_ = (uint)(fVar69 + auVar50._0_4_);
        auVar22._4_4_ = (uint)(fVar69 + auVar50._4_4_);
        auVar22._8_4_ = (uint)(fVar69 + auVar50._8_4_);
        auVar22._12_4_ = (uint)(fVar69 + auVar50._12_4_);
        auVar35 = vcvtdq2ps_avx(auVar22);
        fVar54 = auVar35._0_4_ * _DAT_146159b50 + auVar35._0_4_ * fVar76 + fVar26;
        fVar67 = auVar35._4_4_ * _DAT_146159b50 + auVar35._4_4_ * fVar77 + fVar26;
        fVar68 = auVar35._8_4_ * _DAT_146159b50 + auVar35._8_4_ * fVar78 + fVar26;
        fVar82 = auVar35._12_4_ * _DAT_146159b50 + auVar35._12_4_ * fVar82 + fVar26;
        fVar69 = fVar54 * fVar54;
        fVar76 = fVar67 * fVar67;
        fVar77 = fVar68 * fVar68;
        fVar78 = fVar82 * fVar82;
        auVar111._0_4_ =
             fVar69 * (fVar69 * (fVar69 * fVar90 + _DAT_146159b54) + _DAT_146159b64) +
             _DAT_145fc6ed8;
        auVar111._4_4_ =
             fVar76 * (fVar76 * (fVar76 * fVar91 + _DAT_146159b54) + _DAT_146159b64) +
             _DAT_145fc6ed8;
        auVar111._8_4_ =
             fVar77 * (fVar77 * (fVar77 * fVar92 + _DAT_146159b54) + _DAT_146159b64) +
             _DAT_145fc6ed8;
        auVar111._12_4_ =
             fVar78 * (fVar78 * (fVar78 * fVar8 + _DAT_146159b54) + _DAT_146159b64) + _DAT_145fc6ed8
        ;
        auVar113._0_4_ =
             fVar69 * fVar54 * (fVar69 * (fVar69 * fVar51 + _DAT_146159b5c) + _DAT_146159b68) +
             fVar54;
        auVar113._4_4_ =
             fVar76 * fVar67 * (fVar76 * (fVar76 * fVar52 + _DAT_146159b5c) + _DAT_146159b68) +
             fVar67;
        auVar113._8_4_ =
             fVar77 * fVar68 * (fVar77 * (fVar77 * fVar53 + _DAT_146159b5c) + _DAT_146159b68) +
             fVar68;
        auVar113._12_4_ =
             fVar78 * fVar82 * (fVar78 * (fVar78 * fVar25 + _DAT_146159b5c) + _DAT_146159b68) +
             fVar82;
        auVar65._0_4_ = auVar22._0_4_ & auVar89._0_4_;
        auVar65._4_4_ = auVar22._4_4_ & auVar89._4_4_;
        auVar65._8_4_ = auVar22._8_4_ & auVar89._8_4_;
        auVar65._12_4_ = auVar22._12_4_ & auVar89._12_4_;
        auVar37._0_4_ = uVar105 & auVar22._0_4_;
        auVar37._4_4_ = uVar108 & auVar22._4_4_;
        auVar37._8_4_ = uVar109 & auVar22._8_4_;
        auVar37._12_4_ = uVar110 & auVar22._12_4_;
        auVar18 = vpsubd_avx(auVar22,_DAT_145f41010);
        auVar35 = vpcmpeqd_avx(auVar37,auVar81);
        auVar10 = vpsubd_avx(auVar81,auVar37);
        auVar17 = vpcmpeqd_avx(auVar65,auVar81);
        auVar35 = vblendvps_avx(auVar111,auVar113,auVar35);
        auVar10 = vblendvps_avx(auVar111,auVar113,auVar10);
        auVar75._0_4_ = uVar7 ^ auVar35._0_4_;
        auVar75._4_4_ = uVar95 ^ auVar35._4_4_;
        auVar75._8_4_ = uVar96 ^ auVar35._8_4_;
        auVar75._12_4_ = uVar98 ^ auVar35._12_4_;
        auVar35 = vblendvps_avx(auVar75,auVar35,auVar17);
        auVar66._0_4_ = uVar7 ^ auVar10._0_4_;
        auVar66._4_4_ = uVar95 ^ auVar10._4_4_;
        auVar66._8_4_ = uVar96 ^ auVar10._8_4_;
        auVar66._12_4_ = uVar98 ^ auVar10._12_4_;
        auVar17 = vpand_avx(auVar18,auVar89._0_16_);
        auVar17 = vpcmpeqd_avx(auVar17,auVar81);
        auVar10 = vblendvps_avx(auVar66,auVar10,auVar17);
        auVar38._0_4_ = auVar94._0_4_ * auVar35._0_4_;
        auVar38._4_4_ = auVar94._4_4_ * auVar35._4_4_;
        auVar38._8_4_ = auVar94._8_4_ * auVar35._8_4_;
        auVar38._12_4_ = auVar94._12_4_ * auVar35._12_4_;
        auVar23._0_4_ = auVar94._0_4_ * auVar10._0_4_;
        auVar23._4_4_ = auVar94._4_4_ * auVar10._4_4_;
        auVar23._8_4_ = auVar94._8_4_ * auVar10._8_4_;
        auVar23._12_4_ = auVar94._12_4_ * auVar10._12_4_;
        auVar35 = vshufps_avx(auVar23,auVar23,0xdb);
        auVar10 = vsubps_avx(auVar35,auVar38);
        auVar24._0_4_ = auVar38._0_4_ + auVar35._0_4_;
        auVar24._4_4_ = auVar38._4_4_ + auVar35._4_4_;
        auVar24._8_4_ = auVar38._8_4_ + auVar35._8_4_;
        auVar24._12_4_ = auVar38._12_4_ + auVar35._12_4_;
        auVar35 = vmovlhps_avx(auVar94._0_16_,auVar24);
        auVar35 = vblendps_avx(auVar35,auVar10,4);
        auStack_148 = vshufps_avx(auVar35,auVar35,0xf8);
      }
    }
    func_0x0001453453c0(param_1);
    *(float *)(param_1 + 0x24) = fVar101 * (float)uStack_180;
  }
LAB_1400f563d:
  if (param_5 != '\0') {
    *(undefined1 (*) [8])(param_1 + 0x70) = auStack_188;
    *(undefined8 *)(param_1 + 0x78) = uStack_180;
  }
  return;
}

