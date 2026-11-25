// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cd360  size: 165 bytes
// Name:    FUN_1401cd360
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_1401cd360(longlong param_1,int param_2,byte param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar4 = func_0x000144e65310(param_1 + 0x20);
  if ((~uVar4 & 0x102) == 0) {
    plVar1 = *(longlong **)(param_1 + 0x50 + (longlong)param_2 * 8);
    uVar5 = (ulonglong)*(ushort *)(plVar1 + 1);
    if (uVar5 != 0) {
      uVar7 = 0;
      do {
        lVar2 = *(longlong *)(*plVar1 + uVar7 * 8);
        uVar8 = (ulonglong)*(ushort *)(lVar2 + 0x36);
        if (uVar8 != 0) {
          uVar6 = 0;
          do {
            plVar3 = *(longlong **)
                      (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) +
                      (ulonglong)*(ushort *)(*(longlong *)(lVar2 + 0x20) + uVar6 * 2) * 8);
            if (plVar3 != (longlong *)0x0) {
              if (*(int *)(*plVar3 + 0xd10) == -0x5633f97) {
                return plVar3;
              }
              if ((*(int *)(*plVar3 + 0xd10) == 0x389206d1 & param_3) != 0) {
                return plVar3;
              }
            }
            uVar6 = uVar6 + 1;
          } while (uVar8 != uVar6);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar5);
    }
  }
  return (longlong *)0x0;
}

