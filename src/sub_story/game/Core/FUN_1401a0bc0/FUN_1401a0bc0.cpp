// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a0bc0  size: 77 bytes
// Name:    FUN_1401a0bc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401a0cc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a0bc0(longlong *param_1)

{
  byte *pbVar1;
  ushort uVar2;
  undefined4 uVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  undefined2 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  longlong lStack_20;
  
  uVar2 = *(ushort *)(param_1 + 1);
  if ((ulonglong)uVar2 == 0) {
    return;
  }
  uVar12 = 0;
  do {
    func_0x0001401a0c10(*(undefined8 *)(*(longlong *)(*param_1 + uVar12 * 8) + 0x60));
    uVar12 = uVar12 + 1;
  } while (uVar2 != uVar12);
  FUN_1401a0cc0(param_1);
  if ((param_1[0xb4] == 0) && (uVar2 = *(ushort *)(param_1 + 1), (ulonglong)uVar2 != 0)) {
    lVar13 = *param_1;
    param_1 = param_1 + 0xb4;
    uVar12 = 0;
    do {
      lVar8 = **(longlong **)(lVar13 + uVar12 * 8);
      if (lVar8 != 0) {
        uVar3 = *(undefined4 *)(lVar8 + 0x9c);
        cVar6 = func_0x000144e72530(uVar3);
        if (((cVar6 != '\0') && (lVar8 = func_0x000144fc0920(uVar3), lVar8 != 0)) &&
           (lVar8 = FUN_140113b30(*(undefined4 *)(lVar8 + 0x14),*(undefined8 *)(lVar8 + 0x18)),
           lVar8 != 0)) {
          if (*param_1 == lVar8) {
            return;
          }
          FUN_140004b40(0x14abbf350);
          if (*param_1 != 0) {
            FUN_1452dfd90(*param_1,param_1);
          }
          *param_1 = lVar8;
          plVar5 = _DAT_14abbf370;
          if (lVar8 == 0) goto SUB_144d9dab0;
          uVar12 = _DAT_14abbf370[4];
          goto code_r0x00014546b6f3;
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar2 != uVar12);
  }
  return;
  while( true ) {
    LOCK();
    uVar12 = plVar5[4];
    bVar14 = uVar10 == uVar12;
    if (bVar14) {
      plVar5[4] = (ulonglong)*(uint *)(*plVar5 + (ulonglong)(uint)((int)plVar5[1] * iVar11)) |
                  uVar10 & 0xffffffff00000000;
      uVar12 = uVar10;
    }
    UNLOCK();
    if (bVar14) break;
code_r0x00014546b6f3:
    uVar10 = uVar12;
    iVar11 = (int)uVar10;
    if (iVar11 == -2) goto code_r0x00014546b7e2;
  }
  LOCK();
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  UNLOCK();
  LOCK();
  pbVar1 = (byte *)(plVar5[5] + (uVar10 >> 3 & 0x1fffffff));
  *pbVar1 = *pbVar1 | (byte)(1 << ((byte)uVar10 & 7));
  UNLOCK();
  if (*plVar5 != 0) {
    lVar13 = *plVar5 + (ulonglong)(uint)((int)plVar5[1] * iVar11);
    if (plVar5[3] != 0) {
      FUN_14004c030(plVar5,lVar13);
    }
    func_0x0001450cb0c0(lVar13,param_1,*(undefined2 *)(lVar8 + 8));
    uVar2 = *(ushort *)(lVar8 + 8);
    uVar7 = (undefined2)
            ((ulonglong)(lVar13 - *_DAT_14abbf370) / (ulonglong)*(uint *)(_DAT_14abbf370 + 1));
    if (uVar2 != 0xffff) {
      lVar13 = 0;
      if ((*(byte *)(_DAT_14abbf370[5] + (ulonglong)(uVar2 >> 3)) >> (uVar2 & 7) & 1) != 0) {
        lVar13 = *_DAT_14abbf370 + (ulonglong)(*(uint *)(_DAT_14abbf370 + 1) * (uint)uVar2);
      }
      *(undefined2 *)(lVar13 + 8) = uVar7;
    }
    *(undefined2 *)(lVar8 + 8) = uVar7;
SUB_144d9dab0:
    iRam000000014abbf360 = iRam000000014abbf360 + -1;
    uVar12 = uRam000000014abbf350;
    if (iRam000000014abbf360 == 0) {
      do {
        uVar9 = uVar12;
        LOCK();
        uVar12 = uVar9;
        uVar10 = (ulonglong)((int)uVar9 - 1) | 0xffffffff00000000;
        if (uVar9 != uRam000000014abbf350) {
          uVar12 = uRam000000014abbf350;
          uVar10 = uRam000000014abbf350;
        }
        uRam000000014abbf350 = uVar10;
        UNLOCK();
      } while (uVar9 != uVar12);
      if ((uVar9 & 0xfffffffe) != 0) {
        lStack_20 = lRam000000014abbf358;
        iRam000000014abbf360 = 0;
        do {
          while (lStack_20 < 0) {
            cVar6 = FUN_1400062d0(0x14abbf358,1,&lStack_20);
            if (cVar6 != '\0') {
              return;
            }
          }
          LOCK();
          lVar13 = lStack_20;
          lVar8 = lStack_20 + 0x100000000;
          if (lStack_20 != lRam000000014abbf358) {
            lVar13 = lRam000000014abbf358;
            lVar8 = lRam000000014abbf358;
          }
          lRam000000014abbf358 = lVar8;
          UNLOCK();
          bVar14 = lStack_20 != lVar13;
          lStack_20 = lVar13;
        } while (bVar14);
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

