// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015ff30  size: 306 bytes
// Name:    FUN_14015ff30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1412fbe70, FUN_140004b40, FUN_1401600c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14015ff30(uint *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  longlong lVar12;
  
  FUN_140004b40();
  lVar12 = *(longlong *)(param_1 + 2);
  uVar8 = *param_1 << 4;
  if (uVar8 == 0) {
    uVar4 = 0;
  }
  else {
    uVar9 = 0;
    do {
      uVar4 = uVar9;
      if (!SBORROW1('\0',*(char *)((ulonglong)(uVar9 & 0xf) +
                                  (ulonglong)(uVar9 >> 4) * 0x110 + lVar12))) break;
      uVar9 = uVar9 + 1;
      uVar4 = uVar8;
    } while (uVar8 != uVar9);
  }
  lVar10 = (ulonglong)(*param_1 & 0xfffffff) * 0x110;
  uVar7 = (ulonglong)((uVar4 & 0xf) << 4);
  lVar5 = (ulonglong)(uVar4 >> 4) * 0x110;
  if (lVar5 + uVar7 != lVar10) {
    lVar5 = lVar5 + 0x10 + uVar7;
    do {
      puVar1 = *(undefined8 **)(lVar12 + 8 + lVar5);
      uVar9 = uVar4;
      if (puVar1 != (undefined8 *)0x0) {
        if (puVar1[1] != 0) {
          FUN_1401600c0(puVar1);
        }
        (**(code **)*puVar1)(puVar1,1);
      }
      while (uVar4 = uVar8, uVar9 != uVar8) {
        while (uVar4 = uVar9 + 1, uVar9 = uVar4, uVar4 < uVar8) {
          if (!SBORROW1('\0',*(char *)((ulonglong)(uVar4 & 0xf) +
                                      (ulonglong)(uVar4 >> 4) * 0x110 + lVar12)))
          goto LAB_140160015;
        }
      }
LAB_140160015:
      lVar5 = (ulonglong)(uVar4 >> 4) * 0x110 + 0x10 + (ulonglong)((uVar4 & 0xf) << 4);
    } while (lVar5 != lVar10 + 0x10);
  }
  FUN_1412fbe70(param_1);
  iRam0000000147ed05b8 = iRam0000000147ed05b8 + -1;
  uVar7 = uRam0000000147ed05a8;
  if (iRam0000000147ed05b8 == 0) {
    do {
      uVar6 = uVar7;
      LOCK();
      uVar7 = uVar6;
      uVar2 = (ulonglong)((int)uVar6 - 1) | 0xffffffff00000000;
      if (uVar6 != uRam0000000147ed05a8) {
        uVar7 = uRam0000000147ed05a8;
        uVar2 = uRam0000000147ed05a8;
      }
      uRam0000000147ed05a8 = uVar2;
      UNLOCK();
    } while (uVar6 != uVar7);
    if ((uVar6 & 0xfffffffe) != 0) {
      iRam0000000147ed05b8 = 0;
      lVar12 = lRam0000000147ed05b0;
      do {
        while (lVar12 < 0) {
          cVar3 = FUN_1400062d0(0x147ed05b0,1,&stack0xffffffffffffffe0);
          if (cVar3 != '\0') {
            return;
          }
        }
        LOCK();
        lVar5 = lVar12;
        lVar10 = lVar12 + 0x100000000;
        if (lVar12 != lRam0000000147ed05b0) {
          lVar5 = lRam0000000147ed05b0;
          lVar10 = lRam0000000147ed05b0;
        }
        lRam0000000147ed05b0 = lVar10;
        UNLOCK();
        bVar11 = lVar12 != lVar5;
        lVar12 = lVar5;
      } while (bVar11);
      return;
    }
  }
  return;
}

