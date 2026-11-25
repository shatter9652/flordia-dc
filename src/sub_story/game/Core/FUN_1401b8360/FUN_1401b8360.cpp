// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b8360  size: 90 bytes
// Name:    FUN_1401b8360
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da6330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1401b8360(undefined8 *param_1,longlong param_2,byte param_3,longlong param_4)

{
  FUN_144da6330();
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_1465e7310;
  param_1[3] = param_2;
  LOCK();
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  UNLOCK();
  param_1[4] = param_4;
  if (param_4 != 0) {
    LOCK();
    *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
    UNLOCK();
  }
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfc | param_3;
  return param_1;
}

