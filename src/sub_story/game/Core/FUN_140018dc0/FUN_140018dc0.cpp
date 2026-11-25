// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140018dc0  size: 112 bytes
// Name:    FUN_140018dc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140018dc0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  LOCK();
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 == 0) {
    *(int *)(param_1 + 0x38) = 1;
    iVar2 = 0;
  }
  UNLOCK();
  if (iVar2 == 1) {
    uVar4 = 8;
    do {
      for (uVar1 = 0; uVar1 < uVar4; uVar1 = uVar1 + 1) {
      }
      LOCK();
      iVar2 = *(int *)(param_1 + 0x38);
      if (iVar2 == 0) {
        *(int *)(param_1 + 0x38) = 1;
        iVar2 = 0;
      }
      UNLOCK();
      uVar4 = uVar4 << (uVar4 < 0x400);
    } while (iVar2 == 1);
  }
  for (puVar3 = *(undefined8 **)(param_1 + 0x30); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)*puVar3) {
    puVar3[1] = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_144dd1b90();
  FUN_140018ce0(*(undefined8 *)(param_1 + 8));
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

