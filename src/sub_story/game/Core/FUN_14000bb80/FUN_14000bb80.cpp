// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000bb80  size: 73 bytes
// Name:    FUN_14000bb80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f93d60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 FUN_14000bb80(void)

{
  longlong lVar1;
  
  lVar1 = func_0x000144e24670();
  if (((lVar1 != 0) && (lVar1 = func_0x000144f1f810(*(undefined4 *)(lVar1 + 0x2ff8)), lVar1 != 0))
     && (lVar1 = FUN_144f93d60(*(undefined4 *)(lVar1 + 0x24),*(undefined8 *)(lVar1 + 0x28),0xbe),
        lVar1 != 0)) {
    lVar1 = func_0x000144e29fa0(lVar1);
    return *(undefined1 *)(lVar1 + 0x1e);
  }
  return 0;
}

