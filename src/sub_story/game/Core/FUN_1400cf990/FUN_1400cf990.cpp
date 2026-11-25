// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cf990  size: 2114 bytes
// Name:    FUN_1400cf990
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f64110, FUN_1400dddc0, FUN_1400d04b0, FUN_1400d0240, FUN_144f64050, FUN_144f67c80, FUN_1400d85f0, FUN_144f63ee0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400cf990(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined4 param_5,char param_6,char param_7)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar33;
  undefined1 auVar29 [16];
  undefined1 auVar18 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  short sVar19;
  short sVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar31;
  float fVar32;
  undefined1 auVar30 [64];
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [64];
  float fVar38;
  undefined1 auVar39 [16];
  float fVar42;
  float fVar43;
  undefined1 auVar40 [64];
  float fVar44;
  undefined1 auVar41 [64];
  undefined8 in_stack_fffffffffffff0a8;
  undefined4 uVar46;
  undefined8 uVar45;
  undefined1 auStack_f18 [16];
  undefined1 auStack_f08 [16];
  undefined8 *puStack_ef0;
  undefined1 auStack_ee8 [16];
  undefined1 auStack_ed8 [16];
  undefined1 auStack_ec8 [16];
  undefined1 auStack_eb8 [16];
  undefined1 auStack_ea8 [16];
  undefined1 auStack_e98 [16];
  undefined1 auStack_e88 [16];
  undefined1 auStack_e78 [16];
  undefined1 auStack_e68 [16];
  longlong *plStack_e58;
  int iStack_e50;
  float fStack_e48;
  float fStack_e44;
  float fStack_e40;
  float fStack_e3c;
  float fStack_e38;
  float fStack_e34;
  float fStack_e30;
  float fStack_e2c;
  float fStack_e28;
  float fStack_e24;
  float fStack_e20;
  float fStack_e1c;
  undefined1 auStack_e18 [16];
  undefined8 *puStack_e08;
  undefined8 uStack_e00;
  float fStack_df8;
  float fStack_df4;
  float fStack_df0;
  float fStack_dec;
  undefined4 uStack_de8;
  uint uStack_de4;
  undefined8 auStack_de0 [128];
  undefined1 auStack_9e0 [32];
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
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
  undefined8 uStack_8d8;
  undefined1 auStack_8d0 [1024];
  undefined1 auStack_4d0 [32];
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
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
  undefined8 uStack_2e0;
  ulonglong uStack_2d8;
  undefined1 *puStack_2d0;
  undefined1 auStack_2c8 [48];
  undefined8 uStack_298;
  undefined4 uStack_90;
  
  uVar46 = (undefined4)((ulonglong)in_stack_fffffffffffff0a8 >> 0x20);
  auVar30._0_8_ = func_0x000144f63fd0(*(undefined4 *)(param_1 + 0x94));
  auVar30._8_56_ = extraout_var;
  auVar30 = ZEXT1664(auVar30._0_16_);
  fVar13 = (float)FUN_1400d04b0(*(undefined4 *)(param_1 + 0x98),param_2);
  auVar40 = ZEXT464((uint)(fVar13 - *(float *)(param_2 + 0xe8)));
  uVar14 = func_0x0001400d01e0(param_2,*(undefined1 *)(param_3 + 0x110));
  fVar13 = *(float *)(&UNK_146170758 + (ulonglong)((*(byte *)(param_4 + 0x1a4) & 0x20) == 0) * 4);
  if (param_6 == '\0') {
    fVar13 = fVar13 + fVar13;
  }
  puStack_2d0 = auStack_2c8;
  auVar18 = vcmpss_avx(ZEXT416(_DAT_145fc6f14),ZEXT416(*(uint *)(param_2 + 0xf4)),1);
  uStack_2e8 = 0;
  auVar37 = ZEXT464(~auVar18._0_4_ & (uint)fVar13);
  uStack_2e0 = 0;
  uStack_2d8 = 6;
  uStack_298 = 0x80;
  uStack_90 = 0;
  FUN_144f63ee0(&puStack_e08);
  uVar6 = uStack_de4;
  auVar29 = auVar37._0_16_;
  auVar39 = auVar40._0_16_;
  auVar18 = auVar30._0_16_;
  if (*(char *)((longlong)puStack_e08 + 0x1e) == '\x03') {
    puStack_8f8 = puStack_e08;
    uStack_8f0 = uStack_e00;
    uStack_8d8 = 0x100;
    if ((ulonglong)uStack_de4 != 0) {
      if (0x100 < uStack_de4) {
        uStack_8d8 = (ulonglong)uStack_de4;
      }
      auVar30 = ZEXT1664(auVar18);
      auVar40 = ZEXT1664(auVar29);
      auVar37 = ZEXT1664(auVar39);
      func_0x000145f40560(auStack_8d0,auStack_de0,(ulonglong)uStack_de4 << 2);
      auVar29 = auVar40._0_16_;
      auVar39 = auVar37._0_16_;
      auVar18 = auVar30._0_16_;
      uStack_8d8 = CONCAT44(uVar6,(undefined4)uStack_8d8);
    }
    auVar15 = auStack_9e0._0_16_;
    uStack_46b = uStack_97b;
    uStack_490 = uStack_9a0;
    uStack_4b0 = uStack_9c0;
    uStack_4a8 = uStack_9b8;
    uStack_4a0 = uStack_9b0;
    uStack_498 = uStack_9a8;
    auStack_4d0 = auStack_9e0;
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
    auVar41._0_8_ = func_0x000145f40560(&puStack_8f8,&puStack_e08,0x510);
    auVar29 = auVar37._0_16_;
    auVar39 = auVar40._0_16_;
    auVar18 = auVar30._0_16_;
    auVar41._8_56_ = extraout_var_00;
    auVar15 = auVar41._0_16_;
  }
  puStack_8f8 = &uStack_458;
  auVar18 = vinsertps_avx(auVar15,auVar18,0x2b);
  auVar39 = vinsertps_avx(auVar15,auVar39,0x2b);
  auVar30 = ZEXT1664(auVar18);
  auVar40 = ZEXT1664(CONCAT412(uVar14,CONCAT48(uVar14,CONCAT44(uVar14,uVar14))));
  auVar37 = ZEXT1664(auVar29);
  auVar41 = ZEXT1664(auVar39);
  FUN_1400d0240(param_1,&puStack_8f8,param_2);
  if (param_6 == '\0') {
    uVar12 = 0;
    *(byte *)(param_4 + 0x1a4) = *(byte *)(param_4 + 0x1a4) & 0xf7;
    if (*(uint *)(param_4 + 0x170) != 2) {
      uVar12 = (ulonglong)*(uint *)(param_4 + 0x170);
    }
    FUN_144f64050(param_1 + 0x2a0,param_5);
    auStack_e78 = auVar40._0_16_;
    auStack_e88 = auVar41._0_16_;
    auStack_e98 = auVar30._0_16_;
    uVar11 = func_0x000144f63b60(param_1 + 0x2a0,param_5,0);
    FUN_144f64110(param_2,param_3 + 8 + uVar12 * 0x10,(longlong)(int)uVar12 * 0x30 + param_4,uVar11,
                  &puStack_8f8,auStack_e98,auStack_e88,auStack_e78,CONCAT44(uVar46,auVar37._0_4_),
                  param_7);
    goto LAB_1400cfcbc;
  }
  if ((*(byte *)(param_2 + 0xf0) & 1) == 0) {
    if (param_7 == '\0') {
      uVar11 = 0;
    }
    else {
      uVar11 = func_0x000144f653e0(param_1 + 0x2a0,param_5,0);
    }
    cVar7 = FUN_1400d85f0(param_1,param_3 + 8,uVar11,param_2);
    if (cVar7 != '\0') goto LAB_1400cfd81;
    auVar18._0_12_ = ZEXT812(0);
    auVar18._12_4_ = 0;
    auVar18 = vblendps_avx(auVar41._0_16_,auVar18,4);
    auVar41 = ZEXT1664(auVar18);
    bVar8 = *(byte *)(param_4 + 0x1a4) | 8;
  }
  else {
LAB_1400cfd81:
    bVar8 = *(byte *)(param_4 + 0x1a4) & 0xf7;
  }
  lVar1 = param_1 + 0x2a0;
  *(byte *)(param_4 + 0x1a4) = bVar8;
  FUN_144f64050(lVar1);
  auStack_f08 = auVar40._0_16_;
  auStack_ee8 = auVar30._0_16_;
  auStack_f18 = auVar41._0_16_;
  uVar11 = func_0x000144f63b60(lVar1,param_5,0);
  uVar45 = CONCAT44(uVar46,auVar37._0_4_);
  puStack_ef0 = (undefined8 *)(param_3 + 8);
  FUN_144f64110(param_2,(undefined8 *)(param_3 + 8),param_4,uVar11,&puStack_8f8,auStack_ee8,
                auStack_f18,auStack_f08,uVar45,param_7);
  uVar14 = (undefined4)((ulonglong)uVar45 >> 0x20);
  auStack_ee8 = auVar30._0_16_;
  auStack_f08 = auVar40._0_16_;
  auStack_f18 = auVar41._0_16_;
  uVar11 = func_0x000144f63b60(lVar1,param_5,1);
  FUN_144f64110(param_2,param_3 + 0x18,param_4 + 0x30,uVar11,&puStack_8f8,auStack_ee8,auStack_f18,
                auStack_f08,CONCAT44(uVar14,auVar37._0_4_),param_7);
  auStack_ea8 = auVar40._0_16_;
  auStack_eb8 = auVar41._0_16_;
  auStack_ec8 = auVar30._0_16_;
  plVar2 = *(longlong **)(param_3 + 8);
  iVar10 = *(int *)(param_3 + 0x10);
  iVar9 = func_0x000144e05fa0(plVar2[1]);
  fVar28 = 0.0;
  fVar31 = 0.0;
  fVar32 = 0.0;
  fVar33 = 0.0;
  fVar13 = 0.0;
  fVar34 = 0.0;
  fVar35 = 0.0;
  fVar36 = 0.0;
  if (iVar10 != iVar9) {
    uVar14 = (**(code **)(*plVar2 + 0xf0))(plVar2,iVar10);
    (**(code **)(*plVar2 + 0x108))(plVar2,uVar14,&puStack_e08);
    fVar13 = fStack_df8;
    fVar34 = fStack_df4;
    fVar35 = fStack_df0;
    fVar36 = fStack_dec;
  }
  (**(code **)(*plVar2 + 0x88))(plVar2,&puStack_e08);
  auVar29._4_4_ = fStack_df4;
  auVar29._0_4_ = fStack_df8;
  auVar29._8_4_ = fStack_df0;
  auVar29._12_4_ = fStack_dec;
  auVar15._4_4_ = uStack_de4;
  auVar15._0_4_ = uStack_de8;
  auVar15._8_8_ = auStack_de0[0];
  auVar18 = vshufps_avx(auVar29,auVar15,0x33);
  auVar18 = vshufps_avx(auVar29,auVar18,0x2f);
  auVar30 = ZEXT1664(CONCAT412(fVar36 * (auVar18._12_4_ + _DAT_145fc6ed8),
                               CONCAT48(fVar35 * (auVar18._8_4_ + _DAT_145fc6ed8),
                                        CONCAT44(fVar34 * (auVar18._4_4_ + _DAT_145fc6ed8),
                                                 fVar13 * (auVar18._0_4_ + _DAT_145fc6ed8)))));
  fVar13 = _DAT_145fc6ed8;
  fVar34 = _DAT_145fc6ed8;
  fVar35 = _DAT_145fc6ed8;
  fVar36 = _DAT_145fc6ed8;
  (**(code **)(*plVar2 + 0x88))(plVar2,&fStack_e48);
  fVar38 = auVar30._0_4_;
  auVar26._4_4_ = _DAT_14615a290;
  auVar26._0_4_ = _DAT_14615a290;
  auVar26._8_4_ = _DAT_14615a290;
  auVar26._12_4_ = _DAT_14615a290;
  auVar18 = auVar30._0_16_;
  auVar29 = vshufps_avx(auVar18,auVar18,0x55);
  auVar39 = vshufps_avx(auVar18,auVar18,0xaa);
  auVar18 = vrcpps_avx(auVar26);
  auVar16._0_4_ =
       auVar39._0_4_ * fStack_e28 +
       auVar29._0_4_ * fStack_e38 + fVar38 * fStack_e48 + auStack_e18._0_4_;
  auVar16._4_4_ =
       auVar39._4_4_ * fStack_e24 +
       auVar29._4_4_ * fStack_e34 + fVar38 * fStack_e44 + auStack_e18._4_4_;
  auVar16._8_4_ =
       auVar39._8_4_ * fStack_e20 +
       auVar29._8_4_ * fStack_e30 + fVar38 * fStack_e40 + auStack_e18._8_4_;
  auVar16._12_4_ =
       auVar39._12_4_ * fStack_e1c +
       auVar29._12_4_ * fStack_e2c + fVar38 * fStack_e3c + auStack_e18._12_4_;
  fVar38 = auVar18._0_4_;
  fVar42 = auVar18._4_4_;
  fVar43 = auVar18._8_4_;
  fVar44 = auVar18._12_4_;
  fVar38 = (-(fVar38 * _DAT_14615a290) + fVar13) * fVar38 + fVar38;
  fVar42 = (-(fVar42 * _DAT_14615a290) + fVar34) * fVar42 + fVar42;
  fVar43 = (-(fVar43 * _DAT_14615a290) + fVar35) * fVar43 + fVar43;
  fVar44 = (-(fVar44 * _DAT_14615a290) + fVar36) * fVar44 + fVar44;
  auVar18 = vblendps_avx(auVar16,auStack_e18,8);
  auVar24._0_4_ = fVar38 * auVar18._0_4_;
  auVar24._4_4_ = fVar42 * auVar18._4_4_;
  auVar24._8_4_ = fVar43 * auVar18._8_4_;
  auVar24._12_4_ = fVar44 * auVar18._12_4_;
  auVar29 = vroundps_avx(auVar24,3);
  auVar27._0_4_ = -(auVar29._0_4_ * _DAT_14615a290) + auVar18._0_4_;
  auVar27._4_4_ = -(auVar29._4_4_ * _DAT_14615a290) + auVar18._4_4_;
  auVar27._8_4_ = -(auVar29._8_4_ * _DAT_14615a290) + auVar18._8_4_;
  auVar27._12_4_ = -(auVar29._12_4_ * _DAT_14615a290) + auVar18._12_4_;
  auVar20._0_4_ = (int)auVar29._0_4_;
  auVar20._4_4_ = (int)auVar29._4_4_;
  auVar20._8_4_ = (int)auVar29._8_4_;
  auVar20._12_4_ = (int)auVar29._12_4_;
  auVar18 = vblendps_avx(auVar16,auVar27,3);
  auVar29 = vpackssdw_avx(auVar20,auVar20);
  sVar19 = auVar29._0_2_;
  auVar39._0_2_ = sVar19 + auStack_e18._0_2_;
  sVar22 = auVar29._2_2_;
  auVar39._2_2_ = sVar22 + auStack_e18._2_2_;
  auVar39._4_2_ = sVar19 + auStack_e18._4_2_;
  auVar39._6_2_ = sVar22 + auStack_e18._6_2_;
  auVar39._8_2_ = sVar19 + auStack_e18._8_2_;
  auVar39._10_2_ = sVar22 + auStack_e18._10_2_;
  auVar39._12_2_ = sVar19 + auStack_e18._12_2_;
  auVar39._14_2_ = sVar22 + auStack_e18._14_2_;
  auStack_ed8 = vpblendd_avx2(auVar18,auVar39,8);
  (**(code **)(*(longlong *)*puStack_ef0 + 0x18))((longlong *)*puStack_ef0,&plStack_e58,0);
  iVar10 = func_0x000144e05fa0(plStack_e58[1]);
  if (iStack_e50 != iVar10) {
    uVar14 = (**(code **)(*plStack_e58 + 0xf0))(plStack_e58,iStack_e50);
    (**(code **)(*plStack_e58 + 0x108))(plStack_e58,uVar14,&puStack_e08);
    fVar28 = fStack_df8;
    fVar31 = fStack_df4;
    fVar32 = fStack_df0;
    fVar33 = fStack_dec;
  }
  (**(code **)(*plStack_e58 + 0x88))(plStack_e58,&puStack_e08);
  auVar4._4_4_ = fStack_df4;
  auVar4._0_4_ = fStack_df8;
  auVar4._8_4_ = fStack_df0;
  auVar4._12_4_ = fStack_dec;
  auVar5._4_4_ = uStack_de4;
  auVar5._0_4_ = uStack_de8;
  auVar5._8_8_ = auStack_de0[0];
  auVar18 = vshufps_avx(auVar4,auVar5,0x33);
  auVar18 = vshufps_avx(auVar4,auVar18,0x2f);
  auVar30 = ZEXT1664(CONCAT412((auVar18._12_4_ + fVar36) * fVar33,
                               CONCAT48((auVar18._8_4_ + fVar35) * fVar32,
                                        CONCAT44((auVar18._4_4_ + fVar34) * fVar31,
                                                 (auVar18._0_4_ + fVar13) * fVar28))));
  (**(code **)(*plStack_e58 + 0x88))(plStack_e58,&fStack_e48);
  fVar13 = auVar30._0_4_;
  auVar29 = auVar30._0_16_;
  auVar18 = vshufps_avx(auVar29,auVar29,0x55);
  auVar29 = vshufps_avx(auVar29,auVar29,0xaa);
  auVar17._0_4_ =
       auVar29._0_4_ * fStack_e28 +
       auVar18._0_4_ * fStack_e38 + fVar13 * fStack_e48 + auStack_e18._0_4_;
  auVar17._4_4_ =
       auVar29._4_4_ * fStack_e24 +
       auVar18._4_4_ * fStack_e34 + fVar13 * fStack_e44 + auStack_e18._4_4_;
  auVar17._8_4_ =
       auVar29._8_4_ * fStack_e20 +
       auVar18._8_4_ * fStack_e30 + fVar13 * fStack_e40 + auStack_e18._8_4_;
  auVar17._12_4_ =
       auVar29._12_4_ * fStack_e1c +
       auVar18._12_4_ * fStack_e2c + fVar13 * fStack_e3c + auStack_e18._12_4_;
  auVar18 = vblendps_avx(auVar17,auStack_e18,8);
  auVar23._0_4_ = fVar38 * auVar18._0_4_;
  auVar23._4_4_ = fVar42 * auVar18._4_4_;
  auVar23._8_4_ = fVar43 * auVar18._8_4_;
  auVar23._12_4_ = fVar44 * auVar18._12_4_;
  auVar29 = vroundps_avx(auVar23,3);
  auVar25._0_4_ = auVar29._0_4_ * _DAT_14615ad78 + auVar18._0_4_;
  auVar25._4_4_ = auVar29._4_4_ * _DAT_14615ad78 + auVar18._4_4_;
  auVar25._8_4_ = auVar29._8_4_ * _DAT_14615ad78 + auVar18._8_4_;
  auVar25._12_4_ = auVar29._12_4_ * _DAT_14615ad78 + auVar18._12_4_;
  auVar21._0_4_ = (int)auVar29._0_4_;
  auVar21._4_4_ = (int)auVar29._4_4_;
  auVar21._8_4_ = (int)auVar29._8_4_;
  auVar21._12_4_ = (int)auVar29._12_4_;
  auVar18 = vblendps_avx(auVar17,auVar25,3);
  auVar29 = vpackssdw_avx(auVar21,auVar21);
  sVar19 = auVar29._0_2_;
  auVar3._0_2_ = sVar19 + auStack_e18._0_2_;
  sVar22 = auVar29._2_2_;
  auVar3._2_2_ = sVar22 + auStack_e18._2_2_;
  auVar3._4_2_ = sVar19 + auStack_e18._4_2_;
  auVar3._6_2_ = sVar22 + auStack_e18._6_2_;
  auVar3._8_2_ = sVar19 + auStack_e18._8_2_;
  auVar3._10_2_ = sVar22 + auStack_e18._10_2_;
  auVar3._12_2_ = sVar19 + auStack_e18._12_2_;
  auVar3._14_2_ = sVar22 + auStack_e18._14_2_;
  auStack_e68 = vpblendd_avx2(auVar18,auVar3,8);
  FUN_1400dddc0(param_1,param_2,param_3,param_4,&puStack_8f8,auStack_e68,auStack_ed8,auStack_ec8,
                auStack_eb8,auStack_ea8,auVar37._0_4_,param_5,param_7);
LAB_1400cfcbc:
  uStack_298 = 0x80;
  uStack_2d8 = uStack_2d8 & 0xffffffff;
  if ((auStack_2c8 != puStack_2d0) && (puStack_2d0 != (undefined1 *)0x0)) {
    func_0x000144d9c130();
  }
  uStack_2d8 = CONCAT44(uStack_2d8._4_4_,6);
  puStack_2d0 = (undefined1 *)0x0;
  FUN_144f67c80();
  return;
}

