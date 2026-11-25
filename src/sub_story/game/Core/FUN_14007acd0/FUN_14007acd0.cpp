// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007acd0  size: 139 bytes
// Name:    FUN_14007acd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141f8c250
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007acd0(longlong param_1,int param_2,char param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  
  if (param_2 < 0x24) {
    lVar4 = (longlong)param_2;
    plVar1 = *(longlong **)(param_1 + 0x508 + lVar4 * 8);
    if (plVar1 != (longlong *)0x0) {
      if (param_3 != '\0') {
        cVar3 = (**(code **)(*plVar1 + 0x20))();
        if (cVar3 == '\0') {
          FUN_141f8c250(_DAT_149e50650 + 0x24a0,*(undefined8 *)(param_1 + 0x508 + lVar4 * 8));
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x508 + lVar4 * 8) + 0x10))();
          puVar2 = *(undefined8 **)(param_1 + 0x508 + lVar4 * 8);
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,1);
          }
        }
      }
      *(undefined8 *)(param_1 + 0x508 + lVar4 * 8) = 0;
      *(undefined4 *)(param_1 + 0x360 + lVar4 * 4) = 0x12;
    }
  }
  return;
}

