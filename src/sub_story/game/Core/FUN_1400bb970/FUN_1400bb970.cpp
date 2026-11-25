// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bb970  size: 89 bytes
// Name:    FUN_1400bb970
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400bb970(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 9) = 0;
    iVar2 = *(int *)((longlong)puVar1 + 0x24);
    if (0 < iVar2) {
      lVar3 = 0x30;
      lVar4 = 0;
      do {
        if (*(longlong *)(param_1[4] + lVar3) != 0) {
          (**(code **)*puVar1)(puVar1);
          iVar2 = *(int *)((longlong)puVar1 + 0x24);
        }
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x40;
      } while (lVar4 < iVar2);
    }
  }
  return;
}

