// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140178660  size: 60 bytes
// Name:    FUN_140178660
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140179240
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


float FUN_140178660(longlong param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_140179240();
  fVar2 = (float)FUN_140179240(param_1 + 0x250,param_2);
  return fVar2 + fVar1;
}

