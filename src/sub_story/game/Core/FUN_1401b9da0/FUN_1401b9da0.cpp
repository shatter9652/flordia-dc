// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b9da0  size: 51 bytes
// Name:    FUN_1401b9da0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145078e80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1401b9da0(undefined8 *param_1,undefined4 param_2)

{
  FUN_145078e80(param_1,0xffffffff);
  *param_1 = &UNK_1465e7090;
  *(undefined4 *)(param_1 + 5) = 0xc;
  *(undefined4 *)(param_1 + 6) = param_2;
  return param_1;
}

