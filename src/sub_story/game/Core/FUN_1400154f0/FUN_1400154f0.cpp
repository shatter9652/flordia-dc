// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400154f0  size: 34 bytes
// Name:    FUN_1400154f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1431b86f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1400154f0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1431b86f0();
  lVar2 = 0;
  if (cVar1 != '\0') {
    lVar2 = param_1 + 8;
  }
  return lVar2;
}

