// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140159490  size: 47 bytes
// Name:    FUN_140159490
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ee7210, FUN_144e70cc0, FUN_144ee71a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140159490(undefined4 param_1)

{
  ulonglong *puVar1;
  short *psVar2;
  short sVar3;
  ushort uVar4;
  ushort *puVar5;
  undefined1 auVar6 [16];
  longlong *plVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  
  FUN_144e70cc0();
  FUN_144ee7210();
  iVar9 = FUN_144ee71a0(param_1);
  if (iVar9 < 0) {
    return;
  }
  uVar10 = func_0x000144e50630(param_1);
  if (((~*(uint *)(plRam000000014800a290[5] + (ulonglong)uVar10 * 4) &
       *(uint *)(plRam000000014800a290 + 6)) == 0) && (*plRam000000014800a290 != 0)) {
    lVar12 = *plRam000000014800a290 + (ulonglong)(uVar10 * (int)plRam000000014800a290[1]);
    if (*(longlong *)(lVar12 + 0xf50) != 0) {
      FUN_1452e2b10();
    }
    *(undefined8 *)(lVar12 + 0xf50) = 0;
    if (*(longlong *)(lVar12 + 0xf40) != 0) {
      FUN_1450cb0e0();
    }
    *(undefined8 *)(lVar12 + 0xf40) = 0;
    plVar7 = plRam000000014800a290;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = lVar12 - *plRam000000014800a290;
    uVar10 = SUB164(auVar6 / ZEXT416(*(uint *)(plRam000000014800a290 + 1)),0);
    puVar1 = (ulonglong *)(plRam000000014800a290 + 4);
    uVar14 = (*(uint *)(plRam000000014800a290[5] +
                       (SUB168(auVar6 / ZEXT416(*(uint *)(plRam000000014800a290 + 1)),0) &
                       0xffffffff) * 4) & 0x7f000000 | uVar10) + 0x1000000;
    uVar10 = uVar10 & 0xffffff | 0x1000000;
    if ((uVar14 & 0x7f000000) != 0) {
      uVar10 = uVar14;
    }
    LOCK();
    *(int *)(plRam000000014800a290 + 2) = (int)plRam000000014800a290[2] + -1;
    UNLOCK();
    uVar13 = *puVar1;
    do {
      *(uint *)(plVar7[5] + (ulonglong)(uVar10 & 0xffffff) * 4) =
           (uint)uVar13 & 0xffffff | uVar10 & 0x7f000000;
      LOCK();
      uVar15 = plVar7[4];
      bVar16 = uVar13 == uVar15;
      if (bVar16) {
        plVar7[4] = (uVar13 & 0xffffffff00000000 | (ulonglong)(uVar10 & 0xffffff)) + 0x100000000;
        uVar15 = uVar13;
      }
      UNLOCK();
      uVar13 = uVar15;
    } while (!bVar16);
    if (plVar7[3] != 0) {
      uVar13 = (ulonglong)(lVar12 - *plVar7) >> 0x10;
      uVar15 = ((ulonglong)*(uint *)(plVar7 + 1) - 1) + (lVar12 - *plVar7) >> 0x10;
      if (uVar13 <= uVar15) {
        do {
          LOCK();
          psVar2 = (short *)(plVar7[3] + 2 + uVar13 * 2);
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
              bVar16 = uVar8 == uVar4;
              if (bVar16) {
                *puVar5 = uVar8 | 0x8000;
                uVar4 = uVar8;
              }
              uVar8 = uVar4;
              UNLOCK();
            } while (!bVar16);
            if (-1 < (short)uVar8) {
              uVar11 = (ulonglong)uRam00000001471b7420;
              uRam00000001471b7420 = uRam00000001471b7420 + 1;
              *(longlong **)(uVar11 * 8 + 0x1471b6420) = plVar7;
            }
            func_0x000144d9dab0(0x1471b63b8);
          }
          bVar16 = uVar13 != uVar15;
          uVar13 = uVar13 + 1;
        } while (bVar16);
      }
      return;
    }
  }
  return;
}

