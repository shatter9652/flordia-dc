// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140007980  size: 427 bytes
// Name:    FUN_140007980
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140007980, FUN_140189080
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140007980(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  short *psVar3;
  short sVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong *plVar9;
  ushort uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  
  uVar11 = (*(byte *)(param_1 + 0x24) & 3) << 0x10 | (uint)*(ushort *)(param_1 + 0x20);
  if ((uVar11 != 0) && (_DAT_1498cc2d8 != 0)) {
    lVar2 = _DAT_1498cc2d8 + -0x30 + (ulonglong)uVar11 * 0x30;
    FUN_140007980(lVar2);
    plVar9 = _DAT_1498cc210;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = lVar2 - *_DAT_1498cc210;
    auVar7 = auVar7 / ZEXT416(*(uint *)(_DAT_1498cc210 + 1));
    LOCK();
    pbVar1 = (byte *)(_DAT_1498cc210[5] + (auVar7._0_8_ >> 3 & 0x1fffffff));
    *pbVar1 = *pbVar1 & ~(byte)(1 << (auVar7[0] & 7));
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 2) = (int)plVar9[2] + -1;
    UNLOCK();
    uVar13 = plVar9[4];
    do {
      *(int *)(*plVar9 + (ulonglong)(uint)((int)plVar9[1] * auVar7._0_4_)) = (int)uVar13;
      LOCK();
      uVar14 = plVar9[4];
      bVar15 = uVar13 == uVar14;
      if (bVar15) {
        plVar9[4] = (uVar13 & 0xffffffff00000000) + 0x100000000 | auVar7._0_8_ & 0xffffffff;
        uVar14 = uVar13;
      }
      UNLOCK();
      uVar13 = uVar14;
    } while (!bVar15);
    if (plVar9[3] != 0) {
      FUN_140189080();
    }
  }
  uVar11 = (*(uint *)(param_1 + 0x24) & 0xc) << 0xe | (uint)*(ushort *)(param_1 + 0x22);
  if ((uVar11 != 0) && (_DAT_1498cc2d8 != 0)) {
    lVar2 = _DAT_1498cc2d8 + -0x30 + (ulonglong)uVar11 * 0x30;
    FUN_140007980(lVar2);
    plVar9 = _DAT_1498cc210;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = lVar2 - *_DAT_1498cc210;
    auVar8 = auVar8 / ZEXT416(*(uint *)(_DAT_1498cc210 + 1));
    LOCK();
    pbVar1 = (byte *)(_DAT_1498cc210[5] + (auVar8._0_8_ >> 3 & 0x1fffffff));
    *pbVar1 = *pbVar1 & ~(byte)(1 << (auVar8[0] & 7));
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 2) = (int)plVar9[2] + -1;
    UNLOCK();
    uVar13 = plVar9[4];
    do {
      *(int *)(*plVar9 + (ulonglong)(uint)((int)plVar9[1] * auVar8._0_4_)) = (int)uVar13;
      LOCK();
      uVar14 = plVar9[4];
      bVar15 = uVar13 == uVar14;
      if (bVar15) {
        plVar9[4] = (uVar13 & 0xffffffff00000000) + 0x100000000 | auVar8._0_8_ & 0xffffffff;
        uVar14 = uVar13;
      }
      UNLOCK();
      uVar13 = uVar14;
    } while (!bVar15);
    if (plVar9[3] != 0) {
      uVar13 = (ulonglong)(lVar2 - *plVar9) >> 0x10;
      uVar14 = ((ulonglong)*(uint *)(plVar9 + 1) - 1) + (lVar2 - *plVar9) >> 0x10;
      if (uVar13 <= uVar14) {
        do {
          LOCK();
          psVar3 = (short *)(plVar9[3] + 2 + uVar13 * 2);
          sVar4 = *psVar3;
          *psVar3 = *psVar3 + -1;
          UNLOCK();
          if (sVar4 == 0x101) {
            FUN_140004b40(0x1471b63b8);
            puVar6 = (ushort *)plVar9[3];
            uVar10 = *puVar6;
            do {
              LOCK();
              uVar5 = *puVar6;
              bVar15 = uVar10 == uVar5;
              if (bVar15) {
                *puVar6 = uVar10 | 0x8000;
                uVar5 = uVar10;
              }
              uVar10 = uVar5;
              UNLOCK();
            } while (!bVar15);
            if (-1 < (short)uVar10) {
              uVar12 = (ulonglong)uRam00000001471b7420;
              uRam00000001471b7420 = uRam00000001471b7420 + 1;
              *(longlong **)(uVar12 * 8 + 0x1471b6420) = plVar9;
            }
            func_0x000144d9dab0(0x1471b63b8);
          }
          bVar15 = uVar13 != uVar14;
          uVar13 = uVar13 + 1;
        } while (bVar15);
      }
      return;
    }
  }
  return;
}

