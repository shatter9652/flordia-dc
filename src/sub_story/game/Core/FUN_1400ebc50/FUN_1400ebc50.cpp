// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ebc50  size: 89 bytes
// Name:    FUN_1400ebc50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400ec250
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400ebc50(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1[5];
  uVar3 = (**(code **)(*param_1 + 0x88))();
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  FUN_1400ec250(param_2,param_3,uVar2,uVar3,lVar1);
  return;
}

