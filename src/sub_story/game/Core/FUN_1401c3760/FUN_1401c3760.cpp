// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401c3760  size: 11478 bytes
// Name:    FUN_1401c3760
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401c3760(longlong param_1,ulonglong param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  uint *puVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong unaff_GS_OFFSET;
  bool bVar28;
  
  switch((uint)param_2 & 7) {
  case 2:
    uVar11 = param_2 >> 3 & 0xfffffffffffffff;
    if (uVar11 != 0) {
      uVar9 = 0;
      lVar5 = **(longlong **)(unaff_GS_OFFSET + 0x58);
code_r0x0001401c37f0:
      puVar16 = *(ulonglong **)(param_1 + 8 + uVar9 * 8);
      if (puVar16 != (ulonglong *)0x0) {
        puVar10 = (ulonglong *)(param_1 + 8 + uVar9 * 8);
        if (puVar16 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
            _DAT_14abce178 <= puVar16) {
          if ((puVar16 < *(ulonglong **)(param_4 + 0x50)) &&
             (*(ulonglong **)(param_4 + 0x48) <= puVar16)) {
            uVar25 = *puVar16;
            if ((uVar25 & 2) == 0) {
              if ((uVar25 & 1) == 0) {
                puVar6 = (ulonglong *)FUN_145086050(param_4,puVar16,param_3);
                if (puVar6 == puVar16) goto code_r0x0001401c39b9;
                *puVar10 = (ulonglong)puVar6;
                puVar16 = (ulonglong *)
                          (((ulonglong)puVar6 & 0xffffffffffffc000) + 0x30 +
                          (ulonglong)((uint)puVar6 >> 9 & 0x1f) * 8);
                *puVar16 = *puVar16 | 1L << ((ulonglong)((uint)puVar6 >> 3) & 0x3f);
              }
              else {
                puVar16 = (ulonglong *)(uVar25 & 0xfffffffffffffff8);
                *puVar10 = (ulonglong)puVar16;
                if (puVar16 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
                    _DAT_14abce178 <= puVar16) goto code_r0x0001401c39b9;
              }
            }
            else {
code_r0x0001401c39b9:
              if (((puVar10 < _DAT_14abce178 ||
                    (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) < puVar10) &&
                  (_DAT_14abce178 <= puVar10)) &&
                 (puVar10 < (ulonglong *)
                            ((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000)))
              {
                *(undefined1 *)
                 (_DAT_14abce1f8 +
                 ((ulonglong)((longlong)puVar10 - _DAT_14abce1e8) >> 9 & 0xffffffff)) = 1;
              }
            }
          }
          goto code_r0x0001401c39f3;
        }
        if ((puVar16 < _DAT_14abce178) ||
           ((ulonglong *)((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000) <=
            puVar16)) {
          if ((puVar16 < *(ulonglong **)(param_4 + 0x18d0)) ||
             (*(ulonglong **)(param_4 + 0x18d8) <= puVar16)) goto code_r0x0001401c39f3;
          lVar7 = (longlong)*(int *)(lVar5 + 0xff4);
          puVar14 = *(undefined8 **)(param_4 + 0x17e0 + lVar7 * 8);
          if (((puVar14 == (undefined8 *)0x0) ||
              (puVar10 = (ulonglong *)*puVar14, puVar16 < puVar10)) ||
             ((ulonglong *)puVar14[1] <= puVar16)) {
            lVar8 = *(longlong *)(param_4 + 0x1838);
            uVar18 = (ulonglong)*(uint *)(param_4 + 0x1834);
            lVar20 = lVar8;
            uVar25 = uVar18;
            if (uVar18 != 0) {
              do {
                uVar15 = uVar25 >> 1;
                lVar22 = lVar20 + 0x10 + uVar15 * 0x10;
                if (*(ulonglong **)(lVar22 + -0x10) <= puVar16) {
                  lVar20 = lVar22;
                  uVar15 = ~uVar15 + uVar25;
                }
                uVar25 = uVar15;
              } while (0 < (longlong)uVar15);
            }
            lVar22 = lVar20 + -0x10;
            if (lVar20 == uVar18 * 0x10 + lVar8) {
              lVar22 = (ulonglong)(*(uint *)(param_4 + 0x1834) - 1) * 0x10 + lVar8;
            }
            do {
              uVar17 = *(uint *)(param_4 + 0x1820);
              if (uVar17 != 0) {
                uVar2 = *(uint *)(lVar22 + 8);
                uVar4 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
                uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
                lVar8 = *(longlong *)(param_4 + 0x1828);
                uVar25 = (ulonglong)((uVar4 >> 0x10 ^ uVar4) & uVar17 - 1);
                lVar20 = uVar25 * 0x68;
                uVar4 = *(uint *)(lVar8 + lVar20);
                while( true ) {
                  if (uVar4 == uVar2) {
                    uVar2 = (uint)uVar25;
                    while ((uVar18 = (ulonglong)uVar17, uVar17 != uVar2 &&
                           (uVar18 = uVar25, *(int *)(lVar8 + uVar25 * 0x68) == 0))) {
                      uVar2 = (int)uVar25 + 1;
                      uVar25 = (ulonglong)uVar2;
                    }
                    goto code_r0x0001401c3b96;
                  }
                  puVar21 = (uint *)(lVar20 + lVar8);
                  if (uVar4 == 0) break;
                  uVar25 = (ulonglong)
                           ((int)((ulonglong)((longlong)puVar21 + (0x68 - lVar8)) >> 3) *
                            -0x3b13b13b & uVar17 - 1);
                  lVar20 = uVar25 * 0x68;
                  uVar4 = *(uint *)(lVar8 + lVar20);
                }
                if (*(uint *)(param_4 + 0x1824) != (uVar17 * 0x4b) / 100) goto code_r0x0001401c3d58;
              }
              FUN_141d83dd0((uint *)(param_4 + 0x1820),uVar17 * 2);
            } while( true );
          }
          goto code_r0x0001401c3bbf;
        }
        uVar25 = *puVar16;
        if ((uVar25 & 1) != 0) {
          *puVar10 = uVar25 & 0xfffffffffffffff8;
          goto code_r0x0001401c39f3;
        }
        uVar18 = (longlong)puVar16 - _DAT_1498c41b0;
        if ((uVar18 < 0x1000000) &&
           ((*(uint *)((uVar18 >> 0x15) * 4 + 0x1498c41b8) >> ((uint)(uVar18 >> 0x10) & 0x1f) & 1)
            != 0)) {
          uVar18 = *(ulonglong *)((longlong)puVar16 + (8 - puVar16[-1]));
          if ((uVar18 & 1) != 0) goto code_r0x0001401c39f3;
          *(ulonglong *)((longlong)puVar16 + (8 - puVar16[-1])) = uVar18 | 1;
          uVar25 = *(ulonglong *)(uVar25 + 8);
          uVar2 = (uint)uVar25 & 7;
          uVar17 = uVar2;
          if (uVar2 == 5) {
            if (((uVar25 & 0xff8) == 0) && ((*(byte *)((longlong)puVar16 + 0x14) & 1) == 0)) {
              uVar17 = (uint)puVar16[3] & 7;
              goto code_r0x0001401c3cd6;
            }
          }
          else {
code_r0x0001401c3cd6:
            if ((uVar2 == 6) || (uVar17 == 1)) goto code_r0x0001401c39f3;
          }
          goto code_r0x0001401c3ce8;
        }
        uVar15 = (ulonglong)((uint)puVar16 >> 9 & 0x1f);
        uVar18 = *(ulonglong *)(((ulonglong)puVar16 & 0xffffffffffffc000) + 0x30 + uVar15 * 8);
        if ((uVar18 >> ((ulonglong)puVar16 >> 3 & 0x3f) & 1) != 0) goto code_r0x0001401c39f3;
        *(ulonglong *)(((ulonglong)puVar16 & 0xffffffffffffc000) + 0x30 + uVar15 * 8) =
             uVar18 | 1L << ((ulonglong)puVar16 >> 3 & 0x3f);
        uVar25 = *(ulonglong *)(uVar25 + 8);
        uVar17 = (uint)uVar25 & 7;
        if (uVar17 == 5) {
          if (((uVar25 & 0xff8) == 0) && ((*(byte *)((longlong)puVar16 + 0x14) & 1) == 0)) {
            uVar17 = (uint)puVar16[3] & 7;
            goto code_r0x0001401c394b;
          }
        }
        else {
code_r0x0001401c394b:
          if (uVar17 == 1) goto code_r0x0001401c39f3;
        }
        puVar14 = (undefined8 *)param_3[1];
        if ((puVar14 == (undefined8 *)0x0) ||
           (puVar10 = (ulonglong *)*param_3, puVar10 == puVar14 + 0x100)) {
          if (puVar14 != (undefined8 *)0x0) {
            *puVar14 = 0x7f;
          }
          FUN_145086330(param_3);
          puVar10 = (ulonglong *)*param_3;
        }
        goto code_r0x0001401c3978;
      }
      goto code_r0x0001401c39f3;
    }
    break;
  case 3:
    lVar5 = 1;
code_r0x0001401c445b:
    puVar16 = (ulonglong *)(param_1 + lVar5 * 8);
    lVar5 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    uVar11 = param_2 >> 0xc & 0x7ffffffffffff;
code_r0x0001401c449f:
    if (((uVar11 & 1) != 0) && (puVar10 = (ulonglong *)*puVar16, puVar10 != (ulonglong *)0x0)) {
      if (puVar10 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
          _DAT_14abce178 <= puVar10) {
        if ((puVar10 < *(ulonglong **)(param_4 + 0x50)) &&
           (*(ulonglong **)(param_4 + 0x48) <= puVar10)) {
          uVar9 = *puVar10;
          if ((uVar9 & 2) == 0) {
            if ((uVar9 & 1) == 0) {
              puVar6 = (ulonglong *)FUN_145086050(param_4,puVar10,param_3);
              if (puVar6 == puVar10) goto code_r0x0001401c4661;
              *puVar16 = (ulonglong)puVar6;
              puVar10 = (ulonglong *)
                        (((ulonglong)puVar6 & 0xffffffffffffc000) + 0x30 +
                        (ulonglong)((uint)puVar6 >> 9 & 0x1f) * 8);
              *puVar10 = *puVar10 | 1L << ((ulonglong)((uint)puVar6 >> 3) & 0x3f);
            }
            else {
              puVar10 = (ulonglong *)(uVar9 & 0xfffffffffffffff8);
              *puVar16 = (ulonglong)puVar10;
              if (puVar10 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
                  _DAT_14abce178 <= puVar10) goto code_r0x0001401c4661;
            }
          }
          else {
code_r0x0001401c4661:
            if (((puVar16 < _DAT_14abce178 ||
                  (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) < puVar16) &&
                (_DAT_14abce178 <= puVar16)) &&
               (puVar16 < (ulonglong *)
                          ((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000))) {
              *(undefined1 *)
               (_DAT_14abce1f8 + ((ulonglong)((longlong)puVar16 - _DAT_14abce1e8) >> 9 & 0xffffffff)
               ) = 1;
            }
          }
        }
        goto code_r0x0001401c469b;
      }
      if ((_DAT_14abce178 <= puVar10) &&
         (puVar10 < (ulonglong *)
                    ((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000))) {
        uVar9 = *puVar10;
        if ((uVar9 & 1) != 0) {
          *puVar16 = uVar9 & 0xfffffffffffffff8;
          goto code_r0x0001401c469b;
        }
        uVar25 = (longlong)puVar10 - _DAT_1498c41b0;
        if ((uVar25 < 0x1000000) &&
           ((*(uint *)((uVar25 >> 0x15) * 4 + 0x1498c41b8) >> ((uint)(uVar25 >> 0x10) & 0x1f) & 1)
            != 0)) {
          uVar25 = *(ulonglong *)((longlong)puVar10 + (8 - puVar10[-1]));
          if ((uVar25 & 1) != 0) goto code_r0x0001401c469b;
          *(ulonglong *)((longlong)puVar10 + (8 - puVar10[-1])) = uVar25 | 1;
          uVar9 = *(ulonglong *)(uVar9 + 8);
          uVar2 = (uint)uVar9 & 7;
          uVar17 = uVar2;
          if (uVar2 != 5) {
code_r0x0001401c49bc:
            if (uVar2 == 6) goto code_r0x0001401c469b;
            goto joined_r0x0001401c45f8;
          }
          if (((uVar9 & 0xff8) == 0) && ((*(byte *)((longlong)puVar10 + 0x14) & 1) == 0)) {
            uVar17 = (uint)puVar10[3] & 7;
            goto code_r0x0001401c49bc;
          }
        }
        else {
          uVar18 = (ulonglong)((uint)puVar10 >> 9 & 0x1f);
          uVar25 = *(ulonglong *)(((ulonglong)puVar10 & 0xffffffffffffc000) + 0x30 + uVar18 * 8);
          if ((uVar25 >> ((ulonglong)puVar10 >> 3 & 0x3f) & 1) != 0) goto code_r0x0001401c469b;
          *(ulonglong *)(((ulonglong)puVar10 & 0xffffffffffffc000) + 0x30 + uVar18 * 8) =
               uVar25 | 1L << ((ulonglong)puVar10 >> 3 & 0x3f);
          uVar9 = *(ulonglong *)(uVar9 + 8);
          uVar17 = (uint)uVar9 & 7;
          if (uVar17 == 5) {
            if (((uVar9 & 0xff8) != 0) || ((*(byte *)((longlong)puVar10 + 0x14) & 1) != 0))
            goto code_r0x0001401c45fe;
            uVar17 = (uint)puVar10[3] & 7;
          }
joined_r0x0001401c45f8:
          if (uVar17 == 1) goto code_r0x0001401c469b;
        }
code_r0x0001401c45fe:
        puVar14 = (undefined8 *)param_3[1];
        if ((puVar14 == (undefined8 *)0x0) ||
           (puVar13 = (undefined8 *)*param_3, puVar13 == puVar14 + 0x100)) {
          if (puVar14 != (undefined8 *)0x0) {
            *puVar14 = 0x7f;
          }
          FUN_145086330(param_3);
          puVar13 = (undefined8 *)*param_3;
        }
        *param_3 = puVar13 + 2;
        *puVar13 = puVar10;
        puVar13[1] = uVar9;
        goto code_r0x0001401c469b;
      }
      if ((puVar10 < *(ulonglong **)(param_4 + 0x18d0)) ||
         (*(ulonglong **)(param_4 + 0x18d8) <= puVar10)) goto code_r0x0001401c469b;
      lVar7 = (longlong)*(int *)(lVar5 + 0xff4);
      puVar14 = *(undefined8 **)(param_4 + 0x17e0 + lVar7 * 8);
      if ((puVar14 == (undefined8 *)0x0) ||
         ((puVar6 = (ulonglong *)*puVar14, puVar10 < puVar6 || ((ulonglong *)puVar14[1] <= puVar10))
         )) {
        lVar8 = *(longlong *)(param_4 + 0x1838);
        uVar25 = (ulonglong)*(uint *)(param_4 + 0x1834);
        lVar20 = lVar8;
        uVar9 = uVar25;
        if (uVar25 != 0) {
          do {
            uVar18 = uVar9 >> 1;
            lVar22 = lVar20 + 0x10 + uVar18 * 0x10;
            if (*(ulonglong **)(lVar22 + -0x10) <= puVar10) {
              lVar20 = lVar22;
              uVar18 = ~uVar18 + uVar9;
            }
            uVar9 = uVar18;
          } while (0 < (longlong)uVar18);
        }
        lVar22 = lVar20 + -0x10;
        if (lVar20 == uVar25 * 0x10 + lVar8) {
          lVar22 = (ulonglong)(*(uint *)(param_4 + 0x1834) - 1) * 0x10 + lVar8;
        }
        do {
          uVar17 = *(uint *)(param_4 + 0x1820);
          if (uVar17 != 0) {
            uVar2 = *(uint *)(lVar22 + 8);
            uVar4 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
            uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
            lVar8 = *(longlong *)(param_4 + 0x1828);
            uVar9 = (ulonglong)((uVar4 >> 0x10 ^ uVar4) & uVar17 - 1);
            lVar20 = uVar9 * 0x68;
            uVar4 = *(uint *)(lVar8 + lVar20);
            while( true ) {
              if (uVar4 == uVar2) {
                uVar2 = (uint)uVar9;
                while ((uVar25 = (ulonglong)uVar17, uVar17 != uVar2 &&
                       (uVar25 = uVar9, *(int *)(lVar8 + uVar9 * 0x68) == 0))) {
                  uVar2 = (int)uVar9 + 1;
                  uVar9 = (ulonglong)uVar2;
                }
                goto code_r0x0001401c484c;
              }
              puVar21 = (uint *)(lVar20 + lVar8);
              if (uVar4 == 0) break;
              uVar9 = (ulonglong)
                      ((int)((ulonglong)((longlong)puVar21 + (0x68 - lVar8)) >> 3) * -0x3b13b13b &
                      uVar17 - 1);
              lVar20 = uVar9 * 0x68;
              uVar4 = *(uint *)(lVar8 + lVar20);
            }
            if (*(uint *)(param_4 + 0x1824) != (uVar17 * 0x4b) / 100) goto code_r0x0001401c4a09;
          }
          FUN_141d83dd0((uint *)(param_4 + 0x1820),uVar17 * 2);
        } while( true );
      }
      goto code_r0x0001401c4875;
    }
    goto code_r0x0001401c469b;
  case 4:
    uVar11 = (ulonglong)((uint)param_2 >> 0x10 & 0x3ff);
    uVar9 = param_2 >> 0x1a & 0x3ff;
    lVar5 = func_0x0001406e0920(param_2);
    if (uVar11 <= uVar9) {
      lVar7 = **(longlong **)(unaff_GS_OFFSET + 0x58);
code_r0x0001401c4abe:
      if (((*(ulonglong *)(lVar5 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0) &&
         (puVar16 = *(ulonglong **)(param_1 + 8 + uVar11 * 8), puVar16 != (ulonglong *)0x0)) {
        puVar10 = (ulonglong *)(param_1 + 8 + uVar11 * 8);
        if (puVar16 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
            _DAT_14abce178 <= puVar16) {
          if ((puVar16 < *(ulonglong **)(param_4 + 0x50)) &&
             (*(ulonglong **)(param_4 + 0x48) <= puVar16)) {
            uVar25 = *puVar16;
            if ((uVar25 & 2) == 0) {
              if ((uVar25 & 1) == 0) {
                puVar6 = (ulonglong *)FUN_145086050(param_4,puVar16,param_3);
                if (puVar6 == puVar16) goto code_r0x0001401c4ca3;
                *puVar10 = (ulonglong)puVar6;
                puVar16 = (ulonglong *)
                          (((ulonglong)puVar6 & 0xffffffffffffc000) + 0x30 +
                          (ulonglong)((uint)puVar6 >> 9 & 0x1f) * 8);
                *puVar16 = *puVar16 | 1L << ((ulonglong)((uint)puVar6 >> 3) & 0x3f);
              }
              else {
                puVar16 = (ulonglong *)(uVar25 & 0xfffffffffffffff8);
                *puVar10 = (ulonglong)puVar16;
                if (puVar16 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
                    _DAT_14abce178 <= puVar16) goto code_r0x0001401c4ca3;
              }
            }
            else {
code_r0x0001401c4ca3:
              if (((puVar10 < _DAT_14abce178 ||
                    (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) < puVar10) &&
                  (_DAT_14abce178 <= puVar10)) &&
                 (puVar10 < (ulonglong *)
                            ((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000)))
              {
                *(undefined1 *)
                 (_DAT_14abce1f8 +
                 ((ulonglong)((longlong)puVar10 - _DAT_14abce1e8) >> 9 & 0xffffffff)) = 1;
              }
            }
          }
          goto code_r0x0001401c4cdd;
        }
        if ((puVar16 < _DAT_14abce178) ||
           ((ulonglong *)((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000) <=
            puVar16)) {
          if ((puVar16 < *(ulonglong **)(param_4 + 0x18d0)) ||
             (*(ulonglong **)(param_4 + 0x18d8) <= puVar16)) goto code_r0x0001401c4cdd;
          lVar8 = (longlong)*(int *)(lVar7 + 0xff4);
          puVar14 = *(undefined8 **)(param_4 + 0x17e0 + lVar8 * 8);
          if (((puVar14 == (undefined8 *)0x0) ||
              (puVar10 = (ulonglong *)*puVar14, puVar16 < puVar10)) ||
             ((ulonglong *)puVar14[1] <= puVar16)) {
            lVar20 = *(longlong *)(param_4 + 0x1838);
            uVar18 = (ulonglong)*(uint *)(param_4 + 0x1834);
            lVar22 = lVar20;
            uVar25 = uVar18;
            if (uVar18 != 0) {
              do {
                uVar15 = uVar25 >> 1;
                lVar23 = lVar22 + 0x10 + uVar15 * 0x10;
                if (*(ulonglong **)(lVar23 + -0x10) <= puVar16) {
                  lVar22 = lVar23;
                  uVar15 = ~uVar15 + uVar25;
                }
                uVar25 = uVar15;
              } while (0 < (longlong)uVar15);
            }
            lVar23 = lVar22 + -0x10;
            if (lVar22 == uVar18 * 0x10 + lVar20) {
              lVar23 = (ulonglong)(*(uint *)(param_4 + 0x1834) - 1) * 0x10 + lVar20;
            }
            do {
              uVar17 = *(uint *)(param_4 + 0x1820);
              if (uVar17 != 0) {
                uVar2 = *(uint *)(lVar23 + 8);
                uVar4 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
                uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
                lVar20 = *(longlong *)(param_4 + 0x1828);
                uVar25 = (ulonglong)((uVar4 >> 0x10 ^ uVar4) & uVar17 - 1);
                lVar22 = uVar25 * 0x68;
                uVar4 = *(uint *)(lVar20 + lVar22);
                while( true ) {
                  if (uVar4 == uVar2) {
                    uVar2 = (uint)uVar25;
                    while ((uVar18 = (ulonglong)uVar17, uVar17 != uVar2 &&
                           (uVar18 = uVar25, *(int *)(lVar20 + uVar25 * 0x68) == 0))) {
                      uVar2 = (int)uVar25 + 1;
                      uVar25 = (ulonglong)uVar2;
                    }
                    goto code_r0x0001401c4e83;
                  }
                  puVar21 = (uint *)(lVar22 + lVar20);
                  if (uVar4 == 0) break;
                  uVar25 = (ulonglong)
                           ((int)((ulonglong)((longlong)puVar21 + (0x68 - lVar20)) >> 3) *
                            -0x3b13b13b & uVar17 - 1);
                  lVar22 = uVar25 * 0x68;
                  uVar4 = *(uint *)(lVar20 + lVar22);
                }
                if (*(uint *)(param_4 + 0x1824) != (uVar17 * 0x4b) / 100) goto code_r0x0001401c504f;
              }
              FUN_141d83dd0((uint *)(param_4 + 0x1820),uVar17 * 2);
            } while( true );
          }
          goto code_r0x0001401c4eac;
        }
        uVar25 = *puVar16;
        if ((uVar25 & 1) != 0) {
          *puVar10 = uVar25 & 0xfffffffffffffff8;
          goto code_r0x0001401c4cdd;
        }
        uVar18 = (longlong)puVar16 - _DAT_1498c41b0;
        if ((uVar18 < 0x1000000) &&
           ((*(uint *)((uVar18 >> 0x15) * 4 + 0x1498c41b8) >> ((uint)(uVar18 >> 0x10) & 0x1f) & 1)
            != 0)) {
          uVar18 = *(ulonglong *)((longlong)puVar16 + (8 - puVar16[-1]));
          if ((uVar18 & 1) != 0) goto code_r0x0001401c4cdd;
          *(ulonglong *)((longlong)puVar16 + (8 - puVar16[-1])) = uVar18 | 1;
          uVar25 = *(ulonglong *)(uVar25 + 8);
          uVar2 = (uint)uVar25 & 7;
          uVar17 = uVar2;
          if (uVar2 == 5) {
            if (((uVar25 & 0xff8) == 0) && ((*(byte *)((longlong)puVar16 + 0x14) & 1) == 0)) {
              uVar17 = (uint)puVar16[3] & 7;
              goto code_r0x0001401c4fc3;
            }
          }
          else {
code_r0x0001401c4fc3:
            if ((uVar2 == 6) || (uVar17 == 1)) goto code_r0x0001401c4cdd;
          }
          goto code_r0x0001401c4fe1;
        }
        uVar15 = (ulonglong)((uint)puVar16 >> 9 & 0x1f);
        uVar18 = *(ulonglong *)(((ulonglong)puVar16 & 0xffffffffffffc000) + 0x30 + uVar15 * 8);
        if ((uVar18 >> ((ulonglong)puVar16 >> 3 & 0x3f) & 1) != 0) goto code_r0x0001401c4cdd;
        *(ulonglong *)(((ulonglong)puVar16 & 0xffffffffffffc000) + 0x30 + uVar15 * 8) =
             uVar18 | 1L << ((ulonglong)puVar16 >> 3 & 0x3f);
        uVar25 = *(ulonglong *)(uVar25 + 8);
        uVar17 = (uint)uVar25 & 7;
        if (uVar17 == 5) {
          if (((uVar25 & 0xff8) == 0) && ((*(byte *)((longlong)puVar16 + 0x14) & 1) == 0)) {
            uVar17 = (uint)puVar16[3] & 7;
            goto code_r0x0001401c4c37;
          }
        }
        else {
code_r0x0001401c4c37:
          if (uVar17 == 1) goto code_r0x0001401c4cdd;
        }
        puVar14 = (undefined8 *)param_3[1];
        if ((puVar14 == (undefined8 *)0x0) ||
           (puVar13 = (undefined8 *)*param_3, puVar13 == puVar14 + 0x100)) {
          if (puVar14 != (undefined8 *)0x0) {
            *puVar14 = 0x7f;
          }
          FUN_145086330(param_3);
          puVar13 = (undefined8 *)*param_3;
        }
        goto code_r0x0001401c4c64;
      }
      goto code_r0x0001401c4cdd;
    }
    break;
  case 5:
    lVar5 = 3;
    if ((param_2 & 0xff8) != 0) goto code_r0x0001401c445b;
    if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
      uVar11 = *(ulonglong *)(param_1 + 0x18);
      uVar2 = (uint)uVar11;
      uVar17 = uVar2 & 7;
      if (uVar17 == 4) {
        uVar9 = (ulonglong)(uVar2 >> 3 & 0x1fff);
        lVar5 = func_0x0001406e0920(uVar11);
        lVar7 = *(uint *)(param_1 + 8) * uVar9;
        if (lVar7 != 0) {
          uVar17 = uVar2 >> 0x10 & 0x3ff;
          uVar11 = uVar11 >> 0x1a & 0x3ff;
          if (uVar17 <= (uint)uVar11) {
            lVar8 = param_1 + 0x28;
            lVar20 = **(longlong **)(unaff_GS_OFFSET + 0x58);
            uVar25 = (ulonglong)uVar17;
code_r0x0001401c5e0c:
            if (((*(ulonglong *)(lVar5 + (uVar25 >> 6) * 8) >> (uVar25 & 0x3f) & 1) != 0) &&
               (puVar16 = *(ulonglong **)(lVar8 + uVar25 * 8), puVar16 != (ulonglong *)0x0)) {
              puVar10 = (ulonglong *)(lVar8 + uVar25 * 8);
              if (puVar16 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
                  _DAT_14abce178 <= puVar16) {
                if ((puVar16 < *(ulonglong **)(param_4 + 0x50)) &&
                   (*(ulonglong **)(param_4 + 0x48) <= puVar16)) {
                  uVar18 = *puVar16;
                  if ((uVar18 & 2) == 0) {
                    if ((uVar18 & 1) == 0) {
                      puVar6 = (ulonglong *)FUN_145086050(param_4,puVar16,param_3);
                      if (puVar6 == puVar16) goto code_r0x0001401c5ff2;
                      *puVar10 = (ulonglong)puVar6;
                      puVar16 = (ulonglong *)
                                (((ulonglong)puVar6 & 0xffffffffffffc000) + 0x30 +
                                (ulonglong)((uint)puVar6 >> 9 & 0x1f) * 8);
                      *puVar16 = *puVar16 | 1L << ((ulonglong)((uint)puVar6 >> 3) & 0x3f);
                    }
                    else {
                      puVar16 = (ulonglong *)(uVar18 & 0xfffffffffffffff8);
                      *puVar10 = (ulonglong)puVar16;
                      if (puVar16 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
                          _DAT_14abce178 <= puVar16) goto code_r0x0001401c5ff2;
                    }
                  }
                  else {
code_r0x0001401c5ff2:
                    if (((puVar10 < _DAT_14abce178 ||
                          (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) < puVar10) &&
                        (_DAT_14abce178 <= puVar10)) &&
                       (puVar10 < (ulonglong *)
                                  ((longlong)_DAT_14abce178 +
                                  _DAT_14abce198 + _DAT_14abce180 * 0x10000))) {
                      *(undefined1 *)
                       (_DAT_14abce1f8 +
                       ((ulonglong)((longlong)puVar10 - _DAT_14abce1e8) >> 9 & 0xffffffff)) = 1;
                    }
                  }
                }
                goto code_r0x0001401c602c;
              }
              if ((puVar16 < _DAT_14abce178) ||
                 ((ulonglong *)
                  ((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000) <= puVar16)
                 ) {
                if ((puVar16 < *(ulonglong **)(param_4 + 0x18d0)) ||
                   (*(ulonglong **)(param_4 + 0x18d8) <= puVar16)) goto code_r0x0001401c602c;
                lVar22 = (longlong)*(int *)(lVar20 + 0xff4);
                puVar14 = *(undefined8 **)(param_4 + 0x17e0 + lVar22 * 8);
                if (((puVar14 == (undefined8 *)0x0) ||
                    (puVar10 = (ulonglong *)*puVar14, puVar16 < puVar10)) ||
                   ((ulonglong *)puVar14[1] <= puVar16)) {
                  lVar23 = *(longlong *)(param_4 + 0x1838);
                  uVar15 = (ulonglong)*(uint *)(param_4 + 0x1834);
                  lVar24 = lVar23;
                  uVar18 = uVar15;
                  if (uVar15 != 0) {
                    do {
                      uVar12 = uVar18 >> 1;
                      lVar19 = lVar24 + 0x10 + uVar12 * 0x10;
                      if (*(ulonglong **)(lVar19 + -0x10) <= puVar16) {
                        lVar24 = lVar19;
                        uVar12 = ~uVar12 + uVar18;
                      }
                      uVar18 = uVar12;
                    } while (0 < (longlong)uVar12);
                  }
                  lVar19 = lVar24 + -0x10;
                  if (lVar24 == uVar15 * 0x10 + lVar23) {
                    lVar19 = (ulonglong)(*(uint *)(param_4 + 0x1834) - 1) * 0x10 + lVar23;
                  }
                  do {
                    uVar2 = *(uint *)(param_4 + 0x1820);
                    if (uVar2 != 0) {
                      uVar4 = *(uint *)(lVar19 + 8);
                      uVar3 = (uVar4 >> 0x10 ^ uVar4) * -0x7a143595;
                      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
                      lVar23 = *(longlong *)(param_4 + 0x1828);
                      uVar18 = (ulonglong)((uVar3 >> 0x10 ^ uVar3) & uVar2 - 1);
                      lVar24 = uVar18 * 0x68;
                      uVar3 = *(uint *)(lVar23 + lVar24);
                      while( true ) {
                        if (uVar3 == uVar4) {
                          uVar4 = (uint)uVar18;
                          while ((uVar15 = (ulonglong)uVar2, uVar2 != uVar4 &&
                                 (uVar15 = uVar18, *(int *)(lVar23 + uVar18 * 0x68) == 0))) {
                            uVar4 = (int)uVar18 + 1;
                            uVar18 = (ulonglong)uVar4;
                          }
                          goto code_r0x0001401c61d1;
                        }
                        puVar21 = (uint *)(lVar24 + lVar23);
                        if (uVar3 == 0) break;
                        uVar18 = (ulonglong)
                                 ((int)((ulonglong)((longlong)puVar21 + (0x68 - lVar23)) >> 3) *
                                  -0x3b13b13b & uVar2 - 1);
                        lVar24 = uVar18 * 0x68;
                        uVar3 = *(uint *)(lVar23 + lVar24);
                      }
                      if (*(uint *)(param_4 + 0x1824) != (uVar2 * 0x4b) / 100)
                      goto code_r0x0001401c639a;
                    }
                    FUN_141d83dd0((uint *)(param_4 + 0x1820),uVar2 * 2);
                  } while( true );
                }
                goto code_r0x0001401c61fa;
              }
              uVar18 = *puVar16;
              if ((uVar18 & 1) != 0) {
                *puVar10 = uVar18 & 0xfffffffffffffff8;
                goto code_r0x0001401c602c;
              }
              uVar15 = (longlong)puVar16 - _DAT_1498c41b0;
              if ((uVar15 < 0x1000000) &&
                 ((*(uint *)((uVar15 >> 0x15) * 4 + 0x1498c41b8) >> ((uint)(uVar15 >> 0x10) & 0x1f)
                  & 1) != 0)) {
                uVar15 = *(ulonglong *)((longlong)puVar16 + (8 - puVar16[-1]));
                if ((uVar15 & 1) != 0) goto code_r0x0001401c602c;
                *(ulonglong *)((longlong)puVar16 + (8 - puVar16[-1])) = uVar15 | 1;
                uVar18 = *(ulonglong *)(uVar18 + 8);
                uVar4 = (uint)uVar18 & 7;
                uVar2 = uVar4;
                if (uVar4 == 5) {
                  if (((uVar18 & 0xff8) == 0) && ((*(byte *)((longlong)puVar16 + 0x14) & 1) == 0)) {
                    uVar2 = (uint)puVar16[3] & 7;
                    goto code_r0x0001401c630e;
                  }
                }
                else {
code_r0x0001401c630e:
                  if ((uVar4 == 6) || (uVar2 == 1)) goto code_r0x0001401c602c;
                }
                goto code_r0x0001401c632c;
              }
              uVar12 = (ulonglong)((uint)puVar16 >> 9 & 0x1f);
              uVar15 = *(ulonglong *)(((ulonglong)puVar16 & 0xffffffffffffc000) + 0x30 + uVar12 * 8)
              ;
              if ((uVar15 >> ((ulonglong)puVar16 >> 3 & 0x3f) & 1) != 0) goto code_r0x0001401c602c;
              *(ulonglong *)(((ulonglong)puVar16 & 0xffffffffffffc000) + 0x30 + uVar12 * 8) =
                   uVar15 | 1L << ((ulonglong)puVar16 >> 3 & 0x3f);
              uVar18 = *(ulonglong *)(uVar18 + 8);
              uVar2 = (uint)uVar18 & 7;
              if (uVar2 == 5) {
                if (((uVar18 & 0xff8) == 0) && ((*(byte *)((longlong)puVar16 + 0x14) & 1) == 0)) {
                  uVar2 = (uint)puVar16[3] & 7;
                  goto code_r0x0001401c5f84;
                }
              }
              else {
code_r0x0001401c5f84:
                if (uVar2 == 1) goto code_r0x0001401c602c;
              }
              puVar14 = (undefined8 *)param_3[1];
              if ((puVar14 == (undefined8 *)0x0) ||
                 (puVar13 = (undefined8 *)*param_3, puVar13 == puVar14 + 0x100)) {
                if (puVar14 != (undefined8 *)0x0) {
                  *puVar14 = 0x7f;
                }
                FUN_145086330(param_3);
                puVar13 = (undefined8 *)*param_3;
              }
              goto code_r0x0001401c5fb1;
            }
            goto code_r0x0001401c602c;
          }
        }
      }
      else if (uVar17 == 3) {
        uVar9 = (ulonglong)(uVar2 >> 3 & 0x1ff);
        lVar5 = *(uint *)(param_1 + 8) * uVar9;
        if ((lVar5 != 0) && (uVar11 = uVar11 >> 0xc & 0x7ffffffffffff, uVar9 != 0 && uVar11 != 0)) {
          lVar7 = param_1 + 0x28;
          lVar8 = **(longlong **)(unaff_GS_OFFSET + 0x58);
code_r0x0001401c5777:
          uVar18 = 0;
          uVar25 = uVar11;
code_r0x0001401c577e:
          if (((uVar25 & 1) != 0) &&
             (puVar16 = *(ulonglong **)(lVar7 + uVar18 * 8), puVar16 != (ulonglong *)0x0)) {
            puVar10 = (ulonglong *)(lVar7 + uVar18 * 8);
            if (_DAT_14abce178 <= puVar16 &&
                puVar16 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU)) {
              if ((puVar16 < *(ulonglong **)(param_4 + 0x50)) &&
                 (*(ulonglong **)(param_4 + 0x48) <= puVar16)) {
                uVar15 = *puVar16;
                if ((uVar15 & 2) == 0) {
                  if ((uVar15 & 1) == 0) {
                    puVar6 = (ulonglong *)FUN_145086050(param_4,puVar16,param_3);
                    if (puVar6 == puVar16) goto code_r0x0001401c594e;
                    *puVar10 = (ulonglong)puVar6;
                    puVar16 = (ulonglong *)
                              (((ulonglong)puVar6 & 0xffffffffffffc000) + 0x30 +
                              (ulonglong)((uint)puVar6 >> 9 & 0x1f) * 8);
                    *puVar16 = *puVar16 | 1L << ((ulonglong)((uint)puVar6 >> 3) & 0x3f);
                  }
                  else {
                    puVar16 = (ulonglong *)(uVar15 & 0xfffffffffffffff8);
                    *puVar10 = (ulonglong)puVar16;
                    if (_DAT_14abce178 <= puVar16 &&
                        puVar16 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU))
                    goto code_r0x0001401c594e;
                  }
                }
                else {
code_r0x0001401c594e:
                  if (((puVar10 < _DAT_14abce178 ||
                        (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) < puVar10) &&
                      (_DAT_14abce178 <= puVar10)) &&
                     (puVar10 < (ulonglong *)
                                ((longlong)_DAT_14abce178 +
                                _DAT_14abce198 + _DAT_14abce180 * 0x10000))) {
                    *(undefined1 *)
                     (_DAT_14abce1f8 +
                     ((ulonglong)((longlong)puVar10 - _DAT_14abce1e8) >> 9 & 0xffffffff)) = 1;
                  }
                }
              }
              goto code_r0x0001401c5988;
            }
            if ((puVar16 < _DAT_14abce178) ||
               ((ulonglong *)((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000)
                <= puVar16)) {
              if ((puVar16 < *(ulonglong **)(param_4 + 0x18d0)) ||
                 (*(ulonglong **)(param_4 + 0x18d8) <= puVar16)) goto code_r0x0001401c5988;
              lVar20 = (longlong)*(int *)(lVar8 + 0xff4);
              puVar14 = *(undefined8 **)(param_4 + 0x17e0 + lVar20 * 8);
              if (((puVar14 == (undefined8 *)0x0) ||
                  (puVar10 = (ulonglong *)*puVar14, puVar16 < puVar10)) ||
                 ((ulonglong *)puVar14[1] <= puVar16)) {
                lVar22 = *(longlong *)(param_4 + 0x1838);
                uVar12 = (ulonglong)*(uint *)(param_4 + 0x1834);
                lVar23 = lVar22;
                uVar15 = uVar12;
                if (uVar12 != 0) {
                  do {
                    uVar26 = uVar15 >> 1;
                    lVar24 = lVar23 + 0x10 + uVar26 * 0x10;
                    uVar27 = ~uVar26 + uVar15;
                    uVar15 = uVar26;
                    if (*(ulonglong **)(lVar24 + -0x10) <= puVar16) {
                      lVar23 = lVar24;
                      uVar15 = uVar27;
                    }
                  } while (0 < (longlong)uVar15);
                }
                lVar24 = lVar23 + -0x10;
                if (lVar23 == uVar12 * 0x10 + lVar22) {
                  lVar24 = (ulonglong)(*(uint *)(param_4 + 0x1834) - 1) * 0x10 + lVar22;
                }
                do {
                  uVar17 = *(uint *)(param_4 + 0x1820);
                  if (uVar17 != 0) {
                    uVar2 = *(uint *)(lVar24 + 8);
                    uVar4 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
                    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
                    lVar22 = *(longlong *)(param_4 + 0x1828);
                    uVar15 = (ulonglong)((uVar4 >> 0x10 ^ uVar4) & uVar17 - 1);
                    lVar23 = uVar15 * 0x68;
                    uVar4 = *(uint *)(lVar22 + lVar23);
                    while( true ) {
                      if (uVar4 == uVar2) goto code_r0x0001401c5c7e;
                      puVar21 = (uint *)(lVar23 + lVar22);
                      if (uVar4 == 0) break;
                      uVar15 = (ulonglong)
                               ((int)((ulonglong)((longlong)puVar21 + (0x68 - lVar22)) >> 3) *
                                -0x3b13b13b & uVar17 - 1);
                      lVar23 = uVar15 * 0x68;
                      uVar4 = *(uint *)(lVar22 + lVar23);
                    }
                    if (*(uint *)(param_4 + 0x1824) != (uVar17 * 0x4b) / 100)
                    goto code_r0x0001401c5c0c;
                  }
                  FUN_141d83dd0((uint *)(param_4 + 0x1820),uVar17 * 2);
                } while( true );
              }
              goto code_r0x0001401c5ccd;
            }
            uVar15 = *puVar16;
            if ((uVar15 & 1) != 0) {
              *puVar10 = uVar15 & 0xfffffffffffffff8;
              goto code_r0x0001401c5988;
            }
            uVar12 = (longlong)puVar16 - _DAT_1498c41b0;
            if ((uVar12 < 0x1000000) &&
               ((*(uint *)((uVar12 >> 0x15) * 4 + 0x1498c41b8) >> ((uint)(uVar12 >> 0x10) & 0x1f) &
                1) != 0)) {
              uVar12 = *(ulonglong *)((longlong)puVar16 + (8 - puVar16[-1]));
              if ((uVar12 & 1) != 0) goto code_r0x0001401c5988;
              *(ulonglong *)((longlong)puVar16 + (8 - puVar16[-1])) = uVar12 | 1;
              uVar15 = *(ulonglong *)(uVar15 + 8);
              uVar2 = (uint)uVar15 & 7;
              uVar17 = uVar2;
              if (uVar2 == 5) {
                if (((uVar15 & 0xff8) == 0) && ((*(byte *)((longlong)puVar16 + 0x14) & 1) == 0)) {
                  uVar17 = (uint)puVar16[3] & 7;
                  goto code_r0x0001401c5b80;
                }
              }
              else {
code_r0x0001401c5b80:
                if ((uVar2 == 6) || (uVar17 == 1)) goto code_r0x0001401c5988;
              }
              goto code_r0x0001401c5b9e;
            }
            uVar26 = (ulonglong)((uint)puVar16 >> 9 & 0x1f);
            uVar12 = *(ulonglong *)(((ulonglong)puVar16 & 0xffffffffffffc000) + 0x30 + uVar26 * 8);
            if ((uVar12 >> ((ulonglong)puVar16 >> 3 & 0x3f) & 1) != 0) goto code_r0x0001401c5988;
            *(ulonglong *)(((ulonglong)puVar16 & 0xffffffffffffc000) + 0x30 + uVar26 * 8) =
                 uVar12 | 1L << ((ulonglong)puVar16 >> 3 & 0x3f);
            uVar15 = *(ulonglong *)(uVar15 + 8);
            uVar17 = (uint)uVar15 & 7;
            if (uVar17 == 5) {
              if (((uVar15 & 0xff8) == 0) && ((*(byte *)((longlong)puVar16 + 0x14) & 1) == 0)) {
                uVar17 = (uint)puVar16[3] & 7;
                goto code_r0x0001401c58e5;
              }
            }
            else {
code_r0x0001401c58e5:
              if (uVar17 == 1) goto code_r0x0001401c5988;
            }
            puVar14 = (undefined8 *)param_3[1];
            if ((puVar14 == (undefined8 *)0x0) ||
               (puVar13 = (undefined8 *)*param_3, puVar13 == puVar14 + 0x100)) {
              if (puVar14 != (undefined8 *)0x0) {
                *puVar14 = 0x7f;
              }
              FUN_145086330(param_3);
              puVar13 = (undefined8 *)*param_3;
            }
            goto code_r0x0001401c5912;
          }
          goto code_r0x0001401c5988;
        }
      }
      else if ((uVar17 == 2) &&
              (lVar5 = (uVar11 >> 3 & 0xfffffffffffffff) * (ulonglong)*(uint *)(param_1 + 8),
              lVar5 != 0)) {
        puVar16 = (ulonglong *)(param_1 + 0x28);
        lVar7 = **(longlong **)(unaff_GS_OFFSET + 0x58);
code_r0x0001401c5151:
        puVar10 = (ulonglong *)*puVar16;
        if (puVar10 != (ulonglong *)0x0) {
          if (puVar10 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
              _DAT_14abce178 <= puVar10) {
            if ((puVar10 < *(ulonglong **)(param_4 + 0x50)) &&
               (*(ulonglong **)(param_4 + 0x48) <= puVar10)) {
              uVar11 = *puVar10;
              if ((uVar11 & 2) == 0) {
                if ((uVar11 & 1) == 0) {
                  puVar6 = (ulonglong *)FUN_145086050(param_4,puVar10,param_3);
                  if (puVar6 == puVar10) goto code_r0x0001401c530c;
                  *puVar16 = (ulonglong)puVar6;
                  puVar10 = (ulonglong *)
                            (((ulonglong)puVar6 & 0xffffffffffffc000) + 0x30 +
                            (ulonglong)((uint)puVar6 >> 9 & 0x1f) * 8);
                  *puVar10 = *puVar10 | 1L << ((ulonglong)((uint)puVar6 >> 3) & 0x3f);
                }
                else {
                  puVar10 = (ulonglong *)(uVar11 & 0xfffffffffffffff8);
                  *puVar16 = (ulonglong)puVar10;
                  if (puVar10 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
                      _DAT_14abce178 <= puVar10) goto code_r0x0001401c530c;
                }
              }
              else {
code_r0x0001401c530c:
                if (((puVar16 < _DAT_14abce178 ||
                      (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) < puVar16) &&
                    (_DAT_14abce178 <= puVar16)) &&
                   (puVar16 < (ulonglong *)
                              ((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000)
                   )) {
                  *(undefined1 *)
                   (_DAT_14abce1f8 +
                   ((ulonglong)((longlong)puVar16 - _DAT_14abce1e8) >> 9 & 0xffffffff)) = 1;
                }
              }
            }
            goto code_r0x0001401c5346;
          }
          if ((puVar10 < _DAT_14abce178) ||
             ((ulonglong *)((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000) <=
              puVar10)) {
            if ((puVar10 < *(ulonglong **)(param_4 + 0x18d0)) ||
               (*(ulonglong **)(param_4 + 0x18d8) <= puVar10)) goto code_r0x0001401c5346;
            lVar8 = (longlong)*(int *)(lVar7 + 0xff4);
            puVar14 = *(undefined8 **)(param_4 + 0x17e0 + lVar8 * 8);
            if (((puVar14 == (undefined8 *)0x0) ||
                (puVar6 = (ulonglong *)*puVar14, puVar10 < puVar6)) ||
               ((ulonglong *)puVar14[1] <= puVar10)) {
              lVar20 = *(longlong *)(param_4 + 0x1838);
              uVar9 = (ulonglong)*(uint *)(param_4 + 0x1834);
              lVar22 = lVar20;
              uVar11 = uVar9;
              if (uVar9 != 0) {
                do {
                  uVar25 = uVar11 >> 1;
                  lVar23 = lVar22 + 0x10 + uVar25 * 0x10;
                  if (*(ulonglong **)(lVar23 + -0x10) <= puVar10) {
                    lVar22 = lVar23;
                    uVar25 = ~uVar25 + uVar11;
                  }
                  uVar11 = uVar25;
                } while (0 < (longlong)uVar25);
              }
              lVar23 = lVar22 + -0x10;
              if (lVar22 == uVar9 * 0x10 + lVar20) {
                lVar23 = (ulonglong)(*(uint *)(param_4 + 0x1834) - 1) * 0x10 + lVar20;
              }
              do {
                uVar17 = *(uint *)(param_4 + 0x1820);
                if (uVar17 != 0) {
                  uVar2 = *(uint *)(lVar23 + 8);
                  uVar4 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
                  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
                  lVar20 = *(longlong *)(param_4 + 0x1828);
                  uVar11 = (ulonglong)((uVar4 >> 0x10 ^ uVar4) & uVar17 - 1);
                  lVar22 = uVar11 * 0x68;
                  uVar4 = *(uint *)(lVar20 + lVar22);
                  while( true ) {
                    if (uVar4 == uVar2) goto code_r0x0001401c5622;
                    puVar21 = (uint *)(lVar22 + lVar20);
                    if (uVar4 == 0) break;
                    uVar11 = (ulonglong)
                             ((int)((ulonglong)((longlong)puVar21 + (0x68 - lVar20)) >> 3) *
                              -0x3b13b13b & uVar17 - 1);
                    lVar22 = uVar11 * 0x68;
                    uVar4 = *(uint *)(lVar20 + lVar22);
                  }
                  if (*(uint *)(param_4 + 0x1824) != (uVar17 * 0x4b) / 100)
                  goto code_r0x0001401c55b0;
                }
                FUN_141d83dd0((uint *)(param_4 + 0x1820),uVar17 * 2);
              } while( true );
            }
            goto code_r0x0001401c566c;
          }
          uVar11 = *puVar10;
          if ((uVar11 & 1) != 0) {
            *puVar16 = uVar11 & 0xfffffffffffffff8;
            goto code_r0x0001401c5346;
          }
          uVar9 = (longlong)puVar10 - _DAT_1498c41b0;
          if ((uVar9 < 0x1000000) &&
             ((*(uint *)((uVar9 >> 0x15) * 4 + 0x1498c41b8) >> ((uint)(uVar9 >> 0x10) & 0x1f) & 1)
              != 0)) {
            uVar9 = *(ulonglong *)((longlong)puVar10 + (8 - puVar10[-1]));
            if ((uVar9 & 1) != 0) goto code_r0x0001401c5346;
            *(ulonglong *)((longlong)puVar10 + (8 - puVar10[-1])) = uVar9 | 1;
            uVar11 = *(ulonglong *)(uVar11 + 8);
            uVar2 = (uint)uVar11 & 7;
            uVar17 = uVar2;
            if (uVar2 == 5) {
              if (((uVar11 & 0xff8) == 0) && ((*(byte *)((longlong)puVar10 + 0x14) & 1) == 0)) {
                uVar17 = (uint)puVar10[3] & 7;
                goto code_r0x0001401c5530;
              }
            }
            else {
code_r0x0001401c5530:
              if ((uVar2 == 6) || (uVar17 == 1)) goto code_r0x0001401c5346;
            }
            goto code_r0x0001401c5549;
          }
          uVar25 = (ulonglong)((uint)puVar10 >> 9 & 0x1f);
          uVar9 = *(ulonglong *)(((ulonglong)puVar10 & 0xffffffffffffc000) + 0x30 + uVar25 * 8);
          if ((uVar9 >> ((ulonglong)puVar10 >> 3 & 0x3f) & 1) != 0) goto code_r0x0001401c5346;
          *(ulonglong *)(((ulonglong)puVar10 & 0xffffffffffffc000) + 0x30 + uVar25 * 8) =
               uVar9 | 1L << ((ulonglong)puVar10 >> 3 & 0x3f);
          uVar11 = *(ulonglong *)(uVar11 + 8);
          uVar17 = (uint)uVar11 & 7;
          if (uVar17 == 5) {
            if (((uVar11 & 0xff8) == 0) && ((*(byte *)((longlong)puVar10 + 0x14) & 1) == 0)) {
              uVar17 = (uint)puVar10[3] & 7;
              goto code_r0x0001401c52a0;
            }
          }
          else {
code_r0x0001401c52a0:
            if (uVar17 == 1) goto code_r0x0001401c5346;
          }
          puVar14 = (undefined8 *)param_3[1];
          if ((puVar14 == (undefined8 *)0x0) ||
             (puVar13 = (undefined8 *)*param_3, puVar13 == puVar14 + 0x100)) {
            if (puVar14 != (undefined8 *)0x0) {
              *puVar14 = 0x7f;
            }
            FUN_145086330(param_3);
            puVar13 = (undefined8 *)*param_3;
          }
          goto code_r0x0001401c52cd;
        }
        goto code_r0x0001401c5346;
      }
    }
    else if (*(int *)(param_1 + 8) != 0) {
      puVar16 = (ulonglong *)(param_1 + 0x28);
      uVar17 = 0;
      lVar5 = **(longlong **)(unaff_GS_OFFSET + 0x58);
code_r0x0001401c3e73:
      puVar10 = (ulonglong *)*puVar16;
      if (puVar10 != (ulonglong *)0x0) {
        if (puVar10 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
            _DAT_14abce178 <= puVar10) {
          if ((puVar10 < *(ulonglong **)(param_4 + 0x50)) &&
             (*(ulonglong **)(param_4 + 0x48) <= puVar10)) {
            uVar11 = *puVar10;
            if ((uVar11 & 2) == 0) {
              if ((uVar11 & 1) == 0) {
                puVar6 = (ulonglong *)FUN_145086050(param_4,puVar10,param_3);
                if (puVar6 == puVar10) goto code_r0x0001401c4038;
                *puVar16 = (ulonglong)puVar6;
                puVar10 = (ulonglong *)
                          (((ulonglong)puVar6 & 0xffffffffffffc000) + 0x30 +
                          (ulonglong)((uint)puVar6 >> 9 & 0x1f) * 8);
                *puVar10 = *puVar10 | 1L << ((ulonglong)((uint)puVar6 >> 3) & 0x3f);
              }
              else {
                puVar10 = (ulonglong *)(uVar11 & 0xfffffffffffffff8);
                *puVar16 = (ulonglong)puVar10;
                if (puVar10 <= (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) &&
                    _DAT_14abce178 <= puVar10) goto code_r0x0001401c4038;
              }
            }
            else {
code_r0x0001401c4038:
              if (((puVar16 < _DAT_14abce178 ||
                    (ulonglong *)((longlong)_DAT_14abce178 + 0x1fffffU) < puVar16) &&
                  (_DAT_14abce178 <= puVar16)) &&
                 (puVar16 < (ulonglong *)
                            ((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000)))
              {
                *(undefined1 *)
                 (_DAT_14abce1f8 +
                 ((ulonglong)((longlong)puVar16 - _DAT_14abce1e8) >> 9 & 0xffffffff)) = 1;
              }
            }
          }
          goto code_r0x0001401c4072;
        }
        if ((puVar10 < _DAT_14abce178) ||
           ((ulonglong *)((longlong)_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000) <=
            puVar10)) {
          if ((puVar10 < *(ulonglong **)(param_4 + 0x18d0)) ||
             (*(ulonglong **)(param_4 + 0x18d8) <= puVar10)) goto code_r0x0001401c4072;
          lVar7 = (longlong)*(int *)(lVar5 + 0xff4);
          puVar14 = *(undefined8 **)(param_4 + 0x17e0 + lVar7 * 8);
          if (((puVar14 == (undefined8 *)0x0) || (puVar6 = (ulonglong *)*puVar14, puVar10 < puVar6))
             || ((ulonglong *)puVar14[1] <= puVar10)) {
            lVar8 = *(longlong *)(param_4 + 0x1838);
            uVar9 = (ulonglong)*(uint *)(param_4 + 0x1834);
            lVar20 = lVar8;
            uVar11 = uVar9;
            if (uVar9 != 0) {
              do {
                uVar25 = uVar11 >> 1;
                lVar22 = lVar20 + 0x10 + uVar25 * 0x10;
                if (*(ulonglong **)(lVar22 + -0x10) <= puVar10) {
                  lVar20 = lVar22;
                  uVar25 = ~uVar25 + uVar11;
                }
                uVar11 = uVar25;
              } while (0 < (longlong)uVar25);
            }
            lVar22 = lVar20 + -0x10;
            if (lVar20 == uVar9 * 0x10 + lVar8) {
              lVar22 = (ulonglong)(*(uint *)(param_4 + 0x1834) - 1) * 0x10 + lVar8;
            }
            do {
              uVar2 = *(uint *)(param_4 + 0x1820);
              if (uVar2 != 0) {
                uVar4 = *(uint *)(lVar22 + 8);
                uVar3 = (uVar4 >> 0x10 ^ uVar4) * -0x7a143595;
                uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
                lVar8 = *(longlong *)(param_4 + 0x1828);
                uVar11 = (ulonglong)((uVar3 >> 0x10 ^ uVar3) & uVar2 - 1);
                lVar20 = uVar11 * 0x68;
                uVar3 = *(uint *)(lVar8 + lVar20);
                while( true ) {
                  if (uVar3 == uVar4) goto code_r0x0001401c4368;
                  puVar21 = (uint *)(lVar20 + lVar8);
                  if (uVar3 == 0) break;
                  uVar11 = (ulonglong)
                           ((int)((ulonglong)((longlong)puVar21 + (0x68 - lVar8)) >> 3) *
                            -0x3b13b13b & uVar2 - 1);
                  lVar20 = uVar11 * 0x68;
                  uVar3 = *(uint *)(lVar8 + lVar20);
                }
                if (*(uint *)(param_4 + 0x1824) != (uVar2 * 0x4b) / 100) goto code_r0x0001401c42f6;
              }
              FUN_141d83dd0((uint *)(param_4 + 0x1820),uVar2 * 2);
            } while( true );
          }
          goto code_r0x0001401c43b8;
        }
        uVar11 = *puVar10;
        if ((uVar11 & 1) != 0) {
          *puVar16 = uVar11 & 0xfffffffffffffff8;
          goto code_r0x0001401c4072;
        }
        uVar9 = (longlong)puVar10 - _DAT_1498c41b0;
        if ((uVar9 < 0x1000000) &&
           ((*(uint *)((uVar9 >> 0x15) * 4 + 0x1498c41b8) >> ((uint)(uVar9 >> 0x10) & 0x1f) & 1) !=
            0)) {
          uVar9 = *(ulonglong *)((longlong)puVar10 + (8 - puVar10[-1]));
          if ((uVar9 & 1) != 0) goto code_r0x0001401c4072;
          *(ulonglong *)((longlong)puVar10 + (8 - puVar10[-1])) = uVar9 | 1;
          uVar11 = *(ulonglong *)(uVar11 + 8);
          uVar4 = (uint)uVar11 & 7;
          uVar2 = uVar4;
          if (uVar4 == 5) {
            if (((uVar11 & 0xff8) == 0) && ((*(byte *)((longlong)puVar10 + 0x14) & 1) == 0)) {
              uVar2 = (uint)puVar10[3] & 7;
              goto code_r0x0001401c4264;
            }
          }
          else {
code_r0x0001401c4264:
            if ((uVar4 == 6) || (uVar2 == 1)) goto code_r0x0001401c4072;
          }
          goto code_r0x0001401c4283;
        }
        uVar25 = (ulonglong)((uint)puVar10 >> 9 & 0x1f);
        uVar9 = *(ulonglong *)(((ulonglong)puVar10 & 0xffffffffffffc000) + 0x30 + uVar25 * 8);
        if ((uVar9 >> ((ulonglong)puVar10 >> 3 & 0x3f) & 1) != 0) goto code_r0x0001401c4072;
        *(ulonglong *)(((ulonglong)puVar10 & 0xffffffffffffc000) + 0x30 + uVar25 * 8) =
             uVar9 | 1L << ((ulonglong)puVar10 >> 3 & 0x3f);
        uVar11 = *(ulonglong *)(uVar11 + 8);
        uVar2 = (uint)uVar11 & 7;
        if (uVar2 == 5) {
          if (((uVar11 & 0xff8) == 0) && ((*(byte *)((longlong)puVar10 + 0x14) & 1) == 0)) {
            uVar2 = (uint)puVar10[3] & 7;
            goto code_r0x0001401c3fca;
          }
        }
        else {
code_r0x0001401c3fca:
          if (uVar2 == 1) goto code_r0x0001401c4072;
        }
        puVar14 = (undefined8 *)param_3[1];
        if ((puVar14 == (undefined8 *)0x0) ||
           (puVar13 = (undefined8 *)*param_3, puVar13 == puVar14 + 0x100)) {
          if (puVar14 != (undefined8 *)0x0) {
            *puVar14 = 0x7f;
          }
          FUN_145086330(param_3);
          puVar13 = (undefined8 *)*param_3;
        }
        goto code_r0x0001401c3ff7;
      }
      goto code_r0x0001401c4072;
    }
  }
  return;
code_r0x0001401c639a:
  *puVar21 = uVar4;
  *(int *)(param_4 + 0x1824) = *(int *)(param_4 + 0x1824) + 1;
  lVar23 = *(longlong *)(param_4 + 0x1828);
  uVar2 = *(uint *)(param_4 + 0x1820);
  uVar4 = (int)((ulonglong)((longlong)puVar21 - lVar23) >> 3) * -0x3b13b13b;
  uVar15 = (ulonglong)uVar4;
  if (uVar2 != uVar4) {
    do {
      if (*(int *)(lVar23 + uVar15 * 0x68) != 0) goto code_r0x0001401c63d8;
      uVar4 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar4;
    } while (uVar2 != uVar4);
    uVar15 = (ulonglong)uVar2;
  }
code_r0x0001401c63d8:
  *(undefined1 (*) [32])(lVar23 + 0x48 + uVar15 * 0x68) = ZEXT1232(ZEXT812(0));
code_r0x0001401c61d1:
  puVar14 = (undefined8 *)(lVar23 + 8 + uVar15 * 0x68);
  *(undefined8 **)(param_4 + 0x17e0 + lVar22 * 8) = puVar14;
  puVar10 = (ulonglong *)*puVar14;
  if ((puVar10 <= puVar16) && (puVar16 < (ulonglong *)puVar14[1])) {
code_r0x0001401c61fa:
    uVar18 = (ulonglong)((longlong)puVar16 - (longlong)puVar10) / (ulonglong)puVar14[3];
    uVar2 = (uint)uVar18;
    uVar15 = (ulonglong)(uVar2 >> 5);
    if (((*(uint *)(puVar14[8] + uVar15 * 4) >> (uVar2 & 0x1f) & 1) != 0) &&
       (puVar16 ==
        (ulonglong *)
        ((-(ulonglong)*(byte *)((longlong)puVar14 + 0x26) &
         (longlong)puVar10 +
         ((ulonglong)*(byte *)((longlong)puVar14 + 0x26) - 1) +
         (uVar18 & 0xffffffff) * puVar14[3] + (ulonglong)*(ushort *)((longlong)puVar14 + 0x24)) -
        (ulonglong)*(ushort *)((longlong)puVar14 + 0x24)))) {
      uVar2 = 1 << (uVar2 & 0x1f);
      if ((*(uint *)(puVar14[10] + uVar15 * 4) & uVar2) == 0) {
        LOCK();
        puVar21 = (uint *)(puVar14[10] + uVar15 * 4);
        *puVar21 = *puVar21 | uVar2;
        UNLOCK();
        uVar18 = puVar14[5];
        if (((uint)uVar18 & 7) != 1) {
code_r0x0001401c632c:
          puVar14 = (undefined8 *)param_3[1];
          if ((puVar14 == (undefined8 *)0x0) ||
             (puVar13 = (undefined8 *)*param_3, puVar13 == puVar14 + 0x100)) {
            if (puVar14 != (undefined8 *)0x0) {
              *puVar14 = 0x7f;
            }
            FUN_145086330(param_3);
            puVar13 = (undefined8 *)*param_3;
          }
code_r0x0001401c5fb1:
          *param_3 = puVar13 + 2;
          *puVar13 = puVar16;
          puVar13[1] = uVar18;
        }
      }
    }
  }
code_r0x0001401c602c:
  bVar28 = uVar25 == uVar11;
  uVar25 = uVar25 + 1;
  if ((bVar28) &&
     (lVar8 = lVar8 + uVar9 * 8, uVar25 = (ulonglong)uVar17, lVar8 == param_1 + 0x28 + lVar7 * 8)) {
    return;
  }
  goto code_r0x0001401c5e0c;
code_r0x0001401c5c7e:
  for (; (uVar12 = (ulonglong)uVar17, uVar17 != (uint)uVar15 &&
         (uVar12 = uVar15, *(int *)(lVar22 + uVar15 * 0x68) == 0));
      uVar15 = (ulonglong)((uint)uVar15 + 1)) {
  }
  goto code_r0x0001401c5c93;
code_r0x0001401c5c0c:
  *puVar21 = uVar2;
  *(int *)(param_4 + 0x1824) = *(int *)(param_4 + 0x1824) + 1;
  lVar22 = *(longlong *)(param_4 + 0x1828);
  uVar17 = *(uint *)(param_4 + 0x1820);
  uVar2 = (int)((ulonglong)((longlong)puVar21 - lVar22) >> 3) * -0x3b13b13b;
  uVar12 = (ulonglong)uVar2;
  if (uVar17 != uVar2) {
    do {
      if (*(int *)(lVar22 + uVar12 * 0x68) != 0) goto code_r0x0001401c5c4a;
      uVar2 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar2;
    } while (uVar17 != uVar2);
    uVar12 = (ulonglong)uVar17;
  }
code_r0x0001401c5c4a:
  *(undefined1 (*) [32])(lVar22 + 0x48 + uVar12 * 0x68) = ZEXT1232(ZEXT812(0));
code_r0x0001401c5c93:
  puVar14 = (undefined8 *)(lVar22 + 8 + uVar12 * 0x68);
  *(undefined8 **)(param_4 + 0x17e0 + lVar20 * 8) = puVar14;
  puVar10 = (ulonglong *)*puVar14;
  if ((puVar10 <= puVar16) && (puVar16 < (ulonglong *)puVar14[1])) {
code_r0x0001401c5ccd:
    uVar15 = (ulonglong)((longlong)puVar16 - (longlong)puVar10) / (ulonglong)puVar14[3];
    uVar17 = (uint)uVar15;
    uVar12 = (ulonglong)(uVar17 >> 5);
    if (((*(uint *)(puVar14[8] + uVar12 * 4) >> (uVar17 & 0x1f) & 1) != 0) &&
       (puVar16 ==
        (ulonglong *)
        ((-(ulonglong)*(byte *)((longlong)puVar14 + 0x26) &
         (longlong)puVar10 +
         ((ulonglong)*(byte *)((longlong)puVar14 + 0x26) - 1) +
         (uVar15 & 0xffffffff) * puVar14[3] + (ulonglong)*(ushort *)((longlong)puVar14 + 0x24)) -
        (ulonglong)*(ushort *)((longlong)puVar14 + 0x24)))) {
      uVar17 = 1 << (uVar17 & 0x1f);
      if ((*(uint *)(puVar14[10] + uVar12 * 4) & uVar17) == 0) {
        LOCK();
        puVar21 = (uint *)(puVar14[10] + uVar12 * 4);
        *puVar21 = *puVar21 | uVar17;
        UNLOCK();
        uVar15 = puVar14[5];
        if (((uint)uVar15 & 7) != 1) {
code_r0x0001401c5b9e:
          puVar14 = (undefined8 *)param_3[1];
          if ((puVar14 == (undefined8 *)0x0) ||
             (puVar13 = (undefined8 *)*param_3, puVar13 == puVar14 + 0x100)) {
            if (puVar14 != (undefined8 *)0x0) {
              *puVar14 = 0x7f;
            }
            FUN_145086330(param_3);
            puVar13 = (undefined8 *)*param_3;
          }
code_r0x0001401c5912:
          *param_3 = puVar13 + 2;
          *puVar13 = puVar16;
          puVar13[1] = uVar15;
        }
      }
    }
  }
code_r0x0001401c5988:
  if (uVar25 < 2) goto code_r0x0001401c5d69;
  uVar18 = uVar18 + 1;
  uVar25 = uVar25 >> 1;
  if (uVar9 <= uVar18) goto code_r0x0001401c5d69;
  goto code_r0x0001401c577e;
code_r0x0001401c5d69:
  lVar7 = lVar7 + uVar9 * 8;
  if (lVar7 == param_1 + 0x28 + lVar5 * 8) {
    return;
  }
  goto code_r0x0001401c5777;
code_r0x0001401c5622:
  for (; (uVar9 = (ulonglong)uVar17, uVar17 != (uint)uVar11 &&
         (uVar9 = uVar11, *(int *)(lVar20 + uVar11 * 0x68) == 0));
      uVar11 = (ulonglong)((uint)uVar11 + 1)) {
  }
  goto code_r0x0001401c5637;
code_r0x0001401c55b0:
  *puVar21 = uVar2;
  *(int *)(param_4 + 0x1824) = *(int *)(param_4 + 0x1824) + 1;
  lVar20 = *(longlong *)(param_4 + 0x1828);
  uVar17 = *(uint *)(param_4 + 0x1820);
  uVar2 = (int)((ulonglong)((longlong)puVar21 - lVar20) >> 3) * -0x3b13b13b;
  uVar9 = (ulonglong)uVar2;
  if (uVar17 != uVar2) {
    do {
      if (*(int *)(lVar20 + uVar9 * 0x68) != 0) goto code_r0x0001401c55ee;
      uVar2 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar2;
    } while (uVar17 != uVar2);
    uVar9 = (ulonglong)uVar17;
  }
code_r0x0001401c55ee:
  *(undefined1 (*) [32])(lVar20 + 0x48 + uVar9 * 0x68) = ZEXT1232(ZEXT812(0));
code_r0x0001401c5637:
  puVar14 = (undefined8 *)(lVar20 + 8 + uVar9 * 0x68);
  *(undefined8 **)(param_4 + 0x17e0 + lVar8 * 8) = puVar14;
  puVar6 = (ulonglong *)*puVar14;
  if ((puVar6 <= puVar10) && (puVar10 < (ulonglong *)puVar14[1])) {
code_r0x0001401c566c:
    uVar11 = (ulonglong)((longlong)puVar10 - (longlong)puVar6) / (ulonglong)puVar14[3];
    uVar17 = (uint)uVar11;
    uVar9 = (ulonglong)(uVar17 >> 5);
    if (((*(uint *)(puVar14[8] + uVar9 * 4) >> (uVar17 & 0x1f) & 1) != 0) &&
       (puVar10 ==
        (ulonglong *)
        ((-(ulonglong)*(byte *)((longlong)puVar14 + 0x26) &
         (longlong)puVar6 +
         ((ulonglong)*(byte *)((longlong)puVar14 + 0x26) - 1) +
         (uVar11 & 0xffffffff) * puVar14[3] + (ulonglong)*(ushort *)((longlong)puVar14 + 0x24)) -
        (ulonglong)*(ushort *)((longlong)puVar14 + 0x24)))) {
      uVar17 = 1 << (uVar17 & 0x1f);
      if ((*(uint *)(puVar14[10] + uVar9 * 4) & uVar17) == 0) {
        LOCK();
        puVar21 = (uint *)(puVar14[10] + uVar9 * 4);
        *puVar21 = *puVar21 | uVar17;
        UNLOCK();
        uVar11 = puVar14[5];
        if (((uint)uVar11 & 7) != 1) {
code_r0x0001401c5549:
          puVar14 = (undefined8 *)param_3[1];
          if ((puVar14 == (undefined8 *)0x0) ||
             (puVar13 = (undefined8 *)*param_3, puVar13 == puVar14 + 0x100)) {
            if (puVar14 != (undefined8 *)0x0) {
              *puVar14 = 0x7f;
            }
            FUN_145086330(param_3);
            puVar13 = (undefined8 *)*param_3;
          }
code_r0x0001401c52cd:
          *param_3 = puVar13 + 2;
          *puVar13 = puVar10;
          puVar13[1] = uVar11;
        }
      }
    }
  }
code_r0x0001401c5346:
  puVar16 = puVar16 + 1;
  if (puVar16 == (ulonglong *)(param_1 + 0x28 + lVar5 * 8)) {
    return;
  }
  goto code_r0x0001401c5151;
code_r0x0001401c4368:
  for (; (uVar9 = (ulonglong)uVar2, uVar2 != (uint)uVar11 &&
         (uVar9 = uVar11, *(int *)(lVar8 + uVar11 * 0x68) == 0));
      uVar11 = (ulonglong)((uint)uVar11 + 1)) {
  }
  goto code_r0x0001401c437d;
code_r0x0001401c42f6:
  *puVar21 = uVar4;
  *(int *)(param_4 + 0x1824) = *(int *)(param_4 + 0x1824) + 1;
  lVar8 = *(longlong *)(param_4 + 0x1828);
  uVar2 = *(uint *)(param_4 + 0x1820);
  uVar4 = (int)((ulonglong)((longlong)puVar21 - lVar8) >> 3) * -0x3b13b13b;
  uVar9 = (ulonglong)uVar4;
  if (uVar2 != uVar4) {
    do {
      if (*(int *)(lVar8 + uVar9 * 0x68) != 0) goto code_r0x0001401c4334;
      uVar4 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar4;
    } while (uVar2 != uVar4);
    uVar9 = (ulonglong)uVar2;
  }
code_r0x0001401c4334:
  *(undefined1 (*) [32])(lVar8 + 0x48 + uVar9 * 0x68) = ZEXT1232(ZEXT812(0));
code_r0x0001401c437d:
  puVar14 = (undefined8 *)(lVar8 + 8 + uVar9 * 0x68);
  *(undefined8 **)(param_4 + 0x17e0 + lVar7 * 8) = puVar14;
  puVar6 = (ulonglong *)*puVar14;
  if ((puVar6 <= puVar10) && (puVar10 < (ulonglong *)puVar14[1])) {
code_r0x0001401c43b8:
    uVar11 = (ulonglong)((longlong)puVar10 - (longlong)puVar6) / (ulonglong)puVar14[3];
    uVar2 = (uint)uVar11;
    uVar9 = (ulonglong)(uVar2 >> 5);
    if (((*(uint *)(puVar14[8] + uVar9 * 4) >> (uVar2 & 0x1f) & 1) != 0) &&
       (puVar10 ==
        (ulonglong *)
        ((-(ulonglong)*(byte *)((longlong)puVar14 + 0x26) &
         (longlong)puVar6 +
         ((ulonglong)*(byte *)((longlong)puVar14 + 0x26) - 1) +
         (uVar11 & 0xffffffff) * puVar14[3] + (ulonglong)*(ushort *)((longlong)puVar14 + 0x24)) -
        (ulonglong)*(ushort *)((longlong)puVar14 + 0x24)))) {
      uVar2 = 1 << (uVar2 & 0x1f);
      if ((*(uint *)(puVar14[10] + uVar9 * 4) & uVar2) == 0) {
        LOCK();
        puVar21 = (uint *)(puVar14[10] + uVar9 * 4);
        *puVar21 = *puVar21 | uVar2;
        UNLOCK();
        uVar11 = puVar14[5];
        if (((uint)uVar11 & 7) != 1) {
code_r0x0001401c4283:
          puVar14 = (undefined8 *)param_3[1];
          if ((puVar14 == (undefined8 *)0x0) ||
             (puVar13 = (undefined8 *)*param_3, puVar13 == puVar14 + 0x100)) {
            if (puVar14 != (undefined8 *)0x0) {
              *puVar14 = 0x7f;
            }
            FUN_145086330(param_3);
            puVar13 = (undefined8 *)*param_3;
          }
code_r0x0001401c3ff7:
          *param_3 = puVar13 + 2;
          *puVar13 = puVar10;
          puVar13[1] = uVar11;
        }
      }
    }
  }
code_r0x0001401c4072:
  puVar16 = puVar16 + 1;
  uVar17 = uVar17 + 1;
  if (*(uint *)(param_1 + 8) <= uVar17) {
    return;
  }
  goto code_r0x0001401c3e73;
code_r0x0001401c504f:
  *puVar21 = uVar2;
  *(int *)(param_4 + 0x1824) = *(int *)(param_4 + 0x1824) + 1;
  lVar20 = *(longlong *)(param_4 + 0x1828);
  uVar17 = *(uint *)(param_4 + 0x1820);
  uVar2 = (int)((ulonglong)((longlong)puVar21 - lVar20) >> 3) * -0x3b13b13b;
  uVar18 = (ulonglong)uVar2;
  if (uVar17 != uVar2) {
    do {
      if (*(int *)(lVar20 + uVar18 * 0x68) != 0) goto code_r0x0001401c508d;
      uVar2 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar2;
    } while (uVar17 != uVar2);
    uVar18 = (ulonglong)uVar17;
  }
code_r0x0001401c508d:
  *(undefined1 (*) [32])(lVar20 + 0x48 + uVar18 * 0x68) = ZEXT1232(ZEXT812(0));
code_r0x0001401c4e83:
  puVar14 = (undefined8 *)(lVar20 + 8 + uVar18 * 0x68);
  *(undefined8 **)(param_4 + 0x17e0 + lVar8 * 8) = puVar14;
  puVar10 = (ulonglong *)*puVar14;
  if ((puVar10 <= puVar16) && (puVar16 < (ulonglong *)puVar14[1])) {
code_r0x0001401c4eac:
    uVar25 = (ulonglong)((longlong)puVar16 - (longlong)puVar10) / (ulonglong)puVar14[3];
    uVar17 = (uint)uVar25;
    uVar18 = (ulonglong)(uVar17 >> 5);
    if (((*(uint *)(puVar14[8] + uVar18 * 4) >> (uVar17 & 0x1f) & 1) != 0) &&
       (puVar16 ==
        (ulonglong *)
        ((-(ulonglong)*(byte *)((longlong)puVar14 + 0x26) &
         (longlong)puVar10 +
         ((ulonglong)*(byte *)((longlong)puVar14 + 0x26) - 1) +
         (uVar25 & 0xffffffff) * puVar14[3] + (ulonglong)*(ushort *)((longlong)puVar14 + 0x24)) -
        (ulonglong)*(ushort *)((longlong)puVar14 + 0x24)))) {
      uVar17 = 1 << (uVar17 & 0x1f);
      if ((*(uint *)(puVar14[10] + uVar18 * 4) & uVar17) == 0) {
        LOCK();
        puVar21 = (uint *)(puVar14[10] + uVar18 * 4);
        *puVar21 = *puVar21 | uVar17;
        UNLOCK();
        uVar25 = puVar14[5];
        if (((uint)uVar25 & 7) != 1) {
code_r0x0001401c4fe1:
          puVar14 = (undefined8 *)param_3[1];
          if ((puVar14 == (undefined8 *)0x0) ||
             (puVar13 = (undefined8 *)*param_3, puVar13 == puVar14 + 0x100)) {
            if (puVar14 != (undefined8 *)0x0) {
              *puVar14 = 0x7f;
            }
            FUN_145086330(param_3);
            puVar13 = (undefined8 *)*param_3;
          }
code_r0x0001401c4c64:
          *param_3 = puVar13 + 2;
          *puVar13 = puVar16;
          puVar13[1] = uVar25;
        }
      }
    }
  }
code_r0x0001401c4cdd:
  bVar28 = uVar11 == uVar9;
  uVar11 = uVar11 + 1;
  if (bVar28) {
    return;
  }
  goto code_r0x0001401c4abe;
code_r0x0001401c4a09:
  *puVar21 = uVar2;
  *(int *)(param_4 + 0x1824) = *(int *)(param_4 + 0x1824) + 1;
  lVar8 = *(longlong *)(param_4 + 0x1828);
  uVar17 = *(uint *)(param_4 + 0x1820);
  uVar2 = (int)((ulonglong)((longlong)puVar21 - lVar8) >> 3) * -0x3b13b13b;
  uVar25 = (ulonglong)uVar2;
  if (uVar17 != uVar2) {
    do {
      if (*(int *)(lVar8 + uVar25 * 0x68) != 0) goto code_r0x0001401c4a47;
      uVar2 = (int)uVar25 + 1;
      uVar25 = (ulonglong)uVar2;
    } while (uVar17 != uVar2);
    uVar25 = (ulonglong)uVar17;
  }
code_r0x0001401c4a47:
  *(undefined1 (*) [32])(lVar8 + 0x48 + uVar25 * 0x68) = ZEXT1232(ZEXT812(0));
code_r0x0001401c484c:
  puVar14 = (undefined8 *)(lVar8 + 8 + uVar25 * 0x68);
  *(undefined8 **)(param_4 + 0x17e0 + lVar7 * 8) = puVar14;
  puVar6 = (ulonglong *)*puVar14;
  if ((puVar6 <= puVar10) && (puVar10 < (ulonglong *)puVar14[1])) {
code_r0x0001401c4875:
    uVar9 = (ulonglong)((longlong)puVar10 - (longlong)puVar6) / (ulonglong)puVar14[3];
    uVar17 = (uint)uVar9;
    uVar25 = (ulonglong)(uVar17 >> 5);
    if (((*(uint *)(puVar14[8] + uVar25 * 4) >> (uVar17 & 0x1f) & 1) != 0) &&
       (puVar10 ==
        (ulonglong *)
        ((-(ulonglong)*(byte *)((longlong)puVar14 + 0x26) &
         (longlong)puVar6 +
         ((ulonglong)*(byte *)((longlong)puVar14 + 0x26) - 1) +
         (uVar9 & 0xffffffff) * puVar14[3] + (ulonglong)*(ushort *)((longlong)puVar14 + 0x24)) -
        (ulonglong)*(ushort *)((longlong)puVar14 + 0x24)))) {
      uVar17 = 1 << (uVar17 & 0x1f);
      if ((*(uint *)(puVar14[10] + uVar25 * 4) & uVar17) == 0) {
        LOCK();
        puVar21 = (uint *)(puVar14[10] + uVar25 * 4);
        *puVar21 = *puVar21 | uVar17;
        UNLOCK();
        uVar1 = puVar14[5];
        if (((uint)uVar1 & 7) != 1) {
          puVar14 = (undefined8 *)param_3[1];
          if ((puVar14 == (undefined8 *)0x0) ||
             (puVar13 = (undefined8 *)*param_3, puVar13 == puVar14 + 0x100)) {
            if (puVar14 != (undefined8 *)0x0) {
              *puVar14 = 0x7f;
            }
            FUN_145086330(param_3);
            puVar13 = (undefined8 *)*param_3;
          }
          *param_3 = puVar13 + 2;
          *puVar13 = puVar10;
          puVar13[1] = uVar1;
        }
      }
    }
  }
code_r0x0001401c469b:
  puVar16 = puVar16 + 1;
  bVar28 = uVar11 < 2;
  uVar11 = uVar11 >> 1;
  if (bVar28) {
    return;
  }
  goto code_r0x0001401c449f;
code_r0x0001401c3d58:
  *puVar21 = uVar2;
  *(int *)(param_4 + 0x1824) = *(int *)(param_4 + 0x1824) + 1;
  lVar8 = *(longlong *)(param_4 + 0x1828);
  uVar17 = *(uint *)(param_4 + 0x1820);
  uVar2 = (int)((ulonglong)((longlong)puVar21 - lVar8) >> 3) * -0x3b13b13b;
  uVar18 = (ulonglong)uVar2;
  if (uVar17 != uVar2) {
    do {
      if (*(int *)(lVar8 + uVar18 * 0x68) != 0) goto code_r0x0001401c3d96;
      uVar2 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar2;
    } while (uVar17 != uVar2);
    uVar18 = (ulonglong)uVar17;
  }
code_r0x0001401c3d96:
  *(undefined1 (*) [32])(lVar8 + 0x48 + uVar18 * 0x68) = ZEXT1232(ZEXT812(0));
code_r0x0001401c3b96:
  puVar14 = (undefined8 *)(lVar8 + 8 + uVar18 * 0x68);
  *(undefined8 **)(param_4 + 0x17e0 + lVar7 * 8) = puVar14;
  puVar10 = (ulonglong *)*puVar14;
  if ((puVar10 <= puVar16) && (puVar16 < (ulonglong *)puVar14[1])) {
code_r0x0001401c3bbf:
    uVar25 = (ulonglong)((longlong)puVar16 - (longlong)puVar10) / (ulonglong)puVar14[3];
    uVar17 = (uint)uVar25;
    uVar18 = (ulonglong)(uVar17 >> 5);
    if (((*(uint *)(puVar14[8] + uVar18 * 4) >> (uVar17 & 0x1f) & 1) != 0) &&
       (puVar16 ==
        (ulonglong *)
        ((-(ulonglong)*(byte *)((longlong)puVar14 + 0x26) &
         (longlong)puVar10 +
         ((ulonglong)*(byte *)((longlong)puVar14 + 0x26) - 1) +
         (uVar25 & 0xffffffff) * puVar14[3] + (ulonglong)*(ushort *)((longlong)puVar14 + 0x24)) -
        (ulonglong)*(ushort *)((longlong)puVar14 + 0x24)))) {
      uVar17 = 1 << (uVar17 & 0x1f);
      if ((*(uint *)(puVar14[10] + uVar18 * 4) & uVar17) == 0) {
        LOCK();
        puVar21 = (uint *)(puVar14[10] + uVar18 * 4);
        *puVar21 = *puVar21 | uVar17;
        UNLOCK();
        uVar25 = puVar14[5];
        if (((uint)uVar25 & 7) != 1) {
code_r0x0001401c3ce8:
          puVar14 = (undefined8 *)param_3[1];
          if ((puVar14 == (undefined8 *)0x0) ||
             (puVar10 = (ulonglong *)*param_3, puVar10 == puVar14 + 0x100)) {
            if (puVar14 != (undefined8 *)0x0) {
              *puVar14 = 0x7f;
            }
            FUN_145086330(param_3);
            puVar10 = (ulonglong *)*param_3;
          }
code_r0x0001401c3978:
          *param_3 = puVar10 + 2;
          *puVar10 = (ulonglong)puVar16;
          puVar10[1] = uVar25;
        }
      }
    }
  }
code_r0x0001401c39f3:
  uVar9 = uVar9 + 1;
  if (uVar9 == uVar11) {
    return;
  }
  goto code_r0x0001401c37f0;
}

