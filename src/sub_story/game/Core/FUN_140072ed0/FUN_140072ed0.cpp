// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140072ed0  size: 351 bytes
// Name:    FUN_140072ed0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140a15b00, FUN_140a156e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140072ed0(longlong param_1,longlong param_2,float *param_3)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  short sVar5;
  short sVar9;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar13 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [56];
  
  fVar12 = *param_3;
  auStack_88 = *(undefined1 (*) [16])(param_2 + 0x70);
  fVar14 = param_3[1];
  fVar15 = param_3[2];
  pfVar1 = *(float **)(param_1 + 0x10);
  auVar3._0_4_ = fVar15 * *(float *)(param_2 + 0x60) +
                 fVar14 * *(float *)(param_2 + 0x50) +
                 fVar12 * *(float *)(param_2 + 0x40) + auStack_88._0_4_;
  auVar3._4_4_ = fVar15 * *(float *)(param_2 + 100) +
                 fVar14 * *(float *)(param_2 + 0x54) +
                 fVar12 * *(float *)(param_2 + 0x44) + auStack_88._4_4_;
  auVar3._8_4_ = fVar15 * *(float *)(param_2 + 0x68) +
                 fVar14 * *(float *)(param_2 + 0x58) +
                 fVar12 * *(float *)(param_2 + 0x48) + auStack_88._8_4_;
  auVar3._12_4_ =
       fVar15 * *(float *)(param_2 + 0x6c) +
       fVar14 * *(float *)(param_2 + 0x5c) + fVar12 * *(float *)(param_2 + 0x4c) + auStack_88._12_4_
  ;
  auVar10._4_4_ = _DAT_14615a290;
  auVar10._0_4_ = _DAT_14615a290;
  auVar10._8_4_ = _DAT_14615a290;
  auVar10._12_4_ = _DAT_14615a290;
  auVar7 = vrcpps_avx(auVar10);
  auVar4 = vblendps_avx(auVar3,auStack_88,8);
  fVar12 = auVar7._0_4_;
  fVar14 = auVar7._4_4_;
  fVar15 = auVar7._8_4_;
  fVar16 = auVar7._12_4_;
  auVar13._0_4_ = ((-(fVar12 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar12 + fVar12) * auVar4._0_4_;
  auVar13._4_4_ = ((-(fVar14 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar14 + fVar14) * auVar4._4_4_;
  auVar13._8_4_ = ((-(fVar15 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar15 + fVar15) * auVar4._8_4_;
  auVar13._12_4_ = ((-(fVar16 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar16 + fVar16) * auVar4._12_4_
  ;
  auVar7 = vroundps_avx(auVar13,3);
  auVar11._0_4_ = -(auVar7._0_4_ * _DAT_14615a290) + auVar4._0_4_;
  auVar11._4_4_ = -(auVar7._4_4_ * _DAT_14615a290) + auVar4._4_4_;
  auVar11._8_4_ = -(auVar7._8_4_ * _DAT_14615a290) + auVar4._8_4_;
  auVar11._12_4_ = -(auVar7._12_4_ * _DAT_14615a290) + auVar4._12_4_;
  auVar6._0_4_ = (int)auVar7._0_4_;
  auVar6._4_4_ = (int)auVar7._4_4_;
  auVar6._8_4_ = (int)auVar7._8_4_;
  auVar6._12_4_ = (int)auVar7._12_4_;
  auVar7 = vpackssdw_avx(auVar6,auVar6);
  auVar4 = vblendps_avx(auVar3,auVar11,3);
  sVar5 = auVar7._0_2_;
  auVar2._0_2_ = sVar5 + auStack_88._0_2_;
  sVar9 = auVar7._2_2_;
  auVar2._2_2_ = sVar9 + auStack_88._2_2_;
  auVar2._4_2_ = sVar5 + auStack_88._4_2_;
  auVar2._6_2_ = sVar9 + auStack_88._6_2_;
  auVar2._8_2_ = sVar5 + auStack_88._8_2_;
  auVar2._10_2_ = sVar9 + auStack_88._10_2_;
  auVar2._12_2_ = sVar5 + auStack_88._12_2_;
  auVar2._14_2_ = sVar9 + auStack_88._14_2_;
  auVar4 = vblendps_avx(auVar4,auVar2,8);
  auVar7 = vpunpckhwd_avx(auVar4,auVar4);
  auVar7 = vpsrad_avx(auVar7,0x10);
  auVar7 = vcvtdq2ps_avx(auVar7);
  auVar7 = vshufpd_avx(auVar7,auVar7,3);
  auVar8._0_4_ = auVar7._0_4_ * _DAT_146159c90 + auVar4._0_4_;
  auVar8._4_4_ = auVar7._4_4_ * _UNK_146159c94 + auVar4._4_4_;
  auVar8._8_4_ = auVar7._8_4_ * _UNK_146159c98 + auVar4._8_4_;
  auVar8._12_4_ = auVar7._12_4_ * _UNK_146159c9c + auVar4._12_4_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = *(ulonglong *)(pfVar1 + 0x38);
  auVar4 = vsubps_avx(auVar8,auVar4);
  auVar7._0_4_ = auVar4._0_4_ * auVar4._0_4_;
  auVar7._4_4_ = auVar4._4_4_ * auVar4._4_4_;
  auVar7._8_4_ = auVar4._8_4_ * auVar4._8_4_;
  auVar7._12_4_ = auVar4._12_4_ * auVar4._12_4_;
  auVar4 = vhaddps_avx(auVar7,auVar7);
  auVar4 = vmaxss_avx(ZEXT416(0) << 0x20,ZEXT416((uint)(SQRT(auVar4._0_4_) - param_3[3])));
  if (auVar4._0_4_ <= pfVar1[0x70] * _DAT_145fc6edc * (*pfVar1 + pfVar1[0x40])) {
    func_0x000144dc3790(auStack_88,auStack_68);
    auStack_78 = vsubps_avx(auStack_68,*(undefined1 (*) [16])(pfVar1 + 0xc));
    FUN_140a156e0(param_2,auStack_78,0,auStack_58,0);
    FUN_140a15b00(param_1,param_2,auStack_58,0);
  }
  return;
}

