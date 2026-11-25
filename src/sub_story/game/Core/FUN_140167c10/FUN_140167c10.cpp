// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140167c10  size: 98 bytes
// Name:    FUN_140167c10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145791040
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140167c10(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x74);
  if (uVar2 == *(uint *)(param_1 + 0x70)) {
    uVar1 = 1;
    if (1 < uVar2) {
      uVar1 = uVar2 >> 1;
    }
    FUN_145791040(param_1 + 0x70,uVar1 + uVar2);
    uVar2 = *(uint *)(param_1 + 0x74);
  }
  *(uint *)(param_1 + 0x74) = uVar2 + 1;
  *(undefined8 *)(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar2 * 8) = param_2;
  return;
}

