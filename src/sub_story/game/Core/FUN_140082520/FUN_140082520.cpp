// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140082520  size: 71 bytes
// Name:    FUN_140082520
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fd5390, FUN_144ffa120
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140082520(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (((param_2 != 0) && (lVar2 = func_0x000144f20050(*(undefined4 *)(param_1 + 0x9c)), lVar2 != 0))
     && (lVar2 = FUN_144ffa120(lVar2,param_2), lVar2 != 0)) {
    cVar1 = FUN_144fd5390(*(undefined4 *)(lVar2 + 0x50));
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

