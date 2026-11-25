// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401c3050  size: 1158 bytes
// Name:    FUN_1401c3050
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141d83dd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401c3050(longlong param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  byte *pbVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint *puVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong *puVar21;
  longlong unaff_GS_OFFSET;
  byte *pbStack_60;
  byte *pbStack_58;
  uint *puStack_50;
  int *piStack_48;
  
  uVar2 = *(uint *)(param_1 + 0x138);
  if (uVar2 == 0) {
    uVar7 = 0;
LAB_1401c34bc:
    *(uint *)(param_1 + 0x138) = uVar7;
    return;
  }
  piStack_48 = (int *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xff4);
  uVar7 = 0;
  uVar13 = 0;
LAB_1401c30a0:
  uVar1 = uVar13 + 1;
  if ((*(uint *)(*(longlong *)(param_1 + 0x118) + (ulonglong)(uVar13 >> 5) * 4) >> (uVar13 & 0x1f) &
      1) != 0) {
    uVar10 = (ulonglong)((uVar13 & 0xffff) * *(int *)(param_1 + 0x114));
    uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0x108) + uVar10);
    pbVar8 = (byte *)(uVar15 & 0xffffffffffffff);
    uVar7 = uVar1;
    if (pbVar8 == (byte *)0x0) goto LAB_1401c341f;
    puVar21 = (ulonglong *)(*(longlong *)(param_1 + 0x108) + uVar10);
    pbStack_60 = pbVar8;
    if ((param_2 != 0) || (pbVar8 <= _DAT_14abce178 + 0x1fffff && _DAT_14abce178 <= pbVar8)) {
      lVar4 = param_3[2];
      if ((pbVar8 < _DAT_14abce178) ||
         (_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000 <= pbVar8)) {
        if ((pbVar8 < *(byte **)(lVar4 + 0x18d0)) || (*(byte **)(lVar4 + 0x18d8) <= pbVar8))
        goto LAB_1401c339a;
        iVar3 = *piStack_48;
        puVar12 = *(undefined8 **)(lVar4 + 0x17e0 + (longlong)iVar3 * 8);
        if ((puVar12 == (undefined8 *)0x0) ||
           ((pbVar14 = (byte *)*puVar12, pbVar8 < pbVar14 || ((byte *)puVar12[1] <= pbVar8)))) {
          lVar11 = *(longlong *)(lVar4 + 0x1838);
          uVar10 = (ulonglong)*(uint *)(lVar4 + 0x1834);
          lVar16 = lVar11;
          uVar15 = uVar10;
          if (uVar10 != 0) {
            do {
              uVar19 = uVar15 >> 1;
              lVar20 = lVar16 + 0x10 + uVar19 * 0x10;
              if (*(byte **)(lVar20 + -0x10) <= pbVar8) {
                lVar16 = lVar20;
                uVar19 = ~uVar19 + uVar15;
              }
              uVar15 = uVar19;
            } while (0 < (longlong)uVar19);
          }
          puStack_50 = (uint *)(lVar4 + 0x1820);
          puVar17 = puStack_50;
          lVar20 = lVar16 + -0x10;
          if (lVar16 == uVar10 * 0x10 + lVar11) {
            lVar20 = (ulonglong)(*(uint *)(lVar4 + 0x1834) - 1) * 0x10 + lVar11;
          }
          do {
            puVar5 = puStack_50;
            uVar13 = *puVar17;
            if (uVar13 != 0) {
              uVar18 = *(uint *)(lVar20 + 8);
              uVar9 = (uVar18 >> 0x10 ^ uVar18) * -0x7a143595;
              uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
              lVar11 = *(longlong *)(lVar4 + 0x1828);
              uVar15 = (ulonglong)((uVar9 >> 0x10 ^ uVar9) & uVar13 - 1);
              lVar16 = uVar15 * 0x68;
              uVar9 = *(uint *)(lVar11 + lVar16);
              while( true ) {
                if (uVar9 == uVar18) {
                  uVar18 = (uint)uVar15;
                  while ((uVar9 = uVar13, uVar13 != uVar18 &&
                         (uVar9 = (uint)uVar15, *(int *)(lVar11 + uVar15 * 0x68) == 0))) {
                    uVar18 = uVar9 + 1;
                    uVar15 = (ulonglong)uVar18;
                  }
                  goto LAB_1401c333f;
                }
                puVar17 = (uint *)(lVar16 + lVar11);
                if (uVar9 == 0) break;
                uVar15 = (ulonglong)
                         ((int)((ulonglong)((longlong)puVar17 + (0x68 - lVar11)) >> 3) * -0x3b13b13b
                         & uVar13 - 1);
                lVar16 = uVar15 * 0x68;
                uVar9 = *(uint *)(lVar11 + lVar16);
              }
              if (*(uint *)(lVar4 + 0x1824) != (uVar13 * 0x4b) / 100) goto LAB_1401c344d;
            }
            pbStack_58 = pbVar8;
            FUN_141d83dd0(puStack_50,uVar13 * 2);
            pbVar8 = pbStack_58;
            puVar17 = puVar5;
          } while( true );
        }
        goto LAB_1401c3365;
      }
      if ((*pbVar8 & 3) != 0) goto LAB_1401c339a;
      if (_DAT_14abce178 + 0x1fffff < pbVar8) {
        uVar10 = (longlong)pbVar8 - _DAT_1498c41b0;
        if ((uVar10 < 0x1000000) &&
           ((*(uint *)((uVar10 >> 0x15) * 4 + 0x1498c41b8) >> ((uint)(uVar10 >> 0x10) & 0x1f) & 1)
            != 0)) {
          bVar6 = pbVar8[8 - *(longlong *)(pbVar8 + -8)] & 1;
        }
        else {
          bVar6 = func_0x000145085430(pbVar8);
        }
        if (bVar6 != 0) goto LAB_1401c339a;
      }
      goto LAB_1401c3430;
    }
    goto LAB_1401c33e2;
  }
  goto LAB_1401c341f;
