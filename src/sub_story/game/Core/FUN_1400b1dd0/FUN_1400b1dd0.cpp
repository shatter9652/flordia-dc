// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b1dd0  size: 176 bytes
// Name:    FUN_1400b1dd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145d96180, FUN_140081ac0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400b1dd0(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  lVar5 = func_0x000144f3f020();
  if (lVar5 != 0) {
    cVar4 = FUN_145d96180(lVar5);
    if (cVar4 != '\0') {
      lVar5 = FUN_140081ac0(*(undefined8 *)(lVar5 + 0x30),*(undefined8 *)(lVar5 + 0x40),param_2);
      uVar1 = *(uint *)(lVar5 + 8);
      uVar6 = (ulonglong)uVar1 & 0x1ffff;
      if ((uVar6 != 0x1ffff) &&
         (plVar3 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
         plVar3 != (longlong *)0x0)) {
        uVar2 = *(uint *)(plVar3[5] + uVar6 * 4);
        if (((uVar2 >> 0x11 & 0x3ff) == uVar1 >> 0x16) &&
           (((uVar2 & *(uint *)(plVar3 + 6)) == *(uint *)(plVar3 + 6) && (*plVar3 != 0)))) {
          lVar5 = func_0x000144eaa5c0(*(undefined4 *)
                                       (*plVar3 + 0x9c +
                                       (ulonglong)(uint)((int)uVar6 * (int)plVar3[1])));
          if (lVar5 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined8 *)(lVar5 + 0x1f08);
          }
          return uVar7;
        }
      }
    }
  }
  return 0;
}

