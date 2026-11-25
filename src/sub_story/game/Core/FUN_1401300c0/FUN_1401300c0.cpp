// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401300c0  size: 83 bytes
// Name:    FUN_1401300c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401300c0, FUN_1456a7c40, FUN_140130120
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401300c0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_140130120(*(undefined4 *)(param_1 + 0x18));
  if (((lVar2 == 0) || (cVar1 = FUN_1401300c0(lVar2,param_2), cVar1 != '\0')) &&
     (((int)*(uint *)(param_1 + 0x1c) < 1 ||
      ((*(uint *)(param_1 + 0x4c) < *(uint *)(param_1 + 0x1c) ||
       (lVar2 = FUN_1456a7c40(param_1,param_2), lVar2 != 0)))))) {
    return 1;
  }
  return 0;
}

