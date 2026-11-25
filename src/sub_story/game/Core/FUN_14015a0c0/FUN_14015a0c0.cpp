// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015a0c0  size: 336 bytes
// Name:    FUN_14015a0c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452e2b10, FUN_1450cb0e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015a0c0(void)

{
  ulonglong *puVar1;
  short *psVar2;
  short sVar3;
  ushort uVar4;
  ushort *puVar5;
  undefined1 auVar6 [16];
  longlong *plVar7;
  ushort uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  bool bVar15;
  
  uVar9 = func_0x000144e50630();
  if (((~*(uint *)(_DAT_14800a290[5] + (ulonglong)uVar9 * 4) & *(uint *)(_DAT_14800a290 + 6)) == 0)
     && (*_DAT_14800a290 != 0)) {
    lVar11 = *_DAT_14800a290 + (ulonglong)(uVar9 * (int)_DAT_14800a290[1]);
    if (*(longlong *)(lVar11 + 0xf50) != 0) {
      FUN_1452e2b10();
    }
    *(undefined8 *)(lVar11 + 0xf50) = 0;
    if (*(longlong *)(lVar11 + 0xf40) != 0) {
      FUN_1450cb0e0();
    }
    *(undefined8 *)(lVar11 + 0xf40) = 0;
    plVar7 = _DAT_14800a290;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = lVar11 - *_DAT_14800a290;
    uVar9 = SUB164(auVar6 / ZEXT416(*(uint *)(_DAT_14800a290 + 1)),0);
    puVar1 = (ulonglong *)(_DAT_14800a290 + 4);
    uVar13 = (*(uint *)(_DAT_14800a290[5] +
                       (SUB168(auVar6 / ZEXT416(*(uint *)(_DAT_14800a290 + 1)),0) & 0xffffffff) * 4)
              & 0x7f000000 | uVar9) + 0x1000000;
    uVar9 = uVar9 & 0xffffff | 0x1000000;
    if ((uVar13 & 0x7f000000) != 0) {
      uVar9 = uVar13;
    }
    LOCK();
    *(int *)(_DAT_14800a290 + 2) = (int)_DAT_14800a290[2] + -1;
    UNLOCK();
    uVar12 = *puVar1;
    do {
      *(uint *)(plVar7[5] + (ulonglong)(uVar9 & 0xffffff) * 4) =
           (uint)uVar12 & 0xffffff | uVar9 & 0x7f000000;
      LOCK();
      uVar14 = plVar7[4];
      bVar15 = uVar12 == uVar14;
      if (bVar15) {
        plVar7[4] = (uVar12 & 0xffffffff00000000 | (ulonglong)(uVar9 & 0xffffff)) + 0x100000000;
        uVar14 = uVar12;
      }
      UNLOCK();
      uVar12 = uVar14;
    } while (!bVar15);
    if (plVar7[3] != 0) {
      uVar12 = (ulonglong)(lVar11 - *plVar7) >> 0x10;
      uVar14 = ((ulonglong)*(uint *)(plVar7 + 1) - 1) + (lVar11 - *plVar7) >> 0x10;
      if (uVar12 <= uVar14) {
        do {
          LOCK();
          psVar2 = (short *)(plVar7[3] + 2 + uVar12 * 2);
          sVar3 = *psVar2;
          *psVar2 = *psVar2 + -1;
          UNLOCK();
          if (sVar3 == 0x101) {
            FUN_140004b40(0x1471b63b8);
            puVar5 = (ushort *)plVar7[3];
            uVar8 = *puVar5;
            do {
              LOCK();
              uVar4 = *puVar5;
              bVar15 = uVar8 == uVar4;
              if (bVar15) {
                *puVar5 = uVar8 | 0x8000;
                uVar4 = uVar8;
              }
              uVar8 = uVar4;
              UNLOCK();
            } while (!bVar15);
            if (-1 < (short)uVar8) {
              uVar10 = (ulonglong)uRam00000001471b7420;
              uRam00000001471b7420 = uRam00000001471b7420 + 1;
              *(longlong **)(uVar10 * 8 + 0x1471b6420) = plVar7;
            }
            func_0x000144d9dab0(0x1471b63b8);
          }
          bVar15 = uVar12 != uVar14;
          uVar12 = uVar12 + 1;
        } while (bVar15);
      }
      return;
    }
  }
  return;
}

