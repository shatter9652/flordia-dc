// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140103660  size: 82 bytes
// Name:    FUN_140103660
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fa9520, FUN_144fa9440, FUN_144fd5f20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140103660(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_144fa9440();
  if (cVar1 == '\0') {
    uVar2 = FUN_144fa9520(param_2,param_1);
    cVar1 = func_0x000142ec15f0(uVar2);
    if ((cVar1 != '\0') ||
       ((cVar1 = FUN_144fd5f20(uVar2), cVar1 != '\0' &&
        (cVar1 = func_0x000145eced50(uVar2), cVar1 == '\0')))) {
      return 1;
    }
  }
  return 0;
}

