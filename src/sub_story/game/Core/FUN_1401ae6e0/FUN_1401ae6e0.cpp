// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ae6e0  size: 131 bytes
// Name:    FUN_1401ae6e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401ae6e0(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if ((*(byte *)(param_1 + 0x29) & 8) == 0) {
    uVar6 = (**(code **)(*param_1 + 0x38))();
    plVar5 = _DAT_14a9b3f48;
    if ((int)uVar6 == 1) {
      if (*(int *)((longlong)param_1 + 0x13c) != 0) {
        lVar3 = param_1[0x28];
        uVar6 = 0;
        lVar4 = *_DAT_14a9b3f48;
        do {
          uVar7 = (ulonglong)((*(uint *)(lVar3 + uVar6 * 4) & 0x1ffff) * (int)plVar5[1]);
          uVar2 = *(uint *)(lVar4 + 0x80 + uVar7);
          puVar1 = (uint *)(lVar4 + 0x8c + uVar7);
          *puVar1 = *puVar1 | 1;
          if (uVar2 != 1) {
            return (ulonglong)uVar2;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)((longlong)param_1 + 0x13c));
      }
      uVar6 = 1;
    }
  }
  else {
    uVar6 = 0x27;
  }
  return uVar6;
}