LAB_1401c344d:
  *puVar17 = uVar18;
  *(int *)(lVar4 + 0x1824) = *(int *)(lVar4 + 0x1824) + 1;
  lVar11 = *(longlong *)(lVar4 + 0x1828);
  uVar13 = (int)((ulonglong)((longlong)puVar17 - lVar11) >> 3) * -0x3b13b13b;
  uVar9 = uVar13;
  while ((*(uint *)(lVar4 + 0x1820) != uVar13 &&
         (uVar9 = uVar13, *(int *)(lVar11 + (ulonglong)uVar13 * 0x68) == 0))) {
    uVar13 = uVar13 + 1;
    uVar9 = *(uint *)(lVar4 + 0x1820);
  }
  *(undefined1 (*) [32])(lVar11 + 0x48 + (ulonglong)uVar9 * 0x68) = ZEXT1232(ZEXT812(0));
LAB_1401c333f:
  puVar12 = (undefined8 *)(lVar11 + 8 + (ulonglong)uVar9 * 0x68);
  *(undefined8 **)(lVar4 + 0x17e0 + (longlong)iVar3 * 8) = puVar12;
  pbVar14 = (byte *)*puVar12;
  if ((pbVar8 < pbVar14) || ((byte *)puVar12[1] <= pbVar8)) {
LAB_1401c339a:
    (**(code **)*param_3)(&pbStack_60,param_3[1],param_3[2]);
    *puVar21 = *puVar21 & 0xff00000000000000 | (ulonglong)pbStack_60;
  }
  else {
LAB_1401c3365:
    uVar13 = (uint)((ulonglong)((longlong)pbVar8 - (longlong)pbVar14) / (ulonglong)puVar12[3]);
    if ((*(uint *)(puVar12[10] + (ulonglong)(uVar13 >> 5) * 4) >> (uVar13 & 0x1f) & 1) != 0)
    goto LAB_1401c339a;
    uVar15 = *puVar21;
LAB_1401c3430:
    *puVar21 = uVar15 & 0xff00000000000000;
    puVar21[1] = 0;
  }
  if (param_2 == 0) {
LAB_1401c33e2:
    pbVar8 = (byte *)puVar21[1];
    if (_DAT_14abce178 + 0x1fffff < pbVar8 || pbVar8 < _DAT_14abce178) goto LAB_1401c341f;
  }
  else {
    pbVar8 = (byte *)puVar21[1];
  }
  if (pbVar8 != (byte *)0x0) {
    (**(code **)*param_3)(puVar21 + 1,param_3[1],param_3[2]);
  }
LAB_1401c341f:
  uVar13 = uVar1;
  if (uVar1 == uVar2) goto LAB_1401c34bc;
  goto LAB_1401c30a0;
}

