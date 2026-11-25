// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140092760  size: 33 bytes
// Name:    FUN_140092760
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b5d90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140092760(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  
  cVar1 = FUN_1401b5d90();
  if (cVar1 != '\0') {
    *param_2 = *(undefined4 *)(param_1 + 8);
  }
  return;
}

