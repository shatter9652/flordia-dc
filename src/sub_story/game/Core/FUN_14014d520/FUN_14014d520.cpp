// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014d520  size: 208 bytes
// Name:    FUN_14014d520
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14521f310, FUN_144f2b280
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14014d520(undefined8 param_1,longlong param_2,undefined1 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [64];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  
  auVar12 = *(undefined1 (*) [16])(param_2 + 0x70);
  auVar11 = vpunpckhwd_avx(auVar12,auVar12);
  auVar11 = vpsrad_avx(auVar11,0x10);
  auVar11 = vcvtdq2ps_avx(auVar11);
  auVar11 = vshufpd_avx(auVar11,auVar11,3);
  auVar13 = ZEXT1664(CONCAT412(auVar11._12_4_ * _UNK_146159c9c + auVar12._12_4_,
                               CONCAT48(auVar11._8_4_ * _UNK_146159c98 + auVar12._8_4_,
                                        CONCAT44(auVar11._4_4_ * _UNK_146159c94 + auVar12._4_4_,
                                                 auVar11._0_4_ * _DAT_146159c90 + auVar12._0_4_))));
  FUN_144f2b280(param_2,auStack_58);
  fVar7 = *(float *)(param_2 + 0x50);
  fVar8 = *(float *)(param_2 + 0x54);
  fVar9 = *(float *)(param_2 + 0x58);
  fVar10 = *(float *)(param_2 + 0x5c);
  auVar11._0_12_ = ZEXT812(0);
  auVar11._12_4_ = 0;
  auVar6 = vsubps_avx(auStack_48,auStack_58);
  auStack_68 = auVar13._0_16_;
  auVar12._0_4_ = fVar7 * fVar7;
  auVar12._4_4_ = fVar8 * fVar8;
  auVar12._8_4_ = fVar9 * fVar9;
  auVar12._12_4_ = fVar10 * fVar10;
  auVar12 = vblendps_avx(auVar12,auVar11,8);
  auVar11 = vmovshdup_avx(auVar6);
  auVar12 = vhaddps_avx(auVar12,auVar12);
  auVar12 = vhaddps_avx(auVar12,auVar12);
  auVar5 = vrsqrtps_avx(auVar12);
  fVar1 = auVar5._0_4_;
  fVar2 = auVar5._4_4_;
  fVar3 = auVar5._8_4_;
  fVar4 = auVar5._12_4_;
  auStack_78._0_4_ =
       ((fVar1 * fVar1 * auVar12._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar1 + fVar1) * fVar7;
  auStack_78._4_4_ =
       ((fVar2 * fVar2 * auVar12._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar2 + fVar2) * fVar8;
  auStack_78._8_4_ =
       ((fVar3 * fVar3 * auVar12._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar3 + fVar3) * fVar9;
  auStack_78._12_4_ =
       ((fVar4 * fVar4 * auVar12._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar4 + fVar4) * fVar10
  ;
  FUN_14521f310(param_1,auStack_68,auStack_78,auVar11._0_8_,auVar6._0_4_,param_3);
  return;
}

