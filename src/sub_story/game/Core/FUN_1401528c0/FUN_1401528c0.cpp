// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401528c0  size: 54 bytes
// Name:    FUN_1401528c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1438d7a60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401528c0(void)

{
  longlong lVar1;
  
  lVar1 = func_0x0001450bb780();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x118) != 0)) {
    FUN_1438d7a60();
    *(undefined8 *)(lVar1 + 0x118) = 0;
  }
  return;
}

