// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e24b0  size: 1691 bytes
// Name:    FUN_1400e24b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14536b740, FUN_1400e2c60, FUN_1400e2b50, FUN_141342d00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e24b0(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  short sVar13;
  short sVar21;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar22;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar30;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar31 [16];
  undefined8 uVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [64];
  float fVar40;
  undefined1 auVar41 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auVar42 [64];
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar49 [64];
  float fVar53;
  undefined1 auVar54 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar55 [64];
  float fVar60;
  float fVar61;
  undefined1 auVar59 [64];
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  undefined1 auStack_228 [16];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [16];
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 auStack_1b8 [16];
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 aauStack_178 [2] [16];
  undefined1 aauStack_158 [2] [16];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 auStack_c8 [16];
  
  lVar1 = *param_3;
  if (lVar1 != 0) {
    func_0x000144e48580(auStack_118);
    FUN_141342d00(lVar1,param_3[1],&fStack_138);
    auStack_108._0_4_ = _DAT_145fc6edc * fStack_138;
    auStack_108._4_4_ = _DAT_145fc6edc * fStack_134;
    auStack_108._8_4_ = _DAT_145fc6edc * fStack_130;
    auStack_108._12_4_ = _DAT_145fc6edc * fStack_12c;
    uStack_188 = _DAT_14615af60;
    uStack_180 = _UNK_14615af68;
    FUN_1400e2c60(aauStack_158,auStack_118);
    uStack_198 = _DAT_14614f7f0;
    uStack_190 = _UNK_14614f7f8;
    uVar35 = _DAT_14614f7f0;
    uVar36 = _UNK_14614f7f8;
    FUN_1400e2c60(aauStack_178,auStack_118);
    auVar49 = ZEXT1664(aauStack_158[0]);
    plVar2 = (longlong *)*param_3;
    lVar1 = param_3[2];
    FUN_14536b740(plVar2,param_3[1],&fStack_268);
    auVar59 = ZEXT1664(CONCAT412(fStack_25c,CONCAT48(fStack_260,CONCAT44(fStack_264,fStack_268))));
    auVar55 = ZEXT1664(CONCAT412(fStack_24c,CONCAT48(fStack_250,CONCAT44(fStack_254,fStack_258))));
    auVar42 = ZEXT1664(CONCAT412(fStack_23c,CONCAT48(fStack_240,CONCAT44(fStack_244,fStack_248))));
    iVar8 = func_0x000144e05fa0(plVar2[1]);
    auVar31 = auVar59._0_16_;
    auVar47 = auVar49._0_16_;
    auVar25 = auVar42._0_16_;
    auVar54 = auVar55._0_16_;
    auVar39 = ZEXT1664(_DAT_145fc6ee0);
    auVar16 = _DAT_145fc6ee0;
    if ((int)lVar1 != iVar8) {
      uVar9 = (**(code **)(*plVar2 + 0xf0))(plVar2,(int)lVar1);
      (**(code **)(*plVar2 + 0x108))(plVar2,uVar9,&fStack_268);
      auVar31 = auVar59._0_16_;
      auVar47 = auVar49._0_16_;
      auVar25 = auVar42._0_16_;
      auVar54 = auVar55._0_16_;
      auVar16._4_4_ = fStack_264;
      auVar16._0_4_ = fStack_268;
      auVar16._8_4_ = fStack_260;
      auVar16._12_4_ = fStack_25c;
    }
    fVar30 = auVar47._0_4_;
    auVar23 = vshufps_avx(auVar47,auVar47,0x55);
    auVar47 = vshufps_avx(auVar47,auVar47,0xaa);
    auVar4 = vshufps_avx(auVar16,auVar16,0xd2);
    auVar41._0_4_ =
         auVar47._0_4_ * auVar25._0_4_ + auVar23._0_4_ * auVar54._0_4_ + auVar31._0_4_ * fVar30;
    auVar41._4_4_ =
         auVar47._4_4_ * auVar25._4_4_ + auVar23._4_4_ * auVar54._4_4_ + auVar31._4_4_ * fVar30;
    auVar41._8_4_ =
         auVar47._8_4_ * auVar25._8_4_ + auVar23._8_4_ * auVar54._8_4_ + auVar31._8_4_ * fVar30;
    auVar41._12_4_ =
         auVar47._12_4_ * auVar25._12_4_ + auVar23._12_4_ * auVar54._12_4_ + auVar31._12_4_ * fVar30
    ;
    auVar25 = vshufps_avx(auVar16,auVar16,0xc9);
    auVar16 = vshufps_avx(auVar16,auVar16,0xff);
    auVar47 = vshufps_avx(auVar41,auVar41,0xd2);
    auVar54 = vshufps_avx(auVar41,auVar41,0xc9);
    fVar30 = -(auVar4._0_4_ * auVar54._0_4_) + auVar25._0_4_ * auVar47._0_4_;
    fVar32 = -(auVar4._4_4_ * auVar54._4_4_) + auVar25._4_4_ * auVar47._4_4_;
    fVar33 = -(auVar4._8_4_ * auVar54._8_4_) + auVar25._8_4_ * auVar47._8_4_;
    fVar34 = -(auVar4._12_4_ * auVar54._12_4_) + auVar25._12_4_ * auVar47._12_4_;
    auVar31._0_4_ = fVar30 + fVar30;
    auVar31._4_4_ = fVar32 + fVar32;
    auVar31._8_4_ = fVar33 + fVar33;
    auVar31._12_4_ = fVar34 + fVar34;
    auVar47 = vshufps_avx(auVar31,auVar31,0xd2);
    auVar54 = vshufps_avx(auVar31,auVar31,0xc9);
    auVar42 = ZEXT1664(CONCAT412(auVar31._12_4_ * auVar16._12_4_ + auVar41._12_4_ +
                                 -(auVar4._12_4_ * auVar54._12_4_) + auVar47._12_4_ * auVar25._12_4_
                                 ,CONCAT48(auVar31._8_4_ * auVar16._8_4_ + auVar41._8_4_ +
                                           -(auVar4._8_4_ * auVar54._8_4_) +
                                           auVar47._8_4_ * auVar25._8_4_,
                                           CONCAT44(auVar31._4_4_ * auVar16._4_4_ + auVar41._4_4_ +
                                                    -(auVar4._4_4_ * auVar54._4_4_) +
                                                    auVar47._4_4_ * auVar25._4_4_,
                                                    auVar31._0_4_ * auVar16._0_4_ + auVar41._0_4_ +
                                                    -(auVar4._0_4_ * auVar54._0_4_) +
                                                    auVar47._0_4_ * auVar25._0_4_))));
    (**(code **)(*param_1 + 0x88))(param_1,&fStack_268);
    fVar30 = auVar42._0_4_;
    auVar25 = auVar42._0_16_;
    auVar16 = vshufps_avx(auVar25,auVar25,0x55);
    auVar25 = vshufps_avx(auVar25,auVar25,0xaa);
    auVar49 = ZEXT1664(aauStack_178[0]);
    lVar1 = param_3[2];
    fVar32 = auVar25._0_4_ * fStack_248 + auVar16._0_4_ * fStack_258 + fVar30 * fStack_268;
    fVar33 = auVar25._4_4_ * fStack_244 + auVar16._4_4_ * fStack_254 + fVar30 * fStack_264;
    fVar34 = auVar25._8_4_ * fStack_240 + auVar16._8_4_ * fStack_250 + fVar30 * fStack_260;
    fVar30 = auVar25._12_4_ * fStack_23c + auVar16._12_4_ * fStack_24c + fVar30 * fStack_25c;
    plVar2 = (longlong *)*param_3;
    FUN_14536b740(plVar2,param_3[1],&fStack_268);
    auVar59 = ZEXT1664(CONCAT412(fStack_25c,CONCAT48(fStack_260,CONCAT44(fStack_264,fStack_268))));
    auVar55 = ZEXT1664(CONCAT412(fStack_24c,CONCAT48(fStack_250,CONCAT44(fStack_254,fStack_258))));
    auVar42 = ZEXT1664(CONCAT412(fStack_23c,CONCAT48(fStack_240,CONCAT44(fStack_244,fStack_248))));
    iVar8 = func_0x000144e05fa0(plVar2[1]);
    auVar31 = auVar59._0_16_;
    auVar47 = auVar49._0_16_;
    auVar16 = auVar42._0_16_;
    auVar25 = auVar39._0_16_;
    auVar54 = auVar55._0_16_;
    if ((int)lVar1 != iVar8) {
      uVar9 = (**(code **)(*plVar2 + 0xf0))(plVar2,(int)lVar1);
      (**(code **)(*plVar2 + 0x108))(plVar2,uVar9,&fStack_268);
      auVar31 = auVar59._0_16_;
      auVar47 = auVar49._0_16_;
      auVar16 = auVar42._0_16_;
      auVar54 = auVar55._0_16_;
      auVar25._4_4_ = fStack_264;
      auVar25._0_4_ = fStack_268;
      auVar25._8_4_ = fStack_260;
      auVar25._12_4_ = fStack_25c;
    }
    fVar22 = auVar47._0_4_;
    auVar23 = vshufps_avx(auVar47,auVar47,0x55);
    auVar47 = vshufps_avx(auVar47,auVar47,0xaa);
    auVar4 = vshufps_avx(auVar25,auVar25,0xd2);
    auVar48._0_4_ =
         auVar47._0_4_ * auVar16._0_4_ + auVar23._0_4_ * auVar54._0_4_ + auVar31._0_4_ * fVar22;
    auVar48._4_4_ =
         auVar47._4_4_ * auVar16._4_4_ + auVar23._4_4_ * auVar54._4_4_ + auVar31._4_4_ * fVar22;
    auVar48._8_4_ =
         auVar47._8_4_ * auVar16._8_4_ + auVar23._8_4_ * auVar54._8_4_ + auVar31._8_4_ * fVar22;
    auVar48._12_4_ =
         auVar47._12_4_ * auVar16._12_4_ + auVar23._12_4_ * auVar54._12_4_ + auVar31._12_4_ * fVar22
    ;
    auVar16 = vshufps_avx(auVar25,auVar25,0xc9);
    auVar47 = vshufps_avx(auVar48,auVar48,0xd2);
    auVar54 = vshufps_avx(auVar48,auVar48,0xc9);
    fVar22 = -(auVar4._0_4_ * auVar54._0_4_) + auVar16._0_4_ * auVar47._0_4_;
    fVar27 = -(auVar4._4_4_ * auVar54._4_4_) + auVar16._4_4_ * auVar47._4_4_;
    fVar28 = -(auVar4._8_4_ * auVar54._8_4_) + auVar16._8_4_ * auVar47._8_4_;
    fVar29 = -(auVar4._12_4_ * auVar54._12_4_) + auVar16._12_4_ * auVar47._12_4_;
    auVar23._0_4_ = fVar22 + fVar22;
    auVar23._4_4_ = fVar27 + fVar27;
    auVar23._8_4_ = fVar28 + fVar28;
    auVar23._12_4_ = fVar29 + fVar29;
    auVar47 = vshufps_avx(auVar23,auVar23,0xd2);
    auVar54 = vshufps_avx(auVar23,auVar23,0xc9);
    auVar25 = vshufps_avx(auVar25,auVar25,0xff);
    auVar39 = ZEXT1664(CONCAT412(auVar23._12_4_ * auVar25._12_4_ + auVar48._12_4_ +
                                 -(auVar4._12_4_ * auVar54._12_4_) + auVar47._12_4_ * auVar16._12_4_
                                 ,CONCAT48(auVar23._8_4_ * auVar25._8_4_ + auVar48._8_4_ +
                                           -(auVar4._8_4_ * auVar54._8_4_) +
                                           auVar47._8_4_ * auVar16._8_4_,
                                           CONCAT44(auVar23._4_4_ * auVar25._4_4_ + auVar48._4_4_ +
                                                    -(auVar4._4_4_ * auVar54._4_4_) +
                                                    auVar47._4_4_ * auVar16._4_4_,
                                                    auVar23._0_4_ * auVar25._0_4_ + auVar48._0_4_ +
                                                    -(auVar4._0_4_ * auVar54._0_4_) +
                                                    auVar47._0_4_ * auVar16._0_4_))));
    (**(code **)(*param_1 + 0x88))(param_1,&fStack_268);
    fVar22 = auVar39._0_4_;
    auVar25 = auVar39._0_16_;
    auVar16 = vshufps_avx(auVar25,auVar25,0x55);
    auVar25 = vshufps_avx(auVar25,auVar25,0xaa);
    auVar42 = ZEXT1664(CONCAT412(_DAT_14615a220,
                                 CONCAT48(_DAT_14615a220,CONCAT44(_DAT_14615a220,_DAT_14615a220))));
    plVar2 = *(longlong **)(param_2 + 8);
    auVar39 = ZEXT1664(CONCAT412(auVar25._12_4_ * fStack_23c +
                                 auVar16._12_4_ * fStack_24c + fVar22 * fStack_25c,
                                 CONCAT48(auVar25._8_4_ * fStack_240 +
                                          auVar16._8_4_ * fStack_250 + fVar22 * fStack_260,
                                          CONCAT44(auVar25._4_4_ * fStack_244 +
                                                   auVar16._4_4_ * fStack_254 + fVar22 * fStack_264,
                                                   auVar25._0_4_ * fStack_248 +
                                                   auVar16._0_4_ * fStack_258 + fVar22 * fStack_268)
                                         )));
    iVar8 = *(int *)(param_2 + 0x10);
    fVar32 = fVar32 * _DAT_14615a220;
    fVar33 = fVar33 * _DAT_14615a220;
    fVar34 = fVar34 * _DAT_14615a220;
    fVar30 = fVar30 * _DAT_14615a220;
    iVar10 = func_0x000144e05fa0(plVar2[1]);
    auVar25 = auVar42._0_16_;
    auVar16 = auVar39._0_16_;
    fVar53 = 0.0;
    fVar56 = 0.0;
    fVar57 = 0.0;
    fVar58 = 0.0;
    fVar22 = 0.0;
    fVar27 = 0.0;
    fVar28 = 0.0;
    fVar29 = 0.0;
    if (iVar8 != iVar10) {
      uVar9 = (**(code **)(*plVar2 + 0xf0))(plVar2,iVar8);
      (**(code **)(*plVar2 + 0x108))(plVar2,uVar9,&fStack_268);
      auVar25 = auVar42._0_16_;
      auVar16 = auVar39._0_16_;
      fVar22 = fStack_258;
      fVar27 = fStack_254;
      fVar28 = fStack_250;
      fVar29 = fStack_24c;
    }
    fVar40 = auVar25._0_4_ * auVar16._0_4_;
    fVar43 = auVar25._4_4_ * auVar16._4_4_;
    fVar44 = auVar25._8_4_ * auVar16._8_4_;
    fVar45 = auVar25._12_4_ * auVar16._12_4_;
    (**(code **)(*plVar2 + 0x88))(plVar2,&fStack_268);
    auVar54._4_4_ = fStack_254;
    auVar54._0_4_ = fStack_258;
    auVar54._8_4_ = fStack_250;
    auVar54._12_4_ = fStack_24c;
    auVar4._4_4_ = fStack_244;
    auVar4._0_4_ = fStack_248;
    auVar4._8_4_ = fStack_240;
    auVar4._12_4_ = fStack_23c;
    auVar16 = vshufps_avx(auVar54,auVar4,0x33);
    auVar16 = vshufps_avx(auVar54,auVar16,0x2f);
    auVar39 = ZEXT1664(CONCAT412(fVar29 * (_DAT_145fc6ed8 + auVar16._12_4_),
                                 CONCAT48(fVar28 * (_DAT_145fc6ed8 + auVar16._8_4_),
                                          CONCAT44(fVar27 * (_DAT_145fc6ed8 + auVar16._4_4_),
                                                   fVar22 * (_DAT_145fc6ed8 + auVar16._0_4_)))));
    fVar22 = _DAT_145fc6ed8;
    fVar27 = _DAT_145fc6ed8;
    fVar28 = _DAT_145fc6ed8;
    fVar29 = _DAT_145fc6ed8;
    (**(code **)(*plVar2 + 0x88))(plVar2,&fStack_f8);
    fVar46 = auVar39._0_4_;
    auVar25 = auVar39._0_16_;
    auVar16 = vshufps_avx(auVar25,auVar25,0x55);
    auVar25 = vshufps_avx(auVar25,auVar25,0xaa);
    auVar37._4_4_ = _DAT_14615a290;
    auVar37._0_4_ = _DAT_14615a290;
    auVar37._8_4_ = _DAT_14615a290;
    auVar37._12_4_ = _DAT_14615a290;
    auVar39 = ZEXT1664(auVar37);
    fVar60 = 0.0;
    fVar61 = 0.0;
    auVar11._0_4_ =
         auVar25._0_4_ * fStack_d8 +
         auVar16._0_4_ * fStack_e8 + fVar46 * fStack_f8 + auStack_c8._0_4_;
    auVar11._4_4_ =
         auVar25._4_4_ * fStack_d4 +
         auVar16._4_4_ * fStack_e4 + fVar46 * fStack_f4 + auStack_c8._4_4_;
    auVar11._8_4_ =
         auVar25._8_4_ * fStack_d0 +
         auVar16._8_4_ * fStack_e0 + fVar46 * fStack_f0 + auStack_c8._8_4_;
    auVar11._12_4_ =
         auVar25._12_4_ * fStack_cc +
         auVar16._12_4_ * fStack_dc + fVar46 * fStack_ec + auStack_c8._12_4_;
    auVar16 = vrcpps_avx(auVar37);
    fVar46 = auVar16._0_4_;
    fVar50 = auVar16._4_4_;
    fVar51 = auVar16._8_4_;
    fVar52 = auVar16._12_4_;
    fVar46 = (-(fVar46 * _DAT_14615a290) + fVar22) * fVar46 + fVar46;
    fVar50 = (-(fVar50 * _DAT_14615a290) + fVar27) * fVar50 + fVar50;
    fVar51 = (-(fVar51 * _DAT_14615a290) + fVar28) * fVar51 + fVar51;
    fVar52 = (-(fVar52 * _DAT_14615a290) + fVar29) * fVar52 + fVar52;
    auVar16 = vblendps_avx(auVar11,auStack_c8,8);
    auVar24._0_4_ = fVar46 * auVar16._0_4_;
    auVar24._4_4_ = fVar50 * auVar16._4_4_;
    auVar24._8_4_ = fVar51 * auVar16._8_4_;
    auVar24._12_4_ = fVar52 * auVar16._12_4_;
    auVar25 = vroundps_avx(auVar24,3);
    auVar14._0_4_ = -(auVar25._0_4_ * _DAT_14615a290) + auVar16._0_4_;
    auVar14._4_4_ = -(auVar25._4_4_ * _DAT_14615a290) + auVar16._4_4_;
    auVar14._8_4_ = -(auVar25._8_4_ * _DAT_14615a290) + auVar16._8_4_;
    auVar14._12_4_ = -(auVar25._12_4_ * _DAT_14615a290) + auVar16._12_4_;
    auVar16 = vblendps_avx(auVar11,auVar14,3);
    auVar15._0_4_ = (int)auVar25._0_4_;
    auVar15._4_4_ = (int)auVar25._4_4_;
    auVar15._8_4_ = (int)auVar25._8_4_;
    auVar15._12_4_ = (int)auVar25._12_4_;
    auVar25 = vpackssdw_avx(auVar15,auVar15);
    sVar13 = auVar25._0_2_;
    auVar47._0_2_ = sVar13 + auStack_c8._0_2_;
    sVar21 = auVar25._2_2_;
    auVar47._2_2_ = sVar21 + auStack_c8._2_2_;
    auVar47._4_2_ = sVar13 + auStack_c8._4_2_;
    auVar47._6_2_ = sVar21 + auStack_c8._6_2_;
    auVar47._8_2_ = sVar13 + auStack_c8._8_2_;
    auVar47._10_2_ = sVar21 + auStack_c8._10_2_;
    auVar47._12_2_ = sVar13 + auStack_c8._12_2_;
    auVar47._14_2_ = sVar21 + auStack_c8._14_2_;
    auVar25 = vpblendd_avx2(auVar16,auVar47,8);
    auVar16 = vpunpckhwd_avx(auVar25,auVar25);
    auVar16 = vpsrad_avx(auVar16,0x10);
    auVar16 = vcvtdq2ps_avx(auVar16);
    auVar16 = vshufpd_avx(auVar16,auVar16,3);
    fStack_1a8 = fVar32 + _DAT_146159c90 * auVar16._0_4_ + auVar25._0_4_;
    fStack_1a4 = fVar33 + _UNK_146159c94 * auVar16._4_4_ + auVar25._4_4_;
    fStack_1a0 = fVar34 + auVar16._8_4_ * 0.0 + auVar25._8_4_;
    fStack_19c = fVar30 + auVar16._12_4_ * 0.0 + auVar25._12_4_;
    auVar16 = *(undefined1 (*) [16])(param_2 + 0xf0);
    uStack_1e8 = *(undefined8 *)(param_2 + 0x100);
    uStack_1e0 = *(undefined8 *)(param_2 + 0x108);
    auVar25 = vpunpckhwd_avx(auVar16,auVar16);
    auVar25 = vpsrad_avx(auVar25,0x10);
    auVar25 = vcvtdq2ps_avx(auVar25);
    auVar25 = vshufpd_avx(auVar25,auVar25,3);
    auStack_1b8._0_4_ = _DAT_146159c90 * auVar25._0_4_ + auVar16._0_4_;
    auStack_1b8._4_4_ = _UNK_146159c94 * auVar25._4_4_ + auVar16._4_4_;
    auStack_1b8._8_4_ = auVar25._8_4_ * 0.0 + auVar16._8_4_;
    auStack_1b8._12_4_ = auVar25._12_4_ * 0.0 + auVar16._12_4_;
    fVar30 = _DAT_146159c90;
    fVar32 = _UNK_146159c94;
    uStack_1f8 = uVar35;
    uStack_1f0 = uVar36;
    FUN_1400e2b50(auStack_1b8,&uStack_1e8,&fStack_1a8,&uStack_1f8,auStack_228);
    plVar2 = *(longlong **)(param_2 + 8);
    iVar8 = *(int *)(param_2 + 0x10);
    iVar10 = func_0x000144e05fa0(plVar2[1]);
    if (iVar8 != iVar10) {
      uVar9 = (**(code **)(*plVar2 + 0xf0))(plVar2,iVar8);
      (**(code **)(*plVar2 + 0x108))(plVar2,uVar9,&fStack_268);
      fVar53 = fStack_258;
      fVar56 = fStack_254;
      fVar57 = fStack_250;
      fVar58 = fStack_24c;
    }
    (**(code **)(*plVar2 + 0x88))(plVar2,&fStack_268);
    auVar6._4_4_ = fStack_254;
    auVar6._0_4_ = fStack_258;
    auVar6._8_4_ = fStack_250;
    auVar6._12_4_ = fStack_24c;
    auVar7._4_4_ = fStack_244;
    auVar7._0_4_ = fStack_248;
    auVar7._8_4_ = fStack_240;
    auVar7._12_4_ = fStack_23c;
    auVar16 = vshufps_avx(auVar6,auVar7,0x33);
    auVar16 = vshufps_avx(auVar6,auVar16,0x2f);
    auVar42 = ZEXT1664(CONCAT412(fVar58 * (fVar29 + auVar16._12_4_),
                                 CONCAT48(fVar57 * (fVar28 + auVar16._8_4_),
                                          CONCAT44(fVar56 * (fVar27 + auVar16._4_4_),
                                                   fVar53 * (fVar22 + auVar16._0_4_)))));
    (**(code **)(*plVar2 + 0x88))(plVar2,&fStack_f8);
    fVar33 = auVar42._0_4_;
    auVar25 = auVar42._0_16_;
    auVar16 = vshufps_avx(auVar25,auVar25,0x55);
    auVar25 = vshufps_avx(auVar25,auVar25,0xaa);
    auVar12._0_4_ =
         auVar25._0_4_ * fStack_d8 +
         auVar16._0_4_ * fStack_e8 + fVar33 * fStack_f8 + auStack_c8._0_4_;
    auVar12._4_4_ =
         auVar25._4_4_ * fStack_d4 +
         auVar16._4_4_ * fStack_e4 + fVar33 * fStack_f4 + auStack_c8._4_4_;
    auVar12._8_4_ =
         auVar25._8_4_ * fStack_d0 +
         auVar16._8_4_ * fStack_e0 + fVar33 * fStack_f0 + auStack_c8._8_4_;
    auVar12._12_4_ =
         auVar25._12_4_ * fStack_cc +
         auVar16._12_4_ * fStack_dc + fVar33 * fStack_ec + auStack_c8._12_4_;
    auVar16 = vblendps_avx(auVar12,auStack_c8,8);
    auVar26._0_4_ = fVar46 * auVar16._0_4_;
    auVar26._4_4_ = fVar50 * auVar16._4_4_;
    auVar26._8_4_ = fVar51 * auVar16._8_4_;
    auVar26._12_4_ = fVar52 * auVar16._12_4_;
    auVar25 = vroundps_avx(auVar26,3);
    auVar17._0_4_ = -(auVar25._0_4_ * auVar39._0_4_) + auVar16._0_4_;
    auVar17._4_4_ = -(auVar25._4_4_ * auVar39._4_4_) + auVar16._4_4_;
    auVar17._8_4_ = -(auVar25._8_4_ * auVar39._8_4_) + auVar16._8_4_;
    auVar17._12_4_ = -(auVar25._12_4_ * auVar39._12_4_) + auVar16._12_4_;
    auVar16 = vblendps_avx(auVar12,auVar17,3);
    auVar18._0_4_ = (int)auVar25._0_4_;
    auVar18._4_4_ = (int)auVar25._4_4_;
    auVar18._8_4_ = (int)auVar25._8_4_;
    auVar18._12_4_ = (int)auVar25._12_4_;
    auVar25 = vpackssdw_avx(auVar18,auVar18);
    sVar13 = auVar25._0_2_;
    auVar3._0_2_ = sVar13 + auStack_c8._0_2_;
    sVar21 = auVar25._2_2_;
    auVar3._2_2_ = sVar21 + auStack_c8._2_2_;
    auVar3._4_2_ = sVar13 + auStack_c8._4_2_;
    auVar3._6_2_ = sVar21 + auStack_c8._6_2_;
    auVar3._8_2_ = sVar13 + auStack_c8._8_2_;
    auVar3._10_2_ = sVar21 + auStack_c8._10_2_;
    auVar3._12_2_ = sVar13 + auStack_c8._12_2_;
    auVar3._14_2_ = sVar21 + auStack_c8._14_2_;
    auVar25 = vpblendd_avx2(auVar16,auVar3,8);
    auVar16 = vpunpckhwd_avx(auVar25,auVar25);
    auVar16 = vpsrad_avx(auVar16,0x10);
    auVar16 = vcvtdq2ps_avx(auVar16);
    auVar16 = vshufpd_avx(auVar16,auVar16,3);
    fStack_1c8 = fVar40 + fVar30 * auVar16._0_4_ + auVar25._0_4_;
    fStack_1c4 = fVar43 + fVar32 * auVar16._4_4_ + auVar25._4_4_;
    fStack_1c0 = fVar44 + fVar60 * auVar16._8_4_ + auVar25._8_4_;
    fStack_1bc = fVar45 + fVar61 * auVar16._12_4_ + auVar25._12_4_;
    auVar16 = *(undefined1 (*) [16])(param_2 + 0xf0);
    uStack_208 = *(undefined8 *)(param_2 + 0x100);
    uStack_200 = *(undefined8 *)(param_2 + 0x108);
    auVar25 = vpunpckhwd_avx(auVar16,auVar16);
    auVar25 = vpsrad_avx(auVar25,0x10);
    auVar25 = vcvtdq2ps_avx(auVar25);
    auVar25 = vshufpd_avx(auVar25,auVar25,3);
    auStack_1d8._0_4_ = fVar30 * auVar25._0_4_ + auVar16._0_4_;
    auStack_1d8._4_4_ = fVar32 * auVar25._4_4_ + auVar16._4_4_;
    auStack_1d8._8_4_ = fVar60 * auVar25._8_4_ + auVar16._8_4_;
    auStack_1d8._12_4_ = fVar61 * auVar25._12_4_ + auVar16._12_4_;
    uStack_218 = uVar35;
    uStack_210 = uVar36;
    FUN_1400e2b50(auStack_1d8,&uStack_208,&fStack_1c8,&uStack_218,&fStack_268);
    auVar5._4_4_ = fStack_264;
    auVar5._0_4_ = fStack_268;
    auVar5._8_4_ = fStack_260;
    auVar5._12_4_ = fStack_25c;
    auVar16 = vcmpps_avx(auVar5,auStack_228,1);
    auVar16 = vshufps_avx(auVar16,auVar16,0xaa);
    auVar16 = vblendvps_avx(auVar5,auStack_228,auVar16);
    auVar19._0_4_ = fVar46 * auVar16._0_4_;
    auVar19._4_4_ = fVar50 * auVar16._4_4_;
    auVar19._8_4_ = fVar51 * auVar16._8_4_;
    auVar19._12_4_ = fVar52 * auVar16._12_4_;
    auVar25 = vroundps_avx(auVar19,3);
    auVar38._0_4_ = -(auVar25._0_4_ * auVar39._0_4_) + auVar16._0_4_;
    auVar38._4_4_ = -(auVar25._4_4_ * auVar39._4_4_) + auVar16._4_4_;
    auVar38._8_4_ = -(auVar25._8_4_ * auVar39._8_4_) + auVar16._8_4_;
    auVar38._12_4_ = -(auVar25._12_4_ * auVar39._12_4_) + auVar16._12_4_;
    auVar20._0_4_ = (int)auVar25._0_4_;
    auVar20._4_4_ = (int)auVar25._4_4_;
    auVar20._8_4_ = (int)auVar25._8_4_;
    auVar20._12_4_ = (int)auVar25._12_4_;
    auVar16 = vblendps_avx(auVar16,auVar38,3);
    auVar25 = vpackssdw_avx(auVar20,auVar20);
    auVar16 = vinsertps_avx(auVar16,auVar25,0x30);
    *(undefined1 (*) [16])(param_2 + 0xf0) = auVar16;
  }
  return;
}

