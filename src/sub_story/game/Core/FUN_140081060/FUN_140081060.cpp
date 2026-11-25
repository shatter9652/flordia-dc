// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140081060  size: 39 bytes
// Name:    FUN_140081060
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1409afd30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140081060(float param_1,undefined4 param_2)

{
  float *pfVar1;
  
  pfVar1 = (float *)FUN_1409afd30(param_2);
  return *pfVar1 <= param_1;
}

