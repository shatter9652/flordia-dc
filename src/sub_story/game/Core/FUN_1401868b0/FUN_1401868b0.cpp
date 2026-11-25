// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401868b0  size: 157 bytes
// Name:    FUN_1401868b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14503e1d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_1401868b0(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x80))();
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  bVar3 = puVar1 != (undefined4 *)0x0 | bVar2;
  if (bVar3 == 1) {
    if (bVar2 == 0) {
      *param_2 = *puVar1;
      param_2[1] = puVar1[1];
      param_2[2] = puVar1[2];
      param_2[3] = puVar1[3];
      param_2[4] = puVar1[4];
      param_2[5] = puVar1[5];
      param_2[6] = puVar1[6];
      param_2[7] = puVar1[7];
    }
    else if (puVar1 != (undefined4 *)0x0) {
      FUN_14503e1d0(param_2);
    }
  }
  return bVar3;
}

