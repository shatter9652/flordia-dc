// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140159420  size: 39 bytes
// Name:    FUN_140159420
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140159450, FUN_140159490
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140159420(longlong param_1)

{
  FUN_140159450();
  if (*(int *)(param_1 + 0x10) != -1) {
    FUN_140159490();
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  return;
}

