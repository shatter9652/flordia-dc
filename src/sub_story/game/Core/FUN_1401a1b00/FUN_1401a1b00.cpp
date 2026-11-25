// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a1b00  size: 408 bytes
// Name:    FUN_1401a1b00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140d9cb10, FUN_145716020
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a1b00(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  
  *(byte *)(param_1 + 0x3f9) = *(byte *)(param_1 + 0x3f9) & 0xfb;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  bVar8 = *(byte *)(param_1 + 0x3f6);
  if ((bVar8 & 2) == 0) {
    bVar7 = 0;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x290);
    bVar7 = 0;
    if ((plVar3 != (longlong *)0x0) && (plVar3 != *(longlong **)(param_1 + 0x298))) {
      bVar7 = func_0x0001457c2690(CONCAT71((int7)((ulonglong)*plVar3 >> 8),
                                           *(undefined1 *)(*plVar3 + 0x25)) & 0xffffffff);
    }
  }
  if ((((bVar8 & 1) == 0) || (*(longlong **)(param_1 + 0x298) == (longlong *)0x0)) ||
     (lVar5 = **(longlong **)(param_1 + 0x298),
     bVar8 = func_0x0001457c2690(CONCAT71((int7)((ulonglong)lVar5 >> 8),
                                          *(undefined1 *)(lVar5 + 0x25)) & 0xffffffff),
     (bVar7 | bVar8) != 1)) {
    if ((*(byte *)(param_1 + 0x3f7) & 0x40) != 0) {
      uVar11 = *(uint *)(param_1 + 0x3d0);
      uVar16 = (ulonglong)uVar11;
      lVar19 = uVar16 * 0x10;
      *(undefined4 *)(*(longlong *)(param_1 + 0x390) + uVar16 * 4) = 0xffffffff;
      lVar5 = *(longlong *)(param_1 + 0x380);
      uVar13 = *(uint *)(lVar5 + 4 + lVar19);
      if ((ulonglong)uVar13 != 0) {
        _DAT_146df5b88 = (_DAT_146df5b88 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_146df5b88 >> 0x20);
        lVar6 = *(longlong *)(lVar5 + 8 + lVar19);
        uVar12 = (ulonglong)
                 (uint)(int)((float)(int)uVar13 * _DAT_14615a3a8 *
                            (float)((uint)_DAT_146df5b88 & 0x7fff));
        piVar1 = (int *)(lVar6 + uVar12 * 4);
        lVar2 = lVar6 + 4 + uVar12 * 4;
        iVar15 = *piVar1;
        func_0x000145f40570(piVar1,lVar2,(lVar6 + (ulonglong)uVar13 * 4) - lVar2);
        piVar1 = (int *)(lVar5 + 4 + lVar19);
        *piVar1 = *piVar1 + -1;
        if ((*(int *)(*(longlong *)(param_1 + 0x380) + 4 + lVar19) == 0) &&
           (iVar10 = FUN_140d9cba0(*(undefined8 *)(param_1 + 0x270),uVar11), iVar10 != 0)) {
          iVar18 = 0;
          do {
            if ((iVar10 == 1) || (iVar15 != iVar18)) {
              lVar2 = *(longlong *)(param_1 + 0x380);
              uVar11 = *(uint *)(lVar2 + 4 + lVar19);
              lVar5 = lVar2 + lVar19;
              if (uVar11 == *(uint *)(lVar2 + lVar19)) {
                uVar13 = uVar11 >> 1;
                if (uVar11 < 2) {
                  uVar13 = 1;
                }
                FUN_1455350b0(lVar5,uVar13 + uVar11);
                uVar11 = *(uint *)(lVar5 + 4);
              }
              *(uint *)(lVar5 + 4) = uVar11 + 1;
              *(int *)(*(longlong *)(lVar5 + 8) + (ulonglong)uVar11 * 4) = iVar18;
            }
            iVar18 = iVar18 + 1;
          } while (iVar10 != iVar18);
        }
        *(int *)(*(longlong *)(param_1 + 0x390) + uVar16 * 4) = iVar15;
      }
      return;
    }
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x270);
    uVar16 = 0;
    do {
      pcVar4 = *(char **)(param_1 + 0x2d8 + uVar16 * 0x10);
      if ((pcVar4 != (char *)0x0 && *(longlong *)(param_1 + 0x2d0 + uVar16 * 0x10) != 0) &&
         (*pcVar4 == '\x01')) {
        iVar15 = (int)uVar16;
        cVar9 = FUN_140d9cb10(lVar5 + 0x88,uVar16 & 0xffffffff);
        if (cVar9 != '\0') {
          uVar12 = (ulonglong)*(ushort *)(lVar5 + 0x98);
          lVar19 = *(longlong *)(lVar5 + 0x90);
          do {
            uVar14 = uVar12 >> 1;
            lVar2 = lVar19 + 0x18 + uVar14 * 0x18;
            uVar17 = ~uVar14 + uVar12;
            uVar12 = uVar14;
            if (*(int *)(lVar2 + -0x18) < iVar15) {
              lVar19 = lVar2;
              uVar12 = uVar17;
            }
          } while (0 < (longlong)uVar12);
          if (*(char *)(lVar19 + 0x10) == '\x01') {
            *(int *)(param_1 + 0x3cc) = iVar15;
            goto LAB_1401a1c38;
          }
        }
        *(int *)(param_1 + 0x3c8) = iVar15;
      }
LAB_1401a1c38:
      uVar16 = uVar16 + 1;
    } while (uVar16 != 9);
    if (((*(byte *)(param_1 + 0x3f7) & 0x40) != 0) &&
       ((*(longlong *)(param_1 + 0x238) == 0 ||
        (*(uint *)(*(longlong *)(param_1 + 0x238) + 0x18) < 2)))) {
      FUN_145716020(param_1,*(undefined4 *)(param_1 + 0x3d0));
      *(byte *)(param_1 + 0x3f9) = *(byte *)(param_1 + 0x3f9) | 4;
    }
  }
  return;
}

