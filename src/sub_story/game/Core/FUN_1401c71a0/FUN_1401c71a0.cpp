// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401c71a0  size: 13137 bytes
// Name:    FUN_1401c71a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401c71a0(longlong param_1,ulonglong param_2,undefined8 *param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong *puVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong unaff_GS_OFFSET;
  bool bVar27;
  
  switch((uint)param_2 & 7) {
  case 2:
    uVar21 = param_2 >> 3 & 0xfffffffffffffff;
    if (uVar21 != 0) {
      uVar6 = 0;
      lVar4 = **(longlong **)(unaff_GS_OFFSET + 0x58);
code_r0x0001401c7235:
      puVar11 = *(ulonglong **)(param_1 + 8 + uVar6 * 8);
      if (puVar11 != (ulonglong *)0x0) {
        puVar7 = (ulonglong *)(param_1 + 8 + uVar6 * 8);
        if (puVar11 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
            _DAT_14abce178 <= puVar11) {
          if ((puVar11 < *(ulonglong **)(param_4 + 0x50)) &&
             (*(ulonglong **)(param_4 + 0x48) <= puVar11)) {
            uVar18 = *puVar11;
            if ((uVar18 & 2) == 0) {
              if ((uVar18 & 1) == 0) {
                puVar5 = (ulonglong *)FUN_145086050(param_4,puVar11,param_3);
                if (puVar5 == puVar11) goto code_r0x0001401c7441;
code_r0x0001401c734b:
                *puVar7 = (ulonglong)puVar5;
                puVar11 = (ulonglong *)
                          (((ulonglong)puVar5 & 0xffffffffffffc000) + 0x30 +
                          (ulonglong)((uint)puVar5 >> 9 & 0x1f) * 8);
                *puVar11 = *puVar11 | 1L << ((ulonglong)((uint)puVar5 >> 3) & 0x3f);
              }
              else {
                puVar11 = (ulonglong *)(uVar18 & 0xfffffffffffffff8);
                *puVar7 = (ulonglong)puVar11;
                if (puVar11 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
                    _DAT_14abce178 <= puVar11) goto code_r0x0001401c7441;
              }
            }
            else {
code_r0x0001401c7441:
              if (((puVar7 < _DAT_14abce178 ||
                    (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) < puVar7) &&
                  (_DAT_14abce178 <= puVar7)) &&
                 (puVar7 < (ulonglong *)
                           ((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000)))
              {
                *(undefined1 *)
                 (_DAT_14abce1f8 +
                 ((ulonglong)((longlong)puVar7 - _DAT_14abce1e8) >> 9 & 0xffffffff)) = 1;
              }
            }
          }
          goto code_r0x0001401c747b;
        }
        if ((puVar11 < _DAT_14abce178) ||
           ((ulonglong *)((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000) <=
            puVar11)) {
          if ((puVar11 < *(ulonglong **)(param_4 + 0x18d0)) ||
             (*(ulonglong **)(param_4 + 0x18d8) <= puVar11)) goto code_r0x0001401c747b;
          lVar22 = (longlong)*(int *)(lVar4 + 0xff4);
          puVar10 = *(undefined8 **)(param_4 + 0x17e0 + lVar22 * 8);
          if (((puVar10 == (undefined8 *)0x0) || (puVar7 = (ulonglong *)*puVar10, puVar11 < puVar7))
             || ((ulonglong *)puVar10[1] <= puVar11)) {
            lVar23 = *(longlong *)(param_4 + 0x1838);
            uVar26 = (ulonglong)*(uint *)(param_4 + 0x1834);
            lVar13 = lVar23;
            uVar18 = uVar26;
            if (uVar26 != 0) {
              do {
                uVar24 = uVar18 >> 1;
                lVar15 = lVar13 + 0x10 + uVar24 * 0x10;
                if (*(ulonglong **)(lVar15 + -0x10) <= puVar11) {
                  lVar13 = lVar15;
                  uVar24 = ~uVar24 + uVar18;
                }
                uVar18 = uVar24;
              } while (0 < (longlong)uVar24);
            }
            lVar15 = lVar13 + -0x10;
            if (lVar13 == uVar26 * 0x10 + lVar23) {
              lVar15 = (ulonglong)(*(uint *)(param_4 + 0x1834) - 1) * 0x10 + lVar23;
            }
            do {
              uVar25 = *(uint *)(param_4 + 0x1820);
              if (uVar25 != 0) {
                uVar2 = *(uint *)(lVar15 + 8);
                uVar3 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
                uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
                lVar23 = *(longlong *)(param_4 + 0x1828);
                uVar18 = (ulonglong)((uVar3 >> 0x10 ^ uVar3) & uVar25 - 1);
                lVar13 = uVar18 * 0x68;
                uVar3 = *(uint *)(lVar23 + lVar13);
                while( true ) {
                  if (uVar3 == uVar2) {
                    uVar2 = (uint)uVar18;
                    while ((uVar26 = (ulonglong)uVar25, uVar25 != uVar2 &&
                           (uVar26 = uVar18, *(int *)(lVar23 + uVar18 * 0x68) == 0))) {
                      uVar2 = (int)uVar18 + 1;
                      uVar18 = (ulonglong)uVar2;
                    }
                    goto code_r0x0001401c760b;
                  }
                  puVar14 = (uint *)(lVar13 + lVar23);
                  if (uVar3 == 0) break;
                  uVar18 = (ulonglong)
                           ((int)((ulonglong)((longlong)puVar14 + (0x68 - lVar23)) >> 3) *
                            -0x3b13b13b & uVar25 - 1);
                  lVar13 = uVar18 * 0x68;
                  uVar3 = *(uint *)(lVar23 + lVar13);
                }
                if (*(uint *)(param_4 + 0x1824) != (uVar25 * 0x4b) / 100) goto code_r0x0001401c7879;
              }
              FUN_141d83dd0((uint *)(param_4 + 0x1820),uVar25 * 2);
            } while( true );
          }
          goto code_r0x0001401c7634;
        }
        uVar18 = *puVar11;
        if ((uVar18 & 1) != 0) {
          *puVar7 = uVar18 & 0xfffffffffffffff8;
          goto code_r0x0001401c747b;
        }
        uVar26 = (longlong)puVar11 - _DAT_1498c41b0;
        if ((uVar26 < 0x1000000) &&
           ((*(uint *)((uVar26 >> 0x15) * 4 + 0x1498c41b8) >> ((uint)(uVar26 >> 0x10) & 0x1f) & 1)
            != 0)) {
          uVar26 = *(ulonglong *)((longlong)puVar11 + (8 - puVar11[-1]));
          if ((uVar26 & 1) != 0) goto code_r0x0001401c747b;
          *(ulonglong *)((longlong)puVar11 + (8 - puVar11[-1])) = uVar26 | 1;
          uVar18 = *(ulonglong *)(uVar18 + 8);
          uVar2 = (uint)uVar18 & 7;
          uVar25 = uVar2;
          if (uVar2 == 5) {
            if (((uVar18 & 0xff8) == 0) && ((*(byte *)((longlong)puVar11 + 0x14) & 1) == 0)) {
              uVar25 = (uint)puVar11[3] & 7;
              goto code_r0x0001401c77de;
            }
          }
          else {
code_r0x0001401c77de:
            if ((uVar2 == 6) || (uVar25 == 1)) goto code_r0x0001401c747b;
          }
          puVar10 = (undefined8 *)param_3[1];
          if ((puVar10 == (undefined8 *)0x0) ||
             (puVar7 = (ulonglong *)*param_3, puVar7 == puVar10 + 0x100)) {
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = 0x7f;
            }
            FUN_145086330(param_3);
            puVar7 = (ulonglong *)*param_3;
          }
        }
        else {
          uVar18 = (ulonglong)puVar11 & 0xffffffffffffc000;
          uVar25 = (uint)puVar11;
          if (*(char *)(uVar18 + 10) != '\0') {
            puVar5 = (ulonglong *)FUN_145086050(param_4,puVar11,param_3);
            if (puVar5 != puVar11) goto code_r0x0001401c734b;
            FUN_143e11a40(param_4 + 0x100,uVar18);
            uVar24 = (ulonglong)(uVar25 >> 9 & 0x1f);
            uVar26 = *(ulonglong *)(uVar18 + 0x30 + uVar24 * 8);
            if ((uVar26 >> ((ulonglong)(uVar25 >> 3) & 0x3f) & 1) != 0) goto code_r0x0001401c747b;
            *(ulonglong *)(uVar18 + 0x30 + uVar24 * 8) =
                 uVar26 | 1L << ((ulonglong)(uVar25 >> 3) & 0x3f);
            uVar18 = *(ulonglong *)(*puVar5 + 8);
            uVar25 = (uint)uVar18 & 7;
            if (uVar25 == 5) {
              if (((uVar18 & 0xff8) == 0) && ((*(byte *)((longlong)puVar5 + 0x14) & 1) == 0)) {
                uVar25 = (uint)puVar5[3] & 7;
                goto code_r0x0001401c7754;
              }
            }
            else {
code_r0x0001401c7754:
              if (uVar25 == 1) goto code_r0x0001401c747b;
            }
            puVar10 = (undefined8 *)param_3[1];
            if ((puVar10 == (undefined8 *)0x0) ||
               (puVar11 = (ulonglong *)*param_3, puVar11 == puVar10 + 0x100)) {
              if (puVar10 != (undefined8 *)0x0) {
                *puVar10 = 0x7f;
              }
              FUN_145086330(param_3);
              puVar11 = (ulonglong *)*param_3;
            }
            *param_3 = puVar11 + 2;
            *puVar11 = (ulonglong)puVar5;
            puVar11[1] = uVar18;
            goto code_r0x0001401c747b;
          }
          uVar24 = (ulonglong)(uVar25 >> 9 & 0x1f);
          uVar26 = *(ulonglong *)(uVar18 + 0x30 + uVar24 * 8);
          if ((uVar26 >> ((ulonglong)puVar11 >> 3 & 0x3f) & 1) != 0) goto code_r0x0001401c747b;
          *(ulonglong *)(uVar18 + 0x30 + uVar24 * 8) =
               uVar26 | 1L << ((ulonglong)puVar11 >> 3 & 0x3f);
          uVar18 = *(ulonglong *)(*puVar11 + 8);
          uVar25 = (uint)uVar18 & 7;
          if (uVar25 == 5) {
            if (((uVar18 & 0xff8) == 0) && ((*(byte *)((longlong)puVar11 + 0x14) & 1) == 0)) {
              uVar25 = (uint)puVar11[3] & 7;
              goto code_r0x0001401c73de;
            }
          }
          else {
code_r0x0001401c73de:
            if (uVar25 == 1) goto code_r0x0001401c747b;
          }
          puVar10 = (undefined8 *)param_3[1];
          if ((puVar10 == (undefined8 *)0x0) ||
             (puVar7 = (ulonglong *)*param_3, puVar7 == puVar10 + 0x100)) {
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = 0x7f;
            }
            FUN_145086330(param_3);
            puVar7 = (ulonglong *)*param_3;
          }
        }
        goto code_r0x0001401c7407;
      }
      goto code_r0x0001401c747b;
    }
    break;
  case 3:
    lVar4 = 1;
code_r0x0001401c807e:
    puVar11 = (ulonglong *)(param_1 + lVar4 * 8);
    lVar4 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    uVar21 = param_2 >> 0xc & 0x7ffffffffffff;
code_r0x0001401c80c7:
    if (((uVar21 & 1) != 0) && (puVar7 = (ulonglong *)*puVar11, puVar7 != (ulonglong *)0x0)) {
      if (puVar7 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) && _DAT_14abce178 <= puVar7)
      {
        if ((puVar7 < *(ulonglong **)(param_4 + 0x50)) &&
           (*(ulonglong **)(param_4 + 0x48) <= puVar7)) {
          uVar6 = *puVar7;
          if ((uVar6 & 2) == 0) {
            if ((uVar6 & 1) == 0) {
              puVar5 = (ulonglong *)FUN_145086050(param_4,puVar7,param_3);
              if (puVar5 == puVar7) goto code_r0x0001401c82cc;
code_r0x0001401c81e2:
              *puVar11 = (ulonglong)puVar5;
              puVar7 = (ulonglong *)
                       (((ulonglong)puVar5 & 0xffffffffffffc000) + 0x30 +
                       (ulonglong)((uint)puVar5 >> 9 & 0x1f) * 8);
              *puVar7 = *puVar7 | 1L << ((ulonglong)((uint)puVar5 >> 3) & 0x3f);
            }
            else {
              puVar7 = (ulonglong *)(uVar6 & 0xfffffffffffffff8);
              *puVar11 = (ulonglong)puVar7;
              if (puVar7 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
                  _DAT_14abce178 <= puVar7) goto code_r0x0001401c82cc;
            }
          }
          else {
code_r0x0001401c82cc:
            if (((puVar11 < _DAT_14abce178 ||
                  (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) < puVar11) &&
                (_DAT_14abce178 <= puVar11)) &&
               (puVar11 < (ulonglong *)
                          ((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000))) {
              *(undefined1 *)
               (_DAT_14abce1f8 + ((ulonglong)((longlong)puVar11 - _DAT_14abce1e8) >> 9 & 0xffffffff)
               ) = 1;
            }
          }
        }
        goto code_r0x0001401c8306;
      }
      if ((puVar7 < _DAT_14abce178) ||
         ((ulonglong *)((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000) <=
          puVar7)) {
        if ((puVar7 < *(ulonglong **)(param_4 + 0x18d0)) ||
           (*(ulonglong **)(param_4 + 0x18d8) <= puVar7)) goto code_r0x0001401c8306;
        lVar22 = (longlong)*(int *)(lVar4 + 0xff4);
        puVar10 = *(undefined8 **)(param_4 + 0x17e0 + lVar22 * 8);
        if (((puVar10 == (undefined8 *)0x0) || (puVar5 = (ulonglong *)*puVar10, puVar7 < puVar5)) ||
           ((ulonglong *)puVar10[1] <= puVar7)) {
          lVar23 = *(longlong *)(param_4 + 0x1838);
          uVar18 = (ulonglong)*(uint *)(param_4 + 0x1834);
          lVar13 = lVar23;
          uVar6 = uVar18;
          if (uVar18 != 0) {
            do {
              uVar26 = uVar6 >> 1;
              lVar15 = lVar13 + 0x10 + uVar26 * 0x10;
              if (*(ulonglong **)(lVar15 + -0x10) <= puVar7) {
                lVar13 = lVar15;
                uVar26 = ~uVar26 + uVar6;
              }
              uVar6 = uVar26;
            } while (0 < (longlong)uVar26);
          }
          lVar15 = lVar13 + -0x10;
          if (lVar13 == uVar18 * 0x10 + lVar23) {
            lVar15 = (ulonglong)(*(uint *)(param_4 + 0x1834) - 1) * 0x10 + lVar23;
          }
          do {
            uVar25 = *(uint *)(param_4 + 0x1820);
            if (uVar25 != 0) {
              uVar2 = *(uint *)(lVar15 + 8);
              uVar3 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
              uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
              lVar23 = *(longlong *)(param_4 + 0x1828);
              uVar6 = (ulonglong)((uVar3 >> 0x10 ^ uVar3) & uVar25 - 1);
              lVar13 = uVar6 * 0x68;
              uVar3 = *(uint *)(lVar23 + lVar13);
              while( true ) {
                if (uVar3 == uVar2) {
                  uVar2 = (uint)uVar6;
                  while ((uVar18 = (ulonglong)uVar25, uVar25 != uVar2 &&
                         (uVar18 = uVar6, *(int *)(lVar23 + uVar6 * 0x68) == 0))) {
                    uVar2 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar2;
                  }
                  goto code_r0x0001401c84a1;
                }
                puVar14 = (uint *)(lVar13 + lVar23);
                if (uVar3 == 0) break;
                uVar6 = (ulonglong)
                        ((int)((ulonglong)((longlong)puVar14 + (0x68 - lVar23)) >> 3) * -0x3b13b13b
                        & uVar25 - 1);
                lVar13 = uVar6 * 0x68;
                uVar3 = *(uint *)(lVar23 + lVar13);
              }
              if (*(uint *)(param_4 + 0x1824) != (uVar25 * 0x4b) / 100) goto code_r0x0001401c870a;
            }
            FUN_141d83dd0((uint *)(param_4 + 0x1820),uVar25 * 2);
          } while( true );
        }
        goto code_r0x0001401c84ca;
      }
      uVar6 = *puVar7;
      if ((uVar6 & 1) != 0) {
        *puVar11 = uVar6 & 0xfffffffffffffff8;
        goto code_r0x0001401c8306;
      }
      uVar18 = (longlong)puVar7 - _DAT_1498c41b0;
      if ((uVar18 < 0x1000000) &&
         ((*(uint *)((uVar18 >> 0x15) * 4 + 0x1498c41b8) >> ((uint)(uVar18 >> 0x10) & 0x1f) & 1) !=
          0)) {
        uVar18 = *(ulonglong *)((longlong)puVar7 + (8 - puVar7[-1]));
        if ((uVar18 & 1) != 0) goto code_r0x0001401c8306;
        *(ulonglong *)((longlong)puVar7 + (8 - puVar7[-1])) = uVar18 | 1;
        uVar6 = *(ulonglong *)(uVar6 + 8);
        uVar2 = (uint)uVar6 & 7;
        uVar25 = uVar2;
        if (uVar2 == 5) {
          if (((uVar6 & 0xff8) == 0) && ((*(byte *)((longlong)puVar7 + 0x14) & 1) == 0)) {
            uVar25 = (uint)puVar7[3] & 7;
            goto code_r0x0001401c866c;
          }
        }
        else {
code_r0x0001401c866c:
          if ((uVar2 == 6) || (uVar25 == 1)) goto code_r0x0001401c8306;
        }
        puVar10 = (undefined8 *)param_3[1];
        if ((puVar10 == (undefined8 *)0x0) ||
           (puVar9 = (undefined8 *)*param_3, puVar9 == puVar10 + 0x100)) {
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = 0x7f;
          }
          FUN_145086330(param_3);
          puVar9 = (undefined8 *)*param_3;
        }
      }
      else {
        uVar6 = (ulonglong)puVar7 & 0xffffffffffffc000;
        uVar25 = (uint)puVar7;
        if (*(char *)(uVar6 + 10) != '\0') {
          puVar5 = (ulonglong *)FUN_145086050(param_4,puVar7,param_3);
          if (puVar5 != puVar7) goto code_r0x0001401c81e2;
          FUN_143e11a40(param_4 + 0x100,uVar6);
          uVar26 = (ulonglong)(uVar25 >> 9 & 0x1f);
          uVar18 = *(ulonglong *)(uVar6 + 0x30 + uVar26 * 8);
          if ((uVar18 >> ((ulonglong)(uVar25 >> 3) & 0x3f) & 1) != 0) goto code_r0x0001401c8306;
          *(ulonglong *)(uVar6 + 0x30 + uVar26 * 8) =
               uVar18 | 1L << ((ulonglong)(uVar25 >> 3) & 0x3f);
          uVar6 = *(ulonglong *)(*puVar5 + 8);
          uVar25 = (uint)uVar6 & 7;
          if (uVar25 == 5) {
            if (((uVar6 & 0xff8) == 0) && ((*(byte *)((longlong)puVar5 + 0x14) & 1) == 0)) {
              uVar25 = (uint)puVar5[3] & 7;
              goto code_r0x0001401c85e5;
            }
          }
          else {
code_r0x0001401c85e5:
            if (uVar25 == 1) goto code_r0x0001401c8306;
          }
          puVar10 = (undefined8 *)param_3[1];
          if ((puVar10 == (undefined8 *)0x0) ||
             (puVar9 = (undefined8 *)*param_3, puVar9 == puVar10 + 0x100)) {
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = 0x7f;
            }
            FUN_145086330(param_3);
            puVar9 = (undefined8 *)*param_3;
          }
          *param_3 = puVar9 + 2;
          *puVar9 = puVar5;
          puVar9[1] = uVar6;
          goto code_r0x0001401c8306;
        }
        uVar26 = (ulonglong)(uVar25 >> 9 & 0x1f);
        uVar18 = *(ulonglong *)(uVar6 + 0x30 + uVar26 * 8);
        if ((uVar18 >> ((ulonglong)puVar7 >> 3 & 0x3f) & 1) != 0) goto code_r0x0001401c8306;
        *(ulonglong *)(uVar6 + 0x30 + uVar26 * 8) = uVar18 | 1L << ((ulonglong)puVar7 >> 3 & 0x3f);
        uVar6 = *(ulonglong *)(*puVar7 + 8);
        uVar25 = (uint)uVar6 & 7;
        if (uVar25 == 5) {
          if (((uVar6 & 0xff8) == 0) && ((*(byte *)((longlong)puVar7 + 0x14) & 1) == 0)) {
            uVar25 = (uint)puVar7[3] & 7;
            goto code_r0x0001401c8268;
          }
        }
        else {
code_r0x0001401c8268:
          if (uVar25 == 1) goto code_r0x0001401c8306;
        }
        puVar10 = (undefined8 *)param_3[1];
        if ((puVar10 == (undefined8 *)0x0) ||
           (puVar9 = (undefined8 *)*param_3, puVar9 == puVar10 + 0x100)) {
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = 0x7f;
          }
          FUN_145086330(param_3);
          puVar9 = (undefined8 *)*param_3;
        }
      }
      goto code_r0x0001401c8291;
    }
    goto code_r0x0001401c8306;
  case 4:
    uVar21 = (ulonglong)((uint)param_2 >> 0x10 & 0x3ff);
    uVar6 = param_2 >> 0x1a & 0x3ff;
    lVar4 = func_0x0001406e0920(param_2);
    if (uVar21 <= uVar6) {
      lVar22 = **(longlong **)(unaff_GS_OFFSET + 0x58);
code_r0x0001401c87e3:
      if (((*(ulonglong *)(lVar4 + (uVar21 >> 6) * 8) >> (uVar21 & 0x3f) & 1) != 0) &&
         (puVar11 = *(ulonglong **)(param_1 + 8 + uVar21 * 8), puVar11 != (ulonglong *)0x0)) {
        puVar7 = (ulonglong *)(param_1 + 8 + uVar21 * 8);
        if (puVar11 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
            _DAT_14abce178 <= puVar11) {
          if ((puVar11 < *(ulonglong **)(param_4 + 0x50)) &&
             (*(ulonglong **)(param_4 + 0x48) <= puVar11)) {
            uVar18 = *puVar11;
            if ((uVar18 & 2) == 0) {
              if ((uVar18 & 1) == 0) {
                puVar5 = (ulonglong *)FUN_145086050(param_4,puVar11);
                if (puVar5 == puVar11) goto code_r0x0001401c8a05;
code_r0x0001401c8907:
                *puVar7 = (ulonglong)puVar5;
                puVar11 = (ulonglong *)
                          (((ulonglong)puVar5 & 0xffffffffffffc000) + 0x30 +
                          (ulonglong)((uint)puVar5 >> 9 & 0x1f) * 8);
                *puVar11 = *puVar11 | 1L << ((ulonglong)((uint)puVar5 >> 3) & 0x3f);
              }
              else {
                puVar11 = (ulonglong *)(uVar18 & 0xfffffffffffffff8);
                *puVar7 = (ulonglong)puVar11;
                if (puVar11 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
                    _DAT_14abce178 <= puVar11) goto code_r0x0001401c8a05;
              }
            }
            else {
code_r0x0001401c8a05:
              if (((puVar7 < _DAT_14abce178 ||
                    (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) < puVar7) &&
                  (_DAT_14abce178 <= puVar7)) &&
                 (puVar7 < (ulonglong *)
                           ((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000)))
              {
                *(undefined1 *)
                 (_DAT_14abce1f8 +
                 ((ulonglong)((longlong)puVar7 - _DAT_14abce1e8) >> 9 & 0xffffffff)) = 1;
              }
            }
          }
          goto code_r0x0001401c8a3f;
        }
        if ((puVar11 < _DAT_14abce178) ||
           ((ulonglong *)((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000) <=
            puVar11)) {
          if ((puVar11 < *(ulonglong **)(param_4 + 0x18d0)) ||
             (*(ulonglong **)(param_4 + 0x18d8) <= puVar11)) goto code_r0x0001401c8a3f;
          lVar23 = (longlong)*(int *)(lVar22 + 0xff4);
          puVar10 = *(undefined8 **)(param_4 + 0x17e0 + lVar23 * 8);
          if (((puVar10 == (undefined8 *)0x0) || (puVar7 = (ulonglong *)*puVar10, puVar11 < puVar7))
             || ((ulonglong *)puVar10[1] <= puVar11)) {
            lVar13 = *(longlong *)(param_4 + 0x1838);
            uVar26 = (ulonglong)*(uint *)(param_4 + 0x1834);
            lVar15 = lVar13;
            uVar18 = uVar26;
            if (uVar26 != 0) {
              do {
                uVar24 = uVar18 >> 1;
                lVar16 = lVar15 + 0x10 + uVar24 * 0x10;
                if (*(ulonglong **)(lVar16 + -0x10) <= puVar11) {
                  lVar15 = lVar16;
                  uVar24 = ~uVar24 + uVar18;
                }
                uVar18 = uVar24;
              } while (0 < (longlong)uVar24);
            }
            lVar16 = lVar15 + -0x10;
            if (lVar15 == uVar26 * 0x10 + lVar13) {
              lVar16 = (ulonglong)(*(uint *)(param_4 + 0x1834) - 1) * 0x10 + lVar13;
            }
            do {
              uVar25 = *(uint *)(param_4 + 0x1820);
              if (uVar25 != 0) {
                uVar2 = *(uint *)(lVar16 + 8);
                uVar3 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
                uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
                lVar13 = *(longlong *)(param_4 + 0x1828);
                uVar18 = (ulonglong)((uVar3 >> 0x10 ^ uVar3) & uVar25 - 1);
                lVar15 = uVar18 * 0x68;
                uVar3 = *(uint *)(lVar13 + lVar15);
                while( true ) {
                  if (uVar3 == uVar2) {
                    uVar2 = (uint)uVar18;
                    while ((uVar26 = (ulonglong)uVar25, uVar25 != uVar2 &&
                           (uVar26 = uVar18, *(int *)(lVar13 + uVar18 * 0x68) == 0))) {
                      uVar2 = (int)uVar18 + 1;
                      uVar18 = (ulonglong)uVar2;
                    }
                    goto code_r0x0001401c8bd3;
                  }
                  puVar14 = (uint *)(lVar15 + lVar13);
                  if (uVar3 == 0) break;
                  uVar18 = (ulonglong)
                           ((int)((ulonglong)((longlong)puVar14 + (0x68 - lVar13)) >> 3) *
                            -0x3b13b13b & uVar25 - 1);
                  lVar15 = uVar18 * 0x68;
                  uVar3 = *(uint *)(lVar13 + lVar15);
                }
                if (*(uint *)(param_4 + 0x1824) != (uVar25 * 0x4b) / 100) goto code_r0x0001401c8e26;
              }
              FUN_141d83dd0((uint *)(param_4 + 0x1820),uVar25 * 2);
            } while( true );
          }
          goto code_r0x0001401c8bfc;
        }
        uVar18 = *puVar11;
        if ((uVar18 & 1) != 0) {
          *puVar7 = uVar18 & 0xfffffffffffffff8;
          goto code_r0x0001401c8a3f;
        }
        uVar26 = (longlong)puVar11 - _DAT_1498c41b0;
        if ((uVar26 < 0x1000000) &&
           ((*(uint *)((uVar26 >> 0x15) * 4 + 0x1498c41b8) >> ((uint)(uVar26 >> 0x10) & 0x1f) & 1)
            != 0)) {
          uVar26 = *(ulonglong *)((longlong)puVar11 + (8 - puVar11[-1]));
          if ((uVar26 & 1) != 0) goto code_r0x0001401c8a3f;
          *(ulonglong *)((longlong)puVar11 + (8 - puVar11[-1])) = uVar26 | 1;
          uVar18 = *(ulonglong *)(uVar18 + 8);
          uVar2 = (uint)uVar18 & 7;
          uVar25 = uVar2;
          if (uVar2 == 5) {
            if (((uVar18 & 0xff8) == 0) && ((*(byte *)((longlong)puVar11 + 0x14) & 1) == 0)) {
              uVar25 = (uint)puVar11[3] & 7;
              goto code_r0x0001401c8d97;
            }
          }
          else {
code_r0x0001401c8d97:
            if ((uVar2 == 6) || (uVar25 == 1)) goto code_r0x0001401c8a3f;
          }
          goto code_r0x0001401c8dae;
        }
        uVar18 = (ulonglong)puVar11 & 0xffffffffffffc000;
        uVar25 = (uint)puVar11;
        if (*(char *)(uVar18 + 10) != '\0') {
          puVar5 = (ulonglong *)FUN_145086050(param_4,puVar11);
          if (puVar5 != puVar11) goto code_r0x0001401c8907;
          FUN_143e11a40(param_4 + 0x100,uVar18);
          uVar24 = (ulonglong)(uVar25 >> 9 & 0x1f);
          uVar26 = *(ulonglong *)(uVar18 + 0x30 + uVar24 * 8);
          if ((uVar26 >> ((ulonglong)(uVar25 >> 3) & 0x3f) & 1) != 0) goto code_r0x0001401c8a3f;
          *(ulonglong *)(uVar18 + 0x30 + uVar24 * 8) =
               uVar26 | 1L << ((ulonglong)(uVar25 >> 3) & 0x3f);
          uVar18 = *(ulonglong *)(*puVar5 + 8);
          uVar25 = (uint)uVar18 & 7;
          if (uVar25 == 5) {
            if (((uVar18 & 0xff8) == 0) && ((*(byte *)((longlong)puVar5 + 0x14) & 1) == 0)) {
              uVar25 = (uint)puVar5[3] & 7;
              goto code_r0x0001401c8cfc;
            }
          }
          else {
code_r0x0001401c8cfc:
            if (uVar25 == 1) goto code_r0x0001401c8a3f;
          }
          puVar10 = (undefined8 *)param_3[1];
          if ((puVar10 == (undefined8 *)0x0) ||
             (puVar9 = (undefined8 *)*param_3, puVar9 == puVar10 + 0x100)) {
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = 0x7f;
            }
            FUN_145086330(param_3);
            puVar9 = (undefined8 *)*param_3;
          }
          *param_3 = puVar9 + 2;
          *puVar9 = puVar5;
          puVar9[1] = uVar18;
          goto code_r0x0001401c8a3f;
        }
        uVar24 = (ulonglong)(uVar25 >> 9 & 0x1f);
        uVar26 = *(ulonglong *)(uVar18 + 0x30 + uVar24 * 8);
        if ((uVar26 >> ((ulonglong)puVar11 >> 3 & 0x3f) & 1) != 0) goto code_r0x0001401c8a3f;
        *(ulonglong *)(uVar18 + 0x30 + uVar24 * 8) = uVar26 | 1L << ((ulonglong)puVar11 >> 3 & 0x3f)
        ;
        uVar18 = *(ulonglong *)(*puVar11 + 8);
        uVar25 = (uint)uVar18 & 7;
        if (uVar25 == 5) {
          if (((uVar18 & 0xff8) == 0) && ((*(byte *)((longlong)puVar11 + 0x14) & 1) == 0)) {
            uVar25 = (uint)puVar11[3] & 7;
            goto code_r0x0001401c89a2;
          }
        }
        else {
code_r0x0001401c89a2:
          if (uVar25 == 1) goto code_r0x0001401c8a3f;
        }
        puVar10 = (undefined8 *)param_3[1];
        if ((puVar10 == (undefined8 *)0x0) ||
           (puVar9 = (undefined8 *)*param_3, puVar9 == puVar10 + 0x100)) {
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = 0x7f;
          }
          FUN_145086330(param_3);
          puVar9 = (undefined8 *)*param_3;
        }
        goto code_r0x0001401c89cb;
      }
      goto code_r0x0001401c8a3f;
    }
    break;
  case 5:
    lVar4 = 3;
    if ((param_2 & 0xff8) != 0) goto code_r0x0001401c807e;
    if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
      uVar21 = *(ulonglong *)(param_1 + 0x18);
      uVar2 = (uint)uVar21;
      uVar25 = uVar2 & 7;
      if (uVar25 == 4) {
        uVar6 = (ulonglong)(uVar2 >> 3 & 0x1fff);
        lVar4 = func_0x0001406e0920(uVar21);
        lVar22 = *(uint *)(param_1 + 8) * uVar6;
        if (lVar22 != 0) {
          uVar25 = uVar2 >> 0x10 & 0x3ff;
          uVar21 = uVar21 >> 0x1a & 0x3ff;
          if (uVar25 <= (uint)uVar21) {
            lVar23 = param_1 + 0x28;
            lVar13 = **(longlong **)(unaff_GS_OFFSET + 0x58);
            uVar18 = (ulonglong)uVar25;
code_r0x0001401c9df5:
            if (((*(ulonglong *)(lVar4 + (uVar18 >> 6) * 8) >> (uVar18 & 0x3f) & 1) != 0) &&
               (puVar11 = *(ulonglong **)(lVar23 + uVar18 * 8), puVar11 != (ulonglong *)0x0)) {
              puVar7 = (ulonglong *)(lVar23 + uVar18 * 8);
              if (puVar11 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
                  _DAT_14abce178 <= puVar11) {
                if ((puVar11 < *(ulonglong **)(param_4 + 0x50)) &&
                   (*(ulonglong **)(param_4 + 0x48) <= puVar11)) {
                  uVar26 = *puVar11;
                  if ((uVar26 & 2) == 0) {
                    if ((uVar26 & 1) == 0) {
                      puVar5 = (ulonglong *)FUN_145086050(param_4,puVar11);
                      if (puVar5 == puVar11) goto code_r0x0001401ca017;
code_r0x0001401c9f19:
                      *puVar7 = (ulonglong)puVar5;
                      puVar11 = (ulonglong *)
                                (((ulonglong)puVar5 & 0xffffffffffffc000) + 0x30 +
                                (ulonglong)((uint)puVar5 >> 9 & 0x1f) * 8);
                      *puVar11 = *puVar11 | 1L << ((ulonglong)((uint)puVar5 >> 3) & 0x3f);
                    }
                    else {
                      puVar11 = (ulonglong *)(uVar26 & 0xfffffffffffffff8);
                      *puVar7 = (ulonglong)puVar11;
                      if (puVar11 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
                          _DAT_14abce178 <= puVar11) goto code_r0x0001401ca017;
                    }
                  }
                  else {
code_r0x0001401ca017:
                    if (((puVar7 < _DAT_14abce178 ||
                          (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) < puVar7) &&
                        (_DAT_14abce178 <= puVar7)) &&
                       (puVar7 < (ulonglong *)
                                 ((longlong)_DAT_14abce178 +
                                 _DAT_14abce198 + _DAT_14abce180 * 0x10000))) {
                      *(undefined1 *)
                       (_DAT_14abce1f8 +
                       ((ulonglong)((longlong)puVar7 - _DAT_14abce1e8) >> 9 & 0xffffffff)) = 1;
                    }
                  }
                }
                goto code_r0x0001401ca051;
              }
              if ((puVar11 < _DAT_14abce178) ||
                 ((ulonglong *)
                  ((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000) <= puVar11)
                 ) {
                if ((puVar11 < *(ulonglong **)(param_4 + 0x18d0)) ||
                   (*(ulonglong **)(param_4 + 0x18d8) <= puVar11)) goto code_r0x0001401ca051;
                lVar15 = (longlong)*(int *)(lVar13 + 0xff4);
                puVar10 = *(undefined8 **)(param_4 + 0x17e0 + lVar15 * 8);
                if (((puVar10 == (undefined8 *)0x0) ||
                    (puVar7 = (ulonglong *)*puVar10, puVar11 < puVar7)) ||
                   ((ulonglong *)puVar10[1] <= puVar11)) {
                  lVar16 = *(longlong *)(param_4 + 0x1838);
                  uVar24 = (ulonglong)*(uint *)(param_4 + 0x1834);
                  lVar17 = lVar16;
                  uVar26 = uVar24;
                  if (uVar24 != 0) {
                    do {
                      uVar8 = uVar26 >> 1;
                      lVar12 = lVar17 + 0x10 + uVar8 * 0x10;
                      if (*(ulonglong **)(lVar12 + -0x10) <= puVar11) {
                        lVar17 = lVar12;
                        uVar8 = ~uVar8 + uVar26;
                      }
                      uVar26 = uVar8;
                    } while (0 < (longlong)uVar8);
                  }
                  lVar12 = lVar17 + -0x10;
                  if (lVar17 == uVar24 * 0x10 + lVar16) {
                    lVar12 = (ulonglong)(*(uint *)(param_4 + 0x1834) - 1) * 0x10 + lVar16;
                  }
                  do {
                    uVar2 = *(uint *)(param_4 + 0x1820);
                    if (uVar2 != 0) {
                      uVar3 = *(uint *)(lVar12 + 8);
                      uVar1 = (uVar3 >> 0x10 ^ uVar3) * -0x7a143595;
                      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
                      lVar16 = *(longlong *)(param_4 + 0x1828);
                      uVar26 = (ulonglong)((uVar1 >> 0x10 ^ uVar1) & uVar2 - 1);
                      lVar17 = uVar26 * 0x68;
                      uVar1 = *(uint *)(lVar16 + lVar17);
                      while( true ) {
                        if (uVar1 == uVar3) {
                          uVar3 = (uint)uVar26;
                          while ((uVar24 = (ulonglong)uVar2, uVar2 != uVar3 &&
                                 (uVar24 = uVar26, *(int *)(lVar16 + uVar26 * 0x68) == 0))) {
                            uVar3 = (int)uVar26 + 1;
                            uVar26 = (ulonglong)uVar3;
                          }
                          goto code_r0x0001401ca1e6;
                        }
                        puVar14 = (uint *)(lVar17 + lVar16);
                        if (uVar1 == 0) break;
                        uVar26 = (ulonglong)
                                 ((int)((ulonglong)((longlong)puVar14 + (0x68 - lVar16)) >> 3) *
                                  -0x3b13b13b & uVar2 - 1);
                        lVar17 = uVar26 * 0x68;
                        uVar1 = *(uint *)(lVar16 + lVar17);
                      }
                      if (*(uint *)(param_4 + 0x1824) != (uVar2 * 0x4b) / 100)
                      goto code_r0x0001401ca439;
                    }
                    FUN_141d83dd0((uint *)(param_4 + 0x1820),uVar2 * 2);
                  } while( true );
                }
                goto code_r0x0001401ca20f;
              }
              uVar26 = *puVar11;
              if ((uVar26 & 1) != 0) {
                *puVar7 = uVar26 & 0xfffffffffffffff8;
                goto code_r0x0001401ca051;
              }
              uVar24 = (longlong)puVar11 - _DAT_1498c41b0;
              if ((uVar24 < 0x1000000) &&
                 ((*(uint *)((uVar24 >> 0x15) * 4 + 0x1498c41b8) >> ((uint)(uVar24 >> 0x10) & 0x1f)
                  & 1) != 0)) {
                uVar24 = *(ulonglong *)((longlong)puVar11 + (8 - puVar11[-1]));
                if ((uVar24 & 1) != 0) goto code_r0x0001401ca051;
                *(ulonglong *)((longlong)puVar11 + (8 - puVar11[-1])) = uVar24 | 1;
                uVar26 = *(ulonglong *)(uVar26 + 8);
                uVar3 = (uint)uVar26 & 7;
                uVar2 = uVar3;
                if (uVar3 == 5) {
                  if (((uVar26 & 0xff8) == 0) && ((*(byte *)((longlong)puVar11 + 0x14) & 1) == 0)) {
                    uVar2 = (uint)puVar11[3] & 7;
                    goto code_r0x0001401ca3aa;
                  }
                }
                else {
code_r0x0001401ca3aa:
                  if ((uVar3 == 6) || (uVar2 == 1)) goto code_r0x0001401ca051;
                }
                goto code_r0x0001401ca3c1;
              }
              uVar26 = (ulonglong)puVar11 & 0xffffffffffffc000;
              uVar2 = (uint)puVar11;
              if (*(char *)(uVar26 + 10) != '\0') {
                puVar5 = (ulonglong *)FUN_145086050(param_4,puVar11);
                if (puVar5 != puVar11) goto code_r0x0001401c9f19;
                FUN_143e11a40(param_4 + 0x100,uVar26);
                uVar8 = (ulonglong)(uVar2 >> 9 & 0x1f);
                uVar24 = *(ulonglong *)(uVar26 + 0x30 + uVar8 * 8);
                if ((uVar24 >> ((ulonglong)(uVar2 >> 3) & 0x3f) & 1) != 0)
                goto code_r0x0001401ca051;
                *(ulonglong *)(uVar26 + 0x30 + uVar8 * 8) =
                     uVar24 | 1L << ((ulonglong)(uVar2 >> 3) & 0x3f);
                uVar26 = *(ulonglong *)(*puVar5 + 8);
                uVar2 = (uint)uVar26 & 7;
                if (uVar2 == 5) {
                  if (((uVar26 & 0xff8) == 0) && ((*(byte *)((longlong)puVar5 + 0x14) & 1) == 0)) {
                    uVar2 = (uint)puVar5[3] & 7;
                    goto code_r0x0001401ca30f;
                  }
                }
                else {
code_r0x0001401ca30f:
                  if (uVar2 == 1) goto code_r0x0001401ca051;
                }
                puVar10 = (undefined8 *)param_3[1];
                if ((puVar10 == (undefined8 *)0x0) ||
                   (puVar9 = (undefined8 *)*param_3, puVar9 == puVar10 + 0x100)) {
                  if (puVar10 != (undefined8 *)0x0) {
                    *puVar10 = 0x7f;
                  }
                  FUN_145086330(param_3);
                  puVar9 = (undefined8 *)*param_3;
                }
                *param_3 = puVar9 + 2;
                *puVar9 = puVar5;
                puVar9[1] = uVar26;
                goto code_r0x0001401ca051;
              }
              uVar8 = (ulonglong)(uVar2 >> 9 & 0x1f);
              uVar24 = *(ulonglong *)(uVar26 + 0x30 + uVar8 * 8);
              if ((uVar24 >> ((ulonglong)puVar11 >> 3 & 0x3f) & 1) != 0) goto code_r0x0001401ca051;
              *(ulonglong *)(uVar26 + 0x30 + uVar8 * 8) =
                   uVar24 | 1L << ((ulonglong)puVar11 >> 3 & 0x3f);
              uVar26 = *(ulonglong *)(*puVar11 + 8);
              uVar2 = (uint)uVar26 & 7;
              if (uVar2 == 5) {
                if (((uVar26 & 0xff8) == 0) && ((*(byte *)((longlong)puVar11 + 0x14) & 1) == 0)) {
                  uVar2 = (uint)puVar11[3] & 7;
                  goto code_r0x0001401c9fb4;
                }
              }
              else {
code_r0x0001401c9fb4:
                if (uVar2 == 1) goto code_r0x0001401ca051;
              }
              puVar10 = (undefined8 *)param_3[1];
              if ((puVar10 == (undefined8 *)0x0) ||
                 (puVar9 = (undefined8 *)*param_3, puVar9 == puVar10 + 0x100)) {
                if (puVar10 != (undefined8 *)0x0) {
                  *puVar10 = 0x7f;
                }
                FUN_145086330(param_3);
                puVar9 = (undefined8 *)*param_3;
              }
              goto code_r0x0001401c9fdd;
            }
            goto code_r0x0001401ca051;
          }
        }
      }
      else if (uVar25 == 3) {
        uVar6 = (ulonglong)(uVar2 >> 3 & 0x1ff);
        lVar4 = *(uint *)(param_1 + 8) * uVar6;
        if ((lVar4 != 0) && (uVar21 = uVar21 >> 0xc & 0x7ffffffffffff, uVar6 != 0 && uVar21 != 0)) {
          lVar22 = param_1 + 0x28;
          lVar23 = **(longlong **)(unaff_GS_OFFSET + 0x58);
code_r0x0001401c966d:
          uVar26 = 0;
          uVar18 = uVar21;
code_r0x0001401c9675:
          if (((uVar18 & 1) != 0) &&
             (puVar11 = *(ulonglong **)(lVar22 + uVar26 * 8), puVar11 != (ulonglong *)0x0)) {
            puVar7 = (ulonglong *)(lVar22 + uVar26 * 8);
            if (_DAT_14abce178 <= puVar11 &&
                puVar11 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU)) {
              if ((puVar11 < *(ulonglong **)(param_4 + 0x50)) &&
                 (*(ulonglong **)(param_4 + 0x48) <= puVar11)) {
                uVar24 = *puVar11;
                if ((uVar24 & 2) == 0) {
                  if ((uVar24 & 1) == 0) {
                    puVar5 = (ulonglong *)FUN_145086050(param_4,puVar11,param_3);
                    if (puVar5 == puVar11) goto code_r0x0001401c988f;
code_r0x0001401c9792:
                    *puVar7 = (ulonglong)puVar5;
                    puVar11 = (ulonglong *)
                              (((ulonglong)puVar5 & 0xffffffffffffc000) + 0x30 +
                              (ulonglong)((uint)puVar5 >> 9 & 0x1f) * 8);
                    *puVar11 = *puVar11 | 1L << ((ulonglong)((uint)puVar5 >> 3) & 0x3f);
                  }
                  else {
                    puVar11 = (ulonglong *)(uVar24 & 0xfffffffffffffff8);
                    *puVar7 = (ulonglong)puVar11;
                    if (_DAT_14abce178 <= puVar11 &&
                        puVar11 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU))
                    goto code_r0x0001401c988f;
                  }
                }
                else {
code_r0x0001401c988f:
                  if (((puVar7 < _DAT_14abce178 ||
                        (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) < puVar7) &&
                      (_DAT_14abce178 <= puVar7)) &&
                     (puVar7 < (ulonglong *)
                               ((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000
                               ))) {
                    *(undefined1 *)
                     (_DAT_14abce1f8 +
                     ((ulonglong)((longlong)puVar7 - _DAT_14abce1e8) >> 9 & 0xffffffff)) = 1;
                  }
                }
              }
              goto code_r0x0001401c98c9;
            }
            if ((puVar11 < _DAT_14abce178) ||
               ((ulonglong *)((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000)
                <= puVar11)) {
              if ((puVar11 < *(ulonglong **)(param_4 + 0x18d0)) ||
                 (*(ulonglong **)(param_4 + 0x18d8) <= puVar11)) goto code_r0x0001401c98c9;
              lVar13 = (longlong)*(int *)(lVar23 + 0xff4);
              puVar10 = *(undefined8 **)(param_4 + 0x17e0 + lVar13 * 8);
              if (((puVar10 == (undefined8 *)0x0) ||
                  (puVar7 = (ulonglong *)*puVar10, puVar11 < puVar7)) ||
                 ((ulonglong *)puVar10[1] <= puVar11)) {
                lVar15 = *(longlong *)(param_4 + 0x1838);
                uVar8 = (ulonglong)*(uint *)(param_4 + 0x1834);
                lVar16 = lVar15;
                uVar24 = uVar8;
                if (uVar8 != 0) {
                  do {
                    uVar19 = uVar24 >> 1;
                    lVar17 = lVar16 + 0x10 + uVar19 * 0x10;
                    uVar20 = ~uVar19 + uVar24;
                    uVar24 = uVar19;
                    if (*(ulonglong **)(lVar17 + -0x10) <= puVar11) {
                      lVar16 = lVar17;
                      uVar24 = uVar20;
                    }
                  } while (0 < (longlong)uVar24);
                }
                lVar17 = lVar16 + -0x10;
                if (lVar16 == uVar8 * 0x10 + lVar15) {
                  lVar17 = (ulonglong)(*(uint *)(param_4 + 0x1834) - 1) * 0x10 + lVar15;
                }
                do {
                  uVar25 = *(uint *)(param_4 + 0x1820);
                  if (uVar25 != 0) {
                    uVar2 = *(uint *)(lVar17 + 8);
                    uVar3 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
                    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
                    lVar15 = *(longlong *)(param_4 + 0x1828);
                    uVar24 = (ulonglong)((uVar3 >> 0x10 ^ uVar3) & uVar25 - 1);
                    lVar16 = uVar24 * 0x68;
                    uVar3 = *(uint *)(lVar15 + lVar16);
                    while( true ) {
                      if (uVar3 == uVar2) goto code_r0x0001401c9c7c;
                      puVar14 = (uint *)(lVar16 + lVar15);
                      if (uVar3 == 0) break;
                      uVar24 = (ulonglong)
                               ((int)((ulonglong)((longlong)puVar14 + (0x68 - lVar15)) >> 3) *
                                -0x3b13b13b & uVar25 - 1);
                      lVar16 = uVar24 * 0x68;
                      uVar3 = *(uint *)(lVar15 + lVar16);
                    }
                    if (*(uint *)(param_4 + 0x1824) != (uVar25 * 0x4b) / 100)
                    goto code_r0x0001401c9be2;
                  }
                  FUN_141d83dd0((uint *)(param_4 + 0x1820),uVar25 * 2);
                } while( true );
              }
              goto code_r0x0001401c9cbf;
            }
            uVar24 = *puVar11;
            if ((uVar24 & 1) != 0) {
              *puVar7 = uVar24 & 0xfffffffffffffff8;
              goto code_r0x0001401c98c9;
            }
            uVar8 = (longlong)puVar11 - _DAT_1498c41b0;
            if ((uVar8 < 0x1000000) &&
               ((*(uint *)((uVar8 >> 0x15) * 4 + 0x1498c41b8) >> ((uint)(uVar8 >> 0x10) & 0x1f) & 1)
                != 0)) {
              uVar8 = *(ulonglong *)((longlong)puVar11 + (8 - puVar11[-1]));
              if ((uVar8 & 1) != 0) goto code_r0x0001401c98c9;
              *(ulonglong *)((longlong)puVar11 + (8 - puVar11[-1])) = uVar8 | 1;
              uVar24 = *(ulonglong *)(uVar24 + 8);
              uVar2 = (uint)uVar24 & 7;
              uVar25 = uVar2;
              if (uVar2 == 5) {
                if (((uVar24 & 0xff8) == 0) && ((*(byte *)((longlong)puVar11 + 0x14) & 1) == 0)) {
                  uVar25 = (uint)puVar11[3] & 7;
                  goto code_r0x0001401c9b53;
                }
              }
              else {
code_r0x0001401c9b53:
                if ((uVar2 == 6) || (uVar25 == 1)) goto code_r0x0001401c98c9;
              }
              goto code_r0x0001401c9b6a;
            }
            uVar24 = (ulonglong)puVar11 & 0xffffffffffffc000;
            uVar25 = (uint)puVar11;
            if (*(char *)(uVar24 + 10) != '\0') {
              puVar5 = (ulonglong *)FUN_145086050(param_4,puVar11,param_3);
              if (puVar5 != puVar11) goto code_r0x0001401c9792;
              FUN_143e11a40(param_4 + 0x100,uVar24);
              uVar19 = (ulonglong)(uVar25 >> 9 & 0x1f);
              uVar8 = *(ulonglong *)(uVar24 + 0x30 + uVar19 * 8);
              if ((uVar8 >> ((ulonglong)(uVar25 >> 3) & 0x3f) & 1) != 0) goto code_r0x0001401c98c9;
              *(ulonglong *)(uVar24 + 0x30 + uVar19 * 8) =
                   uVar8 | 1L << ((ulonglong)(uVar25 >> 3) & 0x3f);
              uVar24 = *(ulonglong *)(*puVar5 + 8);
              uVar25 = (uint)uVar24 & 7;
              if (uVar25 == 5) {
                if (((uVar24 & 0xff8) == 0) && ((*(byte *)((longlong)puVar5 + 0x14) & 1) == 0)) {
                  uVar25 = (uint)puVar5[3] & 7;
                  goto code_r0x0001401c9ab5;
                }
              }
              else {
code_r0x0001401c9ab5:
                if (uVar25 == 1) goto code_r0x0001401c98c9;
              }
              puVar10 = (undefined8 *)param_3[1];
              if ((puVar10 == (undefined8 *)0x0) ||
                 (puVar9 = (undefined8 *)*param_3, puVar9 == puVar10 + 0x100)) {
                if (puVar10 != (undefined8 *)0x0) {
                  *puVar10 = 0x7f;
                }
                FUN_145086330(param_3);
                puVar9 = (undefined8 *)*param_3;
              }
              *param_3 = puVar9 + 2;
              *puVar9 = puVar5;
              puVar9[1] = uVar24;
              goto code_r0x0001401c98c9;
            }
            uVar19 = (ulonglong)(uVar25 >> 9 & 0x1f);
            uVar8 = *(ulonglong *)(uVar24 + 0x30 + uVar19 * 8);
            if ((uVar8 >> ((ulonglong)puVar11 >> 3 & 0x3f) & 1) != 0) goto code_r0x0001401c98c9;
            *(ulonglong *)(uVar24 + 0x30 + uVar19 * 8) =
                 uVar8 | 1L << ((ulonglong)puVar11 >> 3 & 0x3f);
            uVar24 = *(ulonglong *)(*puVar11 + 8);
            uVar25 = (uint)uVar24 & 7;
            if (uVar25 == 5) {
              if (((uVar24 & 0xff8) == 0) && ((*(byte *)((longlong)puVar11 + 0x14) & 1) == 0)) {
                uVar25 = (uint)puVar11[3] & 7;
                goto code_r0x0001401c982f;
              }
            }
            else {
code_r0x0001401c982f:
              if (uVar25 == 1) goto code_r0x0001401c98c9;
            }
            puVar10 = (undefined8 *)param_3[1];
            if ((puVar10 == (undefined8 *)0x0) ||
               (puVar9 = (undefined8 *)*param_3, puVar9 == puVar10 + 0x100)) {
              if (puVar10 != (undefined8 *)0x0) {
                *puVar10 = 0x7f;
              }
              FUN_145086330(param_3);
              puVar9 = (undefined8 *)*param_3;
            }
            goto code_r0x0001401c9858;
          }
          goto code_r0x0001401c98c9;
        }
      }
      else if ((uVar25 == 2) &&
              (lVar4 = (uVar21 >> 3 & 0xfffffffffffffff) * (ulonglong)*(uint *)(param_1 + 8),
              lVar4 != 0)) {
        puVar11 = (ulonglong *)(param_1 + 0x28);
        lVar22 = **(longlong **)(unaff_GS_OFFSET + 0x58);
code_r0x0001401c8f4a:
        puVar7 = (ulonglong *)*puVar11;
        if (puVar7 != (ulonglong *)0x0) {
          if (puVar7 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
              _DAT_14abce178 <= puVar7) {
            if ((puVar7 < *(ulonglong **)(param_4 + 0x50)) &&
               (*(ulonglong **)(param_4 + 0x48) <= puVar7)) {
              uVar21 = *puVar7;
              if ((uVar21 & 2) == 0) {
                if ((uVar21 & 1) == 0) {
                  puVar5 = (ulonglong *)FUN_145086050(param_4,puVar7,param_3);
                  if (puVar5 == puVar7) goto code_r0x0001401c9145;
code_r0x0001401c905b:
                  *puVar11 = (ulonglong)puVar5;
                  puVar7 = (ulonglong *)
                           (((ulonglong)puVar5 & 0xffffffffffffc000) + 0x30 +
                           (ulonglong)((uint)puVar5 >> 9 & 0x1f) * 8);
                  *puVar7 = *puVar7 | 1L << ((ulonglong)((uint)puVar5 >> 3) & 0x3f);
                }
                else {
                  puVar7 = (ulonglong *)(uVar21 & 0xfffffffffffffff8);
                  *puVar11 = (ulonglong)puVar7;
                  if (puVar7 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
                      _DAT_14abce178 <= puVar7) goto code_r0x0001401c9145;
                }
              }
              else {
code_r0x0001401c9145:
                if (((puVar11 < _DAT_14abce178 ||
                      (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) < puVar11) &&
                    (_DAT_14abce178 <= puVar11)) &&
                   (puVar11 < (ulonglong *)
                              ((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000)
                   )) {
                  *(undefined1 *)
                   (_DAT_14abce1f8 +
                   ((ulonglong)((longlong)puVar11 - _DAT_14abce1e8) >> 9 & 0xffffffff)) = 1;
                }
              }
            }
            goto code_r0x0001401c917f;
          }
          if ((puVar7 < _DAT_14abce178) ||
             ((ulonglong *)((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000) <=
              puVar7)) {
            if ((puVar7 < *(ulonglong **)(param_4 + 0x18d0)) ||
               (*(ulonglong **)(param_4 + 0x18d8) <= puVar7)) goto code_r0x0001401c917f;
            lVar23 = (longlong)*(int *)(lVar22 + 0xff4);
            puVar10 = *(undefined8 **)(param_4 + 0x17e0 + lVar23 * 8);
            if (((puVar10 == (undefined8 *)0x0) || (puVar5 = (ulonglong *)*puVar10, puVar7 < puVar5)
                ) || ((ulonglong *)puVar10[1] <= puVar7)) {
              lVar13 = *(longlong *)(param_4 + 0x1838);
              uVar6 = (ulonglong)*(uint *)(param_4 + 0x1834);
              lVar15 = lVar13;
              uVar21 = uVar6;
              if (uVar6 != 0) {
                do {
                  uVar18 = uVar21 >> 1;
                  lVar16 = lVar15 + 0x10 + uVar18 * 0x10;
                  if (*(ulonglong **)(lVar16 + -0x10) <= puVar7) {
                    lVar15 = lVar16;
                    uVar18 = ~uVar18 + uVar21;
                  }
                  uVar21 = uVar18;
                } while (0 < (longlong)uVar18);
              }
              lVar16 = lVar15 + -0x10;
              if (lVar15 == uVar6 * 0x10 + lVar13) {
                lVar16 = (ulonglong)(*(uint *)(param_4 + 0x1834) - 1) * 0x10 + lVar13;
              }
              do {
                uVar25 = *(uint *)(param_4 + 0x1820);
                if (uVar25 != 0) {
                  uVar2 = *(uint *)(lVar16 + 8);
                  uVar3 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
                  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
                  lVar13 = *(longlong *)(param_4 + 0x1828);
                  uVar21 = (ulonglong)((uVar3 >> 0x10 ^ uVar3) & uVar25 - 1);
                  lVar15 = uVar21 * 0x68;
                  uVar3 = *(uint *)(lVar13 + lVar15);
                  while( true ) {
                    if (uVar3 == uVar2) goto code_r0x0001401c9522;
                    puVar14 = (uint *)(lVar15 + lVar13);
                    if (uVar3 == 0) break;
                    uVar21 = (ulonglong)
                             ((int)((ulonglong)((longlong)puVar14 + (0x68 - lVar13)) >> 3) *
                              -0x3b13b13b & uVar25 - 1);
                    lVar15 = uVar21 * 0x68;
                    uVar3 = *(uint *)(lVar13 + lVar15);
                  }
                  if (*(uint *)(param_4 + 0x1824) != (uVar25 * 0x4b) / 100)
                  goto code_r0x0001401c9488;
                }
                FUN_141d83dd0((uint *)(param_4 + 0x1820),uVar25 * 2);
              } while( true );
            }
            goto code_r0x0001401c9565;
          }
          uVar21 = *puVar7;
          if ((uVar21 & 1) != 0) {
            *puVar11 = uVar21 & 0xfffffffffffffff8;
            goto code_r0x0001401c917f;
          }
          uVar6 = (longlong)puVar7 - _DAT_1498c41b0;
          if ((uVar6 < 0x1000000) &&
             ((*(uint *)((uVar6 >> 0x15) * 4 + 0x1498c41b8) >> ((uint)(uVar6 >> 0x10) & 0x1f) & 1)
              != 0)) {
            uVar6 = *(ulonglong *)((longlong)puVar7 + (8 - puVar7[-1]));
            if ((uVar6 & 1) != 0) goto code_r0x0001401c917f;
            *(ulonglong *)((longlong)puVar7 + (8 - puVar7[-1])) = uVar6 | 1;
            uVar21 = *(ulonglong *)(uVar21 + 8);
            uVar2 = (uint)uVar21 & 7;
            uVar25 = uVar2;
            if (uVar2 == 5) {
              if (((uVar21 & 0xff8) == 0) && ((*(byte *)((longlong)puVar7 + 0x14) & 1) == 0)) {
                uVar25 = (uint)puVar7[3] & 7;
                goto code_r0x0001401c93f6;
              }
            }
            else {
code_r0x0001401c93f6:
              if ((uVar2 == 6) || (uVar25 == 1)) goto code_r0x0001401c917f;
            }
            goto code_r0x0001401c940d;
          }
          uVar21 = (ulonglong)puVar7 & 0xffffffffffffc000;
          uVar25 = (uint)puVar7;
          if (*(char *)(uVar21 + 10) != '\0') {
            puVar5 = (ulonglong *)FUN_145086050(param_4,puVar7,param_3);
            if (puVar5 != puVar7) goto code_r0x0001401c905b;
            FUN_143e11a40(param_4 + 0x100,uVar21);
            uVar18 = (ulonglong)(uVar25 >> 9 & 0x1f);
            uVar6 = *(ulonglong *)(uVar21 + 0x30 + uVar18 * 8);
            if ((uVar6 >> ((ulonglong)(uVar25 >> 3) & 0x3f) & 1) != 0) goto code_r0x0001401c917f;
            *(ulonglong *)(uVar21 + 0x30 + uVar18 * 8) =
                 uVar6 | 1L << ((ulonglong)(uVar25 >> 3) & 0x3f);
            uVar21 = *(ulonglong *)(*puVar5 + 8);
            uVar25 = (uint)uVar21 & 7;
            if (uVar25 == 5) {
              if (((uVar21 & 0xff8) == 0) && ((*(byte *)((longlong)puVar5 + 0x14) & 1) == 0)) {
                uVar25 = (uint)puVar5[3] & 7;
                goto code_r0x0001401c9358;
              }
            }
            else {
code_r0x0001401c9358:
              if (uVar25 == 1) goto code_r0x0001401c917f;
            }
            puVar10 = (undefined8 *)param_3[1];
            if ((puVar10 == (undefined8 *)0x0) ||
               (puVar9 = (undefined8 *)*param_3, puVar9 == puVar10 + 0x100)) {
              if (puVar10 != (undefined8 *)0x0) {
                *puVar10 = 0x7f;
              }
              FUN_145086330(param_3);
              puVar9 = (undefined8 *)*param_3;
            }
            *param_3 = puVar9 + 2;
            *puVar9 = puVar5;
            puVar9[1] = uVar21;
            goto code_r0x0001401c917f;
          }
          uVar18 = (ulonglong)(uVar25 >> 9 & 0x1f);
          uVar6 = *(ulonglong *)(uVar21 + 0x30 + uVar18 * 8);
          if ((uVar6 >> ((ulonglong)puVar7 >> 3 & 0x3f) & 1) != 0) goto code_r0x0001401c917f;
          *(ulonglong *)(uVar21 + 0x30 + uVar18 * 8) = uVar6 | 1L << ((ulonglong)puVar7 >> 3 & 0x3f)
          ;
          uVar21 = *(ulonglong *)(*puVar7 + 8);
          uVar25 = (uint)uVar21 & 7;
          if (uVar25 == 5) {
            if (((uVar21 & 0xff8) == 0) && ((*(byte *)((longlong)puVar7 + 0x14) & 1) == 0)) {
              uVar25 = (uint)puVar7[3] & 7;
              goto code_r0x0001401c90e2;
            }
          }
          else {
code_r0x0001401c90e2:
            if (uVar25 == 1) goto code_r0x0001401c917f;
          }
          puVar10 = (undefined8 *)param_3[1];
          if ((puVar10 == (undefined8 *)0x0) ||
             (puVar9 = (undefined8 *)*param_3, puVar9 == puVar10 + 0x100)) {
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = 0x7f;
            }
            FUN_145086330(param_3);
            puVar9 = (undefined8 *)*param_3;
          }
          goto code_r0x0001401c910b;
        }
        goto code_r0x0001401c917f;
      }
    }
    else if (*(int *)(param_1 + 8) != 0) {
      puVar11 = (ulonglong *)(param_1 + 0x28);
      uVar25 = 0;
      lVar4 = **(longlong **)(unaff_GS_OFFSET + 0x58);
code_r0x0001401c79b7:
      puVar7 = (ulonglong *)*puVar11;
      if (puVar7 != (ulonglong *)0x0) {
        if (puVar7 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
            _DAT_14abce178 <= puVar7) {
          if ((puVar7 < *(ulonglong **)(param_4 + 0x50)) &&
             (*(ulonglong **)(param_4 + 0x48) <= puVar7)) {
            uVar21 = *puVar7;
            if ((uVar21 & 2) == 0) {
              if ((uVar21 & 1) == 0) {
                puVar5 = (ulonglong *)FUN_145086050(param_4,puVar7,param_3);
                if (puVar5 == puVar7) goto code_r0x0001401c7bc2;
code_r0x0001401c7ac9:
                *puVar11 = (ulonglong)puVar5;
                puVar7 = (ulonglong *)
                         (((ulonglong)puVar5 & 0xffffffffffffc000) + 0x30 +
                         (ulonglong)((uint)puVar5 >> 9 & 0x1f) * 8);
                *puVar7 = *puVar7 | 1L << ((ulonglong)((uint)puVar5 >> 3) & 0x3f);
              }
              else {
                puVar7 = (ulonglong *)(uVar21 & 0xfffffffffffffff8);
                *puVar11 = (ulonglong)puVar7;
                if (puVar7 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
                    _DAT_14abce178 <= puVar7) goto code_r0x0001401c7bc2;
              }
            }
            else {
code_r0x0001401c7bc2:
              if (((puVar11 < _DAT_14abce178 ||
                    (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) < puVar11) &&
                  (_DAT_14abce178 <= puVar11)) &&
                 (puVar11 < (ulonglong *)
                            ((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000)))
              {
                *(undefined1 *)
                 (_DAT_14abce1f8 +
                 ((ulonglong)((longlong)puVar11 - _DAT_14abce1e8) >> 9 & 0xffffffff)) = 1;
              }
            }
          }
          goto code_r0x0001401c7bfc;
        }
        if ((puVar7 < _DAT_14abce178) ||
           ((ulonglong *)((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000) <=
            puVar7)) {
          if ((puVar7 < *(ulonglong **)(param_4 + 0x18d0)) ||
             (*(ulonglong **)(param_4 + 0x18d8) <= puVar7)) goto code_r0x0001401c7bfc;
          lVar22 = (longlong)*(int *)(lVar4 + 0xff4);
          puVar10 = *(undefined8 **)(param_4 + 0x17e0 + lVar22 * 8);
          if (((puVar10 == (undefined8 *)0x0) || (puVar5 = (ulonglong *)*puVar10, puVar7 < puVar5))
             || ((ulonglong *)puVar10[1] <= puVar7)) {
            lVar23 = *(longlong *)(param_4 + 0x1838);
            uVar6 = (ulonglong)*(uint *)(param_4 + 0x1834);
            lVar13 = lVar23;
            uVar21 = uVar6;
            if (uVar6 != 0) {
              do {
                uVar18 = uVar21 >> 1;
                lVar15 = lVar13 + 0x10 + uVar18 * 0x10;
                if (*(ulonglong **)(lVar15 + -0x10) <= puVar7) {
                  lVar13 = lVar15;
                  uVar18 = ~uVar18 + uVar21;
                }
                uVar21 = uVar18;
              } while (0 < (longlong)uVar18);
            }
            lVar15 = lVar13 + -0x10;
            if (lVar13 == uVar6 * 0x10 + lVar23) {
              lVar15 = (ulonglong)(*(uint *)(param_4 + 0x1834) - 1) * 0x10 + lVar23;
            }
            do {
              uVar2 = *(uint *)(param_4 + 0x1820);
              if (uVar2 != 0) {
                uVar3 = *(uint *)(lVar15 + 8);
                uVar1 = (uVar3 >> 0x10 ^ uVar3) * -0x7a143595;
                uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
                lVar23 = *(longlong *)(param_4 + 0x1828);
                uVar21 = (ulonglong)((uVar1 >> 0x10 ^ uVar1) & uVar2 - 1);
                lVar13 = uVar21 * 0x68;
                uVar1 = *(uint *)(lVar23 + lVar13);
                while( true ) {
                  if (uVar1 == uVar3) goto code_r0x0001401c7fa8;
                  puVar14 = (uint *)(lVar13 + lVar23);
                  if (uVar1 == 0) break;
                  uVar21 = (ulonglong)
                           ((int)((ulonglong)((longlong)puVar14 + (0x68 - lVar23)) >> 3) *
                            -0x3b13b13b & uVar2 - 1);
                  lVar13 = uVar21 * 0x68;
                  uVar1 = *(uint *)(lVar23 + lVar13);
                }
                if (*(uint *)(param_4 + 0x1824) != (uVar2 * 0x4b) / 100) goto code_r0x0001401c7f0e;
              }
              FUN_141d83dd0((uint *)(param_4 + 0x1820),uVar2 * 2);
            } while( true );
          }
          goto code_r0x0001401c7feb;
        }
        uVar21 = *puVar7;
        if ((uVar21 & 1) != 0) {
          *puVar11 = uVar21 & 0xfffffffffffffff8;
          goto code_r0x0001401c7bfc;
        }
        uVar6 = (longlong)puVar7 - _DAT_1498c41b0;
        if ((uVar6 < 0x1000000) &&
           ((*(uint *)((uVar6 >> 0x15) * 4 + 0x1498c41b8) >> ((uint)(uVar6 >> 0x10) & 0x1f) & 1) !=
            0)) {
          uVar6 = *(ulonglong *)((longlong)puVar7 + (8 - puVar7[-1]));
          if ((uVar6 & 1) != 0) goto code_r0x0001401c7bfc;
          *(ulonglong *)((longlong)puVar7 + (8 - puVar7[-1])) = uVar6 | 1;
          uVar21 = *(ulonglong *)(uVar21 + 8);
          uVar3 = (uint)uVar21 & 7;
          uVar2 = uVar3;
          if (uVar3 == 5) {
            if (((uVar21 & 0xff8) == 0) && ((*(byte *)((longlong)puVar7 + 0x14) & 1) == 0)) {
              uVar2 = (uint)puVar7[3] & 7;
              goto code_r0x0001401c7e7c;
            }
          }
          else {
code_r0x0001401c7e7c:
            if ((uVar3 == 6) || (uVar2 == 1)) goto code_r0x0001401c7bfc;
          }
          goto code_r0x0001401c7e93;
        }
        uVar21 = (ulonglong)puVar7 & 0xffffffffffffc000;
        uVar2 = (uint)puVar7;
        if (*(char *)(uVar21 + 10) != '\0') {
          puVar5 = (ulonglong *)FUN_145086050(param_4,puVar7,param_3);
          if (puVar5 != puVar7) goto code_r0x0001401c7ac9;
          FUN_143e11a40(param_4 + 0x100,uVar21);
          uVar18 = (ulonglong)(uVar2 >> 9 & 0x1f);
          uVar6 = *(ulonglong *)(uVar21 + 0x30 + uVar18 * 8);
          if ((uVar6 >> ((ulonglong)(uVar2 >> 3) & 0x3f) & 1) != 0) goto code_r0x0001401c7bfc;
          *(ulonglong *)(uVar21 + 0x30 + uVar18 * 8) =
               uVar6 | 1L << ((ulonglong)(uVar2 >> 3) & 0x3f);
          uVar21 = *(ulonglong *)(*puVar5 + 8);
          uVar2 = (uint)uVar21 & 7;
          if (uVar2 == 5) {
            if (((uVar21 & 0xff8) == 0) && ((*(byte *)((longlong)puVar5 + 0x14) & 1) == 0)) {
              uVar2 = (uint)puVar5[3] & 7;
              goto code_r0x0001401c7dde;
            }
          }
          else {
code_r0x0001401c7dde:
            if (uVar2 == 1) goto code_r0x0001401c7bfc;
          }
          puVar10 = (undefined8 *)param_3[1];
          if ((puVar10 == (undefined8 *)0x0) ||
             (puVar9 = (undefined8 *)*param_3, puVar9 == puVar10 + 0x100)) {
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = 0x7f;
            }
            FUN_145086330(param_3);
            puVar9 = (undefined8 *)*param_3;
          }
          *param_3 = puVar9 + 2;
          *puVar9 = puVar5;
          puVar9[1] = uVar21;
          goto code_r0x0001401c7bfc;
        }
        uVar18 = (ulonglong)(uVar2 >> 9 & 0x1f);
        uVar6 = *(ulonglong *)(uVar21 + 0x30 + uVar18 * 8);
        if ((uVar6 >> ((ulonglong)puVar7 >> 3 & 0x3f) & 1) != 0) goto code_r0x0001401c7bfc;
        *(ulonglong *)(uVar21 + 0x30 + uVar18 * 8) = uVar6 | 1L << ((ulonglong)puVar7 >> 3 & 0x3f);
        uVar21 = *(ulonglong *)(*puVar7 + 8);
        uVar2 = (uint)uVar21 & 7;
        if (uVar2 == 5) {
          if (((uVar21 & 0xff8) == 0) && ((*(byte *)((longlong)puVar7 + 0x14) & 1) == 0)) {
            uVar2 = (uint)puVar7[3] & 7;
            goto code_r0x0001401c7b5e;
          }
        }
        else {
code_r0x0001401c7b5e:
          if (uVar2 == 1) goto code_r0x0001401c7bfc;
        }
        puVar10 = (undefined8 *)param_3[1];
        if ((puVar10 == (undefined8 *)0x0) ||
           (puVar9 = (undefined8 *)*param_3, puVar9 == puVar10 + 0x100)) {
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = 0x7f;
          }
          FUN_145086330(param_3);
          puVar9 = (undefined8 *)*param_3;
        }
        goto code_r0x0001401c7b87;
      }
      goto code_r0x0001401c7bfc;
    }
  }
  return;
