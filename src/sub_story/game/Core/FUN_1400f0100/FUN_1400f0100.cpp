// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f0100  size: 287 bytes
// Name:    FUN_1400f0100
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f0100(longlong param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  uVar1 = *(uint *)(param_1 + 0x14c);
  if (uVar1 != 0) {
    plVar3 = *(longlong **)(param_1 + 0x150);
    plVar6 = plVar3;
    plVar7 = plVar3;
    do {
      lVar5 = plVar6[1];
      if (lVar5 == 0) {
        lVar5 = *(longlong *)(*plVar6 + 0x10) + 8;
      }
      if (*(int *)(*(longlong *)(*(longlong *)(*plVar6 + 8) + 0x30) +
                  (ulonglong)*(uint *)(lVar5 + 4) * 0x18) == param_2) {
        uVar1 = param_3[1];
        if (uVar1 == *param_3) {
          uVar4 = uVar1 >> 1;
          if (uVar1 < 2) {
            uVar4 = 1;
          }
          uVar4 = uVar4 + uVar1;
          puVar2 = param_3 + 4;
          if (0x40 < uVar4) {
            puVar2 = (uint *)func_0x000144d9c140(8,(ulonglong)uVar4 << 3);
            uVar1 = param_3[1];
          }
          if (uVar1 != 0) {
            func_0x000145f40560(puVar2,*(undefined8 *)(param_3 + 2),(ulonglong)uVar1 << 3);
          }
          if (*(uint **)(param_3 + 2) != (uint *)0x0 && param_3 + 4 != *(uint **)(param_3 + 2)) {
            func_0x000144d9c130();
          }
          *(uint **)(param_3 + 2) = puVar2;
          *param_3 = uVar4;
          uVar1 = param_3[1];
        }
        else {
          puVar2 = *(uint **)(param_3 + 2);
        }
        param_3[1] = uVar1 + 1;
        *(longlong **)(puVar2 + (ulonglong)uVar1 * 2) = plVar7;
        plVar3 = *(longlong **)(param_1 + 0x150);
        uVar1 = *(uint *)(param_1 + 0x14c);
      }
      plVar6 = plVar6 + 4;
      plVar7 = plVar7 + 4;
    } while (plVar6 != plVar3 + (ulonglong)uVar1 * 4);
  }
  return;
}

