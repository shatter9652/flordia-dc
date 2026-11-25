// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140181d60  size: 83 bytes
// Name:    FUN_140181d60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140181170, FUN_1407152d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140181d60(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  FUN_140181170();
  plVar1 = *(longlong **)(param_4 + 0x38);
  uVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,param_2);
  FUN_1407152d0(param_1 + 0x40,param_2,param_3,uVar2,plVar1 + 0x16);
  return;
}

