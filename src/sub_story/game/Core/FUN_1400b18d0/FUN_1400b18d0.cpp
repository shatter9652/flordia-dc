// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b18d0  size: 1073 bytes
// Name:    FUN_1400b18d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140666ae0, FUN_1418a3090, FUN_1416e7f10, FUN_140f47a50, FUN_1453c8060, FUN_14004c030, FUN_145290d80, FUN_140c321a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b18d0(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint *puVar1;
  short sVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined2 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ushort uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_68 [16];
  longlong lStack_50;
  longlong lStack_48;
  
  if (param_1 == 0) {
    return;
  }
  lVar20 = *(longlong *)(param_1 + 0x340);
  if (lVar20 == 0) {
    return;
  }
  lVar7 = FUN_1416e7f10(lVar20);
  if (lVar7 == 0) {
    return;
  }
  *(byte *)(lVar7 + 0x59) = *(byte *)(lVar7 + 0x59) | 1;
  uVar8 = func_0x000144e3bfa0(lVar20);
  puVar9 = (undefined8 *)func_0x000144e8f430(uVar8,_DAT_1499aa02c);
  plVar4 = _DAT_14999e510;
  if (puVar9 == (undefined8 *)0x0) {
    uVar10 = _DAT_14999e510[4];
    do {
      iVar6 = (int)uVar10;
      if (iVar6 == 0x1fffe) goto LAB_1400b1d00;
      uVar16 = uVar10 & 0xffffffff;
      LOCK();
      uVar11 = plVar4[4];
      bVar21 = uVar10 == uVar11;
      if (bVar21) {
        plVar4[4] = (ulonglong)(*(uint *)(plVar4[5] + uVar16 * 4) & 0x1ffff) |
                    uVar10 & 0xffffffff00000000;
        uVar11 = uVar10;
      }
      UNLOCK();
      uVar10 = uVar11;
    } while (!bVar21);
    LOCK();
    *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
    UNLOCK();
    puVar1 = (uint *)(plVar4[5] + uVar16 * 4);
    *puVar1 = *puVar1 | *(uint *)(plVar4 + 6);
    if (*plVar4 == 0) {
LAB_1400b1d00:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar9 = (undefined8 *)(*plVar4 + (ulonglong)(uint)((int)plVar4[1] * iVar6));
    if (plVar4[3] != 0) {
      FUN_14004c030(plVar4,puVar9);
    }
    auVar22._0_12_ = ZEXT812(0);
    auVar22._12_4_ = 0;
    *puVar9 = &UNK_146504940;
    puVar9[1] = 0;
    *(undefined4 *)(puVar9 + 2) = 0;
    puVar9[3] = 0;
    *(undefined4 *)(puVar9 + 4) = 0;
    *(undefined1 (*) [16])(puVar9 + 6) = auVar22;
    uVar8 = func_0x000144e3bfa0(lVar20);
    FUN_145290d80(uVar8,puVar9);
  }
  else {
    FUN_140f47a50(puVar9);
  }
  uVar10 = (ulonglong)*(ushort *)(puVar9 + 4);
  lStack_50 = lVar7;
  lStack_48 = lVar20;
  if (uVar10 == 0) {
    if ((ulonglong)*(uint *)(param_2 + 0xc) == 0) {
      auStack_68 = ZEXT816(0);
      goto LAB_1400b1aba;
    }
    puVar18 = *(undefined8 **)(param_2 + 0x10);
    puVar15 = puVar18 + *(uint *)(param_2 + 0xc);
    do {
      plVar4 = _DAT_149fd66a8;
      uVar8 = *puVar18;
      uVar10 = _DAT_149fd66a8[4];
      do {
        iVar6 = (int)uVar10;
        if (iVar6 == 0x1fffe) goto LAB_1400b1c87;
        uVar16 = uVar10 & 0xffffffff;
        LOCK();
        uVar11 = plVar4[4];
        bVar21 = uVar10 == uVar11;
        if (bVar21) {
          plVar4[4] = (ulonglong)(*(uint *)(plVar4[5] + uVar16 * 4) & 0x1ffff) |
                      uVar10 & 0xffffffff00000000;
          uVar11 = uVar10;
        }
        UNLOCK();
        uVar10 = uVar11;
      } while (!bVar21);
      LOCK();
      *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
      UNLOCK();
      puVar1 = (uint *)(plVar4[5] + uVar16 * 4);
      *puVar1 = *puVar1 | *(uint *)(plVar4 + 6);
      if (*plVar4 == 0) {
LAB_1400b1c87:
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar20 = *plVar4 + (ulonglong)(uint)((int)plVar4[1] * iVar6);
      if (plVar4[3] != 0) {
        FUN_14004c030(plVar4,lVar20);
      }
      FUN_1453c8060(lVar20);
      FUN_140666ae0(lVar20,uVar8);
      *(undefined4 *)(lVar20 + 0x110) = param_3;
      uVar14 = *(ushort *)(puVar9 + 4);
      lVar7 = puVar9[3];
      if (uVar14 == *(ushort *)((longlong)puVar9 + 0x22)) {
        lVar19 = func_0x000144d9c140(8,(uint)uVar14 * 8 + 0x80);
        if (uVar14 != 0) {
          func_0x000145f40560(lVar19,lVar7,(ulonglong)uVar14 << 3);
        }
        if (lVar7 != 0) {
          func_0x000144d9c130(lVar7);
        }
        *(ushort *)((longlong)puVar9 + 0x22) = uVar14 + 0x10;
        puVar9[3] = lVar19;
        uVar14 = *(ushort *)(puVar9 + 4);
        lVar7 = lVar19;
      }
      *(ushort *)(puVar9 + 4) = uVar14 + 1;
      *(longlong *)(lVar7 + (ulonglong)uVar14 * 8) = lVar20;
      puVar18 = puVar18 + 1;
    } while (puVar18 != puVar15);
    uVar10 = (ulonglong)*(ushort *)(puVar9 + 4);
    auStack_68._0_12_ = ZEXT812(0);
    auStack_68._12_4_ = 0;
    if (*(ushort *)(puVar9 + 4) == 0) goto LAB_1400b1aba;
  }
  else {
    auStack_68 = ZEXT816(0);
  }
  puVar15 = (undefined8 *)puVar9[3];
  lVar20 = 0;
  uVar17 = 0;
  puVar9 = puVar15 + uVar10;
  uVar10 = 0;
  do {
    uVar8 = *puVar15;
    if (uVar10 == uVar17) {
      uVar13 = uVar17 >> 1;
      if (uVar17 < 2) {
        uVar13 = 1;
      }
      uVar13 = uVar13 + uVar17;
      lVar7 = func_0x000144d9c140(8,(ulonglong)uVar13 * 8);
      if (uVar17 != 0) {
        func_0x000145f40560(lVar7,lVar20,(ulonglong)uVar17 << 3);
      }
      if (lVar20 != 0) {
        func_0x000144d9c130(lVar20);
      }
      auStack_68._8_8_ = lVar7;
      auStack_68._0_4_ = uVar13;
      lVar20 = lVar7;
      uVar17 = uVar13;
    }
    puVar15 = puVar15 + 1;
    auStack_68._4_4_ = (int)(uVar10 + 1);
    *(undefined8 *)(lVar20 + uVar10 * 8) = uVar8;
    uVar10 = uVar10 + 1;
  } while (puVar15 != puVar9);
LAB_1400b1aba:
  lVar20 = lStack_50;
  uVar17 = *(uint *)(lStack_50 + 0x2c);
  if ((ulonglong)uVar17 != 0) {
    lVar7 = *(longlong *)(lStack_50 + 0x30);
    lVar19 = 0;
    do {
      lVar12 = *(longlong *)(lVar7 + lVar19);
      FUN_140c321a0(*(undefined8 *)(lVar12 + 0xe0),lVar12,*(undefined8 *)(lVar12 + 0xe8));
      func_0x0001435cbb60(*(undefined8 *)(lVar12 + 0xe0),*(undefined8 *)(lVar12 + 0xe8));
      lVar19 = lVar19 + 8;
    } while ((ulonglong)uVar17 << 3 != lVar19);
  }
  lVar7 = lStack_48;
  sVar2 = *(short *)(lVar20 + 0x54);
  if (-1 < sVar2) {
    uVar17 = *(uint *)(lVar20 + 0x2c);
    if ((ulonglong)uVar17 != 0) {
      lVar19 = *(longlong *)(lVar20 + 0x30);
      lVar12 = 0;
      do {
        func_0x000140784650(*(undefined8 *)(lVar19 + lVar12));
        lVar12 = lVar12 + 8;
      } while ((ulonglong)uVar17 << 3 != lVar12);
      sVar2 = *(short *)(lVar20 + 0x54);
    }
    func_0x0001453c2720(sVar2);
  }
  uVar5 = FUN_1418a3090(lVar7,auStack_68,2);
  *(undefined2 *)(lVar20 + 0x54) = uVar5;
  auStack_68._4_4_ = 0;
  if (auStack_68._8_8_ != 0) {
    func_0x000144d9c130();
  }
  return;
}