code_r0x0001401ca439:
  *puVar14 = uVar3;
  *(int *)(param_4 + 0x1824) = *(int *)(param_4 + 0x1824) + 1;
  lVar16 = *(longlong *)(param_4 + 0x1828);
  uVar2 = *(uint *)(param_4 + 0x1820);
  uVar3 = (int)((ulonglong)((longlong)puVar14 - lVar16) >> 3) * -0x3b13b13b;
  uVar24 = (ulonglong)uVar3;
  if (uVar2 != uVar3) {
    do {
      if (*(int *)(lVar16 + uVar24 * 0x68) != 0) goto code_r0x0001401ca477;
      uVar3 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar3;
    } while (uVar2 != uVar3);
    uVar24 = (ulonglong)uVar2;
  }
code_r0x0001401ca477:
  *(undefined1 (*) [32])(lVar16 + 0x48 + uVar24 * 0x68) = ZEXT1232(ZEXT812(0));
code_r0x0001401ca1e6:
  puVar10 = (undefined8 *)(lVar16 + 8 + uVar24 * 0x68);
  *(undefined8 **)(param_4 + 0x17e0 + lVar15 * 8) = puVar10;
  puVar7 = (ulonglong *)*puVar10;
  if ((puVar7 <= puVar11) && (puVar11 < (ulonglong *)puVar10[1])) {
code_r0x0001401ca20f:
    uVar26 = (ulonglong)((longlong)puVar11 - (longlong)puVar7) / (ulonglong)puVar10[3];
    uVar2 = (uint)uVar26;
    uVar24 = (ulonglong)(uVar2 >> 5);
    if (((*(uint *)(puVar10[8] + uVar24 * 4) >> (uVar2 & 0x1f) & 1) != 0) &&
       (puVar11 ==
        (ulonglong *)
        ((-(ulonglong)*(byte *)((longlong)puVar10 + 0x26) &
         (longlong)puVar7 +
         ((ulonglong)*(byte *)((longlong)puVar10 + 0x26) - 1) +
         (uVar26 & 0xffffffff) * puVar10[3] + (ulonglong)*(ushort *)((longlong)puVar10 + 0x24)) -
        (ulonglong)*(ushort *)((longlong)puVar10 + 0x24)))) {
      uVar2 = 1 << (uVar2 & 0x1f);
      if ((*(uint *)(puVar10[10] + uVar24 * 4) & uVar2) == 0) {
        LOCK();
        puVar14 = (uint *)(puVar10[10] + uVar24 * 4);
        *puVar14 = *puVar14 | uVar2;
        UNLOCK();
        uVar26 = puVar10[5];
        if (((uint)uVar26 & 7) != 1) {
code_r0x0001401ca3c1:
          puVar10 = (undefined8 *)param_3[1];
          if ((puVar10 == (undefined8 *)0x0) ||
             (puVar9 = (undefined8 *)*param_3, puVar9 == puVar10 + 0x100)) {
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = 0x7f;
            }
            FUN_145086330(param_3);
            puVar9 = (undefined8 *)*param_3;
          }
code_r0x0001401c9fdd:
          *param_3 = puVar9 + 2;
          *puVar9 = puVar11;
          puVar9[1] = uVar26;
        }
      }
    }
  }
