// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140137e10  size: 36 bytes
// Name:    FUN_140137e10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140db7710
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140137e10(undefined4 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140db7710(param_2,0);
  *(undefined4 *)(lVar1 + 0x54) = 1;
  *(undefined4 *)(lVar1 + 0x48) = param_1;
  *(undefined4 *)(lVar1 + 0x24) = param_1;
  return;
}

