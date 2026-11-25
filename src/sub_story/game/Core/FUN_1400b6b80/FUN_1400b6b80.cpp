// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b6b80  size: 52 bytes
// Name:    FUN_1400b6b80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e91330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_1400b6b80(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  
  bVar2 = 0;
  if (param_1 != 0) {
    lVar1 = FUN_144e91330();
    bVar2 = 0;
    if ((lVar1 != 0) && (*(undefined8 **)(lVar1 + 0x50) != (undefined8 *)0x0)) {
      bVar2 = *(byte *)(*(longlong *)**(undefined8 **)(lVar1 + 0x50) + 0x31) & 1;
    }
  }
  return bVar2;
}

