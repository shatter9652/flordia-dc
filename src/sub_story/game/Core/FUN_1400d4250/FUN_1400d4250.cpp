// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d4250  size: 397 bytes
// Name:    FUN_1400d4250
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d4250(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  short sVar7;
  short sVar9;
  undefined1 auVar8 [16];
  float fVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  float fVar18;
  undefined1 auVar19 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar20 [64];
  undefined1 auStack_c8 [16];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 auStack_a8 [16];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_58 [16];
  
  func_0x000144f62e80(*(undefined8 *)(param_2[0x766] + 8));
  lVar5 = func_0x000144f62e80(*(undefined8 *)(param_2[0x766] + 8));
  iVar1 = *(int *)(lVar5 + 0x84);
  iVar3 = func_0x000144e05fa0(param_2[1]);
  auVar17 = ZEXT1264(ZEXT812(0));
  fVar18 = 0.0;
  fVar21 = 0.0;
  fVar22 = 0.0;
  fVar23 = 0.0;
  if (iVar1 != iVar3) {
    uVar4 = (**(code **)(*param_2 + 0xf0))(param_2,iVar1);
    (**(code **)(*param_2 + 0x108))(param_2,uVar4,auStack_c8);
    fVar18 = fStack_b8;
    fVar21 = fStack_b4;
    fVar22 = fStack_b0;
    fVar23 = fStack_ac;
  }
  (**(code **)(*param_2 + 0x88))(param_2,auStack_c8);
  auVar2._4_4_ = fStack_b4;
  auVar2._0_4_ = fStack_b8;
  auVar2._8_4_ = fStack_b0;
  auVar2._12_4_ = fStack_ac;
  auVar15 = vshufps_avx(auVar2,auStack_a8,0x33);
  auVar15 = vshufps_avx(auVar2,auVar15,0x2f);
  auVar20 = ZEXT1664(CONCAT412((_DAT_145fc6ed8 + auVar15._12_4_) * fVar23,
                               CONCAT48((_DAT_145fc6ed8 + auVar15._8_4_) * fVar22,
                                        CONCAT44((_DAT_145fc6ed8 + auVar15._4_4_) * fVar21,
                                                 (_DAT_145fc6ed8 + auVar15._0_4_) * fVar18))));
  fVar18 = _DAT_145fc6ed8;
  fVar21 = _DAT_145fc6ed8;
  fVar22 = _DAT_145fc6ed8;
  fVar23 = _DAT_145fc6ed8;
  (**(code **)(*param_2 + 0x88))(param_2,&fStack_88);
  fVar10 = auVar20._0_4_;
  auVar15._4_4_ = _DAT_14615a290;
  auVar15._0_4_ = _DAT_14615a290;
  auVar15._8_4_ = _DAT_14615a290;
  auVar15._12_4_ = _DAT_14615a290;
  auVar19 = auVar20._0_16_;
  auVar2 = vshufps_avx(auVar19,auVar19,0x55);
  auVar19 = vshufps_avx(auVar19,auVar19,0xaa);
  auVar15 = vrcpps_avx(auVar15);
  auVar6._0_4_ = auVar19._0_4_ * fStack_68 +
                 auVar2._0_4_ * fStack_78 + fVar10 * fStack_88 + auStack_58._0_4_;
  auVar6._4_4_ = auVar19._4_4_ * fStack_64 +
                 auVar2._4_4_ * fStack_74 + fVar10 * fStack_84 + auStack_58._4_4_;
  auVar6._8_4_ = auVar19._8_4_ * fStack_60 +
                 auVar2._8_4_ * fStack_70 + fVar10 * fStack_80 + auStack_58._8_4_;
  auVar6._12_4_ =
       auVar19._12_4_ * fStack_5c +
       auVar2._12_4_ * fStack_6c + fVar10 * fStack_7c + auStack_58._12_4_;
  fVar10 = auVar15._0_4_;
  fVar12 = auVar15._4_4_;
  fVar13 = auVar15._8_4_;
  fVar14 = auVar15._12_4_;
  auVar15 = vblendps_avx(auVar6,auStack_58,8);
  auVar11._0_4_ = ((-(fVar10 * _DAT_14615a290) + fVar18) * fVar10 + fVar10) * auVar15._0_4_;
  auVar11._4_4_ = ((-(fVar12 * _DAT_14615a290) + fVar21) * fVar12 + fVar12) * auVar15._4_4_;
  auVar11._8_4_ = ((-(fVar13 * _DAT_14615a290) + fVar22) * fVar13 + fVar13) * auVar15._8_4_;
  auVar11._12_4_ = ((-(fVar14 * _DAT_14615a290) + fVar23) * fVar14 + fVar14) * auVar15._12_4_;
  auVar2 = vroundps_avx(auVar11,3);
  auVar16._0_4_ = -(auVar2._0_4_ * _DAT_14615a290) + auVar15._0_4_;
  auVar16._4_4_ = -(auVar2._4_4_ * _DAT_14615a290) + auVar15._4_4_;
  auVar16._8_4_ = -(auVar2._8_4_ * _DAT_14615a290) + auVar15._8_4_;
  auVar16._12_4_ = -(auVar2._12_4_ * _DAT_14615a290) + auVar15._12_4_;
  auVar8._0_4_ = (int)auVar2._0_4_;
  auVar8._4_4_ = (int)auVar2._4_4_;
  auVar8._8_4_ = (int)auVar2._8_4_;
  auVar8._12_4_ = (int)auVar2._12_4_;
  auVar15 = vblendps_avx(auVar6,auVar16,3);
  auVar2 = vpackssdw_avx(auVar8,auVar8);
  sVar7 = auVar2._0_2_;
  auVar19._0_2_ = sVar7 + auStack_58._0_2_;
  sVar9 = auVar2._2_2_;
  auVar19._2_2_ = sVar9 + auStack_58._2_2_;
  auVar19._4_2_ = sVar7 + auStack_58._4_2_;
  auVar19._6_2_ = sVar9 + auStack_58._6_2_;
  auVar19._8_2_ = sVar7 + auStack_58._8_2_;
  auVar19._10_2_ = sVar9 + auStack_58._10_2_;
  auVar19._12_2_ = sVar7 + auStack_58._12_2_;
  auVar19._14_2_ = sVar9 + auStack_58._14_2_;
  auVar15 = vpblendd_avx2(auVar15,auVar19,8);
  *(undefined1 (*) [16])(param_1 + 0x1a0) = auVar15;
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined1 (*) [16])(param_1 + 0x1c0) = auVar17._0_16_;
  return;
}

