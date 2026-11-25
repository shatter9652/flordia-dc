// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ae8f0  size: 245 bytes
// Name:    FUN_1401ae8f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401ae8f0(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  *param_3 = 0;
  uVar5 = (**(code **)(*param_1 + 0x30))();
  plVar4 = _DAT_14a9b3f48;
  if ((int)uVar5 == 1) {
    if (*(int *)((longlong)param_1 + 300) != 0) {
      lVar3 = param_1[0x26];
      uVar5 = 0;
      do {
        uVar1 = *(uint *)(lVar3 + uVar5 * 4);
        if (uVar1 == 0x1ffff) {
LAB_1401ae964:
          lVar6 = 0;
        }
        else {
          uVar2 = *(uint *)(plVar4[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
          if (0x1ffff < (uVar1 ^ uVar2)) goto LAB_1401ae964;
          lVar6 = 0;
          if ((uVar2 & *(uint *)(plVar4 + 6)) == *(uint *)(plVar4 + 6)) {
            lVar6 = (ulonglong)((uVar1 & 0x1ffff) * (int)plVar4[1]) + *plVar4;
          }
        }
        if ((int)*(uint *)(lVar6 + 0x88) < 0) {
          return 1;
        }
        *(uint *)(lVar6 + 0x88) = *(uint *)(lVar6 + 0x88) | 0x80000000;
        if (*(uint *)(lVar6 + 0x78) != 1) {
          return (ulonglong)*(uint *)(lVar6 + 0x78);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)((longlong)param_1 + 300));
    }
    if ((*(uint *)(param_1 + 0x29) & 2) == 0) {
      if ((*(uint *)(param_1 + 0x29) & 4) == 0) {
        return 1;
      }
      uVar5 = 0x26;
    }
    else {
      uVar5 = 0x25;
    }
    *param_3 = 1;
  }
  return uVar5;
}

