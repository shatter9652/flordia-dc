// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002d280  size: 76 bytes
// Name:    FUN_14002d280
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e75ec0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14002d280(ulonglong param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_18 [16];
  
  auVar1 = *(undefined1 (*) [16])((param_1 & 0xfffffffffffffff0) + 0x70);
  auVar3 = vpunpckhwd_avx(auVar1,auVar1);
  auVar3 = vpsrad_avx(auVar3,0x10);
  auVar3 = vcvtdq2ps_avx(auVar3);
  auVar3 = vshufpd_avx(auVar3,auVar3,3);
  auStack_18._0_4_ = auVar3._0_4_ * _DAT_146159c90 + auVar1._0_4_;
  auStack_18._4_4_ = auVar3._4_4_ * _UNK_146159c94 + auVar1._4_4_;
  auStack_18._8_4_ = auVar3._8_4_ * _UNK_146159c98 + auVar1._8_4_;
  auStack_18._12_4_ = auVar3._12_4_ * _UNK_146159c9c + auVar1._12_4_;
  fVar2 = (float)FUN_144e75ec0(auStack_18,0);
  return fVar2 < _DAT_14615ada0;
}

