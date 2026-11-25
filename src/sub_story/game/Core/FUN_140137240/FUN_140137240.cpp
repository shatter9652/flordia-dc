// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140137240  size: 197 bytes
// Name:    FUN_140137240
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140137030, FUN_140136670, FUN_140136e90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140137240(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined1 auStack_108 [232];
  
  uVar1 = *(uint *)(param_2 + 4);
  if (uVar1 < *(uint *)(param_1 + 4)) {
    FUN_140137030(auStack_108,param_2);
    FUN_140136670(param_2,param_1);
    FUN_140136670(param_1,auStack_108);
    FUN_140136e90(auStack_108);
    uVar1 = *(uint *)(param_2 + 4);
  }
  if (*(uint *)(param_3 + 4) < uVar1) {
    FUN_140137030(auStack_108,param_3);
    FUN_140136670(param_3,param_2);
    FUN_140136670(param_2,auStack_108);
    FUN_140136e90(auStack_108);
    if (*(uint *)(param_2 + 4) < *(uint *)(param_1 + 4)) {
      FUN_140137030(auStack_108,param_2);
      FUN_140136670(param_2,param_1);
      FUN_140136670(param_1,auStack_108);
      FUN_140136e90(auStack_108);
    }
  }
  return;
}

