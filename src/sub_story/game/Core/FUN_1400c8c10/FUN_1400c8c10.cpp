// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c8c10  size: 111 bytes
// Name:    FUN_1400c8c10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400cbee0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c8c10(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  longlong lVar15;
  byte bVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  short sVar25;
  short sVar32;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar48;
  float fVar49;
  undefined1 auVar44 [16];
  float fVar43;
  float fVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar57;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar58;
  float fVar59;
  undefined1 auVar55 [64];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1d8 [16];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 auStack_128 [16];
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 auStack_108 [16];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 auStack_e8 [16];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined1 auStack_98 [16];
  undefined8 uStack_50;
  undefined1 auVar56 [64];
  
  lVar15 = *(longlong *)(param_1 + 0x188);
  if (*(int *)(param_1 + 0x88) == 0) {
    uStack_50 = 0x1400c8c53;
    iVar12 = FUN_1400cbee0(*(undefined1 *)(lVar15 + 0x1a4),*(undefined1 *)(lVar15 + 0x354),
                           *(undefined4 *)(param_1 + 900),param_2);
  }
  else {
    uStack_50 = 0x1400c8c7d;
    iVar12 = func_0x0001400df5b0(lVar15,*(undefined4 *)(param_1 + 900),*(int *)(param_1 + 0x88),
                                 param_2);
  }
  plVar2 = *(longlong **)(param_3 + 8);
  iVar13 = *(int *)(param_3 + 0x10);
  plVar3 = *(longlong **)(param_3 + 0x128);
  iVar1 = *(int *)(param_3 + 0x130);
  *(int *)(param_1 + 900) = iVar12;
  if (iVar12 == 5) {
    bVar18 = *(float *)(param_3 + 0x218) == *(float *)(param_3 + 0xf8);
    bVar17 = *(float *)(param_3 + 0x218) < *(float *)(param_3 + 0xf8);
code_r0x0001400d8adf:
    bVar11 = *(byte *)(param_3 + 0x110);
    if (bVar17 || bVar18) {
code_r0x0001400d8aec:
      *(byte *)(param_3 + 0x110) = bVar11 & 0x7f;
code_r0x0001400d8af5:
      *(byte *)(param_3 + 0x230) = *(byte *)(param_3 + 0x230) | 0x80;
      return;
    }
LAB_1400d8c1b:
    *(byte *)(param_3 + 0x110) = bVar11 | 0x80;
LAB_1400d8c24:
    *(byte *)(param_3 + 0x230) = *(byte *)(param_3 + 0x230) & 0x7f;
    return;
  }
  switch(iVar12) {
  case 0:
    iVar12 = func_0x000144e05fa0(plVar2[1]);
    auVar55 = ZEXT1264(ZEXT812(0));
    auVar52._0_12_ = ZEXT812(0);
    auVar52._12_4_ = 0;
    if (iVar13 != iVar12) {
      uVar14 = (**(code **)(*plVar2 + 0xf0))(plVar2,iVar13);
      (**(code **)(*plVar2 + 0x108))(plVar2,uVar14,auStack_218);
      auVar52._4_4_ = fStack_204;
      auVar52._0_4_ = fStack_208;
      auVar52._8_4_ = fStack_200;
      auVar52._12_4_ = fStack_1fc;
    }
    auVar56 = ZEXT1664(auVar52);
    iVar12 = func_0x000144e05fa0(plVar3[1]);
    auVar30 = auVar56._0_16_;
    auVar45 = auVar55._0_16_;
    if (iVar1 != iVar12) {
      uVar14 = (**(code **)(*plVar3 + 0xf0))(plVar3,iVar1);
      (**(code **)(*plVar3 + 0x108))(plVar3,uVar14,auStack_218);
      auVar30 = auVar56._0_16_;
      auVar45._4_4_ = fStack_204;
      auVar45._0_4_ = fStack_208;
      auVar45._8_4_ = fStack_200;
      auVar45._12_4_ = fStack_1fc;
    }
    auVar30 = vcmpps_avx(auVar30,auVar45,1);
    bVar16 = auVar30[4];
    break;
  case 1:
    iVar12 = func_0x000144e05fa0(plVar2[1]);
    auVar55 = ZEXT1264(ZEXT812(0));
    auVar51._0_12_ = ZEXT812(0);
    auVar51._12_4_ = 0;
    if (iVar13 != iVar12) {
      uVar14 = (**(code **)(*plVar2 + 0xf0))(plVar2,iVar13);
      (**(code **)(*plVar2 + 0x108))(plVar2,uVar14,auStack_218);
      auVar51._4_4_ = fStack_204;
      auVar51._0_4_ = fStack_208;
      auVar51._8_4_ = fStack_200;
      auVar51._12_4_ = fStack_1fc;
    }
    auVar56 = ZEXT1664(auVar51);
    iVar12 = func_0x000144e05fa0(plVar3[1]);
    auVar30 = auVar56._0_16_;
    auVar44 = auVar55._0_16_;
    if (iVar1 != iVar12) {
      uVar14 = (**(code **)(*plVar3 + 0xf0))(plVar3,iVar1);
      (**(code **)(*plVar3 + 0x108))(plVar3,uVar14,auStack_218);
      auVar30 = auVar56._0_16_;
      auVar44._4_4_ = fStack_204;
      auVar44._0_4_ = fStack_208;
      auVar44._8_4_ = fStack_200;
      auVar44._12_4_ = fStack_1fc;
    }
    auVar30 = vcmpps_avx(auVar44,auVar30,1);
    bVar16 = auVar30[4];
    break;
  case 2:
    iVar12 = func_0x000144e05fa0(plVar2[1]);
    auVar55 = ZEXT1264(ZEXT812(0));
    auVar53._0_12_ = ZEXT812(0);
    auVar53._12_4_ = 0;
    if (iVar13 != iVar12) {
      uVar14 = (**(code **)(*plVar2 + 0xf0))(plVar2,iVar13);
      (**(code **)(*plVar2 + 0x108))(plVar2,uVar14,auStack_218);
      auVar53._4_4_ = fStack_204;
      auVar53._0_4_ = fStack_208;
      auVar53._8_4_ = fStack_200;
      auVar53._12_4_ = fStack_1fc;
    }
    auVar56 = ZEXT1664(auVar53);
    iVar12 = func_0x000144e05fa0(plVar3[1]);
    auVar30 = auVar56._0_16_;
    auVar46 = auVar55._0_16_;
    if (iVar1 != iVar12) {
      uVar14 = (**(code **)(*plVar3 + 0xf0))(plVar3,iVar1);
      (**(code **)(*plVar3 + 0x108))(plVar3,uVar14,auStack_218);
      auVar30 = auVar56._0_16_;
      auVar46._4_4_ = fStack_204;
      auVar46._0_4_ = fStack_208;
      auVar46._8_4_ = fStack_200;
      auVar46._12_4_ = fStack_1fc;
    }
    auVar30 = vcmpps_avx(auVar46,auVar30,1);
    goto code_r0x0001400d96c6;
  case 3:
code_r0x0001400d964a:
    iVar12 = func_0x000144e05fa0(plVar2[1]);
    auVar55 = ZEXT1264(ZEXT812(0));
    auVar54._0_12_ = ZEXT812(0);
    auVar54._12_4_ = 0;
    if (iVar13 != iVar12) {
      uVar14 = (**(code **)(*plVar2 + 0xf0))(plVar2,iVar13);
      (**(code **)(*plVar2 + 0x108))(plVar2,uVar14,auStack_218);
      auVar54._4_4_ = fStack_204;
      auVar54._0_4_ = fStack_208;
      auVar54._8_4_ = fStack_200;
      auVar54._12_4_ = fStack_1fc;
    }
    auVar56 = ZEXT1664(auVar54);
    iVar12 = func_0x000144e05fa0(plVar3[1]);
    auVar30 = auVar56._0_16_;
    auVar47 = auVar55._0_16_;
    if (iVar1 != iVar12) {
      uVar14 = (**(code **)(*plVar3 + 0xf0))(plVar3,iVar1);
      (**(code **)(*plVar3 + 0x108))(plVar3,uVar14,auStack_218);
      auVar30 = auVar56._0_16_;
      auVar47._4_4_ = fStack_204;
      auVar47._0_4_ = fStack_208;
      auVar47._8_4_ = fStack_200;
      auVar47._12_4_ = fStack_1fc;
    }
    auVar30 = vcmpps_avx(auVar30,auVar47,1);
code_r0x0001400d96c6:
    bVar16 = auVar30[8];
    break;
  case 4:
    bVar18 = *(float *)(param_3 + 0xf8) == *(float *)(param_3 + 0x218);
    bVar17 = *(float *)(param_3 + 0xf8) < *(float *)(param_3 + 0x218);
    goto code_r0x0001400d8adf;
  default:
    *(byte *)(param_3 + 0x110) = *(byte *)(param_3 + 0x110) & 0x7f;
    goto LAB_1400d8c24;
  case 6:
    fVar20 = *(float *)(param_1 + 0x350) * _DAT_14615a5a0;
    if ((*(float *)(param_3 + 0x40) <= fVar20) && (*(float *)(param_3 + 0x160) <= fVar20)) {
      bVar11 = *(byte *)(param_3 + 0x110);
      if (*(float *)(param_3 + 0x218) <= *(float *)(param_3 + 0xf8)) goto code_r0x0001400d94dd;
      goto code_r0x0001400d8bea;
    }
    if (fVar20 < *(float *)(param_3 + 0x40)) {
      if (fVar20 < *(float *)(param_3 + 0x160)) goto code_r0x0001400d964a;
      *(byte *)(param_3 + 0x110) = *(byte *)(param_3 + 0x110) & 0x7f;
      goto code_r0x0001400d94e6;
    }
    *(byte *)(param_3 + 0x110) = *(byte *)(param_3 + 0x110) | 0x80;
    goto code_r0x0001400d8bf3;
  case 7:
    lVar15 = func_0x000144fa1050(*(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c));
    if (lVar15 == 0) {
      return;
    }
    fVar20 = (float)FUN_1451ce040(*(undefined8 *)(lVar15 + 8));
    if (0.0 < fVar20) {
      *(byte *)(param_3 + 0x110) = *(byte *)(param_3 + 0x110) | 0x80;
      *(byte *)(param_3 + 0x230) = *(byte *)(param_3 + 0x230) & 0x7f;
      return;
    }
    *(byte *)(param_3 + 0x110) = *(byte *)(param_3 + 0x110) & 0x7f;
    *(byte *)(param_3 + 0x230) = *(byte *)(param_3 + 0x230) | 0x80;
    return;
  case 8:
    *(byte *)(param_3 + 0x110) = *(byte *)(param_3 + 0x110) | 0x80;
    goto code_r0x0001400d8af5;
  case 9:
    auVar30 = *(undefined1 (*) [16])(param_3 + 0xf0);
    auVar28 = vpunpckhwd_avx(auVar30,auVar30);
    auVar28 = vpsrad_avx(auVar28,0x10);
    auVar28 = vcvtdq2ps_avx(auVar28);
    auVar28 = vshufpd_avx(auVar28,auVar28,3);
    auStack_228._0_4_ = auVar28._0_4_ * _DAT_146159c90 + auVar30._0_4_;
    auStack_228._4_4_ = auVar28._4_4_ * _UNK_146159c94 + auVar30._4_4_;
    auStack_228._8_4_ = auVar28._8_4_ * _UNK_146159c98 + auVar30._8_4_;
    auStack_228._12_4_ = auVar28._12_4_ * _UNK_146159c9c + auVar30._12_4_;
    plVar2 = *(longlong **)(param_3 + 0x28);
    iVar12 = *(int *)(param_3 + 0x30);
    iVar13 = func_0x000144e05fa0(plVar2[1]);
    fVar42 = 0.0;
    fVar48 = 0.0;
    fVar49 = 0.0;
    fVar50 = 0.0;
    fVar20 = 0.0;
    fVar19 = 0.0;
    fVar43 = 0.0;
    fVar58 = 0.0;
    if (iVar12 != iVar13) {
      uVar14 = (**(code **)(*plVar2 + 0xf0))(plVar2,iVar12);
      (**(code **)(*plVar2 + 0x108))(plVar2,uVar14,auStack_218);
      fVar20 = fStack_208;
      fVar19 = fStack_204;
      fVar43 = fStack_200;
      fVar58 = fStack_1fc;
    }
    (**(code **)(*plVar2 + 0x88))(plVar2,auStack_218);
    auVar8._4_4_ = fStack_204;
    auVar8._0_4_ = fStack_208;
    auVar8._8_4_ = fStack_200;
    auVar8._12_4_ = fStack_1fc;
    auVar30 = vshufps_avx(auVar8,auStack_1f8,0x33);
    auVar30 = vshufps_avx(auVar8,auVar30,0x2f);
    auVar55 = ZEXT1664(CONCAT412((_DAT_145fc6ed8 + auVar30._12_4_) * fVar58,
                                 CONCAT48((_DAT_145fc6ed8 + auVar30._8_4_) * fVar43,
                                          CONCAT44((_DAT_145fc6ed8 + auVar30._4_4_) * fVar19,
                                                   (_DAT_145fc6ed8 + auVar30._0_4_) * fVar20))));
    fVar43 = _DAT_145fc6ed8;
    fVar58 = _DAT_145fc6ed8;
    fVar60 = _DAT_145fc6ed8;
    fVar61 = _DAT_145fc6ed8;
    (**(code **)(*plVar2 + 0x88))(plVar2,&fStack_c8);
    fVar20 = auVar55._0_4_;
    auVar28 = auVar55._0_16_;
    auVar30 = vshufps_avx(auVar28,auVar28,0x55);
    auVar28 = vshufps_avx(auVar28,auVar28,0xaa);
    fVar57 = 0.0;
    fVar59 = 0.0;
    auVar21._0_4_ =
         auVar28._0_4_ * fStack_a8 +
         auVar30._0_4_ * fStack_b8 + fVar20 * fStack_c8 + auStack_98._0_4_;
    auVar21._4_4_ =
         auVar28._4_4_ * fStack_a4 +
         auVar30._4_4_ * fStack_b4 + fVar20 * fStack_c4 + auStack_98._4_4_;
    auVar21._8_4_ =
         auVar28._8_4_ * fStack_a0 +
         auVar30._8_4_ * fStack_b0 + fVar20 * fStack_c0 + auStack_98._8_4_;
    auVar21._12_4_ =
         auVar28._12_4_ * fStack_9c +
         auVar30._12_4_ * fStack_ac + fVar20 * fStack_bc + auStack_98._12_4_;
    auVar33._4_4_ = _DAT_14615a290;
    auVar33._0_4_ = _DAT_14615a290;
    auVar33._8_4_ = _DAT_14615a290;
    auVar33._12_4_ = _DAT_14615a290;
    auVar28 = vrcpps_avx(auVar33);
    auVar30 = vblendps_avx(auVar21,auStack_98,8);
    fVar62 = auVar28._0_4_;
    fVar63 = auVar28._4_4_;
    fVar64 = auVar28._8_4_;
    fVar65 = auVar28._12_4_;
    fVar62 = (-(fVar62 * _DAT_14615a290) + fVar43) * fVar62 + fVar62;
    fVar63 = (-(fVar63 * _DAT_14615a290) + fVar58) * fVar63 + fVar63;
    fVar64 = (-(fVar64 * _DAT_14615a290) + fVar60) * fVar64 + fVar64;
    fVar65 = (-(fVar65 * _DAT_14615a290) + fVar61) * fVar65 + fVar65;
    auVar38._0_4_ = fVar62 * auVar30._0_4_;
    auVar38._4_4_ = fVar63 * auVar30._4_4_;
    auVar38._8_4_ = fVar64 * auVar30._8_4_;
    auVar38._12_4_ = fVar65 * auVar30._12_4_;
    auVar28 = vroundps_avx(auVar38,3);
    auVar34._0_4_ = -(auVar28._0_4_ * _DAT_14615a290) + auVar30._0_4_;
    auVar34._4_4_ = -(auVar28._4_4_ * _DAT_14615a290) + auVar30._4_4_;
    auVar34._8_4_ = -(auVar28._8_4_ * _DAT_14615a290) + auVar30._8_4_;
    auVar34._12_4_ = -(auVar28._12_4_ * _DAT_14615a290) + auVar30._12_4_;
    auVar26._0_4_ = (int)auVar28._0_4_;
    auVar26._4_4_ = (int)auVar28._4_4_;
    auVar26._8_4_ = (int)auVar28._8_4_;
    auVar26._12_4_ = (int)auVar28._12_4_;
    auVar30 = vblendps_avx(auVar21,auVar34,3);
    auVar28 = vpackssdw_avx(auVar26,auVar26);
    sVar25 = auVar28._0_2_;
    auVar4._0_2_ = sVar25 + auStack_98._0_2_;
    sVar32 = auVar28._2_2_;
    auVar4._2_2_ = sVar32 + auStack_98._2_2_;
    auVar4._4_2_ = sVar25 + auStack_98._4_2_;
    auVar4._6_2_ = sVar32 + auStack_98._6_2_;
    auVar4._8_2_ = sVar25 + auStack_98._8_2_;
    auVar4._10_2_ = sVar32 + auStack_98._10_2_;
    auVar4._12_2_ = sVar25 + auStack_98._12_2_;
    auVar4._14_2_ = sVar32 + auStack_98._14_2_;
    auVar28 = vpblendd_avx2(auVar30,auVar4,8);
    auVar30 = vpunpckhwd_avx(auVar28,auVar28);
    auVar30 = vpsrad_avx(auVar30,0x10);
    auVar30 = vcvtdq2ps_avx(auVar30);
    auVar30 = vshufpd_avx(auVar30,auVar30,3);
    fStack_d8 = _DAT_146159c90 * auVar30._0_4_ + auVar28._0_4_;
    fStack_d4 = _UNK_146159c94 * auVar30._4_4_ + auVar28._4_4_;
    fStack_d0 = auVar30._8_4_ * 0.0 + auVar28._8_4_;
    fStack_cc = auVar30._12_4_ * 0.0 + auVar28._12_4_;
    auVar30 = *(undefined1 (*) [16])(param_2 + 0xb0);
    uStack_198 = *(undefined8 *)(param_2 + 0xc0);
    uStack_190 = *(undefined8 *)(param_2 + 200);
    auVar28 = vpunpckhwd_avx(auVar30,auVar30);
    auVar28 = vpsrad_avx(auVar28,0x10);
    auVar28 = vcvtdq2ps_avx(auVar28);
    auVar28 = vshufpd_avx(auVar28,auVar28,3);
    auStack_e8._0_4_ = _DAT_146159c90 * auVar28._0_4_ + auVar30._0_4_;
    auStack_e8._4_4_ = _UNK_146159c94 * auVar28._4_4_ + auVar30._4_4_;
    auStack_e8._8_4_ = auVar28._8_4_ * 0.0 + auVar30._8_4_;
    auStack_e8._12_4_ = auVar28._12_4_ * 0.0 + auVar30._12_4_;
    uStack_1a8 = _DAT_14614f7f0;
    uStack_1a0 = _UNK_14614f7f8;
    fVar20 = _DAT_146159c90;
    fVar19 = _UNK_146159c94;
    uVar66 = _DAT_14614f7f0;
    uVar67 = _UNK_14614f7f8;
    FUN_1400e2b50(auStack_e8,&uStack_198,&fStack_d8,&uStack_1a8,auStack_228);
    auVar30 = *(undefined1 (*) [16])(param_3 + 0x210);
    auVar28 = vpunpckhwd_avx(auVar30,auVar30);
    auVar28 = vpsrad_avx(auVar28,0x10);
    auVar28 = vcvtdq2ps_avx(auVar28);
    auVar28 = vshufpd_avx(auVar28,auVar28,3);
    auStack_1d8._0_4_ = fVar20 * auVar28._0_4_ + auVar30._0_4_;
    auStack_1d8._4_4_ = fVar19 * auVar28._4_4_ + auVar30._4_4_;
    auStack_1d8._8_4_ = fVar57 * auVar28._8_4_ + auVar30._8_4_;
    auStack_1d8._12_4_ = fVar59 * auVar28._12_4_ + auVar30._12_4_;
    plVar2 = *(longlong **)(param_3 + 0x148);
    iVar12 = *(int *)(param_3 + 0x150);
    iVar13 = func_0x000144e05fa0(plVar2[1]);
    if (iVar12 != iVar13) {
      uVar14 = (**(code **)(*plVar2 + 0xf0))(plVar2,iVar12);
      (**(code **)(*plVar2 + 0x108))(plVar2,uVar14,auStack_218);
      fVar42 = fStack_208;
      fVar48 = fStack_204;
      fVar49 = fStack_200;
      fVar50 = fStack_1fc;
    }
    (**(code **)(*plVar2 + 0x88))(plVar2,auStack_218);
    auVar9._4_4_ = fStack_204;
    auVar9._0_4_ = fStack_208;
    auVar9._8_4_ = fStack_200;
    auVar9._12_4_ = fStack_1fc;
    auVar30 = vshufps_avx(auVar9,auStack_1f8,0x33);
    auVar30 = vshufps_avx(auVar9,auVar30,0x2f);
    auVar55 = ZEXT1664(CONCAT412((fVar61 + auVar30._12_4_) * fVar50,
                                 CONCAT48((fVar60 + auVar30._8_4_) * fVar49,
                                          CONCAT44((fVar58 + auVar30._4_4_) * fVar48,
                                                   (fVar43 + auVar30._0_4_) * fVar42))));
    (**(code **)(*plVar2 + 0x88))(plVar2,&fStack_c8);
    fVar43 = auVar55._0_4_;
    auVar28 = auVar55._0_16_;
    auVar30 = vshufps_avx(auVar28,auVar28,0x55);
    auVar28 = vshufps_avx(auVar28,auVar28,0xaa);
    auVar22._0_4_ =
         auVar28._0_4_ * fStack_a8 +
         auVar30._0_4_ * fStack_b8 + fVar43 * fStack_c8 + auStack_98._0_4_;
    auVar22._4_4_ =
         auVar28._4_4_ * fStack_a4 +
         auVar30._4_4_ * fStack_b4 + fVar43 * fStack_c4 + auStack_98._4_4_;
    auVar22._8_4_ =
         auVar28._8_4_ * fStack_a0 +
         auVar30._8_4_ * fStack_b0 + fVar43 * fStack_c0 + auStack_98._8_4_;
    auVar22._12_4_ =
         auVar28._12_4_ * fStack_9c +
         auVar30._12_4_ * fStack_ac + fVar43 * fStack_bc + auStack_98._12_4_;
    auVar30 = vblendps_avx(auVar22,auStack_98,8);
    auVar35._0_4_ = fVar62 * auVar30._0_4_;
    auVar35._4_4_ = fVar63 * auVar30._4_4_;
    auVar35._8_4_ = fVar64 * auVar30._8_4_;
    auVar35._12_4_ = fVar65 * auVar30._12_4_;
    auVar28 = vroundps_avx(auVar35,3);
    auVar39._0_4_ = auVar28._0_4_ * _DAT_14615ad78 + auVar30._0_4_;
    auVar39._4_4_ = auVar28._4_4_ * _DAT_14615ad78 + auVar30._4_4_;
    auVar39._8_4_ = auVar28._8_4_ * _DAT_14615ad78 + auVar30._8_4_;
    auVar39._12_4_ = auVar28._12_4_ * _DAT_14615ad78 + auVar30._12_4_;
    auVar27._0_4_ = (int)auVar28._0_4_;
    auVar27._4_4_ = (int)auVar28._4_4_;
    auVar27._8_4_ = (int)auVar28._8_4_;
    auVar27._12_4_ = (int)auVar28._12_4_;
    auVar30 = vblendps_avx(auVar22,auVar39,3);
    auVar28 = vpackssdw_avx(auVar27,auVar27);
    sVar25 = auVar28._0_2_;
    auVar5._0_2_ = sVar25 + auStack_98._0_2_;
    sVar32 = auVar28._2_2_;
    auVar5._2_2_ = sVar32 + auStack_98._2_2_;
    auVar5._4_2_ = sVar25 + auStack_98._4_2_;
    auVar5._6_2_ = sVar32 + auStack_98._6_2_;
    auVar5._8_2_ = sVar25 + auStack_98._8_2_;
    auVar5._10_2_ = sVar32 + auStack_98._10_2_;
    auVar5._12_2_ = sVar25 + auStack_98._12_2_;
    auVar5._14_2_ = sVar32 + auStack_98._14_2_;
    auVar28 = vpblendd_avx2(auVar30,auVar5,8);
    auVar30 = vpunpckhwd_avx(auVar28,auVar28);
    auVar30 = vpsrad_avx(auVar30,0x10);
    auVar30 = vcvtdq2ps_avx(auVar30);
    auVar30 = vshufpd_avx(auVar30,auVar30,3);
    fStack_f8 = fVar20 * auVar30._0_4_ + auVar28._0_4_;
    fStack_f4 = fVar19 * auVar30._4_4_ + auVar28._4_4_;
    fStack_f0 = fVar57 * auVar30._8_4_ + auVar28._8_4_;
    fStack_ec = fVar59 * auVar30._12_4_ + auVar28._12_4_;
    auVar30 = *(undefined1 (*) [16])(param_2 + 0xb0);
    uStack_1b8 = *(undefined8 *)(param_2 + 0xc0);
    uStack_1b0 = *(undefined8 *)(param_2 + 200);
    auVar28 = vpunpckhwd_avx(auVar30,auVar30);
    auVar28 = vpsrad_avx(auVar28,0x10);
    auVar28 = vcvtdq2ps_avx(auVar28);
    auVar28 = vshufpd_avx(auVar28,auVar28,3);
    auStack_108._0_4_ = fVar20 * auVar28._0_4_ + auVar30._0_4_;
    auStack_108._4_4_ = fVar19 * auVar28._4_4_ + auVar30._4_4_;
    auStack_108._8_4_ = fVar57 * auVar28._8_4_ + auVar30._8_4_;
    auStack_108._12_4_ = fVar59 * auVar28._12_4_ + auVar30._12_4_;
    uStack_1c8 = uVar66;
    uStack_1c0 = uVar67;
    FUN_1400e2b50(auStack_108,&uStack_1b8,&fStack_f8,&uStack_1c8,auStack_1d8);
    bVar18 = (float)auStack_228._8_4_ == (float)auStack_1d8._8_4_;
    bVar17 = (float)auStack_228._8_4_ < (float)auStack_1d8._8_4_;
    goto code_r0x0001400d8f95;
  case 10:
    auVar30 = *(undefined1 (*) [16])(param_3 + 0xf0);
    auVar28 = vpunpckhwd_avx(auVar30,auVar30);
    auVar28 = vpsrad_avx(auVar28,0x10);
    auVar28 = vcvtdq2ps_avx(auVar28);
    auVar28 = vshufpd_avx(auVar28,auVar28,3);
    auStack_228._0_4_ = auVar28._0_4_ * _DAT_146159c90 + auVar30._0_4_;
    auStack_228._4_4_ = auVar28._4_4_ * _UNK_146159c94 + auVar30._4_4_;
    auStack_228._8_4_ = auVar28._8_4_ * _UNK_146159c98 + auVar30._8_4_;
    auStack_228._12_4_ = auVar28._12_4_ * _UNK_146159c9c + auVar30._12_4_;
    plVar2 = *(longlong **)(param_3 + 0x28);
    iVar12 = *(int *)(param_3 + 0x30);
    iVar13 = func_0x000144e05fa0(plVar2[1]);
    fVar42 = 0.0;
    fVar48 = 0.0;
    fVar49 = 0.0;
    fVar50 = 0.0;
    fVar20 = 0.0;
    fVar19 = 0.0;
    fVar43 = 0.0;
    fVar58 = 0.0;
    if (iVar12 != iVar13) {
      uVar14 = (**(code **)(*plVar2 + 0xf0))(plVar2,iVar12);
      (**(code **)(*plVar2 + 0x108))(plVar2,uVar14,auStack_218);
      fVar20 = fStack_208;
      fVar19 = fStack_204;
      fVar43 = fStack_200;
      fVar58 = fStack_1fc;
    }
    (**(code **)(*plVar2 + 0x88))(plVar2,auStack_218);
    auVar28._4_4_ = fStack_204;
    auVar28._0_4_ = fStack_208;
    auVar28._8_4_ = fStack_200;
    auVar28._12_4_ = fStack_1fc;
    auVar30 = vshufps_avx(auVar28,auStack_1f8,0x33);
    auVar30 = vshufps_avx(auVar28,auVar30,0x2f);
    auVar55 = ZEXT1664(CONCAT412((_DAT_145fc6ed8 + auVar30._12_4_) * fVar58,
                                 CONCAT48((_DAT_145fc6ed8 + auVar30._8_4_) * fVar43,
                                          CONCAT44((_DAT_145fc6ed8 + auVar30._4_4_) * fVar19,
                                                   (_DAT_145fc6ed8 + auVar30._0_4_) * fVar20))));
    fVar43 = _DAT_145fc6ed8;
    fVar58 = _DAT_145fc6ed8;
    fVar60 = _DAT_145fc6ed8;
    fVar61 = _DAT_145fc6ed8;
    (**(code **)(*plVar2 + 0x88))(plVar2,&fStack_c8);
    fVar20 = auVar55._0_4_;
    auVar28 = auVar55._0_16_;
    auVar30 = vshufps_avx(auVar28,auVar28,0x55);
    auVar28 = vshufps_avx(auVar28,auVar28,0xaa);
    fVar57 = 0.0;
    fVar59 = 0.0;
    auVar23._0_4_ =
         auVar28._0_4_ * fStack_a8 +
         auVar30._0_4_ * fStack_b8 + fVar20 * fStack_c8 + auStack_98._0_4_;
    auVar23._4_4_ =
         auVar28._4_4_ * fStack_a4 +
         auVar30._4_4_ * fStack_b4 + fVar20 * fStack_c4 + auStack_98._4_4_;
    auVar23._8_4_ =
         auVar28._8_4_ * fStack_a0 +
         auVar30._8_4_ * fStack_b0 + fVar20 * fStack_c0 + auStack_98._8_4_;
    auVar23._12_4_ =
         auVar28._12_4_ * fStack_9c +
         auVar30._12_4_ * fStack_ac + fVar20 * fStack_bc + auStack_98._12_4_;
    auVar30._4_4_ = _DAT_14615a290;
    auVar30._0_4_ = _DAT_14615a290;
    auVar30._8_4_ = _DAT_14615a290;
    auVar30._12_4_ = _DAT_14615a290;
    auVar28 = vrcpps_avx(auVar30);
    auVar30 = vblendps_avx(auVar23,auStack_98,8);
    fVar62 = auVar28._0_4_;
    fVar63 = auVar28._4_4_;
    fVar64 = auVar28._8_4_;
    fVar65 = auVar28._12_4_;
    fVar62 = (-(fVar62 * _DAT_14615a290) + fVar43) * fVar62 + fVar62;
    fVar63 = (-(fVar63 * _DAT_14615a290) + fVar58) * fVar63 + fVar63;
    fVar64 = (-(fVar64 * _DAT_14615a290) + fVar60) * fVar64 + fVar64;
    fVar65 = (-(fVar65 * _DAT_14615a290) + fVar61) * fVar65 + fVar65;
    auVar40._0_4_ = fVar62 * auVar30._0_4_;
    auVar40._4_4_ = fVar63 * auVar30._4_4_;
    auVar40._8_4_ = fVar64 * auVar30._8_4_;
    auVar40._12_4_ = fVar65 * auVar30._12_4_;
    auVar28 = vroundps_avx(auVar40,3);
    auVar36._0_4_ = -(auVar28._0_4_ * _DAT_14615a290) + auVar30._0_4_;
    auVar36._4_4_ = -(auVar28._4_4_ * _DAT_14615a290) + auVar30._4_4_;
    auVar36._8_4_ = -(auVar28._8_4_ * _DAT_14615a290) + auVar30._8_4_;
    auVar36._12_4_ = -(auVar28._12_4_ * _DAT_14615a290) + auVar30._12_4_;
    auVar29._0_4_ = (int)auVar28._0_4_;
    auVar29._4_4_ = (int)auVar28._4_4_;
    auVar29._8_4_ = (int)auVar28._8_4_;
    auVar29._12_4_ = (int)auVar28._12_4_;
    auVar30 = vblendps_avx(auVar23,auVar36,3);
    auVar28 = vpackssdw_avx(auVar29,auVar29);
    sVar25 = auVar28._0_2_;
    auVar6._0_2_ = sVar25 + auStack_98._0_2_;
    sVar32 = auVar28._2_2_;
    auVar6._2_2_ = sVar32 + auStack_98._2_2_;
    auVar6._4_2_ = sVar25 + auStack_98._4_2_;
    auVar6._6_2_ = sVar32 + auStack_98._6_2_;
    auVar6._8_2_ = sVar25 + auStack_98._8_2_;
    auVar6._10_2_ = sVar32 + auStack_98._10_2_;
    auVar6._12_2_ = sVar25 + auStack_98._12_2_;
    auVar6._14_2_ = sVar32 + auStack_98._14_2_;
    auVar28 = vpblendd_avx2(auVar30,auVar6,8);
    auVar30 = vpunpckhwd_avx(auVar28,auVar28);
    auVar30 = vpsrad_avx(auVar30,0x10);
    auVar30 = vcvtdq2ps_avx(auVar30);
    auVar30 = vshufpd_avx(auVar30,auVar30,3);
    fStack_118 = _DAT_146159c90 * auVar30._0_4_ + auVar28._0_4_;
    fStack_114 = _UNK_146159c94 * auVar30._4_4_ + auVar28._4_4_;
    fStack_110 = auVar30._8_4_ * 0.0 + auVar28._8_4_;
    fStack_10c = auVar30._12_4_ * 0.0 + auVar28._12_4_;
    auVar30 = *(undefined1 (*) [16])(param_2 + 0xb0);
    uStack_158 = *(undefined8 *)(param_2 + 0xc0);
    uStack_150 = *(undefined8 *)(param_2 + 200);
    auVar28 = vpunpckhwd_avx(auVar30,auVar30);
    auVar28 = vpsrad_avx(auVar28,0x10);
    auVar28 = vcvtdq2ps_avx(auVar28);
    auVar28 = vshufpd_avx(auVar28,auVar28,3);
    auStack_128._0_4_ = _DAT_146159c90 * auVar28._0_4_ + auVar30._0_4_;
    auStack_128._4_4_ = _UNK_146159c94 * auVar28._4_4_ + auVar30._4_4_;
    auStack_128._8_4_ = auVar28._8_4_ * 0.0 + auVar30._8_4_;
    auStack_128._12_4_ = auVar28._12_4_ * 0.0 + auVar30._12_4_;
    uStack_168 = _DAT_14614f7f0;
    uStack_160 = _UNK_14614f7f8;
    fVar20 = _DAT_146159c90;
    fVar19 = _UNK_146159c94;
    uVar66 = _DAT_14614f7f0;
    uVar67 = _UNK_14614f7f8;
    FUN_1400e2b50(auStack_128,&uStack_158,&fStack_118,&uStack_168,auStack_228);
    auVar30 = *(undefined1 (*) [16])(param_3 + 0x210);
    auVar28 = vpunpckhwd_avx(auVar30,auVar30);
    auVar28 = vpsrad_avx(auVar28,0x10);
    auVar28 = vcvtdq2ps_avx(auVar28);
    auVar28 = vshufpd_avx(auVar28,auVar28,3);
    auStack_1d8._0_4_ = fVar20 * auVar28._0_4_ + auVar30._0_4_;
    auStack_1d8._4_4_ = fVar19 * auVar28._4_4_ + auVar30._4_4_;
    auStack_1d8._8_4_ = fVar57 * auVar28._8_4_ + auVar30._8_4_;
    auStack_1d8._12_4_ = fVar59 * auVar28._12_4_ + auVar30._12_4_;
    plVar2 = *(longlong **)(param_3 + 0x148);
    iVar12 = *(int *)(param_3 + 0x150);
    iVar13 = func_0x000144e05fa0(plVar2[1]);
    if (iVar12 != iVar13) {
      uVar14 = (**(code **)(*plVar2 + 0xf0))(plVar2,iVar12);
      (**(code **)(*plVar2 + 0x108))(plVar2,uVar14,auStack_218);
      fVar42 = fStack_208;
      fVar48 = fStack_204;
      fVar49 = fStack_200;
      fVar50 = fStack_1fc;
    }
    (**(code **)(*plVar2 + 0x88))(plVar2,auStack_218);
    auVar10._4_4_ = fStack_204;
    auVar10._0_4_ = fStack_208;
    auVar10._8_4_ = fStack_200;
    auVar10._12_4_ = fStack_1fc;
    auVar30 = vshufps_avx(auVar10,auStack_1f8,0x33);
    auVar30 = vshufps_avx(auVar10,auVar30,0x2f);
    auVar55 = ZEXT1664(CONCAT412((fVar61 + auVar30._12_4_) * fVar50,
                                 CONCAT48((fVar60 + auVar30._8_4_) * fVar49,
                                          CONCAT44((fVar58 + auVar30._4_4_) * fVar48,
                                                   (fVar43 + auVar30._0_4_) * fVar42))));
    (**(code **)(*plVar2 + 0x88))(plVar2,&fStack_c8);
    fVar43 = auVar55._0_4_;
    auVar28 = auVar55._0_16_;
    auVar30 = vshufps_avx(auVar28,auVar28,0x55);
    auVar28 = vshufps_avx(auVar28,auVar28,0xaa);
    auVar24._0_4_ =
         auVar28._0_4_ * fStack_a8 +
         auVar30._0_4_ * fStack_b8 + fVar43 * fStack_c8 + auStack_98._0_4_;
    auVar24._4_4_ =
         auVar28._4_4_ * fStack_a4 +
         auVar30._4_4_ * fStack_b4 + fVar43 * fStack_c4 + auStack_98._4_4_;
    auVar24._8_4_ =
         auVar28._8_4_ * fStack_a0 +
         auVar30._8_4_ * fStack_b0 + fVar43 * fStack_c0 + auStack_98._8_4_;
    auVar24._12_4_ =
         auVar28._12_4_ * fStack_9c +
         auVar30._12_4_ * fStack_ac + fVar43 * fStack_bc + auStack_98._12_4_;
    auVar30 = vblendps_avx(auVar24,auStack_98,8);
    auVar37._0_4_ = fVar62 * auVar30._0_4_;
    auVar37._4_4_ = fVar63 * auVar30._4_4_;
    auVar37._8_4_ = fVar64 * auVar30._8_4_;
    auVar37._12_4_ = fVar65 * auVar30._12_4_;
    auVar28 = vroundps_avx(auVar37,3);
    auVar41._0_4_ = auVar28._0_4_ * _DAT_14615ad78 + auVar30._0_4_;
    auVar41._4_4_ = auVar28._4_4_ * _DAT_14615ad78 + auVar30._4_4_;
    auVar41._8_4_ = auVar28._8_4_ * _DAT_14615ad78 + auVar30._8_4_;
    auVar41._12_4_ = auVar28._12_4_ * _DAT_14615ad78 + auVar30._12_4_;
    auVar31._0_4_ = (int)auVar28._0_4_;
    auVar31._4_4_ = (int)auVar28._4_4_;
    auVar31._8_4_ = (int)auVar28._8_4_;
    auVar31._12_4_ = (int)auVar28._12_4_;
    auVar30 = vblendps_avx(auVar24,auVar41,3);
    auVar28 = vpackssdw_avx(auVar31,auVar31);
    sVar25 = auVar28._0_2_;
    auVar7._0_2_ = sVar25 + auStack_98._0_2_;
    sVar32 = auVar28._2_2_;
    auVar7._2_2_ = sVar32 + auStack_98._2_2_;
    auVar7._4_2_ = sVar25 + auStack_98._4_2_;
    auVar7._6_2_ = sVar32 + auStack_98._6_2_;
    auVar7._8_2_ = sVar25 + auStack_98._8_2_;
    auVar7._10_2_ = sVar32 + auStack_98._10_2_;
    auVar7._12_2_ = sVar25 + auStack_98._12_2_;
    auVar7._14_2_ = sVar32 + auStack_98._14_2_;
    auVar28 = vpblendd_avx2(auVar30,auVar7,8);
    auVar30 = vpunpckhwd_avx(auVar28,auVar28);
    auVar30 = vpsrad_avx(auVar30,0x10);
    auVar30 = vcvtdq2ps_avx(auVar30);
    auVar30 = vshufpd_avx(auVar30,auVar30,3);
    fStack_138 = fVar20 * auVar30._0_4_ + auVar28._0_4_;
    fStack_134 = fVar19 * auVar30._4_4_ + auVar28._4_4_;
    fStack_130 = fVar57 * auVar30._8_4_ + auVar28._8_4_;
    fStack_12c = fVar59 * auVar30._12_4_ + auVar28._12_4_;
    auVar30 = *(undefined1 (*) [16])(param_2 + 0xb0);
    uStack_178 = *(undefined8 *)(param_2 + 0xc0);
    uStack_170 = *(undefined8 *)(param_2 + 200);
    auVar28 = vpunpckhwd_avx(auVar30,auVar30);
    auVar28 = vpsrad_avx(auVar28,0x10);
    auVar28 = vcvtdq2ps_avx(auVar28);
    auVar28 = vshufpd_avx(auVar28,auVar28,3);
    auStack_148._0_4_ = fVar20 * auVar28._0_4_ + auVar30._0_4_;
    auStack_148._4_4_ = fVar19 * auVar28._4_4_ + auVar30._4_4_;
    auStack_148._8_4_ = fVar57 * auVar28._8_4_ + auVar30._8_4_;
    auStack_148._12_4_ = fVar59 * auVar28._12_4_ + auVar30._12_4_;
    uStack_188 = uVar66;
    uStack_180 = uVar67;
    FUN_1400e2b50(auStack_148,&uStack_178,&fStack_138,&uStack_188,auStack_1d8);
    bVar18 = (float)auStack_1d8._8_4_ == (float)auStack_228._8_4_;
    bVar17 = (float)auStack_1d8._8_4_ < (float)auStack_228._8_4_;
code_r0x0001400d8f95:
    *(byte *)(param_3 + 0x110) = (!bVar17 && !bVar18) << 7 | *(byte *)(param_3 + 0x110) & 0x7f;
    *(byte *)(param_3 + 0x230) = (bVar17 || bVar18) << 7 | *(byte *)(param_3 + 0x230) & 0x7f;
    return;
  case 0xb:
    bVar11 = *(byte *)(param_3 + 0x110);
    if ((*(byte *)(*(longlong *)(param_1 + 0x188) + 0x1a4) & 0x20) == 0) goto code_r0x0001400d8aec;
    goto LAB_1400d8c1b;
  case 0xc:
    lVar15 = func_0x000144fa1050();
    fVar20 = 0.0;
    fVar19 = 0.0;
    if (lVar15 != 0) {
      fVar20 = 0.0;
      fVar19 = (float)FUN_1451ce040();
    }
    if ((fVar20 < fVar19) || (*(float *)(param_2 + 0xf4) < _DAT_146159ec4)) {
      if ((0.0 < fVar19) && (_DAT_146159ec4 <= *(float *)(param_2 + 0xf4))) {
        bVar18 = false;
        goto code_r0x0001400d90d1;
      }
code_r0x0001400d9034:
      if (*(float *)(param_3 + 0x218) <= *(float *)(param_3 + 0xf8)) {
        *(byte *)(param_3 + 0x110) = *(byte *)(param_3 + 0x110) & 0x7f;
code_r0x0001400d9055:
        *(byte *)(param_3 + 0x230) = *(byte *)(param_3 + 0x230) | 0x80;
        return;
      }
      *(byte *)(param_3 + 0x110) = *(byte *)(param_3 + 0x110) | 0x80;
    }
    else {
      bVar18 = _DAT_145fc6ed8 <= (float)((uint)fVar19 & _DAT_145fc6f4c);
      if (0.0 < fVar19) {
code_r0x0001400d90d1:
        fVar20 = (float)((uint)(_DAT_145fc6f80 - fVar19) & _DAT_145fc6f4c);
        if ((fVar20 < _DAT_145fc6ed8) && (!bVar18)) goto code_r0x0001400d9034;
        if (_DAT_145fc6ed8 <= fVar20) {
          *(byte *)(param_3 + 0x110) = *(byte *)(param_3 + 0x110) & 0x7f;
          goto code_r0x0001400d9055;
        }
      }
      else if ((float)((uint)fVar19 & _DAT_145fc6f4c) < _DAT_145fc6ed8) goto code_r0x0001400d9034;
      *(byte *)(param_3 + 0x110) = *(byte *)(param_3 + 0x110) | 0x80;
    }
    *(byte *)(param_3 + 0x230) = *(byte *)(param_3 + 0x230) & 0x7f;
    return;
  }
  bVar11 = *(byte *)(param_3 + 0x110);
  if ((bVar16 & 1) == 0) {
code_r0x0001400d94dd:
    *(byte *)(param_3 + 0x110) = bVar11 & 0x7f;
code_r0x0001400d94e6:
    *(byte *)(param_3 + 0x230) = *(byte *)(param_3 + 0x230) | 0x80;
  }
  else {
code_r0x0001400d8bea:
    *(byte *)(param_3 + 0x110) = bVar11 | 0x80;
code_r0x0001400d8bf3:
    *(byte *)(param_3 + 0x230) = *(byte *)(param_3 + 0x230) & 0x7f;
  }
  return;
}

