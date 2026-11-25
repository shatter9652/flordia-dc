// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140189850  size: 74 bytes
// Name:    FUN_140189850
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401898e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140189850(longlong param_1,longlong param_2)

{
  func_0x0001401898a0(param_2,param_1);
  FUN_1401898e0(param_1 + 0xb0);
  *(byte *)(param_1 + 0x182) = *(byte *)(param_1 + 0x182) | *(int *)(param_2 + 0xb8) == 4;
  return;
}

