// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400df470  size: 89 bytes
// Name:    FUN_1400df470
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e62f00, FUN_144f62d50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1400df470(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144f62d50(*(undefined8 *)(param_1 + 8));
  if ((((cVar1 != '\0') && (lVar2 = func_0x0001400df4e0(*(undefined8 *)(param_1 + 8)), lVar2 != 0))
      && (lVar2 = func_0x0001400df4d0(*(undefined8 *)(param_1 + 8)), lVar2 != 0)) &&
     (lVar2 = FUN_144e62f00(*(undefined8 *)(param_1 + 0x10)), lVar2 != 0)) {
    lVar2 = FUN_144e62f00(*(undefined8 *)(param_1 + 0x10));
    return *(int *)(lVar2 + 0x10) != 0;
  }
  return false;
}

