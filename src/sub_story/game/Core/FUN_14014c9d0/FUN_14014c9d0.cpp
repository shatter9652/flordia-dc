// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014c9d0  size: 39 bytes
// Name:    FUN_14014c9d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_14014c9d0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x78))();
    if (lVar2 != 0) {
      iVar1 = func_0x000144ed0ab0(1);
      return iVar1 - *(int *)(lVar2 + 0x20);
    }
  }
  return 0;
}

