// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001e700  size: 203 bytes
// Name:    FUN_14001e700
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144df0ac0, FUN_144df0470
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14001e700(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 auStack_30 [24];
  
  cVar2 = func_0x000144df8330(param_1,0x17);
  if (cVar2 != '\0') {
    cVar2 = func_0x000144df8330(param_1,4);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x38))(param_1,auStack_30,4);
      lVar1 = param_1[0xaf0];
      FUN_144df0470(lVar1,auStack_30);
      uVar3 = func_0x0001401d9110(4);
      FUN_144df0ac0(lVar1,param_1[4],uVar3);
    }
    cVar2 = func_0x000144df8330(param_1,5);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x38))(param_1,auStack_30,5);
      lVar1 = param_1[0xaf0];
      FUN_144df0470(lVar1,auStack_30);
      uVar3 = func_0x0001401d9110(5);
      FUN_144df0ac0(lVar1,param_1[4],uVar3);
    }
  }
  return;
}

