// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140114d20  size: 68 bytes
// Name:    FUN_140114d20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140a60af0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140114d20(undefined8 param_1,int *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 auStack_30 [2];
  
  if (*param_2 != 0) {
    auStack_30[0] = 0x140114d34;
    plVar1 = (longlong *)FUN_140a60af0(param_1,0);
    if (plVar1 != (longlong *)0x0) {
      auStack_30[0] = 0x140114d42;
      lVar2 = (**(code **)(*plVar1 + 0x48))(plVar1);
      if (lVar2 != 0) {
        func_0x000142aa9ea0(auStack_30,param_2);
        FUN_142aa9590(lVar2,auStack_30,0,0,0);
        return;
      }
    }
  }
  return;
}

