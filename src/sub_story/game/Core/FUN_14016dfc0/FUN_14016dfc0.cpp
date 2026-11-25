// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016dfc0  size: 272 bytes
// Name:    FUN_14016dfc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14016e0d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 (*) [32]
FUN_14016dfc0(undefined1 (*param_1) [32],undefined4 param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *(undefined8 *)param_1[1] = 0;
  *param_1 = ZEXT1232(ZEXT812(0));
  *(undefined4 *)(param_1[1] + 8) = param_2;
  lVar2 = *(longlong *)(param_4 + 0x10);
  if (lVar2 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    LOCK();
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
    UNLOCK();
    if (*(longlong *)(lVar2 + 0x18) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(lVar2 + 0x18) + 0x10);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar4 = *(undefined8 **)(*param_1 + 0x10);
    if (puVar4 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)puVar4[3];
      LOCK();
      piVar1 = (int *)(puVar4 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
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
    *(longlong *)(*param_1 + 0x10) = lVar2;
    puVar4 = *(undefined8 **)(*param_1 + 0x18);
  }
  if (puVar4 != param_3) {
    if (param_3 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(param_3 + 2) = *(int *)(param_3 + 2) + 1;
      UNLOCK();
      puVar4 = *(undefined8 **)(*param_1 + 0x18);
    }
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    *(undefined8 **)(*param_1 + 0x18) = param_3;
  }
  FUN_14016e0d0(param_1,param_4);
  *(undefined4 *)(param_1[1] + 0xc) = *(undefined4 *)(param_4 + 0x18);
  param_1[1][0x10] = *(char *)(param_4 + 0x1c) == '\x02';
  return param_1;
}

