// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140161b40  size: 178 bytes
// Name:    FUN_140161b40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e98dd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140161b40(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (((0x11 < *(int *)(param_1 + 4)) &&
      (plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x88), plVar2 != (longlong *)0x0)) &&
     (lVar6 = plVar2[2], lVar6 != 0)) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_2 - *_DAT_1499aae70;
    auVar3 = auVar3 / ZEXT416(*(uint *)(_DAT_1499aae70 + 1));
    uVar5 = auVar3._0_8_;
    if ((short)plVar2[1] != 0) {
      uVar7 = 0;
      do {
        func_0x00014558bf40(*(undefined8 *)(*plVar2 + uVar7 * 8),uVar5 & 0xffffffff);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ushort *)(plVar2 + 1));
      lVar6 = plVar2[2];
      if (lVar6 == 0) {
        return;
      }
    }
    uVar7 = (ulonglong)((uint)(uVar5 >> 3) & 0x1ffc);
    LOCK();
    puVar1 = (uint *)(*(longlong *)(lVar6 + 0x10) + uVar7);
    *puVar1 = *puVar1 | 1 << (auVar3._0_4_ & 0x1f);
    UNLOCK();
    FUN_144e98dd0(lVar6,uVar5 & 0xffffffff,2);
    bVar4 = auVar3[0] & 0x1f;
    LOCK();
    puVar1 = (uint *)(*(longlong *)(lVar6 + 0x10) + uVar7);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    UNLOCK();
  }
  return;
}

