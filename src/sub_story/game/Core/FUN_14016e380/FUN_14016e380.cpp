// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016e380  size: 76 bytes
// Name:    FUN_14016e380
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14016e410, FUN_14016e3d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14016e380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined8 *puStack_18;
  
  FUN_14016e410(param_1,&puStack_18,param_3,param_4,param_5);
  FUN_14016e3d0(param_2,&puStack_18);
  if (puStack_18 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puStack_18 + 2);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puStack_18)(puStack_18,1);
    }
  }
  return;
}