code_r0x0001401ca051:
  bVar27 = uVar18 == uVar21;
  uVar18 = uVar18 + 1;
  if ((bVar27) &&
     (lVar23 = lVar23 + uVar6 * 8, uVar18 = (ulonglong)uVar25, lVar23 == param_1 + 0x28 + lVar22 * 8
     )) {
    return;
  }
  goto code_r0x0001401c9df5;
code_r0x0001401c9c7c:
  for (; (uVar8 = (ulonglong)uVar25, uVar25 != (uint)uVar24 &&
         (uVar8 = uVar24, *(int *)(lVar15 + uVar24 * 0x68) == 0));
      uVar24 = (ulonglong)((uint)uVar24 + 1)) {
  }
  goto code_r0x0001401c9c91;
code_r0x0001401c9be2:
  *puVar14 = uVar2;
  *(int *)(param_4 + 0x1824) = *(int *)(param_4 + 0x1824) + 1;
  lVar15 = *(longlong *)(param_4 + 0x1828);
  uVar25 = *(uint *)(param_4 + 0x1820);
  uVar2 = (int)((ulonglong)((longlong)puVar14 - lVar15) >> 3) * -0x3b13b13b;
  uVar8 = (ulonglong)uVar2;
  if (uVar25 != uVar2) {
    do {
      if (*(int *)(lVar15 + uVar8 * 0x68) != 0) goto code_r0x0001401c9c20;
      uVar2 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar2;
    } while (uVar25 != uVar2);
    uVar8 = (ulonglong)uVar25;
  }
