// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001de50  size: 118 bytes
// Name:    FUN_14001de50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14001ded0, FUN_14505efe0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14001de50(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  
  iVar1 = (**(code **)(**(longlong **)(param_4 + 8) + 400))
                    (*(longlong **)(param_4 + 8),*(undefined1 *)(param_4 + 0x10));
  FUN_14505efe0(param_4,auStack_40,iVar1 + -1);
  FUN_14505efe0(param_4,auStack_50,0);
  FUN_14001ded0(param_1,param_2,param_3,auStack_40,auStack_50);
  return;
}

