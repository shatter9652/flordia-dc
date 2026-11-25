// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004b940  size: 75 bytes
// Name:    FUN_14004b940
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14004b940(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  int *piVar1;
  ushort uVar2;
  ulonglong *puVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  bool bVar17;
  
  lVar6 = func_0x0001455aa5f0(param_2,param_3);
  if (-1 < lVar6) {
    lVar6 = *(longlong *)(param_1 + 0x1280) + lVar6 * 0xb8;
    uVar5 = FUN_140007b80();
    puVar8 = *(ulonglong **)(lVar6 + 0x90);
    do {
      while (puVar8 == (ulonglong *)0x0) {
code_r0x000144dac573:
        puVar8 = (ulonglong *)FUN_144dac720(lVar6);
        if (puVar8 == (ulonglong *)0x0) {
          lVar11 = 0;
code_r0x000144dac5e6:
          FUN_144dac640(lVar6,uVar5);
          FUN_144dac690(lVar6,uVar5);
          return lVar11;
        }
      }
      func_0x000144dac630(lVar6,uVar5,puVar8);
      puVar3 = *(ulonglong **)(lVar6 + 0x90);
      if (puVar8 == puVar3) {
        uVar14 = *puVar3;
        while ((uVar14 & 0xffff00000000) != 0) {
          uVar16 = uVar14 & 0xffffffff;
          LOCK();
          uVar10 = *puVar3;
          if (uVar14 == uVar10) {
            *puVar3 = (uVar14 & 0xffff000000000000 |
                      uVar14 + 0xffff00000000 & 0xffff00000000 |
                      (ulonglong)*(uint *)((longlong)puVar3 + uVar16)) + 0x1000000000000;
            uVar10 = uVar14;
          }
          UNLOCK();
          bVar17 = uVar14 == uVar10;
          uVar14 = uVar10;
          if (bVar17) {
            lVar11 = (longlong)puVar3 + uVar16;
            goto code_r0x000144dac5e6;
          }
        }
        goto code_r0x000144dac573;
      }
      FUN_144dac640(lVar6,uVar5);
      puVar8 = puVar3;
    } while( true );
  }
  if (param_2 == 0) {
    return 0;
  }
  FUN_140004b40(param_1 + 0x1260);
  if (param_3 < 0x11) {
    param_3 = 0x10;
  }
  uVar14 = 0x10;
  if (0x10 < param_2) {
    uVar14 = param_2;
  }
  uVar14 = uVar14 + 0xf;
  uVar10 = uVar14 & 0xfffffffffffffff0;
  if (uVar10 <= *(ulonglong *)(param_1 + 0x1240)) {
    if (uVar14 < 0x1000) {
      uVar16 = uVar14 >> 4 & 0xffffffff;
      do {
        iVar13 = (int)uVar16;
        lVar6 = func_0x0001455aa530(param_1,uVar16,uVar10,param_3);
        if (lVar6 != 0) break;
        uVar16 = (ulonglong)(iVar13 + 1);
      } while (iVar13 < 0xff);
    }
    else {
      lVar6 = 0;
    }
    uVar16 = uVar14 >> 4 & 0xffffffff;
    if (0xfff < uVar14) {
      uVar16 = (ulonglong)(0x13f - (int)LZCOUNT(uVar10));
    }
    bVar17 = lVar6 == 0;
    if ((bVar17) && ((int)uVar16 < 0x120)) {
      do {
        iVar13 = (int)uVar16;
        lVar6 = FUN_1455aa580(param_1,uVar16,uVar10,param_3);
        bVar17 = lVar6 == 0;
        if (!bVar17) break;
        uVar16 = (ulonglong)(iVar13 + 1);
      } while (iVar13 < 0x11f);
    }
    if (!bVar17) {
      uVar2 = *(ushort *)(lVar6 + 0xe);
      *(ushort *)(lVar6 + 0xe) = uVar2 | 0x400;
      *(ushort *)(lVar6 + 0xe) = uVar2 & 0xfe00 | 0x400 | *(ushort *)(param_1 + 0x1258) & 0x1ff;
      uVar12 = *(uint *)(lVar6 + 4);
      uVar9 = uVar12 >> 4;
      if (0xfff < uVar12) {
        uVar9 = 0x11f - LZCOUNT(uVar12);
      }
      func_0x0001455aa4c0(param_1,lVar6,uVar9);
      uVar14 = lVar6 + 0x10;
      if ((param_3 - 1 & uVar14) == 0) {
        uVar12 = *(uint *)(lVar6 + 4);
      }
      else {
        iVar13 = *(int *)(lVar6 + 4);
        uVar16 = -param_3 & param_3 + 0xf + lVar6;
        lVar7 = lVar6 - (ulonglong)*(uint *)(lVar6 + 8);
        lVar11 = 0;
        if ((ulonglong)*(uint *)(lVar6 + 8) != 0) {
          lVar11 = lVar7;
        }
        if ((uVar16 - uVar14 == 0x10) && (lVar11 != 0)) {
          LOCK();
          *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 0x11;
          UNLOCK();
          lVar6 = lVar7;
        }
        else {
          uVar9 = (int)(uVar16 - uVar14) - 0x10;
          *(uint *)(lVar6 + 4) = uVar9;
          *(ushort *)(lVar6 + 0xe) = *(ushort *)(lVar6 + 0xe) & 64000;
          uVar12 = uVar9 >> 4;
          if (0xfff < uVar9) {
            uVar12 = 0x11f - LZCOUNT(uVar9);
          }
          func_0x0001455aa500(param_1,lVar6,uVar12);
        }
        lVar11 = uVar16 - 0x10;
        iVar15 = (int)lVar11;
        uVar12 = iVar13 + ((int)uVar14 - (int)uVar16);
        *(int *)(uVar16 - 0x10) = iVar15;
        *(uint *)(uVar16 - 0xc) = uVar12;
        *(int *)(uVar16 - 8) = iVar15 - (int)lVar6;
        *(ushort *)(uVar16 - 2) =
             (*(ushort *)(param_1 + 0x1258) & 0x1ff) + 0x400 + (*(ushort *)(uVar16 - 2) & 0xf800);
        lVar6 = func_0x0001455aa4a0(*(undefined8 *)(param_1 + 0x20),
                                    *(undefined8 *)(param_1 + 0x1230),lVar11);
        if (lVar6 != 0) {
          *(int *)(lVar6 + 8) = (int)lVar6 - iVar15;
        }
        auVar4 = vpaddq_avx(*(undefined1 (*) [16])(param_1 + 0x1238),_DAT_146159e50);
        *(undefined1 (*) [16])(param_1 + 0x1238) = auVar4;
        lVar6 = lVar11;
      }
      uVar14 = (ulonglong)uVar12;
      if (uVar10 + 0x10 < uVar14) {
        piVar1 = (int *)(lVar6 + 0x10 + uVar10);
        iVar13 = (int)piVar1;
        *piVar1 = iVar13;
        piVar1[1] = (uVar12 - (int)uVar10) + -0x10;
        piVar1[2] = iVar13 - (int)lVar6;
        *(undefined2 *)((longlong)piVar1 + 0xe) = 0;
        lVar11 = func_0x0001455aa4a0(*(undefined8 *)(param_1 + 0x20),
                                     *(undefined8 *)(param_1 + 0x1230),piVar1);
        if (lVar11 != 0) {
          *(int *)(lVar11 + 8) = (int)lVar11 - iVar13;
        }
        *(int *)(lVar6 + 4) = (int)uVar10;
        uVar12 = piVar1[1];
        uVar9 = uVar12 >> 4;
        if (0xfff < uVar12) {
          uVar9 = 0x11f - LZCOUNT(uVar12);
        }
        func_0x0001455aa500(param_1,piVar1,uVar9);
        uVar14 = (ulonglong)*(uint *)(lVar6 + 4);
        auVar4 = vpaddq_avx(*(undefined1 (*) [16])(param_1 + 0x1238),_DAT_146159e50);
      }
      else {
        auVar4 = *(undefined1 (*) [16])(param_1 + 0x1238);
      }
      *(ulonglong *)(param_1 + 0x1238) = auVar4._0_8_ + uVar14;
      uVar14 = auVar4._8_8_ - uVar14;
      *(ulonglong *)(param_1 + 0x1240) = uVar14;
      if (uVar14 < *(ulonglong *)(param_1 + 0x1248)) {
        *(ulonglong *)(param_1 + 0x1248) = uVar14;
      }
      lVar6 = lVar6 + 0x10;
      goto LAB_14006a09e;
    }
  }
  lVar6 = 0;
LAB_14006a09e:
  func_0x000144d9dab0(param_1 + 0x1260);
  return lVar6;
}