code_r0x0001401c9c20:
  *(undefined1 (*) [32])(lVar15 + 0x48 + uVar8 * 0x68) = ZEXT1232(ZEXT812(0));
code_r0x0001401c9c91:
  puVar10 = (undefined8 *)(lVar15 + 8 + uVar8 * 0x68);
  *(undefined8 **)(param_4 + 0x17e0 + lVar13 * 8) = puVar10;
  puVar7 = (ulonglong *)*puVar10;
  if ((puVar7 <= puVar11) && (puVar11 < (ulonglong *)puVar10[1])) {
code_r0x0001401c9cbf:
    uVar24 = (ulonglong)((longlong)puVar11 - (longlong)puVar7) / (ulonglong)puVar10[3];
    uVar25 = (uint)uVar24;
    uVar8 = (ulonglong)(uVar25 >> 5);
    if (((*(uint *)(puVar10[8] + uVar8 * 4) >> (uVar25 & 0x1f) & 1) != 0) &&
       (puVar11 ==
        (ulonglong *)
        ((-(ulonglong)*(byte *)((longlong)puVar10 + 0x26) &
         (longlong)puVar7 +
         ((ulonglong)*(byte *)((longlong)puVar10 + 0x26) - 1) +
         (uVar24 & 0xffffffff) * puVar10[3] + (ulonglong)*(ushort *)((longlong)puVar10 + 0x24)) -
        (ulonglong)*(ushort *)((longlong)puVar10 + 0x24)))) {
      uVar25 = 1 << (uVar25 & 0x1f);
      if ((*(uint *)(puVar10[10] + uVar8 * 4) & uVar25) == 0) {
        LOCK();
        puVar14 = (uint *)(puVar10[10] + uVar8 * 4);
        *puVar14 = *puVar14 | uVar25;
        UNLOCK();
        uVar24 = puVar10[5];
        if (((uint)uVar24 & 7) != 1) {
code_r0x0001401c9b6a:
          puVar10 = (undefined8 *)param_3[1];
          if ((puVar10 == (undefined8 *)0x0) ||
             (puVar9 = (undefined8 *)*param_3, puVar9 == puVar10 + 0x100)) {
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = 0x7f;
            }
            FUN_145086330(param_3);
            puVar9 = (undefined8 *)*param_3;
          }
code_r0x0001401c9858:
          *param_3 = puVar9 + 2;
          *puVar9 = puVar11;
          puVar9[1] = uVar24;
        }
      }
    }
  }
