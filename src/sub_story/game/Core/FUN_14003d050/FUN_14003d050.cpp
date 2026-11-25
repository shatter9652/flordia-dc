// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003d050  size: 39 bytes
// Name:    FUN_14003d050
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14003d080
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_14003d050(undefined8 param_1,uint param_2)

{
  uint uStack_14;
  
  FUN_14003d080(&uStack_14,param_1);
  return (uStack_14 >> (param_2 & 0x1f) & 1) != 0;
}

