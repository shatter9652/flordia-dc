// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140069d80  size: 826 bytes
// Name:    FUN_140069d80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_1455aa580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140069d80(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  int *piVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  bool bVar14;
  
  FUN_140004b40(param_1 + 0x1260);
  if (param_3 < 0x11) {
    param_3 = 0x10;
  }
  uVar11 = 0x10;
  if (0x10 < param_2) {
    uVar11 = param_2;
  }
  uVar11 = uVar11 + 0xf;
  uVar8 = uVar11 & 0xfffffffffffffff0;
  if (uVar8 <= *(ulonglong *)(param_1 + 0x1240)) {
    if (uVar11 < 0x1000) {
      uVar13 = uVar11 >> 4 & 0xffffffff;
      do {
        iVar10 = (int)uVar13;
        lVar4 = func_0x0001455aa530(param_1,uVar13,uVar8,param_3);
        if (lVar4 != 0) break;
        uVar13 = (ulonglong)(iVar10 + 1);
      } while (iVar10 < 0xff);
    }
    else {
      lVar4 = 0;
    }
    uVar13 = uVar11 >> 4 & 0xffffffff;
    if (0xfff < uVar11) {
      uVar13 = (ulonglong)(0x13f - (int)LZCOUNT(uVar8));
    }
    bVar14 = lVar4 == 0;
    if ((bVar14) && ((int)uVar13 < 0x120)) {
      do {
        iVar10 = (int)uVar13;
        lVar4 = FUN_1455aa580(param_1,uVar13,uVar8,param_3);
        bVar14 = lVar4 == 0;
        if (!bVar14) break;
        uVar13 = (ulonglong)(iVar10 + 1);
      } while (iVar10 < 0x11f);
    }
    if (!bVar14) {
      uVar2 = *(ushort *)(lVar4 + 0xe);
      *(ushort *)(lVar4 + 0xe) = uVar2 | 0x400;
      *(ushort *)(lVar4 + 0xe) = uVar2 & 0xfe00 | 0x400 | *(ushort *)(param_1 + 0x1258) & 0x1ff;
      uVar9 = *(uint *)(lVar4 + 4);
      uVar7 = uVar9 >> 4;
      if (0xfff < uVar9) {
        uVar7 = 0x11f - LZCOUNT(uVar9);
      }
      func_0x0001455aa4c0(param_1,lVar4,uVar7);
      uVar11 = lVar4 + 0x10;
      if ((param_3 - 1 & uVar11) == 0) {
        uVar9 = *(uint *)(lVar4 + 4);
      }
      else {
        iVar10 = *(int *)(lVar4 + 4);
        uVar13 = -param_3 & param_3 + 0xf + lVar4;
        lVar5 = lVar4 - (ulonglong)*(uint *)(lVar4 + 8);
        lVar6 = 0;
        if ((ulonglong)*(uint *)(lVar4 + 8) != 0) {
          lVar6 = lVar5;
        }
        if ((uVar13 - uVar11 == 0x10) && (lVar6 != 0)) {
          LOCK();
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 0x11;
          UNLOCK();
          lVar4 = lVar5;
        }
        else {
          uVar7 = (int)(uVar13 - uVar11) - 0x10;
          *(uint *)(lVar4 + 4) = uVar7;
          *(ushort *)(lVar4 + 0xe) = *(ushort *)(lVar4 + 0xe) & 64000;
          uVar9 = uVar7 >> 4;
          if (0xfff < uVar7) {
            uVar9 = 0x11f - LZCOUNT(uVar7);
          }
          func_0x0001455aa500(param_1,lVar4,uVar9);
        }
        lVar6 = uVar13 - 0x10;
        iVar12 = (int)lVar6;
        uVar9 = iVar10 + ((int)uVar11 - (int)uVar13);
        *(int *)(uVar13 - 0x10) = iVar12;
        *(uint *)(uVar13 - 0xc) = uVar9;
        *(int *)(uVar13 - 8) = iVar12 - (int)lVar4;
        *(ushort *)(uVar13 - 2) =
             (*(ushort *)(param_1 + 0x1258) & 0x1ff) + 0x400 + (*(ushort *)(uVar13 - 2) & 0xf800);
        lVar4 = func_0x0001455aa4a0(*(undefined8 *)(param_1 + 0x20),
                                    *(undefined8 *)(param_1 + 0x1230),lVar6);
        if (lVar4 != 0) {
          *(int *)(lVar4 + 8) = (int)lVar4 - iVar12;
        }
        auVar3 = vpaddq_avx(*(undefined1 (*) [16])(param_1 + 0x1238),_DAT_146159e50);
        *(undefined1 (*) [16])(param_1 + 0x1238) = auVar3;
        lVar4 = lVar6;
      }
      uVar11 = (ulonglong)uVar9;
      if (uVar8 + 0x10 < uVar11) {
        piVar1 = (int *)(lVar4 + 0x10 + uVar8);
        iVar10 = (int)piVar1;
        *piVar1 = iVar10;
        piVar1[1] = (uVar9 - (int)uVar8) + -0x10;
        piVar1[2] = iVar10 - (int)lVar4;
        *(undefined2 *)((longlong)piVar1 + 0xe) = 0;
        lVar6 = func_0x0001455aa4a0(*(undefined8 *)(param_1 + 0x20),
                                    *(undefined8 *)(param_1 + 0x1230),piVar1);
        if (lVar6 != 0) {
          *(int *)(lVar6 + 8) = (int)lVar6 - iVar10;
        }
        *(int *)(lVar4 + 4) = (int)uVar8;
        uVar9 = piVar1[1];
        uVar7 = uVar9 >> 4;
        if (0xfff < uVar9) {
          uVar7 = 0x11f - LZCOUNT(uVar9);
        }
        func_0x0001455aa500(param_1,piVar1,uVar7);
        uVar11 = (ulonglong)*(uint *)(lVar4 + 4);
        auVar3 = vpaddq_avx(*(undefined1 (*) [16])(param_1 + 0x1238),_DAT_146159e50);
      }
      else {
        auVar3 = *(undefined1 (*) [16])(param_1 + 0x1238);
      }
      *(ulonglong *)(param_1 + 0x1238) = auVar3._0_8_ + uVar11;
      uVar11 = auVar3._8_8_ - uVar11;
      *(ulonglong *)(param_1 + 0x1240) = uVar11;
      if (uVar11 < *(ulonglong *)(param_1 + 0x1248)) {
        *(ulonglong *)(param_1 + 0x1248) = uVar11;
      }
      lVar4 = lVar4 + 0x10;
      goto LAB_14006a09e;
    }
  }
  lVar4 = 0;
LAB_14006a09e:
  func_0x000144d9dab0(param_1 + 0x1260);
  return lVar4;
}

