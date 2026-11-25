// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140071990  size: 116 bytes
// Name:    FUN_140071990
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140071990(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != param_3) {
    iVar1 = *(int *)(param_2 + 0x30);
    lVar2 = param_2;
    if (*(int *)(param_3 + 0x30) < iVar1) {
      func_0x0001456a39f0(param_1,param_3,param_2);
    }
    else if (iVar1 < *(int *)(param_3 + 0x30)) {
      func_0x0001456a39f0(param_1,param_2);
      lVar2 = param_3;
    }
    else {
      func_0x0001456a39f0(param_1,param_3,param_2);
      func_0x000144ed2fd0(param_2,iVar1 + 1);
    }
    *(int *)(lVar2 + 0x34) = *(int *)(param_3 + 0x34) + *(int *)(param_2 + 0x34);
    return;
  }
  return;
}

