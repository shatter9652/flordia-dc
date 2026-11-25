// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ca7b0  size: 2705 bytes
// Name:    FUN_1401ca7b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_141d83dd0, FUN_144fd9d80, FUN_1406905d0, FUN_144fc9930
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401ca7b0(uint *param_1,undefined8 *param_2)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  ulonglong *puVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined1 (*pauVar9) [16];
  longlong lVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined1 (*pauVar14) [16];
  ulonglong *puVar15;
  longlong lVar16;
  ulonglong *puVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong *plVar25;
  ulonglong uVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong unaff_GS_OFFSET;
  uint uStack_bc;
  longlong lStack_b8;
  ulonglong *puStack_a8;
  uint uStack_9c;
  char cStack_98;
  uint *puStack_90;
  ulonglong uStack_88;
  uint *puStack_80;
  undefined8 *puStack_78;
  ulonglong uStack_70;
  int *piStack_68;
  undefined8 auStack_60 [4];
  
  uVar28 = 0;
  FUN_144fc9930(auStack_60,0);
  puVar22 = param_1 + 8;
  FUN_140004b40(puVar22);
  lVar16 = param_2[2];
  uVar26 = (ulonglong)*param_1;
  plVar25 = *(longlong **)(param_1 + 2);
  puStack_78 = param_2;
  if (uVar26 == 0) {
LAB_1401ca827:
    if ((uint)uVar28 != *param_1) {
      lStack_b8 = 0;
      uStack_bc = 0;
      uStack_88 = 0;
      piStack_68 = (int *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xff4);
      puStack_80 = (uint *)(lVar16 + 0x1820);
      puVar17 = (ulonglong *)(plVar25 + (uVar28 & 0xffffffff) * 3);
      puStack_90 = puVar22;
LAB_1401ca886:
      puVar3 = (ulonglong *)*puVar17;
      uVar19 = (uint)uVar26;
      uVar27 = (uint)uVar28;
      if ((puVar3 < _DAT_14abce178) ||
         ((ulonglong *)((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000) <=
          puVar3)) {
        iVar2 = *piStack_68;
        puVar12 = *(undefined8 **)(lVar16 + 0x17e0 + (longlong)iVar2 * 8);
        if ((puVar12 == (undefined8 *)0x0) ||
           ((puVar15 = (ulonglong *)*puVar12, puVar3 < puVar15 ||
            ((ulonglong *)puVar12[1] <= puVar3)))) {
          lVar10 = *(longlong *)(lVar16 + 0x1838);
          uVar24 = (ulonglong)*(uint *)(lVar16 + 0x1834);
          lVar21 = lVar10;
          uVar20 = uVar24;
          if (uVar24 != 0) {
            do {
              uVar23 = uVar20 >> 1;
              lVar18 = lVar21 + 0x10 + uVar23 * 0x10;
              if (*(ulonglong **)(lVar18 + -0x10) <= puVar3) {
                lVar21 = lVar18;
                uVar23 = ~uVar23 + uVar20;
              }
              uVar20 = uVar23;
            } while (0 < (longlong)uVar23);
          }
          lVar18 = lVar21 + -0x10;
          if (lVar21 == uVar24 * 0x10 + lVar10) {
            lVar18 = (ulonglong)(*(uint *)(lVar16 + 0x1834) - 1) * 0x10 + lVar10;
          }
          do {
            uVar11 = *puStack_80;
            if (uVar11 != 0) {
              uVar13 = *(uint *)(lVar18 + 8);
              uVar6 = (uVar13 >> 0x10 ^ uVar13) * -0x7a143595;
              uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
              lVar10 = *(longlong *)(lVar16 + 0x1828);
              uVar20 = (ulonglong)((uVar6 >> 0x10 ^ uVar6) & uVar11 - 1);
              lVar21 = uVar20 * 0x68;
              uVar6 = *(uint *)(lVar10 + lVar21);
              while( true ) {
                if (uVar6 == uVar13) goto LAB_1401caf15;
                puVar22 = (uint *)(lVar21 + lVar10);
                if (uVar6 == 0) break;
                uVar20 = (ulonglong)
                         ((int)((ulonglong)((longlong)puVar22 + (0x68 - lVar10)) >> 3) * -0x3b13b13b
                         & uVar11 - 1);
                lVar21 = uVar20 * 0x68;
                uVar6 = *(uint *)(lVar10 + lVar21);
              }
              if (*(uint *)(lVar16 + 0x1824) != (uVar11 * 0x4b) / 100) goto LAB_1401caebd;
            }
            FUN_141d83dd0(puStack_80,uVar11 * 2);
          } while( true );
        }
        goto LAB_1401caf45;
      }
      uVar20 = *puVar3;
      if ((uVar20 & 3) == 0) {
        if ((ulonglong *)((longlong)_DAT_14abce178 + 0x1fffff) < puVar3) {
          uVar24 = (longlong)puVar3 - _DAT_1498c41b0;
          if ((uVar24 < 0x1000000) &&
             ((*(uint *)((uVar24 >> 0x15) * 4 + 0x1498c41b8) >> ((uint)(uVar24 >> 0x10) & 0x1f) & 1)
              != 0)) {
            bVar5 = *(byte *)((longlong)puVar3 + (8 - puVar3[-1])) & 1;
          }
          else {
            bVar5 = func_0x000145085430(puVar3);
          }
          if (bVar5 != 0) goto LAB_1401ca8be;
        }
        bVar4 = false;
LAB_1401caab9:
        uVar20 = puVar17[1];
        uVar24 = puVar17[2];
        puStack_a8 = puVar3;
        (**(code **)*puStack_78)(&puStack_a8,puStack_78[1],puStack_78[2]);
        if (!bVar4) {
          uVar11 = param_1[5];
          if (uVar11 == param_1[4]) {
            uVar13 = uVar11 >> 1;
            if (uVar11 < 2) {
              uVar13 = 1;
            }
            lVar10 = func_0x000144d9c140(8,(ulonglong)(uVar13 + uVar11) * 0x18);
            if ((ulonglong)param_1[5] != 0) {
              func_0x000145f40560(lVar10,*(undefined8 *)(param_1 + 6),(ulonglong)param_1[5] * 0x18);
            }
            if (*(longlong *)(param_1 + 6) != 0) {
              func_0x000144d9c130();
            }
            *(longlong *)(param_1 + 6) = lVar10;
            param_1[4] = uVar13 + uVar11;
            uVar11 = param_1[5];
          }
          else {
            lVar10 = *(longlong *)(param_1 + 6);
          }
          param_1[5] = uVar11 + 1;
          uVar23 = uVar28;
          if (lVar10 != 0) {
            uVar8 = (ulonglong)uVar11;
            *(ulonglong *)(lVar10 + uVar8 * 0x18) = uVar20;
            *(ulonglong *)(lVar10 + 8 + uVar8 * 0x18) = uVar24;
            *(ulonglong **)(lVar10 + 0x10 + uVar8 * 0x18) = puStack_a8;
          }
          while ((uVar27 != uVar19 && (uVar28 = uVar23, plVar25[(uVar23 & 0xffffffff) * 3] == 0))) {
            uVar27 = (int)uVar23 + 1;
            uVar28 = uVar26;
            uVar23 = (ulonglong)uVar27;
          }
          lVar10 = *(longlong *)(param_1 + 2);
          uVar26 = (ulonglong)*param_1;
          pauVar9 = (undefined1 (*) [16])(plVar25 + (uVar28 & 0xffffffff) * 3);
          uVar24 = (ulonglong)
                   (*param_1 - 1 &
                   (int)((ulonglong)((longlong)pauVar9 + (0x18 - lVar10)) >> 3) * -0x55555555);
          uVar20 = *(ulonglong *)(lVar10 + uVar24 * 0x18);
          if (uVar20 != 0) {
            pauVar14 = (undefined1 (*) [16])(lVar10 + uVar24 * 0x18);
            do {
              uVar19 = (int)uVar26 - 1;
              pauVar1 = (undefined1 (*) [16])
                        (lVar10 + (ulonglong)((uint)(uVar20 >> 3) & uVar19) * 0x18);
              uVar20 = 0;
              if (pauVar9 < pauVar1) {
                uVar20 = uVar26;
              }
              uVar24 = uVar26;
              if (pauVar1 <= pauVar14) {
                uVar24 = 0;
              }
              if ((uint)((int)((longlong)pauVar9 + (uVar20 * 0x18 - (longlong)pauVar1) >> 3) *
                        -0x55555555) <
                  (uint)((int)((longlong)pauVar14 + (uVar24 * 0x18 - (longlong)pauVar1) >> 3) *
                        -0x55555555)) {
                *(undefined8 *)pauVar9[1] = *(undefined8 *)pauVar14[1];
                *pauVar9 = *pauVar14;
                uVar26 = (ulonglong)*param_1;
                lVar10 = *(longlong *)(param_1 + 2);
                uVar19 = *param_1 - 1;
                pauVar9 = pauVar14;
              }
              pauVar14 = (undefined1 (*) [16])
                         (lVar10 + (ulonglong)
                                   (uVar19 & (int)((ulonglong)((longlong)pauVar14 + (0x18 - lVar10))
                                                  >> 3) * -0x55555555) * 0x18);
              uVar20 = *(ulonglong *)*pauVar14;
            } while (uVar20 != 0);
          }
          *(undefined8 *)*pauVar9 = 0;
          param_1[1] = param_1[1] - 1;
          plVar25 = *(longlong **)(param_1 + 2);
          if ((uint)uVar28 == (uint)uVar26) goto LAB_1401caf67;
          do {
            uVar20 = uVar28;
            if (plVar25[(uVar28 & 0xffffffff) * 3] != 0) break;
            uVar19 = (int)uVar28 + 1;
            uVar28 = (ulonglong)uVar19;
            uVar20 = uVar26;
          } while ((uint)uVar26 != uVar19);
          goto LAB_1401cb113;
        }
        uVar23 = (ulonglong)uStack_bc;
        lVar10 = lStack_b8;
        uStack_70 = uVar24;
        if (uStack_bc == (uint)uStack_88) {
          uVar11 = uStack_bc >> 1;
          if (uStack_bc < 2) {
            uVar11 = 1;
          }
          uStack_88 = (ulonglong)(uVar11 + uStack_bc);
          lVar10 = func_0x000144d9c140(8,uStack_88 * 0x18);
          if (uStack_bc != 0) {
            func_0x000145f40560(lVar10,lStack_b8,uVar23 * 0x18);
          }
          if (lStack_b8 != 0) {
            func_0x000144d9c130(lStack_b8);
          }
        }
        uVar24 = uVar28;
        if (lVar10 != 0) {
          *(ulonglong *)(lVar10 + uVar23 * 0x18) = uVar20;
          *(ulonglong *)(lVar10 + 8 + uVar23 * 0x18) = uStack_70;
          *(ulonglong **)(lVar10 + 0x10 + uVar23 * 0x18) = puStack_a8;
        }
        while ((uVar27 != uVar19 && (uVar28 = uVar24, plVar25[(uVar24 & 0xffffffff) * 3] == 0))) {
          uVar27 = (int)uVar24 + 1;
          uVar28 = uVar26;
          uVar24 = (ulonglong)uVar27;
        }
        lVar21 = *(longlong *)(param_1 + 2);
        uVar26 = (ulonglong)*param_1;
        pauVar9 = (undefined1 (*) [16])(plVar25 + (uVar28 & 0xffffffff) * 3);
        uVar24 = (ulonglong)
                 (*param_1 - 1 &
                 (int)((ulonglong)((longlong)pauVar9 + (0x18 - lVar21)) >> 3) * -0x55555555);
        uVar20 = *(ulonglong *)(lVar21 + uVar24 * 0x18);
        if (uVar20 != 0) {
          pauVar14 = (undefined1 (*) [16])(lVar21 + uVar24 * 0x18);
          do {
            uVar19 = (int)uVar26 - 1;
            pauVar1 = (undefined1 (*) [16])
                      (lVar21 + (ulonglong)((uint)(uVar20 >> 3) & uVar19) * 0x18);
            uVar20 = 0;
            if (pauVar9 < pauVar1) {
              uVar20 = uVar26;
            }
            uVar24 = uVar26;
            if (pauVar1 <= pauVar14) {
              uVar24 = 0;
            }
            if ((uint)((int)((longlong)pauVar9 + (uVar20 * 0x18 - (longlong)pauVar1) >> 3) *
                      -0x55555555) <
                (uint)((int)((longlong)pauVar14 + (uVar24 * 0x18 - (longlong)pauVar1) >> 3) *
                      -0x55555555)) {
              *(undefined8 *)pauVar9[1] = *(undefined8 *)pauVar14[1];
              *pauVar9 = *pauVar14;
              uVar26 = (ulonglong)*param_1;
              lVar21 = *(longlong *)(param_1 + 2);
              uVar19 = *param_1 - 1;
              pauVar9 = pauVar14;
            }
            pauVar14 = (undefined1 (*) [16])
                       (lVar21 + (ulonglong)
                                 (uVar19 & (int)((ulonglong)((longlong)pauVar14 + (0x18 - lVar21))
                                                >> 3) * -0x55555555) * 0x18);
            uVar20 = *(ulonglong *)*pauVar14;
          } while (uVar20 != 0);
        }
        *(undefined8 *)*pauVar9 = 0;
        param_1[1] = param_1[1] - 1;
        uStack_bc = uStack_bc + 1;
        plVar25 = *(longlong **)(param_1 + 2);
        lStack_b8 = lVar10;
        if ((uint)uVar28 != (uint)uVar26) {
          do {
            uVar20 = uVar28;
            if (plVar25[(uVar28 & 0xffffffff) * 3] != 0) break;
            uVar19 = (int)uVar28 + 1;
            uVar28 = (ulonglong)uVar19;
            uVar20 = uVar26;
          } while ((uint)uVar26 != uVar19);
          goto LAB_1401cb113;
        }
        goto LAB_1401caf67;
      }
LAB_1401ca8be:
      bVar4 = true;
      if ((uVar20 & 1) != 0) goto LAB_1401caab9;
      if (uVar27 == uVar19) goto LAB_1401caf67;
      do {
        while( true ) {
          uVar27 = (int)uVar28 + 1;
          uVar28 = (ulonglong)uVar27;
          if (uVar19 <= uVar27) break;
          uVar20 = uVar28;
          if (plVar25[(ulonglong)uVar27 * 3] != 0) goto LAB_1401cb113;
        }
        uVar20 = uVar26;
      } while (uVar27 != uVar19);
      goto LAB_1401cb113;
    }
  }
  else {
    uVar28 = 0;
    plVar7 = plVar25;
    do {
      if (*plVar7 != 0) goto LAB_1401ca827;
      uVar28 = uVar28 + 1;
      plVar7 = plVar7 + 3;
    } while (uVar26 != uVar28);
  }
LAB_1401cb20c:
  func_0x000144d9dab0(puVar22);
  FUN_144fd9d80(auStack_60[0]);
  return;
LAB_1401caf15:
  while ((uVar6 = (uint)uVar20, uVar13 = uVar11, uVar11 != uVar6 &&
         (uVar13 = uVar6, *(int *)(lVar10 + uVar20 * 0x68) == 0))) {
    uVar20 = (ulonglong)(uVar6 + 1);
  }
  goto LAB_1401caf2a;
LAB_1401caebd:
  *puVar22 = uVar13;
  *(int *)(lVar16 + 0x1824) = *(int *)(lVar16 + 0x1824) + 1;
  lVar10 = *(longlong *)(lVar16 + 0x1828);
  uVar11 = (int)((ulonglong)((longlong)puVar22 - lVar10) >> 3) * -0x3b13b13b;
  uVar13 = uVar11;
  while ((*(uint *)(lVar16 + 0x1820) != uVar11 &&
         (uVar13 = uVar11, *(int *)(lVar10 + (ulonglong)uVar11 * 0x68) == 0))) {
    uVar11 = uVar11 + 1;
    uVar13 = *(uint *)(lVar16 + 0x1820);
  }
  *(undefined1 (*) [32])(lVar10 + 0x48 + (ulonglong)uVar13 * 0x68) = ZEXT1232(ZEXT812(0));
LAB_1401caf2a:
  puVar12 = (undefined8 *)(lVar10 + 8 + (ulonglong)uVar13 * 0x68);
  *(undefined8 **)(lVar16 + 0x17e0 + (longlong)iVar2 * 8) = puVar12;
  puVar15 = (ulonglong *)*puVar12;
LAB_1401caf45:
  uVar11 = (uint)((ulonglong)((longlong)puVar3 - (longlong)puVar15) / (ulonglong)puVar12[3]);
  if ((*(uint *)(puVar12[10] + (ulonglong)(uVar11 >> 5) * 4) >> (uVar11 & 0x1f) & 1) == 0) {
    puStack_a8 = puVar3;
    (**(code **)*puStack_78)(&puStack_a8,puStack_78[1],puStack_78[2]);
    uVar20 = puVar17[1];
    uVar24 = puVar17[2];
    uVar11 = param_1[5];
    if (uVar11 == param_1[4]) {
      uVar13 = uVar11 >> 1;
      if (uVar11 < 2) {
        uVar13 = 1;
      }
      lVar10 = func_0x000144d9c140(8,(ulonglong)(uVar13 + uVar11) * 0x18);
      if ((ulonglong)param_1[5] != 0) {
        func_0x000145f40560(lVar10,*(undefined8 *)(param_1 + 6),(ulonglong)param_1[5] * 0x18);
      }
      if (*(longlong *)(param_1 + 6) != 0) {
        func_0x000144d9c130();
      }
      *(longlong *)(param_1 + 6) = lVar10;
      param_1[4] = uVar13 + uVar11;
      uVar11 = param_1[5];
    }
    else {
      lVar10 = *(longlong *)(param_1 + 6);
    }
    param_1[5] = uVar11 + 1;
    uVar23 = uVar28;
    if (lVar10 != 0) {
      puVar17 = (ulonglong *)(lVar10 + (ulonglong)uVar11 * 0x18);
      *puVar17 = uVar20;
      puVar17[1] = uVar24;
      *(ulonglong **)(lVar10 + 0x10 + (ulonglong)uVar11 * 0x18) = puVar3;
    }
    while ((uVar27 != uVar19 && (uVar28 = uVar23, plVar25[(uVar23 & 0xffffffff) * 3] == 0))) {
      uVar27 = (int)uVar23 + 1;
      uVar28 = uVar26;
      uVar23 = (ulonglong)uVar27;
    }
    uVar19 = (uint)uVar28;
    lVar10 = *(longlong *)(param_1 + 2);
    uVar26 = (ulonglong)*param_1;
    pauVar9 = (undefined1 (*) [16])(plVar25 + (uVar28 & 0xffffffff) * 3);
    uVar24 = (ulonglong)
             (*param_1 - 1 &
             (int)((ulonglong)((longlong)pauVar9 + (0x18 - lVar10)) >> 3) * -0x55555555);
    uVar20 = *(ulonglong *)(lVar10 + uVar24 * 0x18);
    if (uVar20 != 0) {
      pauVar14 = (undefined1 (*) [16])(lVar10 + uVar24 * 0x18);
      do {
        uVar27 = (int)uVar26 - 1;
        pauVar1 = (undefined1 (*) [16])(lVar10 + (ulonglong)((uint)(uVar20 >> 3) & uVar27) * 0x18);
        uVar20 = 0;
        if (pauVar9 < pauVar1) {
          uVar20 = uVar26;
        }
        uVar24 = uVar26;
        if (pauVar1 <= pauVar14) {
          uVar24 = 0;
        }
        if ((uint)((int)((longlong)pauVar9 + (uVar20 * 0x18 - (longlong)pauVar1) >> 3) * -0x55555555
                  ) < (uint)((int)((longlong)pauVar14 + (uVar24 * 0x18 - (longlong)pauVar1) >> 3) *
                            -0x55555555)) {
          *(undefined8 *)pauVar9[1] = *(undefined8 *)pauVar14[1];
          *pauVar9 = *pauVar14;
          uVar26 = (ulonglong)*param_1;
          lVar10 = *(longlong *)(param_1 + 2);
          uVar27 = *param_1 - 1;
          pauVar9 = pauVar14;
        }
        pauVar14 = (undefined1 (*) [16])
                   (lVar10 + (ulonglong)
                             (uVar27 & (int)((ulonglong)((longlong)pauVar14 + (0x18 - lVar10)) >> 3)
                                       * -0x55555555) * 0x18);
        uVar20 = *(ulonglong *)*pauVar14;
      } while (uVar20 != 0);
    }
    *(undefined8 *)*pauVar9 = 0;
    param_1[1] = param_1[1] - 1;
    plVar25 = *(longlong **)(param_1 + 2);
    uVar20 = uVar28;
    while ((uVar19 != (uint)uVar26 && (uVar20 = uVar28, plVar25[(uVar28 & 0xffffffff) * 3] == 0))) {
      uVar19 = (int)uVar28 + 1;
      uVar28 = (ulonglong)uVar19;
      uVar20 = uVar26;
    }
  }
  else if (uVar27 == uVar19) {
LAB_1401caf67:
    uVar26 = uVar28 & 0xffffffff;
    uVar20 = uVar28;
  }
  else {
    do {
      while( true ) {
        uVar27 = (int)uVar28 + 1;
        uVar28 = (ulonglong)uVar27;
        if (uVar19 <= uVar27) break;
        uVar20 = uVar28;
        if (plVar25[(ulonglong)uVar27 * 3] != 0) goto LAB_1401cb113;
      }
      uVar20 = uVar26;
    } while (uVar27 != uVar19);
  }
LAB_1401cb113:
  puVar22 = puStack_90;
  puVar17 = (ulonglong *)(plVar25 + (uVar20 & 0xffffffff) * 3);
  uVar28 = uVar20;
  if (puVar17 == (ulonglong *)((ulonglong)*param_1 * 0x18 + *(longlong *)(param_1 + 2)))
  goto LAB_1401cb19a;
  goto LAB_1401ca886;
LAB_1401cb19a:
  if (uStack_bc == 0) {
    if (lStack_b8 == 0) goto LAB_1401cb20c;
  }
  else {
    uVar28 = (ulonglong)uStack_bc;
    lVar16 = lStack_b8 + 0x10;
    do {
      uVar26 = *(ulonglong *)(lVar16 + -0x10);
      uVar20 = *(ulonglong *)(lVar16 + -8);
      FUN_1406905d0(param_1,&puStack_a8,lVar16);
      if (cStack_98 == '\x01') {
        puStack_a8[(ulonglong)uStack_9c * 3 + 1] = uVar26;
        (puStack_a8 + (ulonglong)uStack_9c * 3 + 1)[1] = uVar20;
      }
      lVar16 = lVar16 + 0x18;
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
  }
  func_0x000144d9c130(lStack_b8);
  goto LAB_1401cb20c;
}

