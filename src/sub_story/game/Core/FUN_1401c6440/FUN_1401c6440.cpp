// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401c6440  size: 3409 bytes
// Name:    FUN_1401c6440
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141d83dd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401c6440(uint param_1,longlong *param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  byte bVar4;
  longlong lVar5;
  byte *pbVar6;
  ulonglong uVar7;
  byte *pbVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  longlong unaff_GS_OFFSET;
  byte *pbStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  int iStack_74;
  int *piStack_70;
  undefined8 *puStack_68;
  uint uStack_5c;
  ulonglong uStack_58;
  longlong *plStack_50;
  longlong *plStack_48;
  
  if (param_1 == 0) {
    uVar20 = 0;
LAB_1401c647b:
    if ((uint)uVar20 != param_1) {
      piStack_70 = (int *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xff4);
      puVar21 = (undefined8 *)param_2[(uVar20 & 0xffffffff) * 5];
      puStack_88 = param_4;
      iStack_74 = param_3;
      uStack_5c = param_1;
      plStack_48 = param_2;
      do {
        uVar19 = (uint)uVar20;
        uVar20 = uVar20 & 0xffffffff;
        puStack_80 = (undefined8 *)plStack_48[uVar20 * 5 + 1];
        uVar12 = (uint)plStack_48[uVar20 * 5 + 2] & 7;
        if (uVar12 == 3) {
          plStack_50 = plStack_48 + uVar20 * 5;
          uStack_58 = (ulonglong)plStack_48[uVar20 * 5 + 2] >> 0xc & 0x7ffffffffffff;
          if (iStack_74 == 0) {
            uVar20 = uStack_58;
            puVar10 = puVar21;
            if (uStack_58 != 0) {
LAB_1401c6e61:
              puStack_68 = puVar10;
              if (((uVar20 & 1) != 0) &&
                 (pbVar8 = (byte *)*puVar21,
                 pbVar8 <= _DAT_14abce178 + 0x1fffff && _DAT_14abce178 <= pbVar8)) {
                if (_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000 <= pbVar8) {
                  lVar2 = param_4[2];
                  if ((pbVar8 < *(byte **)(lVar2 + 0x18d0)) ||
                     (*(byte **)(lVar2 + 0x18d8) <= pbVar8)) goto LAB_1401c70be;
                  iVar1 = *piStack_70;
                  puVar10 = *(undefined8 **)(lVar2 + 0x17e0 + (longlong)iVar1 * 8);
                  if ((puVar10 == (undefined8 *)0x0) ||
                     ((pbVar6 = (byte *)*puVar10, pbVar8 < pbVar6 || ((byte *)puVar10[1] <= pbVar8))
                     )) {
                    lVar5 = *(longlong *)(lVar2 + 0x1838);
                    uVar18 = (ulonglong)*(uint *)(lVar2 + 0x1834);
                    lVar14 = lVar5;
                    uVar7 = uVar18;
                    if (uVar18 != 0) {
                      do {
                        uVar16 = uVar7 >> 1;
                        lVar11 = lVar14 + 0x10 + uVar16 * 0x10;
                        if (*(byte **)(lVar11 + -0x10) <= pbVar8) {
                          lVar14 = lVar11;
                          uVar16 = ~uVar16 + uVar7;
                        }
                        uVar7 = uVar16;
                      } while (0 < (longlong)uVar16);
                    }
                    lVar11 = lVar14 + -0x10;
                    if (lVar14 == uVar18 * 0x10 + lVar5) {
                      lVar11 = (ulonglong)(*(uint *)(lVar2 + 0x1834) - 1) * 0x10 + lVar5;
                    }
                    do {
                      uVar12 = *(uint *)(lVar2 + 0x1820);
                      if (uVar12 != 0) {
                        uVar17 = *(uint *)(lVar11 + 8);
                        uVar9 = (uVar17 >> 0x10 ^ uVar17) * -0x7a143595;
                        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
                        lVar5 = *(longlong *)(lVar2 + 0x1828);
                        uVar7 = (ulonglong)((uVar9 >> 0x10 ^ uVar9) & uVar12 - 1);
                        lVar14 = uVar7 * 0x68;
                        uVar9 = *(uint *)(lVar5 + lVar14);
                        while( true ) {
                          if (uVar9 == uVar17) {
                            uVar17 = (uint)uVar7;
                            while ((uVar9 = uVar12, uVar12 != uVar17 &&
                                   (uVar9 = (uint)uVar7, *(int *)(lVar5 + uVar7 * 0x68) == 0))) {
                              uVar17 = uVar9 + 1;
                              uVar7 = (ulonglong)uVar17;
                            }
                            goto LAB_1401c7079;
                          }
                          puVar15 = (uint *)(lVar14 + lVar5);
                          if (uVar9 == 0) break;
                          uVar7 = (ulonglong)
                                  ((int)((ulonglong)((longlong)puVar15 + (0x68 - lVar5)) >> 3) *
                                   -0x3b13b13b & uVar12 - 1);
                          lVar14 = uVar7 * 0x68;
                          uVar9 = *(uint *)(lVar5 + lVar14);
                        }
                        if (*(uint *)(lVar2 + 0x1824) != (uVar12 * 0x4b) / 100) goto LAB_1401c70d7;
                      }
                      FUN_141d83dd0((uint *)(lVar2 + 0x1820),uVar12 * 2);
                    } while( true );
                  }
                  goto LAB_1401c709d;
                }
                if ((*pbVar8 & 3) != 0) {
                  pbStack_90 = pbVar8;
                  (**(code **)*param_4)(&pbStack_90,param_4[1],param_4[2]);
                  *puVar21 = pbStack_90;
                  goto LAB_1401c70be;
                }
                goto LAB_1401c70b7;
              }
              goto LAB_1401c70be;
            }
          }
          else {
            uVar20 = uStack_58;
            puVar10 = puVar21;
            if (uStack_58 != 0) {
LAB_1401c6afe:
              puStack_68 = puVar10;
              if (((uVar20 & 1) != 0) && (pbVar8 = (byte *)*puVar21, pbVar8 != (byte *)0x0)) {
                if ((pbVar8 < _DAT_14abce178) ||
                   (_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000 <= pbVar8)) {
                  lVar2 = param_4[2];
                  if ((pbVar8 < *(byte **)(lVar2 + 0x18d0)) ||
                     (*(byte **)(lVar2 + 0x18d8) <= pbVar8)) goto LAB_1401c6da6;
                  iVar1 = *piStack_70;
                  puVar10 = *(undefined8 **)(lVar2 + 0x17e0 + (longlong)iVar1 * 8);
                  if ((puVar10 == (undefined8 *)0x0) ||
                     ((pbVar6 = (byte *)*puVar10, pbVar8 < pbVar6 || ((byte *)puVar10[1] <= pbVar8))
                     )) {
                    lVar5 = *(longlong *)(lVar2 + 0x1838);
                    uVar18 = (ulonglong)*(uint *)(lVar2 + 0x1834);
                    lVar14 = lVar5;
                    uVar7 = uVar18;
                    if (uVar18 != 0) {
                      do {
                        uVar16 = uVar7 >> 1;
                        lVar11 = lVar14 + 0x10 + uVar16 * 0x10;
                        if (*(byte **)(lVar11 + -0x10) <= pbVar8) {
                          lVar14 = lVar11;
                          uVar16 = ~uVar16 + uVar7;
                        }
                        uVar7 = uVar16;
                      } while (0 < (longlong)uVar16);
                    }
                    lVar11 = lVar14 + -0x10;
                    if (lVar14 == uVar18 * 0x10 + lVar5) {
                      lVar11 = (ulonglong)(*(uint *)(lVar2 + 0x1834) - 1) * 0x10 + lVar5;
                    }
                    do {
                      uVar12 = *(uint *)(lVar2 + 0x1820);
                      if (uVar12 != 0) {
                        uVar17 = *(uint *)(lVar11 + 8);
                        uVar9 = (uVar17 >> 0x10 ^ uVar17) * -0x7a143595;
                        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
                        lVar5 = *(longlong *)(lVar2 + 0x1828);
                        uVar7 = (ulonglong)((uVar9 >> 0x10 ^ uVar9) & uVar12 - 1);
                        lVar14 = uVar7 * 0x68;
                        uVar9 = *(uint *)(lVar5 + lVar14);
                        while( true ) {
                          if (uVar9 == uVar17) {
                            uVar17 = (uint)uVar7;
                            while ((uVar18 = (ulonglong)uVar12, uVar12 != uVar17 &&
                                   (uVar18 = uVar7, *(int *)(lVar5 + uVar7 * 0x68) == 0))) {
                              uVar17 = (int)uVar7 + 1;
                              uVar7 = (ulonglong)uVar17;
                            }
                            goto LAB_1401c6cf7;
                          }
                          puVar15 = (uint *)(lVar14 + lVar5);
                          if (uVar9 == 0) break;
                          uVar7 = (ulonglong)
                                  ((int)((ulonglong)((longlong)puVar15 + (0x68 - lVar5)) >> 3) *
                                   -0x3b13b13b & uVar12 - 1);
                          lVar14 = uVar7 * 0x68;
                          uVar9 = *(uint *)(lVar5 + lVar14);
                        }
                        if (*(uint *)(lVar2 + 0x1824) != (uVar12 * 0x4b) / 100) goto LAB_1401c6dbf;
                      }
                      FUN_141d83dd0((uint *)(lVar2 + 0x1820),uVar12 * 2);
                    } while( true );
                  }
                  goto LAB_1401c6d23;
                }
                if ((*pbVar8 & 3) != 0) {
LAB_1401c6b43:
                  pbStack_90 = pbVar8;
                  (**(code **)*param_4)(&pbStack_90,param_4[1],param_4[2]);
                  *puVar21 = pbStack_90;
                  goto LAB_1401c6da6;
                }
                if (_DAT_14abce178 + 0x1fffff < pbVar8) {
                  uVar7 = (longlong)pbVar8 - _DAT_1498c41b0;
                  if ((uVar7 < 0x1000000) &&
                     ((*(uint *)((uVar7 >> 0x15) * 4 + 0x1498c41b8) >>
                       ((uint)(uVar7 >> 0x10) & 0x1f) & 1) != 0)) {
                    bVar4 = pbVar8[8 - *(longlong *)(pbVar8 + -8)] & 1;
                  }
                  else {
                    bVar4 = func_0x000145085430(pbVar8);
                  }
                  if (bVar4 != 0) goto LAB_1401c6b43;
                }
                goto LAB_1401c6d9f;
              }
              goto LAB_1401c6da6;
            }
          }
        }
        else if (uVar12 == 2) {
          if (iStack_74 == 0) {
LAB_1401c6501:
            if (puVar21 != puStack_80) {
              pbVar8 = (byte *)*puVar21;
              if (pbVar8 <= _DAT_14abce178 + 0x1fffff && _DAT_14abce178 <= pbVar8) {
                if (_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000 <= pbVar8) {
                  lVar2 = param_4[2];
                  if ((pbVar8 < *(byte **)(lVar2 + 0x18d0)) ||
                     (*(byte **)(lVar2 + 0x18d8) <= pbVar8)) goto LAB_1401c6760;
                  iVar1 = *piStack_70;
                  puVar10 = *(undefined8 **)(lVar2 + 0x17e0 + (longlong)iVar1 * 8);
                  if ((puVar10 == (undefined8 *)0x0) ||
                     ((pbVar6 = (byte *)*puVar10, pbVar8 < pbVar6 || ((byte *)puVar10[1] <= pbVar8))
                     )) {
                    lVar5 = *(longlong *)(lVar2 + 0x1838);
                    uVar7 = (ulonglong)*(uint *)(lVar2 + 0x1834);
                    lVar14 = lVar5;
                    uVar20 = uVar7;
                    if (uVar7 != 0) {
                      do {
                        uVar18 = uVar20 >> 1;
                        lVar11 = lVar14 + 0x10 + uVar18 * 0x10;
                        if (*(byte **)(lVar11 + -0x10) <= pbVar8) {
                          lVar14 = lVar11;
                          uVar18 = ~uVar18 + uVar20;
                        }
                        uVar20 = uVar18;
                      } while (0 < (longlong)uVar18);
                    }
                    lVar11 = lVar14 + -0x10;
                    if (lVar14 == uVar7 * 0x10 + lVar5) {
                      lVar11 = (ulonglong)(*(uint *)(lVar2 + 0x1834) - 1) * 0x10 + lVar5;
                    }
                    do {
                      uVar12 = *(uint *)(lVar2 + 0x1820);
                      if (uVar12 != 0) {
                        uVar17 = *(uint *)(lVar11 + 8);
                        uVar9 = (uVar17 >> 0x10 ^ uVar17) * -0x7a143595;
                        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
                        lVar5 = *(longlong *)(lVar2 + 0x1828);
                        uVar20 = (ulonglong)((uVar9 >> 0x10 ^ uVar9) & uVar12 - 1);
                        lVar14 = uVar20 * 0x68;
                        uVar9 = *(uint *)(lVar5 + lVar14);
                        while( true ) {
                          if (uVar9 == uVar17) {
                            uVar17 = (uint)uVar20;
                            while ((uVar9 = uVar12, uVar12 != uVar17 &&
                                   (uVar9 = (uint)uVar20, *(int *)(lVar5 + uVar20 * 0x68) == 0))) {
                              uVar17 = uVar9 + 1;
                              uVar20 = (ulonglong)uVar17;
                            }
                            goto LAB_1401c6715;
                          }
                          puVar15 = (uint *)(lVar14 + lVar5);
                          if (uVar9 == 0) break;
                          uVar20 = (ulonglong)
                                   ((int)((ulonglong)((longlong)puVar15 + (0x68 - lVar5)) >> 3) *
                                    -0x3b13b13b & uVar12 - 1);
                          lVar14 = uVar20 * 0x68;
                          uVar9 = *(uint *)(lVar5 + lVar14);
                        }
                        if (*(uint *)(lVar2 + 0x1824) != (uVar12 * 0x4b) / 100) goto LAB_1401c6769;
                      }
                      FUN_141d83dd0((uint *)(lVar2 + 0x1820),uVar12 * 2);
                    } while( true );
                  }
                  goto LAB_1401c673c;
                }
                if ((*pbVar8 & 3) != 0) {
                  pbStack_90 = pbVar8;
                  (**(code **)*param_4)(&pbStack_90,param_4[1],param_4[2]);
                  *puVar21 = pbStack_90;
                  goto LAB_1401c6760;
                }
                goto LAB_1401c6759;
              }
              goto LAB_1401c6760;
            }
            goto LAB_1401c716c;
          }
LAB_1401c6aba:
          if (puVar21 != puStack_80) {
            pbVar8 = (byte *)*puVar21;
            if (pbVar8 != (byte *)0x0) {
              if ((pbVar8 < _DAT_14abce178) ||
                 (_DAT_14abce178 + _DAT_14abce198 + _DAT_14abce180 * 0x10000 <= pbVar8)) {
                lVar2 = param_4[2];
                if ((pbVar8 < *(byte **)(lVar2 + 0x18d0)) || (*(byte **)(lVar2 + 0x18d8) <= pbVar8))
                goto LAB_1401c6ab6;
                iVar1 = *piStack_70;
                puVar10 = *(undefined8 **)(lVar2 + 0x17e0 + (longlong)iVar1 * 8);
                if (((puVar10 == (undefined8 *)0x0) || (pbVar6 = (byte *)*puVar10, pbVar8 < pbVar6))
                   || ((byte *)puVar10[1] <= pbVar8)) {
                  lVar5 = *(longlong *)(lVar2 + 0x1838);
                  uVar7 = (ulonglong)*(uint *)(lVar2 + 0x1834);
                  lVar14 = lVar5;
                  uVar20 = uVar7;
                  if (uVar7 != 0) {
                    do {
                      uVar18 = uVar20 >> 1;
                      lVar11 = lVar14 + 0x10 + uVar18 * 0x10;
                      if (*(byte **)(lVar11 + -0x10) <= pbVar8) {
                        lVar14 = lVar11;
                        uVar18 = ~uVar18 + uVar20;
                      }
                      uVar20 = uVar18;
                    } while (0 < (longlong)uVar18);
                  }
                  lVar11 = lVar14 + -0x10;
                  if (lVar14 == uVar7 * 0x10 + lVar5) {
                    lVar11 = (ulonglong)(*(uint *)(lVar2 + 0x1834) - 1) * 0x10 + lVar5;
                  }
                  do {
                    uVar12 = *(uint *)(lVar2 + 0x1820);
                    if (uVar12 != 0) {
                      uVar17 = *(uint *)(lVar11 + 8);
                      uVar9 = (uVar17 >> 0x10 ^ uVar17) * -0x7a143595;
                      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
                      lVar5 = *(longlong *)(lVar2 + 0x1828);
                      uVar20 = (ulonglong)((uVar9 >> 0x10 ^ uVar9) & uVar12 - 1);
                      lVar14 = uVar20 * 0x68;
                      uVar9 = *(uint *)(lVar5 + lVar14);
                      while( true ) {
                        if (uVar9 == uVar17) goto LAB_1401c6a56;
                        puVar15 = (uint *)(lVar14 + lVar5);
                        if (uVar9 == 0) break;
                        uVar20 = (ulonglong)
                                 ((int)((ulonglong)((longlong)puVar15 + (0x68 - lVar5)) >> 3) *
                                  -0x3b13b13b & uVar12 - 1);
                        lVar14 = uVar20 * 0x68;
                        uVar9 = *(uint *)(lVar5 + lVar14);
                      }
                      if (*(uint *)(lVar2 + 0x1824) != (uVar12 * 0x4b) / 100) goto LAB_1401c6a03;
                    }
                    FUN_141d83dd0((uint *)(lVar2 + 0x1820),uVar12 * 2);
                  } while( true );
                }
                goto LAB_1401c6a92;
              }
              if ((*pbVar8 & 3) != 0) {
LAB_1401c6803:
                pbStack_90 = pbVar8;
                (**(code **)*param_4)(&pbStack_90,param_4[1],param_4[2]);
                *puVar21 = pbStack_90;
                goto LAB_1401c6ab6;
              }
              if (_DAT_14abce178 + 0x1fffff < pbVar8) {
                uVar20 = (longlong)pbVar8 - _DAT_1498c41b0;
                if ((uVar20 < 0x1000000) &&
                   ((*(uint *)((uVar20 >> 0x15) * 4 + 0x1498c41b8) >>
                     ((uint)(uVar20 >> 0x10) & 0x1f) & 1) != 0)) {
                  bVar4 = pbVar8[8 - *(longlong *)(pbVar8 + -8)] & 1;
                }
                else {
                  bVar4 = func_0x000145085430(pbVar8);
                }
                if (bVar4 != 0) goto LAB_1401c6803;
              }
              goto LAB_1401c6aaf;
            }
            goto LAB_1401c6ab6;
          }
        }
LAB_1401c716c:
        do {
          while( true ) {
            uVar19 = uVar19 + 1;
            uVar20 = (ulonglong)uVar19;
            if (uVar19 < uStack_5c) break;
            if (uVar19 == uStack_5c) {
              return;
            }
          }
          puVar21 = (undefined8 *)plStack_48[uVar20 * 5];
        } while (puVar21 == (undefined8 *)0x0);
      } while( true );
    }
  }
  else {
    uVar20 = 0;
    plVar13 = param_2;
    do {
      if (*plVar13 != 0) goto LAB_1401c647b;
      uVar20 = uVar20 + 1;
      plVar13 = plVar13 + 5;
    } while (param_1 != uVar20);
  }
  return;
LAB_1401c70d7:
  *puVar15 = uVar17;
  *(int *)(lVar2 + 0x1824) = *(int *)(lVar2 + 0x1824) + 1;
  lVar5 = *(longlong *)(lVar2 + 0x1828);
  uVar12 = (int)((ulonglong)((longlong)puVar15 - lVar5) >> 3) * -0x3b13b13b;
  uVar9 = uVar12;
  while ((*(uint *)(lVar2 + 0x1820) != uVar12 &&
         (uVar9 = uVar12, *(int *)(lVar5 + (ulonglong)uVar12 * 0x68) == 0))) {
    uVar12 = uVar12 + 1;
    uVar9 = *(uint *)(lVar2 + 0x1820);
  }
  *(undefined1 (*) [32])(lVar5 + 0x48 + (ulonglong)uVar9 * 0x68) = ZEXT1232(ZEXT812(0));
LAB_1401c7079:
  puVar10 = (undefined8 *)(lVar5 + 8 + (ulonglong)uVar9 * 0x68);
  *(undefined8 **)(lVar2 + 0x17e0 + (longlong)iVar1 * 8) = puVar10;
  pbVar6 = (byte *)*puVar10;
  param_4 = puStack_88;
  if ((pbVar6 <= pbVar8) && (pbVar8 < (byte *)puVar10[1])) {
    pbVar8 = (byte *)*puVar21;
LAB_1401c709d:
    uVar12 = (uint)((ulonglong)((longlong)pbVar8 - (longlong)pbVar6) / (ulonglong)puVar10[3]);
    if ((*(uint *)(puVar10[10] + (ulonglong)(uVar12 >> 5) * 4) >> (uVar12 & 0x1f) & 1) == 0) {
LAB_1401c70b7:
      *puVar21 = 0;
    }
  }
LAB_1401c70be:
  puVar21 = puVar21 + 1;
  bVar3 = 1 < uVar20;
  uVar20 = uVar20 >> 1;
  puVar10 = puStack_68;
  if ((bVar3) ||
     (puVar21 = (undefined8 *)
                ((longlong)puStack_68 + (ulonglong)(*(uint *)(plStack_50 + 2) & 0xff8)),
     uVar20 = uStack_58, puVar10 = puVar21, puVar21 < puStack_80)) goto LAB_1401c6e61;
  goto LAB_1401c716c;
LAB_1401c6dbf:
  *puVar15 = uVar17;
  *(int *)(lVar2 + 0x1824) = *(int *)(lVar2 + 0x1824) + 1;
  lVar5 = *(longlong *)(lVar2 + 0x1828);
  uVar12 = *(uint *)(lVar2 + 0x1820);
  uVar17 = (int)((ulonglong)((longlong)puVar15 - lVar5) >> 3) * -0x3b13b13b;
  uVar18 = (ulonglong)uVar17;
  if (uVar12 != uVar17) {
    do {
      if (*(int *)(lVar5 + uVar18 * 0x68) != 0) goto LAB_1401c6e02;
      uVar17 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar17;
    } while (uVar12 != uVar17);
    uVar18 = (ulonglong)uVar12;
  }
LAB_1401c6e02:
  *(undefined1 (*) [32])(lVar5 + 0x48 + uVar18 * 0x68) = ZEXT1232(ZEXT812(0));
LAB_1401c6cf7:
  puVar10 = (undefined8 *)(lVar5 + 8 + uVar18 * 0x68);
  *(undefined8 **)(lVar2 + 0x17e0 + (longlong)iVar1 * 8) = puVar10;
  pbVar6 = (byte *)*puVar10;
  param_4 = puStack_88;
  if ((pbVar6 <= pbVar8) && (pbVar8 < (byte *)puVar10[1])) {
    pbVar8 = (byte *)*puVar21;
LAB_1401c6d23:
    uVar12 = (uint)((ulonglong)((longlong)pbVar8 - (longlong)pbVar6) / (ulonglong)puVar10[3]);
    if ((*(uint *)(puVar10[10] + (ulonglong)(uVar12 >> 5) * 4) >> (uVar12 & 0x1f) & 1) == 0) {
LAB_1401c6d9f:
      *puVar21 = 0;
    }
  }
LAB_1401c6da6:
  puVar21 = puVar21 + 1;
  bVar3 = 1 < uVar20;
  uVar20 = uVar20 >> 1;
  puVar10 = puStack_68;
  if ((bVar3) ||
     (puVar21 = (undefined8 *)
                ((longlong)puStack_68 + (ulonglong)(*(uint *)(plStack_50 + 2) & 0xff8)),
     uVar20 = uStack_58, puVar10 = puVar21, puVar21 < puStack_80)) goto LAB_1401c6afe;
  goto LAB_1401c716c;
LAB_1401c6769:
  *puVar15 = uVar17;
  *(int *)(lVar2 + 0x1824) = *(int *)(lVar2 + 0x1824) + 1;
  lVar5 = *(longlong *)(lVar2 + 0x1828);
  uVar12 = (int)((ulonglong)((longlong)puVar15 - lVar5) >> 3) * -0x3b13b13b;
  uVar9 = uVar12;
  while ((*(uint *)(lVar2 + 0x1820) != uVar12 &&
         (uVar9 = uVar12, *(int *)(lVar5 + (ulonglong)uVar12 * 0x68) == 0))) {
    uVar12 = uVar12 + 1;
    uVar9 = *(uint *)(lVar2 + 0x1820);
  }
  *(undefined1 (*) [32])(lVar5 + 0x48 + (ulonglong)uVar9 * 0x68) = ZEXT1232(ZEXT812(0));
LAB_1401c6715:
  puVar10 = (undefined8 *)(lVar5 + 8 + (ulonglong)uVar9 * 0x68);
  *(undefined8 **)(lVar2 + 0x17e0 + (longlong)iVar1 * 8) = puVar10;
  pbVar6 = (byte *)*puVar10;
  param_4 = puStack_88;
  if ((pbVar6 <= pbVar8) && (pbVar8 < (byte *)puVar10[1])) {
    pbVar8 = (byte *)*puVar21;
LAB_1401c673c:
    uVar12 = (uint)((ulonglong)((longlong)pbVar8 - (longlong)pbVar6) / (ulonglong)puVar10[3]);
    if ((*(uint *)(puVar10[10] + (ulonglong)(uVar12 >> 5) * 4) >> (uVar12 & 0x1f) & 1) == 0) {
LAB_1401c6759:
      *puVar21 = 0;
    }
  }
LAB_1401c6760:
  puVar21 = puVar21 + 1;
  goto LAB_1401c6501;
LAB_1401c6a56:
  for (; (uVar7 = (ulonglong)uVar12, uVar12 != (uint)uVar20 &&
         (uVar7 = uVar20, *(int *)(lVar5 + uVar20 * 0x68) == 0));
      uVar20 = (ulonglong)((uint)uVar20 + 1)) {
  }
  goto LAB_1401c6a6b;
LAB_1401c6a03:
  *puVar15 = uVar17;
  *(int *)(lVar2 + 0x1824) = *(int *)(lVar2 + 0x1824) + 1;
  lVar5 = *(longlong *)(lVar2 + 0x1828);
  uVar12 = *(uint *)(lVar2 + 0x1820);
  uVar17 = (int)((ulonglong)((longlong)puVar15 - lVar5) >> 3) * -0x3b13b13b;
  uVar7 = (ulonglong)uVar17;
  if (uVar12 != uVar17) {
    do {
      if (*(int *)(lVar5 + uVar7 * 0x68) != 0) goto LAB_1401c6a41;
      uVar17 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar17;
    } while (uVar12 != uVar17);
    uVar7 = (ulonglong)uVar12;
  }
LAB_1401c6a41:
  *(undefined1 (*) [32])(lVar5 + 0x48 + uVar7 * 0x68) = ZEXT1232(ZEXT812(0));
LAB_1401c6a6b:
  puVar10 = (undefined8 *)(lVar5 + 8 + uVar7 * 0x68);
  *(undefined8 **)(lVar2 + 0x17e0 + (longlong)iVar1 * 8) = puVar10;
  pbVar6 = (byte *)*puVar10;
  if ((pbVar6 <= pbVar8) && (pbVar8 < (byte *)puVar10[1])) {
    pbVar8 = (byte *)*puVar21;
LAB_1401c6a92:
    uVar12 = (uint)((ulonglong)((longlong)pbVar8 - (longlong)pbVar6) / (ulonglong)puVar10[3]);
    if ((*(uint *)(puVar10[10] + (ulonglong)(uVar12 >> 5) * 4) >> (uVar12 & 0x1f) & 1) == 0) {
LAB_1401c6aaf:
      *puVar21 = 0;
    }
  }
LAB_1401c6ab6:
  puVar21 = puVar21 + 1;
  goto LAB_1401c6aba;
}

