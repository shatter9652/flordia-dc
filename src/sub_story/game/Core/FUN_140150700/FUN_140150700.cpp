// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140150700  size: 44 bytes
// Name:    FUN_140150700
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140155ea0, FUN_140150880
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140150700(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = FUN_140155ea0();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_140150880(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0xe8));
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}

