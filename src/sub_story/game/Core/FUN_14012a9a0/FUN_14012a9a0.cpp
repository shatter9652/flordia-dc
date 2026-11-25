// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012a9a0  size: 185 bytes
// Name:    FUN_14012a9a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14012aa80, FUN_144f3e760
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14012a9a0(longlong param_1)

{
  ushort *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  char cVar12;
  ushort uVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ushort *puVar19;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  bool bVar20;
  
  lVar15 = *(longlong *)(param_1 + 8);
  uVar4 = *(undefined1 *)(param_1 + 0x1826);
  uVar5 = *(undefined1 *)(param_1 + 0xf51);
  uVar6 = *(undefined1 *)(param_1 + 0x1824);
  uVar7 = *(undefined1 *)(param_1 + 0x1825);
  uVar14 = FUN_144f3e760(lVar15,0);
  FUN_14012aa80(param_1,uVar14,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar7) & 0xffffffff,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar6) & 0xffffffff,uVar5,uVar4,1);
  cVar12 = func_0x00014012aa60(*(undefined4 *)(param_1 + 0xf30));
  if (cVar12 == '\0') {
    lVar15 = func_0x000144da6540(*(undefined4 *)(lVar15 + 0x9c));
    lVar15 = *(longlong *)(lVar15 + 0x10b0);
    uVar4 = *(undefined1 *)(param_1 + 0xf50);
    lVar10 = *(longlong *)(lVar15 + 8);
    lVar16 = func_0x000144da6540(*(undefined4 *)(lVar10 + 0x9c));
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      lVar16 = *(longlong *)(lVar16 + 0x10c8);
    }
    *(undefined1 *)(lVar15 + 0x1699) = uVar4;
    FUN_14012ae30(lVar15 + 0x10,lVar16 + 0xe10);
    *(undefined4 *)(lVar15 + 0x130) = *(undefined4 *)(lVar16 + 0xf30);
    *(undefined8 *)(lVar15 + 0x138) = *(undefined8 *)(lVar16 + 0xf38);
    *(undefined1 *)(lVar15 + 0x140) = *(undefined1 *)(lVar16 + 0xf40);
    *(undefined1 *)(lVar15 + 0x141) = *(undefined1 *)(lVar16 + 0xf41);
    lVar17 = FUN_14012adf0(lVar16,0);
    if (lVar17 == 0) {
      FUN_144fdb460(lVar15 + 0x390);
    }
    else {
      FUN_14012ae30(lVar15 + 0x390,lVar17);
    }
    FUN_14012ae30(lVar15 + 0x270,lVar16 + 0xf60);
    FUN_14012ae30(lVar15 + 0x150,lVar16 + 0x1490);
    FUN_1450bc1b0(lVar15 + 0x4b0,*(undefined8 *)(lVar16 + 0x16d0));
    *(undefined4 *)(lVar15 + 0x4c0) = *(undefined4 *)(lVar16 + 0x1700);
    *(undefined4 *)(lVar15 + 0x4c4) = *(undefined4 *)(lVar16 + 0x16d8);
    *(undefined1 *)(lVar15 + 0x4c8) = *(undefined1 *)(lVar16 + 0xf51);
    uVar8 = *(uint *)(lVar15 + 0x70);
    uVar18 = (ulonglong)uVar8 & 0x1ffff;
    if ((((uVar18 != 0x1ffff) &&
         (plVar11 = *(longlong **)((ulonglong)(uVar8 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
         plVar11 != (longlong *)0x0)) &&
        (uVar9 = *(uint *)(plVar11[5] + uVar18 * 4), (uVar9 >> 0x11 & 0x3ff) == uVar8 >> 0x16)) &&
       (((uVar9 & *(uint *)(plVar11 + 6)) == *(uint *)(plVar11 + 6) && (*plVar11 != 0)))) {
      uVar18 = (ulonglong)(uint)((int)uVar18 * (int)plVar11[1]);
      lVar16 = *plVar11 + uVar18;
      if (*(char *)(lVar16 + 0x30) == '\x03') {
        *(undefined1 *)(lVar15 + 0x4c9) = 0;
        cVar12 = FUN_1405e34b0(lVar10,lVar16);
        if (cVar12 == '\0') {
          uVar18 = 0;
        }
        else {
          uVar18 = FUN_143628f80(lVar16);
        }
        *(char *)(lVar15 + 0x4c9) = (char)uVar18;
        return uVar18;
      }
    }
    *(undefined1 *)(lVar15 + 0x4c9) = 0;
    return uVar18;
  }
  lVar15 = *(longlong *)(*(longlong *)(_DAT_14ab760a0 + 0x440) + 0x7b0);
  lVar10 = *plRam00000001499aac80;
  uVar8 = *(uint *)(plRam00000001499aac80 + 1);
  uVar13 = FUN_1455ae4b0(CONCAT71((uint7)(uint3)(uVar8 >> 8),3));
  *(short *)(_DAT_147649c28 + 2 + (ulonglong)uVar13 * 6) =
       (short)((ulonglong)(param_1 - lVar10) / (ulonglong)uVar8);
  puVar19 = (ushort *)(lVar15 + 0x186);
  do {
    while (*puVar19 != 0xffff) {
      puVar1 = (ushort *)(_DAT_147649c28 + (ulonglong)*puVar19 * 6);
      LOCK();
      bVar20 = *puVar1 == 0xfffe;
      if (bVar20) {
        *puVar1 = uVar13;
      }
      UNLOCK();
      if (bVar20) {
LAB_140054dbc:
        LOCK();
        *puVar19 = uVar13;
        UNLOCK();
        LOCK();
        bVar2 = *(byte *)(lVar15 + 0x188);
        *(byte *)(lVar15 + 0x188) = 1;
        UNLOCK();
        return (ulonglong)bVar2;
      }
    }
    LOCK();
    uVar3 = *puVar19;
    if (uVar3 == 0xffff) {
      *puVar19 = uVar13;
    }
    UNLOCK();
  } while (uVar3 != 0xffff);
  puVar19 = (ushort *)(lVar15 + 0x184);
  goto LAB_140054dbc;
}

