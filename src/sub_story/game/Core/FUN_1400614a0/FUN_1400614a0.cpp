// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400614a0  size: 1866 bytes
// Name:    FUN_1400614a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e9e390, FUN_144ea23c0, FUN_144e9e1f0, FUN_140062770, FUN_144e9e800, FUN_144ea2740, FUN_1400622e0, FUN_140061c40, FUN_144ea17c0, FUN_144e9edf0, FUN_140061e60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1400614a0(undefined4 *param_1,longlong *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  char *pcVar18;
  float fVar19;
  float fVar29;
  float fVar30;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar31;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar32;
  float fVar36;
  float fVar37;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [64];
  undefined1 auVar49 [16];
  undefined1 auVar50 [64];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar56 [16];
  undefined1 auVar60 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  undefined1 auVar70 [64];
  undefined1 auVar71 [64];
  undefined1 auStack_198 [28];
  undefined4 uStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined8 uStack_150;
  ulonglong uStack_148;
  ulonglong uStack_140;
  undefined1 auStack_138 [16];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 auStack_118 [8];
  float fStack_110;
  float fStack_10c;
  undefined1 auStack_108 [16];
  ulonglong auStack_f8 [23];
  undefined1 auVar61 [64];
  
  uStack_150 = param_4;
  iVar10 = (**(code **)(*param_2 + 0x78))(param_2);
  if (0 < iVar10) {
    iVar10 = 0;
    do {
      FUN_144e9e390(param_2,param_3,iVar10);
      iVar10 = iVar10 + 1;
      iVar11 = (**(code **)(*param_2 + 0x78))(param_2);
    } while (iVar10 < iVar11);
  }
  pcVar18 = (char *)(param_1 + 0x24);
  *(longlong *)(param_1 + 0x2628) = param_2[0xe];
  param_1[0x262a] = (int)param_2[0xf];
  *param_1 = *(undefined4 *)((longlong)param_2 + 0x7c);
  uStack_17c = param_3;
  iVar10 = (**(code **)(*param_2 + 0x78))(param_2);
  param_1[0x2624] = iVar10 + -1;
  iVar10 = (**(code **)(*param_2 + 0x78))(param_2);
  if (1 < iVar10) {
    auVar20._4_4_ = _DAT_146159cc0;
    auVar20._0_4_ = _DAT_146159cc0;
    auVar20._8_4_ = _DAT_146159cc0;
    auVar20._12_4_ = _DAT_146159cc0;
    auVar60._4_4_ = _DAT_145f43774;
    auVar60._0_4_ = _DAT_145f43774;
    auVar60._8_4_ = _DAT_145f43774;
    auVar60._12_4_ = _DAT_145f43774;
    auVar61 = ZEXT1664(auVar60);
    auVar50 = ZEXT1664((undefined1  [16])0x0);
    auVar48 = ZEXT1664(CONCAT412(_DAT_145f43778,
                                 CONCAT48(_DAT_145f43778,CONCAT44(_DAT_145f43778,_DAT_145f43778))));
    uVar16 = 0;
    lVar15 = 0;
    uVar17 = 1;
    auStack_138._0_4_ = (int)_DAT_146159cc0;
    auStack_138._4_4_ = (int)_DAT_146159cc0;
    auStack_138._8_4_ = (int)_DAT_146159cc0;
    auStack_138._12_4_ = (int)_DAT_146159cc0;
    auVar20 = vpcmpeqd_avx(auVar20,auVar20);
    auVar4 = vpsubd_avx(auStack_138,auVar20);
    auVar20 = vcvtdq2ps_avx(auStack_138);
    auVar4 = vpand_avx(auVar60,auVar4);
    auStack_108 = vpcmpeqd_avx((undefined1  [16])0x0,auVar4);
    fStack_128 = _DAT_146159b50 * auVar20._0_4_ + (auVar20._0_4_ * _DAT_146159b4c - _DAT_14615a1a0);
    fStack_124 = _DAT_146159b50 * auVar20._4_4_ + (auVar20._4_4_ * _DAT_146159b4c - _DAT_14615a1a0);
    fStack_120 = _DAT_146159b50 * auVar20._8_4_ + (auVar20._8_4_ * _DAT_146159b4c - _DAT_14615a1a0);
    fStack_11c = _DAT_146159b50 * auVar20._12_4_ +
                 (auVar20._12_4_ * _DAT_146159b4c - _DAT_14615a1a0);
    auVar70 = ZEXT1664(CONCAT412((int)_DAT_14615b7a0,
                                 CONCAT48((int)_DAT_14615b7a0,
                                          CONCAT44((int)_DAT_14615b7a0,(int)_DAT_14615b7a0))));
    fVar62 = fStack_128 * fStack_128;
    fVar63 = fStack_124 * fStack_124;
    fVar64 = fStack_120 * fStack_120;
    fVar65 = fStack_11c * fStack_11c;
    auStack_118._0_4_ = fVar62 * fStack_128;
    auStack_118._4_4_ = fVar63 * fStack_124;
    fStack_110 = fVar64 * fStack_120;
    fStack_10c = fVar65 * fStack_11c;
    auVar71 = ZEXT1664(CONCAT412(fVar65 * (fVar65 * (fVar65 * _DAT_146159b58 + _DAT_146159b54) +
                                          _DAT_146159b64) + _DAT_145fc6ed8,
                                 CONCAT48(fVar64 * (fVar64 * (fVar64 * _DAT_146159b58 +
                                                             _DAT_146159b54) + _DAT_146159b64) +
                                          _DAT_145fc6ed8,
                                          CONCAT44(fVar63 * (fVar63 * (fVar63 * _DAT_146159b58 +
                                                                      _DAT_146159b54) +
                                                            _DAT_146159b64) + _DAT_145fc6ed8,
                                                   fVar62 * (fVar62 * (fVar62 * _DAT_146159b58 +
                                                                      _DAT_146159b54) +
                                                            _DAT_146159b64) + _DAT_145fc6ed8))));
    uVar66 = _DAT_145fc6f10;
    uVar67 = _DAT_145fc6f10;
    uVar68 = _DAT_145fc6f10;
    uVar69 = _DAT_145fc6f10;
    do {
      (**(code **)(*param_2 + 0x28))(param_2,&fStack_168,uVar16 & 0xffffffff);
      (**(code **)(*param_2 + 0x28))(param_2,&fStack_178,uVar17 & 0xffffffff);
      lVar1 = (longlong)param_1 + lVar15 + 0x90;
      pcVar12 = pcVar18 + (ulonglong)((int)uVar16 - 1) * 0x130;
      if (uVar17 < 2) {
        pcVar12 = (char *)0x0;
      }
      uStack_140 = uVar17 + 1;
      *(char **)(lVar1 + 0x120) = pcVar12;
      lVar2 = (longlong)param_1 + lVar15 + 0x2f0;
      lVar13 = 0;
      if ((longlong)(uVar16 + 2) < (longlong)(int)param_1[0x2624]) {
        lVar13 = lVar2;
      }
      *(longlong *)(lVar2 + -0x138) = lVar13;
      *(ulonglong *)(lVar1 + 0x10) = CONCAT44(fStack_164,fStack_168);
      *(ulonglong *)(lVar1 + 0x18) = CONCAT44(fStack_15c,fStack_160);
      *(ulonglong *)(lVar1 + 0x20) = CONCAT44(fStack_174,fStack_178);
      *(ulonglong *)(lVar1 + 0x28) = CONCAT44(fStack_16c,fStack_170);
      auVar4._4_4_ = fStack_174;
      auVar4._0_4_ = fStack_178;
      auVar4._8_4_ = fStack_170;
      auVar4._12_4_ = fStack_16c;
      auVar49._4_4_ = fStack_164;
      auVar49._0_4_ = fStack_168;
      auVar49._8_4_ = fStack_160;
      auVar49._12_4_ = fStack_15c;
      auVar20 = vsubps_avx(auVar4,auVar49);
      *(undefined1 (*) [16])(lVar2 + -0x1a0) = auVar20;
      uStack_148 = uVar17;
      (**(code **)(*param_2 + 0x68))(param_2,auStack_198,uVar16 & 0xffffffff);
      uVar8 = uStack_148;
      *(undefined8 *)(lVar2 + -0x15c) = auStack_198._0_8_;
      (**(code **)(*param_2 + 0x68))(param_2,auStack_198,uStack_148 & 0xffffffff);
      *(undefined8 *)(lVar2 + -0x154) = auStack_198._0_8_;
      uVar14 = (**(code **)(*param_2 + 0x18))(param_2,uVar16 & 0xffffffff);
      *(undefined8 *)(lVar2 + -0x180) = uVar14;
      uVar14 = (**(code **)(*param_2 + 0x18))(param_2,uVar8 & 0xffffffff);
      uVar17 = uStack_140;
      *(undefined8 *)(lVar2 + -0x178) = uVar14;
      lVar2 = (longlong)param_1 + lVar15 + 0x1a4;
      FUN_140061c40(lVar2,param_2,*(undefined8 *)(lVar2 + -0x34));
      lVar2 = (longlong)param_1 + lVar15 + 0x1a8;
      FUN_140061c40(lVar2,param_2,*(undefined8 *)(lVar2 + -0x30));
      (**(code **)(*param_2 + 0x30))(param_2,auStack_198,uVar16 & 0xffffffff);
      auVar23 = auStack_198._0_16_;
      fVar44 = _DAT_146159b68;
      fVar55 = _DAT_146159b60;
      fVar51 = _DAT_146159b5c;
      auStack_198._8_4_ = 0;
      *(undefined8 *)(lVar1 + 0x50) = auStack_198._0_8_;
      *(undefined4 *)(lVar1 + 0x58) = 0;
      auVar21._0_4_ =
           (fVar62 * (fVar62 * fVar55 + fVar51) + fVar44) * (float)auStack_118._0_4_ + fStack_128;
      auVar21._4_4_ =
           (fVar63 * (fVar63 * fVar55 + fVar51) + fVar44) * (float)auStack_118._4_4_ + fStack_124;
      auVar21._8_4_ = (fVar64 * (fVar64 * fVar55 + fVar51) + fVar44) * fStack_110 + fStack_120;
      auVar21._12_4_ = (fVar65 * (fVar65 * fVar55 + fVar51) + fVar44) * fStack_10c + fStack_11c;
      auVar20 = vpand_avx(auStack_138,auVar48._0_16_);
      auVar4 = vpand_avx(auVar61._0_16_,auStack_138);
      auVar25 = auVar50._0_16_;
      auVar60 = vpcmpeqd_avx(auVar25,auVar20);
      auVar49 = vpcmpeqd_avx(auVar25,auVar4);
      auVar4 = vpsubd_avx(auVar25,auVar20);
      *(undefined4 *)(lVar1 + 0x5c) = auStack_198._12_4_;
      auVar20 = vblendvps_avx(auVar71._0_16_,auVar21,auVar60);
      auVar4 = vblendvps_avx(auVar71._0_16_,auVar21,auVar4);
      auVar43._0_4_ = uVar66 ^ auVar20._0_4_;
      auVar43._4_4_ = uVar67 ^ auVar20._4_4_;
      auVar43._8_4_ = uVar68 ^ auVar20._8_4_;
      auVar43._12_4_ = uVar69 ^ auVar20._12_4_;
      auVar33._0_4_ = uVar66 ^ auVar4._0_4_;
      auVar33._4_4_ = uVar67 ^ auVar4._4_4_;
      auVar33._8_4_ = uVar68 ^ auVar4._8_4_;
      auVar33._12_4_ = uVar69 ^ auVar4._12_4_;
      auVar20 = vblendvps_avx(auVar43,auVar20,auVar49);
      auVar4 = vblendvps_avx(auVar33,auVar4,auStack_108);
      fVar19 = auVar23._0_4_;
      auVar22._0_4_ = auVar4._0_4_ * fVar19;
      fVar3 = auVar23._4_4_;
      auVar22._4_4_ = auVar4._4_4_ * fVar3;
      auVar22._8_4_ = auVar4._8_4_ * 0.0;
      auVar22._12_4_ = auVar4._12_4_ * (float)auStack_198._12_4_;
      auVar34._0_4_ = auVar20._0_4_ * fVar19;
      auVar34._4_4_ = auVar20._4_4_ * fVar3;
      auVar34._8_4_ = auVar20._8_4_ * 0.0;
      auVar34._12_4_ = auVar20._12_4_ * (float)auStack_198._12_4_;
      auVar20 = vshufps_avx(auVar22,auVar22,0xf1);
      auVar4 = vsubps_avx(auVar20,auVar34);
      auVar23._0_4_ = auVar34._0_4_ + auVar20._0_4_;
      auVar23._4_4_ = auVar34._4_4_ + auVar20._4_4_;
      auVar23._8_4_ = auVar34._8_4_ + auVar20._8_4_;
      auVar23._12_4_ = auVar34._12_4_ + auVar20._12_4_;
      auVar4 = vunpcklps_avx(auVar4,auVar23);
      auVar20 = vshufps_avx(auStack_198._0_16_,auVar23,0xd6);
      auStack_198._0_16_ = vshufps_avx(auVar4,auVar20,0x86);
      *(undefined1 (*) [16])(lVar1 + 0x30) = auStack_198._0_16_;
      auVar24._0_4_ = auStack_198._0_4_ * fStack_168;
      auVar24._4_4_ = auStack_198._4_4_ * fStack_164;
      auVar24._8_4_ = auStack_198._8_4_ * fStack_160;
      auVar24._12_4_ = auStack_198._12_4_ * fStack_15c;
      auVar20 = vblendps_avx(auVar24,auVar25,8);
      auVar20 = vhaddps_avx(auVar20,auVar20);
      auVar20 = vhaddps_avx(auVar20,auVar20);
      *(uint *)(lVar1 + 0x3c) = uVar66 ^ auVar20._0_4_;
      fVar45 = fVar44;
      fVar46 = fVar44;
      fVar47 = fVar44;
      fVar52 = fVar51;
      fVar53 = fVar51;
      fVar54 = fVar51;
      fVar57 = fVar55;
      fVar58 = fVar55;
      fVar59 = fVar55;
      (**(code **)(*param_2 + 0x30))(param_2,auStack_f8,uVar8 & 0xffffffff);
      fVar6 = _DAT_146159b64;
      fVar3 = _DAT_146159b54;
      fVar19 = _DAT_146159b50;
      auVar20 = vcvtdq2ps_avx(auVar70._0_16_);
      auStack_198._12_4_ = (undefined4)(auStack_f8[1] >> 0x20);
      auStack_198._8_4_ = 0;
      auStack_198._0_8_ = auStack_f8[0];
      fVar32 = auVar20._0_4_ * _DAT_146159b4c + _DAT_14615a1a0;
      fVar36 = auVar20._4_4_ * _DAT_146159b4c + _DAT_14615a1a0;
      fVar37 = auVar20._8_4_ * _DAT_146159b4c + _DAT_14615a1a0;
      fVar38 = auVar20._12_4_ * _DAT_146159b4c + _DAT_14615a1a0;
      *(ulonglong *)(lVar1 + 0x60) = auStack_f8[0];
      *(undefined4 *)(lVar1 + 0x68) = 0;
      fVar5 = _DAT_146159b58;
      fVar32 = fVar19 * auVar20._0_4_ + fVar32;
      fVar36 = fVar19 * auVar20._4_4_ + fVar36;
      fVar37 = fVar19 * auVar20._8_4_ + fVar37;
      fVar38 = fVar19 * auVar20._12_4_ + fVar38;
      *(undefined4 *)(lVar1 + 0x6c) = auStack_198._12_4_;
      fVar19 = fVar32 * fVar32;
      fVar29 = fVar36 * fVar36;
      fVar30 = fVar37 * fVar37;
      fVar31 = fVar38 * fVar38;
      auVar39._0_4_ = fVar19 * (fVar19 * (fVar19 * fVar5 + fVar3) + fVar6) + _DAT_145fc6ed8;
      auVar39._4_4_ = fVar29 * (fVar29 * (fVar29 * fVar5 + fVar3) + fVar6) + _DAT_145fc6ed8;
      auVar39._8_4_ = fVar30 * (fVar30 * (fVar30 * fVar5 + fVar3) + fVar6) + _DAT_145fc6ed8;
      auVar39._12_4_ = fVar31 * (fVar31 * (fVar31 * fVar5 + fVar3) + fVar6) + _DAT_145fc6ed8;
      auVar56._0_4_ = fVar19 * fVar32 * (fVar19 * (fVar19 * fVar55 + fVar51) + fVar44) + fVar32;
      auVar56._4_4_ = fVar29 * fVar36 * (fVar29 * (fVar29 * fVar57 + fVar52) + fVar45) + fVar36;
      auVar56._8_4_ = fVar30 * fVar37 * (fVar30 * (fVar30 * fVar58 + fVar53) + fVar46) + fVar37;
      auVar56._12_4_ = fVar31 * fVar38 * (fVar31 * (fVar31 * fVar59 + fVar54) + fVar47) + fVar38;
      auVar25._0_4_ = auVar70._0_4_ & auVar48._0_4_;
      auVar25._4_4_ = auVar70._4_4_ & auVar48._4_4_;
      auVar25._8_4_ = auVar70._8_4_ & auVar48._8_4_;
      auVar25._12_4_ = auVar70._12_4_ & auVar48._12_4_;
      auVar49 = auVar50._0_16_;
      auVar20 = vpcmpeqd_avx(auVar49,auVar25);
      auVar4 = vpsubd_avx(auVar49,auVar25);
      auVar20 = vblendvps_avx(auVar39,auVar56,auVar20);
      auVar4 = vblendvps_avx(auVar39,auVar56,auVar4);
      auVar40._0_4_ = auVar70._0_4_ & auVar61._0_4_;
      auVar40._4_4_ = auVar70._4_4_ & auVar61._4_4_;
      auVar40._8_4_ = auVar70._8_4_ & auVar61._8_4_;
      auVar40._12_4_ = auVar70._12_4_ & auVar61._12_4_;
      auVar60 = vpcmpeqd_avx(auVar49,auVar40);
      auVar41._0_4_ = uVar66 ^ auVar20._0_4_;
      auVar41._4_4_ = uVar67 ^ auVar20._4_4_;
      auVar41._8_4_ = uVar68 ^ auVar20._8_4_;
      auVar41._12_4_ = uVar69 ^ auVar20._12_4_;
      auVar20 = vblendvps_avx(auVar41,auVar20,auVar60);
      auVar60 = vpsubd_avx(auVar70._0_16_,_DAT_145f41010);
      auVar42._0_4_ = uVar66 ^ auVar4._0_4_;
      auVar42._4_4_ = uVar67 ^ auVar4._4_4_;
      auVar42._8_4_ = uVar68 ^ auVar4._8_4_;
      auVar42._12_4_ = uVar69 ^ auVar4._12_4_;
      auVar60 = vpand_avx(auVar61._0_16_,auVar60);
      auVar35._0_4_ = auVar20._0_4_ * (float)auStack_f8[0];
      fVar19 = (float)(auStack_f8[0] >> 0x20);
      auVar35._4_4_ = auVar20._4_4_ * fVar19;
      auVar35._8_4_ = auVar20._8_4_ * 0.0;
      auVar35._12_4_ = auVar20._12_4_ * (float)auStack_198._12_4_;
      auVar20 = vpcmpeqd_avx(auVar49,auVar60);
      auVar20 = vblendvps_avx(auVar42,auVar4,auVar20);
      auVar26._0_4_ = auVar20._0_4_ * (float)auStack_f8[0];
      auVar26._4_4_ = auVar20._4_4_ * fVar19;
      auVar26._8_4_ = auVar20._8_4_ * 0.0;
      auVar26._12_4_ = auVar20._12_4_ * (float)auStack_198._12_4_;
      auVar20 = vshufps_avx(auVar26,auVar26,0xf1);
      auVar4 = vsubps_avx(auVar20,auVar35);
      auVar27._0_4_ = auVar35._0_4_ + auVar20._0_4_;
      auVar27._4_4_ = auVar35._4_4_ + auVar20._4_4_;
      auVar27._8_4_ = auVar35._8_4_ + auVar20._8_4_;
      auVar27._12_4_ = auVar35._12_4_ + auVar20._12_4_;
      auVar4 = vunpcklps_avx(auVar4,auVar27);
      auVar20 = vshufps_avx(auStack_198._0_16_,auVar27,0xd6);
      auVar20 = vshufps_avx(auVar4,auVar20,0x86);
      *(undefined1 (*) [16])(lVar1 + 0x40) = auVar20;
      auVar28._0_4_ = auVar20._0_4_ * fStack_178;
      auVar28._4_4_ = auVar20._4_4_ * fStack_174;
      auVar28._8_4_ = auVar20._8_4_ * fStack_170;
      auVar28._12_4_ = auVar20._12_4_ * fStack_16c;
      auVar20 = vblendps_avx(auVar28,auVar49,8);
      auVar20 = vhaddps_avx(auVar20,auVar20);
      auVar20 = vhaddps_avx(auVar20,auVar20);
      *(uint *)(lVar1 + 0x4c) = uVar66 ^ auVar20._0_4_;
      FUN_1400622e0(lVar1,param_1);
      iVar10 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar15 = lVar15 + 0x130;
      uVar16 = uVar16 + 1;
    } while ((longlong)uVar17 < (longlong)iVar10);
  }
  if (*(char *)((longlong)param_2 + 0x84) != '\0') {
    (**(code **)(*param_2 + 0x90))(param_2);
  }
  uVar14 = uStack_150;
  uVar7 = uStack_17c;
  if (0 < (int)param_1[0x2624]) {
    uVar17 = 0;
    do {
      param_1[0x352c] = 0;
      param_1[0x3830] = 0;
      param_1[0x4734] = 0;
      param_1[19000] = 0;
      param_1[0x533c] = 0;
      func_0x000140061d50(pcVar18,param_1);
      if (((*pcVar18 == '\x01') && (pcVar18[1] == '\0')) &&
         (func_0x000140061c20(param_1,param_2,pcVar18,uVar7),
         *(char *)((longlong)param_2 + 0x87) == '\0')) {
        FUN_144e9edf0(param_1,param_2,pcVar18);
      }
      FUN_144e9e800(param_1,pcVar18);
      FUN_144ea17c0(param_1,pcVar18,param_2);
      FUN_144e9e1f0(param_1);
      FUN_140061e60(param_1,param_2,pcVar18,uVar17 & 0xffffffff,
                    uVar17 == param_1[0x2624] - 1 | pcVar18[1] & 1U);
      cVar9 = (**(code **)(*param_2 + 0x80))(param_2);
      if (cVar9 != '\0') break;
      cVar9 = func_0x000145053980(uVar14);
      if (cVar9 != '\0') {
        return 0;
      }
      uVar17 = uVar17 + 1;
      pcVar18 = pcVar18 + 0x130;
    } while ((longlong)uVar17 < (longlong)(int)param_1[0x2624]);
  }
  FUN_144ea2740(param_2);
  if (*(char *)(param_1 + 0x5642) == '\x01') {
    FUN_144ea23c0(param_2);
  }
  FUN_140062770(*(undefined8 *)(param_1 + 0x5644),param_2);
  return 1;
}

