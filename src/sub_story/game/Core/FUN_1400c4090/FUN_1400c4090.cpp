// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c4090  size: 176 bytes
// Name:    FUN_1400c4090
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c4090(longlong param_1,longlong param_2,ulonglong param_3,undefined1 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x38);
  param_3 = param_3 & 0xffffffff;
  puVar2 = *(undefined8 **)(lVar4 + param_3 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 3) = *(int *)(puVar2 + 3) + 1;
    UNLOCK();
    lVar4 = *(longlong *)(param_1 + 0x38);
    if (*(longlong *)(lVar4 + param_3 * 8) == param_2) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x88) + param_3) = param_4;
      goto LAB_1400c40e1;
    }
  }
  LOCK();
  *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + 1;
  UNLOCK();
  puVar3 = *(undefined8 **)(lVar4 + param_3 * 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 3);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(longlong *)(lVar4 + param_3 * 8) = param_2;
  *(undefined1 *)(*(longlong *)(param_1 + 0x88) + param_3) = param_4;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
LAB_1400c40e1:
  LOCK();
  piVar1 = (int *)(puVar2 + 3);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400c413d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar2)(puVar2,1);
  return;
}

