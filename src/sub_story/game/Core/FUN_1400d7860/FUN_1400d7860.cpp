// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d7860  size: 2813 bytes
// Name:    FUN_1400d7860
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14013fb30, FUN_1400e2180, FUN_14027f120, FUN_144e2d5a0, FUN_140066b50, FUN_1400df4f0, FUN_144edcc50, FUN_1400d8360, FUN_14551dd20, FUN_1450a1410, FUN_1400d8440, FUN_144e40a00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d7860(longlong param_1,float *param_2,longlong *param_3,longlong *param_4)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  byte bVar15;
  ulonglong uVar16;
  void *pvVar17;
  float *pfVar18;
  float *pfVar19;
  byte bVar20;
  undefined7 uVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
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
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar38 [64];
  float fVar43;
  undefined1 auVar42 [64];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar49;
  float fVar50;
  undefined1 auVar46 [16];
  float fVar51;
  undefined1 auVar47 [16];
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auStack_178 [8];
  float fStack_170;
  float fStack_16c;
  undefined4 uStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  longlong *plStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 auStack_c8 [16];
  undefined1 auVar48 [64];
  
  plStack_150 = param_3;
  lVar10 = func_0x000144e6ea40(*(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c));
  if (lVar10 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = func_0x000144e6e9f0(lVar10);
  }
  lVar13 = *(longlong *)(param_2 + 4);
  if (lVar13 == 0) {
    bVar15 = *(byte *)(param_2 + 0x48) & 0xf7;
LAB_1400d7934:
    bVar7 = 0;
  }
  else {
    cVar5 = func_0x000144db68c0(*(undefined4 *)(lVar13 + 0x1708));
    if (cVar5 == '\0') {
      bVar15 = 0;
    }
    else {
      bVar15 = 8;
    }
    *(byte *)(param_2 + 0x48) = *(byte *)(param_2 + 0x48) & 0xf7 | bVar15;
    cVar5 = FUN_1450a1410(lVar13);
    bVar15 = *(byte *)(param_2 + 0x48);
    if (cVar5 == '\0') goto LAB_1400d7934;
    bVar7 = 0x10;
  }
  lVar13 = *(longlong *)(param_2 + 4);
  pfVar1 = param_2 + 0x48;
  *(byte *)pfVar1 = bVar15 & 0xef | bVar7;
  if (lVar13 == 0) {
    *(byte *)pfVar1 = bVar15 & 0x6f | bVar7;
LAB_1400d80dc:
    bVar15 = *(byte *)(param_2 + 0x53);
LAB_1400d79c8:
    bVar7 = 0;
  }
  else {
    uVar11 = func_0x000144edcaf0(lVar13);
    fVar23 = (float)FUN_144e2d5a0(uVar11,*(ulonglong *)(lVar13 + 8) & 0xfffffffffffffff0,&fStack_148
                                  ,0,0);
    bVar15 = 0;
    if ((fVar23 == 0.0) && (bVar15 = 0, !NAN(fVar23))) {
      bVar15 = 0x80;
    }
    *(byte *)(param_2 + 0x48) = *(byte *)pfVar1 & 0x7f | bVar15;
    if (*(longlong *)(param_2 + 4) == 0) goto LAB_1400d80dc;
    cVar5 = func_0x000144f14c70(*(undefined4 *)(*(longlong *)(param_2 + 4) + 0x14),1);
    bVar15 = *(byte *)(param_2 + 0x53);
    if (cVar5 == '\0') goto LAB_1400d79c8;
    bVar7 = 0x40;
  }
  pfVar19 = param_2 + 0x53;
  bVar15 = bVar15 & 0xbf | bVar7;
  *(byte *)pfVar19 = bVar15;
  if (lVar10 != 0) {
    FUN_14013fb30(lVar10,&fStack_148,0x739c90e9);
    bVar15 = *(byte *)pfVar19;
    bVar7 = 0x40;
    if (fStack_148 != 9.231752e-07) {
      bVar7 = bVar15 & 0x40;
    }
  }
  *(byte *)(param_2 + 0x53) = bVar15 & 0xbf | bVar7;
  if ((*(longlong *)param_2 != 0) && ((*(uint *)(*(longlong *)param_2 + 0x10) >> 10 & 1) != 0)) {
    bVar7 = 0x40;
  }
  *(byte *)(param_2 + 0x53) = bVar7 | bVar15 & 0xbf;
  lVar13 = *(longlong *)(param_2 + 2);
  if (lVar13 == 0) {
    bVar15 = *(byte *)pfVar1;
LAB_1400d7a4e:
    bVar7 = 0;
  }
  else {
    bVar15 = *(byte *)pfVar1;
    if ((*(uint *)(lVar13 + 0x234) & 0x10) == 0) goto LAB_1400d7a4e;
    bVar7 = 2;
  }
  *(byte *)(param_2 + 0x48) = bVar15 & 0xfd | bVar7;
  if ((*(longlong *)(param_2 + 6) != 0) &&
     ((*(ulonglong *)(*(longlong *)(param_2 + 6) + 0xe40) & 0x10) != 0)) {
    bVar7 = 2;
  }
  *(byte *)pfVar1 = bVar7 | bVar15 & 0xfd;
  if (lVar13 == 0) {
    *(byte *)pfVar1 = bVar7 | bVar15 & 0xf9;
LAB_1400d7aae:
    bVar15 = *(byte *)(param_2 + 0x50);
  }
  else {
    if ((char)*(undefined4 *)(lVar13 + 0x224) < '\0') {
      bVar20 = 4;
    }
    else {
      bVar20 = 0;
    }
    *(byte *)pfVar1 = bVar7 | bVar15 & 0xf9 | bVar20;
    if (((*(byte *)(lVar13 + 0x236) & 2) == 0) || (lVar13 = func_0x000144ecd460(), lVar13 == 0))
    goto LAB_1400d7aae;
    lVar13 = func_0x000144ecd460();
    bVar15 = *(byte *)(param_2 + 0x50);
    if (*(char *)(lVar13 + 0x30) == '\x04') {
      bVar7 = 0x20;
      goto LAB_1400d7abd;
    }
  }
  bVar7 = 0;
