// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bd4c0  size: 176 bytes
// Name:    FUN_1400bd4c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400bd4c0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 4);
  if (uVar6 != 0) {
    lVar8 = *(longlong *)(param_1 + 8);
    lVar7 = lVar8 + uVar6 * 8;
    puVar9 = (undefined8 *)(lVar8 + -8 + uVar6 * 8);
    do {
      lVar2 = *(longlong *)(lVar7 + -8);
      if (lVar2 != 0) {
        uStack_48 = *(undefined8 *)(lVar2 + 0x10);
        uStack_40 = *(undefined8 *)(lVar2 + 0x18);
        plVar3 = *(longlong **)(param_2 + 0x10);
        if (plVar3 != (longlong *)0x0) {
          cVar4 = (**(code **)(*plVar3 + 0x40))(plVar3,&uStack_48);
          lVar8 = *(longlong *)(param_1 + 8);
          if (cVar4 != '\0') {
            uVar5 = *(int *)(param_1 + 4) - 1;
            puVar1 = (undefined8 *)(lVar8 + (ulonglong)uVar5 * 8);
            if (puVar1 != puVar9) {
              *puVar9 = *puVar1;
              uVar5 = *(int *)(param_1 + 4) - 1;
            }
            *(uint *)(param_1 + 4) = uVar5;
            func_0x0001400bd3c0(lVar2);
            lVar8 = *(longlong *)(param_1 + 8);
          }
        }
      }
      lVar7 = lVar7 + -8;
      puVar9 = puVar9 + -1;
    } while (lVar7 != lVar8);
  }
  return;
}

