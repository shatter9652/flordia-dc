// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140128b60  size: 42 bytes
// Name:    FUN_140128b60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14399da10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140128b60(undefined8 param_1,undefined8 param_2,byte param_3,int param_4)

{
  char cVar1;
  
  if (((param_3 & 1) != 0) && (cVar1 = FUN_14399da10(), cVar1 == '\0')) {
    return false;
  }
  return param_4 < 1;
}

