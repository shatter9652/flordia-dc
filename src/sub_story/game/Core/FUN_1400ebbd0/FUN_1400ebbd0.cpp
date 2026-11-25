// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ebbd0  size: 115 bytes
// Name:    FUN_1400ebbd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f7a690
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400ebbd0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_1[0xc];
  lVar2 = param_1[8];
  uVar5 = (**(code **)(*param_1 + 0x88))();
  lVar3 = param_1[4];
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  FUN_144f7a690(param_2,param_3,uVar4,lVar3,uVar5,lVar2,lVar1);
  return;
}

