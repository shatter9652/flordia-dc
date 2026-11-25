// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007a940  size: 56 bytes
// Name:    FUN_14007a940
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da6330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_14007a940(undefined8 *param_1)

{
  FUN_144da6330();
  *param_1 = &UNK_14667af70;
  if (*(float *)((longlong)param_1 + 0x2c) < 0.0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3d23d70a;
  }
  return param_1;
}

