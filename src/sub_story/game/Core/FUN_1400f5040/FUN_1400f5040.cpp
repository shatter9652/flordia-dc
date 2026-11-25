// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f5040  size: 73 bytes
// Name:    FUN_1400f5040
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f5040(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 in_ZMM1 [64];
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_18 [16];
  
  uStack_28 = *param_3;
  uStack_20 = param_3[1];
  auVar1._0_4_ = (float)*(int *)(param_1 + 0xc0);
  auVar1._4_12_ = in_ZMM1._4_12_;
  auStack_18 = vinsertps_avx(*(undefined1 (*) [16])(param_1 + 0xb0),auVar1,0x30);
  func_0x0001400f5090(param_2,&uStack_28,param_1);
  return;
}

