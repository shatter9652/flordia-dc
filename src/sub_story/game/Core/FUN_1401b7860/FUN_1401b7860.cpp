// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b7860  size: 50 bytes
// Name:    FUN_1401b7860
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401bbf00, FUN_145078170
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401b7860(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar1 = FUN_1401bbf00();
    FUN_145078170(param_1,1,uVar1);
  }
  return **(undefined8 **)(param_1 + 0x78);
}

