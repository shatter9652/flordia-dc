// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013b5a0  size: 3989 bytes
// Name:    FUN_14013b5a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14558dbb0, FUN_144e9e0a0, FUN_144ecc350, FUN_144ea5ba0, FUN_144e3af50, FUN_14557a120, FUN_1435a5e20, FUN_1435a5cc0, FUN_145050850, FUN_144e8a2d0, FUN_144ff5d30, FUN_1451d1eb0, FUN_144d9d7a0, FUN_14004be40, FUN_14500d730, FUN_145523e70, FUN_144db5e10, FUN_144ed45a0, FUN_144e9df40, FUN_144e9d8c0, FUN_144eaa5a0, FUN_144ff5cf0, FUN_1450eae60, FUN_14548a390, FUN_141f87230, FUN_144f88700, FUN_145579fe0, FUN_144f57850
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013b5a0(ulonglong param_1,longlong param_2,undefined8 *param_3,float *param_4,
                  longlong param_5,undefined8 *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  undefined4 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [32];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte bVar12;
  char cVar13;
  char cVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  uint uVar22;
  longlong lVar23;
  longlong *plVar24;
  ulonglong uVar25;
  uint uVar26;
  ulonglong uVar27;
  byte bVar28;
  ushort uVar29;
  uint uVar30;
  longlong unaff_GS_OFFSET;
  bool bVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar44 [16];
  undefined1 extraout_var [56];
  undefined1 auVar39 [64];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 auVar42 [64];
  undefined1 extraout_var_04 [56];
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined8 uVar54;
  float fVar55;
  undefined1 auVar56 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar57 [64];
  undefined1 auVar63 [64];
  undefined1 *puVar64;
  undefined4 uStack_1c4;
  ulonglong uStack_1c0;
  float *pfStack_1b8;
  longlong lStack_1b0;
  undefined4 uStack_1a4;
  uint uStack_1a0;
  uint uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined1 auStack_154 [12];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 aauStack_b8 [7] [16];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar43 [64];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_03 [56];
  
  pfStack_1b8 = param_4;
  func_0x000140225a70(param_3);
  if (param_2 != 0) {
    *(float *)(param_3 + 0x6e) = (float)*(byte *)(param_1 + 0x90) * _DAT_14615a130;
  }
  *(undefined4 *)(param_3 + 0x79) = *(undefined4 *)(param_5 + 0xa0);
  cVar3 = *(char *)(_DAT_14ab7f990 + 0x18d);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar23 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  uVar22 = *(uint *)(lVar23 + 0x12d8);
  if ((uVar22 & 6) == 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      uVar22 = *(uint *)(lVar23 + 0x12d8);
    }
    lVar23 = 0x58;
    if ((uVar22 & 0x20) != 0) goto LAB_14013b6a9;
  }
  else {
LAB_14013b6a9:
    lVar23 = 0x5c;
  }
  if (param_6 == (undefined8 *)0x0) {
    uStack_198 = *(undefined8 *)(param_1 + 0x40);
    uStack_190 = *(undefined8 *)(param_1 + 0x48);
    uStack_188 = *(undefined8 *)(param_1 + 0x50);
    uStack_180 = *(undefined8 *)(param_1 + 0x58);
    uStack_178 = *(undefined8 *)(param_1 + 0x60);
    uStack_170 = *(undefined8 *)(param_1 + 0x68);
    auVar35 = *(undefined1 (*) [16])(param_1 + 0x70);
    auVar46 = vpunpckhwd_avx(auVar35,auVar35);
    auVar46 = vpsrad_avx(auVar46,0x10);
    auVar46 = vcvtdq2ps_avx(auVar46);
    auVar46 = vshufpd_avx(auVar46,auVar46,3);
    fStack_108 = auVar46._0_4_ * _DAT_146159c90 + auVar35._0_4_;
    fStack_104 = auVar46._4_4_ * _UNK_146159c94 + auVar35._4_4_;
    fStack_100 = auVar46._8_4_ * _UNK_146159c98 + auVar35._8_4_;
    fStack_fc = auVar46._12_4_ * _UNK_146159c9c + auVar35._12_4_;
    uStack_168 = CONCAT44(fStack_104,fStack_108);
    uStack_160 = CONCAT44(fStack_fc,fStack_100);
  }
  else {
    uStack_198 = *param_6;
    uStack_190 = param_6[1];
    uStack_188 = param_6[2];
    uStack_180 = param_6[3];
    uStack_178 = param_6[4];
    uStack_170 = param_6[5];
    uVar17 = param_6[6];
    uVar54 = param_6[7];
    uStack_168._0_4_ = (float)uVar17;
    uStack_168._4_4_ = (float)((ulonglong)uVar17 >> 0x20);
    uStack_160._0_4_ = (float)uVar54;
    uStack_160._4_4_ = (float)((ulonglong)uVar54 >> 0x20);
    fStack_108 = (float)uStack_168;
    fStack_104 = uStack_168._4_4_;
    fStack_100 = (float)uStack_160;
    fStack_fc = uStack_160._4_4_;
    uStack_168 = uVar17;
    uStack_160 = uVar54;
  }
  lVar23 = (longlong)*(int *)(lVar23 + 0x14a210cb8) * 0x730;
  uStack_118 = *(undefined8 *)(lVar23 + 0x14a94bca0);
  uStack_110 = *(undefined8 *)(lVar23 + 0x14a94bca8);
  fVar32 = (float)FUN_144ed45a0();
  func_0x00014509f530(*(undefined4 *)(param_5 + 0x3c),&uStack_19c);
  auVar35 = vpshufb_avx(ZEXT416(uStack_19c),_DAT_14615a1f0);
  auVar35 = vcvtdq2ps_avx(auVar35);
  auVar46._0_4_ = auVar35._0_4_ * _DAT_14615a130;
  auVar46._4_4_ = auVar35._4_4_ * _DAT_14615a130;
  auVar46._8_4_ = auVar35._8_4_ * _DAT_14615a130;
  auVar46._12_4_ = auVar35._12_4_ * _DAT_14615a130;
  if ((param_2 == 0) || (*(char *)(param_2 + 0x30) != '\x02')) {
    uVar22 = *(uint *)(param_1 + 0xb4) >> 1 & 0x1f;
    if ((uVar22 == 0xf) || (uVar22 == 0xc)) {
      auVar5._8_4_ = _DAT_14ab491c8;
      auVar5._0_8_ = _DAT_14ab491c0;
      auVar5._12_4_ = _DAT_14ab491cc;
      auVar53._4_4_ = _DAT_14ab491c8;
      auVar53._0_4_ = _DAT_14ab491c8;
      auVar53._8_4_ = _DAT_14ab491c8;
      auVar53._12_4_ = _DAT_14ab491c8;
      auVar35 = vmovlhps_avx(ZEXT416(_DAT_14ab491bc),auVar5);
      auVar35 = vshufps_avx(auVar35,auVar5,0xd8);
      auVar35 = vinsertps_avx(auVar35,ZEXT416(_DAT_14ab491bc),0x30);
      auVar6._4_4_ = uRam000000014ab491d0;
      auVar6._0_4_ = _DAT_14ab491cc;
      auVar6._8_4_ = _DAT_14ab491d4;
      auVar6._12_4_ = uRam000000014ab491d8;
      fVar55 = auVar35._0_4_;
      fVar34 = auVar35._4_4_;
      fVar59 = auVar35._8_4_;
      fVar61 = auVar35._12_4_;
      auVar35 = vmovlhps_avx(auVar53,auVar6);
      auVar35 = vshufps_avx(auVar35,auVar6,0xd8);
      auVar35 = vinsertps_avx(auVar35,auVar5,0xb0);
      fVar33 = _DAT_14ab491d4;
      goto LAB_14013b872;
    }
  }
  else {
    auVar44._8_4_ = _DAT_14ab49328;
    auVar44._0_8_ = _DAT_14ab49320;
    auVar44._12_4_ = _DAT_14ab4932c;
    auVar50._4_4_ = _DAT_14ab49328;
    auVar50._0_4_ = _DAT_14ab49328;
    auVar50._8_4_ = _DAT_14ab49328;
    auVar50._12_4_ = _DAT_14ab49328;
    auVar35 = vmovlhps_avx(ZEXT416(_DAT_14ab4931c),auVar44);
    auVar35 = vshufps_avx(auVar35,auVar44,0xd8);
    auVar35 = vinsertps_avx(auVar35,ZEXT416(_DAT_14ab4931c),0x30);
    auVar10._4_4_ = uRam000000014ab49330;
    auVar10._0_4_ = _DAT_14ab4932c;
    auVar10._8_4_ = _DAT_14ab49334;
    auVar10._12_4_ = uRam000000014ab49338;
    fVar55 = auVar35._0_4_;
    fVar34 = auVar35._4_4_;
    fVar59 = auVar35._8_4_;
    fVar61 = auVar35._12_4_;
    auVar35 = vmovlhps_avx(auVar50,auVar10);
    auVar35 = vshufps_avx(auVar35,auVar10,0xd8);
    auVar35 = vinsertps_avx(auVar35,auVar44,0xb0);
    fVar33 = _DAT_14ab49334;
LAB_14013b872:
    fVar58 = _DAT_145fc6ed8 - fVar33;
    auVar46._0_4_ = auVar46._0_4_ * fVar55 * fVar58 + auVar35._0_4_ * fVar33;
    auVar46._4_4_ = auVar46._4_4_ * fVar34 * fVar58 + auVar35._4_4_ * fVar33;
    auVar46._8_4_ = auVar46._8_4_ * fVar59 * fVar58 + auVar35._8_4_ * fVar33;
    auVar46._12_4_ = auVar46._12_4_ * fVar61 * fVar58 + auVar35._12_4_ * fVar33;
  }
  if ((*(byte *)(param_5 + 0xf0) & 4) != 0) {
    auVar8._8_4_ = _DAT_14ab49228;
    auVar8._0_8_ = _DAT_14ab49220;
    auVar8._12_4_ = _DAT_14ab4922c;
    auVar51._4_4_ = _DAT_14ab49228;
    auVar51._0_4_ = _DAT_14ab49228;
    auVar51._8_4_ = _DAT_14ab49228;
    auVar51._12_4_ = _DAT_14ab49228;
    auVar35 = vmovlhps_avx(ZEXT416(_DAT_14ab4921c),auVar8);
    auVar35 = vshufps_avx(auVar35,auVar8,0xd8);
    auVar35 = vinsertps_avx(auVar35,ZEXT416(_DAT_14ab4921c),0x30);
    auVar9._4_4_ = uRam000000014ab49230;
    auVar9._0_4_ = _DAT_14ab4922c;
    auVar9._8_4_ = _DAT_14ab49234;
    auVar9._12_4_ = uRam000000014ab49238;
    fVar34 = auVar46._4_4_;
    fVar59 = auVar46._8_4_;
    fVar61 = auVar46._12_4_;
    auVar5 = vmovlhps_avx(auVar51,auVar9);
    auVar5 = vshufps_avx(auVar5,auVar9,0xd8);
    auVar5 = vinsertps_avx(auVar5,auVar8,0xb0);
    fVar55 = _DAT_145fc6ed8 - _DAT_14ab49234;
    auVar46._0_4_ = auVar46._0_4_ * auVar35._0_4_ * fVar55 + auVar5._0_4_ * _DAT_14ab49234;
    auVar46._4_4_ = fVar34 * auVar35._4_4_ * fVar55 + auVar5._4_4_ * _DAT_14ab49234;
    auVar46._8_4_ = fVar59 * auVar35._8_4_ * fVar55 + auVar5._8_4_ * _DAT_14ab49234;
    auVar46._12_4_ = fVar61 * auVar35._12_4_ * fVar55 + auVar5._12_4_ * _DAT_14ab49234;
  }
  auVar57 = ZEXT1664(auVar46);
  auVar63 = ZEXT1664(_DAT_1488cd8e0);
  fVar45 = _DAT_14ab491a4 * (_DAT_146b52074 - *(float *)(param_5 + 0x94)) +
           *(float *)(param_5 + 0x94);
  fVar45 = (_DAT_14ab491a8 - fVar45) * _DAT_14ab491ac + fVar45;
  fVar55 = _DAT_14615a130;
  fVar34 = _DAT_14615a130;
  fVar59 = _DAT_14615a130;
  fVar61 = _DAT_14615a130;
  fVar33 = _DAT_14ab491a4;
  fVar58 = _DAT_14ab491a4;
  fVar60 = _DAT_14ab491a4;
  fVar62 = _DAT_14ab491a4;
  FUN_14004be40(&uStack_1a0,*(undefined4 *)(param_1 + 0xbc));
  if (uStack_1a0 == 0) {
    auVar35 = vsubps_avx(auVar63._0_16_,auVar57._0_16_);
    auVar56._0_4_ = auVar35._0_4_ * fVar33 + auVar57._0_4_;
    auVar56._4_4_ = auVar35._4_4_ * fVar58 + auVar57._4_4_;
    auVar56._8_4_ = auVar35._8_4_ * fVar60 + auVar57._8_4_;
    auVar56._12_4_ = auVar35._12_4_ * fVar62 + auVar57._12_4_;
  }
  else {
    auVar35 = vpshufb_avx(ZEXT416(uStack_1a0),_DAT_14615a1f0);
    auVar35 = vcvtdq2ps_avx(auVar35);
    auVar56._0_4_ = auVar35._0_4_ * fVar55;
    auVar56._4_4_ = auVar35._4_4_ * fVar34;
    auVar56._8_4_ = auVar35._8_4_ * fVar59;
    auVar56._12_4_ = auVar35._12_4_ * fVar61;
  }
  auVar57 = ZEXT1664(auVar56);
  auVar63 = ZEXT1664(CONCAT412(_DAT_145fc6ed8,
                               CONCAT48(_DAT_145fc6ed8,CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8))));
  if (((param_2 != 0) && (*(int *)(param_5 + 0xf0) < 0)) && ((*(byte *)(param_5 + 0x98) & 8) == 0))
  {
    uVar17 = func_0x000145162130(*(undefined4 *)(param_2 + 0x9c));
    FUN_145579fe0(aauStack_b8,uVar17);
    auVar35 = vinsertps_avx(aauStack_b8[0],ZEXT416((uint)_DAT_145fc6ed8),0x30);
    auVar63 = ZEXT1664(auVar35);
  }
  uVar15 = 0;
  fVar33 = fVar32 * *pfStack_1b8 * *(float *)(param_5 + 0x2c);
  *(float *)(param_3 + 100) = fVar32 * *pfStack_1b8;
  cVar14 = *(char *)(param_1 + 0x30);
  uStack_1c4 = 0x80000000;
  uVar22 = *(uint *)(param_1 + 0xa0);
  uVar27 = 0;
  if (cVar14 == '\t') {
    uVar27 = param_1;
  }
  if ((uVar22 >> 0x11 & 1) != 0) {
    uVar15 = func_0x00014074f6d0(*(undefined4 *)(param_1 + 0xa4));
  }
  uStack_1c0 = uVar27;
  uVar16 = FUN_14500d730(uVar27,param_5);
  auVar46 = auVar63._0_16_;
  auVar35 = auVar57._0_16_;
  uVar26 = (*(byte *)(pfStack_1b8 + 2) & 1) << 0x1a | uVar16;
  lStack_1b0 = param_2;
  if ((cVar14 == '\t') && (*(longlong *)(param_5 + 0x58) != 0 || *(longlong *)(param_5 + 0x60) != 0)
     ) {
    lVar23 = 0;
    lVar18 = *(longlong *)(param_5 + 0x58);
    if ((*(uint *)(param_1 + 0xf8) >> 0xb & 1) == 0) {
      lVar18 = lVar23;
    }
    if ((uVar16 & 0x20) == 0) {
      lVar18 = lVar23;
    }
    cVar13 = FUN_144e9df40(param_1,&uStack_1c4);
    auVar46 = auVar63._0_16_;
    auVar35 = auVar57._0_16_;
    if (cVar13 != '\0') {
      lVar23 = *(longlong *)(param_5 + 0x60);
      lVar18 = *(longlong *)(param_5 + 0x58);
      uVar26 = uVar26 | 0x20;
    }
  }
  else {
    lVar23 = 0;
    lVar18 = 0;
  }
  fVar32 = auVar46._0_4_;
  fVar58 = auVar46._4_4_;
  fVar60 = auVar46._8_4_;
  fVar62 = auVar46._12_4_;
  bVar12 = *(byte *)(param_5 + 0x11d);
  auVar46 = vshufps_avx(auVar46,auVar46,0xff);
  uVar16 = 0x380;
  bVar28 = 0x27;
  if (DAT_1488cd918 != '\0') {
    bVar28 = 0;
  }
  if ((bVar28 & bVar12) == 0) {
    uVar16 = *(uint *)(param_1 + 0xb0);
  }
  auStack_c8._0_4_ = -((-(auVar35._0_4_ * fVar32) + fVar32) * auVar46._0_4_) + fVar32;
  auStack_c8._4_4_ = -((-(auVar35._4_4_ * fVar58) + fVar58) * auVar46._4_4_) + fVar58;
  auStack_c8._8_4_ = -((-(auVar35._8_4_ * fVar60) + fVar60) * auVar46._8_4_) + fVar60;
  auStack_c8._12_4_ = -((-(auVar35._12_4_ * fVar62) + fVar62) * auVar46._12_4_) + fVar62;
  uVar30 = uVar26 & 0xffffff7f;
  if ((uVar16 >> 8 & 1) != 0) {
    uVar30 = uVar26;
  }
  uVar26 = uVar30 & 0xfffffeff;
  if ((uVar16 >> 9 & 1) != 0) {
    uVar26 = uVar30;
  }
  uVar16 = uVar26 | 0x40;
  if ((uVar26 & 0x180) == 0) {
    uVar16 = uVar26;
  }
  *(uint *)(param_3 + 0x10) = *(uint *)(param_3 + 0x10) | *(uint *)(param_5 + 0xf0);
  if (cVar14 == '\t') {
    uVar16 = uVar16 | (*(uint *)(param_1 + 0xf8) & 0x10000) << 3;
  }
  puVar64 = auStack_c8;
  uStack_d8 = uStack_168;
  uStack_d0 = uStack_160;
  FUN_14548a390(param_3,bVar12,uVar16,&uStack_d8,puVar64,fVar33);
  uVar21 = (undefined4)((ulonglong)puVar64 >> 0x20);
  FUN_144ff5d30(&uStack_1a4,uVar22);
  FUN_144ff5cf0(param_3,uStack_1a4);
  *(undefined4 *)((longlong)param_3 + 0x34c) = uVar15;
  uVar16 = *(uint *)((longlong)param_3 + 0x7c);
  FUN_144e9e0a0(param_3 + 0x58,&uStack_1c4);
  FUN_144ecc350(param_3,lVar18,lVar23);
  *(undefined4 *)(param_3 + 0x61) = *(undefined4 *)(param_5 + 0xbc);
  param_3[0x65] = *(undefined8 *)(param_5 + 0xd8);
  *(undefined4 *)(param_3 + 0x66) = *(undefined4 *)(param_5 + 0xe0);
  uVar17 = func_0x000144ed4530(*(undefined4 *)(param_5 + 0xc),*(undefined4 *)(param_5 + 0x98));
  func_0x000144db6270(param_3,uVar17);
  if (cVar3 != '\0') {
    FUN_14557a120(param_3);
  }
  lVar23 = lStack_1b0;
  if (*(int *)((longlong)param_3 + 0x84) == 0x20) {
    puVar4 = *(undefined4 **)(param_5 + 0x50);
    uVar17 = CONCAT44(uVar21,puVar4[3]);
    FUN_1435a5cc0(param_3,*puVar4,puVar4[2],puVar4[1],uVar17);
    uVar21 = (undefined4)((ulonglong)uVar17 >> 0x20);
  }
  else if (*(int *)((longlong)param_3 + 0x84) == 2) {
    puVar4 = *(undefined4 **)(param_5 + 0x50);
    uVar17 = CONCAT44(uVar21,puVar4[3]);
    FUN_145523e70(param_3,puVar4[1],*puVar4,puVar4[2],uVar17,puVar4[4],puVar4[5]);
    uVar21 = (undefined4)((ulonglong)uVar17 >> 0x20);
  }
  uStack_128 = *(undefined8 *)(param_5 + 0x20);
  uStack_120 = *(undefined8 *)(param_5 + 0x28);
  uStack_138 = *(undefined8 *)(param_5 + 0x30);
  uStack_130 = *(undefined8 *)(param_5 + 0x38);
  FUN_144ea5ba0(param_3,&uStack_128,&uStack_138,&uStack_198);
  uVar27 = uStack_1c0;
  auVar57 = ZEXT464((uint)_DAT_145fc6ed8);
  if (((uStack_1c0 != 0 & lVar23 != 0 & (byte)(uVar16 >> 3) & 0x1f) == 1) &&
     (lVar18 = func_0x000144e9dbe0(*(undefined4 *)(lVar23 + 0x9c)), lVar18 != 0)) {
    auVar63._0_8_ = func_0x0001455c60a0(*(undefined8 *)(lVar18 + 8),*(undefined4 *)(param_5 + 0xa0))
    ;
    auVar63._8_56_ = extraout_var;
    auVar57 = ZEXT1664(auVar63._0_16_);
    auVar35._0_12_ = ZEXT812(0);
    auVar35._12_4_ = 0;
    auVar35 = vcmpss_avx(auVar63._0_16_,auVar35,0);
    FUN_144db5e10(lVar18,param_3,param_5,auVar35._0_4_ & 1);
    uVar27 = uStack_1c0;
    uStack_148 = *param_3;
    uStack_140 = param_3[1];
    FUN_14558dbb0(*(undefined8 *)(lVar18 + 8),*(undefined1 *)(lVar18 + 0x62));
  }
  if ((lVar23 != 0 && (uVar16 >> 10 & 1) != 0) &&
     (lVar18 = FUN_144eaa5a0(*(undefined4 *)(lVar23 + 0x9c)), lVar18 != 0)) {
    lVar19 = FUN_145050850(*(undefined4 *)(lVar18 + 0x754),*(undefined8 *)(lVar18 + 0x758),0xa370096
                          );
    if (lVar19 != 0) {
      FUN_141f87230(lVar19,param_3);
    }
    if ((*(longlong **)(lVar18 + 0x348) != (longlong *)0x0) &&
       (lVar18 = (**(code **)(**(longlong **)(lVar18 + 0x348) + 0x58))(), lVar18 != 0)) {
      bVar12 = func_0x000144e238f0(*(undefined4 *)(lVar18 + 0x9c));
      *(byte *)(param_3 + 0x6d) = *(byte *)(param_3 + 0x6d) & 0xfe | bVar12 ^ 1;
    }
  }
  *(byte *)((longlong)param_3 + 0x3c2) =
       *(byte *)((longlong)param_3 + 0x3c2) & 0x7f |
       *(char *)((longlong)param_3 + 0x7c) * '\x02' & 0x80U;
  func_0x0001455bf320(param_3,param_5 + 0x70);
  *(undefined4 *)((longlong)param_3 + 0x304) = *(undefined4 *)(param_5 + 0x90);
  *(float *)((longlong)param_3 + 0x74) = fVar45;
  *(undefined4 *)(param_3 + 0x74) = *(undefined4 *)(param_5 + 0xe8);
  *(undefined4 *)((longlong)param_3 + 900) = *(undefined4 *)(param_5 + 0xec);
  if ((*(byte *)((longlong)param_3 + 0x7d) & 0x10) == 0) {
    puVar20 = &uStack_f8;
    fVar55 = 0.0;
    uVar17 = 0;
    uVar54 = CONCAT44(uVar21,0x3f800000);
    uStack_f8 = 0;
    uStack_f0 = 0;
  }
  else {
    fVar32 = *(float *)(param_5 + 0xac);
    uVar26 = uVar16 >> 10 & 1;
    uVar30 = (uVar16 & 8) >> 3;
    fVar33 = (float)func_0x0001455bf330(_DAT_14ab4926c,_DAT_14ab49274,uVar16 & 0xffffff01);
    fVar32 = fVar32 * fVar33;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = *(ulonglong *)(param_5 + 0xd0);
    auVar35 = vpmovzxbw_avx(auVar1);
    puVar20 = (undefined8 *)auStack_e8;
    auVar35 = vpmovzxwd_avx(auVar35);
    auVar35 = vcvtdq2ps_avx(auVar35);
    auVar36._0_4_ = auVar35._0_4_ * fVar55;
    auVar36._4_4_ = auVar35._4_4_ * fVar34;
    auVar36._8_4_ = auVar35._8_4_ * fVar59;
    auVar36._12_4_ = auVar35._12_4_ * fVar61;
    auStack_e8 = vinsertps_avx(auVar36,ZEXT416(*(uint *)(param_5 + 0xd4)),0x30);
    fVar55 = *(float *)(param_5 + 0xcc);
    fVar34 = (float)func_0x0001455bf340(uVar16 & 0xffffff01,uVar30,uVar26);
    auVar63 = ZEXT464((uint)(fVar34 * fVar55));
    fVar55 = *(float *)(param_5 + 200);
    fVar34 = (float)func_0x0001455bf380(_DAT_14ab4918c,_DAT_14ab49310,uVar30,uVar26);
    fVar55 = fVar55 * fVar34;
    uVar54 = CONCAT44(uVar21,fVar32);
    uVar17 = auVar63._0_8_;
    uVar27 = uStack_1c0;
  }
  auVar39._0_8_ = func_0x0001454f5170(param_3,fVar55,uVar17,puVar20,uVar54);
  auVar39._8_56_ = extraout_var_00;
  auVar35 = auVar39._0_16_;
  if ((*(byte *)((longlong)param_3 + 0x7c) & 0x40) != 0) {
    uVar17 = func_0x0001455bf3b0(*(undefined4 *)(param_5 + 0xa0),param_1);
    FUN_1451d1eb0(param_3,uVar17);
    auVar63 = ZEXT464(_DAT_146159ef4);
    auVar35 = vmaxss_avx(ZEXT416(_DAT_146159ef4),ZEXT416(*(uint *)(param_5 + 0xb0)));
    *(int *)((longlong)param_3 + 0x374) = auVar35._0_4_;
    func_0x0001455bf410(param_3,(float)*(byte *)(param_5 + 0x11f) * _DAT_14615a130 * _DAT_146b524f0)
    ;
    *(undefined4 *)(param_3 + 0x70) = _DAT_14ab4912c;
    uVar15 = func_0x000144e552d0(*(undefined1 *)(param_5 + 0x120));
    auVar46 = auVar63._0_16_;
    *(undefined4 *)((longlong)param_3 + 0x37c) = uVar15;
    if ((DAT_148d59c28 == '\0') && ((DAT_148d59c29 & 1) == 0)) {
      cVar13 = func_0x000144eab9d0();
      auVar46 = auVar63._0_16_;
      auVar40._8_56_ = extraout_var_01;
      auVar40._0_8_ = extraout_XMM0_Qa;
      auVar35 = auVar40._0_16_;
      if (cVar13 == '\0') goto LAB_14013bf85;
    }
    auVar35 = vmaxss_avx(auVar46,ZEXT416(*(uint *)((longlong)param_3 + 0x374)));
    *(int *)((longlong)param_3 + 0x3c4) = auVar35._0_4_;
  }
