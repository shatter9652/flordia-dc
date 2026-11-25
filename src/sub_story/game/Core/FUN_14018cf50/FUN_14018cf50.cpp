// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018cf50  size: 52 bytes
// Name:    FUN_14018cf50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145412b20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14018cf50(longlong *param_1)

{
  longlong lVar1;
  
  if (DAT_14aa31c52 == '\x01') {
    lVar1 = (**(code **)(*param_1 + 0x138))();
    if (lVar1 != 0) {
      lVar1 = FUN_145412b20(lVar1);
      param_1[0x4a] = lVar1;
    }
  }
  return;
}

