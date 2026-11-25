// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016b380  size: 79 bytes
// Name:    FUN_14016b380
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14016b380(float *param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  ulonglong uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_30 = 0;
  uStack_28 = *param_2;
  uStack_20 = param_2[1];
  func_0x00014534fd20(&uStack_28,&uStack_30);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uStack_30;
  auVar4 = vshufps_avx(auVar4,ZEXT416((uint)uStack_30),0x14);
  fVar1 = auVar4._4_4_ * _DAT_146159cb4;
  fVar2 = auVar4._8_4_ * _DAT_146159cb4;
  fVar3 = auVar4._12_4_ * _DAT_146159cb4;
  *param_1 = auVar4._0_4_ * _DAT_146159cb4;
  param_1[1] = fVar1;
  param_1[2] = fVar2;
  param_1[3] = fVar3;
  return;
}

