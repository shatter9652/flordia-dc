// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012d660  size: 249 bytes
// Name:    FUN_14012d660
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140189080, FUN_14012e520
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14012d660(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  lVar2 = *(longlong *)(param_1 + 0x58);
  if (lVar2 != 0) {
    if (*(char *)(param_1 + 0x60) == '\x01') {
      FUN_14012e520(lVar2);
      plVar4 = _DAT_14763acc8;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = lVar2 - *_DAT_14763acc8;
      uVar7 = SUB164(auVar3 / ZEXT416(*(uint *)(_DAT_14763acc8 + 1)),0);
      uVar8 = *(uint *)(_DAT_14763acc8[5] +
                       (SUB168(auVar3 / ZEXT416(*(uint *)(_DAT_14763acc8 + 1)),0) & 0xffffffff) * 4)
              & 0xfffe0000 | uVar7;
      uVar7 = uVar7 & 0x1ffff | 0x20000;
      if (uVar8 < 0xfffe0000) {
        uVar7 = uVar8 + 0x20000;
      }
      puVar1 = (ulonglong *)(_DAT_14763acc8 + 4);
      LOCK();
      *(int *)(_DAT_14763acc8 + 2) = (int)_DAT_14763acc8[2] + -1;
      UNLOCK();
      uVar5 = *puVar1;
      do {
        *(uint *)(plVar4[5] + (ulonglong)(uVar7 & 0x1ffff) * 4) =
             (uint)uVar5 & 0x1ffff | uVar7 & 0xfffe0000;
        LOCK();
        uVar6 = plVar4[4];
        bVar9 = uVar5 == uVar6;
        if (bVar9) {
          plVar4[4] = (uVar5 & 0xffffffff00000000 | (ulonglong)(uVar7 & 0x1ffff)) + 0x100000000;
          uVar6 = uVar5;
        }
        UNLOCK();
        uVar5 = uVar6;
      } while (!bVar9);
      if (plVar4[3] != 0) {
        FUN_140189080(plVar4,lVar2);
      }
      *(undefined1 *)(param_1 + 0x60) = 0;
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  return;
}

