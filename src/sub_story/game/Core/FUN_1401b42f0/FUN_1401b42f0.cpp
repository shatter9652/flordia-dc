// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b42f0  size: 152 bytes
// Name:    FUN_1401b42f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401b42f0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (puVar2 != param_2) {
    if (param_2 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(param_2 + 2) = *(int *)(param_2 + 2) + 1;
      UNLOCK();
      puVar2 = *(undefined8 **)(param_1 + 0x20);
    }
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    *(undefined8 **)(param_1 + 0x20) = param_2;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar2 != param_3) {
    if (param_3 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(param_3 + 2) = *(int *)(param_3 + 2) + 1;
      UNLOCK();
      puVar2 = *(undefined8 **)(param_1 + 0x18);
    }
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    *(undefined8 **)(param_1 + 0x18) = param_3;
  }
  return;
}

