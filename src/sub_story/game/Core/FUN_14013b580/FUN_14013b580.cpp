// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013b580  size: 26 bytes
// Name:    FUN_14013b580
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_14013b580(char param_1)

{
  byte bVar1;
  
  bVar1 = func_0x000140309980();
  return bVar1 & param_1 < '\0';
}

