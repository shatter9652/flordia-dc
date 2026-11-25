// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e6ce0  size: 359 bytes
// Name:    FUN_1400e6ce0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e6ce0(longlong param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  short sVar5;
  short sVar7;
  undefined1 auVar6 [16];
  float fVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar9 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [64];
  float fVar16;
  undefined1 auVar17 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [64];
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
  
  iVar2 = func_0x000144e05fa0(param_2[1]);
  auVar15 = ZEXT1264(ZEXT812(0));
  fVar16 = 0.0;
  fVar19 = 0.0;
  fVar20 = 0.0;
  fVar21 = 0.0;
  if (iVar2 != 0) {
    uVar3 = (**(code **)(*param_2 + 0xf0))(param_2,0);
    (**(code **)(*param_2 + 0x108))(param_2,uVar3,auStack_c8);
    fVar16 = fStack_b8;
    fVar19 = fStack_b4;
    fVar20 = fStack_b0;
    fVar21 = fStack_ac;
  }
  (**(code **)(*param_2 + 0x88))(param_2,auStack_c8);
  auVar1._4_4_ = fStack_b4;
  auVar1._0_4_ = fStack_b8;
  auVar1._8_4_ = fStack_b0;
  auVar1._12_4_ = fStack_ac;
  auVar13 = vshufps_avx(auVar1,auStack_a8,0x33);
  auVar13 = vshufps_avx(auVar1,auVar13,0x2f);
  auVar18 = ZEXT1664(CONCAT412((_DAT_145fc6ed8 + auVar13._12_4_) * fVar21,
                               CONCAT48((_DAT_145fc6ed8 + auVar13._8_4_) * fVar20,
                                        CONCAT44((_DAT_145fc6ed8 + auVar13._4_4_) * fVar19,
                                                 (_DAT_145fc6ed8 + auVar13._0_4_) * fVar16))));
  fVar16 = _DAT_145fc6ed8;
  fVar19 = _DAT_145fc6ed8;
  fVar20 = _DAT_145fc6ed8;
  fVar21 = _DAT_145fc6ed8;
  (**(code **)(*param_2 + 0x88))(param_2,&fStack_88);
  fVar8 = auVar18._0_4_;
  auVar13._4_4_ = _DAT_14615a290;
  auVar13._0_4_ = _DAT_14615a290;
  auVar13._8_4_ = _DAT_14615a290;
  auVar13._12_4_ = _DAT_14615a290;
  auVar17 = auVar18._0_16_;
  auVar1 = vshufps_avx(auVar17,auVar17,0x55);
  auVar17 = vshufps_avx(auVar17,auVar17,0xaa);
  auVar13 = vrcpps_avx(auVar13);
  auVar4._0_4_ = auVar17._0_4_ * fStack_68 +
                 auVar1._0_4_ * fStack_78 + fVar8 * fStack_88 + auStack_58._0_4_;
  auVar4._4_4_ = auVar17._4_4_ * fStack_64 +
                 auVar1._4_4_ * fStack_74 + fVar8 * fStack_84 + auStack_58._4_4_;
  auVar4._8_4_ = auVar17._8_4_ * fStack_60 +
                 auVar1._8_4_ * fStack_70 + fVar8 * fStack_80 + auStack_58._8_4_;
  auVar4._12_4_ =
       auVar17._12_4_ * fStack_5c +
       auVar1._12_4_ * fStack_6c + fVar8 * fStack_7c + auStack_58._12_4_;
  fVar8 = auVar13._0_4_;
  fVar10 = auVar13._4_4_;
  fVar11 = auVar13._8_4_;
  fVar12 = auVar13._12_4_;
  auVar13 = vblendps_avx(auVar4,auStack_58,8);
  auVar9._0_4_ = ((-(fVar8 * _DAT_14615a290) + fVar16) * fVar8 + fVar8) * auVar13._0_4_;
  auVar9._4_4_ = ((-(fVar10 * _DAT_14615a290) + fVar19) * fVar10 + fVar10) * auVar13._4_4_;
  auVar9._8_4_ = ((-(fVar11 * _DAT_14615a290) + fVar20) * fVar11 + fVar11) * auVar13._8_4_;
  auVar9._12_4_ = ((-(fVar12 * _DAT_14615a290) + fVar21) * fVar12 + fVar12) * auVar13._12_4_;
  auVar1 = vroundps_avx(auVar9,3);
  auVar14._0_4_ = -(auVar1._0_4_ * _DAT_14615a290) + auVar13._0_4_;
  auVar14._4_4_ = -(auVar1._4_4_ * _DAT_14615a290) + auVar13._4_4_;
  auVar14._8_4_ = -(auVar1._8_4_ * _DAT_14615a290) + auVar13._8_4_;
  auVar14._12_4_ = -(auVar1._12_4_ * _DAT_14615a290) + auVar13._12_4_;
  auVar6._0_4_ = (int)auVar1._0_4_;
  auVar6._4_4_ = (int)auVar1._4_4_;
  auVar6._8_4_ = (int)auVar1._8_4_;
  auVar6._12_4_ = (int)auVar1._12_4_;
  auVar13 = vblendps_avx(auVar4,auVar14,3);
  auVar1 = vpackssdw_avx(auVar6,auVar6);
  sVar5 = auVar1._0_2_;
  auVar17._0_2_ = sVar5 + auStack_58._0_2_;
  sVar7 = auVar1._2_2_;
  auVar17._2_2_ = sVar7 + auStack_58._2_2_;
  auVar17._4_2_ = sVar5 + auStack_58._4_2_;
  auVar17._6_2_ = sVar7 + auStack_58._6_2_;
  auVar17._8_2_ = sVar5 + auStack_58._8_2_;
  auVar17._10_2_ = sVar7 + auStack_58._10_2_;
  auVar17._12_2_ = sVar5 + auStack_58._12_2_;
  auVar17._14_2_ = sVar7 + auStack_58._14_2_;
  auVar13 = vpblendd_avx2(auVar13,auVar17,8);
  *(undefined1 (*) [16])(param_1 + 0x1d0) = auVar13;
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_1 + 0x1d0);
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_1 + 0x1d8);
  *(undefined1 (*) [16])(param_1 + 0x1f0) = auVar15._0_16_;
  return;
}

