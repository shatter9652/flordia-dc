// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d0320  size: 397 bytes
// Name:    FUN_1400d0320
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400d0320(longlong param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (param_2 != 0) {
    plVar1 = *(longlong **)((ulonglong)*(byte *)(param_2 + 0x30) * 8 + 0x14abbe7c0);
    uVar6 = *(uint *)(param_1 + 0x624);
    uVar7 = (ulonglong)uVar6;
    uVar2 = (uint)((ulonglong)(param_2 - *plVar1) / (ulonglong)*(uint *)(plVar1 + 1)) & 0x1ffff;
    uVar2 = (*(byte *)(param_2 + 0x30) & 0x1f) << 0x11 | uVar2 |
            (*(uint *)(plVar1[5] + (ulonglong)uVar2 * 4) & 0x7fe0000) << 5;
    puVar5 = *(uint **)(param_1 + 0x628);
    if (uVar7 != 0) {
      lVar8 = uVar7 * 8;
      puVar3 = puVar5;
      do {
        if (*puVar3 == uVar2) {
          puVar3[1] = (puVar3[1] | param_3) & 0x200 | param_3 & puVar3[1] & 0xfffffdff;
          return;
        }
        puVar3 = puVar3 + 2;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
    if (uVar6 == *(uint *)(param_1 + 0x620)) {
      uVar6 = uVar6 * 2 + (uint)(uVar6 == 0);
      if (uVar6 < 7) {
        puVar4 = (uint *)(param_1 + 0x630);
        puVar3 = puVar5;
      }
      else {
        puVar4 = (uint *)func_0x000144d9c140(4,(ulonglong)uVar6 << 3);
        uVar7 = (ulonglong)*(uint *)(param_1 + 0x624);
        puVar3 = *(uint **)(param_1 + 0x628);
      }
      puVar5 = puVar4;
      if ((int)uVar7 != 0) {
        func_0x000145f40560(puVar5,puVar3,uVar7 << 3);
        puVar3 = *(uint **)(param_1 + 0x628);
      }
      if (puVar3 != (uint *)0x0 && (uint *)(param_1 + 0x630) != puVar3) {
        func_0x000144d9c130(puVar3);
      }
      *(uint **)(param_1 + 0x628) = puVar5;
      *(uint *)(param_1 + 0x620) = uVar6;
      uVar7 = (ulonglong)*(uint *)(param_1 + 0x624);
    }
    *(int *)(param_1 + 0x624) = (int)uVar7 + 1;
    *(ulonglong *)(puVar5 + uVar7 * 2) = CONCAT44(param_3,uVar2);
  }
  return;
}

