// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bb200  size: 281 bytes
// Name:    FUN_1401bb200
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e469e0, FUN_145078e30, FUN_144e96700, FUN_145078e80, FUN_144fac3c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1401bb200(void)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar2 = (undefined8 *)FUN_144e96700(0x149aafa40);
  if (puVar2 == (undefined8 *)0x0) {
    uVar4 = func_0x000144fc99c0(0,0);
    puVar2 = (undefined8 *)FUN_144fac3c0(uVar4,0x50,0x10);
  }
  FUN_145078e30(puVar2);
  *puVar2 = &UNK_1465e67d0;
  puVar3 = (undefined8 *)FUN_144e96700(0x149aafb50);
  if (puVar3 == (undefined8 *)0x0) {
    uVar4 = func_0x000144fc99c0(0,0);
    puVar3 = (undefined8 *)FUN_144fac3c0(uVar4,0x30,0x10);
    if (puVar3 != (undefined8 *)0x0) goto LAB_1401bb24b;
    puVar5 = (undefined8 *)puVar2[5];
    if (puVar5 == (undefined8 *)0x0) goto LAB_1401bb285;
    puVar3 = (undefined8 *)0x0;
LAB_1401bb300:
    LOCK();
    piVar1 = (int *)(puVar5 + 2);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  else {
LAB_1401bb24b:
    FUN_145078e80(puVar3,0xffffffff);
    *puVar3 = &UNK_1465ea780;
    *(undefined4 *)(puVar3 + 5) = 1;
    if ((undefined8 *)puVar2[5] == puVar3) goto LAB_1401bb285;
    LOCK();
    *(int *)(puVar3 + 2) = *(int *)(puVar3 + 2) + 1;
    UNLOCK();
    puVar5 = (undefined8 *)puVar2[5];
    if (puVar5 != (undefined8 *)0x0) goto LAB_1401bb300;
  }
  puVar2[5] = puVar3;
LAB_1401bb285:
  FUN_144e469e0(puVar2 + 6);
  return puVar2;
}