code_r0x0001401c98c9:
  if (uVar18 < 2) goto code_r0x0001401c9d4d;
  uVar26 = uVar26 + 1;
  uVar18 = uVar18 >> 1;
  if (uVar6 <= uVar26) goto code_r0x0001401c9d4d;
  goto code_r0x0001401c9675;
code_r0x0001401c9d4d:
  lVar22 = lVar22 + uVar6 * 8;
  if (lVar22 == param_1 + 0x28 + lVar4 * 8) {
    return;
  }
  goto code_r0x0001401c966d;
code_r0x0001401c9522:
  for (; (uVar6 = (ulonglong)uVar25, uVar25 != (uint)uVar21 &&
         (uVar6 = uVar21, *(int *)(lVar13 + uVar21 * 0x68) == 0));
      uVar21 = (ulonglong)((uint)uVar21 + 1)) {
  }
  goto code_r0x0001401c9537;
code_r0x0001401c9488:
  *puVar14 = uVar2;
  *(int *)(param_4 + 0x1824) = *(int *)(param_4 + 0x1824) + 1;
  lVar13 = *(longlong *)(param_4 + 0x1828);
  uVar25 = *(uint *)(param_4 + 0x1820);
  uVar2 = (int)((ulonglong)((longlong)puVar14 - lVar13) >> 3) * -0x3b13b13b;
  uVar6 = (ulonglong)uVar2;
  if (uVar25 != uVar2) {
    do {
      if (*(int *)(lVar13 + uVar6 * 0x68) != 0) goto code_r0x0001401c94c6;
      uVar2 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar2;
    } while (uVar25 != uVar2);
    uVar6 = (ulonglong)uVar25;
  }
