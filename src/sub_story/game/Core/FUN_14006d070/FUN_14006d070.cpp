// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006d070  size: 53 bytes
// Name:    FUN_14006d070
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14006d0b0, FUN_143d6a920
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_14006d070(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14006d0b0();
  if (lVar1 == 0) {
    lVar1 = FUN_143d6a920(param_1);
    if ((lVar1 == 0) || (*(int *)(lVar1 + 0x78) == 0)) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(lVar1 + 0x40);
    }
  }
  return lVar1;
}

