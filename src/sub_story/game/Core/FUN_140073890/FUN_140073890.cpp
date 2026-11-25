// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140073890  size: 35 bytes
// Name:    FUN_140073890
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b8f40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_140073890(longlong param_1)

{
  if (*(char *)(param_1 + 0x50) == '\0') {
    FUN_1400b8f40();
  }
  return *(undefined4 *)(param_1 + 0x4c);
}

