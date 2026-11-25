// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019bd10  size: 32 bytes
// Name:    FUN_14019bd10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_14019bd10(undefined8 param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 == -1) {
    lVar1 = func_0x00014019bd30();
  }
  else {
    lVar1 = func_0x000144eb7510();
  }
  return lVar1 != 0;
}

