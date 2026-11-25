// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015bcb0  size: 41 bytes
// Name:    FUN_14015bcb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14013ee80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_14015bcb0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14013ee80();
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1412ffeb0(*(undefined4 *)(lVar1 + 0xd4));
      func_0x0001412ffe60(lVar1);
      func_0x0001412ffe70(param_1,lVar1);
      FUN_1412ffff0(param_1,lVar1);
    }
    return lVar1 != 0;
  }
  return false;
}

