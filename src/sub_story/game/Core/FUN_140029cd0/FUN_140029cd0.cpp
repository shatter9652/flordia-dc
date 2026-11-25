// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140029cd0  size: 3293 bytes
// Name:    FUN_140029cd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14002a9b0, FUN_144db6f00, FUN_144f64580, FUN_145647140, FUN_14002aae0, FUN_1447907e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140029cd0(undefined1 (*param_1) [16],undefined8 param_2,undefined1 (*param_3) [16],
                  longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar22;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
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
  float fVar53;
  float fVar57;
  float fVar58;
  undefined1 auVar54 [16];
  float fVar59;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined8 uVar60;
  undefined8 uVar65;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [64];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [64];
  undefined1 auVar69 [64];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar73;
  undefined1 auVar72 [64];
  float fVar74;
  float fVar79;
  float fVar80;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar81;
  undefined1 auVar78 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [64];
  uint uVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar94;
  undefined8 *apuStack_250 [4];
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined4 auStack_220 [2];
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [16];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  apuStack_250[0] = (undefined8 *)0x140029d59;
  FUN_144f64580(param_2,*(undefined4 *)param_3[3],&uStack_188);
  if (*(float *)(param_3[2] + 8) <= 0.0) {
    *(undefined8 *)*param_1 = uStack_188;
    *(undefined8 *)(*param_1 + 8) = uStack_180;
    *(undefined8 *)param_1[1] = uStack_178;
    *(undefined8 *)(param_1[1] + 8) = uStack_170;
    return;
  }
  auVar72 = ZEXT1264(ZEXT812(0));
  auVar68 = ZEXT1264(ZEXT812(0));
  uStack_f8 = uStack_188;
  uStack_f0 = uStack_180;
  fStack_e8 = (float)uStack_178;
  fStack_e4 = (float)((ulonglong)uStack_178 >> 0x20);
  fStack_e0 = (float)uStack_170;
  fStack_dc = (float)((ulonglong)uStack_170 >> 0x20);
  if (param_3[4][8] == '\x02') {
    apuStack_250[0] = (undefined8 *)0x14002a35c;
    FUN_144db6f00(param_2,&fStack_138,*(undefined4 *)(param_3[3] + 8));
    apuStack_250[0] = (undefined8 *)0x14002a37a;
    FUN_144db6f00(param_2,&fStack_128,*(undefined4 *)(param_3[3] + 0xc));
    auVar68 = ZEXT1664(CONCAT412((fStack_12c + fStack_11c) * _DAT_145fc6edc,
                                 CONCAT48((fStack_130 + fStack_120) * _DAT_145fc6edc,
                                          CONCAT44((fStack_134 + fStack_124) * _DAT_145fc6edc,
                                                   (fStack_138 + fStack_128) * _DAT_145fc6edc))));
    apuStack_250[0] = (undefined8 *)0x14002a3b0;
    fVar12 = _DAT_145fc6edc;
    fVar13 = _DAT_145fc6edc;
    fVar73 = _DAT_145fc6edc;
    fVar19 = _DAT_145fc6edc;
    FUN_144db6f00(param_2,&fStack_118,*(undefined4 *)param_3[4]);
    apuStack_250[0] = (undefined8 *)0x14002a3cb;
    FUN_144db6f00(param_2,&fStack_218,*(undefined4 *)(param_3[4] + 4));
    auVar72 = ZEXT1664(CONCAT412((fStack_10c + fStack_20c) * fVar19,
                                 CONCAT48((fStack_110 + fStack_210) * fVar73,
                                          CONCAT44((fStack_114 + fStack_214) * fVar13,
                                                   (fStack_118 + fStack_218) * fVar12))));
  }
  auVar64 = ZEXT464((uint)_DAT_145fc6ed8);
  uStack_230._0_4_ = *(undefined4 *)(param_3[2] + 0xc);
  apuStack_250[3] = (undefined8 *)auStack_208;
  auStack_208 = ZEXT416((uint)_DAT_145fc6ed8);
  FUN_14002a9b0(&fStack_128,param_2,*(undefined4 *)param_3[3],*(undefined4 *)(param_3[3] + 4));
  apuStack_250[3] = (undefined8 *)auStack_1f8;
  uStack_230._0_4_ = *(undefined4 *)(param_3[2] + 0xc);
  auStack_1f8 = auVar64._0_16_;
  uStack_1e8 = *(undefined8 *)*param_3;
  uStack_1e0 = *(undefined8 *)(*param_3 + 8);
  FUN_14002aae0(&fStack_118,param_2,*(undefined4 *)param_3[3]);
  fVar13 = fStack_114 - fStack_124;
  lVar11 = *(longlong *)(param_4 + 8);
  apuStack_250[0] = (undefined8 *)0x140029e49;
  func_0x00014002aa30(&fStack_138,*(undefined4 *)(param_4 + 4),lVar11,fVar13);
  fVar12 = *(float *)(lVar11 + (ulonglong)(uint)fStack_134 * 0xc);
  fVar12 = (*(float *)(lVar11 + (ulonglong)(uint)fStack_130 * 0xc) - fVar12) * fStack_138 + fVar12;
  if ((float)(_DAT_145fc6f4c & (uint)fVar13) < *(float *)param_3[2]) {
    fVar12 = ((float)(_DAT_145fc6f4c & (uint)fVar13) / *(float *)param_3[2]) * fVar12;
  }
  uVar65 = 0;
  uStack_230._0_4_ = *(undefined4 *)(param_3[2] + 0xc);
  apuStack_250[3] = &uStack_1d8;
  uStack_1d8 = _DAT_146159bc0;
  uStack_1d0 = 0;
  fVar19 = fVar12;
  fVar20 = fVar12;
  fVar21 = fVar12;
  uVar89 = _DAT_145fc6f4c;
  uVar60 = _DAT_146159bc0;
  FUN_14002a9b0(&fStack_128,param_2,*(undefined4 *)param_3[3],*(undefined4 *)(param_3[3] + 4));
  apuStack_250[3] = &uStack_1c8;
  uStack_1b8 = *(undefined8 *)*param_3;
  uStack_1b0 = *(undefined8 *)(*param_3 + 8);
  uStack_230 = CONCAT44(uStack_230._4_4_,*(undefined4 *)(param_3[2] + 0xc));
  uStack_1c8 = uVar60;
  uStack_1c0 = uVar65;
  FUN_14002aae0(&fStack_118,param_2,*(undefined4 *)param_3[3]);
  fVar73 = fStack_114 - fStack_124;
  lVar11 = *(longlong *)(param_4 + 0x18);
  apuStack_250[0] = (undefined8 *)0x140029f4a;
  func_0x00014002aa30(&fStack_138,*(undefined4 *)(param_4 + 0x14),lVar11,fVar73);
  auStack_168 = auVar68._0_16_;
  auStack_158 = auVar72._0_16_;
  fVar13 = *(float *)(lVar11 + (ulonglong)(uint)fStack_134 * 0xc);
  fVar13 = (*(float *)(lVar11 + (ulonglong)(uint)fStack_130 * 0xc) - fVar13) * fStack_138 + fVar13;
  if ((float)(uVar89 & (uint)fVar73) < *(float *)param_3[2]) {
    fVar13 = ((float)(uVar89 & (uint)fVar73) / *(float *)param_3[2]) * fVar13;
  }
  fVar73 = *(float *)(param_3[2] + 8);
  uStack_108 = _DAT_145fc6f10;
  uStack_104 = _DAT_145fc6f10;
  uStack_100 = _DAT_145fc6f10;
  uStack_fc = _DAT_145fc6f10;
  fVar22 = fVar12 * fVar73 * _DAT_146159b48;
  fVar31 = fVar19 * fVar73 * _DAT_146159b48;
  fVar32 = fVar20 * fVar73 * _DAT_146159b48;
  fVar33 = fVar21 * fVar73 * _DAT_146159b48;
  auVar39._0_4_ = (uint)(fVar22 + (float)((uint)_DAT_145fc6edc | _DAT_145fc6f10 & (uint)fVar22));
  auVar39._4_4_ = (uint)(fVar31 + (float)((uint)_DAT_145fc6edc | _DAT_145fc6f10 & (uint)fVar31));
  auVar39._8_4_ = (uint)(fVar32 + (float)((uint)_DAT_145fc6edc | _DAT_145fc6f10 & (uint)fVar32));
  auVar39._12_4_ = (uint)(fVar33 + (float)((uint)_DAT_145fc6edc | _DAT_145fc6f10 & (uint)fVar33));
  auVar26 = vcvtdq2ps_avx(auVar39);
  fVar12 = _DAT_146159b50 * auVar26._0_4_ +
           auVar26._0_4_ * _DAT_146159b4c + fVar12 * fVar73 * _DAT_145fc6edc;
  fVar19 = _DAT_146159b50 * auVar26._4_4_ +
           auVar26._4_4_ * _DAT_146159b4c + fVar19 * fVar73 * _DAT_145fc6edc;
  fVar20 = _DAT_146159b50 * auVar26._8_4_ +
           auVar26._8_4_ * _DAT_146159b4c + fVar20 * fVar73 * _DAT_145fc6edc;
  fVar21 = _DAT_146159b50 * auVar26._12_4_ +
           auVar26._12_4_ * _DAT_146159b4c + fVar21 * fVar73 * _DAT_145fc6edc;
  fVar22 = fVar12 * fVar12;
  fVar31 = fVar19 * fVar19;
  fVar32 = fVar20 * fVar20;
  fVar33 = fVar21 * fVar21;
  auVar61._0_4_ =
       fVar22 * fVar12 * (fVar22 * (fVar22 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar12;
  auVar61._4_4_ =
       fVar31 * fVar19 * (fVar31 * (fVar31 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar19;
  auVar61._8_4_ =
       fVar32 * fVar20 * (fVar32 * (fVar32 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar20;
  auVar61._12_4_ =
       fVar33 * fVar21 * (fVar33 * (fVar33 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar21;
  auVar15 = ZEXT416(0) << 0x20;
  auVar46._0_4_ =
       fVar22 * (fVar22 * (fVar22 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar46._4_4_ =
       fVar31 * (fVar31 * (fVar31 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar46._8_4_ =
       fVar32 * (fVar32 * (fVar32 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar46._12_4_ =
       fVar33 * (fVar33 * (fVar33 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar75._0_4_ = auVar39._0_4_ & _DAT_145f43778;
  auVar75._4_4_ = auVar39._4_4_ & _DAT_145f43778;
  auVar75._8_4_ = auVar39._8_4_ & _DAT_145f43778;
  auVar75._12_4_ = auVar39._12_4_ & _DAT_145f43778;
  auVar26 = vpcmpeqd_avx(auVar75,auVar15);
  auVar85 = vpsubd_avx(auVar15,auVar75);
  auVar26 = vblendvps_avx(auVar46,auVar61,auVar26);
  auVar92._4_4_ = _DAT_145f43774;
  auVar92._0_4_ = _DAT_145f43774;
  auVar92._8_4_ = _DAT_145f43774;
  auVar92._12_4_ = _DAT_145f43774;
  auVar85 = vblendvps_avx(auVar46,auVar61,auVar85);
  auVar47._0_4_ = _DAT_145f43774 & auVar39._0_4_;
  auVar47._4_4_ = _DAT_145f43774 & auVar39._4_4_;
  auVar47._8_4_ = _DAT_145f43774 & auVar39._8_4_;
  auVar47._12_4_ = _DAT_145f43774 & auVar39._12_4_;
  auVar36 = vpcmpeqd_avx(auVar47,auVar15);
  auVar48._4_4_ = _DAT_145fc6f10;
  auVar48._0_4_ = _DAT_145fc6f10;
  auVar48._8_4_ = _DAT_145fc6f10;
  auVar48._12_4_ = _DAT_145fc6f10;
  auVar76._0_4_ = auVar26._0_4_ ^ _DAT_145fc6f10;
  auVar76._4_4_ = auVar26._4_4_ ^ _DAT_145fc6f10;
  auVar76._8_4_ = auVar26._8_4_ ^ _DAT_145fc6f10;
  auVar76._12_4_ = auVar26._12_4_ ^ _DAT_145fc6f10;
  auVar26 = vblendvps_avx(auVar76,auVar26,auVar36);
  auVar24 = vpcmpeqd_avx(auVar36,auVar36);
  auVar93._0_4_ = auVar85._0_4_ ^ _DAT_145fc6f10;
  auVar93._4_4_ = auVar85._4_4_ ^ _DAT_145fc6f10;
  auVar93._8_4_ = auVar85._8_4_ ^ _DAT_145fc6f10;
  auVar93._12_4_ = auVar85._12_4_ ^ _DAT_145fc6f10;
  auVar36 = vpsubd_avx(auVar39,auVar24);
  auVar36 = vpand_avx(auVar92,auVar36);
  auVar36 = vpcmpeqd_avx(auVar36,auVar15);
  auVar36 = vblendvps_avx(auVar93,auVar85,auVar36);
  fVar12 = _DAT_146159b48 * fVar13 * fVar73;
  fVar19 = _DAT_146159b48 * fVar13 * fVar73;
  fVar20 = _DAT_146159b48 * fVar13 * fVar73;
  fVar21 = _DAT_146159b48 * fVar13 * fVar73;
  auVar54._0_4_ = (uint)(fVar12 + (float)((uint)fVar12 & _DAT_145fc6f10 | (uint)_DAT_145fc6edc));
  auVar54._4_4_ = (uint)(fVar19 + (float)((uint)fVar19 & _DAT_145fc6f10 | (uint)_DAT_145fc6edc));
  auVar54._8_4_ = (uint)(fVar20 + (float)((uint)fVar20 & _DAT_145fc6f10 | (uint)_DAT_145fc6edc));
  auVar54._12_4_ = (uint)(fVar21 + (float)((uint)fVar21 & _DAT_145fc6f10 | (uint)_DAT_145fc6edc));
  auVar85 = vcvtdq2ps_avx(auVar54);
  auVar23._0_4_ = auVar54._0_4_ & _DAT_145f43778;
  auVar23._4_4_ = auVar54._4_4_ & _DAT_145f43778;
  auVar23._8_4_ = auVar54._8_4_ & _DAT_145f43778;
  auVar23._12_4_ = auVar54._12_4_ & _DAT_145f43778;
  fVar20 = auVar85._0_4_ * _DAT_146159b50 +
           auVar85._0_4_ * _DAT_146159b4c + _DAT_145fc6edc * fVar13 * fVar73;
  fVar21 = auVar85._4_4_ * _DAT_146159b50 +
           auVar85._4_4_ * _DAT_146159b4c + _DAT_145fc6edc * fVar13 * fVar73;
  fVar22 = auVar85._8_4_ * _DAT_146159b50 +
           auVar85._8_4_ * _DAT_146159b4c + _DAT_145fc6edc * fVar13 * fVar73;
  fVar31 = auVar85._12_4_ * _DAT_146159b50 +
           auVar85._12_4_ * _DAT_146159b4c + _DAT_145fc6edc * fVar13 * fVar73;
  fVar12 = fVar20 * fVar20;
  fVar13 = fVar21 * fVar21;
  fVar73 = fVar22 * fVar22;
  fVar19 = fVar31 * fVar31;
  auVar34._0_4_ =
       fVar12 * fVar20 * (fVar12 * (fVar12 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar20;
  auVar34._4_4_ =
       fVar13 * fVar21 * (fVar13 * (fVar13 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar21;
  auVar34._8_4_ =
       fVar73 * fVar22 * (fVar73 * (fVar73 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar22;
  auVar34._12_4_ =
       fVar19 * fVar31 * (fVar19 * (fVar19 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar31;
  auVar85._4_4_ = fStack_e4;
  auVar85._0_4_ = fStack_e8;
  auVar85._8_4_ = fStack_e0;
  auVar85._12_4_ = fStack_dc;
  auVar86._0_4_ =
       fVar12 * (fVar12 * (fVar12 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar86._4_4_ =
       fVar13 * (fVar13 * (fVar13 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar86._8_4_ =
       fVar73 * (fVar73 * (fVar73 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar86._12_4_ =
       fVar19 * (fVar19 * (fVar19 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar39 = vpcmpeqd_avx(auVar23,auVar15);
  auVar23 = vpsubd_avx(auVar15,auVar23);
  auVar39 = vblendvps_avx(auVar86,auVar34,auVar39);
  auVar23 = vblendvps_avx(auVar86,auVar34,auVar23);
  auVar35._0_4_ = _DAT_145f43774 & auVar54._0_4_;
  auVar35._4_4_ = _DAT_145f43774 & auVar54._4_4_;
  auVar35._8_4_ = _DAT_145f43774 & auVar54._8_4_;
  auVar35._12_4_ = _DAT_145f43774 & auVar54._12_4_;
  auVar24 = vpsubd_avx(auVar54,auVar24);
  auVar24 = vpand_avx(auVar92,auVar24);
  auVar62._0_4_ = auVar23._0_4_ ^ _DAT_145fc6f10;
  auVar62._4_4_ = auVar23._4_4_ ^ _DAT_145fc6f10;
  auVar62._8_4_ = auVar23._8_4_ ^ _DAT_145fc6f10;
  auVar62._12_4_ = auVar23._12_4_ ^ _DAT_145fc6f10;
  auVar34 = vpcmpeqd_avx(auVar35,auVar15);
  auVar70._0_4_ = auVar39._0_4_ ^ _DAT_145fc6f10;
  auVar70._4_4_ = auVar39._4_4_ ^ _DAT_145fc6f10;
  auVar70._8_4_ = auVar39._8_4_ ^ _DAT_145fc6f10;
  auVar70._12_4_ = auVar39._12_4_ ^ _DAT_145fc6f10;
  auVar24 = vpcmpeqd_avx(auVar24,auVar15);
  auVar39 = vblendvps_avx(auVar70,auVar39,auVar34);
  auVar23 = vblendvps_avx(auVar62,auVar23,auVar24);
  auVar24 = vinsertps_avx(auVar26,auVar36,0x76);
  auVar26 = vmovlhps_avx(auVar26,auVar36);
  auVar34 = vshufps_avx(auVar39,auVar39,0xff);
  auVar23 = vshufps_avx(auVar23,auVar23,0x55);
  auVar66._0_4_ = (uint)auVar24._0_4_ ^ _DAT_145fc6f10;
  auVar66._4_4_ = (uint)auVar24._4_4_ ^ _DAT_145fc6f10;
  auVar66._8_4_ = (uint)auVar24._8_4_ ^ _DAT_145fc6f10;
  auVar66._12_4_ = (uint)auVar24._12_4_ ^ _DAT_145fc6f10;
  auVar26 = vblendps_avx(auVar48,auVar26,9);
  auVar36 = vinsertps_avx(auVar66,auVar36,0x72);
  auVar39 = vshufpd_avx(auVar24,auVar66,1);
  auVar26 = vshufps_avx(auVar26,auVar26,0xb1);
  auVar36 = vshufps_avx(auVar36,auVar36,0x1b);
  auVar6._8_8_ = uStack_f0;
  auVar6._0_8_ = uStack_f8;
  auVar40._0_4_ =
       auVar26._0_4_ * 0.0 +
       auVar34._0_4_ * auVar39._0_4_ + auVar36._0_4_ * 0.0 + auVar23._0_4_ * auVar24._0_4_;
  auVar40._4_4_ =
       auVar26._4_4_ * 0.0 +
       auVar34._4_4_ * auVar39._4_4_ + auVar36._4_4_ * 0.0 + auVar23._4_4_ * auVar24._4_4_;
  auVar40._8_4_ =
       auVar26._8_4_ * 0.0 +
       auVar34._8_4_ * auVar39._8_4_ + auVar36._8_4_ * 0.0 + auVar23._8_4_ * auVar24._8_4_;
  auVar40._12_4_ =
       auVar26._12_4_ * 0.0 +
       auVar34._12_4_ * auVar39._12_4_ + auVar36._12_4_ * 0.0 + auVar23._12_4_ * auVar24._12_4_;
  auVar26 = vshufps_avx(auVar6,auVar6,0xff);
  auVar72 = ZEXT1664(auVar26);
  fVar12 = (float)uStack_f8;
  auVar24._0_4_ = (uint)auVar40._0_4_ ^ _DAT_145fc6f10;
  auVar24._4_4_ = (uint)auVar40._4_4_ ^ _DAT_145fc6f10;
  auVar24._8_4_ = (uint)auVar40._8_4_ ^ _DAT_145fc6f10;
  auVar24._12_4_ = (uint)auVar40._12_4_ ^ _DAT_145fc6f10;
  fVar32 = auVar26._0_4_;
  fVar33 = auVar26._4_4_;
  fVar14 = auVar26._8_4_;
  fVar94 = auVar26._12_4_;
  auVar26 = vblendps_avx(auVar24,auVar40,10);
  auVar39 = vshufps_avx(auVar26,auVar26,0x1b);
  auVar36 = vshufpd_avx(auVar40,auVar24,1);
  auVar23 = vshufps_avx(auVar6,auVar6,0x55);
  auVar26 = vblendps_avx(auVar24,auVar40,9);
  auVar26 = vshufps_avx(auVar26,auVar26,0xb1);
  auVar24 = vshufps_avx(auVar6,auVar6,0xaa);
  fVar20 = auVar24._0_4_ * auVar26._0_4_ +
           auVar23._0_4_ * auVar36._0_4_ + fVar12 * auVar39._0_4_ + fVar32 * auVar40._0_4_;
  fVar21 = auVar24._4_4_ * auVar26._4_4_ +
           auVar23._4_4_ * auVar36._4_4_ + fVar12 * auVar39._4_4_ + fVar33 * auVar40._4_4_;
  fVar22 = auVar24._8_4_ * auVar26._8_4_ +
           auVar23._8_4_ * auVar36._8_4_ + fVar12 * auVar39._8_4_ + fVar14 * auVar40._8_4_;
  fVar31 = auVar24._12_4_ * auVar26._12_4_ +
           auVar23._12_4_ * auVar36._12_4_ + fVar12 * auVar39._12_4_ + fVar94 * auVar40._12_4_;
  auVar26._0_4_ = fVar20 * fVar20;
  auVar26._4_4_ = fVar21 * fVar21;
  auVar26._8_4_ = fVar22 * fVar22;
  auVar26._12_4_ = fVar31 * fVar31;
  auVar26 = vhaddps_avx(auVar26,auVar26);
  auVar26 = vhaddps_avx(auVar26,auVar26);
  auVar36 = vrsqrtps_avx(auVar26);
  fVar12 = auVar36._0_4_;
  fVar13 = auVar36._4_4_;
  fVar73 = auVar36._8_4_;
  fVar19 = auVar36._12_4_;
  auVar63._0_4_ =
       fVar20 * ((-(_DAT_145fc6edc * fVar12 * fVar12 * auVar26._0_4_) + _DAT_145fc6edc) * fVar12 +
                fVar12);
  auVar63._4_4_ =
       fVar21 * ((-(_DAT_145fc6edc * fVar13 * fVar13 * auVar26._4_4_) + _DAT_145fc6edc) * fVar13 +
                fVar13);
  auVar63._8_4_ =
       fVar22 * ((-(_DAT_145fc6edc * fVar73 * fVar73 * auVar26._8_4_) + _DAT_145fc6edc) * fVar73 +
                fVar73);
  auVar63._12_4_ =
       fVar31 * ((-(_DAT_145fc6edc * fVar19 * fVar19 * auVar26._12_4_) + _DAT_145fc6edc) * fVar19 +
                fVar19);
  auVar68 = ZEXT1664(auVar63);
  auVar26 = param_3[1];
  fVar12 = auVar26._0_4_;
  auVar36._0_4_ = fVar12 + _DAT_14615a160;
  fVar13 = auVar26._4_4_;
  auVar36._4_4_ = fVar13 + _DAT_14615a160;
  fVar73 = auVar26._8_4_;
  auVar36._8_4_ = fVar73 + _DAT_14615a160;
  fVar19 = auVar26._12_4_;
  auVar36._12_4_ = fVar19 + _DAT_14615a160;
  auVar41._0_4_ = fVar12 + _DAT_146159ec4;
  auVar41._4_4_ = fVar13 + _DAT_146159ec4;
  auVar41._8_4_ = fVar73 + _DAT_146159ec4;
  auVar41._12_4_ = fVar19 + _DAT_146159ec4;
  auVar36 = vcmpps_avx(auVar36,auVar15,2);
  auVar39 = vcmpps_avx(auVar15,auVar41,2);
  auVar37._0_4_ = auVar36._0_4_ & auVar39._0_4_;
  auVar37._4_4_ = auVar36._4_4_ & auVar39._4_4_;
  auVar37._8_4_ = auVar36._8_4_ & auVar39._8_4_;
  auVar37._12_4_ = auVar36._12_4_ & auVar39._12_4_;
  uVar10 = vmovmskps_avx(auVar37);
  if ((~(byte)uVar10 & 7) != 0) {
    auVar7._8_8_ = uStack_f0;
    auVar7._0_8_ = uStack_f8;
    auVar85 = vshufps_avx(auVar7,auVar7,0xc9);
    auVar36 = vshufps_avx(auVar7,auVar7,0xd2);
    fVar20 = auVar36._0_4_;
    fStack_148 = (float)((uint)fVar20 ^ _DAT_145fc6f10);
    fVar21 = auVar36._4_4_;
    fStack_144 = (float)((uint)fVar21 ^ _DAT_145fc6f10);
    fVar22 = auVar36._8_4_;
    fStack_140 = (float)((uint)fVar22 ^ _DAT_145fc6f10);
    fVar31 = auVar36._12_4_;
    fStack_13c = (float)((uint)fVar31 ^ _DAT_145fc6f10);
    fVar1 = auVar85._0_4_;
    fVar2 = auVar85._4_4_;
    fVar3 = auVar85._8_4_;
    fVar4 = auVar85._12_4_;
    fVar53 = -(fVar20 * (float)_DAT_146159bc0) + _DAT_145fc6ed8 * fVar1;
    fVar74 = (float)((ulonglong)_DAT_146159bc0 >> 0x20);
    fVar57 = -(fVar21 * fVar74) + fVar2 * 0.0;
    fVar58 = -(fVar22 * 0.0) + fVar3 * 0.0;
    fVar59 = -(fVar31 * 0.0) + fVar4 * 0.0;
    auVar55._0_4_ = fVar53 + fVar53;
    auVar55._4_4_ = fVar57 + fVar57;
    auVar55._8_4_ = fVar58 + fVar58;
    auVar55._12_4_ = fVar59 + fVar59;
    auVar85 = vshufps_avx(auVar55,auVar55,0xd2);
    auVar36 = vshufps_avx(auVar55,auVar55,0xc9);
    auVar39 = vshufps_avx(auVar63,auVar63,0xd2);
    fVar53 = fVar32 * auVar55._0_4_ + (float)DAT_14614f7f0 +
             -(fVar20 * auVar36._0_4_) + auVar85._0_4_ * fVar1;
    fVar57 = fVar33 * auVar55._4_4_ + DAT_14614f7f0._4_4_ +
             -(fVar21 * auVar36._4_4_) + auVar85._4_4_ * fVar2;
    fVar58 = fVar14 * auVar55._8_4_ + DAT_14614f7f0._8_4_ +
             -(fVar22 * auVar36._8_4_) + auVar85._8_4_ * fVar3;
    fVar59 = fVar94 * auVar55._12_4_ + DAT_14614f7f0._12_4_ +
             -(fVar31 * auVar36._12_4_) + auVar85._12_4_ * fVar4;
    auVar85 = vshufps_avx(auVar63,auVar63,0xc9);
    fVar20 = -(auVar39._0_4_ * (float)_DAT_146159bc0) + _DAT_145fc6ed8 * auVar85._0_4_;
    fVar21 = -(auVar39._4_4_ * fVar74) + auVar85._4_4_ * 0.0;
    fVar22 = -(auVar39._8_4_ * 0.0) + auVar85._8_4_ * 0.0;
    fVar31 = -(auVar39._12_4_ * 0.0) + auVar85._12_4_ * 0.0;
    auVar77._0_4_ = fVar20 + fVar20;
    auVar77._4_4_ = fVar21 + fVar21;
    auVar77._8_4_ = fVar22 + fVar22;
    auVar77._12_4_ = fVar31 + fVar31;
    auVar36 = vshufps_avx(auVar77,auVar77,0xd2);
    auVar23 = vshufps_avx(auVar77,auVar77,0xc9);
    auVar24 = vshufps_avx(auVar63,auVar63,0xff);
    fVar74 = auVar77._0_4_ * auVar24._0_4_ + (float)DAT_14614f7f0 +
             -(auVar39._0_4_ * auVar23._0_4_) + auVar36._0_4_ * auVar85._0_4_;
    fVar79 = auVar77._4_4_ * auVar24._4_4_ + DAT_14614f7f0._4_4_ +
             -(auVar39._4_4_ * auVar23._4_4_) + auVar36._4_4_ * auVar85._4_4_;
    fVar80 = auVar77._8_4_ * auVar24._8_4_ + DAT_14614f7f0._8_4_ +
             -(auVar39._8_4_ * auVar23._8_4_) + auVar36._8_4_ * auVar85._8_4_;
    fVar81 = auVar77._12_4_ * auVar24._12_4_ + DAT_14614f7f0._12_4_ +
             -(auVar39._12_4_ * auVar23._12_4_) + auVar36._12_4_ * auVar85._12_4_;
    auVar56._0_4_ = fVar53 * fVar53;
    auVar56._4_4_ = fVar57 * fVar57;
    auVar56._8_4_ = fVar58 * fVar58;
    auVar56._12_4_ = fVar59 * fVar59;
    auVar85 = vblendps_avx(auVar56,auVar15,8);
    auVar85 = vhaddps_avx(auVar85,auVar85);
    auVar85 = vhaddps_avx(auVar85,auVar85);
    auVar36 = vrsqrtps_avx(auVar85);
    fVar20 = auVar36._0_4_;
    fVar21 = auVar36._4_4_;
    fVar22 = auVar36._8_4_;
    fVar31 = auVar36._12_4_;
    auVar71._0_4_ =
         ((_DAT_145fc6f08 * fVar20 * fVar20 * auVar85._0_4_ - _DAT_145fc6f08) * fVar20 + fVar20) *
         fVar53;
    auVar71._4_4_ =
         ((_DAT_145fc6f08 * fVar21 * fVar21 * auVar85._4_4_ - _DAT_145fc6f08) * fVar21 + fVar21) *
         fVar57;
    auVar71._8_4_ =
         ((_DAT_145fc6f08 * fVar22 * fVar22 * auVar85._8_4_ - _DAT_145fc6f08) * fVar22 + fVar22) *
         fVar58;
    auVar71._12_4_ =
         ((_DAT_145fc6f08 * fVar31 * fVar31 * auVar85._12_4_ - _DAT_145fc6f08) * fVar31 + fVar31) *
         fVar59;
    auVar82._0_4_ = fVar74 * fVar74;
    auVar82._4_4_ = fVar79 * fVar79;
    auVar82._8_4_ = fVar80 * fVar80;
    auVar82._12_4_ = fVar81 * fVar81;
    auVar85 = vblendps_avx(auVar82,auVar15,8);
    auVar85 = vhaddps_avx(auVar85,auVar85);
    auVar85 = vhaddps_avx(auVar85,auVar85);
    auVar36 = vrsqrtps_avx(auVar85);
    fVar20 = auVar36._0_4_;
    fVar21 = auVar36._4_4_;
    fVar22 = auVar36._8_4_;
    fVar31 = auVar36._12_4_;
    auVar78._0_4_ =
         ((_DAT_145fc6f08 * fVar20 * fVar20 * auVar85._0_4_ - _DAT_145fc6f08) * fVar20 + fVar20) *
         fVar74;
    auVar78._4_4_ =
         ((_DAT_145fc6f08 * fVar21 * fVar21 * auVar85._4_4_ - _DAT_145fc6f08) * fVar21 + fVar21) *
         fVar79;
    auVar78._8_4_ =
         ((_DAT_145fc6f08 * fVar22 * fVar22 * auVar85._8_4_ - _DAT_145fc6f08) * fVar22 + fVar22) *
         fVar80;
    auVar78._12_4_ =
         ((_DAT_145fc6f08 * fVar31 * fVar31 * auVar85._12_4_ - _DAT_145fc6f08) * fVar31 + fVar31) *
         fVar81;
    auVar83._0_4_ = auVar78._0_4_ * auVar71._0_4_;
    auVar83._4_4_ = auVar78._4_4_ * auVar71._4_4_;
    auVar83._8_4_ = auVar78._8_4_ * auVar71._8_4_;
    auVar83._12_4_ = auVar78._12_4_ * auVar71._12_4_;
    auVar85 = vblendps_avx(auVar83,auVar15,8);
    auVar85 = vhaddps_avx(auVar85,auVar85);
    auVar85 = vhaddps_avx(auVar85,auVar85);
    fVar20 = auVar85._0_4_;
    fVar21 = auVar85._4_4_;
    fVar22 = auVar85._8_4_;
    fVar31 = auVar85._12_4_;
    auVar90._0_4_ = (uint)(_DAT_145fc6f48 + fVar20) & _DAT_145fc6f4c;
    auVar90._4_4_ = (uint)(_DAT_145fc6f48 + fVar21) & _DAT_145fc6f4c;
    auVar90._8_4_ = (uint)(_DAT_145fc6f48 + fVar22) & _DAT_145fc6f4c;
    auVar90._12_4_ = (uint)(_DAT_145fc6f48 + fVar31) & _DAT_145fc6f4c;
    auVar84._4_4_ = _DAT_14615a034;
    auVar84._0_4_ = _DAT_14615a034;
    auVar84._8_4_ = _DAT_14615a034;
    auVar84._12_4_ = _DAT_14615a034;
    auVar85 = vcmpps_avx(auVar90,auVar84,5);
    auVar15 = _DAT_145fc6ee0;
    if ((((SUB161(auVar85 >> 0x1f,0) & 1) != 0 || (SUB161(auVar85 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar85 >> 0x5f,0) & 1) != 0) || auVar85[0xf] < '\0') {
      auVar67._0_4_ = _DAT_145fc6f4c & (uint)fVar53;
      auVar67._4_4_ = _DAT_145fc6f4c & (uint)fVar57;
      auVar67._8_4_ = _DAT_145fc6f4c & (uint)fVar58;
      auVar67._12_4_ = _DAT_145fc6f4c & (uint)fVar59;
      auVar39 = vshufps_avx(auVar67,auVar67,0x55);
      auVar91._0_4_ = (uint)(fVar20 + _DAT_145fc6ed8) & _DAT_145fc6f4c;
      auVar91._4_4_ = (uint)(fVar21 + _DAT_145fc6ed8) & _DAT_145fc6f4c;
      auVar91._8_4_ = (uint)(fVar22 + _DAT_145fc6ed8) & _DAT_145fc6f4c;
      auVar91._12_4_ = (uint)(fVar31 + _DAT_145fc6ed8) & _DAT_145fc6f4c;
      auVar87._4_4_ = auVar67._0_4_;
      auVar87._0_4_ = auVar67._0_4_;
      auVar87._8_4_ = auVar67._0_4_;
      auVar87._12_4_ = auVar67._0_4_;
      auVar36 = vshufps_avx(auVar67,auVar67,0xaa);
      auVar85 = vcmpps_avx(auVar87,auVar36,1);
      auVar36 = vcmpps_avx(auVar39,auVar36,1);
      auVar85 = vblendvps_avx(_DAT_14614f7f0,ZEXT416((uint)_DAT_145fc6ed8),auVar85);
      auVar5._8_8_ = _UNK_146159bc8;
      auVar5._0_8_ = _DAT_146159bc0;
      auVar36 = vblendvps_avx(_DAT_14614f7f0,auVar5,auVar36);
      auVar39 = vcmpps_avx(auVar87,auVar39,1);
      auVar16._0_4_ = fVar20 + _DAT_145fc6ed8;
      auVar16._4_4_ = fVar21 + 0.0;
      auVar16._8_4_ = fVar22 + 0.0;
      auVar16._12_4_ = fVar31 + 0.0;
      auVar85 = vblendvps_avx(auVar36,auVar85,auVar39);
      auVar36 = vcmpps_avx(auVar91,auVar84,1);
      auVar85 = vblendvps_avx(auVar78,auVar85,auVar36);
      auVar36 = vshufps_avx(auVar71,auVar71,0xc9);
      auVar39 = vshufps_avx(auVar71,auVar71,0xd2);
      auVar23 = vshufps_avx(auVar85,auVar85,0xd2);
      auVar85 = vshufps_avx(auVar85,auVar85,0xc9);
      auVar49._0_4_ = -(auVar39._0_4_ * auVar85._0_4_) + auVar23._0_4_ * auVar36._0_4_;
      auVar49._4_4_ = -(auVar39._4_4_ * auVar85._4_4_) + auVar23._4_4_ * auVar36._4_4_;
      auVar49._8_4_ = -(auVar39._8_4_ * auVar85._8_4_) + auVar23._8_4_ * auVar36._8_4_;
      auVar49._12_4_ = -(auVar39._12_4_ * auVar85._12_4_) + auVar23._12_4_ * auVar36._12_4_;
      auVar85 = vinsertps_avx(auVar49,auVar16,0x30);
      fVar20 = auVar85._0_4_;
      auVar50._0_4_ = fVar20 * fVar20;
      fVar22 = auVar85._4_4_;
      auVar50._4_4_ = fVar22 * fVar22;
      fVar53 = auVar85._8_4_;
      auVar50._8_4_ = fVar53 * fVar53;
      fVar58 = auVar85._12_4_;
      auVar50._12_4_ = fVar58 * fVar58;
      auVar85 = vhaddps_avx(auVar50,auVar50);
      auVar85 = vhaddps_avx(auVar85,auVar85);
      auVar36 = vrsqrtps_avx(auVar85);
      fVar21 = auVar36._0_4_;
      fVar31 = auVar36._4_4_;
      fVar57 = auVar36._8_4_;
      fVar59 = auVar36._12_4_;
      auVar15._0_4_ =
           ((fVar21 * fVar21 * auVar85._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar21 + fVar21) *
           fVar20;
      auVar15._4_4_ =
           ((fVar31 * fVar31 * auVar85._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar31 + fVar31) *
           fVar22;
      auVar15._8_4_ =
           ((fVar57 * fVar57 * auVar85._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar57 + fVar57) *
           fVar53;
      auVar15._12_4_ =
           ((fVar59 * fVar59 * auVar85._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar59 + fVar59)
           * fVar58;
    }
    auVar85 = vshufps_avx(auVar26,auVar26,0xd2);
    auVar26 = vshufps_avx(auVar26,auVar26,0xc9);
    fVar20 = fStack_148 * auVar26._0_4_ + auVar85._0_4_ * fVar1;
    fVar21 = fStack_144 * auVar26._4_4_ + auVar85._4_4_ * fVar2;
    fVar22 = fStack_140 * auVar26._8_4_ + auVar85._8_4_ * fVar3;
    fVar31 = fStack_13c * auVar26._12_4_ + auVar85._12_4_ * fVar4;
    auVar51._0_4_ = fVar20 + fVar20;
    auVar51._4_4_ = fVar21 + fVar21;
    auVar51._8_4_ = fVar22 + fVar22;
    auVar51._12_4_ = fVar31 + fVar31;
    auVar26 = vshufps_avx(auVar51,auVar51,0xd2);
    auVar85 = vshufps_avx(auVar51,auVar51,0xc9);
    auVar36 = vshufps_avx(auVar15,auVar15,0xc9);
    auVar39 = vshufps_avx(auVar15,auVar15,0xd2);
    auVar23 = vshufps_avx(auVar15,auVar15,0xff);
    auVar52._0_4_ =
         fStack_148 * auVar85._0_4_ + fVar1 * auVar26._0_4_ + fVar32 * auVar51._0_4_ + fVar12;
    auVar52._4_4_ =
         fStack_144 * auVar85._4_4_ + fVar2 * auVar26._4_4_ + fVar33 * auVar51._4_4_ + fVar13;
    auVar52._8_4_ =
         fStack_140 * auVar85._8_4_ + fVar3 * auVar26._8_4_ + fVar14 * auVar51._8_4_ + fVar73;
    auVar52._12_4_ =
         fStack_13c * auVar85._12_4_ + fVar4 * auVar26._12_4_ + fVar94 * auVar51._12_4_ + fVar19;
    auVar26 = vshufps_avx(auVar52,auVar52,0xd2);
    auVar85 = vshufps_avx(auVar52,auVar52,0xc9);
    fVar12 = auVar39._0_4_ * auVar85._0_4_ - auVar36._0_4_ * auVar26._0_4_;
    fVar13 = auVar39._4_4_ * auVar85._4_4_ - auVar36._4_4_ * auVar26._4_4_;
    fVar73 = auVar39._8_4_ * auVar85._8_4_ - auVar36._8_4_ * auVar26._8_4_;
    fVar19 = auVar39._12_4_ * auVar85._12_4_ - auVar36._12_4_ * auVar26._12_4_;
    auVar42._0_4_ = fVar12 + fVar12;
    auVar42._4_4_ = fVar13 + fVar13;
    auVar42._8_4_ = fVar73 + fVar73;
    auVar42._12_4_ = fVar19 + fVar19;
    auVar26 = vshufps_avx(auVar42,auVar42,0xd2);
    auVar24 = vshufps_avx(auVar42,auVar42,0xc9);
    auVar85._0_4_ =
         auVar42._0_4_ * auVar23._0_4_ + fStack_e8 +
         -(auVar39._0_4_ * auVar24._0_4_) + auVar26._0_4_ * auVar36._0_4_;
    auVar85._4_4_ =
         auVar42._4_4_ * auVar23._4_4_ + fStack_e4 +
         -(auVar39._4_4_ * auVar24._4_4_) + auVar26._4_4_ * auVar36._4_4_;
    auVar85._8_4_ =
         auVar42._8_4_ * auVar23._8_4_ + fStack_e0 +
         -(auVar39._8_4_ * auVar24._8_4_) + auVar26._8_4_ * auVar36._8_4_;
    auVar85._12_4_ =
         auVar42._12_4_ * auVar23._12_4_ + fStack_dc +
         -(auVar39._12_4_ * auVar24._12_4_) + auVar26._12_4_ * auVar36._12_4_;
  }
  auVar64 = ZEXT1664(auVar85);
  if (param_3[4][8] == '\x02') {
    fVar12 = *(float *)(param_3[2] + 0xc);
    if (0.0 < fVar12) {
      auVar26 = vsubps_avx(auVar85,*param_3);
      auVar88 = ZEXT864(0) << 0x40;
      auVar69 = ZEXT1664(CONCAT412(_DAT_146159bfc,
                                   CONCAT48(_DAT_146159bfc,CONCAT44(_DAT_146159bfc,_DAT_146159bfc)))
                        );
      auVar25._0_4_ = auVar26._0_4_ * auVar26._0_4_;
      auVar25._4_4_ = auVar26._4_4_ * auVar26._4_4_;
      auVar25._8_4_ = auVar26._8_4_ * auVar26._8_4_;
      auVar25._12_4_ = auVar26._12_4_ * auVar26._12_4_;
      auVar26 = vblendps_avx(auVar25,ZEXT816(0) << 0x40,8);
      auVar26 = vhaddps_avx(auVar26,auVar26);
      auVar85 = vhaddps_avx(auVar26,auVar26);
      auVar26 = vrsqrtss_avx(auVar85,auVar85);
      fVar13 = auVar26._0_4_;
      auVar26 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar85,2);
      auVar26 = ZEXT416((uint)((float)(auVar26._0_4_ &
                                      (uint)(((fVar13 * fVar13 * auVar85._0_4_ * _DAT_145fc6f08 +
                                              _DAT_145fc6edc) * fVar13 + fVar13) * auVar85._0_4_)) /
                              fVar12));
      auVar85 = vmaxss_avx(ZEXT416(*(uint *)(param_4 + 0x20)),auVar26);
      auVar26 = vcmpss_avx(ZEXT416(*(uint *)(param_4 + 0x24)),auVar26,1);
      auVar26 = vblendvps_avx(auVar85,ZEXT416(*(uint *)(param_4 + 0x24)),auVar26);
      fVar12 = auVar26._0_4_ * fVar12;
      apuStack_250[0] = (undefined8 *)0x14002a70b;
      fVar73 = _DAT_145fc6f08;
      FUN_144db6f00(param_2,auStack_1a8,*(undefined4 *)(param_3[3] + 4));
      auVar8._8_8_ = uStack_f0;
      auVar8._0_8_ = uStack_f8;
      auVar9._4_4_ = fStack_e4;
      auVar9._0_4_ = fStack_e8;
      auVar9._8_4_ = fStack_e0;
      auVar9._12_4_ = fStack_dc;
      auVar24 = vsubps_avx(auStack_1a8,auVar9);
      auVar27._0_4_ = (uint)uStack_f8 ^ uStack_108;
      auVar27._4_4_ = (uint)((ulonglong)uStack_f8 >> 0x20) ^ uStack_104;
      auVar27._8_4_ = (uint)uStack_f0 ^ uStack_100;
      auVar27._12_4_ = (uint)((ulonglong)uStack_f0 >> 0x20) ^ uStack_fc;
      auVar26 = vblendps_avx(auVar27,auVar8,8);
      auVar85 = vshufps_avx(auVar26,auVar26,0xc9);
      auVar26 = vshufps_avx(auVar26,auVar26,0xd2);
      auVar36 = vshufps_avx(auVar24,auVar24,0xd2);
      auVar39 = vshufps_avx(auVar24,auVar24,0xc9);
      fVar13 = -(auVar26._0_4_ * auVar39._0_4_) + auVar36._0_4_ * auVar85._0_4_;
      fVar19 = -(auVar26._4_4_ * auVar39._4_4_) + auVar36._4_4_ * auVar85._4_4_;
      fVar20 = -(auVar26._8_4_ * auVar39._8_4_) + auVar36._8_4_ * auVar85._8_4_;
      fVar21 = -(auVar26._12_4_ * auVar39._12_4_) + auVar36._12_4_ * auVar85._12_4_;
      auVar43._0_4_ = fVar13 + fVar13;
      auVar43._4_4_ = fVar19 + fVar19;
      auVar43._8_4_ = fVar20 + fVar20;
      auVar43._12_4_ = fVar21 + fVar21;
      auVar36 = vshufps_avx(auVar43,auVar43,0xd2);
      auVar39 = vshufps_avx(auVar43,auVar43,0xc9);
      auVar34 = auVar68._0_16_;
      auVar23 = vshufps_avx(auVar34,auVar34,0xc9);
      auVar17._0_4_ =
           auVar43._0_4_ * auVar72._0_4_ + auVar24._0_4_ +
           -(auVar26._0_4_ * auVar39._0_4_) + auVar36._0_4_ * auVar85._0_4_;
      auVar17._4_4_ =
           auVar43._4_4_ * auVar72._4_4_ + auVar24._4_4_ +
           -(auVar26._4_4_ * auVar39._4_4_) + auVar36._4_4_ * auVar85._4_4_;
      auVar17._8_4_ =
           auVar43._8_4_ * auVar72._8_4_ + auVar24._8_4_ +
           -(auVar26._8_4_ * auVar39._8_4_) + auVar36._8_4_ * auVar85._8_4_;
      auVar17._12_4_ =
           auVar43._12_4_ * auVar72._12_4_ + auVar24._12_4_ +
           -(auVar26._12_4_ * auVar39._12_4_) + auVar36._12_4_ * auVar85._12_4_;
      auVar26 = vshufps_avx(auVar34,auVar34,0xd2);
      auVar85 = vshufps_avx(auVar17,auVar17,0xd2);
      auVar36 = vshufps_avx(auVar17,auVar17,0xc9);
      fVar13 = -(auVar26._0_4_ * auVar36._0_4_) + auVar85._0_4_ * auVar23._0_4_;
      fVar19 = -(auVar26._4_4_ * auVar36._4_4_) + auVar85._4_4_ * auVar23._4_4_;
      fVar20 = -(auVar26._8_4_ * auVar36._8_4_) + auVar85._8_4_ * auVar23._8_4_;
      fVar21 = -(auVar26._12_4_ * auVar36._12_4_) + auVar85._12_4_ * auVar23._12_4_;
      auVar44._0_4_ = fVar13 + fVar13;
      auVar44._4_4_ = fVar19 + fVar19;
      auVar44._8_4_ = fVar20 + fVar20;
      auVar44._12_4_ = fVar21 + fVar21;
      auVar85 = vshufps_avx(auVar44,auVar44,0xd2);
      auVar36 = vshufps_avx(auVar44,auVar44,0xc9);
      auVar39 = vshufps_avx(auVar34,auVar34,0xff);
      fVar19 = auVar44._0_4_ * auVar39._0_4_ + auVar17._0_4_ +
               -(auVar26._0_4_ * auVar36._0_4_) + auVar85._0_4_ * auVar23._0_4_;
      fVar20 = auVar44._4_4_ * auVar39._4_4_ + auVar17._4_4_ +
               -(auVar26._4_4_ * auVar36._4_4_) + auVar85._4_4_ * auVar23._4_4_;
      fVar21 = auVar44._8_4_ * auVar39._8_4_ + auVar17._8_4_ +
               -(auVar26._8_4_ * auVar36._8_4_) + auVar85._8_4_ * auVar23._8_4_;
      fVar22 = auVar44._12_4_ * auVar39._12_4_ + auVar17._12_4_ +
               -(auVar26._12_4_ * auVar36._12_4_) + auVar85._12_4_ * auVar23._12_4_;
      auVar28._0_4_ = fVar19 * fVar19;
      auVar28._4_4_ = fVar20 * fVar20;
      auVar28._8_4_ = fVar21 * fVar21;
      auVar28._12_4_ = fVar22 * fVar22;
      auVar26 = vblendps_avx(auVar28,auVar88._0_16_,8);
      auVar26 = vhaddps_avx(auVar26,auVar26);
      auVar85 = vhaddps_avx(auVar26,auVar26);
      auVar26 = vrsqrtps_avx(auVar85);
      fVar13 = auVar26._0_4_;
      auVar26 = vcmpps_avx(auVar69._0_16_,auVar85,2);
      auVar29._0_4_ =
           (float)(auVar26._0_4_ &
                  (uint)(((fVar73 * fVar13 * fVar13 * auVar85._0_4_ - fVar73) * fVar13 + fVar13) *
                        auVar85._0_4_));
      auVar29._4_4_ = auVar29._0_4_;
      auVar29._8_4_ = auVar29._0_4_;
      auVar29._12_4_ = auVar29._0_4_;
      auVar26 = vrcpps_avx(auVar29);
      fVar13 = auVar26._0_4_;
      fVar73 = auVar26._4_4_;
      fVar31 = auVar26._8_4_;
      fVar32 = auVar26._12_4_;
      auVar72 = ZEXT1664(CONCAT412(fVar22 * (-((fVar32 * auVar29._0_4_ - _DAT_145fc6ed8) * fVar32) +
                                            fVar32) * fVar12 + auVar64._12_4_,
                                   CONCAT48(fVar21 * (-((fVar31 * auVar29._0_4_ - _DAT_145fc6ed8) *
                                                       fVar31) + fVar31) * fVar12 + auVar64._8_4_,
                                            CONCAT44(fVar20 * (-((fVar73 * auVar29._0_4_ -
                                                                 _DAT_145fc6ed8) * fVar73) + fVar73)
                                                              * fVar12 + auVar64._4_4_,
                                                     fVar19 * (-((fVar13 * auVar29._0_4_ -
                                                                 _DAT_145fc6ed8) * fVar13) + fVar13)
                                                              * fVar12 + auVar64._0_4_))));
      uStack_230 = 0x14002a819;
      lVar11 = FUN_145647140();
      lVar11 = -lVar11;
      uVar60 = auStack_168._8_8_;
      *(undefined8 *)((longlong)auStack_220 + lVar11 + -8) = auStack_168._0_8_;
      *(undefined8 *)((longlong)auStack_220 + lVar11) = uVar60;
      uVar60 = auStack_158._8_8_;
      *(undefined8 *)((longlong)&fStack_218 + lVar11) = auStack_158._0_8_;
      *(undefined8 *)((longlong)&fStack_210 + lVar11) = uVar60;
      *(undefined1 (*) [16])(auStack_208 + lVar11) = auVar64._0_16_;
      *(undefined1 (*) [16])(auStack_1f8 + lVar11) = auVar72._0_16_;
      uStack_198 = *(undefined8 *)*param_3;
      uStack_190 = *(undefined8 *)(*param_3 + 8);
      auStack_220[0] = 4;
      puStack_228 = (undefined1 *)((longlong)auStack_220 + lVar11 + -8);
      *(undefined8 *)((longlong)apuStack_250 + lVar11) = 0x14002a85f;
      FUN_1447907e0();
      auVar63 = auVar68._0_16_;
      auVar85 = *(undefined1 (*) [16])(auStack_208 + lVar11);
    }
  }
  else if (((param_3[4][8] == '\x01') && (fVar12 = *(float *)(param_3[2] + 0xc), 0.0 < fVar12)) &&
          (fVar13 = *(float *)(param_3[2] + 4), 0.0 < fVar13)) {
    auVar72 = ZEXT1664(*param_3);
    auVar26 = vsubps_avx(auVar85,*param_3);
    auVar30._0_4_ = auVar26._0_4_ * auVar26._0_4_;
    auVar30._4_4_ = auVar26._4_4_ * auVar26._4_4_;
    auVar30._8_4_ = auVar26._8_4_ * auVar26._8_4_;
    auVar30._12_4_ = auVar26._12_4_ * auVar26._12_4_;
    auVar26 = vblendps_avx(auVar30,ZEXT816(0) << 0x40,8);
    auVar26 = vhaddps_avx(auVar26,auVar26);
    auVar36 = vhaddps_avx(auVar26,auVar26);
    auVar26 = vrsqrtss_avx(auVar36,auVar36);
    fVar73 = auVar26._0_4_;
    auVar26 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar36,2);
    fVar73 = (float)(auVar26._0_4_ &
                    (uint)(((fVar73 * fVar73 * auVar36._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) *
                            fVar73 + fVar73) * auVar36._0_4_)) / fVar12;
    if (fVar73 <= *(float *)(param_4 + 0x24)) {
      if (*(float *)(param_4 + 0x20) <= fVar73) goto LAB_14002a2cc;
      fVar73 = *(float *)(param_4 + 0x20) - fVar73;
      fVar19 = _DAT_145fc6f48;
    }
    else {
      fVar73 = fVar73 - *(float *)(param_4 + 0x24);
      fVar19 = _DAT_145fc6ed8;
    }
    if (0.0 < fVar73 * fVar12) {
      auVar26 = vminss_avx(ZEXT416((uint)fVar13),ZEXT416((uint)(fVar73 * fVar12)));
      auVar18._0_4_ = auVar26._0_4_ / fVar13;
      auVar18._4_12_ = auVar26._4_12_;
      apuStack_250[0] = (undefined8 *)0x14002a927;
      fVar14 = (float)func_0x000145f407b0(auVar18._0_8_);
      auVar63 = auVar68._0_16_;
      auVar26 = vsubps_avx(auVar72._0_16_,auVar64._0_16_);
      auVar45._0_12_ = ZEXT812(0);
      auVar45._12_4_ = 0;
      fVar12 = auVar26._0_4_;
      auVar38._0_4_ = fVar12 * fVar12;
      fVar20 = auVar26._4_4_;
      auVar38._4_4_ = fVar20 * fVar20;
      fVar22 = auVar26._8_4_;
      auVar38._8_4_ = fVar22 * fVar22;
      fVar32 = auVar26._12_4_;
      auVar38._12_4_ = fVar32 * fVar32;
      auVar26 = vblendps_avx(auVar38,auVar45,8);
      auVar26 = vhaddps_avx(auVar26,auVar26);
      auVar26 = vhaddps_avx(auVar26,auVar26);
      auVar85 = vrsqrtps_avx(auVar26);
      fVar73 = auVar85._0_4_;
      fVar21 = auVar85._4_4_;
      fVar31 = auVar85._8_4_;
      fVar33 = auVar85._12_4_;
      fVar14 = fVar14 * fVar19 * fVar13;
      auVar85._0_4_ =
           ((fVar73 * fVar73 * auVar26._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar73 + fVar73) *
           fVar14 * fVar12 + auVar64._0_4_;
      auVar85._4_4_ =
           ((fVar21 * fVar21 * auVar26._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar21 + fVar21) *
           fVar14 * fVar20 + auVar64._4_4_;
      auVar85._8_4_ =
           ((fVar31 * fVar31 * auVar26._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar31 + fVar31) *
           fVar14 * fVar22 + auVar64._8_4_;
      auVar85._12_4_ =
           ((fVar33 * fVar33 * auVar26._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar33 + fVar33)
           * fVar14 * fVar32 + auVar64._12_4_;
    }
  }
LAB_14002a2cc:
  *param_1 = auVar63;
  param_1[1] = auVar85;
  return;
}

