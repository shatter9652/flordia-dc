// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140019720  size: 675 bytes
// Name:    FUN_140019720
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14004c030, FUN_140004b40, FUN_140189080
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140019720(ushort *param_1,longlong param_2)

{
  ushort *puVar1;
  byte *pbVar2;
  ushort uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  longlong *plVar7;
  char cVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  
  if (*(longlong *)(param_1 + 4) == param_2) {
    return;
  }
  puVar1 = param_1 + 4;
  FUN_140004b40(0x14abbf350);
  plVar7 = _DAT_14abbf370;
  if (*(longlong *)puVar1 != 0) {
    uVar3 = *param_1;
    uVar4 = *(uint *)(_DAT_14abbf370 + 1);
    lVar15 = _DAT_14abbf370[5];
    lVar11 = *_DAT_14abbf370;
    lVar16 = 0;
    if ((*(byte *)(lVar15 + (ulonglong)(uVar3 >> 3)) >> (uVar3 & 7) & 1) != 0) {
      lVar16 = (ulonglong)(uVar4 * uVar3) + lVar11;
    }
    uVar3 = *(ushort *)(lVar16 + 8);
    if (uVar3 == 0xffff) {
      uVar9 = *(ushort *)(lVar16 + 10);
      *(ushort *)(*(longlong *)puVar1 + 8) = uVar9;
    }
    else {
      uVar9 = *(ushort *)(lVar16 + 10);
      lVar17 = 0;
      if ((*(byte *)(lVar15 + (ulonglong)(uVar3 >> 3)) >> (uVar3 & 7) & 1) != 0) {
        lVar17 = (ulonglong)(uVar4 * uVar3) + lVar11;
      }
      *(ushort *)(lVar17 + 10) = uVar9;
    }
    if (uVar9 != 0xffff) {
      lVar17 = 0;
      if ((*(byte *)(lVar15 + (ulonglong)(uVar9 >> 3)) >> (uVar9 & 7) & 1) != 0) {
        lVar17 = (ulonglong)((uint)uVar9 * (int)plVar7[1]) + *plVar7;
      }
      *(ushort *)(lVar17 + 8) = uVar3;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = lVar16 - lVar11;
    auVar5 = auVar5 / ZEXT416(uVar4);
    LOCK();
    pbVar2 = (byte *)(lVar15 + (auVar5._0_8_ >> 3 & 0x1fffffff));
    *pbVar2 = *pbVar2 & ~(byte)(1 << (auVar5[0] & 7));
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 2) = (int)plVar7[2] + -1;
    UNLOCK();
    uVar13 = plVar7[4];
    do {
      *(int *)(*plVar7 + (ulonglong)(uint)((int)plVar7[1] * auVar5._0_4_)) = (int)uVar13;
      LOCK();
      uVar10 = plVar7[4];
      bVar18 = uVar13 == uVar10;
      if (bVar18) {
        plVar7[4] = (uVar13 & 0xffffffff00000000) + (auVar5._0_8_ & 0xffffffff) + 0x100000000;
        uVar10 = uVar13;
      }
      UNLOCK();
      uVar13 = uVar10;
    } while (!bVar18);
    if (plVar7[3] != 0) {
      FUN_140189080(plVar7,lVar16);
    }
  }
  *(longlong *)puVar1 = param_2;
  plVar7 = _DAT_14abbf370;
  if (param_2 != 0) {
    uVar13 = _DAT_14abbf370[4];
    do {
      uVar10 = uVar13;
      iVar14 = (int)uVar10;
      if (iVar14 == -2) goto LAB_1400199b5;
      LOCK();
      uVar13 = plVar7[4];
      bVar18 = uVar10 == uVar13;
      if (bVar18) {
        plVar7[4] = (ulonglong)*(uint *)(*plVar7 + (ulonglong)(uint)((int)plVar7[1] * iVar14)) |
                    uVar10 & 0xffffffff00000000;
        uVar13 = uVar10;
      }
      UNLOCK();
    } while (!bVar18);
    LOCK();
    *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
    UNLOCK();
    LOCK();
    pbVar2 = (byte *)(plVar7[5] + (uVar10 >> 3 & 0x1fffffff));
    *pbVar2 = *pbVar2 | (byte)(1 << ((byte)uVar10 & 7));
    UNLOCK();
    if (*plVar7 == 0) {
LAB_1400199b5:
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar15 = *plVar7 + (ulonglong)(uint)((int)plVar7[1] * iVar14);
    if (plVar7[3] != 0) {
      FUN_14004c030(plVar7,lVar15);
    }
    func_0x0001450cb0c0(lVar15,puVar1,*(undefined2 *)(param_2 + 8));
    uVar3 = *(ushort *)(param_2 + 8);
    uVar9 = (ushort)((ulonglong)(lVar15 - *_DAT_14abbf370) /
                    (ulonglong)*(uint *)(_DAT_14abbf370 + 1));
    if (uVar3 != 0xffff) {
      lVar15 = 0;
      if ((*(byte *)(_DAT_14abbf370[5] + (ulonglong)(uVar3 >> 3)) >> (uVar3 & 7) & 1) != 0) {
        lVar15 = *_DAT_14abbf370 + (ulonglong)(*(uint *)(_DAT_14abbf370 + 1) * (uint)uVar3);
      }
      *(ushort *)(lVar15 + 8) = uVar9;
    }
    *(ushort *)(param_2 + 8) = uVar9;
    *param_1 = uVar9;
  }
  iRam000000014abbf360 = iRam000000014abbf360 + -1;
  uVar13 = uRam000000014abbf350;
  if (iRam000000014abbf360 == 0) {
    do {
      uVar12 = uVar13;
      LOCK();
      uVar13 = uVar12;
      uVar10 = (ulonglong)((int)uVar12 - 1) | 0xffffffff00000000;
      if (uVar12 != uRam000000014abbf350) {
        uVar13 = uRam000000014abbf350;
        uVar10 = uRam000000014abbf350;
      }
      uRam000000014abbf350 = uVar10;
      UNLOCK();
    } while (uVar12 != uVar13);
    if ((uVar12 & 0xfffffffe) != 0) {
      iRam000000014abbf360 = 0;
      lVar15 = lRam000000014abbf358;
      do {
        while (lVar15 < 0) {
          cVar8 = FUN_1400062d0(0x14abbf358,1,&stack0xffffffffffffffe0);
          if (cVar8 != '\0') {
            return;
          }
        }
        LOCK();
        lVar11 = lVar15;
        lVar16 = lVar15 + 0x100000000;
        if (lVar15 != lRam000000014abbf358) {
          lVar11 = lRam000000014abbf358;
          lVar16 = lRam000000014abbf358;
        }
        lRam000000014abbf358 = lVar16;
        UNLOCK();
        bVar18 = lVar15 != lVar11;
        lVar15 = lVar11;
      } while (bVar18);
      return;
    }
  }
  return;
}

