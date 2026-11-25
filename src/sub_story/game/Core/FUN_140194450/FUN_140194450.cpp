// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140194450  size: 42 bytes
// Name:    FUN_140194450
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140194450(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = func_0x0001411c2330();
  if (lVar1 != 0) {
    *param_3 = lVar1;
    param_3[1] = param_1;
  }
  return lVar1 != 0;
}

