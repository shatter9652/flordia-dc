// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140018350  size: 42 bytes
// Name:    FUN_140018350
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140018380, FUN_144dde700
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140018350(longlong param_1,int param_2)

{
  FUN_140018380();
  if (param_2 != 0) {
    FUN_144dde700(param_1,*(undefined1 *)(param_1 + 0x7e));
  }
  return param_1;
}

