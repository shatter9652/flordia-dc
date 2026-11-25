// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b9080  size: 56 bytes
// Name:    FUN_1400b9080
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b62d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1400b9080(undefined8 *param_1)

{
  FUN_1400b62d0();
  *param_1 = &UNK_14646e360;
  *(byte *)((longlong)param_1 + 0x127) = *(byte *)((longlong)param_1 + 0x127) | 0x20;
  *(byte *)((longlong)param_1 + 0x123) = *(byte *)((longlong)param_1 + 0x123) | 0x40;
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 2;
  return param_1;
}

