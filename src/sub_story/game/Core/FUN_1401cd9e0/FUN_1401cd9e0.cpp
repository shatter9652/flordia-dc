// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cd9e0  size: 57 bytes
// Name:    FUN_1401cd9e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401cda20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401cd9e0(longlong param_1)

{
  char cVar1;
  
  func_0x000145f40560(param_1 + 0x780,param_1 + 0x20,0x730);
  cVar1 = FUN_1401cda20(param_1);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x751) = 1;
  }
  return;
}

