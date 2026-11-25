// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140062e10  size: 46 bytes
// Name:    FUN_140062e10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140018ce0, FUN_144ea3660
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140062e10(longlong param_1,int param_2)

{
  *(undefined8 *)(param_1 + 0x30) = 1;
  FUN_144ea3660();
  if (param_2 != 0) {
    FUN_140018ce0(param_1);
  }
  return param_1;
}

