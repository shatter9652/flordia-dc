// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bbb20  size: 83 bytes
// Name:    FUN_1401bbb20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da6330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1401bbb20(undefined8 *param_1,longlong param_2,longlong param_3)

{
  FUN_144da6330();
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  *param_1 = &UNK_1465e6b60;
  param_1[4] = param_2;
  LOCK();
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  UNLOCK();
  param_1[5] = param_3;
  LOCK();
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
  UNLOCK();
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 7;
  return param_1;
}

