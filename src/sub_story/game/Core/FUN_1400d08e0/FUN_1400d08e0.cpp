// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d08e0  size: 1129 bytes
// Name:    FUN_1400d08e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d08e0(longlong *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  char param_4,float param_5)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  longlong lVar11;
  int iVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  short sVar17;
  short sVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar36;
  float fVar37;
  undefined1 auVar33 [16];
  float fVar38;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [64];
  undefined1 auVar46 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [64];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar59 [64];
  undefined1 auStack_128 [16];
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 auStack_108 [16];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 auStack_b8 [16];
  undefined1 auVar47 [64];
  
  auVar46._0_12_ = ZEXT812(0);
  auVar46._12_4_ = 0;
  auVar47 = ZEXT1664(auVar46);
  auVar46 = vblendps_avx(auVar46,*param_3,0xb);
  auVar45 = ZEXT1664(auVar46);
  fVar32 = 0.0;
  fVar36 = 0.0;
  fVar37 = 0.0;
  fVar38 = 0.0;
  auVar53 = ZEXT1264(ZEXT812(0));
  if (0.0 < param_5) {
    plVar1 = (longlong *)*param_1;
    lVar11 = param_1[1];
    iVar12 = func_0x000144e05fa0(plVar1[1]);
    if ((int)lVar11 == iVar12) {
      fVar32 = 0.0;
      fVar36 = 0.0;
      fVar37 = 0.0;
      fVar38 = 0.0;
    }
    else {
      uVar13 = (**(code **)(*plVar1 + 0xf0))(plVar1,(int)lVar11);
      (**(code **)(*plVar1 + 0x108))(plVar1,uVar13,auStack_128);
      fVar32 = fStack_118;
      fVar36 = fStack_114;
      fVar37 = fStack_110;
      fVar38 = fStack_10c;
    }
    (**(code **)(*plVar1 + 0x88))(plVar1,auStack_128);
    auVar19._4_4_ = fStack_114;
    auVar19._0_4_ = fStack_118;
    auVar19._8_4_ = fStack_110;
    auVar19._12_4_ = fStack_10c;
    auVar46 = vshufps_avx(auVar19,auStack_108,0x33);
    auVar46 = vshufps_avx(auVar19,auVar46,0x2f);
    auVar53 = ZEXT1664(CONCAT412(fVar38 * (_DAT_145fc6ed8 + auVar46._12_4_),
                                 CONCAT48(fVar37 * (_DAT_145fc6ed8 + auVar46._8_4_),
                                          CONCAT44(fVar36 * (_DAT_145fc6ed8 + auVar46._4_4_),
                                                   fVar32 * (_DAT_145fc6ed8 + auVar46._0_4_)))));
    fVar48 = _DAT_145fc6ed8;
    fVar49 = _DAT_145fc6ed8;
    fVar50 = _DAT_145fc6ed8;
    fVar51 = _DAT_145fc6ed8;
    (**(code **)(*plVar1 + 0x88))(plVar1,&fStack_e8);
    fVar32 = auVar53._0_4_;
    auVar19 = auVar53._0_16_;
    auVar46 = vshufps_avx(auVar19,auVar19,0x55);
    auVar19 = vshufps_avx(auVar19,auVar19,0xaa);
    auVar14._0_4_ =
         auVar19._0_4_ * fStack_c8 +
         auVar46._0_4_ * fStack_d8 + fVar32 * fStack_e8 + auStack_b8._0_4_;
    auVar14._4_4_ =
         auVar19._4_4_ * fStack_c4 +
         auVar46._4_4_ * fStack_d4 + fVar32 * fStack_e4 + auStack_b8._4_4_;
    auVar14._8_4_ =
         auVar19._8_4_ * fStack_c0 +
         auVar46._8_4_ * fStack_d0 + fVar32 * fStack_e0 + auStack_b8._8_4_;
    auVar14._12_4_ =
         auVar19._12_4_ * fStack_bc +
         auVar46._12_4_ * fStack_cc + fVar32 * fStack_dc + auStack_b8._12_4_;
    auVar23._4_4_ = _DAT_14615a290;
    auVar23._0_4_ = _DAT_14615a290;
    auVar23._8_4_ = _DAT_14615a290;
    auVar23._12_4_ = _DAT_14615a290;
    auVar19 = vrcpps_avx(auVar23);
    auVar46 = vblendps_avx(auVar14,auStack_b8,8);
    fVar32 = auVar19._0_4_;
    fVar36 = auVar19._4_4_;
    fVar37 = auVar19._8_4_;
    fVar38 = auVar19._12_4_;
    auVar39._0_4_ = ((-(fVar32 * _DAT_14615a290) + fVar48) * fVar32 + fVar32) * auVar46._0_4_;
    auVar39._4_4_ = ((-(fVar36 * _DAT_14615a290) + fVar49) * fVar36 + fVar36) * auVar46._4_4_;
    auVar39._8_4_ = ((-(fVar37 * _DAT_14615a290) + fVar50) * fVar37 + fVar37) * auVar46._8_4_;
    auVar39._12_4_ = ((-(fVar38 * _DAT_14615a290) + fVar51) * fVar38 + fVar38) * auVar46._12_4_;
    auVar19 = vroundps_avx(auVar39,3);
    auVar24._0_4_ = -(auVar19._0_4_ * _DAT_14615a290) + auVar46._0_4_;
    auVar24._4_4_ = -(auVar19._4_4_ * _DAT_14615a290) + auVar46._4_4_;
    auVar24._8_4_ = -(auVar19._8_4_ * _DAT_14615a290) + auVar46._8_4_;
    auVar24._12_4_ = -(auVar19._12_4_ * _DAT_14615a290) + auVar46._12_4_;
    auVar18._0_4_ = (int)auVar19._0_4_;
    auVar18._4_4_ = (int)auVar19._4_4_;
    auVar18._8_4_ = (int)auVar19._8_4_;
    auVar18._12_4_ = (int)auVar19._12_4_;
    auVar46 = vblendps_avx(auVar14,auVar24,3);
    auVar19 = vpackssdw_avx(auVar18,auVar18);
    sVar17 = auVar19._0_2_;
    auVar9._0_2_ = sVar17 + auStack_b8._0_2_;
    sVar22 = auVar19._2_2_;
    auVar9._2_2_ = sVar22 + auStack_b8._2_2_;
    auVar9._4_2_ = sVar17 + auStack_b8._4_2_;
    auVar9._6_2_ = sVar22 + auStack_b8._6_2_;
    auVar9._8_2_ = sVar17 + auStack_b8._8_2_;
    auVar9._10_2_ = sVar22 + auStack_b8._10_2_;
    auVar9._12_2_ = sVar17 + auStack_b8._12_2_;
    auVar9._14_2_ = sVar22 + auStack_b8._14_2_;
    auVar33._4_4_ = param_5;
    auVar33._0_4_ = param_5;
    auVar33._8_4_ = param_5;
    auVar33._12_4_ = param_5;
    auVar46 = vpblendd_avx2(auVar46,auVar9,8);
    auVar19 = vsubps_avx(auVar46,param_2[1]);
    auVar46 = vpsubw_avx(auVar46,param_2[1]);
    auVar46 = vblendps_avx(auVar19,auVar46,8);
    auVar19 = vpunpckhwd_avx(auVar46,auVar46);
    auVar9 = vrcpps_avx(auVar33);
    auVar19 = vpsrad_avx(auVar19,0x10);
    auVar19 = vcvtdq2ps_avx(auVar19);
    auVar19 = vshufpd_avx(auVar19,auVar19,3);
    fVar32 = auVar9._0_4_;
    fVar36 = auVar9._4_4_;
    fVar37 = auVar9._8_4_;
    fVar38 = auVar9._12_4_;
    fVar32 = -((fVar32 * param_5 - fVar48) * fVar32) + fVar32;
    fVar36 = -((fVar36 * param_5 - fVar49) * fVar36) + fVar36;
    fVar37 = -((fVar37 * param_5 - fVar50) * fVar37) + fVar37;
    fVar38 = -((fVar38 * param_5 - fVar51) * fVar38) + fVar38;
    auVar52._0_4_ = (auVar19._0_4_ * _DAT_146159c90 + auVar46._0_4_) * fVar32;
    auVar52._4_4_ = (auVar19._4_4_ * _UNK_146159c94 + auVar46._4_4_) * fVar36;
    auVar52._8_4_ = (auVar19._8_4_ * _UNK_146159c98 + auVar46._8_4_) * fVar37;
    auVar52._12_4_ = (auVar19._12_4_ * _UNK_146159c9c + auVar46._12_4_) * fVar38;
    auVar53 = ZEXT1664(auVar52);
    auVar46 = vsubps_avx(auVar52,param_2[2]);
    fVar32 = auVar46._0_4_ * fVar32;
    fVar36 = auVar46._4_4_ * fVar36;
    fVar37 = auVar46._8_4_ * fVar37;
    fVar38 = auVar46._12_4_ * fVar38;
  }
  plVar1 = (longlong *)*param_1;
  lVar11 = param_1[1];
  iVar12 = func_0x000144e05fa0(plVar1[1]);
  fVar48 = 0.0;
  fVar49 = 0.0;
  fVar50 = 0.0;
  fVar51 = 0.0;
  if ((int)lVar11 != iVar12) {
    uVar13 = (**(code **)(*plVar1 + 0xf0))(plVar1,(int)lVar11);
    (**(code **)(*plVar1 + 0x108))(plVar1,uVar13,auStack_128);
    fVar48 = fStack_118;
    fVar49 = fStack_114;
    fVar50 = fStack_110;
    fVar51 = fStack_10c;
  }
  (**(code **)(*plVar1 + 0x88))(plVar1,auStack_128);
  auVar10._4_4_ = fStack_114;
  auVar10._0_4_ = fStack_118;
  auVar10._8_4_ = fStack_110;
  auVar10._12_4_ = fStack_10c;
  auVar46 = vshufps_avx(auVar10,auStack_108,0x33);
  auVar46 = vshufps_avx(auVar10,auVar46,0x2f);
  auVar59 = ZEXT1664(CONCAT412(fVar51 * (_DAT_145fc6ed8 + auVar46._12_4_),
                               CONCAT48(fVar50 * (_DAT_145fc6ed8 + auVar46._8_4_),
                                        CONCAT44(fVar49 * (_DAT_145fc6ed8 + auVar46._4_4_),
                                                 fVar48 * (_DAT_145fc6ed8 + auVar46._0_4_)))));
  fVar49 = _DAT_145fc6ed8;
  fVar50 = _DAT_145fc6ed8;
  fVar51 = _DAT_145fc6ed8;
  fVar57 = _DAT_145fc6ed8;
  (**(code **)(*plVar1 + 0x88))(plVar1,&fStack_e8);
  fVar48 = _DAT_14615a290;
  fVar54 = auVar59._0_4_;
  auVar19 = auVar59._0_16_;
  auVar46 = vshufps_avx(auVar19,auVar19,0x55);
  auVar19 = vshufps_avx(auVar19,auVar19,0xaa);
  auVar15._4_4_ = _DAT_14615a290;
  auVar15._0_4_ = _DAT_14615a290;
  auVar15._8_4_ = _DAT_14615a290;
  auVar15._12_4_ = _DAT_14615a290;
  auVar20._0_4_ =
       auVar19._0_4_ * fStack_c8 + auVar46._0_4_ * fStack_d8 + fVar54 * fStack_e8 + auStack_b8._0_4_
  ;
  auVar20._4_4_ =
       auVar19._4_4_ * fStack_c4 + auVar46._4_4_ * fStack_d4 + fVar54 * fStack_e4 + auStack_b8._4_4_
  ;
  auVar20._8_4_ =
       auVar19._8_4_ * fStack_c0 + auVar46._8_4_ * fStack_d0 + fVar54 * fStack_e0 + auStack_b8._8_4_
  ;
  auVar20._12_4_ =
       auVar19._12_4_ * fStack_bc +
       auVar46._12_4_ * fStack_cc + fVar54 * fStack_dc + auStack_b8._12_4_;
  auVar46 = vrcpps_avx(auVar15);
  fVar54 = auVar46._0_4_;
  fVar55 = auVar46._4_4_;
  fVar56 = auVar46._8_4_;
  fVar58 = auVar46._12_4_;
  auVar46 = vblendps_avx(auVar20,auStack_b8,8);
  fVar54 = (-(fVar54 * _DAT_14615a290) + fVar49) * fVar54 + fVar54;
  fVar55 = (-(fVar55 * _DAT_14615a290) + fVar50) * fVar55 + fVar55;
  fVar56 = (-(fVar56 * _DAT_14615a290) + fVar51) * fVar56 + fVar56;
  fVar58 = (-(fVar58 * _DAT_14615a290) + fVar57) * fVar58 + fVar58;
  auVar40._0_4_ = fVar54 * auVar46._0_4_;
  auVar40._4_4_ = fVar55 * auVar46._4_4_;
  auVar40._8_4_ = fVar56 * auVar46._8_4_;
  auVar40._12_4_ = fVar58 * auVar46._12_4_;
  auVar19 = vroundps_avx(auVar40,3);
  auVar25._0_4_ = -(auVar19._0_4_ * _DAT_14615a290) + auVar46._0_4_;
  auVar25._4_4_ = -(auVar19._4_4_ * _DAT_14615a290) + auVar46._4_4_;
  auVar25._8_4_ = -(auVar19._8_4_ * _DAT_14615a290) + auVar46._8_4_;
  auVar25._12_4_ = -(auVar19._12_4_ * _DAT_14615a290) + auVar46._12_4_;
  auVar46 = vblendps_avx(auVar20,auVar25,3);
  auVar26._0_4_ = (int)auVar19._0_4_;
  auVar26._4_4_ = (int)auVar19._4_4_;
  auVar26._8_4_ = (int)auVar19._8_4_;
  auVar26._12_4_ = (int)auVar19._12_4_;
  auVar19 = vpackssdw_avx(auVar26,auVar26);
  sVar17 = auVar19._0_2_;
  auVar6._0_2_ = sVar17 + auStack_b8._0_2_;
  sVar22 = auVar19._2_2_;
  auVar6._2_2_ = sVar22 + auStack_b8._2_2_;
  auVar6._4_2_ = sVar17 + auStack_b8._4_2_;
  auVar6._6_2_ = sVar22 + auStack_b8._6_2_;
  auVar6._8_2_ = sVar17 + auStack_b8._8_2_;
  auVar6._10_2_ = sVar22 + auStack_b8._10_2_;
  auVar6._12_2_ = sVar17 + auStack_b8._12_2_;
  auVar6._14_2_ = sVar22 + auStack_b8._14_2_;
  auVar46 = vblendps_avx(auVar46,auVar6,8);
  param_2[1] = auVar46;
  param_2[2] = auVar53._0_16_;
  if (param_4 != '\0') {
    fVar49 = auVar45._0_4_;
    auVar21._0_4_ = fVar49 * fVar49;
    fVar51 = auVar45._4_4_;
    auVar21._4_4_ = fVar51 * fVar51;
    fVar2 = auVar45._8_4_;
    auVar21._8_4_ = fVar2 * fVar2;
    fVar4 = auVar45._12_4_;
    auVar21._12_4_ = fVar4 * fVar4;
    auVar46 = vblendps_avx(auVar21,auVar47._0_16_,8);
    auVar46 = vhaddps_avx(auVar46,auVar46);
    auVar46 = vhaddps_avx(auVar46,auVar46);
    auVar19 = vrsqrtps_avx(auVar46);
    fVar50 = auVar19._0_4_;
    fVar57 = auVar19._4_4_;
    fVar3 = auVar19._8_4_;
    fVar5 = auVar19._12_4_;
    auVar27._4_4_ = _DAT_145fc6f00;
    auVar27._0_4_ = _DAT_145fc6f00;
    auVar27._8_4_ = _DAT_145fc6f00;
    auVar27._12_4_ = _DAT_145fc6f00;
    auVar34._0_4_ =
         ((fVar50 * fVar50 * auVar46._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar50 + fVar50) *
         fVar49;
    auVar34._4_4_ =
         ((fVar57 * fVar57 * auVar46._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar57 + fVar57) *
         fVar51;
    auVar34._8_4_ =
         ((fVar3 * fVar3 * auVar46._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar3 + fVar3) * fVar2
    ;
    auVar34._12_4_ =
         ((fVar5 * fVar5 * auVar46._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar5 + fVar5) *
         fVar4;
    auVar46 = vcmpps_avx(auVar27,auVar46,1);
    auVar46 = vblendvps_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar34,auVar46);
    fVar49 = auVar46._0_4_;
    auVar28._0_4_ = auVar53._0_4_ * fVar49;
    fVar50 = auVar46._4_4_;
    auVar28._4_4_ = auVar53._4_4_ * fVar50;
    fVar51 = auVar46._8_4_;
    auVar28._8_4_ = auVar53._8_4_ * fVar51;
    fVar57 = auVar46._12_4_;
    auVar28._12_4_ = auVar53._12_4_ * fVar57;
    auVar41._0_4_ = fVar32 * fVar49;
    auVar41._4_4_ = fVar36 * fVar50;
    auVar41._8_4_ = fVar37 * fVar51;
    auVar41._12_4_ = fVar38 * fVar57;
    auVar46 = vblendps_avx(auVar28,ZEXT416(0) << 0x20,8);
    auVar19 = vblendps_avx(auVar41,ZEXT416(0) << 0x20,8);
    auVar46 = vhaddps_avx(auVar46,auVar46);
    auVar19 = vhaddps_avx(auVar19,auVar19);
    auVar46 = vhaddps_avx(auVar46,auVar46);
    auVar9 = vhaddps_avx(auVar19,auVar19);
    fVar32 = auVar46._0_4_ * param_5;
    auVar29._0_4_ = fVar49 * fVar32 + *(float *)*param_2;
    auVar29._4_4_ = fVar50 * fVar32 + *(float *)(*param_2 + 4);
    auVar29._8_4_ = fVar51 * fVar32 + *(float *)(*param_2 + 8);
    auVar29._12_4_ = fVar57 * fVar32 + *(float *)(*param_2 + 0xc);
    auVar46 = vblendps_avx(auVar29,*param_2,8);
    auVar42._0_4_ = fVar54 * auVar46._0_4_;
    auVar42._4_4_ = fVar55 * auVar46._4_4_;
    auVar42._8_4_ = fVar56 * auVar46._8_4_;
    auVar42._12_4_ = fVar58 * auVar46._12_4_;
    auVar19 = vroundps_avx(auVar42,3);
    auVar44._0_4_ = -(auVar19._0_4_ * fVar48) + auVar46._0_4_;
    auVar44._4_4_ = -(auVar19._4_4_ * fVar48) + auVar46._4_4_;
    auVar44._8_4_ = -(auVar19._8_4_ * fVar48) + auVar46._8_4_;
    auVar44._12_4_ = -(auVar19._12_4_ * fVar48) + auVar46._12_4_;
    auVar43._0_4_ = (int)auVar19._0_4_;
    auVar43._4_4_ = (int)auVar19._4_4_;
    auVar43._8_4_ = (int)auVar19._8_4_;
    auVar43._12_4_ = (int)auVar19._12_4_;
    auVar14 = vpackssdw_avx(auVar43,auVar43);
    auVar19 = vblendps_avx(auVar46,auVar44,3);
    sVar17 = auVar14._0_2_;
    auVar7._0_2_ = sVar17 + auVar46._0_2_;
    sVar22 = auVar14._2_2_;
    auVar7._2_2_ = sVar22 + auVar46._2_2_;
    auVar7._4_2_ = sVar17 + auVar46._4_2_;
    auVar7._6_2_ = sVar22 + auVar46._6_2_;
    auVar7._8_2_ = sVar17 + auVar46._8_2_;
    auVar7._10_2_ = sVar22 + auVar46._10_2_;
    auVar7._12_2_ = sVar17 + auVar46._12_2_;
    auVar7._14_2_ = sVar22 + auVar46._14_2_;
    auVar46 = vblendps_avx(auVar19,auVar7,8);
    fVar32 = auVar9._0_4_ * param_5 * param_5 * _DAT_145fc6edc;
    auVar35._0_4_ = fVar49 * fVar32 + auVar46._0_4_;
    auVar35._4_4_ = fVar50 * fVar32 + auVar46._4_4_;
    auVar35._8_4_ = fVar51 * fVar32 + auVar46._8_4_;
    auVar35._12_4_ = fVar57 * fVar32 + auVar46._12_4_;
    auVar46 = vblendps_avx(auVar35,auVar46,8);
    auVar30._0_4_ = fVar54 * auVar46._0_4_;
    auVar30._4_4_ = fVar55 * auVar46._4_4_;
    auVar30._8_4_ = fVar56 * auVar46._8_4_;
    auVar30._12_4_ = fVar58 * auVar46._12_4_;
    auVar19 = vroundps_avx(auVar30,3);
    auVar16._0_4_ = -(auVar19._0_4_ * fVar48) + auVar46._0_4_;
    auVar16._4_4_ = -(auVar19._4_4_ * fVar48) + auVar46._4_4_;
    auVar16._8_4_ = -(auVar19._8_4_ * fVar48) + auVar46._8_4_;
    auVar16._12_4_ = -(auVar19._12_4_ * fVar48) + auVar46._12_4_;
    auVar31._0_4_ = (int)auVar19._0_4_;
    auVar31._4_4_ = (int)auVar19._4_4_;
    auVar31._8_4_ = (int)auVar19._8_4_;
    auVar31._12_4_ = (int)auVar19._12_4_;
    auVar19 = vblendps_avx(auVar46,auVar16,3);
    auVar9 = vpackssdw_avx(auVar31,auVar31);
    sVar17 = auVar9._0_2_;
    auVar8._0_2_ = sVar17 + auVar46._0_2_;
    sVar22 = auVar9._2_2_;
    auVar8._2_2_ = sVar22 + auVar46._2_2_;
    auVar8._4_2_ = sVar17 + auVar46._4_2_;
    auVar8._6_2_ = sVar22 + auVar46._6_2_;
    auVar8._8_2_ = sVar17 + auVar46._8_2_;
    auVar8._10_2_ = sVar22 + auVar46._10_2_;
    auVar8._12_2_ = sVar17 + auVar46._12_2_;
    auVar8._14_2_ = sVar22 + auVar46._14_2_;
    auVar46 = vpblendd_avx2(auVar19,auVar8,8);
    *param_2 = auVar46;
  }
  return;
}

