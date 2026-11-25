// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140090fe0  size: 38 bytes
// Name:    FUN_140090fe0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1453b7e10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_140090fe0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1453b7e10();
  if (cVar1 != '\0') {
    return 1;
  }
  uVar2 = FUN_144f61a90();
  if (((short)uVar2 != -1) && (cVar1 = func_0x000140091010(uVar2), cVar1 != '\0')) {
    return 1;
  }
  return (*(byte *)(param_1 + 0x51) & 0x20) >> 5;
}

