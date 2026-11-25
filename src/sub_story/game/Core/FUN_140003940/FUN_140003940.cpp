// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140003940  size: 44 bytes
// Name:    FUN_140003940
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14319bf00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 (*) [32] FUN_140003940(undefined1 (*param_1) [32])

{
  *param_1 = ZEXT1232(ZEXT812(0));
  *(undefined4 *)param_1[1] = 3;
  param_1[1][4] = 0;
  FUN_14319bf00();
  return param_1;
}

