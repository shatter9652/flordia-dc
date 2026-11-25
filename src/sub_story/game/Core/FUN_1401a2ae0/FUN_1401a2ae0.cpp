// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a2ae0  size: 49 bytes
// Name:    FUN_1401a2ae0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd9c90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401a2ae0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x160))();
    lVar2 = FUN_144dd9c90(uVar1,0x1324c9da);
    if (lVar2 != 0) {
      return *(undefined8 *)(lVar2 + 0x10);
    }
  }
  return 0;
}

