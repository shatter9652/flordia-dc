// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b8900  size: 321 bytes
// Name:    FUN_1401b8900
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da6330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 *
FUN_1401b8900(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,byte param_5,
             undefined8 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  
  FUN_144da6330();
  auVar4._0_12_ = ZEXT812(0);
  auVar4._12_4_ = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  plVar1 = param_1 + 3;
  *(undefined1 (*) [16])(param_1 + 3) = auVar4;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfc;
  *param_1 = &UNK_1465e73a0;
  *(undefined1 (*) [16])(param_1 + 6) = auVar4;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  LOCK();
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  UNLOCK();
  puVar3 = (undefined8 *)param_1[6];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 2);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  param_1[6] = param_2;
  if (*plVar1 != param_3) {
    LOCK();
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
    UNLOCK();
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar3 + 2);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    *plVar1 = param_3;
  }
  puVar3 = (undefined8 *)param_1[4];
  if (puVar3 != param_6) {
    if (param_6 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(param_6 + 2) = *(int *)(param_6 + 2) + 1;
      UNLOCK();
      puVar3 = (undefined8 *)param_1[4];
    }
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar3 + 2);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    param_1[4] = param_6;
  }
  if (param_1[7] != param_4) {
    LOCK();
    *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
    UNLOCK();
    puVar3 = (undefined8 *)param_1[7];
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar3 + 2);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    param_1[7] = param_4;
  }
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe | param_5;
  *(byte *)(param_4 + 0x18) = *(byte *)(param_4 + 0x18) | 1;
  return param_1;
}

