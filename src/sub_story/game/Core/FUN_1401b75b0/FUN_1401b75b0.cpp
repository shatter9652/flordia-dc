// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b75b0  size: 311 bytes
// Name:    FUN_1401b75b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b76f0, FUN_145078de0, FUN_1401b7720, FUN_144e96700, FUN_144fac3c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1401b75b0(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar2 = (undefined8 *)FUN_144e96700(0x149aaf9c8);
  if (puVar2 == (undefined8 *)0x0) {
    uVar4 = func_0x000144fc99c0(0,0);
    puVar2 = (undefined8 *)FUN_144fac3c0(uVar4,0x50,0x10);
  }
  FUN_145078de0(puVar2);
  *puVar2 = &UNK_1465e6120;
  puVar3 = (undefined8 *)FUN_144e96700(0x149aafbc8);
  if (puVar3 == (undefined8 *)0x0) {
    uVar4 = func_0x000144fc99c0(0,0);
    puVar3 = (undefined8 *)FUN_144fac3c0(uVar4,0x38,0x10);
    if (puVar3 != (undefined8 *)0x0) goto LAB_1401b7606;
    puVar5 = (undefined8 *)puVar2[5];
    if (puVar5 == (undefined8 *)0x0) goto LAB_1401b763e;
    puVar3 = (undefined8 *)0x0;
LAB_1401b76ce:
    LOCK();
    piVar1 = (int *)(puVar5 + 2);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  else {
LAB_1401b7606:
    FUN_1401b76f0(puVar3,param_2,param_3);
    *puVar3 = &UNK_1465ea470;
    if ((undefined8 *)puVar2[5] == puVar3) goto LAB_1401b763e;
    LOCK();
    *(int *)(puVar3 + 2) = *(int *)(puVar3 + 2) + 1;
    UNLOCK();
    puVar5 = (undefined8 *)puVar2[5];
    if (puVar5 != (undefined8 *)0x0) goto LAB_1401b76ce;
  }
  puVar2[5] = puVar3;
LAB_1401b763e:
  func_0x000144e474c0(puVar2 + 6);
  FUN_1401b7720(param_1,6,puVar2);
  return puVar2;
}

