// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016e7d0  size: 314 bytes
// Name:    FUN_14016e7d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140008c80, FUN_144da6330, FUN_1401ef860
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_14016e7d0(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  FUN_144da6330();
  *(undefined4 *)(param_1 + 2) = 1;
  auVar5._0_12_ = ZEXT812(0);
  auVar5._12_4_ = 0;
  *param_1 = &UNK_1465e6050;
  param_1[4] = param_1 + 5;
  param_1[3] = 4;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x31] = 0;
  param_1[0x32] = *param_3;
  *param_3 = 0;
  *(undefined1 (*) [16])(param_1 + 0x33) = auVar5;
  *(undefined1 *)(param_1 + 0x35) = 0;
  lVar4 = FUN_1401ef860(*(undefined8 *)
                         (*(longlong *)
                           (*(longlong *)(param_2 + 8) + 0x10 +
                           (ulonglong)
                           *(byte *)(*(longlong *)(param_2 + 8) + 0xc0 + (ulonglong)DAT_14abc3b60) *
                           8) + 0x20),&UNK_1467214f0);
  lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x18);
  if (param_1[0x31] != lVar4) {
    LOCK();
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
    UNLOCK();
    puVar2 = (undefined8 *)param_1[0x31];
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    param_1[0x31] = lVar4;
  }
  FUN_140008c80(param_1[0x32] + 0x38,auStack_30);
  param_1[0x34] = uStack_28;
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

