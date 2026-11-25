// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019c230  size: 55 bytes
// Name:    FUN_14019c230
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14019d670
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_14019c230(undefined8 *param_1)

{
  *param_1 = 3;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  FUN_14019d670();
  return param_1;
}

