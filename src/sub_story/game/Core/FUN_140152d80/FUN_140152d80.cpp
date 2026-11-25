// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140152d80  size: 289 bytes
// Name:    FUN_140152d80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140152eb0, FUN_140189080
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140152d80(longlong param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  bool bVar11;
  
  plVar10 = *(longlong **)(param_1 + 8);
  if (*(ushort *)(param_1 + 0x10) != 0) {
    plVar2 = plVar10 + *(ushort *)(param_1 + 0x10);
    do {
      lVar3 = *plVar10;
      if ((*(byte *)(lVar3 + 0x1c) & 2) != 0) {
        FUN_140152eb0(lVar3);
      }
      plVar5 = _DAT_149e8e208;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = lVar3 - *_DAT_149e8e208;
      uVar9 = SUB164(auVar4 / ZEXT416(*(uint *)(_DAT_149e8e208 + 1)),0);
      uVar6 = (*(uint *)(_DAT_149e8e208[5] +
                        (SUB168(auVar4 / ZEXT416(*(uint *)(_DAT_149e8e208 + 1)),0) & 0xffffffff) * 4
                        ) & 0x7fe0000 | uVar9) + 0x20000;
      uVar9 = uVar9 & 0x1ffff | 0x20000;
      if ((uVar6 & 0x7fe0000) != 0) {
        uVar9 = uVar6;
      }
      puVar1 = (ulonglong *)(_DAT_149e8e208 + 4);
      LOCK();
      *(int *)(_DAT_149e8e208 + 2) = (int)_DAT_149e8e208[2] + -1;
      UNLOCK();
      uVar7 = *puVar1;
      do {
        *(uint *)(plVar5[5] + (ulonglong)(uVar9 & 0x1ffff) * 4) =
             (uint)uVar7 & 0x1ffff | uVar9 & 0x7fe0000;
        LOCK();
        uVar8 = plVar5[4];
        bVar11 = uVar7 == uVar8;
        if (bVar11) {
          plVar5[4] = (uVar7 & 0xffffffff00000000 | (ulonglong)(uVar9 & 0x1ffff)) + 0x100000000;
          uVar8 = uVar7;
        }
        UNLOCK();
        uVar7 = uVar8;
      } while (!bVar11);
      if (plVar5[3] != 0) {
        FUN_140189080();
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar2);
    plVar10 = *(longlong **)(param_1 + 8);
  }
  if (plVar10 != (longlong *)0x0) {
    func_0x000144d9c130(plVar10);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

