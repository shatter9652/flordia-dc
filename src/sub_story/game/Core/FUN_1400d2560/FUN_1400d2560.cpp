// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d2560  size: 1751 bytes
// Name:    FUN_1400d2560
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400e3200, FUN_1400d2fc0, FUN_1400e2df0, FUN_1400d32e0, FUN_1400d3c10, FUN_1400d2c40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d2560(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined1 param_6,int param_7)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 extraout_var [56];
  short sVar13;
  short sVar22;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar23;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar45;
  float fVar46;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar47;
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [64];
  float fVar54;
  float fVar55;
  undefined1 auVar58 [64];
  undefined1 auStack_10c [4];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 auVar59 [64];
  
  iVar7 = func_0x000144e05fa0(param_2[1]);
  if (iVar7 == 0) {
    auVar20._0_12_ = ZEXT812(0);
    auVar20._12_4_ = 0;
  }
  else {
    uVar8 = (**(code **)(*param_2 + 0xf0))(param_2,0);
    (**(code **)(*param_2 + 0x108))(param_2,uVar8,&fStack_e8);
    auVar20._4_4_ = fStack_d4;
    auVar20._0_4_ = fStack_d8;
    auVar20._8_4_ = fStack_d0;
    auVar20._12_4_ = fStack_cc;
  }
  *(undefined1 (*) [16])(param_1 + 0x210) = auVar20;
  if (((*(byte *)(param_1 + 0xa8) & 1) != 0) || (0.0 < *(float *)(param_1 + 0x278))) {
    if (param_7 == 0) {
      FUN_1400d3c10(param_1,param_3,param_4,auStack_f8,auStack_108,auStack_10c);
    }
    else if (param_7 == 1) {
      FUN_1400e3200(param_1,param_3,param_4,auStack_f8,auStack_108,auStack_10c);
    }
    else {
      FUN_1400e2df0(param_1,param_3,auStack_f8,auStack_108,auStack_10c);
    }
    auVar58._0_8_ =
         FUN_1400d2fc0(param_1,param_2,param_3,param_4,auStack_f8,auStack_108,auStack_10c,param_7,
                       param_6);
    auVar58._8_56_ = extraout_var;
    auVar53 = ZEXT1664(auVar58._0_16_);
    if (((*(byte *)(param_1 + 0x91) & 2) != 0) &&
       (auVar58._0_8_ = (ulonglong)(uint)_DAT_145fc6ed8,
       *(float *)(param_1 + 0x370) < _DAT_145fc6ed8)) {
      auVar59 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 0x260));
      auVar34._4_4_ = _DAT_145fc6f50;
      auVar34._0_4_ = _DAT_145fc6f50;
      auVar34._8_4_ = _DAT_145fc6f50;
      auVar34._12_4_ = _DAT_145fc6f50;
      auVar20 = vcmpps_avx(*(undefined1 (*) [16])(param_1 + 0x260),auVar34,0);
      auVar58._0_8_ = auVar20._0_8_;
      uVar8 = vmovmskps_avx(auVar20);
      if ((~(byte)uVar8 & 7) != 0) {
        (**(code **)(*param_2 + 0x88))(param_2,&fStack_e8);
        auVar3._4_4_ = fStack_d4;
        auVar3._0_4_ = fStack_d8;
        auVar3._8_4_ = fStack_d0;
        auVar3._12_4_ = fStack_cc;
        auVar20 = vshufps_avx(auStack_c8,auVar3,0x33);
        auVar20 = vshufps_avx(auVar3,auVar20,0x8f);
        auVar43._0_4_ = (auVar20._0_4_ + _DAT_145fc6ed8) * auVar59._0_4_;
        auVar43._4_4_ = (auVar20._4_4_ + _DAT_145fc6ed8) * auVar59._4_4_;
        auVar43._8_4_ = (auVar20._8_4_ + _DAT_145fc6ed8) * auVar59._8_4_;
        auVar43._12_4_ = (auVar20._12_4_ + _DAT_145fc6ed8) * auVar59._12_4_;
        auVar20 = vshufps_avx(auVar43,auVar43,0x55);
        auVar34 = vshufps_avx(auVar43,auVar43,0xaa);
        auVar52._0_4_ =
             auStack_c8._0_4_ * auVar34._0_4_ +
             fStack_d8 * auVar20._0_4_ + auVar43._0_4_ * fStack_e8 + auStack_b8._0_4_;
        auVar52._4_4_ =
             auStack_c8._4_4_ * auVar34._4_4_ +
             fStack_d4 * auVar20._4_4_ + auVar43._0_4_ * fStack_e4 + auStack_b8._4_4_;
        auVar52._8_4_ =
             auStack_c8._8_4_ * auVar34._8_4_ +
             fStack_d0 * auVar20._8_4_ + auVar43._0_4_ * fStack_e0 + auStack_b8._8_4_;
        auVar52._12_4_ =
             auStack_c8._12_4_ * auVar34._12_4_ +
             fStack_cc * auVar20._12_4_ + auVar43._0_4_ * fStack_dc + auStack_b8._12_4_;
        auVar17._4_4_ = _DAT_14615a290;
        auVar17._0_4_ = _DAT_14615a290;
        auVar17._8_4_ = _DAT_14615a290;
        auVar17._12_4_ = _DAT_14615a290;
        auVar20 = vblendps_avx(auVar52,auStack_b8,8);
        auVar34 = vrcpps_avx(auVar17);
        fVar23 = auVar34._0_4_;
        fVar45 = auVar34._4_4_;
        fVar46 = auVar34._8_4_;
        fVar47 = auVar34._12_4_;
        auVar44._0_4_ =
             auVar20._0_4_ * ((-(fVar23 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar23 + fVar23);
        auVar44._4_4_ =
             auVar20._4_4_ * ((-(fVar45 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar45 + fVar45);
        auVar44._8_4_ =
             auVar20._8_4_ * ((-(fVar46 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar46 + fVar46);
        auVar44._12_4_ =
             auVar20._12_4_ * ((-(fVar47 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar47 + fVar47);
        auVar34 = vroundps_avx(auVar44,3);
        auVar18._0_4_ = -(auVar34._0_4_ * _DAT_14615a290) + auVar20._0_4_;
        auVar18._4_4_ = -(auVar34._4_4_ * _DAT_14615a290) + auVar20._4_4_;
        auVar18._8_4_ = -(auVar34._8_4_ * _DAT_14615a290) + auVar20._8_4_;
        auVar18._12_4_ = -(auVar34._12_4_ * _DAT_14615a290) + auVar20._12_4_;
        auVar20 = vblendps_avx(auVar52,auVar18,3);
        auVar19._0_4_ = (int)auVar34._0_4_;
        auVar19._4_4_ = (int)auVar34._4_4_;
        auVar19._8_4_ = (int)auVar34._8_4_;
        auVar19._12_4_ = (int)auVar34._12_4_;
        auVar34 = vpackssdw_avx(auVar19,auVar19);
        sVar13 = auVar34._0_2_;
        auVar15._0_2_ = sVar13 + auStack_b8._0_2_;
        sVar22 = auVar34._2_2_;
        auVar15._2_2_ = sVar22 + auStack_b8._2_2_;
        auVar15._4_2_ = sVar13 + auStack_b8._4_2_;
        auVar15._6_2_ = sVar22 + auStack_b8._6_2_;
        auVar15._8_2_ = sVar13 + auStack_b8._8_2_;
        auVar15._10_2_ = sVar22 + auStack_b8._10_2_;
        auVar15._12_2_ = sVar13 + auStack_b8._12_2_;
        auVar15._14_2_ = sVar22 + auStack_b8._14_2_;
        auVar34 = vpblendd_avx2(auVar20,auVar15,8);
        auVar20 = vpunpckhwd_avx(auVar34,auVar34);
        auVar20 = vpsrad_avx(auVar20,0x10);
        auVar20 = vcvtdq2ps_avx(auVar20);
        auVar20 = vshufpd_avx(auVar20,auVar20,3);
        auVar21._0_4_ = auVar20._0_4_ * _DAT_146159c90 + auVar34._0_4_;
        auVar21._4_4_ = auVar20._4_4_ * _UNK_146159c94 + auVar34._4_4_;
        auVar21._8_4_ = auVar20._8_4_ * _UNK_146159c98 + auVar34._8_4_;
        auVar21._12_4_ = auVar20._12_4_ * _UNK_146159c9c + auVar34._12_4_;
        auVar20 = vshufpd_avx(auVar21,auVar21,1);
        auVar58._0_8_ = auVar20._0_8_;
        auVar53 = ZEXT464((uint)((auVar53._0_4_ - auVar20._0_4_) * *(float *)(param_1 + 0x370) +
                                auVar20._0_4_));
      }
    }
    iVar7 = func_0x000144e05fa0(auVar58._0_8_);
    if (iVar7 == 0) {
      fVar23 = 0.0;
      fVar45 = 0.0;
      fVar46 = 0.0;
      fVar47 = 0.0;
    }
    else {
      uVar8 = (**(code **)(*param_2 + 0xf0))(param_2,0);
      (**(code **)(*param_2 + 0x108))(param_2,uVar8,&fStack_e8);
      fVar23 = fStack_d8;
      fVar45 = fStack_d4;
      fVar46 = fStack_d0;
      fVar47 = fStack_cc;
    }
    (**(code **)(*param_2 + 0x88))(param_2,&fStack_e8);
    auVar4._4_4_ = fStack_d4;
    auVar4._0_4_ = fStack_d8;
    auVar4._8_4_ = fStack_d0;
    auVar4._12_4_ = fStack_cc;
    auVar20 = vshufps_avx(auVar4,auStack_c8,0x33);
    auVar20 = vshufps_avx(auVar4,auVar20,0x2f);
    auVar58 = ZEXT1664(CONCAT412(fVar47 * (auVar20._12_4_ + _DAT_145fc6ed8),
                                 CONCAT48(fVar46 * (auVar20._8_4_ + _DAT_145fc6ed8),
                                          CONCAT44(fVar45 * (auVar20._4_4_ + _DAT_145fc6ed8),
                                                   fVar23 * (auVar20._0_4_ + _DAT_145fc6ed8)))));
    fVar46 = _DAT_145fc6ed8;
    fVar47 = _DAT_145fc6ed8;
    fVar54 = _DAT_145fc6ed8;
    fVar55 = _DAT_145fc6ed8;
    (**(code **)(*param_2 + 0x88))(param_2,&fStack_a8);
    fVar23 = auVar58._0_4_;
    auVar34 = auVar58._0_16_;
    auVar20 = vshufps_avx(auVar34,auVar34,0x55);
    auVar34 = vshufps_avx(auVar34,auVar34,0xaa);
    auVar32._0_4_ =
         auVar34._0_4_ * fStack_88 + auVar20._0_4_ * fStack_98 + fVar23 * fStack_a8 + fStack_78;
    auVar32._4_4_ =
         auVar34._4_4_ * fStack_84 + auVar20._4_4_ * fStack_94 + fVar23 * fStack_a4 + fStack_74;
    auVar32._8_4_ =
         auVar34._8_4_ * fStack_80 + auVar20._8_4_ * fStack_90 + fVar23 * fStack_a0 + fStack_70;
    auVar32._12_4_ =
         auVar34._12_4_ * fStack_7c + auVar20._12_4_ * fStack_8c + fVar23 * fStack_9c + fStack_6c;
    auVar20 = vshufpd_avx(auVar32,auVar32,1);
    uVar10 = FUN_1400d2c40(param_1,param_3,auVar20._0_8_,auVar53._0_8_);
    FUN_1400d32e0(param_1,param_3,uVar10,param_1 + 0x284,param_1 + 0x288);
    fVar45 = _DAT_14615a290;
    fVar23 = *(float *)(param_1 + 0x278) * *(float *)(param_1 + 0x284);
    if (_DAT_145fc6f00 < (float)((uint)fVar23 & _DAT_145fc6f4c)) {
      auVar14._4_4_ = _DAT_14615a290;
      auVar14._0_4_ = _DAT_14615a290;
      auVar14._8_4_ = _DAT_14615a290;
      auVar14._12_4_ = _DAT_14615a290;
      auVar11._0_4_ = fVar23 * _DAT_14614f7f0;
      auVar11._4_4_ = fVar23 * _UNK_14614f7f4;
      auVar11._8_4_ = fVar23 * _UNK_14614f7f8;
      auVar11._12_4_ = fVar23 * _UNK_14614f7fc;
      auVar56._0_12_ = ZEXT812(0);
      auVar56._12_4_ = 0;
      auVar59 = ZEXT1664(auVar56);
      auVar20 = vrcpps_avx(auVar14);
      *(undefined1 (*) [16])(param_1 + 0x240) = auVar11;
      auVar34 = vshufps_avx(auVar11,auVar11,0xaa);
      pauVar2 = (undefined1 (*) [16])param_2[4];
      fVar23 = auVar20._0_4_;
      fVar29 = auVar20._4_4_;
      fVar30 = auVar20._8_4_;
      fVar31 = auVar20._12_4_;
      auVar53 = ZEXT1664(CONCAT412((-(fVar31 * fVar45) + fVar55) * fVar31 + fVar31,
                                   CONCAT48((-(fVar30 * fVar45) + fVar54) * fVar30 + fVar30,
                                            CONCAT44((-(fVar29 * fVar45) + fVar47) * fVar29 + fVar29
                                                     ,(-(fVar23 * fVar45) + fVar46) * fVar23 +
                                                      fVar23))));
      auVar3 = vunpcklps_avx(*pauVar2,pauVar2[2]);
      auVar20 = vunpckhps_avx(*pauVar2,pauVar2[2]);
      auVar17 = vunpcklps_avx(pauVar2[1],auVar56);
      auVar15 = vunpckhps_avx(pauVar2[1],auVar56);
      auVar18 = vunpcklps_avx(auVar20,auVar15);
      auVar19 = vunpcklps_avx(auVar3,auVar17);
      auVar15 = vunpckhps_avx(auVar3,auVar17);
      auVar20 = vshufps_avx(auVar11,auVar11,0x55);
      auVar58 = ZEXT1664(CONCAT412(auVar18._12_4_ * auVar34._12_4_ +
                                   auVar15._12_4_ * auVar20._12_4_ + auVar19._12_4_ * auVar11._0_4_,
                                   CONCAT48(auVar18._8_4_ * auVar34._8_4_ +
                                            auVar15._8_4_ * auVar20._8_4_ +
                                            auVar19._8_4_ * auVar11._0_4_,
                                            CONCAT44(auVar18._4_4_ * auVar34._4_4_ +
                                                     auVar15._4_4_ * auVar20._4_4_ +
                                                     auVar19._4_4_ * auVar11._0_4_,
                                                     auVar18._0_4_ * auVar34._0_4_ +
                                                     auVar15._0_4_ * auVar20._0_4_ +
                                                     auVar19._0_4_ * auVar11._0_4_))));
      iVar7 = func_0x000144e05fa0();
      auVar34 = auVar53._0_16_;
      auVar57 = auVar59._0_16_;
      auVar20 = auVar58._0_16_;
      if (iVar7 != 0) {
        uVar8 = (**(code **)(*param_2 + 0xf0))(param_2,0);
        (**(code **)(*param_2 + 0x108))(param_2,uVar8,&fStack_e8);
        auVar34 = auVar53._0_16_;
        auVar20 = auVar58._0_16_;
        auVar57._4_4_ = fStack_d4;
        auVar57._0_4_ = fStack_d8;
        auVar57._8_4_ = fStack_d0;
        auVar57._12_4_ = fStack_cc;
      }
      fVar23 = auVar20._0_4_;
      fVar45 = auVar20._4_4_;
      fVar46 = auVar20._8_4_;
      fVar47 = auVar20._12_4_;
      *(float *)(param_1 + 0x210) = auVar57._0_4_ + fVar23;
      *(float *)(param_1 + 0x214) = auVar57._4_4_ + fVar45;
      *(float *)(param_1 + 0x218) = auVar57._8_4_ + fVar46;
      *(float *)(param_1 + 0x21c) = auVar57._12_4_ + fVar47;
      fVar6 = _DAT_14615ad78;
      auVar20 = *(undefined1 (*) [16])(param_3 + 0x90);
      auVar15 = vpunpckhwd_avx(auVar20,auVar20);
      auVar15 = vpsrad_avx(auVar15,0x10);
      auVar15 = vcvtdq2ps_avx(auVar15);
      auVar15 = vshufpd_avx(auVar15,auVar15,3);
      auVar16._0_4_ = auVar15._0_4_ * _DAT_146159c90 + auVar20._0_4_ + fVar23;
      auVar16._4_4_ = auVar15._4_4_ * _UNK_146159c94 + auVar20._4_4_ + fVar45;
      auVar16._8_4_ = auVar15._8_4_ * _UNK_146159c98 + auVar20._8_4_ + fVar46;
      auVar16._12_4_ = auVar15._12_4_ * _UNK_146159c9c + auVar20._12_4_ + fVar47;
      fVar54 = auVar34._0_4_;
      auVar12._0_4_ = auVar16._0_4_ * fVar54;
      fVar55 = auVar34._4_4_;
      auVar12._4_4_ = auVar16._4_4_ * fVar55;
      fVar29 = auVar34._8_4_;
      auVar12._8_4_ = auVar16._8_4_ * fVar29;
      fVar30 = auVar34._12_4_;
      auVar12._12_4_ = auVar16._12_4_ * fVar30;
      auVar20 = vroundps_avx(auVar12,3);
      auVar33._0_4_ = auVar20._0_4_ * _DAT_14615ad78 + auVar16._0_4_;
      auVar33._4_4_ = auVar20._4_4_ * _DAT_14615ad78 + auVar16._4_4_;
      auVar33._8_4_ = auVar20._8_4_ * _DAT_14615ad78 + auVar16._8_4_;
      auVar33._12_4_ = auVar20._12_4_ * _DAT_14615ad78 + auVar16._12_4_;
      auVar24._0_4_ = (int)auVar20._0_4_;
      auVar24._4_4_ = (int)auVar20._4_4_;
      auVar24._8_4_ = (int)auVar20._8_4_;
      auVar24._12_4_ = (int)auVar20._12_4_;
      auVar34 = vpackssdw_avx(auVar24,auVar24);
      auVar20 = vblendps_avx(auVar16,auVar33,3);
      auVar20 = vinsertps_avx(auVar20,auVar34,0x30);
      *(undefined1 (*) [16])(param_3 + 0x90) = auVar20;
      fVar5 = _UNK_146159c94;
      fVar31 = _DAT_146159c90;
      uVar1 = *(uint *)(param_4 + 0x54);
      if ((ulonglong)uVar1 != 0) {
        lVar9 = 0;
        do {
          auVar20 = *(undefined1 (*) [16])(param_4 + 0x70 + lVar9);
          auVar34 = vpunpckhwd_avx(auVar20,auVar20);
          auVar34 = vpsrad_avx(auVar34,0x10);
          auVar34 = vcvtdq2ps_avx(auVar34);
          auVar34 = vshufpd_avx(auVar34,auVar34,3);
          auVar25._0_4_ = auVar34._0_4_ * fVar31 + auVar20._0_4_ + fVar23;
          auVar25._4_4_ = auVar34._4_4_ * fVar5 + auVar20._4_4_ + fVar45;
          auVar25._8_4_ = auVar34._8_4_ * 0.0 + auVar20._8_4_ + fVar46;
          auVar25._12_4_ = auVar34._12_4_ * 0.0 + auVar20._12_4_ + fVar47;
          auVar35._0_4_ = auVar25._0_4_ * fVar54;
          auVar35._4_4_ = auVar25._4_4_ * fVar55;
          auVar35._8_4_ = auVar25._8_4_ * fVar29;
          auVar35._12_4_ = auVar25._12_4_ * fVar30;
          auVar20 = vroundps_avx(auVar35,3);
          auVar48._0_4_ = auVar20._0_4_ * fVar6 + auVar25._0_4_;
          auVar48._4_4_ = auVar20._4_4_ * fVar6 + auVar25._4_4_;
          auVar48._8_4_ = auVar20._8_4_ * fVar6 + auVar25._8_4_;
          auVar48._12_4_ = auVar20._12_4_ * fVar6 + auVar25._12_4_;
          auVar36._0_4_ = (int)auVar20._0_4_;
          auVar36._4_4_ = (int)auVar20._4_4_;
          auVar36._8_4_ = (int)auVar20._8_4_;
          auVar36._12_4_ = (int)auVar20._12_4_;
          auVar34 = vpackssdw_avx(auVar36,auVar36);
          auVar20 = vblendps_avx(auVar25,auVar48,3);
          auVar20 = vinsertps_avx(auVar20,auVar34,0x30);
          *(undefined1 (*) [16])(param_4 + 0x70 + lVar9) = auVar20;
          lVar9 = lVar9 + 0x30;
        } while ((ulonglong)uVar1 * 0x30 != lVar9);
      }
      fVar5 = _UNK_146159c94;
      fVar31 = _DAT_146159c90;
      uVar1 = *(uint *)(param_4 + 0x174);
      if ((ulonglong)uVar1 != 0) {
        lVar9 = 0;
        do {
          auVar20 = *(undefined1 (*) [16])(param_4 + 400 + lVar9);
          auVar34 = vpunpckhwd_avx(auVar20,auVar20);
          auVar34 = vpsrad_avx(auVar34,0x10);
          auVar34 = vcvtdq2ps_avx(auVar34);
          auVar34 = vshufpd_avx(auVar34,auVar34,3);
          auVar26._0_4_ = auVar34._0_4_ * fVar31 + auVar20._0_4_ + fVar23;
          auVar26._4_4_ = auVar34._4_4_ * fVar5 + auVar20._4_4_ + fVar45;
          auVar26._8_4_ = auVar34._8_4_ * 0.0 + auVar20._8_4_ + fVar46;
          auVar26._12_4_ = auVar34._12_4_ * 0.0 + auVar20._12_4_ + fVar47;
          auVar37._0_4_ = auVar26._0_4_ * fVar54;
          auVar37._4_4_ = auVar26._4_4_ * fVar55;
          auVar37._8_4_ = auVar26._8_4_ * fVar29;
          auVar37._12_4_ = auVar26._12_4_ * fVar30;
          auVar20 = vroundps_avx(auVar37,3);
          auVar49._0_4_ = auVar20._0_4_ * fVar6 + auVar26._0_4_;
          auVar49._4_4_ = auVar20._4_4_ * fVar6 + auVar26._4_4_;
          auVar49._8_4_ = auVar20._8_4_ * fVar6 + auVar26._8_4_;
          auVar49._12_4_ = auVar20._12_4_ * fVar6 + auVar26._12_4_;
          auVar38._0_4_ = (int)auVar20._0_4_;
          auVar38._4_4_ = (int)auVar20._4_4_;
          auVar38._8_4_ = (int)auVar20._8_4_;
          auVar38._12_4_ = (int)auVar20._12_4_;
          auVar34 = vpackssdw_avx(auVar38,auVar38);
          auVar20 = vblendps_avx(auVar26,auVar49,3);
          auVar20 = vinsertps_avx(auVar20,auVar34,0x30);
          *(undefined1 (*) [16])(param_4 + 400 + lVar9) = auVar20;
          lVar9 = lVar9 + 0x30;
        } while ((ulonglong)uVar1 * 0x30 != lVar9);
      }
      fVar5 = _UNK_146159c94;
      fVar31 = _DAT_146159c90;
      uVar1 = *(uint *)(param_5 + 0x44);
      if ((ulonglong)uVar1 != 0) {
        lVar9 = 0;
        do {
          auVar20 = *(undefined1 (*) [16])(param_5 + 0x60 + lVar9);
          auVar34 = vpunpckhwd_avx(auVar20,auVar20);
          auVar34 = vpsrad_avx(auVar34,0x10);
          auVar34 = vcvtdq2ps_avx(auVar34);
          auVar34 = vshufpd_avx(auVar34,auVar34,3);
          auVar27._0_4_ = auVar34._0_4_ * fVar31 + auVar20._0_4_ + fVar23;
          auVar27._4_4_ = auVar34._4_4_ * fVar5 + auVar20._4_4_ + fVar45;
          auVar27._8_4_ = auVar34._8_4_ * 0.0 + auVar20._8_4_ + fVar46;
          auVar27._12_4_ = auVar34._12_4_ * 0.0 + auVar20._12_4_ + fVar47;
          auVar39._0_4_ = auVar27._0_4_ * fVar54;
          auVar39._4_4_ = auVar27._4_4_ * fVar55;
          auVar39._8_4_ = auVar27._8_4_ * fVar29;
          auVar39._12_4_ = auVar27._12_4_ * fVar30;
          auVar20 = vroundps_avx(auVar39,3);
          auVar50._0_4_ = auVar20._0_4_ * fVar6 + auVar27._0_4_;
          auVar50._4_4_ = auVar20._4_4_ * fVar6 + auVar27._4_4_;
          auVar50._8_4_ = auVar20._8_4_ * fVar6 + auVar27._8_4_;
          auVar50._12_4_ = auVar20._12_4_ * fVar6 + auVar27._12_4_;
          auVar40._0_4_ = (int)auVar20._0_4_;
          auVar40._4_4_ = (int)auVar20._4_4_;
          auVar40._8_4_ = (int)auVar20._8_4_;
          auVar40._12_4_ = (int)auVar20._12_4_;
          auVar34 = vpackssdw_avx(auVar40,auVar40);
          auVar20 = vblendps_avx(auVar27,auVar50,3);
          auVar20 = vinsertps_avx(auVar20,auVar34,0x30);
          *(undefined1 (*) [16])(param_5 + 0x60 + lVar9) = auVar20;
          lVar9 = lVar9 + 0x30;
        } while ((ulonglong)uVar1 * 0x30 != lVar9);
      }
      fVar5 = _UNK_146159c94;
      fVar31 = _DAT_146159c90;
      uVar1 = *(uint *)(param_5 + 0x114);
      if ((ulonglong)uVar1 != 0) {
        lVar9 = 0;
        do {
          auVar20 = *(undefined1 (*) [16])(param_5 + 0x130 + lVar9);
          auVar34 = vpunpckhwd_avx(auVar20,auVar20);
          auVar34 = vpsrad_avx(auVar34,0x10);
          auVar34 = vcvtdq2ps_avx(auVar34);
          auVar34 = vshufpd_avx(auVar34,auVar34,3);
          auVar28._0_4_ = auVar34._0_4_ * fVar31 + auVar20._0_4_ + fVar23;
          auVar28._4_4_ = auVar34._4_4_ * fVar5 + auVar20._4_4_ + fVar45;
          auVar28._8_4_ = auVar34._8_4_ * 0.0 + auVar20._8_4_ + fVar46;
          auVar28._12_4_ = auVar34._12_4_ * 0.0 + auVar20._12_4_ + fVar47;
          auVar41._0_4_ = auVar28._0_4_ * fVar54;
          auVar41._4_4_ = auVar28._4_4_ * fVar55;
          auVar41._8_4_ = auVar28._8_4_ * fVar29;
          auVar41._12_4_ = auVar28._12_4_ * fVar30;
          auVar20 = vroundps_avx(auVar41,3);
          auVar51._0_4_ = auVar20._0_4_ * fVar6 + auVar28._0_4_;
          auVar51._4_4_ = auVar20._4_4_ * fVar6 + auVar28._4_4_;
          auVar51._8_4_ = auVar20._8_4_ * fVar6 + auVar28._8_4_;
          auVar51._12_4_ = auVar20._12_4_ * fVar6 + auVar28._12_4_;
          auVar42._0_4_ = (int)auVar20._0_4_;
          auVar42._4_4_ = (int)auVar20._4_4_;
          auVar42._8_4_ = (int)auVar20._8_4_;
          auVar42._12_4_ = (int)auVar20._12_4_;
          auVar34 = vpackssdw_avx(auVar42,auVar42);
          auVar20 = vblendps_avx(auVar28,auVar51,3);
          auVar20 = vinsertps_avx(auVar20,auVar34,0x30);
          *(undefined1 (*) [16])(param_5 + 0x130 + lVar9) = auVar20;
          lVar9 = lVar9 + 0x30;
        } while ((ulonglong)uVar1 * 0x30 != lVar9);
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x284) = 0;
  }
  return;
}

