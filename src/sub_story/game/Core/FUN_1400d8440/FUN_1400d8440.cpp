// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d8440  size: 64 bytes
// Name:    FUN_1400d8440
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145069eb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_1400d8440(byte param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_145069eb0();
  if (lVar1 != 0) {
    if (*(char *)(lVar1 + 0xd7) == '\0') {
      param_1 = func_0x0001456a5620(*(undefined8 *)(lVar1 + 0xb0));
    }
    else {
      param_1 = 0;
    }
  }
  return lVar1 != 0 & param_1;
}

