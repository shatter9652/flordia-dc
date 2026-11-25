// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401814e0  size: 40 bytes
// Name:    FUN_1401814e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401814e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  while (param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[1];
    (**(code **)*param_1)(param_1,1);
    param_1 = puVar1;
  }
  return;
}

