// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b86a0  size: 33 bytes
// Name:    FUN_1400b86a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b8740
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400b86a0(undefined4 param_1,uint param_2)

{
  undefined4 uStack_4;
  
  if ((param_2 & 0xf1) != 0) {
    uStack_4 = param_1;
    FUN_1400b8740(&uStack_4);
  }
  return;
}

