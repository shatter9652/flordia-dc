// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007d440  size: 818 bytes
// Name:    FUN_14007d440
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007d440(longlong param_1,longlong param_2)

{
  short *psVar1;
  undefined2 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined2 uVar7;
  short *psVar8;
  short *psVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined2 *puVar13;
  short *psVar14;
  short *psVar15;
  longlong lVar16;
  longlong lVar17;
  short *psVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  
  switch(*(undefined4 *)(param_2 + 4)) {
  case 0:
    cVar3 = FUN_1451cca70(*(undefined2 *)(param_1 + 0x448));
    if (cVar3 != '\0') {
      return;
    }
    uVar4 = *(uint *)(param_2 + 8);
    uVar19 = *(uint *)(_DAT_14a924088 + 0x1548);
    uVar7 = 0;
    if (uVar19 <= uVar4) {
      uVar7 = *(undefined2 *)(param_2 + 0xc);
    }
    if (uVar19 < uVar4) {
      uVar19 = uVar4;
    }
    if (*(char *)(param_1 + 0x44a) == '\x01') {
      uVar2 = *(undefined2 *)(param_1 + 0x448);
      cVar3 = func_0x000144ddb170(uVar2);
      if (cVar3 != '\0') {
        uVar5 = func_0x000144da4590();
        func_0x000140035c50(uVar5,uVar2,uVar7,uVar19);
      }
      *(undefined1 *)(param_1 + 0x44a) = 0;
    }
    return;
  case 1:
    if (*(short *)(param_2 + 0x10) == -1) {
      return;
    }
    uVar4 = *(uint *)(param_1 + 0x43c);
    if (uVar4 == *(uint *)(param_1 + 0x438)) {
      uVar19 = 1;
      if (1 < uVar4) {
        uVar19 = uVar4 >> 1;
      }
      lVar17 = func_0x000144d9c140(8,(ulonglong)(uVar19 + uVar4) << 4);
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x43c);
      if (uVar6 != 0) {
        lVar11 = *(longlong *)(param_1 + 0x440);
        lVar12 = uVar6 << 4;
        lVar16 = lVar17;
        lVar21 = lVar11;
        do {
          if (lVar16 != 0) {
            FUN_1420cd9e0(lVar16,lVar21);
            *(undefined8 *)(lVar16 + 8) = *(undefined8 *)(lVar21 + 8);
          }
          lVar21 = lVar21 + 0x10;
          lVar16 = lVar16 + 0x10;
          lVar12 = lVar12 + -0x10;
        } while (lVar12 != 0);
        lVar16 = uVar6 << 4;
        do {
          FUN_145026b00(lVar11);
          lVar11 = lVar11 + 0x10;
          lVar16 = lVar16 + -0x10;
        } while (lVar16 != 0);
      }
      if (*(longlong *)(param_1 + 0x440) != 0) {
        func_0x000144d9c130();
      }
      *(longlong *)(param_1 + 0x440) = lVar17;
      *(uint *)(param_1 + 0x438) = uVar19 + uVar4;
      uVar4 = *(uint *)(param_1 + 0x43c);
    }
    else {
      lVar17 = *(longlong *)(param_1 + 0x440);
    }
    *(uint *)(param_1 + 0x43c) = uVar4 + 1;
    puVar13 = (undefined2 *)((ulonglong)uVar4 * 0x10 + lVar17);
    if (lVar17 != 0) {
      FUN_144eef500(puVar13);
    }
    *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(param_2 + 8);
    FUN_14007b1d0(puVar13,*(undefined2 *)(param_2 + 0x10));
    uVar7 = *puVar13;
    cVar3 = func_0x000144ddb170(uVar7);
    if ((cVar3 != '\0') && (*(char *)(puVar13 + 1) == '\0')) {
      uVar5 = func_0x000144da4590();
      func_0x00014007b300(uVar5,uVar7);
      *(undefined1 *)(puVar13 + 1) = 1;
    }
    return;
  default:
    return;
  case 3:
    break;
  case 4:
    if (*(short *)(param_2 + 8) == -1) {
      return;
    }
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x43c);
    psVar8 = *(short **)(param_1 + 0x440);
    psVar9 = psVar8;
    if (uVar6 != 0) {
      lVar17 = uVar6 * 0x10 + -0x10;
      while (psVar14 = psVar9, *psVar9 != *(short *)(param_2 + 8)) {
        psVar9 = psVar9 + 8;
        lVar17 = lVar17 + -0x10;
        if (lVar17 == -0x10) {
          return;
        }
      }
      for (; lVar17 != 0; lVar17 = lVar17 + -0x10) {
        psVar18 = psVar14 + 8;
        if (*psVar18 != *(short *)(param_2 + 8)) {
          FUN_140005980(psVar9,psVar18);
          *(undefined8 *)(psVar9 + 4) = *(undefined8 *)(psVar14 + 0xc);
          psVar9 = psVar9 + 8;
        }
        psVar14 = psVar18;
      }
    }
    psVar8 = psVar8 + uVar6 * 8;
    if (psVar9 != psVar8) {
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x43c);
      lVar17 = *(longlong *)(param_1 + 0x440);
      psVar15 = (short *)(uVar6 * 0x10 + lVar17);
      psVar14 = psVar8;
      psVar18 = psVar9;
      if (psVar15 != psVar8) {
        do {
          psVar1 = psVar14 + 8;
          FUN_140005980(psVar18,psVar14);
          *(undefined8 *)(psVar18 + 4) = *(undefined8 *)(psVar14 + 4);
          psVar14 = psVar1;
          psVar18 = psVar18 + 8;
        } while (psVar1 != psVar15);
        lVar17 = *(longlong *)(param_1 + 0x440);
        uVar6 = (ulonglong)*(uint *)(param_1 + 0x43c);
      }
      uVar20 = (ulonglong)((longlong)psVar8 - (longlong)psVar9) >> 4;
      uVar10 = uVar20 & 0xffffffff;
      if (uVar10 != 0) {
        lVar11 = uVar10 * -0x10;
        do {
          FUN_145026b00(lVar17 + uVar6 * 0x10 + lVar11);
          lVar11 = lVar11 + 0x10;
        } while (lVar11 != 0);
        uVar6 = (ulonglong)*(uint *)(param_1 + 0x43c);
      }
      *(int *)(param_1 + 0x43c) = (int)uVar6 - (int)uVar20;
    }
    return;
  }
  if (*(short *)(param_2 + 0x10) == -1) {
    return;
  }
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x43c);
  if (uVar6 == 0) {
    return;
  }
  psVar8 = *(short **)(param_1 + 0x440);
  do {
    if (*psVar8 == *(short *)(param_2 + 0x10)) {
      *(undefined8 *)(psVar8 + 4) = *(undefined8 *)(param_2 + 8);
      return;
    }
    psVar8 = psVar8 + 8;
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  return;
}

