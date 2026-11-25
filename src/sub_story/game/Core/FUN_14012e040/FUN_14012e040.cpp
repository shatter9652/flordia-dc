// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012e040  size: 49 bytes
// Name:    FUN_14012e040
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14012e040(longlong param_1,longlong param_2)

{
  undefined4 uStack_14;
  
  if (param_2 == 0) {
    uStack_14 = 0x3fffff;
  }
  else {
    func_0x000144deca10(&uStack_14,*(undefined4 *)(param_2 + 0x5c));
  }
  *(undefined4 *)(param_1 + 0x54) = uStack_14;
  return;
}

