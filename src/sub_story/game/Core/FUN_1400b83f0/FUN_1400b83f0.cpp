// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b83f0  size: 139 bytes
// Name:    FUN_1400b83f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1400b83f0(undefined1 (*param_1) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [64];
  undefined1 auStack_48 [16];
  undefined1 aauStack_38 [3] [16];
  
  auVar8 = ZEXT1664(*param_1);
  func_0x000140ac04e0(auStack_48);
  func_0x000140ac0560(aauStack_38);
  auVar3._4_4_ = _DAT_14615a3d8;
  auVar3._0_4_ = _DAT_14615a3d8;
  auVar3._8_4_ = _DAT_14615a3d8;
  auVar3._12_4_ = _DAT_14615a3d8;
  auVar1 = vsubps_avx(auVar8._0_16_,aauStack_38[0]);
  auVar3 = vrcpps_avx(auVar3);
  fVar4 = auVar3._0_4_;
  fVar5 = auVar3._4_4_;
  fVar6 = auVar3._8_4_;
  fVar7 = auVar3._12_4_;
  auVar2._0_4_ = ((-(fVar4 * _DAT_14615a3d8) + _DAT_145fc6ed8) * fVar4 + fVar4) * auVar1._0_4_;
  auVar2._4_4_ = ((-(fVar5 * _DAT_14615a3d8) + _DAT_145fc6ed8) * fVar5 + fVar5) * auVar1._4_4_;
  auVar2._8_4_ = ((-(fVar6 * _DAT_14615a3d8) + _DAT_145fc6ed8) * fVar6 + fVar6) * auVar1._8_4_;
  auVar2._12_4_ = ((-(fVar7 * _DAT_14615a3d8) + _DAT_145fc6ed8) * fVar7 + fVar7) * auVar1._12_4_;
  auVar3 = vmovshdup_avx(auVar2);
  return (int)(longlong)auVar2._0_4_ + 1 + (int)(longlong)auVar3._0_4_ * 8;
}

