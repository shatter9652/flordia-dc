// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b6510  size: 201 bytes
// Name:    FUN_1401b6510
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145078e30, FUN_145078e80, FUN_144e96700, FUN_144fac3c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1401b6510(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  
  FUN_145078e30();
  *param_1 = &UNK_1465e67d0;
  puVar2 = (undefined8 *)FUN_144e96700(0x149aafb98);
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = func_0x000144fc99c0(0,0);
    puVar2 = (undefined8 *)FUN_144fac3c0(uVar3,0x50,0x10);
    if (puVar2 != (undefined8 *)0x0) goto LAB_1401b653a;
    puVar4 = (undefined8 *)param_1[5];
    if (puVar4 == (undefined8 *)0x0) {
      return param_1;
    }
    puVar2 = (undefined8 *)0x0;
  }
  else {
LAB_1401b653a:
    FUN_145078e80(puVar2,0xffffffff);
    auVar5._0_12_ = ZEXT812(0);
    auVar5._12_4_ = 0;
    *puVar2 = &UNK_1465ea650;
    *(undefined1 (*) [16])(puVar2 + 6) = auVar5;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0xffffffff;
    *(undefined4 *)(puVar2 + 5) = 0xd;
    if ((undefined8 *)param_1[5] == puVar2) {
      return param_1;
    }
    LOCK();
    *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + 1;
    UNLOCK();
    puVar4 = (undefined8 *)param_1[5];
    if (puVar4 == (undefined8 *)0x0) goto LAB_1401b6589;
  }
  LOCK();
  piVar1 = (int *)(puVar4 + 2);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_1401b6589:
  param_1[5] = puVar2;
  return param_1;
}

