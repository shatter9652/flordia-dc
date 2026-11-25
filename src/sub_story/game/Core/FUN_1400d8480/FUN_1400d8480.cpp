// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d8480  size: 359 bytes
// Name:    FUN_1400d8480
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_1400d8480(longlong *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auStack_68 [16];
  undefined1 aauStack_58 [4] [16];
  
  iVar3 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(param_1[0x766] + 0x10) + 0x80),
                              0x8133de19);
  iVar4 = func_0x000144e05fa0(param_1[1]);
  auVar6 = _DAT_145fc6ee0;
  if (iVar3 != iVar4) {
    uVar5 = (**(code **)(*param_1 + 0xf0))(param_1,iVar3);
    (**(code **)(*param_1 + 0x108))(param_1,uVar5,aauStack_58);
    auVar6 = aauStack_58[0];
  }
  auVar18 = ZEXT864(_DAT_146159bc0);
  auVar1 = vshufps_avx(auVar6,auVar6,0xc9);
  auVar7 = vshufps_avx(auVar6,auVar6,0xd2);
  auVar6 = vshufps_avx(auVar6,auVar6,0xff);
  fVar12 = -(auVar7._0_4_ * (float)_DAT_146159bc0) + auVar1._0_4_ * _DAT_145fc6ed8;
  fVar15 = -(auVar7._4_4_ * (float)(_DAT_146159bc0 >> 0x20)) + auVar1._4_4_ * 0.0;
  fVar16 = -(auVar7._8_4_ * 0.0) + auVar1._8_4_ * 0.0;
  fVar17 = -(auVar7._12_4_ * 0.0) + auVar1._12_4_ * 0.0;
  auVar13._0_4_ = fVar12 + fVar12;
  auVar13._4_4_ = fVar15 + fVar15;
  auVar13._8_4_ = fVar16 + fVar16;
  auVar13._12_4_ = fVar17 + fVar17;
  auVar14 = vshufps_avx(auVar13,auVar13,0xd2);
  auVar2 = vshufps_avx(auVar13,auVar13,0xc9);
  auVar19 = ZEXT1664(CONCAT412(auVar13._12_4_ * auVar6._12_4_ + _UNK_14614f7fc +
                               -(auVar7._12_4_ * auVar2._12_4_) + auVar14._12_4_ * auVar1._12_4_,
                               CONCAT48(auVar13._8_4_ * auVar6._8_4_ + _UNK_14614f7f8 +
                                        -(auVar7._8_4_ * auVar2._8_4_) +
                                        auVar14._8_4_ * auVar1._8_4_,
                                        CONCAT44(auVar13._4_4_ * auVar6._4_4_ + _UNK_14614f7f4 +
                                                 -(auVar7._4_4_ * auVar2._4_4_) +
                                                 auVar14._4_4_ * auVar1._4_4_,
                                                 auVar13._0_4_ * auVar6._0_4_ + _DAT_14614f7f0 +
                                                 -(auVar7._0_4_ * auVar2._0_4_) +
                                                 auVar14._0_4_ * auVar1._0_4_))));
  (**(code **)(*param_1 + 0x1f0))(param_1,auStack_68);
  auVar14 = auVar19._0_16_;
  auVar6 = vshufps_avx(auVar14,auVar14,0xd2);
  auVar1 = vshufps_avx(auStack_68,auStack_68,0xc9);
  auVar7 = vshufps_avx(auStack_68,auStack_68,0xd2);
  auVar14 = vshufps_avx(auVar14,auVar14,0xc9);
  fVar8 = -(auVar7._0_4_ * auVar14._0_4_) + auVar6._0_4_ * auVar1._0_4_;
  fVar9 = -(auVar7._4_4_ * auVar14._4_4_) + auVar6._4_4_ * auVar1._4_4_;
  fVar10 = -(auVar7._8_4_ * auVar14._8_4_) + auVar6._8_4_ * auVar1._8_4_;
  fVar11 = -(auVar7._12_4_ * auVar14._12_4_) + auVar6._12_4_ * auVar1._12_4_;
  auVar6._0_4_ = fVar8 * fVar8;
  auVar6._4_4_ = fVar9 * fVar9;
  auVar6._8_4_ = fVar10 * fVar10;
  auVar6._12_4_ = fVar11 * fVar11;
  auVar6 = vblendps_avx(auVar6,ZEXT416(0) << 0x20,8);
  auVar6 = vhaddps_avx(auVar6,auVar6);
  auVar1 = vhaddps_avx(auVar6,auVar6);
  auVar6 = vrsqrtps_avx(auVar1);
  fVar12 = auVar6._0_4_;
  fVar15 = auVar6._4_4_;
  fVar16 = auVar6._8_4_;
  fVar17 = auVar6._12_4_;
  auVar14._4_4_ = _DAT_145fc6f14;
  auVar14._0_4_ = _DAT_145fc6f14;
  auVar14._8_4_ = _DAT_145fc6f14;
  auVar14._12_4_ = _DAT_145fc6f14;
  auVar6 = vcmpps_avx(auVar14,auVar1,1);
  auVar7._0_4_ = ((fVar12 * fVar12 * auVar1._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar12 +
                 fVar12) * fVar8;
  auVar7._4_4_ = ((fVar15 * fVar15 * auVar1._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar15 +
                 fVar15) * fVar9;
  auVar7._8_4_ = ((fVar16 * fVar16 * auVar1._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar16 +
                 fVar16) * fVar10;
  auVar7._12_4_ =
       ((fVar17 * fVar17 * auVar1._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar17 + fVar17) *
       fVar11;
  auVar6 = vblendvps_avx(auVar18._0_16_,auVar7,auVar6);
  *param_2 = auVar6;
  return param_2;
}

