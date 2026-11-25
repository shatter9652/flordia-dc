// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016e6f0  size: 212 bytes
// Name:    FUN_14016e6f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14016e7d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_14016e6f0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lStack_30;
  longlong lStack_28;
  
  *param_1 = 0;
  lVar4 = func_0x000144f97130(0x1b0);
  if (lVar4 == 0) {
    func_0x000140433170(&lStack_30);
    *param_1 = lStack_30;
  }
  else {
    lStack_28 = *param_3;
    *param_3 = 0;
    FUN_14016e7d0(lVar4,param_2);
    func_0x0001400f2130(&lStack_30,lVar4);
    puVar2 = (undefined8 *)*param_1;
    *param_1 = lStack_30;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  puVar2 = (undefined8 *)*param_3;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)puVar2[3];
    LOCK();
    piVar1 = (int *)(puVar2 + 2);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  return param_1;
}

