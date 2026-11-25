// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140088ff0  size: 2652 bytes
// Name:    FUN_140088ff0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140089a50, FUN_144f10270
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140088ff0(longlong param_1,int param_2,uint param_3,uint *param_4)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar30;
  float fVar32;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar34;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar31;
  float fVar33;
  float fVar35;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
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
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  uint uVar73;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  undefined1 auVar74 [16];
  undefined1 auVar78 [64];
  undefined1 auVar79 [64];
  undefined1 auVar80 [64];
  undefined1 auVar81 [64];
  undefined1 auVar82 [16];
  undefined1 auVar83 [64];
  undefined1 auVar84 [64];
  undefined8 in_stack_fffffffffffffe50;
  undefined8 uVar85;
  undefined8 *puVar86;
  char cStack_179;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 aauStack_d8 [9] [16];
  undefined1 auVar72 [64];
  
  uVar73 = _DAT_145fc6f4c;
  if ((param_4[3] & 3) == 1) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  auVar70._4_4_ = _DAT_145fc6f70;
  auVar70._0_4_ = _DAT_145fc6f70;
  auVar70._8_4_ = _DAT_145fc6f70;
  auVar70._12_4_ = _DAT_145fc6f70;
  auVar72 = ZEXT1664(auVar70);
  auVar37 = *(undefined1 (*) [16])(param_4 + 8);
  uVar10 = (ulonglong)*param_4 & 0x3fff;
  uVar9 = (ulonglong)param_4[1] & 0x3fff;
  uVar12 = (ulonglong)(uint)((int)uVar10 << 4);
  uVar13 = (ulonglong)(uint)((int)uVar9 << 4);
  auVar19 = *(undefined1 (*) [16])(lVar3 + 0x1c0 + uVar12);
  auVar78 = ZEXT1664(auVar19);
  auVar36._0_4_ = auVar37._0_4_ & _DAT_145fc6f4c;
  auVar36._4_4_ = auVar37._4_4_ & _DAT_145fc6f4c;
  auVar36._8_4_ = auVar37._8_4_ & _DAT_145fc6f4c;
  auVar36._12_4_ = auVar37._12_4_ & _DAT_145fc6f4c;
  auVar36 = vcmpps_avx(auVar36,auVar70,0x11);
  uVar14 = vmovmskps_avx(auVar36);
  auVar36 = *(undefined1 (*) [16])(param_4 + 0xc);
  auVar50._0_4_ = auVar36._0_4_ & _DAT_145fc6f4c;
  auVar50._4_4_ = auVar36._4_4_ & _DAT_145fc6f4c;
  auVar50._8_4_ = auVar36._8_4_ & _DAT_145fc6f4c;
  auVar50._12_4_ = auVar36._12_4_ & _DAT_145fc6f4c;
  auVar50 = vcmpps_avx(auVar50,auVar70,0x11);
  uVar11 = vmovmskps_avx(auVar50);
  if ((~(byte)uVar14 & 7) != 0) {
    auVar37 = auVar19;
  }
  auVar19 = *(undefined1 (*) [16])(lVar3 + 0x1c0 + uVar13);
  auVar79 = ZEXT1664(auVar19);
  if ((~(byte)uVar11 & 7) != 0) {
    auVar36 = auVar19;
  }
  auVar37 = vsubps_avx(auVar36,auVar37);
  auVar19._0_4_ = auVar37._0_4_ * auVar37._0_4_;
  auVar19._4_4_ = auVar37._4_4_ * auVar37._4_4_;
  auVar19._8_4_ = auVar37._8_4_ * auVar37._8_4_;
  auVar19._12_4_ = auVar37._12_4_ * auVar37._12_4_;
  auVar37 = vblendps_avx(auVar19,ZEXT816(0) << 0x20,8);
  auVar37 = vhaddps_avx(auVar37,auVar37);
  auVar19 = vhaddps_avx(auVar37,auVar37);
  auVar37 = vrsqrtss_avx(auVar19,auVar19);
  fVar17 = auVar37._0_4_;
  auVar37 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar19,2);
  fVar17 = (float)(auVar37._0_4_ &
                  (uint)(((fVar17 * fVar17 * auVar19._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) *
                          fVar17 + fVar17) * auVar19._0_4_));
  param_4[0x11] = (uint)fVar17;
  uVar1 = (ushort)param_4[4];
  uVar2 = (ushort)param_4[0x12];
  bVar15 = false;
  if ((uVar1 != 0xffff) && (bVar15 = false, (int)(uint)uVar1 < param_2)) {
    if (*(ushort *)(lVar3 + 0x102c8 + (ulonglong)((uint)uVar1 * 0x50)) == param_3) {
      bVar15 = (*(uint *)(lVar3 + (ulonglong)((uint)uVar1 * 0x50) + 0x1028c) & 3) == 1;
    }
    else {
      bVar15 = false;
    }
  }
  bVar16 = false;
  if ((uVar2 != 0xffff) && ((int)(uint)uVar2 < param_2)) {
    if (*(ushort *)(lVar3 + 0x10290 + (ulonglong)((uint)uVar2 * 0x50)) == param_3) {
      bVar16 = (*(uint *)(lVar3 + (ulonglong)((uint)uVar2 * 0x50) + 0x1028c) & 3) == 1;
    }
    else {
      bVar16 = false;
    }
  }
  if ((!bVar15 && !bVar16) && (fVar17 <= _DAT_14615a6b8)) {
    return;
  }
  auVar37._8_8_ = 0;
  auVar37._0_8_ = *(ulonglong *)(lVar3 + 0x21c8 + uVar10 * 8);
  auVar60._8_8_ = 0;
  auVar60._0_8_ = *(ulonglong *)(lVar3 + 0x21c8 + uVar9 * 8);
  auVar37 = vshufps_avx(auVar37,ZEXT416(*(uint *)(lVar3 + 0x21c8 + uVar10 * 8)),0x14);
  auVar19 = vsubps_avx(*(undefined1 (*) [16])(lVar3 + 0x1c0 + uVar12),auVar37);
  auVar80 = ZEXT1664(auVar19);
  auVar37 = vshufps_avx(auVar60,ZEXT416(*(uint *)(lVar3 + 0x21c8 + uVar9 * 8)),0x14);
  auVar37 = vsubps_avx(*(undefined1 (*) [16])(lVar3 + 0x1c0 + uVar13),auVar37);
  auVar81 = ZEXT1664(auVar37);
  auVar19 = vsubps_avx(auVar37,auVar19);
  auVar83 = ZEXT1664(auVar19);
  auVar37 = vcmpps_avx(auVar19,ZEXT816(0) << 0x20,0);
  uVar11 = vmovmskps_avx(auVar37);
  if ((~(byte)uVar11 & 7) != 0) {
    auVar71._4_4_ = _DAT_145fc6f70;
    auVar71._0_4_ = _DAT_145fc6f70;
    auVar71._8_4_ = _DAT_145fc6f70;
    auVar71._12_4_ = _DAT_145fc6f70;
    auVar72 = ZEXT1664(auVar71);
    auVar20._0_4_ = auVar19._0_4_ & uVar73;
    auVar20._4_4_ = auVar19._4_4_ & uVar73;
    auVar20._8_4_ = auVar19._8_4_ & uVar73;
    auVar20._12_4_ = auVar19._12_4_ & uVar73;
    auVar37 = vcmpps_avx(auVar20,auVar71,0x11);
    uVar11 = vmovmskps_avx(auVar37);
    if ((~(byte)uVar11 & 7) == 0) {
      auVar37 = vmovshdup_avx(auVar19);
      auVar21._0_4_ = auVar19._0_4_ ^ _DAT_145fc6f10;
      auVar21._4_4_ = auVar19._4_4_ ^ _DAT_145fc6f10;
      auVar21._8_4_ = auVar19._8_4_ ^ _DAT_145fc6f10;
      auVar21._12_4_ = auVar19._12_4_ ^ _DAT_145fc6f10;
      auVar37 = vunpcklps_avx(auVar37,auVar21);
      auVar37 = vinsertps_avx(auVar37,auVar19,0x74);
      fVar17 = auVar37._0_4_;
      auVar38._0_4_ = fVar17 * fVar17;
      fVar30 = auVar37._4_4_;
      auVar38._4_4_ = fVar30 * fVar30;
      fVar32 = auVar37._8_4_;
      auVar38._8_4_ = fVar32 * fVar32;
      fVar34 = auVar37._12_4_;
      auVar38._12_4_ = fVar34 * fVar34;
      auVar37 = vblendps_avx(auVar38,ZEXT816(0) << 0x20,8);
      auVar37 = vhaddps_avx(auVar37,auVar37);
      auVar37 = vhaddps_avx(auVar37,auVar37);
      auVar37 = vrsqrtps_avx(auVar37);
      auVar72 = ZEXT1664(CONCAT412(auVar37._12_4_ * fVar34,
                                   CONCAT48(auVar37._8_4_ * fVar32,
                                            CONCAT44(auVar37._4_4_ * fVar30,auVar37._0_4_ * fVar17))
                                  ));
    }
  }
  uVar85 = CONCAT44((int)((ulonglong)in_stack_fffffffffffffe50 >> 0x20),param_2);
  cStack_179 = '\0';
  aauStack_d8[0] = auVar72._0_16_;
  uVar75 = uVar73;
  uVar76 = uVar73;
  uVar77 = uVar73;
  cVar8 = FUN_144f10270(param_1,uVar1,param_4,aauStack_d8,0,uVar85,auStack_138,auStack_178,
                        &cStack_179,1);
  uVar11 = (undefined4)((ulonglong)uVar85 >> 0x20);
  auVar37 = auVar83._0_16_;
  if (cVar8 == '\0') goto LAB_140089300;
  auVar19 = *(undefined1 (*) [16])(param_4 + 8);
  auVar26._4_4_ = _DAT_145fc6f70;
  auVar26._0_4_ = _DAT_145fc6f70;
  auVar26._8_4_ = _DAT_145fc6f70;
  auVar26._12_4_ = _DAT_145fc6f70;
  auStack_148 = auVar80._0_16_;
  auVar54._0_4_ = auVar19._0_4_ & uVar73;
  auVar54._4_4_ = auVar19._4_4_ & uVar75;
  auVar54._8_4_ = auVar19._8_4_ & uVar76;
  auVar54._12_4_ = auVar19._12_4_ & uVar77;
  auVar36 = vcmpps_avx(auVar54,auVar26,0x11);
  uVar14 = vmovmskps_avx(auVar36);
  if ((~(byte)uVar14 & 7) == 0) {
    uVar9 = (ulonglong)((ushort)*param_4 & 0x3fff);
    auVar64._8_8_ = 0;
    auVar64._0_8_ = *(ulonglong *)(lVar3 + 0x21c8 + uVar9 * 8);
    auVar37 = vshufps_avx(auVar64,ZEXT416(*(uint *)(lVar3 + 0x21c8 + uVar9 * 8)),0x14);
    auStack_148 = vsubps_avx(auVar19,auVar37);
    auVar37 = vsubps_avx(auVar81._0_16_,auStack_148);
  }
  auVar83 = ZEXT1664(auStack_148);
  auVar43._0_4_ = auVar37._0_4_ * auVar37._0_4_;
  auVar43._4_4_ = auVar37._4_4_ * auVar37._4_4_;
  auVar43._8_4_ = auVar37._8_4_ * auVar37._8_4_;
  auVar43._12_4_ = auVar37._12_4_ * auVar37._12_4_;
  auVar37 = vblendps_avx(auVar43,ZEXT816(0) << 0x20,8);
  auVar37 = vhaddps_avx(auVar37,auVar37);
  auVar37 = vhaddps_avx(auVar37,auVar37);
  if (_DAT_14615d380 <= auVar37._0_4_) {
    auVar19 = vsubps_avx(auVar79._0_16_,auVar78._0_16_);
    auVar37 = vcmpps_avx(auVar19,ZEXT816(0) << 0x20,0);
    uVar11 = vmovmskps_avx(auVar37);
    auStack_168 = auVar26;
    if ((~(byte)uVar11 & 7) != 0) {
      auStack_168._4_4_ = (float)_DAT_145fc6f70;
      auStack_168._0_4_ = (float)_DAT_145fc6f70;
      auStack_168._8_4_ = (float)_DAT_145fc6f70;
      auStack_168._12_4_ = (float)_DAT_145fc6f70;
      auVar59._0_4_ = auVar19._0_4_ & uVar73;
      auVar59._4_4_ = auVar19._4_4_ & uVar75;
      auVar59._8_4_ = auVar19._8_4_ & uVar76;
      auVar59._12_4_ = auVar19._12_4_ & uVar77;
      auVar37 = vcmpps_avx(auVar59,auStack_168,0x11);
      uVar11 = vmovmskps_avx(auVar37);
      if ((~(byte)uVar11 & 7) == 0) {
        auVar37 = vmovshdup_avx(auVar19);
        auVar29._0_4_ = auVar19._0_4_ ^ _DAT_145fc6f10;
        auVar29._4_4_ = auVar19._4_4_ ^ _DAT_145fc6f10;
        auVar29._8_4_ = auVar19._8_4_ ^ _DAT_145fc6f10;
        auVar29._12_4_ = auVar19._12_4_ ^ _DAT_145fc6f10;
        auVar37 = vunpcklps_avx(auVar37,auVar29);
        auVar37 = vinsertps_avx(auVar37,auVar19,0x74);
        fVar17 = auVar37._0_4_;
        auVar46._0_4_ = fVar17 * fVar17;
        fVar30 = auVar37._4_4_;
        auVar46._4_4_ = fVar30 * fVar30;
        fVar32 = auVar37._8_4_;
        auVar46._8_4_ = fVar32 * fVar32;
        fVar34 = auVar37._12_4_;
        auVar46._12_4_ = fVar34 * fVar34;
        auVar37 = vblendps_avx(auVar46,ZEXT816(0) << 0x20,8);
        auVar37 = vhaddps_avx(auVar37,auVar37);
        auVar37 = vhaddps_avx(auVar37,auVar37);
        auVar37 = vrsqrtps_avx(auVar37);
        auStack_168._0_4_ = auVar37._0_4_ * fVar17;
        auStack_168._4_4_ = auVar37._4_4_ * fVar30;
        auStack_168._8_4_ = auVar37._8_4_ * fVar32;
        auStack_168._12_4_ = auVar37._12_4_ * fVar34;
      }
    }
LAB_140089742:
    auVar37 = auVar81._0_16_;
  }
  else {
    auStack_e8 = auVar72._0_16_;
    cVar8 = FUN_144f10270(param_1,param_3,param_4,auStack_e8,1,CONCAT44(uVar11,param_2),auStack_158,
                          auStack_168,&cStack_179,0);
    auVar37 = auStack_158;
    if (cVar8 == '\0') goto LAB_140089742;
  }
  auVar84 = ZEXT1664(auVar37);
  puVar86 = &uStack_f8;
  uStack_f8 = auStack_168._0_8_;
  uStack_f0 = auStack_168._8_8_;
  FUN_140089a50(auStack_138,auStack_148,auStack_158,auStack_178._0_4_,auStack_178._4_4_,puVar86);
  uVar11 = (undefined4)((ulonglong)puVar86 >> 0x20);
  auVar37 = vsubps_avx(auStack_138,auVar84._0_16_);
  auVar55._0_4_ = auVar37._0_4_ * auVar37._0_4_;
  auVar55._4_4_ = auVar37._4_4_ * auVar37._4_4_;
  auVar55._8_4_ = auVar37._8_4_ * auVar37._8_4_;
  auVar55._12_4_ = auVar37._12_4_ * auVar37._12_4_;
  auVar37 = vblendps_avx(auVar55,ZEXT816(0) << 0x20,8);
  auVar37 = vhaddps_avx(auVar37,auVar37);
  auVar37 = vhaddps_avx(auVar37,auVar37);
  if (_DAT_14615af54 <= auVar37._0_4_) {
    auVar37 = vsubps_avx(auStack_138,auVar83._0_16_);
    fVar17 = auVar37._0_4_;
    auVar56._0_4_ = fVar17 * fVar17;
    fVar30 = auVar37._4_4_;
    auVar56._4_4_ = fVar30 * fVar30;
    fVar32 = auVar37._8_4_;
    auVar56._8_4_ = fVar32 * fVar32;
    fVar34 = auVar37._12_4_;
    auVar56._12_4_ = fVar34 * fVar34;
    auVar37 = vblendps_avx(auVar56,ZEXT816(0) << 0x20,8);
    auVar37 = vhaddps_avx(auVar37,auVar37);
    auVar37 = vhaddps_avx(auVar37,auVar37);
    if (_DAT_14615af54 <= auVar37._0_4_) {
      auVar19 = vsubps_avx(auVar84._0_16_,auVar83._0_16_);
      auVar69._0_12_ = ZEXT812(0);
      auVar69._12_4_ = 0;
      fVar18 = auVar19._0_4_;
      auVar65._0_4_ = fVar18 * fVar18;
      fVar31 = auVar19._4_4_;
      auVar65._4_4_ = fVar31 * fVar31;
      fVar33 = auVar19._8_4_;
      auVar65._8_4_ = fVar33 * fVar33;
      fVar35 = auVar19._12_4_;
      auVar65._12_4_ = fVar35 * fVar35;
      auVar19 = vblendps_avx(auVar65,auVar69,8);
      auVar19 = vhaddps_avx(auVar19,auVar19);
      auVar19 = vhaddps_avx(auVar19,auVar19);
      if (_DAT_14615af54 <= auVar19._0_4_) {
        auVar36 = vcmpps_avx(ZEXT416(_DAT_14615b348),auVar19,1);
        auVar50 = vcmpps_avx(ZEXT416(_DAT_14615b348),auVar37,1);
        if (((auVar50._0_4_ & auVar36._0_4_ & 1) != 0) || (cStack_179 != '\0')) {
          auVar36 = vrsqrtps_avx(auVar37);
          fVar4 = auVar36._0_4_;
          fVar5 = auVar36._4_4_;
          fVar6 = auVar36._8_4_;
          fVar7 = auVar36._12_4_;
          auVar82._0_4_ =
               ((_DAT_145fc6f08 * fVar4 * fVar4 * auVar37._0_4_ - _DAT_145fc6f08) * fVar4 + fVar4) *
               fVar17;
          auVar82._4_4_ =
               ((_DAT_145fc6f08 * fVar5 * fVar5 * auVar37._4_4_ - _DAT_145fc6f08) * fVar5 + fVar5) *
               fVar30;
          auVar82._8_4_ =
               ((_DAT_145fc6f08 * fVar6 * fVar6 * auVar37._8_4_ - _DAT_145fc6f08) * fVar6 + fVar6) *
               fVar32;
          auVar82._12_4_ =
               ((_DAT_145fc6f08 * fVar7 * fVar7 * auVar37._12_4_ - _DAT_145fc6f08) * fVar7 + fVar7)
               * fVar34;
          auVar83 = ZEXT1664(auVar82);
          auVar37 = vrsqrtps_avx(auVar19);
          fVar17 = auVar37._0_4_;
          fVar30 = auVar37._4_4_;
          fVar32 = auVar37._8_4_;
          fVar34 = auVar37._12_4_;
          fVar18 = ((_DAT_145fc6f08 * fVar17 * fVar17 * auVar19._0_4_ - _DAT_145fc6f08) * fVar17 +
                   fVar17) * fVar18;
          fVar31 = ((_DAT_145fc6f08 * fVar30 * fVar30 * auVar19._4_4_ - _DAT_145fc6f08) * fVar30 +
                   fVar30) * fVar31;
          fVar33 = ((_DAT_145fc6f08 * fVar32 * fVar32 * auVar19._8_4_ - _DAT_145fc6f08) * fVar32 +
                   fVar32) * fVar33;
          fVar35 = ((_DAT_145fc6f08 * fVar34 * fVar34 * auVar19._12_4_ - _DAT_145fc6f08) * fVar34 +
                   fVar34) * fVar35;
          auVar44._0_4_ = auVar82._0_4_ * auVar82._0_4_;
          auVar44._4_4_ = auVar82._4_4_ * auVar82._4_4_;
          auVar44._8_4_ = auVar82._8_4_ * auVar82._8_4_;
          auVar44._12_4_ = auVar82._12_4_ * auVar82._12_4_;
          auVar37 = vhaddps_avx(auVar44,auVar44);
          auVar45._0_4_ = auVar37._0_4_;
          auVar45._4_4_ = auVar45._0_4_;
          auVar45._8_4_ = auVar45._0_4_;
          auVar45._12_4_ = auVar45._0_4_;
          auVar37 = vrsqrtps_avx(auVar45);
          fVar17 = auVar37._0_4_;
          fVar32 = auVar37._4_4_;
          fVar4 = auVar37._8_4_;
          fVar6 = auVar37._12_4_;
          auVar57._0_4_ = fVar18 * fVar18;
          auVar57._4_4_ = fVar31 * fVar31;
          auVar57._8_4_ = fVar33 * fVar33;
          auVar57._12_4_ = fVar35 * fVar35;
          auVar37 = vhaddps_avx(auVar57,auVar57);
          auVar58._0_4_ = auVar37._0_4_;
          auVar58._4_4_ = auVar58._0_4_;
          auVar58._8_4_ = auVar58._0_4_;
          auVar58._12_4_ = auVar58._0_4_;
          auVar37 = vrsqrtps_avx(auVar58);
          fVar30 = auVar37._0_4_;
          fVar34 = auVar37._4_4_;
          fVar5 = auVar37._8_4_;
          fVar7 = auVar37._12_4_;
          auVar67._4_4_ = _DAT_145fc6f48;
          auVar67._0_4_ = _DAT_145fc6f48;
          auVar67._8_4_ = _DAT_145fc6f48;
          auVar67._12_4_ = _DAT_145fc6f48;
          auVar27._0_4_ =
               auVar82._0_4_ * fVar18 *
               ((_DAT_145fc6f08 * fVar17 * fVar17 * auVar45._0_4_ - _DAT_145fc6f08) * fVar17 +
               fVar17) * ((_DAT_145fc6f08 * fVar30 * fVar30 * auVar58._0_4_ - _DAT_145fc6f08) *
                          fVar30 + fVar30);
          auVar27._4_4_ =
               auVar82._4_4_ * fVar31 *
               ((_DAT_145fc6f08 * fVar32 * fVar32 * auVar45._0_4_ - _DAT_145fc6f08) * fVar32 +
               fVar32) * ((_DAT_145fc6f08 * fVar34 * fVar34 * auVar58._0_4_ - _DAT_145fc6f08) *
                          fVar34 + fVar34);
          auVar27._8_4_ =
               auVar82._8_4_ * fVar33 *
               ((_DAT_145fc6f08 * fVar4 * fVar4 * auVar45._0_4_ - _DAT_145fc6f08) * fVar4 + fVar4) *
               ((_DAT_145fc6f08 * fVar5 * fVar5 * auVar58._0_4_ - _DAT_145fc6f08) * fVar5 + fVar5);
          auVar27._12_4_ =
               auVar82._12_4_ * fVar35 *
               ((_DAT_145fc6f08 * fVar6 * fVar6 * auVar45._0_4_ - _DAT_145fc6f08) * fVar6 + fVar6) *
               ((_DAT_145fc6f08 * fVar7 * fVar7 * auVar58._0_4_ - _DAT_145fc6f08) * fVar7 + fVar7);
          auVar37 = vhaddps_avx(auVar27,auVar27);
          auVar19 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar37);
          auVar37 = vcmpss_avx(auVar37,ZEXT416((uint)_DAT_145fc6f48),1);
          auVar37 = vblendvps_avx(auVar19,auVar67,auVar37);
          if (_DAT_145fc6f48 < auVar37._0_4_) {
            if (auVar37._0_4_ < _DAT_145fc6ed8) {
              fVar17 = (float)func_0x000145f40740();
              auVar82 = auVar83._0_16_;
              if (_DAT_146171440 <= fVar17 * _DAT_146159c20) goto LAB_140089300;
            }
            auVar28._0_4_ = auVar82._0_4_ * auVar72._0_4_;
            auVar28._4_4_ = auVar82._4_4_ * auVar72._4_4_;
            auVar28._8_4_ = auVar82._8_4_ * auVar72._8_4_;
            auVar28._12_4_ = auVar82._12_4_ * auVar72._12_4_;
            auVar37 = vblendps_avx(auVar28,ZEXT416(0) << 0x20,8);
            auVar37 = vhaddps_avx(auVar37,auVar37);
            auVar37 = vhaddps_avx(auVar37,auVar37);
            if (0.0 < auVar37._0_4_) {
              *(byte *)(param_4 + 3) = (byte)param_4[3] | 0x80;
            }
          }
        }
      }
    }
  }
