// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ded20  size: 1738 bytes
// Name:    FUN_1400ded20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ec6720, FUN_1400df3f0, FUN_144f67c80, FUN_144e710b0, FUN_1400d08e0, FUN_144f63ee0, FUN_144ec6670, FUN_1400d02c0, FUN_1400d0610
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ded20(longlong param_1,longlong param_2,longlong *param_3,ulonglong param_4)

{
  undefined1 (*pauVar1) [16];
  ushort uVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined1 (*pauVar12) [32];
  longlong lVar13;
  undefined2 uVar14;
  undefined1 (*pauVar15) [32];
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  short sVar20;
  short sVar28;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar37 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [64];
  float fVar48;
  undefined1 auVar49 [64];
  undefined1 auVar50 [64];
  undefined8 uStack_e28;
  undefined8 uStack_e20;
  undefined1 auStack_e18 [16];
  undefined1 auStack_e08 [8];
  undefined8 uStack_e00;
  undefined1 auStack_df8 [8];
  float fStack_df0;
  float fStack_dec;
  float fStack_de8;
  float fStack_de4;
  float fStack_de0;
  float fStack_ddc;
  undefined1 auStack_dd8 [16];
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined5 uStack_980;
  undefined8 uStack_97b;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 *puStack_8f8;
  undefined8 uStack_8f0;
  float fStack_8e8;
  float fStack_8e4;
  float fStack_8e0;
  float fStack_8dc;
  float fStack_8d8;
  float fStack_8d4;
  undefined8 auStack_8d0 [128];
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined5 uStack_488;
  undefined3 uStack_483;
  undefined4 uStack_470;
  undefined1 uStack_46c;
  undefined8 uStack_46b;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined4 uStack_2e8;
  undefined1 auStack_2e0 [16];
  undefined1 *puStack_2d0;
  undefined1 auStack_2c8 [48];
  undefined8 uStack_298;
  undefined4 uStack_90;
  
  puVar3 = (ulonglong *)*param_3;
  pauVar1 = (undefined1 (*) [16])(param_1 + 0x1a0);
  lVar13 = param_3[1];
  auVar37 = vcmpss_avx(ZEXT416(_DAT_145fc6f14),ZEXT416(*(uint *)(param_2 + 0xf4)),1);
  fVar48 = (float)(~auVar37._0_4_ & _DAT_14abbd83c);
  uVar16 = param_4;
  iVar9 = func_0x000144e05fa0(puVar3[1]);
  auVar50 = ZEXT1264(ZEXT812(0));
  fVar35 = 0.0;
  fVar38 = 0.0;
  fVar40 = 0.0;
  fVar42 = 0.0;
  if ((int)lVar13 != iVar9) {
    uVar10 = (**(code **)(*puVar3 + 0xf0))(puVar3,(int)lVar13);
    uVar16 = *puVar3;
    (**(code **)(uVar16 + 0x108))(puVar3,uVar10,&puStack_8f8);
    fVar35 = fStack_8e8;
    fVar38 = fStack_8e4;
    fVar40 = fStack_8e0;
    fVar42 = fStack_8dc;
  }
  (**(code **)(*puVar3 + 0x88))(puVar3,&puStack_8f8);
  auVar44._4_4_ = fStack_8e4;
  auVar44._0_4_ = fStack_8e8;
  auVar44._8_4_ = fStack_8e0;
  auVar44._12_4_ = fStack_8dc;
  auVar37._4_4_ = fStack_8d4;
  auVar37._0_4_ = fStack_8d8;
  auVar37._8_8_ = auStack_8d0[0];
  auVar37 = vshufps_avx(auVar44,auVar37,0x33);
  auVar37 = vshufps_avx(auVar44,auVar37,0x2f);
  auVar47 = ZEXT1664(CONCAT412((auVar37._12_4_ + _DAT_145fc6ed8) * fVar42,
                               CONCAT48((auVar37._8_4_ + _DAT_145fc6ed8) * fVar40,
                                        CONCAT44((auVar37._4_4_ + _DAT_145fc6ed8) * fVar38,
                                                 (auVar37._0_4_ + _DAT_145fc6ed8) * fVar35))));
  fVar35 = _DAT_145fc6ed8;
  fVar38 = _DAT_145fc6ed8;
  fVar40 = _DAT_145fc6ed8;
  fVar42 = _DAT_145fc6ed8;
  (**(code **)(*puVar3 + 0x88))(puVar3,auStack_e08);
  fVar36 = auVar47._0_4_;
  auVar44 = auVar47._0_16_;
  auVar37 = vshufps_avx(auVar44,auVar44,0x55);
  auVar44 = vshufps_avx(auVar44,auVar44,0xaa);
  auVar45._4_4_ = _DAT_14615a290;
  auVar45._0_4_ = _DAT_14615a290;
  auVar45._8_4_ = _DAT_14615a290;
  auVar45._12_4_ = _DAT_14615a290;
  auVar47 = ZEXT1664(auVar45);
  auVar17._0_4_ =
       auVar44._0_4_ * fStack_de8 +
       auVar37._0_4_ * (float)auStack_df8._0_4_ +
       fVar36 * (float)auStack_e08._0_4_ + auStack_dd8._0_4_;
  auVar17._4_4_ =
       auVar44._4_4_ * fStack_de4 +
       auVar37._4_4_ * (float)auStack_df8._4_4_ +
       fVar36 * (float)auStack_e08._4_4_ + auStack_dd8._4_4_;
  auVar17._8_4_ =
       auVar44._8_4_ * fStack_de0 +
       auVar37._8_4_ * fStack_df0 + fVar36 * (float)uStack_e00 + auStack_dd8._8_4_;
  auVar17._12_4_ =
       auVar44._12_4_ * fStack_ddc +
       auVar37._12_4_ * fStack_dec + fVar36 * uStack_e00._4_4_ + auStack_dd8._12_4_;
  auVar37 = vrcpps_avx(auVar45);
  fVar36 = auVar37._0_4_;
  fVar39 = auVar37._4_4_;
  fVar41 = auVar37._8_4_;
  fVar43 = auVar37._12_4_;
  fVar36 = (-(fVar36 * _DAT_14615a290) + fVar35) * fVar36 + fVar36;
  fVar39 = (-(fVar39 * _DAT_14615a290) + fVar38) * fVar39 + fVar39;
  fVar41 = (-(fVar41 * _DAT_14615a290) + fVar40) * fVar41 + fVar41;
  fVar43 = (-(fVar43 * _DAT_14615a290) + fVar42) * fVar43 + fVar43;
  auVar37 = vblendps_avx(auVar17,auStack_dd8,8);
  auVar29._0_4_ = fVar36 * auVar37._0_4_;
  auVar29._4_4_ = fVar39 * auVar37._4_4_;
  auVar29._8_4_ = fVar41 * auVar37._8_4_;
  auVar29._12_4_ = fVar43 * auVar37._12_4_;
  auVar44 = vroundps_avx(auVar29,3);
  auVar21._0_4_ = -(auVar44._0_4_ * _DAT_14615a290) + auVar37._0_4_;
  auVar21._4_4_ = -(auVar44._4_4_ * _DAT_14615a290) + auVar37._4_4_;
  auVar21._8_4_ = -(auVar44._8_4_ * _DAT_14615a290) + auVar37._8_4_;
  auVar21._12_4_ = -(auVar44._12_4_ * _DAT_14615a290) + auVar37._12_4_;
  auVar37 = vblendps_avx(auVar17,auVar21,3);
  auVar22._0_4_ = (int)auVar44._0_4_;
  auVar22._4_4_ = (int)auVar44._4_4_;
  auVar22._8_4_ = (int)auVar44._8_4_;
  auVar22._12_4_ = (int)auVar44._12_4_;
  auVar44 = vpackssdw_avx(auVar22,auVar22);
  sVar20 = auVar44._0_2_;
  auVar8._0_2_ = sVar20 + auStack_dd8._0_2_;
  sVar28 = auVar44._2_2_;
  auVar8._2_2_ = sVar28 + auStack_dd8._2_2_;
  auVar8._4_2_ = sVar20 + auStack_dd8._4_2_;
  auVar8._6_2_ = sVar28 + auStack_dd8._6_2_;
  auVar8._8_2_ = sVar20 + auStack_dd8._8_2_;
  auVar8._10_2_ = sVar28 + auStack_dd8._10_2_;
  auVar8._12_2_ = sVar20 + auStack_dd8._12_2_;
  auVar8._14_2_ = sVar28 + auStack_dd8._14_2_;
  auVar44 = vpblendd_avx2(auVar37,auVar8,8);
  auVar37 = *pauVar1;
  auVar23 = vsubps_avx(auVar37,auVar44);
  auVar44 = vpsubw_avx(auVar37,auVar44);
  auVar44 = vblendps_avx(auVar23,auVar44,8);
  auVar23 = vpunpckhwd_avx(auVar44,auVar44);
  auVar23 = vpsrad_avx(auVar23,0x10);
  auVar23 = vcvtdq2ps_avx(auVar23);
  auVar8 = vshufpd_avx(auVar23,auVar23,3);
  auVar23._0_4_ = auVar8._0_4_ * _DAT_146159c90 + auVar44._0_4_;
  auVar23._4_4_ = auVar8._4_4_ * _UNK_146159c94 + auVar44._4_4_;
  auVar23._8_4_ = auVar8._8_4_ * _UNK_146159c98 + auVar44._8_4_;
  auVar23._12_4_ = auVar8._12_4_ * _UNK_146159c9c + auVar44._12_4_;
  if ((float)((uint)auVar23._0_4_ & _DAT_145fc6f4c) <= fVar48) {
    auVar23 = vblendps_avx(auVar23,auVar50._0_16_,1);
  }
  auVar44 = vmovshdup_avx(auVar23);
  if ((float)(auVar44._0_4_ & _DAT_145fc6f4c) <= fVar48) {
    auVar23 = vblendps_avx(auVar23,auVar50._0_16_,2);
  }
  auVar44 = vsubps_avx(auVar37,auVar23);
  auVar37 = vblendps_avx(auVar44,auVar37,8);
  auVar24._0_4_ = auVar37._0_4_ * fVar36;
  auVar24._4_4_ = auVar37._4_4_ * fVar39;
  auVar24._8_4_ = auVar37._8_4_ * fVar41;
  auVar24._12_4_ = auVar37._12_4_ * fVar43;
  auVar44 = vroundps_avx(auVar24,3);
  auVar30._0_4_ = -(auVar44._0_4_ * _DAT_14615a290) + auVar37._0_4_;
  auVar30._4_4_ = -(auVar44._4_4_ * _DAT_14615a290) + auVar37._4_4_;
  auVar30._8_4_ = -(auVar44._8_4_ * _DAT_14615a290) + auVar37._8_4_;
  auVar30._12_4_ = -(auVar44._12_4_ * _DAT_14615a290) + auVar37._12_4_;
  auVar25._0_4_ = (int)auVar44._0_4_;
  auVar25._4_4_ = (int)auVar44._4_4_;
  auVar25._8_4_ = (int)auVar44._8_4_;
  auVar25._12_4_ = (int)auVar44._12_4_;
  auVar23 = vpackssdw_avx(auVar25,auVar25);
  auVar44 = vblendps_avx(auVar37,auVar30,3);
  sVar20 = auVar23._0_2_;
  auVar5._0_2_ = sVar20 + auVar37._0_2_;
  sVar28 = auVar23._2_2_;
  auVar5._2_2_ = sVar28 + auVar37._2_2_;
  auVar5._4_2_ = sVar20 + auVar37._4_2_;
  auVar5._6_2_ = sVar28 + auVar37._6_2_;
  auVar5._8_2_ = sVar20 + auVar37._8_2_;
  auVar5._10_2_ = sVar28 + auVar37._10_2_;
  auVar5._12_2_ = sVar20 + auVar37._12_2_;
  auVar5._14_2_ = sVar28 + auVar37._14_2_;
  auVar37 = vblendps_avx(auVar44,auVar5,8);
  *pauVar1 = auVar37;
  if ((char)param_4 != '\0') {
    uStack_e28 = *(undefined8 *)(param_2 + 0x110);
    uStack_e20 = *(undefined8 *)(param_2 + 0x118);
    uVar16 = CONCAT71((int7)(uVar16 >> 8),*(undefined1 *)(param_2 + 0x120)) & 0xffffffffffffff20;
    FUN_1400d08e0(param_3,pauVar1,&uStack_e28,CONCAT71((int7)(uVar16 >> 8),(byte)uVar16 >> 5),
                  *(undefined4 *)(param_2 + 0xec));
  }
  fVar38 = *(float *)(param_1 + 0x278) * *(float *)(param_1 + 0x284);
  fVar35 = fVar38 + _DAT_14abbd834;
  fVar38 = fVar38 + _DAT_14abbd838;
  FUN_1400df3f0(*(undefined8 *)(param_1 + 0x2e0));
  pauVar1 = (undefined1 (*) [16])(param_1 + 0x1a0);
  auVar18._0_4_ = _DAT_14614f7f0 * fVar35 + *(float *)*pauVar1;
  auVar18._4_4_ = _UNK_14614f7f4 * fVar35 + *(float *)(param_1 + 0x1a4);
  auVar18._8_4_ = _UNK_14614f7f8 * fVar35 + *(float *)(param_1 + 0x1a8);
  auVar18._12_4_ = _UNK_14614f7fc * fVar35 + *(float *)(param_1 + 0x1ac);
  auVar37 = vblendps_avx(auVar18,*pauVar1,8);
  auVar32._0_4_ = auVar37._0_4_ * fVar36;
  auVar32._4_4_ = auVar37._4_4_ * fVar39;
  auVar32._8_4_ = auVar37._8_4_ * fVar41;
  auVar32._12_4_ = auVar37._12_4_ * fVar43;
  auVar44 = vroundps_avx(auVar32,3);
  auVar34._0_4_ = -(auVar44._0_4_ * auVar47._0_4_) + auVar37._0_4_;
  auVar34._4_4_ = -(auVar44._4_4_ * auVar47._4_4_) + auVar37._4_4_;
  auVar34._8_4_ = -(auVar44._8_4_ * auVar47._8_4_) + auVar37._8_4_;
  auVar34._12_4_ = -(auVar44._12_4_ * auVar47._12_4_) + auVar37._12_4_;
  auVar33._0_4_ = (int)auVar44._0_4_;
  auVar33._4_4_ = (int)auVar44._4_4_;
  auVar33._8_4_ = (int)auVar44._8_4_;
  auVar33._12_4_ = (int)auVar44._12_4_;
  auVar23 = vpackssdw_avx(auVar33,auVar33);
  auVar44 = vblendps_avx(auVar37,auVar34,3);
  sVar20 = auVar23._0_2_;
  auVar6._0_2_ = sVar20 + auVar37._0_2_;
  sVar28 = auVar23._2_2_;
  auVar6._2_2_ = sVar28 + auVar37._2_2_;
  auVar6._4_2_ = sVar20 + auVar37._4_2_;
  auVar6._6_2_ = sVar28 + auVar37._6_2_;
  auVar6._8_2_ = sVar20 + auVar37._8_2_;
  auVar6._10_2_ = sVar28 + auVar37._10_2_;
  auVar6._12_2_ = sVar20 + auVar37._12_2_;
  auVar6._14_2_ = sVar28 + auVar37._14_2_;
  auVar37 = vblendps_avx(auVar44,auVar6,8);
  auVar49 = ZEXT1664(auVar37);
  auVar19._0_4_ = _DAT_14614f7f0 * fVar38 + *(float *)*pauVar1;
  auVar19._4_4_ = _UNK_14614f7f4 * fVar38 + *(float *)(param_1 + 0x1a4);
  auVar19._8_4_ = _UNK_14614f7f8 * fVar38 + *(float *)(param_1 + 0x1a8);
  auVar19._12_4_ = _UNK_14614f7fc * fVar38 + *(float *)(param_1 + 0x1ac);
  auVar37 = vblendps_avx(auVar19,*pauVar1,8);
  auVar26._0_4_ = auVar37._0_4_ * fVar36;
  auVar26._4_4_ = auVar37._4_4_ * fVar39;
  auVar26._8_4_ = auVar37._8_4_ * fVar41;
  auVar26._12_4_ = auVar37._12_4_ * fVar43;
  uStack_2e8 = 0;
  auVar44 = vroundps_avx(auVar26,3);
  auVar46._0_4_ = -(auVar44._0_4_ * auVar47._0_4_) + auVar37._0_4_;
  auVar46._4_4_ = -(auVar44._4_4_ * auVar47._4_4_) + auVar37._4_4_;
  auVar46._8_4_ = -(auVar44._8_4_ * auVar47._8_4_) + auVar37._8_4_;
  auVar46._12_4_ = -(auVar44._12_4_ * auVar47._12_4_) + auVar37._12_4_;
  auVar27._0_4_ = (int)auVar44._0_4_;
  auVar27._4_4_ = (int)auVar44._4_4_;
  auVar27._8_4_ = (int)auVar44._8_4_;
  auVar27._12_4_ = (int)auVar44._12_4_;
  auVar23 = vpackssdw_avx(auVar27,auVar27);
  auVar44 = vblendps_avx(auVar37,auVar46,3);
  sVar20 = auVar23._0_2_;
  auVar7._0_2_ = sVar20 + auVar37._0_2_;
  sVar28 = auVar23._2_2_;
  auVar7._2_2_ = sVar28 + auVar37._2_2_;
  auVar7._4_2_ = sVar20 + auVar37._4_2_;
  auVar7._6_2_ = sVar28 + auVar37._6_2_;
  auVar7._8_2_ = sVar20 + auVar37._8_2_;
  auVar7._10_2_ = sVar28 + auVar37._10_2_;
  auVar7._12_2_ = sVar20 + auVar37._12_2_;
  auVar7._14_2_ = sVar28 + auVar37._14_2_;
  auVar37 = vblendps_avx(auVar44,auVar7,8);
  auVar50 = ZEXT1664(auVar37);
  auStack_2e0._0_12_ = ZEXT412(6) << 0x40;
  auStack_2e0._12_4_ = 0;
  uStack_298 = 0x80;
  uStack_90 = 0;
  puStack_2d0 = auStack_2c8;
  FUN_144f63ee0(auStack_e08);
  auVar44 = auVar49._0_16_;
  auVar37 = auVar50._0_16_;
  if (*(char *)((longlong)auStack_e08 + 0x1e) == '\x03') {
    puStack_8f8 = (undefined8 *)auStack_e08;
    uStack_8f0 = uStack_e00;
    fStack_8e8 = auStack_df8._0_4_;
    fStack_8e4 = auStack_df8._4_4_;
    fStack_8e0 = auStack_df8._8_4_;
    fStack_8dc = auStack_df8._12_4_;
    fStack_8d8 = 3.58732e-43;
    fStack_8d4 = 0.0;
    if ((ulonglong)(uint)fStack_de4 != 0) {
      if (0x100 < (uint)fStack_de4) {
        fStack_8d8 = fStack_de4;
      }
      auVar50 = ZEXT1664(auVar37);
      auVar47 = ZEXT1664(auVar44);
      func_0x000145f40560(auStack_8d0,&fStack_de0,(ulonglong)(uint)fStack_de4 << 2);
      auVar44 = auVar47._0_16_;
      auVar37 = auVar50._0_16_;
      fStack_8d4 = fStack_de4;
    }
    uStack_470 = (undefined4)uStack_980;
    uStack_46c = (undefined1)((uint5)uStack_980 >> 0x20);
    uStack_46b = uStack_97b;
    uStack_490 = uStack_9a0;
    uStack_4b0 = uStack_9c0;
    uStack_4a8 = uStack_9b8;
    uStack_4a0 = uStack_9b0;
    uStack_498 = uStack_9a8;
    uStack_4d0 = uStack_9e0;
    uStack_4c8 = uStack_9d8;
    uStack_4c0 = uStack_9d0;
    uStack_4b8 = uStack_9c8;
    uStack_458 = uStack_968;
    uStack_450 = uStack_960;
    uStack_448 = uStack_958;
    uStack_440 = uStack_950;
    uStack_438 = uStack_948;
    uStack_430 = uStack_940;
    uStack_428 = uStack_938;
    uStack_420 = uStack_930;
    uStack_418 = uStack_928;
    uStack_410 = uStack_920;
    uStack_408 = uStack_918;
    uStack_400 = uStack_910;
    uStack_3f8 = uStack_908;
    uStack_3f0 = uStack_900;
  }
  else {
    func_0x000145f40560(&puStack_8f8,auStack_e08,0x510);
    auVar44 = auVar49._0_16_;
    auVar37 = auVar50._0_16_;
  }
  auVar31._4_4_ = _UNK_146159c94;
  auVar31._0_4_ = _DAT_146159c90;
  auVar23 = vpunpckhwd_avx(auVar37,auVar37);
  puStack_8f8 = &uStack_458;
  auVar23 = vpsrad_avx(auVar23,0x10);
  auVar23 = vcvtdq2ps_avx(auVar23);
  auVar8 = vshufpd_avx(auVar23,auVar23,3);
  auVar31._8_8_ = 0;
  auVar23 = vpunpckhwd_avx(auVar31,auVar44);
  auVar23 = vpsrad_avx(auVar23,0x10);
  auVar23 = vcvtdq2ps_avx(auVar23);
  auVar23 = vshufpd_avx(auVar23,auVar23,3);
  auVar50 = ZEXT1664(CONCAT412(auVar23._12_4_ * 0.0 + auVar44._12_4_,
                               CONCAT48(auVar23._8_4_ * 0.0 + auVar44._8_4_,
                                        CONCAT44(_UNK_146159c94 * auVar23._4_4_ + auVar44._4_4_,
                                                 _DAT_146159c90 * auVar23._0_4_ + auVar44._0_4_))));
  auVar47 = ZEXT1664(CONCAT412(auVar8._12_4_ * 0.0 + auVar37._12_4_,
                               CONCAT48(auVar8._8_4_ * 0.0 + auVar37._8_4_,
                                        CONCAT44(_UNK_146159c94 * auVar8._4_4_ + auVar37._4_4_,
                                                 _DAT_146159c90 * auVar8._0_4_ + auVar37._0_4_))));
  auVar49 = ZEXT1664(CONCAT412(_DAT_14abbd83c,
                               CONCAT48(_DAT_14abbd83c,CONCAT44(_DAT_14abbd83c,_DAT_14abbd83c))));
  uVar11 = func_0x000144febb80(&puStack_8f8);
  _auStack_e08 = auVar50._0_16_;
  auStack_e18 = auVar49._0_16_;
  _auStack_df8 = auVar47._0_16_;
  func_0x0001453159b0(uVar11);
  uVar11 = 0x84;
  if ((*(byte *)(param_2 + 0x14c) & 1) != 0) {
    uVar11 = 4;
    uStack_46c = 8;
  }
  uStack_488 = (undefined5)uVar11;
  uStack_483 = 0;
  FUN_1400d02c0(*(undefined8 *)(param_1 + 0x2f8),&puStack_8f8,param_2);
  plVar4 = *(longlong **)(param_1 + 0x2e0);
  auStack_2e0._0_8_ = plVar4;
  if (plVar4 == (longlong *)0x0) {
    lVar13 = 0;
    uVar14 = 0;
  }
  else {
    if ((int)plVar4[4] == 3) {
      FUN_144e710b0(plVar4);
    }
    lVar13 = *plVar4;
    if (lVar13 == 0) {
      FUN_144ec6720();
      uVar2 = *(ushort *)((longlong)plVar4 + 0x1c);
      pauVar12 = (undefined1 (*) [32])func_0x000144f97130((ulonglong)uVar2 << 6);
      if ((uVar2 != 0) && (pauVar12 != (undefined1 (*) [32])0x0)) {
        pauVar15 = pauVar12;
        do {
          *(undefined1 (*) [32])(*pauVar15 + 0x10) = ZEXT1232(ZEXT812(0));
          *pauVar15 = ZEXT1232(ZEXT812(0));
          *(undefined8 *)pauVar15[1] = 0xffffffff00000000;
          *(undefined2 *)(pauVar15[1] + 8) = 0xffff;
          pauVar15 = pauVar15 + 2;
        } while (pauVar15 != pauVar12 + (ulonglong)uVar2 * 2);
      }
      *plVar4 = (longlong)pauVar12;
      FUN_144ec6670();
      *(undefined1 *)((longlong)plVar4 + 0x24) = 1;
      lVar13 = *plVar4;
    }
    uVar14 = *(undefined2 *)((longlong)plVar4 + 0x1c);
  }
  func_0x000144f65500(puStack_8f8,lVar13,uVar14,0);
  puStack_8f8[2] = plVar4;
  FUN_1400d0610(&puStack_8f8,param_4 & 0xff);
  uStack_298 = 0x80;
  auStack_2e0._12_4_ = 0;
  if ((auStack_2c8 != puStack_2d0) && (puStack_2d0 != (undefined1 *)0x0)) {
    func_0x000144d9c130();
  }
  auStack_2e0._8_4_ = 6;
  puStack_2d0 = (undefined1 *)0x0;
  FUN_144f67c80();
  return;
}

