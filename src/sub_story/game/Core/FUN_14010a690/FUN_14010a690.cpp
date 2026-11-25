// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010a690  size: 156 bytes
// Name:    FUN_14010a690
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010a690(undefined8 param_1,undefined8 param_2,float *param_3,undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = *param_4;
  auVar2._0_4_ = (auVar1._0_4_ + *param_3) * _DAT_145fc6edc;
  auVar2._4_4_ = (auVar1._4_4_ + param_3[1]) * _DAT_145fc6edc;
  auVar2._8_4_ = (auVar1._8_4_ + param_3[2]) * _DAT_145fc6edc;
  auVar2._12_4_ = (auVar1._12_4_ + param_3[3]) * _DAT_145fc6edc;
  vshufps_avx(auVar2,auVar2,0x55);
  vshufps_avx(auVar2,auVar2,0xaa);
  vsubps_avx(auVar1,auVar2);
  func_0x00014010a730();
  return;
}

