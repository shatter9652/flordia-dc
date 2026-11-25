// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fcfb0  size: 1366 bytes
// Name:    FUN_1400fcfb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400fcfb0(longlong param_1,uint *param_2,byte param_3,byte param_4)

{
  byte bVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  int *piVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ushort uVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  undefined8 uStack_78;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined8 uStack_64;
  uint uStack_50;
  uint uStack_4c;
  ulonglong uStack_48;
  
  bVar1 = *(byte *)(_DAT_149c3e108 + 0xd + (ulonglong)*(ushort *)((longlong)param_2 + 6) * 0x10);
  iStack_68 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x14) >> 0x20);
  uStack_64 = *(undefined8 *)(param_1 + 0x1c);
  uStack_78 = *(undefined8 *)(param_1 + 8);
  iStack_70 = (int)*(undefined8 *)(param_1 + 0x10);
  iStack_6c = (int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  uStack_4c = (uint)bVar1;
  lVar7 = (ulonglong)(*param_2 & 0xfff) * 0x38;
  uStack_50 = *(uint *)(lVar7 + 0x149c3e1d4) >> 0x18 & 7;
  uStack_48 = (ulonglong)param_3;
  uVar12 = ((*(uint *)(lVar7 + 0x149c3e1d4) & 7) + 1) -
           (uint)(*(uint *)(lVar7 + 0x149c3e1d0) < 0x10000000);
  uVar14 = uVar12 - bVar1;
  uVar10 = (uint)param_3;
  uVar21 = uVar12 - uVar10;
  uVar18 = (uint)bVar1;
  if (bVar1 < param_3) {
    if (uVar10 <= uStack_50) {
      iVar22 = 1;
      uVar10 = 1;
      lVar17 = 0;
      uVar13 = *(ushort *)(lVar7 + 0x149c3e1f0 + (ulonglong)uVar21 * 2);
      uVar6 = 0;
      if (((((1 < uVar13) && (lVar17 = 1, uVar13 != 2)) && (lVar17 = 2, 4 < uVar13)) &&
          ((lVar17 = 3, 8 < uVar13 && (lVar17 = 4, 0xc < uVar13)))) &&
         ((lVar17 = 6, 0x10 < uVar13 && (lVar17 = 5, 0x18 < uVar13)))) {
        lVar17 = 6;
        uVar10 = (uint)uVar13 * 0x1000 + 0xffff >> 0x10;
      }
      if (uVar18 != 0) goto LAB_1400fd253;
      goto LAB_1400fd2d2;
    }
    if ((uStack_50 == 0) || (uStack_50 < uVar18)) {
      if (bVar1 == 0) {
        uVar6 = 0;
        goto LAB_1400fd299;
      }
      uVar13 = (*(short *)(lVar7 + 0x149c3e1f0 + (ulonglong)uVar21 * 2) +
               *(short *)(lVar7 + 0x149c3e1e8 + (ulonglong)uVar21 * 2)) -
               *(short *)(lVar7 + 0x149c3e1e8 + (ulonglong)(uVar14 - 1) * 2);
      uVar6 = 0;
    }
    else {
      if (bVar1 == 0) {
        uVar6 = 0;
        uVar14 = uVar12;
      }
      else {
        uVar6 = func_0x000144fd2840((ulonglong)
                                    *(ushort *)(lVar7 + 0x149c3e1f0 + (ulonglong)uVar14 * 2) << 0xc)
        ;
        uVar14 = uVar12;
      }
LAB_1400fd299:
      uVar13 = *(short *)(lVar7 + 0x149c3e1f0 + (ulonglong)uVar21 * 2) +
               *(short *)(lVar7 + 0x149c3e1e8 + (ulonglong)uVar21 * 2);
    }
    lVar17 = 6;
    uVar10 = (uVar13 + 0xf >> 4) * (uint)*(ushort *)(lVar7 + 0x149c3e1f8);
    iVar22 = ((uVar14 - uVar21) * (uint)*(ushort *)(lVar7 + 0x149c3e1f8) + 1) - (uint)(uVar6 == 0);
LAB_1400fd2d2:
    piVar8 = (int *)((longlong)&uStack_78 + lVar17 * 4);
    *piVar8 = *piVar8 + uVar10;
    if (uVar10 != 0) {
      bVar5 = true;
      uVar14 = *(int *)(&UNK_1465f6d60 + lVar17 * 4) * uVar10;
      goto LAB_1400fd365;
    }
    uVar10 = 0;
  }
  else {
    if ((param_3 != 0) && (uVar10 <= uStack_50)) {
      uVar10 = 1;
      uVar13 = *(ushort *)(lVar7 + 0x149c3e1f0 + (ulonglong)uVar21 * 2);
      if (uVar13 < 2) {
        lVar17 = 0;
      }
      else {
        lVar17 = 1;
        if ((((uVar13 != 2) && (lVar17 = 2, 4 < uVar13)) && (lVar17 = 3, 8 < uVar13)) &&
           (((lVar17 = 4, 0xc < uVar13 && (lVar17 = 6, 0x10 < uVar13)) &&
            (lVar17 = 5, 0x18 < uVar13)))) {
          lVar17 = 6;
          uVar10 = (uint)uVar13 * 0x1000 + 0xffff >> 0x10;
        }
      }
      if (uStack_50 < uVar18) {
        uVar6 = ((uint)*(ushort *)(lVar7 + 0x149c3e1f0 + (ulonglong)uVar14 * 2) +
                (uint)*(ushort *)(lVar7 + 0x149c3e1e8 + (ulonglong)uVar14 * 2)) * 0x1000 + 0xffff &
                0x3fff0000;
      }
      else {
LAB_1400fd253:
        uVar6 = func_0x000144fd2840((ulonglong)
                                    *(ushort *)(lVar7 + 0x149c3e1f0 + (ulonglong)uVar14 * 2) << 0xc)
        ;
      }
      iVar22 = 2;
      goto LAB_1400fd2d2;
    }
    piVar8 = (int *)((longlong)&uStack_64 + 4);
    uVar9 = (ulonglong)uVar14;
    if ((param_3 == 0) && (uVar18 <= uStack_50)) {
      uVar13 = *(ushort *)(lVar7 + 0x149c3e1f0 + uVar9 * 2);
      iVar22 = 1;
      if (uVar13 < 2) {
        lVar17 = 0;
        piVar8 = (int *)&uStack_78;
      }
      else if (uVar13 == 2) {
        piVar8 = (int *)((longlong)&uStack_78 + 4);
        lVar17 = 1;
      }
      else if (uVar13 < 5) {
        piVar8 = &iStack_70;
        lVar17 = 2;
      }
      else if (uVar13 < 9) {
        piVar8 = &iStack_6c;
        lVar17 = 3;
      }
      else if (uVar13 < 0xd) {
        piVar8 = &iStack_68;
        lVar17 = 4;
      }
      else {
        lVar17 = 6;
        if (0x10 < uVar13) {
          if (0x18 < uVar13) {
            uVar10 = (uint)uVar13 * 0x1000 + 0xffff >> 0x10;
            goto LAB_1400fd359;
          }
          piVar8 = (int *)&uStack_64;
          lVar17 = 5;
        }
      }
      uVar10 = 1;
    }
    else {
      uVar13 = *(short *)(lVar7 + 0x149c3e1f0 + uVar9 * 2) +
               *(short *)(lVar7 + 0x149c3e1e8 + uVar9 * 2);
      if (param_3 != 0) {
        uVar13 = uVar13 - *(short *)(lVar7 + 0x149c3e1e8 + (ulonglong)(uVar21 - 1) * 2);
      }
      lVar17 = 6;
      uVar10 = (uVar13 + 0xf >> 4) * (uint)*(ushort *)(lVar7 + 0x149c3e1f8);
      iVar22 = (uVar21 - uVar14) * (uint)*(ushort *)(lVar7 + 0x149c3e1f8);
    }
LAB_1400fd359:
    *piVar8 = *piVar8 - uVar10;
    uVar10 = -uVar10;
    uVar6 = 0;
  }
  bVar5 = false;
  uVar14 = 0;
LAB_1400fd365:
  auVar3._8_4_ = iStack_70;
  auVar3._0_8_ = uStack_78;
  auVar3._12_4_ = iStack_6c;
  iVar20 = (iStack_68 + 3U >> 2) * 3;
  if (iStack_68 < 1) {
    iVar20 = 0;
  }
  auVar3 = vpcmpgtd_avx(auVar3,(undefined1  [16])0x0);
  auVar4._0_4_ = (int)uStack_78 + _DAT_14617d010;
  auVar4._4_4_ = (int)((ulonglong)uStack_78 >> 0x20) + _UNK_14617d014;
  auVar4._8_4_ = iStack_70 + _UNK_14617d018;
  auVar4._12_4_ = iStack_6c + _UNK_14617d01c;
  auVar4 = vpsrlvd_avx2(auVar4,_DAT_14617d020);
  iVar19 = ((int)uStack_64 + 1U >> 1) * 3;
  if ((int)uStack_64 < 1) {
    iVar19 = 0;
  }
  auVar3 = vpand_avx(auVar3,auVar4);
  auVar3 = vphaddd_avx(auVar3,auVar3);
  auVar3 = vphaddd_avx(auVar3,auVar3);
  iVar20 = iVar19 + iVar20 + auVar3._0_4_;
  uVar16 = 1;
  if (uStack_64._4_4_ + iVar20 <= *(int *)(param_1 + 0x24)) {
    plVar2 = *(longlong **)(param_1 + 0x60);
    uVar12 = *(uint *)((longlong)plVar2 + 0xc);
    iVar15 = uVar12 + 1;
    iVar19 = 0;
    if (iVar15 != (int)plVar2[2]) {
      iVar19 = iVar15;
    }
    uVar16 = 2;
    if (iVar19 != (int)plVar2[1]) {
      lVar7 = *plVar2;
      *(int *)((longlong)plVar2 + 0xc) = iVar19;
      if (lVar7 != 0) {
        lVar11 = (ulonglong)uVar12 * 0x10;
        *(undefined8 *)(lVar7 + 8 + lVar11) = 0;
        *(ulonglong *)(lVar7 + lVar11) = uStack_48 << 0x3d | (ulonglong)param_2 & 0x1ffffffffffffff8
        ;
        *(ulonglong *)(param_1 + 0x14) = CONCAT44(iStack_68,iStack_6c);
        *(undefined8 *)(param_1 + 0x1c) = uStack_64;
        *(undefined8 *)(param_1 + 8) = uStack_78;
        *(ulonglong *)(param_1 + 0x10) = CONCAT44(iStack_6c,iStack_70);
        piVar8 = (int *)(param_1 + 0x28 + (ulonglong)param_4 * 4);
        *piVar8 = *piVar8 + (int)((ulonglong)
                                  ((longlong)(int)uVar10 *
                                   (longlong)*(int *)(&UNK_1465f6d60 + lVar17 * 4) -
                                  (longlong)(int)uVar6) >> 0xc);
        if (iVar20 != 0) {
          *(int *)(param_1 + 0x78) = iVar20;
        }
        *(int *)(param_1 + 0x7c) = uStack_64._4_4_ + iVar20;
        *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + iVar22;
        uVar9 = 0x10000;
        if (0x10000 < uVar14) {
          uVar9 = (ulonglong)uVar14;
        }
        *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + uVar9;
        if (bVar5) {
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + uVar10;
        }
        if ((uStack_4c == 0) || ((byte)uStack_4c < param_3 && (uint)uStack_48 <= uStack_50)) {
          *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
        }
        *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
        uVar16 = 0;
      }
    }
  }
  return uVar16;
}

