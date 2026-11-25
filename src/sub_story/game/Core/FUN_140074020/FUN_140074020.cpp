// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140074020  size: 71 bytes
// Name:    FUN_140074020
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_140074020(longlong *param_1,float *param_2)

{
  float fVar1;
  undefined1 auVar4 [16];
  undefined1 auStack_28 [16];
  float fVar2;
  float fVar3;
  
  (**(code **)(*param_1 + 0x58))(param_1,auStack_28,0);
  auVar4 = vpunpckhwd_avx(auStack_28,auStack_28);
  auVar4 = vpsrad_avx(auVar4,0x10);
  auVar4 = vcvtdq2ps_avx(auVar4);
  auVar4 = vshufpd_avx(auVar4,auVar4,3);
  fVar1 = auVar4._4_4_ * _UNK_146159c94;
  fVar2 = auVar4._8_4_ * _UNK_146159c98;
  fVar3 = auVar4._12_4_ * _UNK_146159c9c;
  *param_2 = auVar4._0_4_ * _DAT_146159c90 + auStack_28._0_4_;
  param_2[1] = fVar1 + auStack_28._4_4_;
  param_2[2] = fVar2 + auStack_28._8_4_;
  param_2[3] = fVar3 + auStack_28._12_4_;
  return param_2;
}

