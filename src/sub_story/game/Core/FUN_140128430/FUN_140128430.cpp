// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140128430  size: 53 bytes
// Name:    FUN_140128430
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140d87a10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140128430(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = func_0x0001451dc190(*(undefined8 *)(param_1 + 0xb8));
  if (lVar1 != 0) {
    FUN_140d87a10(lVar1,0);
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  return;
}

