// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006f7a0  size: 730 bytes
// Name:    FUN_14006f7a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452e2b10, FUN_140e4dd30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14006f7a0(undefined8 *param_1)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ushort uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  
  *param_1 = &UNK_1465b8540;
  puVar15 = (undefined8 *)param_1[0xd];
  if (puVar15 != (undefined8 *)0x0) {
    (**(code **)*puVar15)(puVar15,1);
  }
  puVar15 = (undefined8 *)param_1[0xe];
  if (puVar15 != (undefined8 *)0x0) {
    (**(code **)*puVar15)(puVar15,1);
  }
  uVar2 = *(uint *)(param_1 + 0xf);
  plVar13 = (longlong *)param_1[0x10];
  uVar17 = 0;
  plVar8 = plVar13;
  if ((ulonglong)uVar2 == 0) {
LAB_14006f805:
    if ((uint)uVar17 != uVar2) {
      do {
        puVar15 = (undefined8 *)plVar13[(uVar17 & 0xffffffff) * 2 + 1];
        if (puVar15 != (undefined8 *)0x0) {
          (**(code **)*puVar15)(puVar15,1);
        }
        do {
          while( true ) {
            uVar16 = (int)uVar17 + 1;
            uVar17 = (ulonglong)uVar16;
            if (uVar16 < uVar2) break;
            if (uVar16 == uVar2) {
              plVar13 = (longlong *)param_1[0x10];
              goto LAB_14006f846;
            }
          }
        } while (plVar13[(ulonglong)uVar16 * 2] == 0);
      } while( true );
    }
  }
  else {
    do {
      if (*plVar8 != 0) goto LAB_14006f805;
      uVar17 = uVar17 + 1;
      plVar8 = plVar8 + 2;
    } while (uVar2 != uVar17);
  }
