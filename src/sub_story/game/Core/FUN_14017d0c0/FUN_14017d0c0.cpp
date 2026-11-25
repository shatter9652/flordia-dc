// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017d0c0  size: 209 bytes
// Name:    FUN_14017d0c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14017d1a0, FUN_140189080
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14017d0c0(longlong param_1,int param_2)

{
  ulonglong *puVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  FUN_14017d1a0();
  plVar3 = _DAT_148012788;
  if (param_2 != 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_1 - *_DAT_148012788;
    uVar6 = SUB164(auVar2 / ZEXT416(*(uint *)(_DAT_148012788 + 1)),0);
    uVar7 = *(uint *)(_DAT_148012788[5] +
                     (SUB168(auVar2 / ZEXT416(*(uint *)(_DAT_148012788 + 1)),0) & 0xffffffff) * 4) &
            0xfffe0000 | uVar6;
    uVar6 = uVar6 & 0x1ffff | 0x20000;
    if (uVar7 < 0xfffe0000) {
      uVar6 = uVar7 + 0x20000;
    }
    puVar1 = (ulonglong *)(_DAT_148012788 + 4);
    LOCK();
    *(int *)(_DAT_148012788 + 2) = (int)_DAT_148012788[2] + -1;
    UNLOCK();
    uVar4 = *puVar1;
    do {
      *(uint *)(plVar3[5] + (ulonglong)(uVar6 & 0x1ffff) * 4) =
           (uint)uVar4 & 0x1ffff | uVar6 & 0xfffe0000;
      LOCK();
      uVar5 = plVar3[4];
      bVar8 = uVar4 == uVar5;
      if (bVar8) {
        plVar3[4] = (uVar4 & 0xffffffff00000000 | (ulonglong)(uVar6 & 0x1ffff)) + 0x100000000;
        uVar5 = uVar4;
      }
      UNLOCK();
      uVar4 = uVar5;
    } while (!bVar8);
    if (plVar3[3] != 0) {
      FUN_140189080(plVar3,param_1);
    }
  }
  return param_1;
}

