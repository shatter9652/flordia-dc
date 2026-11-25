// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f0be0  size: 52 bytes
// Name:    FUN_1400f0be0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400f0a90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f0be0(longlong param_1)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if (0 < (int)*(uint *)(param_1 + 0x10)) {
    do {
      FUN_1400f0a90(param_1,uVar2);
      bVar1 = 1 < uVar2;
      uVar2 = uVar2 - 1;
    } while (bVar1);
  }
  *(undefined4 *)(param_1 + 0x1c) = 1;
  return;
}