LAB_14013bf85:
  auVar46 = auVar57._0_16_;
  uVar29 = *(ushort *)((longlong)param_3 + 0x3bc);
  if (cVar14 == '\t') {
    if ((uVar29 == 0x1ffe & param_3[0x68] != 0 & *(byte *)(pfStack_1b8 + 2) >> 1) == 1) {
      uVar16 = uVar22 >> 0x10;
      cVar14 = FUN_144d9d7a0(uVar22);
      auVar41._8_56_ = extraout_var_02;
      auVar41._0_8_ = extraout_XMM0_Qa_00;
      auVar35 = auVar41._0_16_;
      uVar29 = 0x1ffe;
      if (cVar14 != '\0') {
        if (((uVar16 & 2) != 0) && (0xfffbffff < uVar22 || (uVar16 & 1) == 0)) {
          lVar19 = FUN_144f57850(uVar22);
          lVar18 = *_DAT_149e58198;
          uVar22 = *(uint *)(_DAT_149e58198 + 1);
          auVar42._0_8_ = func_0x000144d9d8a0(uVar16,&uStack_158);
          auVar42._8_56_ = extraout_var_03;
          auVar35 = auVar42._0_16_;
          uVar29 = (short)((ulonglong)(lVar19 - lVar18) / (ulonglong)uVar22) * 0x20 + 0x20U & 0xfe0
                   | (ushort)uStack_158 & 0x1f;
          uVar27 = uStack_1c0;
          if ((~*(uint *)((longlong)param_3 + 0x7c) & 0x180) == 0) {
            cVar14 = func_0x000144f2b960((int)*(short *)(*(longlong *)(lVar19 + 400) + 0xf0));
            auVar43._8_56_ = extraout_var_04;
            auVar43._0_8_ = extraout_XMM0_Qa_01;
            auVar35 = auVar43._0_16_;
            *(byte *)(param_3 + 0x6d) =
                 *(byte *)(param_3 + 0x6d) & 0xfb | ((byte)(cVar14 - 2U) < 0xfd) << 2;
            uVar27 = uStack_1c0;
          }
        }
      }
    }
    auVar46 = auVar57._0_16_;
    *(ushort *)((longlong)param_3 + 0x3be) = uVar29;
    uVar22 = *(uint *)(param_1 + 0xa4);
    if ((~uVar22 & 0x7ffe) == 0) goto LAB_14013c1a8;
    if ((*(byte *)(param_1 + 0xf8) & 1) != 0) {
      uVar16 = uVar22 >> 1 & 0x3fff;
      plVar24 = _DAT_1498e6408;
      if ((uVar22 & 1) == 0) {
        plVar24 = _DAT_1498e6400;
      }
      if (((1 << ((byte)(uVar22 >> 1) & 7) & (uint)*(byte *)(plVar24[5] + (ulonglong)(uVar16 >> 3)))
           == 0) || (lVar18 = (ulonglong)(uVar16 * (int)plVar24[1]) + *plVar24, lVar18 == 0)) {
        uVar17 = 0;
      }
      else {
        uVar17 = *(undefined8 *)(lVar18 + 0x20);
      }
      func_0x000144dee550(&uStack_158,uVar17);
      auVar46 = auVar57._0_16_;
      auVar11._4_12_ = auStack_154;
      auVar11._0_4_ = uStack_158;
      auVar7 = vcvtph2ps_f16c(auVar11);
      auVar35 = auVar7._0_16_;
      auVar5 = vshufps_avx(auVar35,auVar35,0xfa);
      auVar6 = vshufps_avx(auVar35,auVar35,0x50);
      auVar5 = vcmpps_avx(auVar6,auVar5,5);
      auVar44 = auVar7._16_16_;
      auVar6 = vshufps_avx(auVar44,auVar44,0xfa);
      auVar53 = vshufps_avx(auVar44,auVar44,0x50);
      auVar6 = vcmpps_avx(auVar53,auVar6,5);
      auVar53 = auVar6 | auVar5;
      uVar27 = uStack_1c0;
      if ((((SUB161(auVar53 >> 0x1f,0) & 1) == 0 && (SUB161(auVar53 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar53 >> 0x5f,0) & 1) == 0) && -1 < auVar53[0xf]) {
        auVar49._4_4_ = _DAT_145fc6f70;
        auVar49._0_4_ = _DAT_145fc6f70;
        auVar49._8_4_ = _DAT_145fc6f70;
        auVar49._12_4_ = _DAT_145fc6f70;
        auVar52._4_4_ = _DAT_14615af24;
        auVar52._0_4_ = _DAT_14615af24;
        auVar52._8_4_ = _DAT_14615af24;
        auVar52._12_4_ = _DAT_14615af24;
        auVar6 = vmovlhps_avx(auVar44,auVar49);
        auVar5 = vblendps_avx(auVar44,auVar52,3);
        auVar35 = vminps_avx(auVar35,auVar6);
        auVar35 = vmaxps_avx(auVar35,auVar5);
      }
      else {
        uVar15 = vmovmskps_avx(auVar6);
        uVar21 = vmovmskps_avx(auVar5);
        bVar31 = (char)uVar21 != '\0';
        if (bVar31) {
          auVar35 = auVar44;
        }
        if (bVar31 && (char)uVar15 != '\0') goto LAB_14013c19c;
      }
      auVar47._0_4_ = auVar35._0_4_ * _DAT_14615ee40 + _DAT_145fc6edc;
      auVar47._4_4_ = auVar35._4_4_ * _UNK_14615ee44 + _DAT_145fc6edc;
      auVar47._8_4_ = auVar35._8_4_ * _UNK_14615ee48 + _DAT_145fc6edc;
      auVar47._12_4_ = auVar35._12_4_ * _UNK_14615ee4c + _DAT_145fc6edc;
      auVar35 = vcvtdq2ps_avx(ZEXT416(_DAT_1499fecf8));
      auVar6 = vshufps_avx(auVar47,auVar47,0xff);
      auVar5 = vmovshdup_avx(auVar35);
      *(int *)(param_3 + 0x62) = (int)(auVar47._0_4_ * auVar35._0_4_);
      auVar53 = vshufps_avx(auVar47,auVar47,0xec);
      auVar44 = vshufps_avx(auVar47,auVar47,0xe6);
      auVar53 = vsubps_avx(auVar44,auVar53);
      auVar48._4_4_ = _DAT_145f43778;
      auVar48._0_4_ = _DAT_145f43778;
      auVar48._8_4_ = _DAT_145f43778;
      auVar48._12_4_ = _DAT_145f43778;
      *(int *)((longlong)param_3 + 0x314) = (int)(auVar6._0_4_ * auVar5._0_4_);
      auVar38._0_4_ = (int)(auVar53._0_4_ * auVar35._0_4_);
      auVar38._4_4_ = (int)(auVar53._4_4_ * auVar35._4_4_);
      auVar38._8_4_ = (int)(auVar53._8_4_ * auVar35._8_4_);
      auVar38._12_4_ = (int)(auVar53._12_4_ * auVar35._12_4_);
      auVar35 = vpmaxsd_avx(auVar38,auVar48);
      param_3[99] = auVar35._0_8_;
      goto LAB_14013c1a8;
    }
  }
  else {
    *(ushort *)((longlong)param_3 + 0x3be) = uVar29;
    if ((~*(uint *)(param_1 + 0xa4) & 0x7ffe) == 0) goto LAB_14013c1a8;
  }
LAB_14013c19c:
  auVar35 = vpcmpeqd_avx(auVar35,auVar35);
  *(undefined1 (*) [16])(param_3 + 0x62) = auVar35;
LAB_14013c1a8:
  auVar57 = ZEXT1664(auVar46);
  FUN_144e9d8c0(param_1,lVar23,param_3,param_5);
  func_0x000145551f40(param_3,*(undefined4 *)(param_5 + 0xf4),*(undefined4 *)(param_5 + 0xf8));
  FUN_144f88700(param_5,uVar27,param_3,&uStack_198);
  uVar54 = auVar57._0_8_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulonglong *)(param_5 + 0xc0);
  auVar35 = vcvtph2ps_f16c(auVar2);
  uVar17 = vmovlps_avx(auVar35);
  *(undefined8 *)((longlong)param_3 + 0x6c) = uVar17;
  *(undefined4 *)((longlong)param_3 + 0x2c4) = *(undefined4 *)(param_5 + 0xc4);
  *(undefined4 *)(param_3 + 0x59) = *(undefined4 *)(param_5 + 0xe4);
  if (*(int *)((longlong)param_3 + 0x84) == 4) {
    func_0x000144e50cb0(param_3,**(undefined4 **)(param_5 + 0x50));
    uVar54 = auVar57._0_8_;
  }
  param_3[0x6b] = *(undefined8 *)(param_5 + 0x100);
  *(undefined1 *)(param_3 + 0x6c) = *(undefined1 *)(param_5 + 0x118);
  uVar17 = func_0x0001455bf420(_DAT_146b520b8,uVar54);
  FUN_1435a5e20(param_3,*(undefined1 *)(param_5 + 0x119),*(undefined1 *)(param_5 + 0x11a),uVar17);
  *(undefined1 *)((longlong)param_3 + 0x362) = *(undefined1 *)(param_5 + 0x11b);
  *(undefined1 *)((longlong)param_3 + 0x363) = *(undefined1 *)(param_5 + 0x11c);
  FUN_144e8a2d0(param_3);
  FUN_1450eae60(param_3);
  if (cVar3 != '\0') {
    func_0x0001455bf430(param_3);
  }
  if (_DAT_1488cd7e0 != 0) {
    uVar25 = (uVar27 >> 0x21 ^ uVar27) * -0xae502812aa7333;
    lVar23 = (uVar25 >> 0x21 ^ uVar25) * -0x3b314601e57a13ad;
    uVar22 = (uint)((ulonglong)lVar23 >> 0x21) ^ (uint)lVar23;
    uVar16 = uVar22 >> 7;
    bVar28 = (byte)uVar22;
    bVar12 = bVar28 & 0x7f;
    auVar37._0_8_ =
         CONCAT17(bVar28,CONCAT16(bVar28,CONCAT15(bVar28,CONCAT14(bVar28,CONCAT13(bVar28,CONCAT12(
                                                  bVar28,CONCAT11(bVar28,bVar28))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar37[8] = bVar12;
    auVar37[9] = bVar12;
    auVar37[10] = bVar12;
    auVar37[0xb] = bVar12;
    auVar37[0xc] = bVar12;
    auVar37[0xd] = bVar12;
    auVar37[0xe] = bVar12;
    auVar37[0xf] = bVar12;
    while( true ) {
      uVar16 = uVar16 & _DAT_1488cd7e0 - 1U;
      auVar35 = *(undefined1 (*) [16])(_DAT_1488cd7e8 + (ulonglong)uVar16 * 0x410);
      auVar46 = vpcmpeqb_avx(auVar35,auVar37);
      uVar29 = (ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar46[0xf] >> 7) << 0xf;
      if (uVar29 != 0) {
        uVar22 = (uint)uVar29;
        do {
          uVar26 = 0;
          for (uVar30 = uVar22; (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x80000000) {
            uVar26 = uVar26 + 1;
          }
          if (*(ulonglong *)
               ((ulonglong)uVar16 * 0x410 + _DAT_1488cd7e8 + 0x10 + (ulonglong)(uVar26 << 6)) ==
              uVar27) {
            uVar22 = uVar16 << 4 | uVar26;
            if (uVar22 == 0xffffffff) goto LAB_14013c3a2;
            puVar20 = (undefined8 *)
                      ((ulonglong)((uVar26 & 0xf) << 6) + 0x40 +
                      _DAT_1488cd7e8 + (ulonglong)(uVar22 >> 4) * 0x410);
            uVar17 = puVar20[-3];
            param_3[0x12] = puVar20[-4];
            param_3[0x13] = uVar17;
            uVar17 = puVar20[-1];
            param_3[0x14] = puVar20[-2];
            param_3[0x15] = uVar17;
            goto LAB_14013c3bf;
          }
          uVar22 = uVar22 - 1 & uVar22;
        } while (uVar22 != 0);
      }
      auVar35 = vpsignb_avx(auVar35,auVar35);
      if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar35 >> 0x17,0) & 1) != 0) || (SUB161(auVar35 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar35 >> 0x27,0) & 1) != 0) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar35 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar35 >> 0x3f,0) & 1) != 0) || (SUB161(auVar35 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar35 >> 0x4f,0) & 1) != 0) || (SUB161(auVar35 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar35 >> 0x5f,0) & 1) != 0) || (SUB161(auVar35 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar35 >> 0x6f,0) & 1) != 0) || (SUB161(auVar35 >> 0x77,0) & 1) != 0) ||
          auVar35[0xf] < '\0') break;
      uVar16 = uVar16 + 1;
    }
  }
LAB_14013c3a2:
  puVar20 = param_3 + 6;
  param_3[0x12] = *param_3;
  param_3[0x13] = param_3[1];
  param_3[0x14] = param_3[4];
  param_3[0x15] = param_3[5];
LAB_14013c3bf:
  uVar17 = puVar20[1];
  param_3[0x16] = *puVar20;
  param_3[0x17] = uVar17;
  FUN_144e3af50(&uStack_1c4);
  return;
}

