// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401919c0  size: 991 bytes
// Name:    FUN_1401919c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401919c0(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
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
  short sVar25;
  short sVar41;
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
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar49 [64];
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
  lVar10 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
  fVar55 = _UNK_146159c94;
  fVar54 = _DAT_146159c90;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = *(ulonglong *)(lVar1 + 0x120);
  auVar28 = *(undefined1 (*) [16])(lVar10 + 0x70);
  auVar47._4_4_ = _DAT_14615a290;
  auVar47._0_4_ = _DAT_14615a290;
  auVar47._8_4_ = _DAT_14615a290;
  auVar47._12_4_ = _DAT_14615a290;
  auVar49 = ZEXT1664(auVar47);
  fVar56 = 0.0;
  fVar57 = 0.0;
  auVar2 = vmovlhps_avx(ZEXT416(*(uint *)(lVar1 + 0x11c)),auVar11);
  auVar2 = vshufps_avx(auVar2,auVar11,0xd8);
  auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x11c)),0x30);
  auVar12._0_4_ = auVar2._0_4_ + *(float *)(param_1 + 0x760);
  auVar12._4_4_ = auVar2._4_4_ + *(float *)(param_1 + 0x764);
  auVar12._8_4_ = auVar2._8_4_ + *(float *)(param_1 + 0x768);
  auVar12._12_4_ = auVar2._12_4_ + *(float *)(param_1 + 0x76c);
  auVar11 = vshufps_avx(auVar12,auVar12,0x55);
  auVar7 = vshufps_avx(auVar12,auVar12,0xaa);
  auVar2 = vrcpps_avx(auVar47);
  auVar26._0_4_ =
       auVar7._0_4_ * *(float *)(lVar10 + 0x60) +
       auVar11._0_4_ * *(float *)(lVar10 + 0x50) +
       auVar12._0_4_ * *(float *)(lVar10 + 0x40) + auVar28._0_4_;
  auVar26._4_4_ =
       auVar7._4_4_ * *(float *)(lVar10 + 100) +
       auVar11._4_4_ * *(float *)(lVar10 + 0x54) +
       auVar12._0_4_ * *(float *)(lVar10 + 0x44) + auVar28._4_4_;
  auVar26._8_4_ =
       auVar7._8_4_ * *(float *)(lVar10 + 0x68) +
       auVar11._8_4_ * *(float *)(lVar10 + 0x58) +
       auVar12._0_4_ * *(float *)(lVar10 + 0x48) + auVar28._8_4_;
  auVar26._12_4_ =
       auVar7._12_4_ * *(float *)(lVar10 + 0x6c) +
       auVar11._12_4_ * *(float *)(lVar10 + 0x5c) +
       auVar12._0_4_ * *(float *)(lVar10 + 0x4c) + auVar28._12_4_;
  fVar50 = auVar2._0_4_;
  fVar51 = auVar2._4_4_;
  fVar52 = auVar2._8_4_;
  fVar53 = auVar2._12_4_;
  fVar50 = (-(fVar50 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar50 + fVar50;
  fVar51 = (-(fVar51 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar51 + fVar51;
  fVar52 = (-(fVar52 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar52 + fVar52;
  fVar53 = (-(fVar53 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar53 + fVar53;
  auVar2 = vblendps_avx(auVar26,auVar28,8);
  auVar42._0_4_ = fVar50 * auVar2._0_4_;
  auVar42._4_4_ = fVar51 * auVar2._4_4_;
  auVar42._8_4_ = fVar52 * auVar2._8_4_;
  auVar42._12_4_ = fVar53 * auVar2._12_4_;
  auVar11 = vroundps_avx(auVar42,3);
  auVar13._0_4_ = -(auVar11._0_4_ * _DAT_14615a290) + auVar2._0_4_;
  auVar13._4_4_ = -(auVar11._4_4_ * _DAT_14615a290) + auVar2._4_4_;
  auVar13._8_4_ = -(auVar11._8_4_ * _DAT_14615a290) + auVar2._8_4_;
  auVar13._12_4_ = -(auVar11._12_4_ * _DAT_14615a290) + auVar2._12_4_;
  auVar2 = vblendps_avx(auVar26,auVar13,3);
  auVar27._0_4_ = (int)auVar11._0_4_;
  auVar27._4_4_ = (int)auVar11._4_4_;
  auVar27._8_4_ = (int)auVar11._8_4_;
  auVar27._12_4_ = (int)auVar11._12_4_;
  auVar11 = vpackssdw_avx(auVar27,auVar27);
  sVar25 = auVar11._0_2_;
  auVar7._0_2_ = sVar25 + auVar28._0_2_;
  sVar41 = auVar11._2_2_;
  auVar7._2_2_ = sVar41 + auVar28._2_2_;
  auVar7._4_2_ = sVar25 + auVar28._4_2_;
  auVar7._6_2_ = sVar41 + auVar28._6_2_;
  auVar7._8_2_ = sVar25 + auVar28._8_2_;
  auVar7._10_2_ = sVar41 + auVar28._10_2_;
  auVar7._12_2_ = sVar25 + auVar28._12_2_;
  auVar7._14_2_ = sVar41 + auVar28._14_2_;
  auVar2 = vpblendd_avx2(auVar2,auVar7,8);
  auVar28 = vpunpckhwd_avx(auVar2,auVar2);
  auVar28 = vpsrad_avx(auVar28,0x10);
  auVar28 = vcvtdq2ps_avx(auVar28);
  auVar28 = vshufpd_avx(auVar28,auVar28,3);
  auVar29._0_4_ = _DAT_146159c90 * auVar28._0_4_ + auVar2._0_4_;
  auVar29._4_4_ = _UNK_146159c94 * auVar28._4_4_ + auVar2._4_4_;
  auVar29._8_4_ = auVar28._8_4_ * 0.0 + auVar2._8_4_;
  auVar29._12_4_ = auVar28._12_4_ * 0.0 + auVar2._12_4_;
  *(undefined1 (*) [16])(param_1 + 0x140) = auVar29;
  uVar8 = *(undefined8 *)(param_1 + 0x140);
  uVar9 = *(undefined8 *)(param_1 + 0x148);
  *(undefined8 *)(param_1 + 0x130) = uVar8;
  *(undefined8 *)(param_1 + 0x138) = uVar9;
  *(undefined8 *)(param_1 + 0x120) = uVar8;
  *(undefined8 *)(param_1 + 0x128) = uVar9;
  *(undefined8 *)(param_1 + 0x110) = uVar8;
  *(undefined8 *)(param_1 + 0x118) = uVar9;
  *(undefined8 *)(param_1 + 0x100) = uVar8;
  *(undefined8 *)(param_1 + 0x108) = uVar9;
  *(undefined8 *)(param_1 + 0xf0) = uVar8;
  *(undefined8 *)(param_1 + 0xf8) = uVar9;
  *(undefined8 *)(param_1 + 0xe0) = uVar8;
  *(undefined8 *)(param_1 + 0xe8) = uVar9;
  lVar10 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
  auVar14._8_8_ = 0;
  auVar14._0_8_ = *(ulonglong *)(lVar1 + 0x138);
  auVar28 = *(undefined1 (*) [16])(lVar10 + 0x70);
  auVar2 = vmovlhps_avx(ZEXT416(*(uint *)(lVar1 + 0x134)),auVar14);
  auVar2 = vshufps_avx(auVar2,auVar14,0xd8);
  auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x134)),0x30);
  auVar15._0_4_ = auVar2._0_4_ + *(float *)(param_1 + 0x980);
  auVar15._4_4_ = auVar2._4_4_ + *(float *)(param_1 + 0x984);
  auVar15._8_4_ = auVar2._8_4_ + *(float *)(param_1 + 0x988);
  auVar15._12_4_ = auVar2._12_4_ + *(float *)(param_1 + 0x98c);
  auVar2 = vshufps_avx(auVar15,auVar15,0x55);
  auVar11 = vshufps_avx(auVar15,auVar15,0xaa);
  auVar30._0_4_ =
       auVar11._0_4_ * *(float *)(lVar10 + 0x60) +
       auVar2._0_4_ * *(float *)(lVar10 + 0x50) +
       auVar15._0_4_ * *(float *)(lVar10 + 0x40) + auVar28._0_4_;
  auVar30._4_4_ =
       auVar11._4_4_ * *(float *)(lVar10 + 100) +
       auVar2._4_4_ * *(float *)(lVar10 + 0x54) +
       auVar15._0_4_ * *(float *)(lVar10 + 0x44) + auVar28._4_4_;
  auVar30._8_4_ =
       auVar11._8_4_ * *(float *)(lVar10 + 0x68) +
       auVar2._8_4_ * *(float *)(lVar10 + 0x58) +
       auVar15._0_4_ * *(float *)(lVar10 + 0x48) + auVar28._8_4_;
  auVar30._12_4_ =
       auVar11._12_4_ * *(float *)(lVar10 + 0x6c) +
       auVar2._12_4_ * *(float *)(lVar10 + 0x5c) +
       auVar15._0_4_ * *(float *)(lVar10 + 0x4c) + auVar28._12_4_;
  auVar2 = vblendps_avx(auVar30,auVar28,8);
  auVar43._0_4_ = auVar2._0_4_ * fVar50;
  auVar43._4_4_ = auVar2._4_4_ * fVar51;
  auVar43._8_4_ = auVar2._8_4_ * fVar52;
  auVar43._12_4_ = auVar2._12_4_ * fVar53;
  auVar11 = vroundps_avx(auVar43,3);
  auVar16._0_4_ = -(auVar11._0_4_ * auVar49._0_4_) + auVar2._0_4_;
  auVar16._4_4_ = -(auVar11._4_4_ * auVar49._4_4_) + auVar2._4_4_;
  auVar16._8_4_ = -(auVar11._8_4_ * auVar49._8_4_) + auVar2._8_4_;
  auVar16._12_4_ = -(auVar11._12_4_ * auVar49._12_4_) + auVar2._12_4_;
  auVar2 = vblendps_avx(auVar30,auVar16,3);
  auVar31._0_4_ = (int)auVar11._0_4_;
  auVar31._4_4_ = (int)auVar11._4_4_;
  auVar31._8_4_ = (int)auVar11._8_4_;
  auVar31._12_4_ = (int)auVar11._12_4_;
  auVar11 = vpackssdw_avx(auVar31,auVar31);
  sVar25 = auVar11._0_2_;
  auVar3._0_2_ = sVar25 + auVar28._0_2_;
  sVar41 = auVar11._2_2_;
  auVar3._2_2_ = sVar41 + auVar28._2_2_;
  auVar3._4_2_ = sVar25 + auVar28._4_2_;
  auVar3._6_2_ = sVar41 + auVar28._6_2_;
  auVar3._8_2_ = sVar25 + auVar28._8_2_;
  auVar3._10_2_ = sVar41 + auVar28._10_2_;
  auVar3._12_2_ = sVar25 + auVar28._12_2_;
  auVar3._14_2_ = sVar41 + auVar28._14_2_;
  auVar2 = vpblendd_avx2(auVar2,auVar3,8);
  auVar28 = vpunpckhwd_avx(auVar2,auVar2);
  auVar28 = vpsrad_avx(auVar28,0x10);
  auVar28 = vcvtdq2ps_avx(auVar28);
  auVar28 = vshufpd_avx(auVar28,auVar28,3);
  auVar32._0_4_ = fVar54 * auVar28._0_4_ + auVar2._0_4_;
  auVar32._4_4_ = fVar55 * auVar28._4_4_ + auVar2._4_4_;
  auVar32._8_4_ = fVar56 * auVar28._8_4_ + auVar2._8_4_;
  auVar32._12_4_ = fVar57 * auVar28._12_4_ + auVar2._12_4_;
  *(undefined1 (*) [16])(param_1 + 0x170) = auVar32;
  lVar10 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *(ulonglong *)(lVar1 + 300);
  auVar28 = *(undefined1 (*) [16])(lVar10 + 0x70);
  auVar2 = vmovlhps_avx(ZEXT416(*(uint *)(lVar1 + 0x128)),auVar17);
  auVar2 = vshufps_avx(auVar2,auVar17,0xd8);
  auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x128)),0x30);
  auVar18._0_4_ = auVar2._0_4_ + *(float *)(param_1 + 0x870);
  auVar18._4_4_ = auVar2._4_4_ + *(float *)(param_1 + 0x874);
  auVar18._8_4_ = auVar2._8_4_ + *(float *)(param_1 + 0x878);
  auVar18._12_4_ = auVar2._12_4_ + *(float *)(param_1 + 0x87c);
  auVar2 = vshufps_avx(auVar18,auVar18,0x55);
  auVar11 = vshufps_avx(auVar18,auVar18,0xaa);
  auVar33._0_4_ =
       auVar11._0_4_ * *(float *)(lVar10 + 0x60) +
       auVar2._0_4_ * *(float *)(lVar10 + 0x50) +
       auVar18._0_4_ * *(float *)(lVar10 + 0x40) + auVar28._0_4_;
  auVar33._4_4_ =
       auVar11._4_4_ * *(float *)(lVar10 + 100) +
       auVar2._4_4_ * *(float *)(lVar10 + 0x54) +
       auVar18._0_4_ * *(float *)(lVar10 + 0x44) + auVar28._4_4_;
  auVar33._8_4_ =
       auVar11._8_4_ * *(float *)(lVar10 + 0x68) +
       auVar2._8_4_ * *(float *)(lVar10 + 0x58) +
       auVar18._0_4_ * *(float *)(lVar10 + 0x48) + auVar28._8_4_;
  auVar33._12_4_ =
       auVar11._12_4_ * *(float *)(lVar10 + 0x6c) +
       auVar2._12_4_ * *(float *)(lVar10 + 0x5c) +
       auVar18._0_4_ * *(float *)(lVar10 + 0x4c) + auVar28._12_4_;
  auVar2 = vblendps_avx(auVar33,auVar28,8);
  auVar44._0_4_ = auVar2._0_4_ * fVar50;
  auVar44._4_4_ = auVar2._4_4_ * fVar51;
  auVar44._8_4_ = auVar2._8_4_ * fVar52;
  auVar44._12_4_ = auVar2._12_4_ * fVar53;
  auVar11 = vroundps_avx(auVar44,3);
  auVar19._0_4_ = -(auVar11._0_4_ * auVar49._0_4_) + auVar2._0_4_;
  auVar19._4_4_ = -(auVar11._4_4_ * auVar49._4_4_) + auVar2._4_4_;
  auVar19._8_4_ = -(auVar11._8_4_ * auVar49._8_4_) + auVar2._8_4_;
  auVar19._12_4_ = -(auVar11._12_4_ * auVar49._12_4_) + auVar2._12_4_;
  auVar2 = vblendps_avx(auVar33,auVar19,3);
  auVar34._0_4_ = (int)auVar11._0_4_;
  auVar34._4_4_ = (int)auVar11._4_4_;
  auVar34._8_4_ = (int)auVar11._8_4_;
  auVar34._12_4_ = (int)auVar11._12_4_;
  auVar11 = vpackssdw_avx(auVar34,auVar34);
  sVar25 = auVar11._0_2_;
  auVar4._0_2_ = sVar25 + auVar28._0_2_;
  sVar41 = auVar11._2_2_;
  auVar4._2_2_ = sVar41 + auVar28._2_2_;
  auVar4._4_2_ = sVar25 + auVar28._4_2_;
  auVar4._6_2_ = sVar41 + auVar28._6_2_;
  auVar4._8_2_ = sVar25 + auVar28._8_2_;
  auVar4._10_2_ = sVar41 + auVar28._10_2_;
  auVar4._12_2_ = sVar25 + auVar28._12_2_;
  auVar4._14_2_ = sVar41 + auVar28._14_2_;
  auVar2 = vpblendd_avx2(auVar2,auVar4,8);
  auVar28 = vpunpckhwd_avx(auVar2,auVar2);
  auVar28 = vpsrad_avx(auVar28,0x10);
  auVar28 = vcvtdq2ps_avx(auVar28);
  auVar28 = vshufpd_avx(auVar28,auVar28,3);
  auVar35._0_4_ = fVar54 * auVar28._0_4_ + auVar2._0_4_;
  auVar35._4_4_ = fVar55 * auVar28._4_4_ + auVar2._4_4_;
  auVar35._8_4_ = fVar56 * auVar28._8_4_ + auVar2._8_4_;
  auVar35._12_4_ = fVar57 * auVar28._12_4_ + auVar2._12_4_;
  *(undefined1 (*) [16])(param_1 + 0x150) = auVar35;
  lVar10 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
  auVar20._8_8_ = 0;
  auVar20._0_8_ = *(ulonglong *)(lVar1 + 0x144);
  auVar28 = *(undefined1 (*) [16])(lVar10 + 0x70);
  auVar2 = vmovlhps_avx(ZEXT416(*(uint *)(lVar1 + 0x140)),auVar20);
  auVar2 = vshufps_avx(auVar2,auVar20,0xd8);
  auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x140)),0x30);
  auVar21._0_4_ = auVar2._0_4_ + *(float *)(param_1 + 0xa90);
  auVar21._4_4_ = auVar2._4_4_ + *(float *)(param_1 + 0xa94);
  auVar21._8_4_ = auVar2._8_4_ + *(float *)(param_1 + 0xa98);
  auVar21._12_4_ = auVar2._12_4_ + *(float *)(param_1 + 0xa9c);
  auVar2 = vshufps_avx(auVar21,auVar21,0x55);
  auVar11 = vshufps_avx(auVar21,auVar21,0xaa);
  auVar36._0_4_ =
       auVar11._0_4_ * *(float *)(lVar10 + 0x60) +
       auVar2._0_4_ * *(float *)(lVar10 + 0x50) +
       auVar21._0_4_ * *(float *)(lVar10 + 0x40) + auVar28._0_4_;
  auVar36._4_4_ =
       auVar11._4_4_ * *(float *)(lVar10 + 100) +
       auVar2._4_4_ * *(float *)(lVar10 + 0x54) +
       auVar21._0_4_ * *(float *)(lVar10 + 0x44) + auVar28._4_4_;
  auVar36._8_4_ =
       auVar11._8_4_ * *(float *)(lVar10 + 0x68) +
       auVar2._8_4_ * *(float *)(lVar10 + 0x58) +
       auVar21._0_4_ * *(float *)(lVar10 + 0x48) + auVar28._8_4_;
  auVar36._12_4_ =
       auVar11._12_4_ * *(float *)(lVar10 + 0x6c) +
       auVar2._12_4_ * *(float *)(lVar10 + 0x5c) +
       auVar21._0_4_ * *(float *)(lVar10 + 0x4c) + auVar28._12_4_;
  auVar2 = vblendps_avx(auVar36,auVar28,8);
  auVar45._0_4_ = auVar2._0_4_ * fVar50;
  auVar45._4_4_ = auVar2._4_4_ * fVar51;
  auVar45._8_4_ = auVar2._8_4_ * fVar52;
  auVar45._12_4_ = auVar2._12_4_ * fVar53;
  auVar11 = vroundps_avx(auVar45,3);
  auVar22._0_4_ = -(auVar11._0_4_ * auVar49._0_4_) + auVar2._0_4_;
  auVar22._4_4_ = -(auVar11._4_4_ * auVar49._4_4_) + auVar2._4_4_;
  auVar22._8_4_ = -(auVar11._8_4_ * auVar49._8_4_) + auVar2._8_4_;
  auVar22._12_4_ = -(auVar11._12_4_ * auVar49._12_4_) + auVar2._12_4_;
  auVar2 = vblendps_avx(auVar36,auVar22,3);
  auVar37._0_4_ = (int)auVar11._0_4_;
  auVar37._4_4_ = (int)auVar11._4_4_;
  auVar37._8_4_ = (int)auVar11._8_4_;
  auVar37._12_4_ = (int)auVar11._12_4_;
  auVar11 = vpackssdw_avx(auVar37,auVar37);
  sVar25 = auVar11._0_2_;
  auVar5._0_2_ = sVar25 + auVar28._0_2_;
  sVar41 = auVar11._2_2_;
  auVar5._2_2_ = sVar41 + auVar28._2_2_;
  auVar5._4_2_ = sVar25 + auVar28._4_2_;
  auVar5._6_2_ = sVar41 + auVar28._6_2_;
  auVar5._8_2_ = sVar25 + auVar28._8_2_;
  auVar5._10_2_ = sVar41 + auVar28._10_2_;
  auVar5._12_2_ = sVar25 + auVar28._12_2_;
  auVar5._14_2_ = sVar41 + auVar28._14_2_;
  auVar2 = vpblendd_avx2(auVar2,auVar5,8);
  auVar28 = vpunpckhwd_avx(auVar2,auVar2);
  auVar28 = vpsrad_avx(auVar28,0x10);
  auVar28 = vcvtdq2ps_avx(auVar28);
  auVar28 = vshufpd_avx(auVar28,auVar28,3);
  auVar38._0_4_ = fVar54 * auVar28._0_4_ + auVar2._0_4_;
  auVar38._4_4_ = fVar55 * auVar28._4_4_ + auVar2._4_4_;
  auVar38._8_4_ = fVar56 * auVar28._8_4_ + auVar2._8_4_;
  auVar38._12_4_ = fVar57 * auVar28._12_4_ + auVar2._12_4_;
  *(undefined1 (*) [16])(param_1 + 0x160) = auVar38;
  lVar10 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
  auVar23._8_8_ = 0;
  auVar23._0_8_ = *(ulonglong *)(lVar1 + 0x150);
  auVar28 = *(undefined1 (*) [16])(lVar10 + 0x70);
  auVar2 = vmovlhps_avx(ZEXT416(*(uint *)(lVar1 + 0x14c)),auVar23);
  auVar2 = vshufps_avx(auVar2,auVar23,0xd8);
  auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)(lVar1 + 0x14c)),0x30);
  auVar24._0_4_ = auVar2._0_4_ + *(float *)(param_1 + 0x5b0);
  auVar24._4_4_ = auVar2._4_4_ + *(float *)(param_1 + 0x5b4);
  auVar24._8_4_ = auVar2._8_4_ + *(float *)(param_1 + 0x5b8);
  auVar24._12_4_ = auVar2._12_4_ + *(float *)(param_1 + 0x5bc);
  auVar2 = vshufps_avx(auVar24,auVar24,0x55);
  auVar11 = vshufps_avx(auVar24,auVar24,0xaa);
  auVar39._0_4_ =
       auVar11._0_4_ * *(float *)(lVar10 + 0x60) +
       auVar2._0_4_ * *(float *)(lVar10 + 0x50) +
       auVar24._0_4_ * *(float *)(lVar10 + 0x40) + auVar28._0_4_;
  auVar39._4_4_ =
       auVar11._4_4_ * *(float *)(lVar10 + 100) +
       auVar2._4_4_ * *(float *)(lVar10 + 0x54) +
       auVar24._0_4_ * *(float *)(lVar10 + 0x44) + auVar28._4_4_;
  auVar39._8_4_ =
       auVar11._8_4_ * *(float *)(lVar10 + 0x68) +
       auVar2._8_4_ * *(float *)(lVar10 + 0x58) +
       auVar24._0_4_ * *(float *)(lVar10 + 0x48) + auVar28._8_4_;
  auVar39._12_4_ =
       auVar11._12_4_ * *(float *)(lVar10 + 0x6c) +
       auVar2._12_4_ * *(float *)(lVar10 + 0x5c) +
       auVar24._0_4_ * *(float *)(lVar10 + 0x4c) + auVar28._12_4_;
  auVar2 = vblendps_avx(auVar39,auVar28,8);
  auVar46._0_4_ = auVar2._0_4_ * fVar50;
  auVar46._4_4_ = auVar2._4_4_ * fVar51;
  auVar46._8_4_ = auVar2._8_4_ * fVar52;
  auVar46._12_4_ = auVar2._12_4_ * fVar53;
  auVar11 = vroundps_avx(auVar46,3);
  auVar48._0_4_ = -(auVar11._0_4_ * auVar49._0_4_) + auVar2._0_4_;
  auVar48._4_4_ = -(auVar11._4_4_ * auVar49._4_4_) + auVar2._4_4_;
  auVar48._8_4_ = -(auVar11._8_4_ * auVar49._8_4_) + auVar2._8_4_;
  auVar48._12_4_ = -(auVar11._12_4_ * auVar49._12_4_) + auVar2._12_4_;
  auVar2 = vblendps_avx(auVar39,auVar48,3);
  auVar40._0_4_ = (int)auVar11._0_4_;
  auVar40._4_4_ = (int)auVar11._4_4_;
  auVar40._8_4_ = (int)auVar11._8_4_;
  auVar40._12_4_ = (int)auVar11._12_4_;
  auVar11 = vpackssdw_avx(auVar40,auVar40);
  sVar25 = auVar11._0_2_;
  auVar6._0_2_ = sVar25 + auVar28._0_2_;
  sVar41 = auVar11._2_2_;
  auVar6._2_2_ = sVar41 + auVar28._2_2_;
  auVar6._4_2_ = sVar25 + auVar28._4_2_;
  auVar6._6_2_ = sVar41 + auVar28._6_2_;
  auVar6._8_2_ = sVar25 + auVar28._8_2_;
  auVar6._10_2_ = sVar41 + auVar28._10_2_;
  auVar6._12_2_ = sVar25 + auVar28._12_2_;
  auVar6._14_2_ = sVar41 + auVar28._14_2_;
  auVar2 = vpblendd_avx2(auVar2,auVar6,8);
  auVar28 = vpunpckhwd_avx(auVar2,auVar2);
  auVar28 = vpsrad_avx(auVar28,0x10);
  auVar28 = vcvtdq2ps_avx(auVar28);
  auVar28 = vshufpd_avx(auVar28,auVar28,3);
  *(float *)(param_1 + 0x180) = fVar54 * auVar28._0_4_ + auVar2._0_4_;
  *(float *)(param_1 + 0x184) = fVar55 * auVar28._4_4_ + auVar2._4_4_;
  *(float *)(param_1 + 0x188) = fVar56 * auVar28._8_4_ + auVar2._8_4_;
  *(float *)(param_1 + 0x18c) = fVar57 * auVar28._12_4_ + auVar2._12_4_;
  return;
}

