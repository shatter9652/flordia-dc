// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140194de0  size: 1521 bytes
// Name:    FUN_140194de0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145026220, FUN_144e258f0, FUN_144faa640
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140194de0(longlong param_1,longlong *param_2)

{
  short sVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  char cVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
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
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  float fVar31;
  float fVar33;
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  float fVar35;
  undefined1 auVar36 [16];
  float fVar38;
  float fVar39;
  undefined1 auVar37 [64];
  undefined1 auVar40 [16];
  float fVar41;
  undefined1 auVar42 [16];
  float fVar47;
  undefined1 auVar43 [16];
  float fVar45;
  float fVar46;
  undefined1 auVar44 [64];
  float fVar48;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar49 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  undefined4 uStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  undefined1 auStack_148 [16];
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
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  
  lVar9 = func_0x0001450ed6c0(*(undefined4 *)((longlong)param_2 + 0x9c));
  if (((lVar9 != 0) && (*(char *)(lVar9 + 0x14c) == '\x02')) && (*(longlong *)(lVar9 + 0x10) != 0))
  {
    lVar10 = FUN_144e258f0();
    if (lVar10 != 0) {
      uVar11 = *(undefined8 *)(lVar10 + 0x170);
      uVar2 = *(undefined8 *)(lVar10 + 0x1a0);
      lVar10 = func_0x000144e25940(uVar11,uVar2);
      if ((lVar10 != 0) && (sVar1 = *(short *)(lVar9 + 0x148), sVar1 != -1)) {
        uVar11 = func_0x000144e25940(uVar11,uVar2);
        FUN_145026220(uVar11,(int)sVar1,auStack_148);
        auVar30 = ZEXT1664(auStack_148);
        auVar12._0_12_ = ZEXT812(0);
        auVar12._12_4_ = 0;
        auVar12 = vcmpps_avx(auStack_148,auVar12,0);
        uVar8 = vmovmskps_avx(auVar12);
        if ((~(byte)uVar8 & 7) != 0) {
          auVar37 = ZEXT1664(*(undefined1 (*) [16])(lVar9 + 0x50));
          auVar44 = ZEXT1664(*(undefined1 (*) [16])(lVar9 + 0x60));
          cVar7 = FUN_144faa640(&fStack_188,param_2,1);
          fVar6 = _DAT_145fc6ed8;
          if (cVar7 != '\0') {
            auVar13 = auVar44._0_16_;
            auVar17._0_4_ = auVar44._0_4_ + auVar44._0_4_;
            auVar17._4_4_ = auVar44._4_4_ + auVar44._4_4_;
            auVar17._8_4_ = auVar44._8_4_ + auVar44._8_4_;
            auVar17._12_4_ = auVar44._12_4_ + auVar44._12_4_;
            auVar12 = vshufps_avx(auVar13,auVar13,0xd2);
            auVar3 = vshufps_avx(auVar13,auVar13,0xff);
            auVar13 = vshufps_avx(auVar13,auVar13,0xc9);
            auVar40 = vshufps_avx(auVar17,auVar17,0xc9);
            auVar4 = vshufps_avx(auVar17,auVar17,0xd2);
            auVar26._0_4_ = auVar12._0_4_ * auVar17._0_4_ + auVar40._0_4_ * auVar3._0_4_;
            auVar26._4_4_ = auVar12._4_4_ * auVar17._4_4_ + auVar40._4_4_ * auVar3._4_4_;
            auVar26._8_4_ = auVar12._8_4_ * auVar17._8_4_ + auVar40._8_4_ * auVar3._8_4_;
            auVar26._12_4_ = auVar12._12_4_ * auVar17._12_4_ + auVar40._12_4_ * auVar3._12_4_;
            auVar42._0_4_ = -(auVar3._0_4_ * auVar4._0_4_) + auVar13._0_4_ * auVar17._0_4_;
            auVar42._4_4_ = -(auVar3._4_4_ * auVar4._4_4_) + auVar13._4_4_ * auVar17._4_4_;
            auVar42._8_4_ = -(auVar3._8_4_ * auVar4._8_4_) + auVar13._8_4_ * auVar17._8_4_;
            auVar42._12_4_ = -(auVar3._12_4_ * auVar4._12_4_) + auVar13._12_4_ * auVar17._12_4_;
            auVar3 = vshufps_avx(auVar26,auVar26,0xaa);
            auVar15 = vshufps_avx(auVar26,auVar26,0x55);
            auVar14._0_4_ =
                 -(auVar4._0_4_ * auVar12._0_4_) - (auVar13._0_4_ * auVar40._0_4_ - _DAT_145fc6ed8);
            auVar14._4_4_ =
                 -(auVar4._4_4_ * auVar12._4_4_) - (auVar13._4_4_ * auVar40._4_4_ - _DAT_145fc6ed8);
            auVar14._8_4_ =
                 -(auVar4._8_4_ * auVar12._8_4_) - (auVar13._8_4_ * auVar40._8_4_ - _DAT_145fc6ed8);
            auVar14._12_4_ =
                 -(auVar4._12_4_ * auVar12._12_4_) -
                 (auVar13._12_4_ * auVar40._12_4_ - _DAT_145fc6ed8);
            auVar12 = vshufps_avx(auVar42,auVar42,0xaa);
            fVar39 = auVar30._0_4_;
            fVar38 = auVar30._4_4_;
            fVar31 = auVar30._8_4_;
            fVar33 = auVar30._12_4_;
            auVar13 = vshufps_avx(auVar14,auVar14,0x55);
            auVar18._0_4_ =
                 fStack_128 * auVar3._0_4_ + fStack_138 * auVar13._0_4_ + auVar42._0_4_ * fVar39;
            auVar18._4_4_ =
                 fStack_124 * auVar3._4_4_ + fStack_134 * auVar13._4_4_ + auVar42._0_4_ * fVar38;
            auVar18._8_4_ =
                 fStack_120 * auVar3._8_4_ + fStack_130 * auVar13._8_4_ + auVar42._0_4_ * fVar31;
            auVar18._12_4_ =
                 fStack_11c * auVar3._12_4_ + fStack_12c * auVar13._12_4_ + auVar42._0_4_ * fVar33;
            auVar20._0_4_ =
                 fStack_128 * auVar12._0_4_ + fStack_138 * auVar15._0_4_ + auVar14._0_4_ * fVar39;
            auVar20._4_4_ =
                 fStack_124 * auVar12._4_4_ + fStack_134 * auVar15._4_4_ + auVar14._0_4_ * fVar38;
            auVar20._8_4_ =
                 fStack_120 * auVar12._8_4_ + fStack_130 * auVar15._8_4_ + auVar14._0_4_ * fVar31;
            auVar20._12_4_ =
                 fStack_11c * auVar12._12_4_ + fStack_12c * auVar15._12_4_ + auVar14._0_4_ * fVar33;
            auVar12 = vshufps_avx(auVar18,auVar18,0xd2);
            auVar3 = vshufps_avx(auVar18,auVar18,0xc9);
            auVar13 = vshufps_avx(auVar20,auVar20,0xd2);
            auVar40 = vshufps_avx(auVar20,auVar20,0xc9);
            auVar21._0_4_ = -(auVar3._0_4_ * auVar13._0_4_) + auVar40._0_4_ * auVar12._0_4_;
            auVar21._4_4_ = -(auVar3._4_4_ * auVar13._4_4_) + auVar40._4_4_ * auVar12._4_4_;
            auVar21._8_4_ = -(auVar3._8_4_ * auVar13._8_4_) + auVar40._8_4_ * auVar12._8_4_;
            auVar21._12_4_ = -(auVar3._12_4_ * auVar13._12_4_) + auVar40._12_4_ * auVar12._12_4_;
            auVar13 = vshufps_avx(auVar21,auVar21,0xd2);
            auVar40 = vshufps_avx(auVar21,auVar21,0xc9);
            auVar14 = ZEXT816(0) << 0x20;
            fVar41 = -(auVar12._0_4_ * auVar40._0_4_) + auVar13._0_4_ * auVar3._0_4_;
            fVar45 = -(auVar12._4_4_ * auVar40._4_4_) + auVar13._4_4_ * auVar3._4_4_;
            fVar46 = -(auVar12._8_4_ * auVar40._8_4_) + auVar13._8_4_ * auVar3._8_4_;
            fVar47 = -(auVar12._12_4_ * auVar40._12_4_) + auVar13._12_4_ * auVar3._12_4_;
            auVar24._0_4_ = fVar41 * fVar41;
            auVar24._4_4_ = fVar45 * fVar45;
            auVar24._8_4_ = fVar46 * fVar46;
            auVar24._12_4_ = fVar47 * fVar47;
            auVar12 = vblendps_avx(auVar24,auVar14,8);
            auVar12 = vhaddps_avx(auVar12,auVar12);
            auVar12 = vhaddps_avx(auVar12,auVar12);
            auVar3 = vrsqrtps_avx(auVar12);
            fVar35 = auVar3._0_4_;
            fVar54 = auVar3._4_4_;
            fVar55 = auVar3._8_4_;
            fVar56 = auVar3._12_4_;
            fVar41 = fVar41 * ((_DAT_145fc6f08 * fVar35 * fVar35 * auVar12._0_4_ - _DAT_145fc6f08) *
                               fVar35 + fVar35);
            fVar45 = fVar45 * ((_DAT_145fc6f08 * fVar54 * fVar54 * auVar12._4_4_ - _DAT_145fc6f08) *
                               fVar54 + fVar54);
            fVar46 = fVar46 * ((_DAT_145fc6f08 * fVar55 * fVar55 * auVar12._8_4_ - _DAT_145fc6f08) *
                               fVar55 + fVar55);
            fVar47 = fVar47 * ((_DAT_145fc6f08 * fVar56 * fVar56 * auVar12._12_4_ - _DAT_145fc6f08)
                               * fVar56 + fVar56);
            auVar25._0_4_ = auVar21._0_4_ * auVar21._0_4_;
            auVar25._4_4_ = auVar21._4_4_ * auVar21._4_4_;
            auVar25._8_4_ = auVar21._8_4_ * auVar21._8_4_;
            auVar25._12_4_ = auVar21._12_4_ * auVar21._12_4_;
            auVar12 = vblendps_avx(auVar25,auVar14,8);
            auVar12 = vhaddps_avx(auVar12,auVar12);
            auVar12 = vhaddps_avx(auVar12,auVar12);
            auVar3 = vrsqrtps_avx(auVar12);
            fVar35 = auVar3._0_4_;
            fVar54 = auVar3._4_4_;
            fVar55 = auVar3._8_4_;
            fVar56 = auVar3._12_4_;
            fVar48 = ((_DAT_145fc6f08 * fVar35 * fVar35 * auVar12._0_4_ - _DAT_145fc6f08) * fVar35 +
                     fVar35) * auVar21._0_4_;
            fVar50 = ((_DAT_145fc6f08 * fVar54 * fVar54 * auVar12._4_4_ - _DAT_145fc6f08) * fVar54 +
                     fVar54) * auVar21._4_4_;
            fVar51 = ((_DAT_145fc6f08 * fVar55 * fVar55 * auVar12._8_4_ - _DAT_145fc6f08) * fVar55 +
                     fVar55) * auVar21._8_4_;
            fVar52 = ((_DAT_145fc6f08 * fVar56 * fVar56 * auVar12._12_4_ - _DAT_145fc6f08) * fVar56
                     + fVar56) * auVar21._12_4_;
            auVar22._0_4_ = auVar18._0_4_ * auVar18._0_4_;
            auVar22._4_4_ = auVar18._4_4_ * auVar18._4_4_;
            auVar22._8_4_ = auVar18._8_4_ * auVar18._8_4_;
            auVar22._12_4_ = auVar18._12_4_ * auVar18._12_4_;
            auVar12 = vblendps_avx(auVar22,auVar14,8);
            auVar12 = vhaddps_avx(auVar12,auVar12);
            auVar12 = vhaddps_avx(auVar12,auVar12);
            auVar3 = vrsqrtps_avx(auVar12);
            fVar35 = auVar3._0_4_;
            fVar54 = auVar3._4_4_;
            fVar55 = auVar3._8_4_;
            fVar56 = auVar3._12_4_;
            auVar5._4_4_ = fStack_164;
            auVar5._0_4_ = fStack_168;
            auVar5._8_4_ = fStack_160;
            auVar5._12_4_ = uStack_15c;
            fVar53 = ((_DAT_145fc6f08 * fVar35 * fVar35 * auVar12._0_4_ - _DAT_145fc6f08) * fVar35 +
                     fVar35) * auVar18._0_4_;
            fVar54 = ((_DAT_145fc6f08 * fVar54 * fVar54 * auVar12._4_4_ - _DAT_145fc6f08) * fVar54 +
                     fVar54) * auVar18._4_4_;
            fVar55 = ((_DAT_145fc6f08 * fVar55 * fVar55 * auVar12._8_4_ - _DAT_145fc6f08) * fVar55 +
                     fVar55) * auVar18._8_4_;
            fVar56 = ((_DAT_145fc6f08 * fVar56 * fVar56 * auVar12._12_4_ - _DAT_145fc6f08) * fVar56
                     + fVar56) * auVar18._12_4_;
            auVar12 = auVar37._0_16_;
            auVar13 = vshufps_avx(auVar12,auVar12,0xaa);
            auVar40 = vshufps_avx(auVar12,auVar12,0x55);
            fVar35 = auVar37._0_4_;
            auVar3._4_4_ = fStack_174;
            auVar3._0_4_ = fStack_178;
            auVar3._8_4_ = fStack_170;
            auVar3._12_4_ = uStack_16c;
            auVar12 = *(undefined1 (*) [16])(param_2 + 10);
            auVar4._4_4_ = fStack_184;
            auVar4._0_4_ = fStack_188;
            auVar4._8_4_ = fStack_180;
            auVar4._12_4_ = uStack_17c;
            auVar15 = vunpcklps_avx(auVar3,auVar14);
            auVar3 = vunpckhps_avx(auVar3,auVar14);
            auVar16 = vunpcklps_avx(auVar4,auVar5);
            auVar4 = vunpckhps_avx(auVar4,auVar5);
            auVar4 = vunpcklps_avx(auVar4,auVar3);
            auVar5 = vunpcklps_avx(auVar16,auVar15);
            auVar3 = vunpckhps_avx(auVar16,auVar15);
            auVar28._0_4_ =
                 -(auVar4._0_4_ * fStack_150) -
                 (auVar3._0_4_ * fStack_154 + auVar5._0_4_ * fStack_158);
            auVar28._4_4_ =
                 -(auVar4._4_4_ * fStack_150) -
                 (auVar3._4_4_ * fStack_154 + auVar5._4_4_ * fStack_158);
            auVar28._8_4_ =
                 -(auVar4._8_4_ * fStack_150) -
                 (auVar3._8_4_ * fStack_154 + auVar5._8_4_ * fStack_158);
            auVar28._12_4_ =
                 -(auVar4._12_4_ * fStack_150) -
                 (auVar3._12_4_ * fStack_154 + auVar5._12_4_ * fStack_158);
            auStack_108._0_4_ = fVar48 * fStack_168 + fVar53 * fStack_178 + fVar41 * fStack_188;
            auStack_108._4_4_ = fVar50 * fStack_168 + fVar54 * fStack_178 + fVar45 * fStack_188;
            auStack_108._8_4_ = fVar51 * fStack_168 + fVar55 * fStack_178 + fVar46 * fStack_188;
            auStack_108._12_4_ = fVar52 * fStack_168 + fVar56 * fStack_178 + fVar47 * fStack_188;
            auVar19._0_4_ = fVar48 * fStack_164 + fVar53 * fStack_174 + fVar41 * fStack_184;
            auVar19._4_4_ = fVar50 * fStack_164 + fVar54 * fStack_174 + fVar45 * fStack_184;
            auVar19._8_4_ = fVar51 * fStack_164 + fVar55 * fStack_174 + fVar46 * fStack_184;
            auVar19._12_4_ = fVar52 * fStack_164 + fVar56 * fStack_174 + fVar47 * fStack_184;
            auVar4 = vshufps_avx(auVar12,auVar12,0xd2);
            auVar3 = *(undefined1 (*) [16])(param_2 + 0xc);
            auVar15 = vshufps_avx(auVar12,auVar12,0xc9);
            auVar23._0_4_ = fVar48 * fStack_160 + fVar53 * fStack_170 + fVar41 * fStack_180;
            auVar23._4_4_ = fVar50 * fStack_160 + fVar54 * fStack_170 + fVar45 * fStack_180;
            auVar23._8_4_ = fVar51 * fStack_160 + fVar55 * fStack_170 + fVar46 * fStack_180;
            auVar23._12_4_ = fVar52 * fStack_160 + fVar56 * fStack_170 + fVar47 * fStack_180;
            auVar16 = vshufps_avx(auVar28,auVar28,0x55);
            auVar5 = vshufps_avx(auVar28,auVar28,0xaa);
            auVar12 = *(undefined1 (*) [16])(param_2 + 8);
            auVar17 = vshufps_avx(auVar3,auVar3,0xd2);
            auVar18 = vshufps_avx(auVar3,auVar3,0xc9);
            auVar27._0_4_ =
                 fVar48 * auVar5._0_4_ +
                 fVar53 * auVar16._0_4_ +
                 fVar41 * auVar28._0_4_ +
                 fStack_128 * auVar13._0_4_ +
                 fStack_138 * auVar40._0_4_ + fVar39 * fVar35 + fStack_118;
            auVar27._4_4_ =
                 fVar50 * auVar5._4_4_ +
                 fVar54 * auVar16._4_4_ +
                 fVar45 * auVar28._0_4_ +
                 fStack_124 * auVar13._4_4_ +
                 fStack_134 * auVar40._4_4_ + fVar38 * fVar35 + fStack_114;
            auVar27._8_4_ =
                 fVar51 * auVar5._8_4_ +
                 fVar55 * auVar16._8_4_ +
                 fVar46 * auVar28._0_4_ +
                 fStack_120 * auVar13._8_4_ +
                 fStack_130 * auVar40._8_4_ + fVar31 * fVar35 + fStack_110;
            auVar27._12_4_ =
                 fVar52 * auVar5._12_4_ +
                 fVar56 * auVar16._12_4_ +
                 fVar47 * auVar28._0_4_ +
                 fStack_11c * auVar13._12_4_ +
                 fStack_12c * auVar40._12_4_ + fVar33 * fVar35 + fStack_10c;
            auVar13 = *(undefined1 (*) [16])(param_2 + 0xe);
            auVar40 = vpunpckhwd_avx(auVar13,auVar13);
            auVar40 = vpsrad_avx(auVar40,0x10);
            auVar40 = vcvtdq2ps_avx(auVar40);
            auVar40 = vshufpd_avx(auVar40,auVar40,3);
            auVar29._0_4_ = (-(auVar40._0_4_ * _DAT_146159c90) - auVar13._0_4_) + auVar27._0_4_;
            auVar29._4_4_ = (-(auVar40._4_4_ * _UNK_146159c94) - auVar13._4_4_) + auVar27._4_4_;
            auVar29._8_4_ = (-(auVar40._8_4_ * _UNK_146159c98) - auVar13._8_4_) + auVar27._8_4_;
            auVar29._12_4_ = (-(auVar40._12_4_ * _UNK_146159c9c) - auVar13._12_4_) + auVar27._12_4_;
            auVar13 = vshufps_avx(auVar12,auVar12,0xc9);
            auVar12 = vshufps_avx(auVar12,auVar12,0xd2);
            auVar49._0_4_ = -(auVar15._0_4_ * auVar12._0_4_) + auVar4._0_4_ * auVar13._0_4_;
            auVar49._4_4_ = -(auVar15._4_4_ * auVar12._4_4_) + auVar4._4_4_ * auVar13._4_4_;
            auVar49._8_4_ = -(auVar15._8_4_ * auVar12._8_4_) + auVar4._8_4_ * auVar13._8_4_;
            auVar49._12_4_ = -(auVar15._12_4_ * auVar12._12_4_) + auVar4._12_4_ * auVar13._12_4_;
            auVar32._0_4_ = -(auVar13._0_4_ * auVar17._0_4_) + auVar18._0_4_ * auVar12._0_4_;
            auVar32._4_4_ = -(auVar13._4_4_ * auVar17._4_4_) + auVar18._4_4_ * auVar12._4_4_;
            auVar32._8_4_ = -(auVar13._8_4_ * auVar17._8_4_) + auVar18._8_4_ * auVar12._8_4_;
            auVar32._12_4_ = -(auVar13._12_4_ * auVar17._12_4_) + auVar18._12_4_ * auVar12._12_4_;
            auVar34._0_4_ = -(auVar18._0_4_ * auVar4._0_4_) + auVar17._0_4_ * auVar15._0_4_;
            auVar34._4_4_ = -(auVar18._4_4_ * auVar4._4_4_) + auVar17._4_4_ * auVar15._4_4_;
            auVar34._8_4_ = -(auVar18._8_4_ * auVar4._8_4_) + auVar17._8_4_ * auVar15._8_4_;
            auVar34._12_4_ = -(auVar18._12_4_ * auVar4._12_4_) + auVar17._12_4_ * auVar15._12_4_;
            auVar13 = vshufps_avx(auVar29,auVar29,0x55);
            auVar36._0_4_ = auVar49._0_4_ * auVar3._0_4_;
            auVar36._4_4_ = auVar49._4_4_ * auVar3._4_4_;
            auVar36._8_4_ = auVar49._8_4_ * auVar3._8_4_;
            auVar36._12_4_ = auVar49._12_4_ * auVar3._12_4_;
            auVar12 = vblendps_avx(auVar36,auVar14,8);
            auVar12 = vhaddps_avx(auVar12,auVar12);
            auVar3 = vhaddps_avx(auVar12,auVar12);
            auVar12 = vrcpps_avx(auVar3);
            auVar43._0_4_ = (uint)auVar3._0_4_ ^ _DAT_145fc6f10;
            auVar43._4_4_ = (uint)auVar3._4_4_ ^ _DAT_145fc6f10;
            auVar43._8_4_ = (uint)auVar3._8_4_ ^ _DAT_145fc6f10;
            auVar43._12_4_ = (uint)auVar3._12_4_ ^ _DAT_145fc6f10;
            fVar35 = auVar12._0_4_;
            fVar38 = auVar12._4_4_;
            fVar54 = auVar12._8_4_;
            fVar39 = auVar12._12_4_;
            auVar12 = vcmpps_avx(auVar3,auVar43,4);
            auVar16 = vunpcklps_avx(auVar32,auVar14);
            auVar4 = vunpckhps_avx(auVar32,auVar14);
            auVar5 = vunpcklps_avx(auVar34,auVar49);
            auVar15 = vunpckhps_avx(auVar34,auVar49);
            auVar40 = vshufps_avx(auVar19,auVar19,0xaa);
            auVar17 = vunpcklps_avx(auVar5,auVar16);
            auVar18 = vunpcklps_avx(auVar15,auVar4);
            auVar16 = vunpckhps_avx(auVar5,auVar16);
            auVar4 = vshufps_avx(auStack_108,auStack_108,0x55);
            auVar15 = vshufps_avx(auStack_108,auStack_108,0xaa);
            fVar35 = (float)(auVar12._0_4_ &
                            (uint)(-((auVar3._0_4_ * fVar35 - _DAT_145fc6ed8) * fVar35) + fVar35));
            fVar38 = (float)(auVar12._4_4_ &
                            (uint)(-((auVar3._4_4_ * fVar38 - _DAT_145fc6ed8) * fVar38) + fVar38));
            fVar54 = (float)(auVar12._8_4_ &
                            (uint)(-((auVar3._8_4_ * fVar54 - _DAT_145fc6ed8) * fVar54) + fVar54));
            fVar39 = (float)(auVar12._12_4_ &
                            (uint)(-((auVar3._12_4_ * fVar39 - _DAT_145fc6ed8) * fVar39) + fVar39));
            auVar12 = vshufps_avx(auVar23,auVar23,0xaa);
            fVar31 = fVar35 * auVar17._0_4_;
            fVar55 = fVar38 * auVar17._4_4_;
            fVar33 = fVar54 * auVar17._8_4_;
            fVar56 = fVar39 * auVar17._12_4_;
            fVar41 = fVar35 * auVar16._0_4_;
            fVar45 = fVar38 * auVar16._4_4_;
            fVar46 = fVar54 * auVar16._8_4_;
            fVar47 = fVar39 * auVar16._12_4_;
            fVar35 = fVar35 * auVar18._0_4_;
            fVar38 = fVar38 * auVar18._4_4_;
            fVar54 = fVar54 * auVar18._8_4_;
            fVar39 = fVar39 * auVar18._12_4_;
            auVar3 = vshufps_avx(auVar19,auVar19,0x55);
            *(float *)(param_1 + 0x10e0) =
                 fVar35 * auVar15._0_4_ + fVar41 * auVar4._0_4_ + auStack_108._0_4_ * fVar31;
            *(float *)(param_1 + 0x10e4) =
                 fVar38 * auVar15._4_4_ + fVar45 * auVar4._4_4_ + auStack_108._0_4_ * fVar55;
            *(float *)(param_1 + 0x10e8) =
                 fVar54 * auVar15._8_4_ + fVar46 * auVar4._8_4_ + auStack_108._0_4_ * fVar33;
            *(float *)(param_1 + 0x10ec) =
                 fVar39 * auVar15._12_4_ + fVar47 * auVar4._12_4_ + auStack_108._0_4_ * fVar56;
            auVar4 = vshufps_avx(auVar23,auVar23,0x55);
            auVar15 = vshufps_avx(auVar29,auVar29,0xaa);
            *(float *)(param_1 + 0x10f0) =
                 fVar35 * auVar40._0_4_ + fVar41 * auVar3._0_4_ + auVar19._0_4_ * fVar31;
            *(float *)(param_1 + 0x10f4) =
                 fVar38 * auVar40._4_4_ + fVar45 * auVar3._4_4_ + auVar19._0_4_ * fVar55;
            *(float *)(param_1 + 0x10f8) =
                 fVar54 * auVar40._8_4_ + fVar46 * auVar3._8_4_ + auVar19._0_4_ * fVar33;
            *(float *)(param_1 + 0x10fc) =
                 fVar39 * auVar40._12_4_ + fVar47 * auVar3._12_4_ + auVar19._0_4_ * fVar56;
            *(float *)(param_1 + 0x1100) =
                 fVar35 * auVar12._0_4_ + fVar41 * auVar4._0_4_ + auVar23._0_4_ * fVar31;
            *(float *)(param_1 + 0x1104) =
                 fVar38 * auVar12._4_4_ + fVar45 * auVar4._4_4_ + auVar23._0_4_ * fVar55;
            *(float *)(param_1 + 0x1108) =
                 fVar54 * auVar12._8_4_ + fVar46 * auVar4._8_4_ + auVar23._0_4_ * fVar33;
            *(float *)(param_1 + 0x110c) =
                 fVar39 * auVar12._12_4_ + fVar47 * auVar4._12_4_ + auVar23._0_4_ * fVar56;
            *(float *)(param_1 + 0x1110) =
                 fVar35 * auVar15._0_4_ + fVar41 * auVar13._0_4_ + auVar29._0_4_ * fVar31;
            *(float *)(param_1 + 0x1114) =
                 fVar38 * auVar15._4_4_ + fVar45 * auVar13._4_4_ + auVar29._0_4_ * fVar55;
            *(float *)(param_1 + 0x1118) =
                 fVar54 * auVar15._8_4_ + fVar46 * auVar13._8_4_ + auVar29._0_4_ * fVar33;
            *(float *)(param_1 + 0x111c) =
                 fVar39 * auVar15._12_4_ + fVar47 * auVar13._12_4_ + auVar29._0_4_ * fVar56;
            auVar15._4_4_ = _DAT_14615a290;
            auVar15._0_4_ = _DAT_14615a290;
            auVar15._8_4_ = _DAT_14615a290;
            auVar15._12_4_ = _DAT_14615a290;
            auVar12 = vrcpps_avx(auVar15);
            fVar39 = auVar12._0_4_;
            fVar35 = auVar12._4_4_;
            fVar38 = auVar12._8_4_;
            fVar54 = auVar12._12_4_;
            auVar13._0_4_ = ((-(fVar39 * _DAT_14615a290) + fVar6) * fVar39 + fVar39) * auVar27._0_4_
            ;
            auVar13._4_4_ = ((-(fVar35 * _DAT_14615a290) + fVar6) * fVar35 + fVar35) * auVar27._4_4_
            ;
            auVar13._8_4_ = ((-(fVar38 * _DAT_14615a290) + fVar6) * fVar38 + fVar38) * auVar27._8_4_
            ;
            auVar13._12_4_ =
                 ((-(fVar54 * _DAT_14615a290) + fVar6) * fVar54 + fVar54) * auVar27._12_4_;
            auVar12 = vroundps_avx(auVar13,3);
            auVar16._0_4_ = -(auVar12._0_4_ * _DAT_14615a290) + auVar27._0_4_;
            auVar16._4_4_ = -(auVar12._4_4_ * _DAT_14615a290) + auVar27._4_4_;
            auVar16._8_4_ = -(auVar12._8_4_ * _DAT_14615a290) + auVar27._8_4_;
            auVar16._12_4_ = -(auVar12._12_4_ * _DAT_14615a290) + auVar27._12_4_;
            auVar40._0_4_ = (int)auVar12._0_4_;
            auVar40._4_4_ = (int)auVar12._4_4_;
            auVar40._8_4_ = (int)auVar12._8_4_;
            auVar40._12_4_ = (int)auVar12._12_4_;
            auVar3 = vpackssdw_avx(auVar40,auVar40);
            auVar12 = vblendps_avx(auVar27,auVar16,3);
            auStack_d8 = vinsertps_avx(auVar12,auVar3,0x30);
            auStack_f8 = vblendps_avx(auVar19,*(undefined1 (*) [16])(param_2 + 10),8);
            auStack_e8 = vblendps_avx(auVar23,*(undefined1 (*) [16])(param_2 + 0xc),8);
            (**(code **)(*param_2 + 0x170))(param_2,auStack_108,0,0,1);
          }
        }
      }
    }
  }
  return;
}

