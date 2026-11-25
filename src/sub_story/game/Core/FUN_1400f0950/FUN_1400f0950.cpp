// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f0950  size: 148 bytes
// Name:    FUN_1400f0950
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e76d70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1400f0950(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined8 *)(*(code *)*param_1)(param_1[3],0x30);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar1 = 0;
  puVar1[1] = puVar1;
  puVar1[2] = puVar1;
  puVar1[3] = param_2;
  puVar1[5] = FUN_144f7d380;
  if ((int)*(uint *)((longlong)param_1 + 0x2c) < 0x10) {
    uVar3 = 0x10;
  }
  else {
    if (*(uint *)((longlong)param_1 + 0x2c) < 0x1001) goto LAB_1400f09a1;
    uVar3 = 0x1000;
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
LAB_1400f09a1:
  lVar2 = FUN_144e76d70(param_1,&UNK_14677ac2f,0x18);
  puVar1[4] = lVar2;
  if (lVar2 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}

