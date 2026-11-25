// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140008e80  size: 391 bytes
// Name:    FUN_140008e80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1441cb550, FUN_1441cb520, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140008e80(longlong param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  longlong lVar13;
  
  puVar7 = (ulonglong *)(param_1 + 8);
  FUN_140004b40();
  lVar13 = *(longlong *)(param_1 + 0x2f8);
  uVar9 = *(uint *)(param_1 + 0x2f0) << 4;
  if (uVar9 == 0) {
    uVar3 = 0;
  }
  else {
    uVar8 = 0;
    do {
      uVar3 = uVar8;
      if (!SBORROW1('\0',*(char *)((ulonglong)(uVar8 & 0xf) +
                                  (ulonglong)(uVar8 >> 4) * 0x790 + lVar13))) break;
      uVar8 = uVar8 + 1;
      uVar3 = uVar9;
    } while (uVar9 != uVar8);
  }
  lVar11 = (ulonglong)(*(uint *)(param_1 + 0x2f0) & 0xfffffff) * 0x790;
  uVar6 = (ulonglong)((uVar3 & 0xf) * 0x78);
  lVar4 = (ulonglong)(uVar3 >> 4) * 0x790;
  if (lVar4 + uVar6 != lVar11) {
    lVar11 = lVar11 + 0x10;
    lVar4 = lVar4 + 0x10 + uVar6;
    if (param_2 == '\0') {
      do {
        FUN_1441cb520(param_1,lVar4 + lVar13 + 8);
        uVar8 = uVar3;
        while (uVar3 = uVar9, uVar8 != uVar9) {
          while (uVar3 = uVar8 + 1, uVar8 = uVar3, uVar3 < uVar9) {
            if (!SBORROW1('\0',*(char *)((ulonglong)(uVar3 & 0xf) +
                                        (ulonglong)(uVar3 >> 4) * 0x790 + lVar13)))
            goto LAB_140008fcd;
          }
        }
LAB_140008fcd:
        lVar4 = (ulonglong)(uVar3 >> 4) * 0x790 + 0x10 + (ulonglong)((uVar3 & 0xf) * 0x78);
      } while (lVar4 != lVar11);
    }
    else {
      do {
        lVar4 = lVar4 + lVar13 + 8;
        FUN_1441cb520(param_1,lVar4);
        FUN_1441cb550(lVar4);
        uVar8 = uVar3;
        while (uVar3 = uVar9, uVar8 != uVar9) {
          while (uVar3 = uVar8 + 1, uVar8 = uVar3, uVar3 < uVar9) {
            if (!SBORROW1('\0',*(char *)((ulonglong)(uVar3 & 0xf) +
                                        (ulonglong)(uVar3 >> 4) * 0x790 + lVar13)))
            goto LAB_140008f6a;
          }
        }
LAB_140008f6a:
        lVar4 = (ulonglong)(uVar3 >> 4) * 0x790 + 0x10 + (ulonglong)((uVar3 & 0xf) * 0x78);
      } while (lVar4 != lVar11);
    }
  }
  piVar1 = (int *)(param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  uVar6 = *puVar7;
  if (*piVar1 == 0) {
    do {
      uVar5 = uVar6;
      LOCK();
      uVar6 = *puVar7;
      if (uVar5 == uVar6) {
        *puVar7 = (ulonglong)((int)uVar5 - 1) | 0xffffffff00000000;
        uVar6 = uVar5;
      }
      UNLOCK();
    } while (uVar5 != uVar6);
    if ((uVar5 & 0xfffffffe) != 0) {
      plVar10 = (longlong *)(param_1 + 0x10);
      lVar13 = *(longlong *)(param_1 + 0x10);
      do {
        while (lVar13 < 0) {
          cVar2 = FUN_1400062d0(plVar10,1,&stack0xffffffffffffffe0);
          if (cVar2 != '\0') {
            return;
          }
        }
        LOCK();
        lVar4 = *plVar10;
        if (lVar13 == lVar4) {
          *plVar10 = lVar13 + 0x100000000;
          lVar4 = lVar13;
        }
        UNLOCK();
        bVar12 = lVar13 != lVar4;
        lVar13 = lVar4;
      } while (bVar12);
      return;
    }
  }
  return;
}

