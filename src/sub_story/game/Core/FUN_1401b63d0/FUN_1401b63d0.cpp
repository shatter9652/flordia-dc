// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b63d0  size: 315 bytes
// Name:    FUN_1401b63d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b6510, FUN_144e469e0, FUN_144e96700, FUN_144fac3c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_1401b63d0(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  plVar3 = (longlong *)FUN_144e96700(0x149aafa40);
  if (plVar3 == (longlong *)0x0) {
    uVar5 = func_0x000144fc99c0(0,0);
    plVar3 = (longlong *)FUN_144fac3c0(uVar5,0x50,0x10);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
      goto LAB_1401b6409;
    }
  }
  FUN_1401b6510(plVar3);
LAB_1401b6409:
  lVar4 = (**(code **)(*plVar3 + 200))(plVar3);
  if (*(longlong *)(lVar4 + 0x30) != param_1) {
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    UNLOCK();
    puVar2 = *(undefined8 **)(lVar4 + 0x30);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    *(longlong *)(lVar4 + 0x30) = param_1;
  }
  if (*(longlong *)(lVar4 + 0x38) != param_2) {
    LOCK();
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
    UNLOCK();
    puVar2 = *(undefined8 **)(lVar4 + 0x38);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    *(longlong *)(lVar4 + 0x38) = param_2;
  }
  if (*(longlong *)(lVar4 + 0x40) != param_3) {
    LOCK();
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
    UNLOCK();
    puVar2 = *(undefined8 **)(lVar4 + 0x40);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    *(longlong *)(lVar4 + 0x40) = param_3;
  }
  FUN_144e469e0(plVar3 + 6);
  return plVar3;
}

