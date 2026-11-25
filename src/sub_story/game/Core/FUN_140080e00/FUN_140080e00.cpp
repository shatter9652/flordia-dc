// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140080e00  size: 59 bytes
// Name:    FUN_140080e00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140080e00(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = func_0x000144da6540();
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x10e0), lVar2 != 0)) {
    iVar1 = FUN_144ef5050(*(undefined8 *)(lVar2 + 0x20),*(undefined2 *)(lVar2 + 0x28),param_2);
    return -1 < iVar1;
  }
  return false;
}

