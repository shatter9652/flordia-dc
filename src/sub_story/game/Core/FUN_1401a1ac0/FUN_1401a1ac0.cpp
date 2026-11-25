// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a1ac0  size: 54 bytes
// Name:    FUN_1401a1ac0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401a1f00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401a1ac0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1401a1f00();
  if (((int)uVar1 == 1) &&
     ((*(longlong *)(param_1 + 0x298) == 0 ||
      (uVar1 = 1, (*(byte *)(*(longlong *)(param_1 + 0x298) + 0x34) & 1) == 0)))) {
    uVar1 = 0x1b6;
  }
  return uVar1;
}

