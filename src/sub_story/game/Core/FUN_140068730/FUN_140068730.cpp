// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140068730  size: 204 bytes
// Name:    FUN_140068730
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f02e30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140068730(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar3 = _DAT_14abb6918;
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c98), 0 < (longlong)iVar1)) {
    lVar7 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 0x14d8 + lVar7);
      if (uVar2 != 0x1ffff) {
        uVar5 = *(uint *)(plVar3[5] + (ulonglong)(uVar2 & 0x1ffff) * 4);
        if ((((~uVar5 & *(uint *)(plVar3 + 6)) == 0) &&
            (uVar5 = uVar5 & 0x7fe0000, uVar5 == (uVar2 & 0xfffe0000))) && (*plVar3 != 0)) {
          lVar6 = *plVar3 + (ulonglong)((uVar2 & 0x1ffff) * (int)plVar3[1]);
          lVar4 = func_0x000144f02de0(*(undefined4 *)(lVar6 + 0x9c),uVar5,0);
          if (((lVar4 != 0) && (lVar4 = FUN_144f02e30(lVar4,0), lVar4 != 0)) &&
             (lVar4 = func_0x000144f3a220(*(undefined4 *)(lVar4 + 0xe80)), lVar4 == lVar6)) {
            return lVar6;
          }
        }
      }
      lVar7 = lVar7 + 0x28;
    } while ((longlong)iVar1 * 0x28 != lVar7);
  }
  return 0;
}

