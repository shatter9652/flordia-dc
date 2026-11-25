// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004ceb0  size: 62 bytes
// Name:    FUN_14004ceb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14094a460
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14004ceb0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1640);
  if (lVar1 != 0) {
    FUN_14094a460(lVar1);
    func_0x000144d9c130(lVar1,0x58);
    *(undefined8 *)(param_1 + 0x1640) = 0;
  }
  return;
}

