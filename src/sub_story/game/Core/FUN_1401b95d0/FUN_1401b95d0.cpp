// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b95d0  size: 62 bytes
// Name:    FUN_1401b95d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145075d60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401b95d0(undefined8 param_1,undefined1 (*param_2) [16])

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uStack_18;
  
  uVar1 = func_0x000140019d80(param_1,0xdd3824d8);
  func_0x000144debac0(&uStack_18,uVar1);
  auVar2._0_12_ = ZEXT812(0);
  auVar2._12_4_ = 0;
  *param_2 = auVar2;
  FUN_145075d60(uStack_18,param_2);
  return;
}

