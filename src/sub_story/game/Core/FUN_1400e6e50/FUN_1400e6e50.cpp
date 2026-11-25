// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e6e50  size: 1710 bytes
// Name:    FUN_1400e6e50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400d04b0, FUN_1400df3f0, FUN_144ec6720, FUN_1400d08e0, FUN_144f63ee0, FUN_1400d0610, FUN_144e710b0, FUN_1400d0240, FUN_144ec6670, FUN_144f67c80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e6e50(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,char param_5
                  )

{
  undefined1 (*pauVar1) [16];
  ushort uVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined1 (*pauVar11) [32];
  longlong lVar12;
  undefined2 uVar13;
  undefined1 (*pauVar14) [32];
  ulonglong uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  short sVar20;
  short sVar29;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [64];
  float fVar48;
  undefined1 auVar49 [64];
  undefined1 auVar50 [64];
  undefined8 uStack_e18;
  undefined8 uStack_e10;
  undefined1 auStack_e08 [16];
  undefined1 auStack_df8 [8];
  undefined8 uStack_df0;
  undefined1 auStack_de8 [8];
  float fStack_de0;
  float fStack_ddc;
  float fStack_dd8;
  float fStack_dd4;
  float fStack_dd0;
  float fStack_dcc;
  undefined1 auStack_dc8 [16];
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined5 uStack_988;
  undefined3 uStack_983;
  undefined8 uStack_96b;
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
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 *puStack_8e8;
  undefined8 uStack_8e0;
  float fStack_8d8;
  float fStack_8d4;
  float fStack_8d0;
  float fStack_8cc;
  float fStack_8c8;
  float fStack_8c4;
  undefined8 auStack_8c0 [128];
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  uint uStack_478;
  undefined4 uStack_474;
  undefined8 uStack_45b;
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
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined4 uStack_2d8;
  undefined1 auStack_2d0 [16];
  undefined1 *puStack_2c0;
  undefined1 auStack_2b8 [48];
  undefined8 uStack_288;
  undefined4 uStack_80;
  
  uVar16 = _DAT_14614f7d0;
  if ((char)param_4 == '\0') {
    uVar16 = _DAT_146159c24;
  }
  plVar3 = (longlong *)*param_3;
  lVar12 = param_3[1];
  pauVar1 = (undefined1 (*) [16])(param_1 + 0x1d0);
  auVar28 = vcmpss_avx(ZEXT416(_DAT_145fc6f14),ZEXT416(*(uint *)(param_2 + 0xf4)),1);
  fVar48 = (float)(~auVar28._0_4_ & uVar16);
  iVar8 = func_0x000144e05fa0(plVar3[1]);
  auVar50 = ZEXT1264(ZEXT812(0));
  fVar37 = 0.0;
  fVar39 = 0.0;
  fVar41 = 0.0;
  fVar43 = 0.0;
  if ((int)lVar12 != iVar8) {
    uVar9 = (**(code **)(*plVar3 + 0xf0))(plVar3,(int)lVar12);
    param_4 = *plVar3;
    (**(code **)(param_4 + 0x108))(plVar3,uVar9,&puStack_8e8);
    fVar37 = fStack_8d8;
    fVar39 = fStack_8d4;
    fVar41 = fStack_8d0;
    fVar43 = fStack_8cc;
  }
  (**(code **)(*plVar3 + 0x88))(plVar3,&puStack_8e8);
  auVar19._4_4_ = fStack_8d4;
  auVar19._0_4_ = fStack_8d8;
  auVar19._8_4_ = fStack_8d0;
  auVar19._12_4_ = fStack_8cc;
  auVar28._4_4_ = fStack_8c4;
  auVar28._0_4_ = fStack_8c8;
  auVar28._8_8_ = auStack_8c0[0];
  auVar28 = vshufps_avx(auVar19,auVar28,0x33);
  auVar28 = vshufps_avx(auVar19,auVar28,0x2f);
  auVar47 = ZEXT1664(CONCAT412((auVar28._12_4_ + _DAT_145fc6ed8) * fVar43,
                               CONCAT48((auVar28._8_4_ + _DAT_145fc6ed8) * fVar41,
                                        CONCAT44((auVar28._4_4_ + _DAT_145fc6ed8) * fVar39,
                                                 (auVar28._0_4_ + _DAT_145fc6ed8) * fVar37))));
  fVar37 = _DAT_145fc6ed8;
  fVar39 = _DAT_145fc6ed8;
  fVar41 = _DAT_145fc6ed8;
  fVar43 = _DAT_145fc6ed8;
  (**(code **)(*plVar3 + 0x88))(plVar3,auStack_df8);
  fVar38 = auVar47._0_4_;
  auVar19 = auVar47._0_16_;
  auVar28 = vshufps_avx(auVar19,auVar19,0x55);
  auVar19 = vshufps_avx(auVar19,auVar19,0xaa);
  auVar45._4_4_ = _DAT_14615a290;
  auVar45._0_4_ = _DAT_14615a290;
  auVar45._8_4_ = _DAT_14615a290;
  auVar45._12_4_ = _DAT_14615a290;
  auVar47 = ZEXT1664(auVar45);
  auVar17._0_4_ =
       auVar19._0_4_ * fStack_dd8 +
       auVar28._0_4_ * (float)auStack_de8._0_4_ +
       fVar38 * (float)auStack_df8._0_4_ + auStack_dc8._0_4_;
  auVar17._4_4_ =
       auVar19._4_4_ * fStack_dd4 +
       auVar28._4_4_ * (float)auStack_de8._4_4_ +
       fVar38 * (float)auStack_df8._4_4_ + auStack_dc8._4_4_;
  auVar17._8_4_ =
       auVar19._8_4_ * fStack_dd0 +
       auVar28._8_4_ * fStack_de0 + fVar38 * (float)uStack_df0 + auStack_dc8._8_4_;
  auVar17._12_4_ =
       auVar19._12_4_ * fStack_dcc +
       auVar28._12_4_ * fStack_ddc + fVar38 * uStack_df0._4_4_ + auStack_dc8._12_4_;
  auVar28 = vrcpps_avx(auVar45);
  fVar38 = auVar28._0_4_;
  fVar40 = auVar28._4_4_;
  fVar42 = auVar28._8_4_;
  fVar44 = auVar28._12_4_;
  fVar38 = (-(fVar38 * _DAT_14615a290) + fVar37) * fVar38 + fVar38;
  fVar40 = (-(fVar40 * _DAT_14615a290) + fVar39) * fVar40 + fVar40;
  fVar42 = (-(fVar42 * _DAT_14615a290) + fVar41) * fVar42 + fVar42;
  fVar44 = (-(fVar44 * _DAT_14615a290) + fVar43) * fVar44 + fVar44;
  auVar28 = vblendps_avx(auVar17,auStack_dc8,8);
  auVar30._0_4_ = fVar38 * auVar28._0_4_;
  auVar30._4_4_ = fVar40 * auVar28._4_4_;
  auVar30._8_4_ = fVar42 * auVar28._8_4_;
  auVar30._12_4_ = fVar44 * auVar28._12_4_;
  auVar19 = vroundps_avx(auVar30,3);
  auVar21._0_4_ = -(auVar19._0_4_ * _DAT_14615a290) + auVar28._0_4_;
  auVar21._4_4_ = -(auVar19._4_4_ * _DAT_14615a290) + auVar28._4_4_;
  auVar21._8_4_ = -(auVar19._8_4_ * _DAT_14615a290) + auVar28._8_4_;
  auVar21._12_4_ = -(auVar19._12_4_ * _DAT_14615a290) + auVar28._12_4_;
  auVar28 = vblendps_avx(auVar17,auVar21,3);
  auVar22._0_4_ = (int)auVar19._0_4_;
  auVar22._4_4_ = (int)auVar19._4_4_;
  auVar22._8_4_ = (int)auVar19._8_4_;
  auVar22._12_4_ = (int)auVar19._12_4_;
  auVar19 = vpackssdw_avx(auVar22,auVar22);
  sVar20 = auVar19._0_2_;
  auVar7._0_2_ = sVar20 + auStack_dc8._0_2_;
  sVar29 = auVar19._2_2_;
  auVar7._2_2_ = sVar29 + auStack_dc8._2_2_;
  auVar7._4_2_ = sVar20 + auStack_dc8._4_2_;
  auVar7._6_2_ = sVar29 + auStack_dc8._6_2_;
  auVar7._8_2_ = sVar20 + auStack_dc8._8_2_;
  auVar7._10_2_ = sVar29 + auStack_dc8._10_2_;
  auVar7._12_2_ = sVar20 + auStack_dc8._12_2_;
  auVar7._14_2_ = sVar29 + auStack_dc8._14_2_;
  auVar19 = vpblendd_avx2(auVar28,auVar7,8);
  auVar28 = *pauVar1;
  auVar23 = vsubps_avx(auVar28,auVar19);
  auVar19 = vpsubw_avx(auVar28,auVar19);
  auVar19 = vblendps_avx(auVar23,auVar19,8);
  auVar23 = vpunpckhwd_avx(auVar19,auVar19);
  auVar23 = vpsrad_avx(auVar23,0x10);
  auVar23 = vcvtdq2ps_avx(auVar23);
  auVar7 = vshufpd_avx(auVar23,auVar23,3);
  auVar23._0_4_ = auVar7._0_4_ * _DAT_146159c90 + auVar19._0_4_;
  auVar23._4_4_ = auVar7._4_4_ * _UNK_146159c94 + auVar19._4_4_;
  auVar23._8_4_ = auVar7._8_4_ * _UNK_146159c98 + auVar19._8_4_;
  auVar23._12_4_ = auVar7._12_4_ * _UNK_146159c9c + auVar19._12_4_;
  if ((float)((uint)auVar23._0_4_ & _DAT_145fc6f4c) <= fVar48) {
    auVar23 = vblendps_avx(auVar23,auVar50._0_16_,1);
  }
  auVar19 = vmovshdup_avx(auVar23);
  if ((float)(auVar19._0_4_ & _DAT_145fc6f4c) <= fVar48) {
    auVar23 = vblendps_avx(auVar23,auVar50._0_16_,2);
  }
  auVar19 = vsubps_avx(auVar28,auVar23);
  auVar28 = vblendps_avx(auVar19,auVar28,8);
  auVar24._0_4_ = auVar28._0_4_ * fVar38;
  auVar24._4_4_ = auVar28._4_4_ * fVar40;
  auVar24._8_4_ = auVar28._8_4_ * fVar42;
  auVar24._12_4_ = auVar28._12_4_ * fVar44;
  auVar19 = vroundps_avx(auVar24,3);
  auVar31._0_4_ = -(auVar19._0_4_ * _DAT_14615a290) + auVar28._0_4_;
  auVar31._4_4_ = -(auVar19._4_4_ * _DAT_14615a290) + auVar28._4_4_;
  auVar31._8_4_ = -(auVar19._8_4_ * _DAT_14615a290) + auVar28._8_4_;
  auVar31._12_4_ = -(auVar19._12_4_ * _DAT_14615a290) + auVar28._12_4_;
  auVar25._0_4_ = (int)auVar19._0_4_;
  auVar25._4_4_ = (int)auVar19._4_4_;
  auVar25._8_4_ = (int)auVar19._8_4_;
  auVar25._12_4_ = (int)auVar19._12_4_;
  auVar23 = vpackssdw_avx(auVar25,auVar25);
  auVar19 = vblendps_avx(auVar28,auVar31,3);
  sVar20 = auVar23._0_2_;
  auVar4._0_2_ = sVar20 + auVar28._0_2_;
  sVar29 = auVar23._2_2_;
  auVar4._2_2_ = sVar29 + auVar28._2_2_;
  auVar4._4_2_ = sVar20 + auVar28._4_2_;
  auVar4._6_2_ = sVar29 + auVar28._6_2_;
  auVar4._8_2_ = sVar20 + auVar28._8_2_;
  auVar4._10_2_ = sVar29 + auVar28._10_2_;
  auVar4._12_2_ = sVar20 + auVar28._12_2_;
  auVar4._14_2_ = sVar29 + auVar28._14_2_;
  auVar28 = vblendps_avx(auVar19,auVar4,8);
  *pauVar1 = auVar28;
  if (param_5 != '\0') {
    uStack_e18 = *(undefined8 *)(param_2 + 0x110);
    uStack_e10 = *(undefined8 *)(param_2 + 0x118);
    uVar15 = CONCAT71((int7)((ulonglong)param_4 >> 8),*(undefined1 *)(param_2 + 0x120)) &
             0xffffffffffffff20;
    FUN_1400d08e0(param_3,pauVar1,&uStack_e18,CONCAT71((int7)(uVar15 >> 8),(byte)uVar15 >> 5),
                  *(undefined4 *)(param_2 + 0xec));
  }
  FUN_1400df3f0(*(undefined8 *)(param_1 + 0x2e8));
  auVar50._0_8_ = func_0x000144f63fd0(*(undefined4 *)(param_1 + 0x94));
  auVar50._8_56_ = extraout_var;
  auVar28 = vinsertps_avx(auVar50._0_16_,auVar50._0_16_,0x2b);
  auVar50 = ZEXT1664(auVar28);
  auVar49._0_8_ = FUN_1400d04b0(*(undefined4 *)(param_1 + 0x98),param_2);
  auVar49._8_56_ = extraout_var_00;
  pauVar1 = (undefined1 (*) [16])(param_1 + 0x1d0);
  auVar19 = vinsertps_avx(auVar49._0_16_,auVar49._0_16_,0x2b);
  auVar32._0_4_ = auVar50._0_4_ + *(float *)*pauVar1;
  auVar32._4_4_ = auVar50._4_4_ + *(float *)(param_1 + 0x1d4);
  auVar32._8_4_ = auVar50._8_4_ + *(float *)(param_1 + 0x1d8);
  auVar32._12_4_ = auVar50._12_4_ + *(float *)(param_1 + 0x1dc);
  auVar28 = vblendps_avx(auVar32,*pauVar1,8);
  auVar34._0_4_ = auVar28._0_4_ * fVar38;
  auVar34._4_4_ = auVar28._4_4_ * fVar40;
  auVar34._8_4_ = auVar28._8_4_ * fVar42;
  auVar34._12_4_ = auVar28._12_4_ * fVar44;
  auVar23 = vroundps_avx(auVar34,3);
  auVar36._0_4_ = -(auVar23._0_4_ * auVar47._0_4_) + auVar28._0_4_;
  auVar36._4_4_ = -(auVar23._4_4_ * auVar47._4_4_) + auVar28._4_4_;
  auVar36._8_4_ = -(auVar23._8_4_ * auVar47._8_4_) + auVar28._8_4_;
  auVar36._12_4_ = -(auVar23._12_4_ * auVar47._12_4_) + auVar28._12_4_;
  auVar35._0_4_ = (int)auVar23._0_4_;
  auVar35._4_4_ = (int)auVar23._4_4_;
  auVar35._8_4_ = (int)auVar23._8_4_;
  auVar35._12_4_ = (int)auVar23._12_4_;
  auVar7 = vpackssdw_avx(auVar35,auVar35);
  auVar18._0_4_ = auVar19._0_4_ + *(float *)*pauVar1;
  auVar18._4_4_ = auVar19._4_4_ + *(float *)(param_1 + 0x1d4);
  auVar18._8_4_ = auVar19._8_4_ + *(float *)(param_1 + 0x1d8);
  auVar18._12_4_ = auVar19._12_4_ + *(float *)(param_1 + 0x1dc);
  auVar19 = vblendps_avx(auVar18,*pauVar1,8);
  auVar26._0_4_ = auVar19._0_4_ * fVar38;
  auVar26._4_4_ = auVar19._4_4_ * fVar40;
  auVar26._8_4_ = auVar19._8_4_ * fVar42;
  auVar26._12_4_ = auVar19._12_4_ * fVar44;
  uStack_2d8 = 0;
  auVar23 = vblendps_avx(auVar28,auVar36,3);
  sVar20 = auVar7._0_2_;
  auVar5._0_2_ = sVar20 + auVar28._0_2_;
  sVar29 = auVar7._2_2_;
  auVar5._2_2_ = sVar29 + auVar28._2_2_;
  auVar5._4_2_ = sVar20 + auVar28._4_2_;
  auVar5._6_2_ = sVar29 + auVar28._6_2_;
  auVar5._8_2_ = sVar20 + auVar28._8_2_;
  auVar5._10_2_ = sVar29 + auVar28._10_2_;
  auVar5._12_2_ = sVar20 + auVar28._12_2_;
  auVar5._14_2_ = sVar29 + auVar28._14_2_;
  auVar7 = vroundps_avx(auVar26,3);
  auVar28 = vblendps_avx(auVar23,auVar5,8);
  auVar49 = ZEXT1664(auVar28);
  auVar46._0_4_ = -(auVar7._0_4_ * auVar47._0_4_) + auVar19._0_4_;
  auVar46._4_4_ = -(auVar7._4_4_ * auVar47._4_4_) + auVar19._4_4_;
  auVar46._8_4_ = -(auVar7._8_4_ * auVar47._8_4_) + auVar19._8_4_;
  auVar46._12_4_ = -(auVar7._12_4_ * auVar47._12_4_) + auVar19._12_4_;
  auVar27._0_4_ = (int)auVar7._0_4_;
  auVar27._4_4_ = (int)auVar7._4_4_;
  auVar27._8_4_ = (int)auVar7._8_4_;
  auVar27._12_4_ = (int)auVar7._12_4_;
  auVar23 = vpackssdw_avx(auVar27,auVar27);
  auVar28 = vblendps_avx(auVar19,auVar46,3);
  sVar20 = auVar23._0_2_;
  auVar6._0_2_ = sVar20 + auVar19._0_2_;
  sVar29 = auVar23._2_2_;
  auVar6._2_2_ = sVar29 + auVar19._2_2_;
  auVar6._4_2_ = sVar20 + auVar19._4_2_;
  auVar6._6_2_ = sVar29 + auVar19._6_2_;
  auVar6._8_2_ = sVar20 + auVar19._8_2_;
  auVar6._10_2_ = sVar29 + auVar19._10_2_;
  auVar6._12_2_ = sVar20 + auVar19._12_2_;
  auVar6._14_2_ = sVar29 + auVar19._14_2_;
  auVar28 = vblendps_avx(auVar28,auVar6,8);
  auVar50 = ZEXT1664(auVar28);
  auStack_2d0._0_12_ = ZEXT412(6) << 0x40;
  auStack_2d0._12_4_ = 0;
  uStack_288 = 0x80;
  uStack_80 = 0;
  puStack_2c0 = auStack_2b8;
  FUN_144f63ee0(auStack_df8);
  auVar19 = auVar49._0_16_;
  auVar28 = auVar50._0_16_;
  if (*(char *)((longlong)auStack_df8 + 0x1e) == '\x03') {
    puStack_8e8 = (undefined8 *)auStack_df8;
    uStack_8e0 = uStack_df0;
    fStack_8d8 = auStack_de8._0_4_;
    fStack_8d4 = auStack_de8._4_4_;
    fStack_8d0 = auStack_de8._8_4_;
    fStack_8cc = auStack_de8._12_4_;
    fStack_8c8 = 3.58732e-43;
    fStack_8c4 = 0.0;
    if ((ulonglong)(uint)fStack_dd4 != 0) {
      if (0x100 < (uint)fStack_dd4) {
        fStack_8c8 = fStack_dd4;
      }
      auVar50 = ZEXT1664(auVar28);
      auVar47 = ZEXT1664(auVar19);
      func_0x000145f40560(auStack_8c0,&fStack_dd0,(ulonglong)(uint)fStack_dd4 << 2);
      auVar19 = auVar47._0_16_;
      auVar28 = auVar50._0_16_;
      fStack_8c4 = fStack_dd4;
    }
    uStack_45b = uStack_96b;
    uStack_480 = uStack_990;
    uStack_478 = (uint)uStack_988;
    uStack_474 = (undefined4)(CONCAT35(uStack_983,uStack_988) >> 0x20);
    uStack_4a0 = uStack_9b0;
    uStack_498 = uStack_9a8;
    uStack_490 = uStack_9a0;
    uStack_488 = uStack_998;
    uStack_4c0 = uStack_9d0;
    uStack_4b8 = uStack_9c8;
    uStack_4b0 = uStack_9c0;
    uStack_4a8 = uStack_9b8;
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
    uStack_3e8 = uStack_8f8;
    uStack_3e0 = uStack_8f0;
  }
  else {
    func_0x000145f40560(&puStack_8e8,auStack_df8,0x510);
    auVar19 = auVar49._0_16_;
    auVar28 = auVar50._0_16_;
  }
  puStack_8e8 = &uStack_448;
  auVar50 = ZEXT1664(auVar28);
  auVar47 = ZEXT1664(auVar19);
  FUN_1400d0240(param_1,&puStack_8e8,param_2);
  uStack_478 = uStack_478 | 0x40000000;
  auVar33._4_4_ = _UNK_146159c94;
  auVar33._0_4_ = _DAT_146159c90;
  fVar37 = *(float *)(param_2 + 0xe4) * _DAT_14615d990;
  auVar33._8_8_ = 0;
  auVar28 = vpunpckhwd_avx(auVar33,auVar47._0_16_);
  auVar19 = vpunpckhwd_avx(auVar50._0_16_,auVar50._0_16_);
  auVar28 = vpsrad_avx(auVar28,0x10);
  auVar19 = vpsrad_avx(auVar19,0x10);
  auVar28 = vcvtdq2ps_avx(auVar28);
  auVar19 = vcvtdq2ps_avx(auVar19);
  auVar19 = vshufpd_avx(auVar19,auVar19,3);
  auVar49 = ZEXT1664(CONCAT412(auVar19._12_4_ * 0.0 + auVar50._12_4_,
                               CONCAT48(auVar19._8_4_ * 0.0 + auVar50._8_4_,
                                        CONCAT44(_UNK_146159c94 * auVar19._4_4_ + auVar50._4_4_,
                                                 _DAT_146159c90 * auVar19._0_4_ + auVar50._0_4_))));
  auVar28 = vshufpd_avx(auVar28,auVar28,3);
  auVar50 = ZEXT1664(CONCAT412(auVar28._12_4_ * 0.0 + auVar47._12_4_,
                               CONCAT48(auVar28._8_4_ * 0.0 + auVar47._8_4_,
                                        CONCAT44(_UNK_146159c94 * auVar28._4_4_ + auVar47._4_4_,
                                                 _DAT_146159c90 * auVar28._0_4_ + auVar47._0_4_))));
  uVar10 = func_0x000144febb80(&puStack_8e8);
  auStack_e08._4_4_ = fVar37;
  auStack_e08._0_4_ = fVar37;
  auStack_e08._8_4_ = fVar37;
  auStack_e08._12_4_ = fVar37;
  _auStack_df8 = auVar50._0_16_;
  _auStack_de8 = auVar49._0_16_;
  func_0x0001453159b0(uVar10);
  plVar3 = *(longlong **)(param_1 + 0x2e8);
  auStack_2d0._0_8_ = plVar3;
  if (plVar3 == (longlong *)0x0) {
    lVar12 = 0;
    uVar13 = 0;
  }
  else {
    if ((int)plVar3[4] == 3) {
      FUN_144e710b0(plVar3);
    }
    lVar12 = *plVar3;
    if (lVar12 == 0) {
      FUN_144ec6720();
      uVar2 = *(ushort *)((longlong)plVar3 + 0x1c);
      pauVar11 = (undefined1 (*) [32])func_0x000144f97130((ulonglong)uVar2 << 6);
      if ((uVar2 != 0) && (pauVar11 != (undefined1 (*) [32])0x0)) {
        pauVar14 = pauVar11;
        do {
          *(undefined1 (*) [32])(*pauVar14 + 0x10) = ZEXT1232(ZEXT812(0));
          *pauVar14 = ZEXT1232(ZEXT812(0));
          *(undefined8 *)pauVar14[1] = 0xffffffff00000000;
          *(undefined2 *)(pauVar14[1] + 8) = 0xffff;
          pauVar14 = pauVar14 + 2;
        } while (pauVar14 != pauVar11 + (ulonglong)uVar2 * 2);
      }
      *plVar3 = (longlong)pauVar11;
      FUN_144ec6670();
      *(undefined1 *)((longlong)plVar3 + 0x24) = 1;
      lVar12 = *plVar3;
    }
    uVar13 = *(undefined2 *)((longlong)plVar3 + 0x1c);
  }
  func_0x000144f65500(puStack_8e8,lVar12,uVar13,0);
  puStack_8e8[2] = plVar3;
  FUN_1400d0610(&puStack_8e8,param_5);
  uStack_288 = 0x80;
  auStack_2d0._12_4_ = 0;
  if ((auStack_2b8 != puStack_2c0) && (puStack_2c0 != (undefined1 *)0x0)) {
    func_0x000144d9c130();
  }
  auStack_2d0._8_4_ = 6;
  puStack_2c0 = (undefined1 *)0x0;
  FUN_144f67c80();
  return;
}

