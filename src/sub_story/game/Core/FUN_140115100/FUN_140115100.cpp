// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140115100  size: 922 bytes
// Name:    FUN_140115100
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142016bc0, FUN_140494860, FUN_140fd6f10, FUN_14337f160, FUN_1433802c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140115100(uint *param_1)

{
  float *pfVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined1 uVar14;
  undefined8 unaff_RSI;
  longlong lVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  undefined8 in_stack_ffffffffffffff38;
  longlong lVar21;
  undefined4 uVar22;
  
  cVar3 = func_0x0001455be4e0(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4));
  if (cVar3 == '\0') {
    return;
  }
  lVar11 = *(longlong *)(_DAT_14abbf348 + 0x28);
  uVar8 = (ulonglong)((*param_1 & 0xffff) << 4);
  if (*(short *)(lVar11 + 8 + uVar8) == (short)(*param_1 >> 0x10)) {
    lVar15 = *(longlong *)(uVar8 + lVar11);
  }
  else {
    lVar15 = 0;
  }
  uVar8 = (ulonglong)((param_1[1] & 0xffff) << 4);
  if (*(short *)(lVar11 + 8 + uVar8) == (short)(param_1[1] >> 0x10)) {
    lVar11 = *(longlong *)(lVar11 + uVar8);
  }
  else {
    lVar11 = 0;
  }
  uVar6 = func_0x000144f8c2c0(lVar15);
  uVar7 = func_0x000144f8c2c0(lVar11);
  bVar5 = *(byte *)(lVar15 + 0x155);
  bVar4 = *(byte *)(lVar11 + 0x155);
  if (bVar4 == 6) {
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),*(longlong *)(lVar15 + 0xf8) == 0x4000000);
  }
  else {
    uVar8 = 0;
  }
  uVar16 = (uint)bVar4;
  if (bVar5 == 6) {
    bVar19 = *(longlong *)(lVar11 + 0xf8) == 0x4000000;
    bVar4 = 2;
    uVar10 = uVar16 & 0xfffffffb;
    bVar9 = uVar10 == 8;
  }
  else {
    uVar10 = bVar4 & 0xfffffffb;
    bVar4 = bVar5 & 0xfb;
    bVar19 = false;
    bVar20 = false;
    bVar9 = uVar10 == 8;
    if (bVar4 == 9) {
      bVar2 = true;
      bVar18 = false;
      bVar17 = true;
      if (uVar10 == 8) goto LAB_140115222;
    }
  }
  bVar2 = bVar9;
  bVar20 = bVar4 == 8;
  bVar17 = uVar10 == 9 && bVar20;
  bVar18 = bVar19;
LAB_140115222:
  uVar10 = (uint)bVar5;
  if ((((0xf < uVar10) || ((0x80c0U >> (uVar10 & 0x1f) & 1) == 0)) || (bVar9 = true, !bVar2)) &&
     ((bVar9 = false, uVar16 < 0x10 && ((0x80c0U >> (uVar16 & 0x1f) & 1) != 0)))) {
    bVar9 = bVar20;
  }
  uVar12 = CONCAT71((int7)((uVar8 & 0xffffffff) >> 8),(byte)(uVar8 & 0xffffffff) | bVar18);
  cVar3 = func_0x00014337f110(lVar15,lVar11,uVar12);
  if ((cVar3 != '\0') && (cVar3 = FUN_140494860(uVar6,uVar7,uVar12), cVar3 != '\0')) {
    uVar14 = (undefined1)uVar8;
    uVar12 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff38 >> 8),uVar14);
    bVar4 = FUN_140fd6f10(uVar6,uVar7,lVar15,lVar11,uVar12,bVar18,uVar10,uVar16);
    uVar22 = (undefined4)((ulonglong)uVar12 >> 0x20);
    if (DAT_14abbe2e0 == '\0') {
      cVar3 = func_0x000144f7b6a0();
      if ((cVar3 == '\0') && (DAT_14abbe2e1 == '\0')) {
        lVar13 = lVar11;
        bVar5 = FUN_142016bc0(*(undefined8 *)(param_1 + 4),uVar6,uVar7,lVar15,lVar11,uVar14,bVar18,
                              bVar5,uVar16);
        uVar22 = (undefined4)((ulonglong)lVar13 >> 0x20);
      }
      else {
        bVar5 = 0;
      }
    }
    else {
      bVar5 = 0;
    }
    lVar13 = *(longlong *)(param_1 + 2);
    if ((lVar13 != 0 & (bVar4 | bVar5)) == 1) {
      do {
        lVar21 = lVar11;
        FUN_14337f160(lVar13,uVar6,uVar7,lVar15,lVar11,uVar14,bVar18,bVar4,bVar5,bVar17,bVar9);
        uVar22 = (undefined4)((ulonglong)lVar21 >> 0x20);
        lVar13 = *(longlong *)(lVar13 + 0x20);
      } while (lVar13 != 0);
    }
    if (((DAT_14abbe2e0 == '\0') && (cVar3 = func_0x000144f7b6a0(), cVar3 == '\0')) &&
       (DAT_14abbe2e1 == '\0')) {
      lVar11 = *(longlong *)(param_1 + 2);
      if (lVar11 == 0) {
        bVar4 = 0;
        bVar5 = 0;
      }
      else {
        bVar5 = 0;
        bVar4 = 0;
        do {
          pfVar1 = (float *)(lVar11 + 0x58);
          lVar11 = *(longlong *)(lVar11 + 0x20);
          bVar4 = bVar4 | *pfVar1 <= 0.0;
          bVar5 = bVar5 | 0.0 < *pfVar1;
        } while (lVar11 != 0);
      }
      FUN_1433802c0(uVar6,uVar7,uVar10,uVar16,
                    CONCAT44(uVar22,*(undefined4 *)(*(longlong *)(param_1 + 4) + 0x58)),bVar5,bVar4)
      ;
    }
  }
  return;
}

