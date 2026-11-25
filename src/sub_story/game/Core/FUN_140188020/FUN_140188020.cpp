// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140188020  size: 44 bytes
// Name:    FUN_140188020
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14503f4a0, FUN_140be4c40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140188020(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_14503f4a0(param_2,*(undefined4 *)(param_1 + 0x28));
  if (cVar1 != '\0') {
    FUN_140be4c40(param_1);
    *(undefined1 *)(param_1 + 0x2c) = 4;
  }
  return;
}

