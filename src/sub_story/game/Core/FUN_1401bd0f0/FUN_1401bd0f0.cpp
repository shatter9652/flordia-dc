// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bd0f0  size: 31 bytes
// Name:    FUN_1401bd0f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1401bd0f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = func_0x00014507f990();
  return *(int *)(lVar1 + 0x78 + (longlong)*(int *)(param_1 + 0x10) * 4) != 0;
}