code_r0x0001401c94c6:
  *(undefined1 (*) [32])(lVar13 + 0x48 + uVar6 * 0x68) = ZEXT1232(ZEXT812(0));
code_r0x0001401c9537:
  puVar10 = (undefined8 *)(lVar13 + 8 + uVar6 * 0x68);
  *(undefined8 **)(param_4 + 0x17e0 + lVar23 * 8) = puVar10;
  puVar5 = (ulonglong *)*puVar10;
  if ((puVar5 <= puVar7) && (puVar7 < (ulonglong *)puVar10[1])) {
code_r0x0001401c9565:
    uVar21 = (ulonglong)((longlong)puVar7 - (longlong)puVar5) / (ulonglong)puVar10[3];
    uVar25 = (uint)uVar21;
    uVar6 = (ulonglong)(uVar25 >> 5);
    if (((*(uint *)(puVar10[8] + uVar6 * 4) >> (uVar25 & 0x1f) & 1) != 0) &&
       (puVar7 == (ulonglong *)
                  ((-(ulonglong)*(byte *)((longlong)puVar10 + 0x26) &
                   (longlong)puVar5 +
                   ((ulonglong)*(byte *)((longlong)puVar10 + 0x26) - 1) +
                   (uVar21 & 0xffffffff) * puVar10[3] +
                   (ulonglong)*(ushort *)((longlong)puVar10 + 0x24)) -
                  (ulonglong)*(ushort *)((longlong)puVar10 + 0x24)))) {
      uVar25 = 1 << (uVar25 & 0x1f);
      if ((*(uint *)(puVar10[10] + uVar6 * 4) & uVar25) == 0) {
        LOCK();
        puVar14 = (uint *)(puVar10[10] + uVar6 * 4);
        *puVar14 = *puVar14 | uVar25;
        UNLOCK();
        uVar21 = puVar10[5];
        if (((uint)uVar21 & 7) != 1) {
code_r0x0001401c940d:
          puVar10 = (undefined8 *)param_3[1];
          if ((puVar10 == (undefined8 *)0x0) ||
             (puVar9 = (undefined8 *)*param_3, puVar9 == puVar10 + 0x100)) {
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = 0x7f;
            }
            FUN_145086330(param_3);
            puVar9 = (undefined8 *)*param_3;
          }
code_r0x0001401c910b:
          *param_3 = puVar9 + 2;
          *puVar9 = puVar7;
          puVar9[1] = uVar21;
        }
      }
    }
  }
