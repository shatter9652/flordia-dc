// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013dac0  size: 327 bytes
// Name:    FUN_14013dac0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14079c080, FUN_14013dfc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14013dac0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*(int *)(param_1 + 8) == 1) {
    lVar6 = func_0x000144f01ca0();
    uVar1 = *(uint *)(lVar6 + 0x48);
    uVar7 = (ulonglong)uVar1 & 0x1ffff;
    if ((uVar7 != 0x1ffff) &&
       (plVar3 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar3 != (longlong *)0x0)) {
      uVar2 = *(uint *)(plVar3[5] + uVar7 * 4);
      if ((uVar2 >> 0x11 & 0x3ff) != uVar1 >> 0x16) {
        return 0;
      }
      if ((uVar2 & *(uint *)(plVar3 + 6)) != *(uint *)(plVar3 + 6)) {
        return 0;
      }
      if (*plVar3 == 0) {
        return 0;
      }
      if (param_2 != 0) {
        uVar1 = *(uint *)(param_2 + 0x28);
        uVar8 = (ulonglong)uVar1 & 0x1ffff;
        if ((uVar8 == 0x1ffff) ||
           (plVar4 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar4 == (longlong *)0x0)) {
          lVar6 = 0;
        }
        else {
          uVar2 = *(uint *)(plVar4[5] + uVar8 * 4);
          lVar6 = 0;
          if (uVar1 >> 0x16 == (uVar2 >> 0x11 & 0x3ff) &&
              (uVar2 & *(uint *)(plVar4 + 6)) == *(uint *)(plVar4 + 6)) {
            lVar6 = (ulonglong)(uint)((int)plVar4[1] * (int)uVar8) + *plVar4;
          }
        }
        if (lVar6 != *plVar3 + (ulonglong)(uint)((int)uVar7 * (int)plVar3[1])) {
          return 0;
        }
      }
      cVar5 = FUN_14079c080(param_1,&uStack_38);
      if (cVar5 != '\0') {
        uStack_28 = uStack_38;
        uStack_20 = uStack_30;
        cVar5 = FUN_14013dfc0(param_1 + 0x200);
        if (cVar5 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}

