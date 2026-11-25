// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b0050  size: 229 bytes
// Name:    FUN_1400b0050
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x0001400b0101: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001400b0106) */
/* WARNING: Removing unreachable block (ram,0x0001400b010b) */
/* WARNING: Removing unreachable block (ram,0x0001400b0114) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400b0050(uint *param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  if (param_1[2] == 2) {
    lVar3 = func_0x0001400aea70(param_1[1],param_1[3]);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)func_0x00014003b530(0x14abcc4b8,*(undefined4 *)(lVar3 + 0x58));
      uVar1 = *(ushort *)(*(longlong *)*puVar4 + 0x18);
      if (uVar1 != 0) {
        uVar7 = 0;
        plVar5 = (longlong *)(*(longlong *)(*(longlong *)*puVar4 + 0x10) + 8);
        do {
          if (*plVar5 == param_2) {
            if (param_3 == 0) {
              uVar8 = (uint)uVar7;
            }
            else {
              uVar8 = 0;
            }
            if ((uVar8 < *(uint *)(lVar3 + 0x2c)) &&
               (uVar8 = *(uint *)(*(longlong *)(lVar3 + 0x30) + (ulonglong)uVar8 * 4),
               uVar8 != 0x1ffff)) {
              uVar6 = *(uint *)(_DAT_14abbe2e8[5] + (ulonglong)(uVar8 & 0x1ffff) * 4);
              if (((~uVar6 & *(uint *)(_DAT_14abbe2e8 + 6)) == 0) &&
                 (((uVar6 & 0x7fe0000) == (uVar8 & 0xfffe0000) && (*_DAT_14abbe2e8 != 0)))) {
                return *_DAT_14abbe2e8 + (ulonglong)((uVar8 & 0x1ffff) * (int)_DAT_14abbe2e8[1]);
              }
            }
            return 0;
          }
          uVar7 = uVar7 + 1;
          plVar5 = plVar5 + 0x12;
        } while (uVar1 != uVar7);
      }
    }
  }
  else if (param_1[2] == 1) {
    uVar8 = *param_1;
    uVar6 = uVar8 & 0x1ffff;
    if ((uVar6 != 0x1ffff) &&
       (plVar5 = *(longlong **)((ulonglong)(uVar8 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar5 != (longlong *)0x0)) {
      uVar2 = *(uint *)(plVar5[5] + (ulonglong)uVar6 * 4);
      lVar3 = 0;
      if (uVar8 >> 0x16 == (uVar2 >> 0x11 & 0x3ff) &&
          (uVar2 & *(uint *)(plVar5 + 6)) == *(uint *)(plVar5 + 6)) {
        lVar3 = (ulonglong)(uVar6 * (int)plVar5[1]) + *plVar5;
      }
      return lVar3;
    }
    return 0;
  }
  return 0;
}

