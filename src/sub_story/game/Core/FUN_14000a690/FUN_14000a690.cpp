// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000a690  size: 70 bytes
// Name:    FUN_14000a690
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eb3750, FUN_14541a710
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14000a690(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144eb3750(*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c));
  if (lVar1 != 0) {
    FUN_14541a710(*(undefined4 *)(lVar1 + 0x9c),param_1 + 0x34,0);
  }
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x1ffff;
  *(undefined8 *)(param_1 + 0x34) = 0xffffffff;
  return;
}