LAB_1400d7abd:
  *(byte *)(param_2 + 0x50) = bVar15 & 0xdf | bVar7;
  uStack_15c = 0;
  if (lVar10 == 0) {
    bVar15 = 0;
  }
  else {
    cVar5 = FUN_140066b50(lVar10,0xc39bd620);
    if (cVar5 == '\0') {
      bVar15 = FUN_14027f120(lVar10,0x637526b3,&uStack_15c);
    }
    else {
      bVar15 = 1;
    }
  }
  *(byte *)(param_2 + 0x48) = *(byte *)(param_2 + 0x48) & 0xfe | bVar15;
  pfVar18 = param_2;
  FUN_1400d8360(*(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c),param_2);
  auVar25._0_12_ = ZEXT812(0);
  auVar25._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 0x44) = auVar25;
  if (*(longlong *)(param_2 + 2) != 0) {
    pfVar18 = (float *)auStack_178;
    FUN_144e40a00(*(longlong *)(param_2 + 2),pfVar18);
    auVar25 = _auStack_178;
  }
  _auStack_178 = auVar25;
  auVar38 = ZEXT1264(ZEXT812(0));
  auVar32._0_12_ = ZEXT812(0);
  auVar32._12_4_ = 0;
  if (*(longlong *)(param_2 + 0xe) != 0) {
    if (((uint)param_2[0x50] & 0x20) == 0) {
      uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 0xe) + 0x9c);
      lVar10 = func_0x0001450bb780(uVar2);
      auVar32._0_12_ = ZEXT812(0);
      auVar32._12_4_ = 0;
      if (lVar10 != 0) {
        cVar5 = func_0x00014501ce00(uVar2);
        if (cVar5 == '\0') {
          pfVar18 = &fStack_148;
          FUN_144e40a00(lVar10,pfVar18);
          auVar32._4_4_ = fStack_144;
          auVar32._0_4_ = fStack_148;
          auVar32._8_4_ = fStack_140;
          auVar32._12_4_ = fStack_13c;
        }
        else {
          auVar25 = *(undefined1 (*) [16])(param_2 + 0x2c);
          auVar32 = vpunpckhwd_avx(auVar25,auVar25);
          auVar32 = vpsrad_avx(auVar32,0x10);
          auVar32 = vcvtdq2ps_avx(auVar32);
          auVar32 = vshufpd_avx(auVar32,auVar32,3);
          auStack_c8._0_4_ = auVar32._0_4_ * _DAT_146159c90 + auVar25._0_4_;
          auStack_c8._4_4_ = auVar32._4_4_ * _UNK_146159c94 + auVar25._4_4_;
          auStack_c8._8_4_ = auVar32._8_4_ * _UNK_146159c98 + auVar25._8_4_;
          auStack_c8._12_4_ = auVar32._12_4_ * _UNK_146159c9c + auVar25._12_4_;
          pfVar18 = &fStack_148;
          FUN_1400e2180(*(undefined8 *)(lVar10 + 8),pfVar18);
          auVar32._4_4_ = fStack_144;
          auVar32._0_4_ = fStack_148;
          auVar32._8_4_ = fStack_140;
          auVar32._12_4_ = fStack_13c;
        }
      }
    }
    else {
      func_0x000145326580(*(undefined8 *)(*(longlong *)(param_2 + 2) + 8),&fStack_158);
      auVar25 = *(undefined1 (*) [16])(param_2 + 0x2c);
      auVar29 = vcvtps2ph_f16c(ZEXT416(_DAT_145fc6f48),3);
      auVar32 = vpunpckhwd_avx(auVar25,auVar25);
      auVar32 = vpsrad_avx(auVar32,0x10);
      auVar32 = vcvtdq2ps_avx(auVar32);
      auVar32 = vshufpd_avx(auVar32,auVar32,3);
      auStack_e8._0_4_ = auVar32._0_4_ * _DAT_146159c90 + auVar25._0_4_;
      auStack_e8._4_4_ = auVar32._4_4_ * _UNK_146159c94 + auVar25._4_4_;
      auStack_e8._8_4_ = auVar32._8_4_ * _UNK_146159c98 + auVar25._8_4_;
      auStack_e8._12_4_ = auVar32._12_4_ * _UNK_146159c9c + auVar25._12_4_;
      FUN_14551dd20(CONCAT44(uStack_154,fStack_158),&fStack_148,auStack_e8,auVar29._0_2_ | 0x10000);
      auVar42 = ZEXT1664(CONCAT412(fStack_13c,CONCAT48(fStack_140,CONCAT44(fStack_144,fStack_148))))
      ;
      puVar14 = (undefined8 *)func_0x000144ecfea0(*(longlong *)(param_2 + 4));
      uStack_f8 = *puVar14;
      uStack_f0 = puVar14[1];
      fStack_158 = (float)FUN_144edcc50(&uStack_f8,*(undefined4 *)(puVar14 + 2),1);
      pfVar18 = &fStack_148;
      pvVar17 = *(void **)(param_2 + 2);
      FUN_144e40a00();
      auVar29._0_4_ = fStack_148 * fStack_148;
      auVar29._4_4_ = fStack_144 * fStack_144;
      auVar29._8_4_ = fStack_140 * fStack_140;
      auVar29._12_4_ = fStack_13c * fStack_13c;
      auVar25 = vhaddps_avx(auVar29,auVar29);
      if (_DAT_14615af54 < auVar25._0_4_) {
        pfVar18 = &fStack_158;
        pvVar17 = *(void **)(*(longlong *)(param_2 + 4) + 8);
        FUN_1400df4f0();
      }
      auVar32 = auVar42._0_16_;
      fVar23 = auVar42._0_4_;
      auVar33._0_4_ = fVar23 * fVar23;
      fVar24 = auVar42._4_4_;
      auVar33._4_4_ = fVar24 * fVar24;
      fVar39 = auVar42._8_4_;
      auVar33._8_4_ = fVar39 * fVar39;
      fVar40 = auVar42._12_4_;
      auVar33._12_4_ = fVar40 * fVar40;
      auVar30._0_12_ = ZEXT812(0);
      auVar30._12_4_ = 0;
      auVar35._4_4_ = _DAT_145fc6f00;
      auVar35._0_4_ = _DAT_145fc6f00;
      auVar35._8_4_ = _DAT_145fc6f00;
      auVar35._12_4_ = _DAT_145fc6f00;
      auVar25 = vblendps_avx(auVar33,auVar30,8);
      auVar25 = vhaddps_avx(auVar25,auVar25);
      auVar29 = vhaddps_avx(auVar25,auVar25);
      auVar25 = vcmpps_avx(auVar35,auVar29,5);
      if ((((SUB161(auVar25 >> 0x1f,0) & 1) == 0 && (SUB161(auVar25 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar25 >> 0x5f,0) & 1) == 0) && -1 < auVar25[0xf]) {
        auVar25 = vrsqrtps_avx(auVar29);
        auVar52 = ZEXT1664(CONCAT412(-(fVar40 * auVar25._12_4_) - 0.0,
                                     CONCAT48(-(fVar39 * auVar25._8_4_) - 0.0,
                                              CONCAT44(-(fVar24 * auVar25._4_4_) - 0.0,
                                                       -(fVar23 * auVar25._0_4_) - 0.0))));
        auVar45._0_4_ = auVar25._0_4_ * fVar23;
        auVar45._4_4_ = auVar25._4_4_ * fVar24;
        auVar45._8_4_ = auVar25._8_4_ * fVar39;
        auVar45._12_4_ = auVar25._12_4_ * fVar40;
        auVar48 = ZEXT1664(auVar45);
        vmovshdup_avx(auVar45);
        atan2f(pvVar17,pfVar18);
        auVar54 = ZEXT464((uint)_DAT_145fc6f80);
        fVar23 = auVar52._0_4_;
        auVar47._0_12_ = ZEXT812(0);
        auVar47._12_4_ = 0;
        auVar53 = ZEXT1664(auVar47);
        auVar25 = vcmpss_avx(auVar47,ZEXT416((uint)(_DAT_145fc6f80 + fVar23)),2);
        auVar25 = vblendvps_avx(ZEXT416((uint)(fVar23 + _DAT_145fc6f84)),auVar52._0_16_,auVar25);
        auVar32 = vcmpss_avx(auVar52._0_16_,ZEXT416((uint)_DAT_145fc6f80),2);
        auVar25 = vblendvps_avx(ZEXT416((uint)(fVar23 + _DAT_14615a920)),auVar25,auVar32);
        auVar37._4_4_ = _DAT_146159be0;
        auVar37._0_4_ = _DAT_146159be0;
        auVar37._8_4_ = _DAT_146159be0;
        auVar37._12_4_ = _DAT_146159be0;
        fVar23 = fStack_158 - auVar25._0_4_;
        auVar52 = ZEXT464((uint)fVar23);
        auVar25 = vcmpss_avx(auVar47,ZEXT416((uint)fVar23),2);
        auVar25 = vblendvps_avx(auVar37,ZEXT416((uint)_DAT_145fc6f80),auVar25);
        auVar55 = ZEXT1664(auVar25);
        fVar23 = (float)func_0x000145f40820(auVar25._0_4_ + fVar23);
        auVar32 = auVar42._0_16_;
        auVar29 = ZEXT416((uint)(fVar23 - auVar55._0_4_));
        auVar25 = vcmpss_avx(auVar29,ZEXT416(_DAT_146159be0),2);
        auVar30 = vcmpss_avx(auVar52._0_16_,auVar54._0_16_,2);
        auVar25 = vblendvps_avx(auVar29,auVar54._0_16_,auVar25);
        auVar29 = vcmpss_avx(auVar53._0_16_,ZEXT416((uint)(auVar52._0_4_ + auVar54._0_4_)),2);
        auVar29 = vblendvps_avx(auVar25,auVar52._0_16_,auVar29);
        auVar25 = vblendvps_avx(auVar25,auVar29,auVar30);
        auVar29 = vshufpd_avx(auVar48._0_16_,auVar48._0_16_,1);
        fVar23 = (float)(auVar25._0_4_ & _DAT_145fc6f4c);
        bVar22 = _DAT_146159bdc < fVar23;
        if (auVar53._0_4_ < auVar29._0_4_) {
          bVar22 = fVar23 < _DAT_146159bdc;
        }
        uVar16 = CONCAT71((int7)((ulonglong)pfVar18 >> 8),*(undefined1 *)((longlong)param_2 + 0x141)
                         ) & 0xfffffffffffffffe;
        bVar15 = (byte)uVar16 | bVar22;
        pfVar18 = (float *)CONCAT71((int7)(uVar16 >> 8),bVar15);
        *(byte *)((longlong)param_2 + 0x141) = bVar15;
      }
    }
  }
  _auStack_178 = vsubps_avx(_auStack_178,auVar32);
  auVar26._0_4_ = auStack_178._0_4_ * auStack_178._0_4_;
  auVar26._4_4_ = auStack_178._4_4_ * auStack_178._4_4_;
  auVar26._8_4_ = auStack_178._8_4_ * auStack_178._8_4_;
  auVar26._12_4_ = auStack_178._12_4_ * auStack_178._12_4_;
  auVar25 = vblendps_avx(auVar26,auVar38._0_16_,8);
  auVar25 = vhaddps_avx(auVar25,auVar25);
  auVar32 = vhaddps_avx(auVar25,auVar25);
  auVar25 = vrsqrtss_avx(auVar32,auVar32);
  fVar23 = auVar25._0_4_;
  auVar25 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar32,2);
  param_2[0x3d] =
       (float)(auVar25._0_4_ &
              (uint)(((fVar23 * fVar23 * auVar32._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) * fVar23 +
                     fVar23) * auVar32._0_4_));
  lVar10 = param_4[1];
  param_4 = (longlong *)*param_4;
  auVar42 = ZEXT464((uint)param_2[0x3b]);
  iVar8 = func_0x000144e05fa0(param_4[1]);
  auVar32 = auVar42._0_16_;
  auVar25 = auVar38._0_16_;
  if ((int)lVar10 != iVar8) {
    uVar9 = (**(code **)(*param_4 + 0xf0))(param_4,(int)lVar10);
    pfVar18 = (float *)(ulonglong)uVar9;
    (**(code **)(*param_4 + 0x108))(param_4,pfVar18,&fStack_148);
    auVar32 = auVar42._0_16_;
    auVar25 = auStack_138;
  }
  auVar29 = vshufpd_avx(auVar25,auVar25,1);
  auVar34._0_12_ = ZEXT812(0);
  auVar34._12_4_ = 0;
  auVar25 = vcmpss_avx(auVar32,auVar34,4);
  param_2[0x3f] =
       (float)(auVar25._0_4_ & (uint)((auVar29._0_4_ - *(float *)(param_1 + 0x270)) / auVar32._0_4_)
              );
  *(float *)(param_1 + 0x270) = auVar29._0_4_;
  uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c);
  cVar5 = func_0x000144da28f0(uVar2);
  if (cVar5 == '\0') {
    cVar5 = '\0';
  }
  else {
    cVar5 = FUN_1400d8440(uVar2);
  }
  if (((*(char *)(param_1 + 0x388) == '\0') && (cVar6 = func_0x000144e72530(uVar2), cVar6 == '\0'))
     || (*(longlong *)(param_2 + 4) == 0)) {
    bVar15 = 0;
  }
  else {
    pfVar18 = (float *)CONCAT71((int7)((ulonglong)pfVar18 >> 8),1);
    bVar15 = func_0x000144eea730(*(longlong *)(param_2 + 4),pfVar18,0);
    bVar15 = (bVar15 ^ 1) << 5;
  }
  bVar7 = *(byte *)pfVar1;
  uVar16 = CONCAT71((int7)((ulonglong)pfVar18 >> 8),bVar7) & 0xffffffdf;
  bVar20 = (byte)uVar16;
  uVar21 = (undefined7)(uVar16 >> 8);
  *(byte *)pfVar1 = bVar20 | bVar15;
  if ((*(byte *)(param_1 + 0x290) & 2) == 0) {
    fVar23 = _DAT_14abbd7e8;
    if (((((uint)*pfVar19 & 0x40) == 0) && (fVar23 = _DAT_14abbd7f0, (bVar7 & 8) == 0)) &&
       ((fVar23 = _DAT_14abbd7f8, cVar5 == '\0' &&
        (fVar23 = _DAT_14abbd800, *(char *)(param_1 + 0x60) != '\x02')))) {
      fVar23 = _DAT_14abbd7e0;
    }
  }
  else {
    fVar23 = _DAT_14abbd7ec;
    if (((((uint)*pfVar19 & 0x40) == 0) && (fVar23 = _DAT_14abbd7f4, (bVar7 & 8) == 0)) &&
       ((fVar23 = _DAT_14abbd7fc, cVar5 == '\0' &&
        (fVar23 = _DAT_14abbd804, *(char *)(param_1 + 0x60) != '\x02')))) {
      fVar23 = _DAT_14abbd7e4;
    }
  }
  bVar7 = 0x20;
  if (param_2[0x3d] <= fVar23) {
    bVar7 = bVar15;
  }
  *(byte *)(param_2 + 0x48) = bVar20 | bVar7;
  *(byte *)(param_1 + 0x290) = *(byte *)(param_1 + 0x290) & 0xfd | bVar7 >> 4;
  bVar22 = ((uint)param_2[0x48] & 0x20) == 0;
  pvVar17 = (void *)(ulonglong)(*(longlong *)(param_2 + 4) == 0 || bVar22);
  if (*(longlong *)(param_2 + 4) != 0 && !bVar22) {
    auVar44._0_12_ = ZEXT812(0);
    auVar44._12_4_ = 0;
    auVar38 = ZEXT1664(auVar44);
    auVar31._4_4_ = _DAT_145fc6f00;
    auVar31._0_4_ = _DAT_145fc6f00;
    auVar31._8_4_ = _DAT_145fc6f00;
    auVar31._12_4_ = _DAT_145fc6f00;
    auVar27._0_4_ = (float)auStack_178._0_4_ * (float)auStack_178._0_4_;
    auVar27._4_4_ = (float)auStack_178._4_4_ * (float)auStack_178._4_4_;
    auVar27._8_4_ = fStack_170 * fStack_170;
    auVar27._12_4_ = fStack_16c * fStack_16c;
    auVar25 = vblendps_avx(auVar27,auVar44,8);
    auVar25 = vhaddps_avx(auVar25,auVar25);
    auVar32 = vhaddps_avx(auVar25,auVar25);
    auVar25 = vcmpps_avx(auVar31,auVar32,5);
    if ((((SUB161(auVar25 >> 0x1f,0) & 1) == 0 && (SUB161(auVar25 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar25 >> 0x5f,0) & 1) == 0) && -1 < auVar25[0xf]) {
      auVar25 = vrsqrtps_avx(auVar32);
      auVar42 = ZEXT1664(auVar25);
      auVar52 = ZEXT1664(CONCAT412(auVar25._12_4_ * fStack_16c,
                                   CONCAT48(auVar25._8_4_ * fStack_170,
                                            CONCAT44(auVar25._4_4_ * (float)auStack_178._4_4_,
                                                     auVar25._0_4_ * (float)auStack_178._0_4_))));
      fVar24 = (float)auStack_178._0_4_;
      fVar39 = (float)auStack_178._4_4_;
      fVar40 = fStack_170;
      fVar41 = fStack_16c;
      puVar12 = (undefined8 *)func_0x000145033e90();
      uStack_108 = *puVar12;
      uStack_100 = puVar12[1];
      puVar14 = &uStack_108;
      fVar23 = (float)FUN_144edcc50(puVar14,*(undefined4 *)(puVar12 + 2),CONCAT71(uVar21,1));
      vmovshdup_avx(auVar52._0_16_);
      auVar42 = ZEXT1664(CONCAT412(-(auVar42._12_4_ * fVar41) - auVar38._12_4_,
                                   CONCAT48(-(auVar42._8_4_ * fVar40) - auVar38._8_4_,
                                            CONCAT44(-(auVar42._4_4_ * fVar39) - auVar38._4_4_,
                                                     -(auVar42._0_4_ * fVar24) - auVar38._0_4_))));
      atan2f(puVar14,pvVar17);
      auVar52 = ZEXT464((uint)_DAT_145fc6f80);
      fVar24 = auVar42._0_4_;
      auVar46._0_12_ = ZEXT812(0);
      auVar46._12_4_ = 0;
      auVar48 = ZEXT1664(auVar46);
      auVar25 = vcmpss_avx(auVar46,ZEXT416((uint)(fVar24 + _DAT_145fc6f80)),2);
      auVar25 = vblendvps_avx(ZEXT416((uint)(fVar24 + _DAT_145fc6f84)),auVar42._0_16_,auVar25);
      auVar32 = vcmpss_avx(auVar42._0_16_,ZEXT416((uint)_DAT_145fc6f80),2);
      auVar25 = vblendvps_avx(ZEXT416((uint)(fVar24 + _DAT_14615a920)),auVar25,auVar32);
      auVar36._4_4_ = _DAT_146159be0;
      auVar36._0_4_ = _DAT_146159be0;
      auVar36._8_4_ = _DAT_146159be0;
      auVar36._12_4_ = _DAT_146159be0;
      fVar23 = auVar25._0_4_ - fVar23;
      auVar42 = ZEXT464((uint)fVar23);
      auVar25 = vcmpss_avx(auVar46,ZEXT416((uint)fVar23),2);
      auVar25 = vblendvps_avx(auVar36,ZEXT416((uint)_DAT_145fc6f80),auVar25);
      auVar53 = ZEXT1664(auVar25);
      fVar23 = (float)func_0x000145f40820(auVar25._0_4_ + fVar23);
      plVar4 = plStack_150;
      auVar32 = ZEXT416((uint)(fVar23 - auVar53._0_4_));
      auVar25 = vcmpss_avx(auVar32,ZEXT416(_DAT_146159be0),2);
      auVar29 = vcmpss_avx(auVar42._0_16_,auVar52._0_16_,2);
      auVar25 = vblendvps_avx(auVar32,auVar52._0_16_,auVar25);
      auVar32 = vcmpss_avx(auVar48._0_16_,ZEXT416((uint)(auVar42._0_4_ + auVar52._0_4_)),2);
      auVar32 = vblendvps_avx(auVar25,auVar42._0_16_,auVar32);
      auVar25 = vblendvps_avx(auVar25,auVar32,auVar29);
      bVar22 = _DAT_14615d254 < (float)(auVar25._0_4_ & _DAT_145fc6f4c);
      (**(code **)(*plStack_150 + 0x1e0))(plStack_150,&fStack_d8);
      fVar23 = (float)auStack_178._0_4_;
      fVar24 = (float)auStack_178._0_4_;
      fVar39 = (float)auStack_178._0_4_;
      fVar40 = (float)auStack_178._4_4_;
      fVar41 = (float)auStack_178._4_4_;
      fVar43 = (float)auStack_178._4_4_;
      fVar49 = fStack_170;
      fVar50 = fStack_170;
      fVar51 = fStack_170;
      (**(code **)(*plVar4 + 0x88))(plVar4,&fStack_148);
      auVar3._4_4_ = fStack_144;
      auVar3._0_4_ = fStack_148;
      auVar3._8_4_ = fStack_140;
      auVar3._12_4_ = fStack_13c;
      auVar29 = vunpcklps_avx(auVar3,auStack_128);
      auVar35 = auVar38._0_16_;
      auVar30 = vunpcklps_avx(auStack_138,auVar35);
      auVar25 = vunpckhps_avx(auVar3,auStack_128);
      auVar32 = vunpckhps_avx(auStack_138,auVar35);
      auVar32 = vunpcklps_avx(auVar25,auVar32);
      auVar33 = vunpcklps_avx(auVar29,auVar30);
      auVar25 = vunpckhps_avx(auVar29,auVar30);
      auVar28._0_4_ =
           (fStack_170 * auVar32._0_4_ +
           (float)auStack_178._4_4_ * auVar25._0_4_ + auVar33._0_4_ * (float)auStack_178._0_4_) *
           fStack_d8;
      auVar28._4_4_ =
           (fVar49 * auVar32._4_4_ + fVar40 * auVar25._4_4_ + auVar33._4_4_ * fVar23) * fStack_d4;
      auVar28._8_4_ =
           (fVar50 * auVar32._8_4_ + fVar41 * auVar25._8_4_ + auVar33._8_4_ * fVar24) * fStack_d0;
      auVar28._12_4_ =
           (fVar51 * auVar32._12_4_ + fVar43 * auVar25._12_4_ + auVar33._12_4_ * fVar39) * fStack_cc
      ;
      auVar25 = vblendps_avx(auVar28,auVar35,8);
      auVar25 = vhaddps_avx(auVar25,auVar25);
      auVar25 = vhaddps_avx(auVar25,auVar25);
      auVar25 = vcmpps_avx(auVar25,auVar35,5);
      *(byte *)pfVar1 =
           *(byte *)pfVar1 & 0xbf |
           (((((SUB161(auVar25 >> 0x1f,0) & 1) == 0 && (SUB161(auVar25 >> 0x3f,0) & 1) == 0) &&
             (SUB161(auVar25 >> 0x5f,0) & 1) == 0) && -1 < auVar25[0xf]) && bVar22) << 6;
    }
  }
  return;
}

