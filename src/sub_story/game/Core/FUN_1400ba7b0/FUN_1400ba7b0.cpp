// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ba7b0  size: 94 bytes
// Name:    FUN_1400ba7b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140ee84f0, FUN_140ee8390
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1400ba7b0(undefined8 *param_1)

{
  FUN_140ee84f0();
  *param_1 = &UNK_14646eb40;
  param_1[0x120] = 0;
  *(undefined1 *)(param_1 + 0x121) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90c) = 0xffffffff00000000;
  *(byte *)((longlong)param_1 + 0x123) = *(byte *)((longlong)param_1 + 0x123) | 0x40;
  FUN_140ee8390(param_1 + 0x44,1);
  return param_1;
}

