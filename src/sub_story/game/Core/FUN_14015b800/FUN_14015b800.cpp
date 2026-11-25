// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015b800  size: 192 bytes
// Name:    FUN_14015b800
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015b800(longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint *puVar7;
  longlong lVar8;
  bool bVar9;
  longlong lStack_20;
  
  FUN_140004b40(0x1499ab378);
  if (param_1 == 0) {
    uVar3 = 0x1ffff;
  }
  else {
    uVar3 = (uint)((ulonglong)(param_1 - *_DAT_14abbe2e8) / (ulonglong)*(uint *)(_DAT_14abbe2e8 + 1)
                  ) & 0x1ffff;
    uVar3 = *(uint *)(_DAT_14abbe2e8[5] + (ulonglong)uVar3 * 4) & 0xfffe0000 | uVar3;
  }
  lVar4 = (longlong)(int)_DAT_1499ab780;
  if (0 < lVar4) {
    puVar7 = (uint *)0x1499ab398;
    lVar8 = lVar4 * 4;
    do {
      if (*puVar7 == uVar3) {
        if ((puVar7 != (uint *)(lVar4 * 4 + 0x1499ab398)) &&
           ((int)(~(ulonglong)(puVar7 + -0x5266ace6) >> 2) != 0)) {
          _DAT_1499ab780 = _DAT_1499ab780 - 1;
          *(undefined4 *)((longlong)(int)((ulonglong)(puVar7 + -0x5266ace6) >> 2) * 4 + 0x1499ab398)
               = *(undefined4 *)((ulonglong)_DAT_1499ab780 * 4 + 0x1499ab398);
        }
        break;
      }
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -4;
    } while (lVar8 != 0);
  }
  iRam00000001499ab388 = iRam00000001499ab388 + -1;
  uVar6 = uRam00000001499ab378;
  if (iRam00000001499ab388 == 0) {
    do {
      uVar5 = uVar6;
      LOCK();
      uVar6 = uVar5;
      uVar1 = (ulonglong)((int)uVar5 - 1) | 0xffffffff00000000;
      if (uVar5 != uRam00000001499ab378) {
        uVar6 = uRam00000001499ab378;
        uVar1 = uRam00000001499ab378;
      }
      uRam00000001499ab378 = uVar1;
      UNLOCK();
    } while (uVar5 != uVar6);
    if ((uVar5 & 0xfffffffe) != 0) {
      lStack_20 = lRam00000001499ab380;
      iRam00000001499ab388 = 0;
      do {
        while (lStack_20 < 0) {
          cVar2 = FUN_1400062d0(0x1499ab380,1,&lStack_20);
          if (cVar2 != '\0') {
            return;
          }
        }
        LOCK();
        lVar4 = lStack_20;
        lVar8 = lStack_20 + 0x100000000;
        if (lStack_20 != lRam00000001499ab380) {
          lVar4 = lRam00000001499ab380;
          lVar8 = lRam00000001499ab380;
        }
        lRam00000001499ab380 = lVar8;
        UNLOCK();
        bVar9 = lStack_20 != lVar4;
        lStack_20 = lVar4;
      } while (bVar9);
      return;
    }
  }
  return;
}

