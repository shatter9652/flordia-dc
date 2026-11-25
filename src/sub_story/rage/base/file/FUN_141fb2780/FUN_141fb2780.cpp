// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 141fb2780  size: 56 bytes
// Name:    FUN_141fb2780
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14087aec0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 * FUN_141fb2780(undefined4 *param_1,undefined8 param_2,longlong param_3)

{
  *param_1 = 2;
  *(undefined1 (*) [32])(param_1 + 2) = ZEXT1232(ZEXT812(0));
  *(undefined1 (*) [32])(param_1 + 10) = ZEXT1232(ZEXT812(0));
  if (param_3 != 0) {
    FUN_14087aec0(param_1);
  }
  return param_1;
}

