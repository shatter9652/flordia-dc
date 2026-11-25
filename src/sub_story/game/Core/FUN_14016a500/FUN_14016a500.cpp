// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016a500  size: 1123 bytes
// Name:    FUN_14016a500
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14016a970, FUN_14016afe0, FUN_1401ee7c0, FUN_1402254e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14016a500(ulonglong *param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char *pcVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  float *pfVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 uVar13;
  byte bVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  longlong lStack_98;
  undefined4 uStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  ulonglong uStack_78;
  ulonglong uStack_70;
  
  uVar3 = param_1[1];
  fVar17 = *(float *)(param_1 + 5);
  uVar4 = *param_1;
  pcVar5 = (char *)param_1[3];
  uStack_70 = param_1[2];
  uStack_78 = param_1[4];
  cVar7 = func_0x000144ebbed0(uVar4,0);
  if (cVar7 == '\0') {
    return;
  }
  plVar8 = (longlong *)func_0x00014016a080(*(undefined4 *)(uVar3 + 8));
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  if (pcVar5 == (char *)0x0) {
    return;
  }
  lVar9 = func_0x000144e63d10(*(undefined4 *)(uVar4 + 0x9c));
  if (lVar9 == 0) {
LAB_14016a5d7:
    bVar14 = 0;
LAB_14016a5da:
    cVar7 = FUN_1402254e0(uVar4,1,1);
    if ((bVar14 == 0) && (cVar7 != '\0')) {
      return;
    }
  }
  else {
    uVar1 = *(uint *)(lVar9 + 0x984);
    uVar12 = (ulonglong)uVar1;
    if (uVar12 == 0x1ffff) {
LAB_14016a5b2:
      lVar15 = 0;
    }
    else {
      uVar2 = *(uint *)(_DAT_14abbe8c8[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
      if (((~uVar2 & *(uint *)(_DAT_14abbe8c8 + 6)) != 0) ||
         (uVar12 = (ulonglong)(uVar1 & 0xfffe0000), (uVar2 & 0x7fe0000) != (uVar1 & 0xfffe0000)))
      goto LAB_14016a5b2;
      lVar15 = (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abbe8c8[1]) + *_DAT_14abbe8c8;
    }
    uVar1 = *(uint *)(lVar9 + 0x224);
    if (-1 < (short)uVar1) {
      if (lVar15 == 0) goto LAB_14016a5cd;
LAB_14016a935:
      bVar14 = (*(byte *)(*(longlong *)(lVar15 + 0x20) + 0x41c) & 8) >> 3;
      if ((uVar1 & 0x40) != 0) goto LAB_14016a952;
      goto LAB_14016a5da;
    }
    lVar15 = FUN_1401ee7c0(*(undefined8 *)(lVar9 + 0x688),
                           CONCAT71((int7)(uVar12 >> 8),*(undefined1 *)(lVar9 + 0xb79)));
    if (lVar15 == 0) {
LAB_14016a5cd:
      if ((uVar1 & 0x40) != 0) {
        return;
      }
      goto LAB_14016a5d7;
    }
    if ((2 < (byte)(*(char *)(lVar15 + 0xfa) - 9U)) ||
       (lVar9 = func_0x000144f80af0(*(undefined4 *)(lVar15 + 0x9c)), lVar9 == 0))
    goto LAB_14016a935;
    bVar14 = (*(byte *)(*(longlong *)(lVar15 + 0x20) + 0x41c) & 8) >> 3;
    if ((((uVar1 & 0x40) == 0) && (*(char *)(lVar9 + 0x608) != '\0')) &&
       (_DAT_146159cc4 <= *(float *)(lVar9 + 0x5b4))) goto LAB_14016a5da;
LAB_14016a952:
    bVar16 = bVar14 == 0;
    bVar14 = 1;
    if (bVar16) {
      return;
    }
  }
  if (_DAT_14ab56e38 == 0) {
LAB_14016a793:
    bVar16 = false;
  }
  else {
    if (_DAT_14ab56e38 == uVar4) {
      FUN_14016afe0(param_1);
      uVar13 = 1;
      if (*pcVar5 == '\0') {
        return;
      }
      goto LAB_14016a674;
    }
    lVar9 = func_0x000144dd7540(*(undefined4 *)(_DAT_14ab56e38 + 0x9c));
    if (lVar9 == 0) goto LAB_14016a793;
    if ((*(byte *)(lVar9 + 0x11) & 8) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(ulonglong *)(lVar9 + 0x8e8);
    }
    bVar16 = uVar12 == uVar4;
  }
  FUN_14016afe0(param_1);
  if (*pcVar5 == '\0') {
    return;
  }
  if (bVar16) {
    uVar13 = 1;
  }
  else {
    if (*(float *)(pcVar5 + 4) * *(float *)(pcVar5 + 4) < fVar17) {
      return;
    }
    uVar13 = 0;
  }
LAB_14016a674:
  uVar11 = *(ushort *)(plVar8 + 1);
  if (uVar11 != 0) {
    if (bVar14 == 0) {
      lVar15 = 0x10;
      lVar9 = 0;
      fVar18 = 0.0;
      uVar12 = 0;
      do {
        pfVar10 = (float *)func_0x000145025af0(*(undefined4 *)(*plVar8 + lVar15));
        if ((pfVar10 != (float *)0x0) && (fVar18 < *pfVar10)) {
          uStack_a0 = uStack_70;
          lStack_98 = *(longlong *)(uStack_78 + 8) + lVar9;
          uStack_90 = (undefined4)uVar12;
          uStack_b0 = uVar4;
          uStack_a8 = uVar3;
          fStack_8c = fVar17;
          uStack_80 = uVar13;
          uStack_84 = func_0x000144e8f130(*(undefined4 *)((longlong)param_1 + 0x2c),
                                          *(undefined4 *)(pcVar5 + 8),*(undefined4 *)(pcVar5 + 0xc))
          ;
          uStack_88 = 0x3f800000;
          uStack_7f = 0;
          FUN_14016a970(&uStack_b0);
          uVar11 = *(ushort *)(plVar8 + 1);
        }
        uVar12 = uVar12 + 1;
        lVar15 = lVar15 + 0x30;
        lVar9 = lVar9 + 0x40;
      } while (uVar12 < uVar11);
    }
    else {
      lVar9 = 0x10;
      lVar15 = 0;
      fVar18 = 0.0;
      uVar12 = 0;
      do {
        lVar6 = *plVar8;
        pfVar10 = (float *)func_0x000145025af0(*(undefined4 *)(lVar6 + lVar9));
        if (((pfVar10 != (float *)0x0) && (fVar18 < *pfVar10)) &&
           ((*(uint *)(lVar6 + -8 + lVar9) & 0xfffffffe) == 2)) {
          uStack_a0 = uStack_70;
          lStack_98 = *(longlong *)(uStack_78 + 8) + lVar15;
          uStack_90 = (undefined4)uVar12;
          uStack_b0 = uVar4;
          uStack_a8 = uVar3;
          fStack_8c = fVar17;
          uStack_80 = uVar13;
          uStack_84 = func_0x000144e8f130(*(undefined4 *)((longlong)param_1 + 0x2c),
                                          *(undefined4 *)(pcVar5 + 8),*(undefined4 *)(pcVar5 + 0xc))
          ;
          uStack_88 = _DAT_1492e1a78;
          uStack_7f = 1;
          FUN_14016a970(&uStack_b0);
          uVar11 = *(ushort *)(plVar8 + 1);
        }
        uVar12 = uVar12 + 1;
        lVar15 = lVar15 + 0x40;
        lVar9 = lVar9 + 0x30;
      } while (uVar12 < uVar11);
    }
  }
  return;
}

