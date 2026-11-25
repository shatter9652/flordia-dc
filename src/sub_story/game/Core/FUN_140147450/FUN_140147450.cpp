// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140147450  size: 1476 bytes
// Name:    FUN_140147450
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141c86590, FUN_145c9b140, FUN_1422b2770, FUN_14257f700
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140147450(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong lVar9;
  ushort uVar10;
  undefined4 *puVar11;
  undefined1 uVar12;
  uint uVar13;
  ulonglong uVar14;
  byte bVar15;
  bool bVar16;
  undefined1 uStack_91;
  ulonglong uStack_90;
  undefined8 uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puStack_60 = &uStack_91;
  pcStack_58 = FUN_1422b2b20;
  puStack_50 = &UNK_145955790;
  puStack_48 = &SUB_140004380;
  uStack_88 = FUN_141c86590(&puStack_60,0x2db8bdca,0);
  if ((ulonglong)*(uint *)(param_1 + 0x59c) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x5a0);
    lVar9 = (ulonglong)*(uint *)(param_1 + 0x59c) * 0x130;
    uVar14 = lVar7 + 0xcf;
    do {
      if (*(code **)(lVar7 + 0x120) != (code *)0x0) {
        (**(code **)(lVar7 + 0x120))(uVar14 & 0xfffffffffffffff0);
      }
      FUN_14257f700(lVar7);
      lVar7 = lVar7 + 0x130;
      uVar14 = uVar14 + 0x130;
      lVar9 = lVar9 + -0x130;
    } while (lVar9 != 0);
  }
  *(undefined4 *)(param_1 + 0x59c) = 0;
  if (*(uint *)(param_1 + 0x598) < 9) {
    FUN_145c9b140(param_1 + 0x598);
  }
  lVar7 = 0;
  do {
    uVar13 = *(uint *)(param_1 + 0x59c);
    *(uint *)(param_1 + 0x59c) = uVar13 + 1;
    lVar9 = (ulonglong)uVar13 * 0x130 + *(longlong *)(param_1 + 0x5a0);
    if (*(longlong *)(param_1 + 0x5a0) == 0) {
      bVar16 = *(int *)(&UNK_14619c35c + lVar7) == 0;
      uVar13 = *(uint *)(&UNK_14619c354 + lVar7);
      bVar15 = (&UNK_14619c358)[lVar7];
      puVar1 = (ulonglong *)(lVar9 + 0xc0);
      if (*(code **)(lVar9 + 0x120) == (code *)0x0) goto LAB_140147567;
      (**(code **)(lVar9 + 0x120))(puVar1);
LAB_1401475ae:
      *puVar1 = (ulonglong)uVar13 | (ulonglong)bVar15 << 0x20 | (ulonglong)bVar16 << 0x29 |
                0x10000000000;
    }
    else {
      func_0x0001412ec560(lVar9);
      *(undefined8 *)(lVar9 + 0x120) = 0;
      bVar16 = *(int *)(&UNK_14619c35c + lVar7) == 0;
      uVar13 = *(uint *)(&UNK_14619c354 + lVar7);
      bVar15 = (&UNK_14619c358)[lVar7];
LAB_140147567:
      puVar1 = (ulonglong *)(lVar9 + 0xcfU & 0xfffffffffffffff0);
      if (puVar1 != (ulonglong *)0x0) goto LAB_1401475ae;
    }
    *(code **)(lVar9 + 0x110) = FUN_1422b2b80;
    *(undefined **)(lVar9 + 0x118) = &UNK_1401167b0;
    *(undefined **)(lVar9 + 0x120) = &SUB_140004380;
    *(undefined4 *)(lVar9 + 0x128) = *(undefined4 *)(param_1 + 0x3c);
    lVar2 = FUN_1422b2770(param_1,*(undefined4 *)(&UNK_14619c350 + lVar7),lVar9);
    lVar3 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                                *(undefined4 *)(lVar2 + 0x88));
    uVar10 = *(ushort *)(lVar3 + 0xf08);
    lVar9 = *(longlong *)(lVar3 + 0xf00);
    if (uVar10 == *(ushort *)(lVar3 + 0xf0a)) {
      lVar4 = func_0x000144d9c140(8,(uint)uVar10 * 8 + 0x20);
      if (uVar10 != 0) {
        func_0x000145f40560(lVar4,lVar9,(ulonglong)uVar10 << 3);
      }
      if (lVar9 != 0) {
        func_0x000144d9c130(lVar9);
      }
      *(ushort *)(lVar3 + 0xf0a) = uVar10 + 4;
      *(longlong *)(lVar3 + 0xf00) = lVar4;
      uVar10 = *(ushort *)(lVar3 + 0xf08);
      lVar9 = lVar4;
    }
    lVar7 = lVar7 + 0x10;
    *(ushort *)(lVar3 + 0xf08) = uVar10 + 1;
    *(undefined8 *)(lVar9 + (ulonglong)uVar10 * 8) = uStack_88;
    *(undefined1 *)(lVar2 + 0xf6) = 1;
  } while (lVar7 != 0x80);
  lVar7 = 0x128;
  puVar11 = (undefined4 *)&UNK_14619c354;
  do {
    iVar6 = puVar11[2];
    if (iVar6 != 0) {
      uVar13 = *(uint *)(param_1 + 0x59c);
      *(uint *)(param_1 + 0x59c) = uVar13 + 1;
      lVar9 = (ulonglong)uVar13 * 0x130 + *(longlong *)(param_1 + 0x5a0);
      if (*(longlong *)(param_1 + 0x5a0) == 0) {
        uVar8 = *puVar11;
        uVar12 = *(undefined1 *)(puVar11 + 1);
        puVar1 = (ulonglong *)(lVar9 + 0xc0);
        if (*(code **)(lVar9 + 0x120) == (code *)0x0) goto LAB_14014773a;
        (**(code **)(lVar9 + 0x120))(puVar1);
LAB_14014776f:
        *puVar1 = (ulonglong)CONCAT14(uVar12,uVar8);
      }
      else {
        func_0x0001412ec560(lVar9);
        *(undefined8 *)(lVar9 + 0x120) = 0;
        uVar8 = *puVar11;
        uVar12 = *(undefined1 *)(puVar11 + 1);
LAB_14014773a:
        puVar1 = (ulonglong *)(lVar9 + 0xcfU & 0xfffffffffffffff0);
        if (puVar1 != (ulonglong *)0x0) goto LAB_14014776f;
      }
      *(code **)(lVar9 + 0x110) = FUN_1422b2c00;
      *(undefined **)(lVar9 + 0x118) = &UNK_1401167b0;
      *(undefined **)(lVar9 + 0x120) = &SUB_140004380;
      *(undefined4 *)(lVar9 + 0x128) = *(undefined4 *)(param_1 + 0x3c);
      lVar2 = FUN_1422b2770(param_1,iVar6,lVar9,lVar9 + 0xc0);
      uStack_88 = *(undefined8 *)
                   (*(longlong *)(param_1 + 0x40) +
                   (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x5a0) + lVar7) * 8);
      lVar3 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                                  *(undefined4 *)(lVar2 + 0x88));
      uVar10 = *(ushort *)(lVar3 + 0xf08);
      lVar9 = *(longlong *)(lVar3 + 0xf00);
      if (uVar10 == *(ushort *)(lVar3 + 0xf0a)) {
        uStack_90 = (ulonglong)uVar10;
        lVar4 = func_0x000144d9c140(8,(uint)uVar10 * 8 + 0x20);
        if (uVar10 != 0) {
          func_0x000145f40560(lVar4,lVar9,(int)uStack_90 << 3);
        }
        if (lVar9 != 0) {
          func_0x000144d9c130(lVar9);
        }
        *(short *)(lVar3 + 0xf0a) = (short)uStack_90 + 4;
        *(longlong *)(lVar3 + 0xf00) = lVar4;
        uVar10 = *(ushort *)(lVar3 + 0xf08);
        lVar9 = lVar4;
      }
      *(ushort *)(lVar3 + 0xf08) = uVar10 + 1;
      *(undefined8 *)(lVar9 + (ulonglong)uVar10 * 8) = uStack_88;
      *(undefined1 *)(lVar2 + 0xf6) = 1;
    }
    lVar7 = lVar7 + 0x130;
    puVar11 = puVar11 + 4;
    if (lVar7 == 0xaa8) {
      puStack_80 = &uStack_91;
      pcStack_78 = FUN_1404b78c0;
      puStack_70 = &UNK_145955790;
      puStack_68 = &SUB_140004380;
      FUN_141c86590(&puStack_80,0x5543159e,0);
      iVar6 = *(int *)(param_1 + 0x59c);
      if (0 < iVar6) {
        lVar9 = 0x128;
        lVar7 = 0;
        do {
          uStack_90 = CONCAT44(uStack_90._4_4_,iVar6);
          uStack_88 = *(undefined8 *)
                       (*(longlong *)(param_1 + 0x40) +
                       (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x5a0) + lVar9) * 8);
          lVar2 = *(longlong *)
                   (*(longlong *)(param_1 + 0x40) + (ulonglong)(*(int *)(param_1 + 0x3c) - 1) * 8);
          lVar4 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                                      *(undefined4 *)(lVar2 + 0x88));
          uVar10 = *(ushort *)(lVar4 + 0xf08);
          lVar3 = *(longlong *)(lVar4 + 0xf00);
          if (uVar10 == *(ushort *)(lVar4 + 0xf0a)) {
            uStack_90 = (ulonglong)uVar10;
            lVar5 = func_0x000144d9c140(8,(uint)uVar10 * 8 + 0x20);
            if (uVar10 != 0) {
              func_0x000145f40560(lVar5,lVar3,(int)uStack_90 << 3);
            }
            if (lVar3 != 0) {
              func_0x000144d9c130(lVar3);
            }
            *(short *)(lVar4 + 0xf0a) = (short)uStack_90 + 4;
            *(longlong *)(lVar4 + 0xf00) = lVar5;
            uVar10 = *(ushort *)(lVar4 + 0xf08);
            lVar3 = lVar5;
            iVar6 = *(int *)(param_1 + 0x59c);
          }
          else {
            iVar6 = (int)uStack_90;
          }
          lVar7 = lVar7 + 1;
          lVar9 = lVar9 + 0x130;
          *(ushort *)(lVar4 + 0xf08) = uVar10 + 1;
          *(undefined8 *)(lVar3 + (ulonglong)uVar10 * 8) = uStack_88;
          *(undefined1 *)(lVar2 + 0xf6) = 1;
        } while (lVar7 < iVar6);
      }
      return;
    }
  } while( true );
}

