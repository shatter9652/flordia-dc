// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016e650  size: 49 bytes
// Name:    FUN_14016e650
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145028490
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14016e650(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  
  cVar3 = FUN_145028490(*param_1);
  if (cVar3 != '\0') {
    lVar2 = *param_1;
    puVar4 = *(undefined8 **)(lVar2 + 0x198);
    if (puVar4 != param_2) {
      if (param_2 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(param_2 + 2) = *(int *)(param_2 + 2) + 1;
        UNLOCK();
        puVar4 = *(undefined8 **)(lVar2 + 0x198);
      }
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar4 + 2);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      *(undefined8 **)(lVar2 + 0x198) = param_2;
    }
    return;
  }
  return;
}

