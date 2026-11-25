// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a0c20  size: 146 bytes
// Name:    FUN_1401a0c20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140113b30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a0c20(longlong *param_1)

{
  byte *pbVar1;
  ushort uVar2;
  undefined4 uVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  undefined2 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  
  if ((param_1[0xb4] == 0) && (uVar2 = *(ushort *)(param_1 + 1), (ulonglong)uVar2 != 0)) {
    lVar13 = *param_1;
    param_1 = param_1 + 0xb4;
    uVar14 = 0;
    do {
      lVar9 = **(longlong **)(lVar13 + uVar14 * 8);
      if (lVar9 != 0) {
        uVar3 = *(undefined4 *)(lVar9 + 0x9c);
        cVar7 = func_0x000144e72530(uVar3);
        if (((cVar7 != '\0') && (lVar9 = func_0x000144fc0920(uVar3), lVar9 != 0)) &&
           (lVar9 = FUN_140113b30(*(undefined4 *)(lVar9 + 0x14),*(undefined8 *)(lVar9 + 0x18)),
           lVar9 != 0)) {
          if (*param_1 == lVar9) {
            return;
          }
          FUN_140004b40(0x14abbf350);
          if (*param_1 != 0) {
            FUN_1452dfd90(*param_1,param_1);
          }
          *param_1 = lVar9;
          plVar5 = _DAT_14abbf370;
          if (lVar9 == 0) goto SUB_144d9dab0;
          uVar14 = _DAT_14abbf370[4];
          goto code_r0x00014546b6f3;
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar2 != uVar14);
  }
  return;
  while( true ) {
    LOCK();
    uVar14 = plVar5[4];
    bVar15 = uVar11 == uVar14;
    if (bVar15) {
      plVar5[4] = (ulonglong)*(uint *)(*plVar5 + (ulonglong)(uint)((int)plVar5[1] * iVar12)) |
                  uVar11 & 0xffffffff00000000;
      uVar14 = uVar11;
    }
    UNLOCK();
    if (bVar15) break;
code_r0x00014546b6f3:
    uVar11 = uVar14;
    iVar12 = (int)uVar11;
    if (iVar12 == -2) goto code_r0x00014546b7e2;
  }
  LOCK();
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  UNLOCK();
  LOCK();
  pbVar1 = (byte *)(plVar5[5] + (uVar11 >> 3 & 0x1fffffff));
  *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar11 & 7));
  UNLOCK();
  if (*plVar5 != 0) {
    lVar13 = *plVar5 + (ulonglong)(uint)((int)plVar5[1] * iVar12);
    if (plVar5[3] != 0) {
      FUN_14004c030(plVar5,lVar13);
    }
    func_0x0001450cb0c0(lVar13,param_1,*(undefined2 *)(lVar9 + 8));
    uVar2 = *(ushort *)(lVar9 + 8);
    uVar8 = (undefined2)
            ((ulonglong)(lVar13 - *_DAT_14abbf370) / (ulonglong)*(uint *)(_DAT_14abbf370 + 1));
    if (uVar2 != 0xffff) {
      lVar13 = 0;
      if ((*(byte *)(_DAT_14abbf370[5] + (ulonglong)(uVar2 >> 3)) >> (uVar2 & 7) & 1) != 0) {
        lVar13 = *_DAT_14abbf370 + (ulonglong)(*(uint *)(_DAT_14abbf370 + 1) * (uint)uVar2);
      }
      *(undefined2 *)(lVar13 + 8) = uVar8;
    }
    *(undefined2 *)(lVar9 + 8) = uVar8;
SUB_144d9dab0:
    iRam000000014abbf360 = iRam000000014abbf360 + -1;
    uVar14 = uRam000000014abbf350;
    if (iRam000000014abbf360 == 0) {
      do {
        uVar10 = uVar14;
        LOCK();
        uVar14 = uVar10;
        uVar11 = (ulonglong)((int)uVar10 - 1) | 0xffffffff00000000;
        if (uVar10 != uRam000000014abbf350) {
          uVar14 = uRam000000014abbf350;
          uVar11 = uRam000000014abbf350;
        }
        uRam000000014abbf350 = uVar11;
        UNLOCK();
      } while (uVar10 != uVar14);
      if ((uVar10 & 0xfffffffe) != 0) {
        iRam000000014abbf360 = 0;
        lVar13 = lRam000000014abbf358;
        do {
          while (lVar13 < 0) {
            cVar7 = FUN_1400062d0(0x14abbf358,1,&stack0xffffffffffffffe0);
            if (cVar7 != '\0') {
              return;
            }
          }
          LOCK();
          lVar9 = lVar13;
          lVar6 = lVar13 + 0x100000000;
          if (lVar13 != lRam000000014abbf358) {
            lVar9 = lRam000000014abbf358;
            lVar6 = lRam000000014abbf358;
          }
          lRam000000014abbf358 = lVar6;
          UNLOCK();
          bVar15 = lVar13 != lVar9;
          lVar13 = lVar9;
        } while (bVar15);
        return;
      }
    }
    return;
  }
code_r0x00014546b7e2:
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

