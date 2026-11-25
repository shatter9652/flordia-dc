// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140018c60  size: 121 bytes
// Name:    FUN_140018c60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140018c60(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x218);
  while (puVar3 = puVar2, puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)puVar3[0x42];
    puVar3[0x44] = 0;
    puVar3[0x42] = 0;
    if (((*(byte *)((longlong)puVar3 + 0x22c) & 0x10) == 0) && (puVar3[0x43] == 0)) {
      LOCK();
      piVar1 = (int *)(puVar3 + 0x45);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x218) = 0;
  return;
}

