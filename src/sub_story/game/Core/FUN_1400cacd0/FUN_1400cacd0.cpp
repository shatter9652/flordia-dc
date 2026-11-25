// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cacd0  size: 576 bytes
// Name:    FUN_1400cacd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400ce300, FUN_1400ded20, FUN_1400d4250, FUN_1400dcd20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400cacd0(longlong param_1,ulonglong *param_2,longlong param_3,undefined4 param_4,
                  char param_5)

{
  int iVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  short sVar8;
  short sVar10;
  undefined1 auVar9 [16];
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar12 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar20 [64];
  ulonglong *puStack_c8;
  undefined4 uStack_c0;
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
  lVar6 = func_0x000144f62e80(*(undefined8 *)(param_2[0x766] + 8));
  iVar1 = *(int *)(lVar6 + 0x84);
  iVar4 = func_0x000144e05fa0(param_2[1]);
  if (iVar1 == iVar4) {
    fVar18 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
  }
  else {
    uVar5 = (**(code **)(*param_2 + 0xf0))(param_2,iVar1);
    (**(code **)(*param_2 + 0x108))(param_2,uVar5,&puStack_c8);
    fVar18 = fStack_b8;
    fVar21 = fStack_b4;
    fVar22 = fStack_b0;
    fVar23 = fStack_ac;
  }
  (**(code **)(*param_2 + 0x88))(param_2,&puStack_c8);
  auVar2._4_4_ = fStack_b4;
  auVar2._0_4_ = fStack_b8;
  auVar2._8_4_ = fStack_b0;
  auVar2._12_4_ = fStack_ac;
  auVar16 = vshufps_avx(auVar2,auStack_a8,0x33);
  auVar16 = vshufps_avx(auVar2,auVar16,0x2f);
  auVar20 = ZEXT1664(CONCAT412((auVar16._12_4_ + _DAT_145fc6ed8) * fVar23,
                               CONCAT48((auVar16._8_4_ + _DAT_145fc6ed8) * fVar22,
                                        CONCAT44((auVar16._4_4_ + _DAT_145fc6ed8) * fVar21,
                                                 (auVar16._0_4_ + _DAT_145fc6ed8) * fVar18))));
  fVar18 = _DAT_145fc6ed8;
  fVar21 = _DAT_145fc6ed8;
  fVar22 = _DAT_145fc6ed8;
  fVar23 = _DAT_145fc6ed8;
  (**(code **)(*param_2 + 0x88))(param_2,&fStack_88);
  fVar11 = auVar20._0_4_;
  auVar16._4_4_ = _DAT_14615a290;
  auVar16._0_4_ = _DAT_14615a290;
  auVar16._8_4_ = _DAT_14615a290;
  auVar16._12_4_ = _DAT_14615a290;
  auVar19 = auVar20._0_16_;
  auVar2 = vshufps_avx(auVar19,auVar19,0x55);
  auVar19 = vshufps_avx(auVar19,auVar19,0xaa);
  auVar16 = vrcpps_avx(auVar16);
  auVar7._0_4_ = auVar19._0_4_ * fStack_68 +
                 auVar2._0_4_ * fStack_78 + fVar11 * fStack_88 + auStack_58._0_4_;
  auVar7._4_4_ = auVar19._4_4_ * fStack_64 +
                 auVar2._4_4_ * fStack_74 + fVar11 * fStack_84 + auStack_58._4_4_;
  auVar7._8_4_ = auVar19._8_4_ * fStack_60 +
                 auVar2._8_4_ * fStack_70 + fVar11 * fStack_80 + auStack_58._8_4_;
  auVar7._12_4_ =
       auVar19._12_4_ * fStack_5c +
       auVar2._12_4_ * fStack_6c + fVar11 * fStack_7c + auStack_58._12_4_;
  fVar11 = auVar16._0_4_;
  fVar13 = auVar16._4_4_;
  fVar14 = auVar16._8_4_;
  fVar15 = auVar16._12_4_;
  auVar16 = vblendps_avx(auVar7,auStack_58,8);
  auVar12._0_4_ = ((-(fVar11 * _DAT_14615a290) + fVar18) * fVar11 + fVar11) * auVar16._0_4_;
  auVar12._4_4_ = ((-(fVar13 * _DAT_14615a290) + fVar21) * fVar13 + fVar13) * auVar16._4_4_;
  auVar12._8_4_ = ((-(fVar14 * _DAT_14615a290) + fVar22) * fVar14 + fVar14) * auVar16._8_4_;
  auVar12._12_4_ = ((-(fVar15 * _DAT_14615a290) + fVar23) * fVar15 + fVar15) * auVar16._12_4_;
  auVar2 = vroundps_avx(auVar12,3);
  auVar17._0_4_ = -(auVar2._0_4_ * _DAT_14615a290) + auVar16._0_4_;
  auVar17._4_4_ = -(auVar2._4_4_ * _DAT_14615a290) + auVar16._4_4_;
  auVar17._8_4_ = -(auVar2._8_4_ * _DAT_14615a290) + auVar16._8_4_;
  auVar17._12_4_ = -(auVar2._12_4_ * _DAT_14615a290) + auVar16._12_4_;
  auVar9._0_4_ = (int)auVar2._0_4_;
  auVar9._4_4_ = (int)auVar2._4_4_;
  auVar9._8_4_ = (int)auVar2._8_4_;
  auVar9._12_4_ = (int)auVar2._12_4_;
  auVar16 = vblendps_avx(auVar7,auVar17,3);
  auVar2 = vpackssdw_avx(auVar9,auVar9);
  sVar8 = auVar2._0_2_;
  auVar19._0_2_ = sVar8 + auStack_58._0_2_;
  sVar10 = auVar2._2_2_;
  auVar19._2_2_ = sVar10 + auStack_58._2_2_;
  auVar19._4_2_ = sVar8 + auStack_58._4_2_;
  auVar19._6_2_ = sVar10 + auStack_58._6_2_;
  auVar19._8_2_ = sVar8 + auStack_58._8_2_;
  auVar19._10_2_ = sVar10 + auStack_58._10_2_;
  auVar19._12_2_ = sVar8 + auStack_58._12_2_;
  auVar19._14_2_ = sVar10 + auStack_58._14_2_;
  auVar16 = vpblendd_avx2(auVar16,auVar19,8);
  *(undefined1 (*) [16])(param_3 + 0x130) = auVar16;
  cVar3 = func_0x0001400caf10(*(undefined1 *)(param_1 + 0xa8),*(undefined1 *)(param_3 + 0x14c),
                              param_4);
  if (cVar3 != '\0') {
    if ((*(byte *)(param_1 + 0x290) & 1) == 0) {
      FUN_1400d4250(param_1,param_2);
    }
    func_0x000144f62e80(*(undefined8 *)(param_2[0x766] + 8));
    lVar6 = func_0x000144f62e80(*(undefined8 *)(param_2[0x766] + 8));
    uStack_c0 = *(undefined4 *)(lVar6 + 0x84);
    puStack_c8 = param_2;
    if (param_5 == '\0') {
      FUN_1400ded20(param_1,param_3,&puStack_c8,0);
      FUN_1400ce300(*(undefined8 *)(param_1 + 0x2e0),param_3);
    }
    else {
      FUN_1400dcd20(param_1,param_3);
      FUN_1400ce300(*(undefined8 *)(param_1 + 0x2e0),param_3);
      FUN_1400ded20(param_1,param_3,&puStack_c8,1);
    }
    *(byte *)(param_1 + 0x290) = *(byte *)(param_1 + 0x290) | 1;
  }
  return;
}

