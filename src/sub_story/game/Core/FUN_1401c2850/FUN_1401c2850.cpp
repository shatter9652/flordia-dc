// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401c2850  size: 1062 bytes
// Name:    FUN_1401c2850
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141d83dd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401c2850(longlong param_1,int param_2,undefined8 *param_3,byte param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint *puVar18;
  ulonglong uVar19;
  uint uVar20;
  byte *pbVar21;
  longlong unaff_GS_OFFSET;
  byte *pbStack_50;
  int *piStack_48;
  
  uVar1 = *(uint *)(param_1 + 0x38 + (ulonglong)param_4 * 0x40);
  param_1 = param_1 + (ulonglong)param_4 * 0x40;
  if (uVar1 == 0) {
    uVar7 = 0;
LAB_1401c2c5d:
    *(uint *)(param_1 + 0x38) = uVar7;
    return;
  }
  piStack_48 = (int *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xff4);
  uVar7 = 0;
  uVar12 = 0;
LAB_1401c28ac:
  uVar20 = uVar12 + 1;
  if ((*(uint *)(*(longlong *)(param_1 + 0x18) + (ulonglong)(uVar12 >> 5) * 4) >> (uVar12 & 0x1f) &
      1) != 0) {
    uVar16 = (ulonglong)((uVar12 & 0xffff) * *(int *)(param_1 + 0x14));
    lVar3 = *(longlong *)(param_1 + 8);
    uVar15 = *(ulonglong *)(lVar3 + uVar16);
    pbVar21 = (byte *)(uVar15 & 0xffffffffffffff);
    uVar7 = uVar20;
    if ((pbVar21 == (byte *)0x0) ||
       ((param_2 == 0 && (_DAT_14abce178 + 0x1fffff < pbVar21 || pbVar21 < _DAT_14abce178))))
    goto LAB_1401c2bd9;
    lVar4 = param_3[2];
    if ((pbVar21 < _DAT_14abce178) ||
       (_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000 <= pbVar21)) {
      if ((pbVar21 < *(byte **)(lVar4 + 0x18d0)) || (*(byte **)(lVar4 + 0x18d8) <= pbVar21))
      goto LAB_1401c2b93;
      iVar2 = *piStack_48;
      puVar10 = *(undefined8 **)(lVar4 + 0x17e0 + (longlong)iVar2 * 8);
      if ((puVar10 == (undefined8 *)0x0) ||
         ((pbVar13 = (byte *)*puVar10, pbVar21 < pbVar13 || ((byte *)puVar10[1] <= pbVar21)))) {
        lVar9 = *(longlong *)(lVar4 + 0x1838);
        uVar8 = (ulonglong)*(uint *)(lVar4 + 0x1834);
        lVar17 = lVar9;
        uVar15 = uVar8;
        if (uVar8 != 0) {
          do {
            uVar19 = uVar15 >> 1;
            lVar14 = lVar17 + 0x10 + uVar19 * 0x10;
            if (*(byte **)(lVar14 + -0x10) <= pbVar21) {
              lVar17 = lVar14;
              uVar19 = ~uVar19 + uVar15;
            }
            uVar15 = uVar19;
          } while (0 < (longlong)uVar19);
        }
        lVar14 = lVar17 + -0x10;
        if (lVar17 == uVar8 * 0x10 + lVar9) {
          lVar14 = (ulonglong)(*(uint *)(lVar4 + 0x1834) - 1) * 0x10 + lVar9;
        }
        do {
          uVar12 = *(uint *)(lVar4 + 0x1820);
          if (uVar12 != 0) {
            uVar11 = *(uint *)(lVar14 + 8);
            uVar6 = (uVar11 >> 0x10 ^ uVar11) * -0x7a143595;
            uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
            lVar9 = *(longlong *)(lVar4 + 0x1828);
            uVar15 = (ulonglong)((uVar6 >> 0x10 ^ uVar6) & uVar12 - 1);
            lVar17 = uVar15 * 0x68;
            uVar6 = *(uint *)(lVar9 + lVar17);
            while( true ) {
              if (uVar6 == uVar11) {
                uVar11 = uVar12;
                if (uVar12 == (uint)uVar15) goto LAB_1401c2b40;
                goto LAB_1401c2b26;
              }
              puVar18 = (uint *)(lVar17 + lVar9);
              if (uVar6 == 0) break;
              uVar15 = (ulonglong)
                       ((int)((ulonglong)((longlong)puVar18 + (0x68 - lVar9)) >> 3) * -0x3b13b13b &
                       uVar12 - 1);
              lVar17 = uVar15 * 0x68;
              uVar6 = *(uint *)(lVar9 + lVar17);
            }
            if (*(uint *)(lVar4 + 0x1824) != (uVar12 * 0x4b) / 100) goto LAB_1401c2bf7;
          }
          FUN_141d83dd0((uint *)(lVar4 + 0x1820),uVar12 * 2);
        } while( true );
      }
      goto LAB_1401c2b61;
    }
    if ((*pbVar21 & 3) != 0) goto LAB_1401c2b93;
    if (_DAT_14abce178 + 0x1fffff < pbVar21) {
      uVar8 = (longlong)pbVar21 - _DAT_1498c41b0;
      if ((uVar8 < 0x1000000) &&
         ((*(uint *)((uVar8 >> 0x15) * 4 + 0x1498c41b8) >> ((uint)(uVar8 >> 0x10) & 0x1f) & 1) != 0)
         ) {
        bVar5 = pbVar21[8 - *(longlong *)(pbVar21 + -8)] & 1;
      }
      else {
        bVar5 = func_0x000145085430(pbVar21);
      }
      if (bVar5 != 0) goto LAB_1401c2b93;
    }
    goto LAB_1401c2be4;
  }
  goto LAB_1401c2bd9;
  while (uVar6 = (uint)uVar15 + 1, uVar15 = (ulonglong)uVar6, uVar11 = uVar12, uVar12 != uVar6) {
LAB_1401c2b26:
    uVar11 = (uint)uVar15;
    if (*(int *)(lVar9 + uVar15 * 0x68) != 0) break;
  }
LAB_1401c2b40:
  puVar10 = (undefined8 *)(lVar9 + 8 + (ulonglong)uVar11 * 0x68);
  *(undefined8 **)(lVar4 + 0x17e0 + (longlong)iVar2 * 8) = puVar10;
  pbVar13 = (byte *)*puVar10;
  if ((pbVar13 <= pbVar21) && (pbVar21 < (byte *)puVar10[1])) {
LAB_1401c2b61:
    uVar12 = (uint)((ulonglong)((longlong)pbVar21 - (longlong)pbVar13) / (ulonglong)puVar10[3]);
    if ((*(uint *)(puVar10[10] + (ulonglong)(uVar12 >> 5) * 4) >> (uVar12 & 0x1f) & 1) == 0) {
      uVar15 = *(ulonglong *)(lVar3 + uVar16);
LAB_1401c2be4:
      *(ulonglong *)(lVar3 + uVar16) = uVar15 & 0xff00000000000000;
      goto LAB_1401c2bd9;
    }
  }
LAB_1401c2b93:
  pbStack_50 = pbVar21;
  (**(code **)*param_3)(&pbStack_50,param_3[1],param_3[2]);
  *(ulonglong *)(lVar3 + uVar16) =
       *(ulonglong *)(lVar3 + uVar16) & 0xff00000000000000 | (ulonglong)pbStack_50;
LAB_1401c2bd9:
  uVar12 = uVar20;
  if (uVar20 == uVar1) goto LAB_1401c2c5d;
  goto LAB_1401c28ac;
LAB_1401c2bf7:
  *puVar18 = uVar11;
  *(int *)(lVar4 + 0x1824) = *(int *)(lVar4 + 0x1824) + 1;
  lVar9 = *(longlong *)(lVar4 + 0x1828);
  uVar12 = (int)((ulonglong)((longlong)puVar18 - lVar9) >> 3) * -0x3b13b13b;
  uVar11 = uVar12;
  while ((*(uint *)(lVar4 + 0x1820) != uVar12 &&
         (uVar11 = uVar12, *(int *)(lVar9 + (ulonglong)uVar12 * 0x68) == 0))) {
    uVar12 = uVar12 + 1;
    uVar11 = *(uint *)(lVar4 + 0x1820);
  }
  *(undefined1 (*) [32])(lVar9 + 0x48 + (ulonglong)uVar11 * 0x68) = ZEXT1232(ZEXT812(0));
  goto LAB_1401c2b40;
}