LAB_14006f846:
  iVar7 = *(int *)((longlong)param_1 + 0x7c);
  plVar8 = plVar13;
  while (iVar7 != 0) {
    if (*plVar8 != 0) {
      iVar7 = iVar7 + -1;
      *plVar8 = 0;
      *(int *)((longlong)param_1 + 0x7c) = iVar7;
    }
    plVar8 = plVar8 + 2;
  }
  if (*(int *)(param_1 + 0xf) != 0) {
    if (plVar13 != (longlong *)0x0) {
      func_0x000144d9c130(plVar13);
    }
    param_1[0x10] = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
  }
  lVar14 = param_1[0x12];
  uVar2 = *(uint *)((longlong)param_1 + 0x8c);
  if ((ulonglong)uVar2 != 0) {
    lVar18 = 0;
    do {
      puVar15 = *(undefined8 **)(lVar14 + 8 + lVar18);
      if (puVar15 != (undefined8 *)0x0) {
        (**(code **)*puVar15)(puVar15,1);
      }
      lVar18 = lVar18 + 0x10;
    } while ((ulonglong)uVar2 << 4 != lVar18);
    lVar14 = param_1[0x12];
    uVar2 = *(uint *)((longlong)param_1 + 0x8c);
    if ((ulonglong)uVar2 != 0) {
      lVar18 = 0;
      do {
        lVar3 = *(longlong *)(lVar14 + 8 + lVar18);
        if (lVar3 != 0) {
          FUN_1452e2b10(lVar3,*(undefined2 *)(lVar14 + lVar18));
        }
        *(undefined8 *)(lVar14 + 8 + lVar18) = 0;
        lVar18 = lVar18 + 0x10;
      } while ((ulonglong)uVar2 << 4 != lVar18);
      lVar14 = param_1[0x12];
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  if (lVar14 != 0) {
    func_0x000144d9c130(lVar14);
  }
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  uVar9 = func_0x0001454a7930();
  FUN_140e4dd30(uVar9,param_1 + 5,5);
  uVar9 = func_0x0001454a7930();
  FUN_140e4dd30(uVar9,param_1 + 7,5);
  uVar9 = func_0x0001454a7930();
  FUN_140e4dd30(uVar9,param_1 + 9,5);
  uVar9 = func_0x0001454a7930();
  FUN_140e4dd30(uVar9,param_1 + 0xb,5);
  lVar14 = param_1[0x12];
  uVar2 = *(uint *)((longlong)param_1 + 0x8c);
  if ((ulonglong)uVar2 != 0) {
    lVar18 = 0;
    do {
      lVar3 = *(longlong *)(lVar14 + 8 + lVar18);
      if (lVar3 != 0) {
        FUN_1452e2b10(lVar3,*(undefined2 *)(lVar14 + lVar18));
      }
      *(undefined8 *)(lVar14 + 8 + lVar18) = 0;
      lVar18 = lVar18 + 0x10;
    } while ((ulonglong)uVar2 << 4 != lVar18);
    lVar14 = param_1[0x12];
  }
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  if (lVar14 != 0) {
    func_0x000144d9c130(lVar14);
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  plVar13 = (longlong *)param_1[0x10];
  iVar7 = *(int *)((longlong)param_1 + 0x7c);
  plVar8 = plVar13;
  while (iVar7 != 0) {
    if (*plVar8 != 0) {
      iVar7 = iVar7 + -1;
      *plVar8 = 0;
      *(int *)((longlong)param_1 + 0x7c) = iVar7;
    }
    plVar8 = plVar8 + 2;
  }
  if (plVar13 != (longlong *)0x0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  *param_1 = &UNK_1465adf70;
  if (*(int *)(param_1[2] + 0xc) != 0) {
    func_0x000140739230(*(undefined4 *)(_DAT_14ab5d090 + 4),*(undefined8 *)(_DAT_14ab5d090 + 8));
  }
  *param_1 = &UNK_1466c7160;
  if (*(short *)(param_1 + 1) != -1) {
    FUN_140004b40(0x14abbf350);
    uVar12 = *(ushort *)(param_1 + 1);
    if (uVar12 != 0xffff) {
      do {
        puVar15 = (undefined8 *)
                  ((ulonglong)((uint)uVar12 * (int)_DAT_14abbf370[1]) + *_DAT_14abbf370);
        if ((*(byte *)(_DAT_14abbf370[5] + (ulonglong)(uVar12 >> 3)) >> (uVar12 & 7) & 1) == 0) {
          puVar15 = (undefined8 *)0x0;
        }
        *(undefined8 *)*puVar15 = 0;
        plVar13 = _DAT_14abbf370;
        uVar12 = *(ushort *)((longlong)puVar15 + 10);
        auVar4._4_8_ = 0;
        auVar4._0_4_ = *(uint *)(_DAT_14abbf370 + 1);
        auVar5._8_4_ = 0;
        auVar5._0_8_ = (longlong)puVar15 - *_DAT_14abbf370;
        auVar5 = auVar5 / auVar4;
        LOCK();
        pbVar1 = (byte *)(_DAT_14abbf370[5] + (auVar5._0_8_ >> 3 & 0x1fffffff));
        *pbVar1 = *pbVar1 & ~(byte)(1 << (auVar5[0] & 7));
        UNLOCK();
        LOCK();
        *(int *)(plVar13 + 2) = (int)plVar13[2] + -1;
        UNLOCK();
        uVar17 = plVar13[4];
        do {
          *(int *)(*plVar13 + (ulonglong)(uint)((int)plVar13[1] * auVar5._0_4_)) = (int)uVar17;
          LOCK();
          uVar11 = plVar13[4];
          bVar19 = uVar17 == uVar11;
          if (bVar19) {
            plVar13[4] = (uVar17 & 0xffffffff00000000 | auVar5._0_8_ & 0xffffffff) + 0x100000000;
            uVar11 = uVar17;
          }
          UNLOCK();
          uVar17 = uVar11;
        } while (!bVar19);
        if (plVar13[3] != 0) {
          FUN_140189080(plVar13,puVar15);
        }
      } while (uVar12 != 0xffff);
    }
    *(undefined2 *)(param_1 + 1) = 0xffff;
    iRam000000014abbf360 = iRam000000014abbf360 + -1;
    uVar17 = uRam000000014abbf350;
    if (iRam000000014abbf360 == 0) {
      do {
        uVar10 = uVar17;
        LOCK();
        uVar17 = uVar10;
        uVar11 = (ulonglong)((int)uVar10 - 1) | 0xffffffff00000000;
        if (uVar10 != uRam000000014abbf350) {
          uVar17 = uRam000000014abbf350;
          uVar11 = uRam000000014abbf350;
        }
        uRam000000014abbf350 = uVar11;
        UNLOCK();
      } while (uVar10 != uVar17);
      if ((uVar10 & 0xfffffffe) != 0) {
        iRam000000014abbf360 = 0;
        lVar14 = lRam000000014abbf358;
        do {
          while (lVar14 < 0) {
            cVar6 = FUN_1400062d0(0x14abbf358,1,&stack0xffffffffffffffe0);
            if (cVar6 != '\0') {
              return;
            }
          }
          LOCK();
          lVar18 = lVar14;
          lVar3 = lVar14 + 0x100000000;
          if (lVar14 != lRam000000014abbf358) {
            lVar18 = lRam000000014abbf358;
            lVar3 = lRam000000014abbf358;
          }
          lRam000000014abbf358 = lVar3;
          UNLOCK();
          bVar19 = lVar14 != lVar18;
          lVar14 = lVar18;
        } while (bVar19);
        return;
      }
    }
    return;
  }
  return;
}

