// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b1750  size: 154 bytes
// Name:    FUN_1401b1750
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14202a4b0, FUN_141fb1be0, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401b1750(int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  bool bVar9;
  longlong lStack_20;
  
  FUN_140004b40(0x1499aaa48);
  if (((_DAT_148766388 != (longlong *)0x0) && (0 < (int)*(uint *)((longlong)_DAT_148766388 + 0xc)))
     && (lVar4 = *_DAT_148766388, lVar4 != 0)) {
    uVar8 = 0;
    do {
      if (((~*(uint *)(_DAT_148766388[5] + (ulonglong)(uVar8 & 0x1ffff) * 4) &
           *(uint *)(_DAT_148766388 + 6)) == 0) &&
         (uVar6 = (ulonglong)((uVar8 & 0x1ffff) * (int)_DAT_148766388[1]),
         *(int *)(lVar4 + 0x6c + uVar6) == param_1)) {
        puVar7 = (undefined8 *)(lVar4 + uVar6);
        FUN_141fb1be0(param_1);
        FUN_14202a4b0(puVar7);
        (**(code **)*puVar7)(puVar7,1);
        break;
      }
      uVar8 = uVar8 + 1;
    } while (*(uint *)((longlong)_DAT_148766388 + 0xc) != uVar8);
  }
  iRam00000001499aaa58 = iRam00000001499aaa58 + -1;
  uVar6 = uRam00000001499aaa48;
  if (iRam00000001499aaa58 == 0) {
    do {
      uVar5 = uVar6;
      LOCK();
      uVar6 = uVar5;
      uVar1 = (ulonglong)((int)uVar5 - 1) | 0xffffffff00000000;
      if (uVar5 != uRam00000001499aaa48) {
        uVar6 = uRam00000001499aaa48;
        uVar1 = uRam00000001499aaa48;
      }
      uRam00000001499aaa48 = uVar1;
      UNLOCK();
    } while (uVar5 != uVar6);
    if ((uVar5 & 0xfffffffe) != 0) {
      lStack_20 = lRam00000001499aaa50;
      iRam00000001499aaa58 = 0;
      do {
        while (lStack_20 < 0) {
          cVar3 = FUN_1400062d0(0x1499aaa50,1,&lStack_20);
          if (cVar3 != '\0') {
            return;
          }
        }
        LOCK();
        lVar4 = lStack_20;
        lVar2 = lStack_20 + 0x100000000;
        if (lStack_20 != lRam00000001499aaa50) {
          lVar4 = lRam00000001499aaa50;
          lVar2 = lRam00000001499aaa50;
        }
        lRam00000001499aaa50 = lVar2;
        UNLOCK();
        bVar9 = lStack_20 != lVar4;
        lStack_20 = lVar4;
      } while (bVar9);
      return;
    }
  }
  return;
}

