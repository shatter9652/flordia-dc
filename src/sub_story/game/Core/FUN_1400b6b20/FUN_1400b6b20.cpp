// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b6b20  size: 42 bytes
// Name:    FUN_1400b6b20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f432a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400b6b20(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144f432a0(param_2);
  *(byte *)(param_1 + 0x125) = *(byte *)(param_1 + 0x125) & 0xf7 | cVar1 << 3;
  return;
}

