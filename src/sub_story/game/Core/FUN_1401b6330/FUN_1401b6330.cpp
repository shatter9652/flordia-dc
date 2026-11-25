// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b6330  size: 158 bytes
// Name:    FUN_1401b6330
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145078de0, FUN_144e96700, FUN_144fac3c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1401b6330(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)FUN_144e96700(0x149aaf9c8);
  if (puVar3 == (undefined8 *)0x0) {
    uVar4 = func_0x000144fc99c0(0,0);
    puVar3 = (undefined8 *)FUN_144fac3c0(uVar4,0x50,0x10);
  }
  FUN_145078de0(puVar3);
  *puVar3 = &UNK_1465e6120;
  if (puVar3[5] != param_2) {
    LOCK();
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
    UNLOCK();
    puVar2 = (undefined8 *)puVar3[5];
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 2);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    puVar3[5] = param_2;
  }
  func_0x000144e474c0(puVar3 + 6);
  return puVar3;
}

