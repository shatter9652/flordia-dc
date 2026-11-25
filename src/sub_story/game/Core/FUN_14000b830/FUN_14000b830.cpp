// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000b830  size: 54 bytes
// Name:    FUN_14000b830
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dc47a0, FUN_144ed5c20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14000b830(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144ed5c20();
  if ((lVar1 != 0) &&
     (lVar1 = FUN_144dc47a0(*(undefined8 *)(lVar1 + 0x60),*(undefined8 *)(param_1 + 0x20),
                            *(undefined1 *)(param_1 + 0x30)), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x10);
  }
  return 0;
}

