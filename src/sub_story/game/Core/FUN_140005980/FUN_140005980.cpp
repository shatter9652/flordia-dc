// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140005980  size: 52 bytes
// Name:    FUN_140005980
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14007b1f0, FUN_14007b2c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined2 * FUN_140005980(undefined2 *param_1,undefined2 *param_2)

{
  if (param_1 != param_2) {
    FUN_14007b1f0(param_1,*param_2);
    if (*(char *)(param_2 + 1) == '\x01') {
      FUN_14007b2c0(param_1);
    }
  }
  return param_1;
}

