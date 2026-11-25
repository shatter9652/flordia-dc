// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140104a00  size: 44 bytes
// Name:    FUN_140104a00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dc3fc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140104a00(undefined8 param_1,uint param_2)

{
  char cVar1;
  
  cVar1 = FUN_144dc3fc0();
  return ((param_2 >> 0x11 & 1) == 0 && cVar1 == '\0') && (param_2 >> 0x12 & 1) == 0;
}

