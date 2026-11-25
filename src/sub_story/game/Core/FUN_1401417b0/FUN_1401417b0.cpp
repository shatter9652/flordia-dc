// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401417b0  size: 85 bytes
// Name:    FUN_1401417b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141c8f8b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1401417b0(undefined8 *param_1)

{
  FUN_141c8f8b0();
  *param_1 = &UNK_14619c0e0;
  param_1[0x90] = &UNK_14619c180;
  func_0x000145f40580(param_1 + 0x91,0,0x109);
  *(byte *)((longlong)param_1 + 0x121) = *(byte *)((longlong)param_1 + 0x121) | 0x80;
  return param_1;
}

