// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401430c0  size: 93 bytes
// Name:    FUN_1401430c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145761eb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401430c0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x1ac4);
  if (uVar1 == *(uint *)(param_1 + 0x1ac0)) {
    uVar2 = 1;
    if (1 < uVar1) {
      uVar2 = uVar1 >> 1;
    }
    FUN_145761eb0(param_1 + 0x1ac0,uVar2 + uVar1);
    uVar1 = *(uint *)(param_1 + 0x1ac4);
  }
  *(uint *)(param_1 + 0x1ac4) = uVar1 + 1;
  *(undefined8 *)(*(longlong *)(param_1 + 0x1ac8) + (ulonglong)uVar1 * 8) = param_2;
  return;
}