code_r0x0001401c917f:
  puVar11 = puVar11 + 1;
  if (puVar11 == (ulonglong *)(param_1 + 0x28 + lVar4 * 8)) {
    return;
  }
  goto code_r0x0001401c8f4a;
code_r0x0001401c7fa8:
  for (; (uVar6 = (ulonglong)uVar2, uVar2 != (uint)uVar21 &&
         (uVar6 = uVar21, *(int *)(lVar23 + uVar21 * 0x68) == 0));
      uVar21 = (ulonglong)((uint)uVar21 + 1)) {
  }
  goto code_r0x0001401c7fbd;
code_r0x0001401c7f0e:
  *puVar14 = uVar3;
  *(int *)(param_4 + 0x1824) = *(int *)(param_4 + 0x1824) + 1;
  lVar23 = *(longlong *)(param_4 + 0x1828);
  uVar2 = *(uint *)(param_4 + 0x1820);
  uVar3 = (int)((ulonglong)((longlong)puVar14 - lVar23) >> 3) * -0x3b13b13b;
  uVar6 = (ulonglong)uVar3;
  if (uVar2 != uVar3) {
    do {
      if (*(int *)(lVar23 + uVar6 * 0x68) != 0) goto code_r0x0001401c7f4c;
      uVar3 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar3;
    } while (uVar2 != uVar3);
    uVar6 = (ulonglong)uVar2;
  }
code_r0x0001401c7f4c:
  *(undefined1 (*) [32])(lVar23 + 0x48 + uVar6 * 0x68) = ZEXT1232(ZEXT812(0));
