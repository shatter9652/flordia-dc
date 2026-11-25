// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014e780  size: 357 bytes
// Name:    FUN_14014e780
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140b808a0, FUN_144edd090
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14014e780(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  lVar6 = *(longlong *)(param_1 + 8);
  if (((lVar6 != 0) && (lVar5 = func_0x000144da6540(*(undefined4 *)(lVar6 + 0x9c)), lVar5 != 0)) &&
     (*(longlong *)(lVar5 + 0x10c8) != 0)) {
    uVar1 = *(uint *)(*(longlong *)(lVar5 + 0x10c8) + 0x14f0);
    if (((((ulonglong)uVar1 & 0x1ffff) == 0x1ffff) ||
        (plVar3 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
        plVar3 == (longlong *)0x0)) ||
       ((uVar7 = *(uint *)(plVar3[5] + ((ulonglong)uVar1 & 0x1ffff) * 4),
        (uVar7 >> 0x11 & 0x3ff) != uVar1 >> 0x16 ||
        (((uVar7 & *(uint *)(plVar3 + 6)) != *(uint *)(plVar3 + 6) || (*plVar3 == 0)))))) {
      uVar1 = *(uint *)(param_1 + 0x10);
      if ((((ulonglong)uVar1 & 0x1ffff) != 0x1ffff) &&
         (plVar3 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
         plVar3 != (longlong *)0x0)) {
        uVar7 = *(uint *)(plVar3[5] + ((ulonglong)uVar1 & 0x1ffff) * 4);
        uVar8 = uVar7 >> 0x11 & 0x3ff;
        if (uVar8 != uVar1 >> 0x16) {
          return 0;
        }
        uVar7 = uVar7 & *(uint *)(plVar3 + 6);
        if (uVar7 != *(uint *)(plVar3 + 6)) {
          return 0;
        }
        if (*plVar3 == 0) {
          return 0;
        }
        cVar4 = FUN_144edd090(lVar6,CONCAT71((uint7)(uint3)(uVar7 >> 8),1),
                              CONCAT71((uint7)(uint3)(uVar8 >> 8),1));
        if (cVar4 != '\0') {
          return 1;
        }
        uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c);
        lVar6 = func_0x000144da6540(uVar2);
        if (((*(char *)(*(longlong *)(lVar6 + 0x10a8) + 0xcb2) < '\0') &&
            (lVar6 = func_0x000144f3a1d0(uVar2), lVar6 != 0)) &&
           (cVar4 = FUN_140b808a0(*(undefined8 *)(lVar6 + 8),0), cVar4 != '\0')) {
          return 1;
        }
      }
    }
  }
  return 0;
}

