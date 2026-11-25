// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016d040  size: 60 bytes
// Name:    FUN_14016d040
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 (*) [32] FUN_14016d040(longlong param_1,undefined1 (*param_2) [32])

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  
  lVar3 = func_0x000144db7870(*(undefined8 *)(param_1 + 8));
  uVar1 = **(undefined8 **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(*(longlong *)(lVar3 + 0x80) + 0x40);
  *(undefined8 *)param_2[1] = 0;
  *param_2 = ZEXT1232(ZEXT812(0));
  FUN_144e2ab70(param_2,uVar2,uVar1,*(undefined8 *)(param_1 + 0x20),unaff_RSI);
  return param_2;
}

