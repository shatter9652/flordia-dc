// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140085340  size: 214 bytes
// Name:    FUN_140085340
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140085340(float *param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  short sVar4;
  short sVar8;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar12 [16];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  (**(code **)(*param_2 + 0x230))(param_2,&fStack_38);
  auVar7 = *(undefined1 (*) [16])(param_2 + 0xe);
  auVar3._0_4_ = (fStack_38 + fStack_28) * _DAT_145fc6edc;
  auVar3._4_4_ = (fStack_34 + fStack_24) * _DAT_145fc6edc;
  auVar3._8_4_ = (fStack_30 + fStack_20) * _DAT_145fc6edc;
  auVar3._12_4_ = (fStack_2c + fStack_1c) * _DAT_145fc6edc;
  auVar2 = vshufps_avx(auVar3,auVar3,0x55);
  auVar12 = vshufps_avx(auVar3,auVar3,0xaa);
  auVar9._4_4_ = _DAT_14615a290;
  auVar9._0_4_ = _DAT_14615a290;
  auVar9._8_4_ = _DAT_14615a290;
  auVar9._12_4_ = _DAT_14615a290;
  auVar5._0_4_ = auVar12._0_4_ * *(float *)(param_2 + 0xc) +
                 auVar2._0_4_ * *(float *)(param_2 + 10) +
                 auVar3._0_4_ * *(float *)(param_2 + 8) + auVar7._0_4_;
  auVar5._4_4_ = auVar12._4_4_ * *(float *)((longlong)param_2 + 100) +
                 auVar2._4_4_ * *(float *)((longlong)param_2 + 0x54) +
                 auVar3._0_4_ * *(float *)((longlong)param_2 + 0x44) + auVar7._4_4_;
  auVar5._8_4_ = auVar12._8_4_ * *(float *)(param_2 + 0xd) +
                 auVar2._8_4_ * *(float *)(param_2 + 0xb) +
                 auVar3._0_4_ * *(float *)(param_2 + 9) + auVar7._8_4_;
  auVar5._12_4_ =
       auVar12._12_4_ * *(float *)((longlong)param_2 + 0x6c) +
       auVar2._12_4_ * *(float *)((longlong)param_2 + 0x5c) +
       auVar3._0_4_ * *(float *)((longlong)param_2 + 0x4c) + auVar7._12_4_;
  auVar2 = vrcpps_avx(auVar9);
  fVar11 = auVar2._0_4_;
  fVar13 = auVar2._4_4_;
  fVar14 = auVar2._8_4_;
  fVar15 = auVar2._12_4_;
  auVar2 = vblendps_avx(auVar5,auVar7,8);
  auVar12._0_4_ = ((-(fVar11 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar11 + fVar11) * auVar2._0_4_;
  auVar12._4_4_ = ((-(fVar13 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar13 + fVar13) * auVar2._4_4_;
  auVar12._8_4_ = ((-(fVar14 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar14 + fVar14) * auVar2._8_4_;
  auVar12._12_4_ = ((-(fVar15 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar15 + fVar15) * auVar2._12_4_
  ;
  auVar12 = vroundps_avx(auVar12,3);
  auVar10._0_4_ = -(auVar12._0_4_ * _DAT_14615a290) + auVar2._0_4_;
  auVar10._4_4_ = -(auVar12._4_4_ * _DAT_14615a290) + auVar2._4_4_;
  auVar10._8_4_ = -(auVar12._8_4_ * _DAT_14615a290) + auVar2._8_4_;
  auVar10._12_4_ = -(auVar12._12_4_ * _DAT_14615a290) + auVar2._12_4_;
  auVar2 = vblendps_avx(auVar5,auVar10,3);
  auVar6._0_4_ = (int)auVar12._0_4_;
  auVar6._4_4_ = (int)auVar12._4_4_;
  auVar6._8_4_ = (int)auVar12._8_4_;
  auVar6._12_4_ = (int)auVar12._12_4_;
  auVar12 = vpackssdw_avx(auVar6,auVar6);
  sVar4 = auVar12._0_2_;
  auVar1._0_2_ = sVar4 + auVar7._0_2_;
  sVar8 = auVar12._2_2_;
  auVar1._2_2_ = sVar8 + auVar7._2_2_;
  auVar1._4_2_ = sVar4 + auVar7._4_2_;
  auVar1._6_2_ = sVar8 + auVar7._6_2_;
  auVar1._8_2_ = sVar4 + auVar7._8_2_;
  auVar1._10_2_ = sVar8 + auVar7._10_2_;
  auVar1._12_2_ = sVar4 + auVar7._12_2_;
  auVar1._14_2_ = sVar8 + auVar7._14_2_;
  auVar2 = vpblendd_avx2(auVar2,auVar1,8);
  auVar7 = vpunpckhwd_avx(auVar2,auVar2);
  auVar7 = vpsrad_avx(auVar7,0x10);
  auVar7 = vcvtdq2ps_avx(auVar7);
  auVar7 = vshufpd_avx(auVar7,auVar7,3);
  fVar14 = auVar7._4_4_ * _UNK_146159c94;
  fVar11 = auVar7._8_4_ * _UNK_146159c98;
  fVar13 = auVar7._12_4_ * _UNK_146159c9c;
  *param_1 = auVar7._0_4_ * _DAT_146159c90 + auVar2._0_4_;
  param_1[1] = fVar14 + auVar2._4_4_;
  param_1[2] = fVar11 + auVar2._8_4_;
  param_1[3] = fVar13 + auVar2._12_4_;
  return;
}

