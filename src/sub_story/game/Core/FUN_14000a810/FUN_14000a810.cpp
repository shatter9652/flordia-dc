// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000a810  size: 76 bytes
// Name:    FUN_14000a810
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dc4620
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14000a810(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x3c);
  lVar1 = func_0x0001450fb340(uVar2);
  if (lVar1 != 0) {
    if (param_2 != 0) {
      FUN_144dc4620(param_2 + 0x3c04,*(undefined4 *)(lVar1 + 0x9c));
      uVar2 = *(uint *)(param_1 + 0x3c);
    }
    *(uint *)(param_1 + 0x3c) = uVar2 | 0x1ffff;
  }
  return;
}

