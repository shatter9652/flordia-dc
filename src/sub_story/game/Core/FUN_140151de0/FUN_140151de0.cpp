// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140151de0  size: 59 bytes
// Name:    FUN_140151de0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140993d10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140151de0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != param_2) {
    if (param_2 != 0) {
      func_0x0001403280a0(param_2);
      lVar1 = *(longlong *)(param_1 + 0x10);
    }
    if (lVar1 != 0) {
      FUN_140993d10();
    }
    *(longlong *)(param_1 + 0x10) = param_2;
  }
  return;
}

