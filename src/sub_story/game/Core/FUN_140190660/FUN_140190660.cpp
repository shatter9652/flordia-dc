// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140190660  size: 64 bytes
// Name:    FUN_140190660
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1409519a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140190660(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = func_0x000144da31b0();
  if (lVar1 != 0) {
    FUN_1409519a0(lVar1,1,0x7585d45d);
  }
  *(undefined1 *)(param_1 + 0x59c) = 0;
  return;
}