LAB_140089300:
  cStack_179 = '\0';
  auStack_108 = auVar72._0_16_;
  cVar8 = FUN_144f10270(param_1,(ushort)param_4[0x12],param_4,auStack_108,1,CONCAT44(uVar11,param_2)
                        ,auStack_158,auStack_168,&cStack_179,1);
  if (cVar8 != '\0') {
    auVar37 = *(undefined1 (*) [16])(param_4 + 0xc);
    auVar61._4_4_ = (float)_DAT_145fc6f70;
    auVar61._0_4_ = (float)_DAT_145fc6f70;
    auVar61._8_4_ = (float)_DAT_145fc6f70;
    auVar61._12_4_ = (float)_DAT_145fc6f70;
    auVar39._0_4_ = auVar37._0_4_ & uVar73;
    auVar39._4_4_ = auVar37._4_4_ & uVar75;
    auVar39._8_4_ = auVar37._8_4_ & uVar76;
    auVar39._12_4_ = auVar37._12_4_ & uVar77;
    auVar19 = vcmpps_avx(auVar39,auVar61,0x11);
    uVar11 = vmovmskps_avx(auVar19);
    if ((~(byte)uVar11 & 7) == 0) {
      uVar9 = (ulonglong)((ushort)param_4[1] & 0x3fff);
      auVar51._8_8_ = 0;
      auVar51._0_8_ = *(ulonglong *)(lVar3 + 0x21c8 + uVar9 * 8);
      auVar19 = vshufps_avx(auVar51,ZEXT416(*(uint *)(lVar3 + 0x21c8 + uVar9 * 8)),0x14);
      auVar37 = vsubps_avx(auVar37,auVar19);
      auVar81 = ZEXT1664(auVar37);
    }
    auStack_148 = auVar81._0_16_;
    auVar37 = vsubps_avx(auVar80._0_16_,auStack_148);
    auVar22._0_4_ = auVar37._0_4_ * auVar37._0_4_;
    auVar22._4_4_ = auVar37._4_4_ * auVar37._4_4_;
    auVar22._8_4_ = auVar37._8_4_ * auVar37._8_4_;
    auVar22._12_4_ = auVar37._12_4_ * auVar37._12_4_;
    auVar37 = vblendps_avx(auVar22,ZEXT816(0) << 0x20,8);
    auVar37 = vhaddps_avx(auVar37,auVar37);
    auVar37 = vhaddps_avx(auVar37,auVar37);
    if (_DAT_14615d380 <= auVar37._0_4_) {
      auVar19 = vsubps_avx(auVar79._0_16_,auVar78._0_16_);
      auVar37 = vcmpps_avx(auVar19,ZEXT816(0) << 0x20,0);
      uVar11 = vmovmskps_avx(auVar37);
      if ((~(byte)uVar11 & 7) != 0) {
        auVar47._0_4_ = auVar19._0_4_ & uVar73;
        auVar47._4_4_ = auVar19._4_4_ & uVar75;
        auVar47._8_4_ = auVar19._8_4_ & uVar76;
        auVar47._12_4_ = auVar19._12_4_ & uVar77;
        auVar37 = vcmpps_avx(auVar47,auVar61,0x11);
        uVar11 = vmovmskps_avx(auVar37);
        if ((~(byte)uVar11 & 7) == 0) {
          auVar37 = vmovshdup_avx(auVar19);
          auVar48._0_4_ = auVar19._0_4_ ^ _DAT_145fc6f10;
          auVar48._4_4_ = auVar19._4_4_ ^ _DAT_145fc6f10;
          auVar48._8_4_ = auVar19._8_4_ ^ _DAT_145fc6f10;
          auVar48._12_4_ = auVar19._12_4_ ^ _DAT_145fc6f10;
          auVar37 = vunpcklps_avx(auVar37,auVar48);
          auVar37 = vinsertps_avx(auVar37,auVar19,0x74);
          fVar17 = auVar37._0_4_;
          auVar49._0_4_ = fVar17 * fVar17;
          fVar30 = auVar37._4_4_;
          auVar49._4_4_ = fVar30 * fVar30;
          fVar32 = auVar37._8_4_;
          auVar49._8_4_ = fVar32 * fVar32;
          fVar34 = auVar37._12_4_;
          auVar49._12_4_ = fVar34 * fVar34;
          auVar37 = vblendps_avx(auVar49,ZEXT816(0) << 0x20,8);
          auVar37 = vhaddps_avx(auVar37,auVar37);
          auVar37 = vhaddps_avx(auVar37,auVar37);
          auVar37 = vrsqrtps_avx(auVar37);
          auVar61._0_4_ = auVar37._0_4_ * fVar17;
          auVar61._4_4_ = auVar37._4_4_ * fVar30;
          auVar61._8_4_ = auVar37._8_4_ * fVar32;
          auVar61._12_4_ = auVar37._12_4_ * fVar34;
        }
      }
      uVar9 = auVar61._0_8_;
      auVar37 = vmovshdup_avx(auVar61);
      uVar11 = auVar37._0_4_;
    }
    else {
      auStack_118 = auVar72._0_16_;
      cVar8 = FUN_144f10270(param_1,param_3,param_4,auStack_118,0,param_2,auStack_138,auStack_178,
                            &cStack_179,0);
      if (cVar8 != '\0') {
        auVar80 = ZEXT1664(auStack_138);
      }
      uVar9 = (ulonglong)(uint)auStack_178._0_4_;
      auVar61 = auStack_178;
      uVar11 = auStack_178._4_4_;
    }
    auStack_178 = auVar61;
    uStack_128 = auStack_168._0_8_;
    uStack_120 = auStack_168._8_8_;
    FUN_140089a50(auStack_138,auStack_148,auStack_158,uVar9,uVar11,&uStack_128);
    auVar19 = auVar72._0_16_;
    auVar40._0_12_ = ZEXT812(0);
    auVar40._12_4_ = 0;
    auVar37 = vsubps_avx(auVar80._0_16_,auStack_158);
    auVar23._0_4_ = auVar37._0_4_ * auVar37._0_4_;
    auVar23._4_4_ = auVar37._4_4_ * auVar37._4_4_;
    auVar23._8_4_ = auVar37._8_4_ * auVar37._8_4_;
    auVar23._12_4_ = auVar37._12_4_ * auVar37._12_4_;
    auVar37 = vblendps_avx(auVar23,auVar40,8);
    auVar37 = vhaddps_avx(auVar37,auVar37);
    auVar37 = vhaddps_avx(auVar37,auVar37);
    if (_DAT_14615af54 <= auVar37._0_4_) {
      auVar37 = vsubps_avx(auVar80._0_16_,auVar81._0_16_);
      fVar17 = auVar37._0_4_;
      auVar62._0_4_ = fVar17 * fVar17;
      fVar30 = auVar37._4_4_;
      auVar62._4_4_ = fVar30 * fVar30;
      fVar32 = auVar37._8_4_;
      auVar62._8_4_ = fVar32 * fVar32;
      fVar34 = auVar37._12_4_;
      auVar62._12_4_ = fVar34 * fVar34;
      auVar37 = vblendps_avx(auVar62,auVar40,8);
      auVar37 = vhaddps_avx(auVar37,auVar37);
      auVar37 = vhaddps_avx(auVar37,auVar37);
      if (_DAT_14615af54 <= auVar37._0_4_) {
        auVar36 = vsubps_avx(auStack_158,auVar81._0_16_);
        auVar68._0_12_ = ZEXT812(0);
        auVar68._12_4_ = 0;
        fVar18 = auVar36._0_4_;
        auVar63._0_4_ = fVar18 * fVar18;
        fVar31 = auVar36._4_4_;
        auVar63._4_4_ = fVar31 * fVar31;
        fVar33 = auVar36._8_4_;
        auVar63._8_4_ = fVar33 * fVar33;
        fVar35 = auVar36._12_4_;
        auVar63._12_4_ = fVar35 * fVar35;
        auVar36 = vblendps_avx(auVar63,auVar68,8);
        auVar36 = vhaddps_avx(auVar36,auVar36);
        auVar36 = vhaddps_avx(auVar36,auVar36);
        if (_DAT_14615af54 <= auVar36._0_4_) {
          auVar50 = vcmpps_avx(ZEXT416(_DAT_14615b348),auVar36,1);
          auVar70 = vcmpps_avx(ZEXT416(_DAT_14615b348),auVar37,1);
          if (((auVar70._0_4_ & auVar50._0_4_ & 1) != 0) || (cStack_179 != '\0')) {
            auVar50 = vrsqrtps_avx(auVar36);
            fVar4 = auVar50._0_4_;
            fVar5 = auVar50._4_4_;
            fVar6 = auVar50._8_4_;
            fVar7 = auVar50._12_4_;
            auVar74._0_4_ =
                 ((_DAT_145fc6f08 * fVar4 * fVar4 * auVar36._0_4_ - _DAT_145fc6f08) * fVar4 + fVar4)
                 * fVar18;
            auVar74._4_4_ =
                 ((_DAT_145fc6f08 * fVar5 * fVar5 * auVar36._4_4_ - _DAT_145fc6f08) * fVar5 + fVar5)
                 * fVar31;
            auVar74._8_4_ =
                 ((_DAT_145fc6f08 * fVar6 * fVar6 * auVar36._8_4_ - _DAT_145fc6f08) * fVar6 + fVar6)
                 * fVar33;
            auVar74._12_4_ =
                 ((_DAT_145fc6f08 * fVar7 * fVar7 * auVar36._12_4_ - _DAT_145fc6f08) * fVar7 + fVar7
                 ) * fVar35;
            auVar78 = ZEXT1664(auVar74);
            auVar36 = vrsqrtps_avx(auVar37);
            fVar18 = auVar36._0_4_;
            fVar31 = auVar36._4_4_;
            fVar33 = auVar36._8_4_;
            fVar35 = auVar36._12_4_;
            fVar17 = ((_DAT_145fc6f08 * fVar18 * fVar18 * auVar37._0_4_ - _DAT_145fc6f08) * fVar18 +
                     fVar18) * fVar17;
            fVar30 = ((_DAT_145fc6f08 * fVar31 * fVar31 * auVar37._4_4_ - _DAT_145fc6f08) * fVar31 +
                     fVar31) * fVar30;
            fVar32 = ((_DAT_145fc6f08 * fVar33 * fVar33 * auVar37._8_4_ - _DAT_145fc6f08) * fVar33 +
                     fVar33) * fVar32;
            fVar34 = ((_DAT_145fc6f08 * fVar35 * fVar35 * auVar37._12_4_ - _DAT_145fc6f08) * fVar35
                     + fVar35) * fVar34;
            auVar41._0_4_ = fVar17 * fVar17;
            auVar41._4_4_ = fVar30 * fVar30;
            auVar41._8_4_ = fVar32 * fVar32;
            auVar41._12_4_ = fVar34 * fVar34;
            auVar37 = vhaddps_avx(auVar41,auVar41);
            auVar42._0_4_ = auVar37._0_4_;
            auVar42._4_4_ = auVar42._0_4_;
            auVar42._8_4_ = auVar42._0_4_;
            auVar42._12_4_ = auVar42._0_4_;
            auVar37 = vrsqrtps_avx(auVar42);
            fVar18 = auVar37._0_4_;
            fVar33 = auVar37._4_4_;
            fVar4 = auVar37._8_4_;
            fVar6 = auVar37._12_4_;
            auVar52._0_4_ = auVar74._0_4_ * auVar74._0_4_;
            auVar52._4_4_ = auVar74._4_4_ * auVar74._4_4_;
            auVar52._8_4_ = auVar74._8_4_ * auVar74._8_4_;
            auVar52._12_4_ = auVar74._12_4_ * auVar74._12_4_;
            auVar37 = vhaddps_avx(auVar52,auVar52);
            auVar53._0_4_ = auVar37._0_4_;
            auVar53._4_4_ = auVar53._0_4_;
            auVar53._8_4_ = auVar53._0_4_;
            auVar53._12_4_ = auVar53._0_4_;
            auVar37 = vrsqrtps_avx(auVar53);
            fVar31 = auVar37._0_4_;
            fVar35 = auVar37._4_4_;
            fVar5 = auVar37._8_4_;
            fVar7 = auVar37._12_4_;
            auVar66._4_4_ = _DAT_145fc6f48;
            auVar66._0_4_ = _DAT_145fc6f48;
            auVar66._8_4_ = _DAT_145fc6f48;
            auVar66._12_4_ = _DAT_145fc6f48;
            auVar24._0_4_ =
                 fVar17 * auVar74._0_4_ *
                 ((_DAT_145fc6f08 * fVar31 * fVar31 * auVar53._0_4_ - _DAT_145fc6f08) * fVar31 +
                 fVar31) * ((_DAT_145fc6f08 * fVar18 * fVar18 * auVar42._0_4_ - _DAT_145fc6f08) *
                            fVar18 + fVar18);
            auVar24._4_4_ =
                 fVar30 * auVar74._4_4_ *
                 ((_DAT_145fc6f08 * fVar35 * fVar35 * auVar53._0_4_ - _DAT_145fc6f08) * fVar35 +
                 fVar35) * ((_DAT_145fc6f08 * fVar33 * fVar33 * auVar42._0_4_ - _DAT_145fc6f08) *
                            fVar33 + fVar33);
            auVar24._8_4_ =
                 fVar32 * auVar74._8_4_ *
                 ((_DAT_145fc6f08 * fVar5 * fVar5 * auVar53._0_4_ - _DAT_145fc6f08) * fVar5 + fVar5)
                 * ((_DAT_145fc6f08 * fVar4 * fVar4 * auVar42._0_4_ - _DAT_145fc6f08) * fVar4 +
                   fVar4);
            auVar24._12_4_ =
                 fVar34 * auVar74._12_4_ *
                 ((_DAT_145fc6f08 * fVar7 * fVar7 * auVar53._0_4_ - _DAT_145fc6f08) * fVar7 + fVar7)
                 * ((_DAT_145fc6f08 * fVar6 * fVar6 * auVar42._0_4_ - _DAT_145fc6f08) * fVar6 +
                   fVar6);
            auVar37 = vhaddps_avx(auVar24,auVar24);
            auVar36 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar37);
            auVar37 = vcmpss_avx(auVar37,ZEXT416((uint)_DAT_145fc6f48),1);
            auVar37 = vblendvps_avx(auVar36,auVar66,auVar37);
            if (_DAT_145fc6f48 < auVar37._0_4_) {
              if (auVar37._0_4_ < _DAT_145fc6ed8) {
                fVar17 = (float)func_0x000145f40740();
                auVar74 = auVar78._0_16_;
                auVar19 = auVar72._0_16_;
                if (_DAT_146171440 <= fVar17 * _DAT_146159c20) {
                  return;
                }
              }
              auVar25._0_4_ = auVar74._0_4_ * auVar19._0_4_;
              auVar25._4_4_ = auVar74._4_4_ * auVar19._4_4_;
              auVar25._8_4_ = auVar74._8_4_ * auVar19._8_4_;
              auVar25._12_4_ = auVar74._12_4_ * auVar19._12_4_;
              auVar37 = vblendps_avx(auVar25,ZEXT416(0) << 0x20,8);
              auVar37 = vhaddps_avx(auVar37,auVar37);
              auVar37 = vhaddps_avx(auVar37,auVar37);
              if (0.0 < auVar37._0_4_) {
                *(byte *)((longlong)param_4 + 0xd) = *(byte *)((longlong)param_4 + 0xd) | 1;
              }
            }
          }
        }
      }
    }
  }
  return;
}

