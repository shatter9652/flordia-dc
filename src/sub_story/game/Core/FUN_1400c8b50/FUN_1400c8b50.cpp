// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c8b50  size: 75 bytes
// Name:    FUN_1400c8b50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450f2210, FUN_1400cbc00, FUN_1400caf30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c8b50(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  FUN_1400caf30(param_2);
  uVar1 = FUN_1450f2210(*(undefined8 *)(param_1 + 0x2f8));
  uVar2 = func_0x000144fac560(uVar1,0,0xffff);
  *(undefined4 *)(param_2 + 0x78) = uVar2;
  uVar1 = FUN_1400cbc00(*(undefined8 *)(param_1 + 0x2f8));
  *(undefined8 *)(param_2 + 0x70) = uVar1;
  return;
}

