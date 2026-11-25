// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c3dd0  size: 28 bytes
// Name:    FUN_1400c3dd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_1400c3dd0(byte param_1)

{
  byte bVar1;
  
  bVar1 = func_0x0001400c3df0();
  return bVar1 ^ 1 | (param_1 & 0x20) >> 5;
}

