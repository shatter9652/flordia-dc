// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018f470  size: 42 bytes
// Name:    FUN_14018f470
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14018f470(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x160))();
    puVar2 = (undefined8 *)FUN_144dd9c90(uVar1,0x893f08c8);
    if (puVar2 == (undefined8 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *puVar2;
    }
    return uVar1;
  }
  return 0;
}

