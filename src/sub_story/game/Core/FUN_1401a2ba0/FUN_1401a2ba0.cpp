// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a2ba0  size: 288 bytes
// Name:    FUN_1401a2ba0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401a2ba0(longlong param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar7;
  
  fVar3 = (float)*(int *)(param_1 + 0x2c);
  auVar1 = vcvtdq2ps_avx(ZEXT416((uint)(*(int *)(param_1 + 0xe0) + *(int *)(param_1 + 0xd8) +
                                       *(int *)(param_1 + 0xe8))));
  auVar2 = vcvtdq2ps_avx(ZEXT416((uint)(*(int *)(param_1 + 0xe4) + *(int *)(param_1 + 0xdc) +
                                       *(int *)(param_1 + 0xec))));
  auVar1 = vmaxps_avx(auVar1,auVar2);
  fVar10 = auVar1._0_4_ + fVar3;
  fVar11 = auVar1._4_4_ + fVar3;
  fVar12 = auVar1._8_4_ + fVar3;
  fVar3 = auVar1._12_4_ + fVar3;
  uVar7 = CONCAT44(fVar11 * _DAT_14615b6c4,fVar10 * _DAT_14615b6c4);
  auVar8 = ZEXT1664(CONCAT412(fVar3 * _DAT_14615b6c4,CONCAT48(fVar12 * _DAT_14615b6c4,uVar7)));
  fVar13 = _DAT_146159ef4;
  fVar14 = _DAT_146159ef4;
  fVar15 = _DAT_146159ef4;
  fVar16 = _DAT_146159ef4;
  auVar9._0_8_ = func_0x000145f40830(uVar7);
  auVar9._8_56_ = extraout_var;
  auVar9 = ZEXT1664(auVar9._0_16_);
  auVar1 = vmovshdup_avx(auVar8._0_16_);
  auVar8._0_8_ = func_0x000145f40830(auVar1._0_8_);
  auVar8._8_56_ = extraout_var_00;
  auVar6._0_12_ = ZEXT812(0);
  auVar6._12_4_ = 0;
  auVar2 = vinsertps_avx(auVar9._0_16_,auVar8._0_16_,0x10);
  auVar5._0_4_ = fVar10 * fVar13 + _DAT_14615b6b8;
  auVar5._4_4_ = fVar11 * fVar14 + _DAT_14615b6b8;
  auVar5._8_4_ = fVar12 * fVar15 + _DAT_14615b6b8;
  auVar5._12_4_ = fVar3 * fVar16 + _DAT_14615b6b8;
  auVar1 = vcmpps_avx(auVar6,auVar5,2);
  auVar4._0_4_ = auVar1._0_4_ & auVar2._0_4_;
  auVar4._4_4_ = auVar1._4_4_ & auVar2._4_4_;
  auVar4._8_4_ = auVar1._8_4_ & auVar2._8_4_;
  auVar4._12_4_ = auVar1._12_4_ & auVar2._12_4_;
  auVar2 = vshufps_avx(auVar4,auVar4,0xf5);
  auVar1 = vhsubps_avx(auVar4,auVar4);
  auVar1._4_12_ = auVar1._4_12_;
  auVar1._0_4_ = param_2 * auVar1._0_4_ + auVar2._0_4_;
  return auVar1._0_8_;
}