code_r0x0001401c7fbd:
  puVar10 = (undefined8 *)(lVar23 + 8 + uVar6 * 0x68);
  *(undefined8 **)(param_4 + 0x17e0 + lVar22 * 8) = puVar10;
  puVar5 = (ulonglong *)*puVar10;
  if ((puVar5 <= puVar7) && (puVar7 < (ulonglong *)puVar10[1])) {
code_r0x0001401c7feb:
    uVar21 = (ulonglong)((longlong)puVar7 - (longlong)puVar5) / (ulonglong)puVar10[3];
    uVar2 = (uint)uVar21;
    uVar6 = (ulonglong)(uVar2 >> 5);
    if (((*(uint *)(puVar10[8] + uVar6 * 4) >> (uVar2 & 0x1f) & 1) != 0) &&
       (puVar7 == (ulonglong *)
                  ((-(ulonglong)*(byte *)((longlong)puVar10 + 0x26) &
                   (longlong)puVar5 +
                   ((ulonglong)*(byte *)((longlong)puVar10 + 0x26) - 1) +
                   (uVar21 & 0xffffffff) * puVar10[3] +
                   (ulonglong)*(ushort *)((longlong)puVar10 + 0x24)) -
                  (ulonglong)*(ushort *)((longlong)puVar10 + 0x24)))) {
      uVar2 = 1 << (uVar2 & 0x1f);
      if ((*(uint *)(puVar10[10] + uVar6 * 4) & uVar2) == 0) {
        LOCK();
        puVar14 = (uint *)(puVar10[10] + uVar6 * 4);
        *puVar14 = *puVar14 | uVar2;
        UNLOCK();
        uVar21 = puVar10[5];
        if (((uint)uVar21 & 7) != 1) {
code_r0x0001401c7e93:
          puVar10 = (undefined8 *)param_3[1];
          if ((puVar10 == (undefined8 *)0x0) ||
             (puVar9 = (undefined8 *)*param_3, puVar9 == puVar10 + 0x100)) {
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = 0x7f;
            }
            FUN_145086330(param_3);
            puVar9 = (undefined8 *)*param_3;
          }
code_r0x0001401c7b87:
          *param_3 = puVar9 + 2;
          *puVar9 = puVar7;
          puVar9[1] = uVar21;
        }
      }
    }
  }
code_r0x0001401c7bfc:
  puVar11 = puVar11 + 1;
  uVar25 = uVar25 + 1;
  if (*(uint *)(param_1 + 8) <= uVar25) {
    return;
  }
  goto code_r0x0001401c79b7;
code_r0x0001401c8e26:
  *puVar14 = uVar2;
  *(int *)(param_4 + 0x1824) = *(int *)(param_4 + 0x1824) + 1;
  lVar13 = *(longlong *)(param_4 + 0x1828);
  uVar25 = *(uint *)(param_4 + 0x1820);
  uVar2 = (int)((ulonglong)((longlong)puVar14 - lVar13) >> 3) * -0x3b13b13b;
  uVar26 = (ulonglong)uVar2;
  if (uVar25 != uVar2) {
    do {
      if (*(int *)(lVar13 + uVar26 * 0x68) != 0) goto code_r0x0001401c8e64;
      uVar2 = (int)uVar26 + 1;
      uVar26 = (ulonglong)uVar2;
    } while (uVar25 != uVar2);
    uVar26 = (ulonglong)uVar25;
  }
code_r0x0001401c8e64:
  *(undefined1 (*) [32])(lVar13 + 0x48 + uVar26 * 0x68) = ZEXT1232(ZEXT812(0));
code_r0x0001401c8bd3:
  puVar10 = (undefined8 *)(lVar13 + 8 + uVar26 * 0x68);
  *(undefined8 **)(param_4 + 0x17e0 + lVar23 * 8) = puVar10;
  puVar7 = (ulonglong *)*puVar10;
  if ((puVar7 <= puVar11) && (puVar11 < (ulonglong *)puVar10[1])) {
code_r0x0001401c8bfc:
    uVar18 = (ulonglong)((longlong)puVar11 - (longlong)puVar7) / (ulonglong)puVar10[3];
    uVar25 = (uint)uVar18;
    uVar26 = (ulonglong)(uVar25 >> 5);
    if (((*(uint *)(puVar10[8] + uVar26 * 4) >> (uVar25 & 0x1f) & 1) != 0) &&
       (puVar11 ==
        (ulonglong *)
        ((-(ulonglong)*(byte *)((longlong)puVar10 + 0x26) &
         (longlong)puVar7 +
         ((ulonglong)*(byte *)((longlong)puVar10 + 0x26) - 1) +
         (uVar18 & 0xffffffff) * puVar10[3] + (ulonglong)*(ushort *)((longlong)puVar10 + 0x24)) -
        (ulonglong)*(ushort *)((longlong)puVar10 + 0x24)))) {
      uVar25 = 1 << (uVar25 & 0x1f);
      if ((*(uint *)(puVar10[10] + uVar26 * 4) & uVar25) == 0) {
        LOCK();
        puVar14 = (uint *)(puVar10[10] + uVar26 * 4);
        *puVar14 = *puVar14 | uVar25;
        UNLOCK();
        uVar18 = puVar10[5];
        if (((uint)uVar18 & 7) != 1) {
code_r0x0001401c8dae:
          puVar10 = (undefined8 *)param_3[1];
          if ((puVar10 == (undefined8 *)0x0) ||
             (puVar9 = (undefined8 *)*param_3, puVar9 == puVar10 + 0x100)) {
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = 0x7f;
            }
            FUN_145086330(param_3);
            puVar9 = (undefined8 *)*param_3;
          }
code_r0x0001401c89cb:
          *param_3 = puVar9 + 2;
          *puVar9 = puVar11;
          puVar9[1] = uVar18;
        }
      }
    }
  }
code_r0x0001401c8a3f:
  bVar27 = uVar21 == uVar6;
  uVar21 = uVar21 + 1;
  if (bVar27) {
    return;
  }
  goto code_r0x0001401c87e3;
code_r0x0001401c870a:
  *puVar14 = uVar2;
  *(int *)(param_4 + 0x1824) = *(int *)(param_4 + 0x1824) + 1;
  lVar23 = *(longlong *)(param_4 + 0x1828);
  uVar25 = *(uint *)(param_4 + 0x1820);
  uVar2 = (int)((ulonglong)((longlong)puVar14 - lVar23) >> 3) * -0x3b13b13b;
  uVar18 = (ulonglong)uVar2;
  if (uVar25 != uVar2) {
    do {
      if (*(int *)(lVar23 + uVar18 * 0x68) != 0) goto code_r0x0001401c8748;
      uVar2 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar2;
    } while (uVar25 != uVar2);
    uVar18 = (ulonglong)uVar25;
  }
code_r0x0001401c8748:
  *(undefined1 (*) [32])(lVar23 + 0x48 + uVar18 * 0x68) = ZEXT1232(ZEXT812(0));
code_r0x0001401c84a1:
  puVar10 = (undefined8 *)(lVar23 + 8 + uVar18 * 0x68);
  *(undefined8 **)(param_4 + 0x17e0 + lVar22 * 8) = puVar10;
  puVar5 = (ulonglong *)*puVar10;
  if ((puVar5 <= puVar7) && (puVar7 < (ulonglong *)puVar10[1])) {
code_r0x0001401c84ca:
    uVar6 = (ulonglong)((longlong)puVar7 - (longlong)puVar5) / (ulonglong)puVar10[3];
    uVar25 = (uint)uVar6;
    uVar18 = (ulonglong)(uVar25 >> 5);
    if (((*(uint *)(puVar10[8] + uVar18 * 4) >> (uVar25 & 0x1f) & 1) != 0) &&
       (puVar7 == (ulonglong *)
                  ((-(ulonglong)*(byte *)((longlong)puVar10 + 0x26) &
                   (longlong)puVar5 +
                   ((ulonglong)*(byte *)((longlong)puVar10 + 0x26) - 1) +
                   (uVar6 & 0xffffffff) * puVar10[3] +
                   (ulonglong)*(ushort *)((longlong)puVar10 + 0x24)) -
                  (ulonglong)*(ushort *)((longlong)puVar10 + 0x24)))) {
      uVar25 = 1 << (uVar25 & 0x1f);
      if ((*(uint *)(puVar10[10] + uVar18 * 4) & uVar25) == 0) {
        LOCK();
        puVar14 = (uint *)(puVar10[10] + uVar18 * 4);
        *puVar14 = *puVar14 | uVar25;
        UNLOCK();
        uVar6 = puVar10[5];
        if (((uint)uVar6 & 7) != 1) {
          puVar10 = (undefined8 *)param_3[1];
          if ((puVar10 == (undefined8 *)0x0) ||
             (puVar9 = (undefined8 *)*param_3, puVar9 == puVar10 + 0x100)) {
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = 0x7f;
            }
            FUN_145086330(param_3);
            puVar9 = (undefined8 *)*param_3;
          }
code_r0x0001401c8291:
          *param_3 = puVar9 + 2;
          *puVar9 = puVar7;
          puVar9[1] = uVar6;
        }
      }
    }
  }
code_r0x0001401c8306:
  puVar11 = puVar11 + 1;
  bVar27 = uVar21 < 2;
  uVar21 = uVar21 >> 1;
  if (bVar27) {
    return;
  }
  goto code_r0x0001401c80c7;
code_r0x0001401c7879:
  *puVar14 = uVar2;
  *(int *)(param_4 + 0x1824) = *(int *)(param_4 + 0x1824) + 1;
  lVar23 = *(longlong *)(param_4 + 0x1828);
  uVar25 = *(uint *)(param_4 + 0x1820);
  uVar2 = (int)((ulonglong)((longlong)puVar14 - lVar23) >> 3) * -0x3b13b13b;
  uVar26 = (ulonglong)uVar2;
  if (uVar25 != uVar2) {
    do {
      if (*(int *)(lVar23 + uVar26 * 0x68) != 0) goto code_r0x0001401c78b7;
      uVar2 = (int)uVar26 + 1;
      uVar26 = (ulonglong)uVar2;
    } while (uVar25 != uVar2);
    uVar26 = (ulonglong)uVar25;
  }
code_r0x0001401c78b7:
  *(undefined1 (*) [32])(lVar23 + 0x48 + uVar26 * 0x68) = ZEXT1232(ZEXT812(0));
code_r0x0001401c760b:
  puVar10 = (undefined8 *)(lVar23 + 8 + uVar26 * 0x68);
  *(undefined8 **)(param_4 + 0x17e0 + lVar22 * 8) = puVar10;
  puVar7 = (ulonglong *)*puVar10;
  if ((puVar7 <= puVar11) && (puVar11 < (ulonglong *)puVar10[1])) {
code_r0x0001401c7634:
    uVar18 = (ulonglong)((longlong)puVar11 - (longlong)puVar7) / (ulonglong)puVar10[3];
    uVar25 = (uint)uVar18;
    uVar26 = (ulonglong)(uVar25 >> 5);
    if (((*(uint *)(puVar10[8] + uVar26 * 4) >> (uVar25 & 0x1f) & 1) != 0) &&
       (puVar11 ==
        (ulonglong *)
        ((-(ulonglong)*(byte *)((longlong)puVar10 + 0x26) &
         (longlong)puVar7 +
         ((ulonglong)*(byte *)((longlong)puVar10 + 0x26) - 1) +
         (uVar18 & 0xffffffff) * puVar10[3] + (ulonglong)*(ushort *)((longlong)puVar10 + 0x24)) -
        (ulonglong)*(ushort *)((longlong)puVar10 + 0x24)))) {
      uVar25 = 1 << (uVar25 & 0x1f);
      if ((*(uint *)(puVar10[10] + uVar26 * 4) & uVar25) == 0) {
        LOCK();
        puVar14 = (uint *)(puVar10[10] + uVar26 * 4);
        *puVar14 = *puVar14 | uVar25;
        UNLOCK();
        uVar18 = puVar10[5];
        if (((uint)uVar18 & 7) != 1) {
          puVar10 = (undefined8 *)param_3[1];
          if ((puVar10 == (undefined8 *)0x0) ||
             (puVar7 = (ulonglong *)*param_3, puVar7 == puVar10 + 0x100)) {
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = 0x7f;
            }
            FUN_145086330(param_3);
            puVar7 = (ulonglong *)*param_3;
          }
code_r0x0001401c7407:
          *param_3 = puVar7 + 2;
          *puVar7 = (ulonglong)puVar11;
          puVar7[1] = uVar18;
        }
      }
    }
  }
code_r0x0001401c747b:
  uVar6 = uVar6 + 1;
  if (uVar6 == uVar21) {
    return;
  }
  goto code_r0x0001401c7235;
}

