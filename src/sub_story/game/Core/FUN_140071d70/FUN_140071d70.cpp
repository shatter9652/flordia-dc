// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140071d70  size: 67 bytes
// Name:    FUN_140071d70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144d9d7a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140071d70(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if ((((*(int *)(param_1 + 0x70) == 5) && (lVar2 = func_0x000144f8c620(), lVar2 != 0)) &&
      ((~*(uint *)(lVar2 + 0xa4) & 0x7ffe) != 0)) &&
     (cVar1 = FUN_144d9d7a0(*(uint *)(lVar2 + 0xa0),*(uint *)(lVar2 + 0xa0) >> 0x10), cVar1 != '\0')
     ) {
    return 0;
  }
  return 1;
}

