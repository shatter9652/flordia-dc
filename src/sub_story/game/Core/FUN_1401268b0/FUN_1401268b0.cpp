// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401268b0  size: 34 bytes
// Name:    FUN_1401268b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1401268b0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  func_0x000144ec8b40();
  lVar2 = func_0x0001401268f0();
  if (*(char *)(lVar2 + 0x13f4 + (longlong)*(int *)(param_1 + 8)) != '\x01') {
    return false;
  }
  iVar1 = (**(code **)(**(longlong **)(lVar2 + 0x1370 + (longlong)*(int *)(param_1 + 8) * 8) + 0x78)
          )();
  return iVar1 != 0;
}

