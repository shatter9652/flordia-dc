// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f8850  size: 44 bytes
// Name:    FUN_1400f8850
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1453446d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f8850(longlong param_1,undefined8 param_2)

{
  FUN_1453446d0();
  func_0x000144ea5b80(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = param_2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return;
}

