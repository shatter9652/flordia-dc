// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019b410  size: 1493 bytes
// Name:    FUN_14019b410
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14552b5c0, FUN_1400063f0, FUN_1402c59f0, FUN_145351650, FUN_144e25cf0, FUN_1454f92a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14019b410(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  ushort uVar14;
  longlong lVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  ushort uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong unaff_GS_OFFSET;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  float fVar24;
  float fVar25;
  undefined1 in_ZMM8 [64];
  undefined1 auVar27 [64];
  ulonglong uStack_148;
  longlong *plStack_138;
  ushort uStack_130;
  short sStack_12e;
  longlong lStack_128;
  short *psStack_120;
  ulonglong uStack_110;
  longlong *plStack_108;
  ulonglong uStack_100;
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [32];
  undefined1 auStack_58 [16];
  undefined1 auVar26 [16];
  
  auStack_58 = in_ZMM8._0_16_;
  uStack_100 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  lVar10 = func_0x000144e25990(*(undefined4 *)(uStack_100 + 0x9c));
  if ((*(longlong *)(*(longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x18) + 8) + 0x20) + 0x88)
       != 0) && (*(int *)(param_1 + 0x2c4) != 0)) {
    auVar23 = ZEXT464(_DAT_146159bd0);
    uVar20 = 0;
    uStack_110 = 0x1002014ff3fe0;
    plStack_108 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448);
    plVar1 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
    do {
      lVar10 = uVar20 * 0x540;
      plVar11 = (longlong *)
                FUN_14552b5c0(*(undefined4 *)(*(longlong *)(param_1 + 0x2c8) + 0x38 + lVar10),
                              uStack_100);
      if (plVar11 != (longlong *)0x0) {
        lVar15 = *(longlong *)(param_1 + 0x2c8);
        fVar24 = *(float *)(lVar15 + 0xc + lVar10);
        bVar4 = fVar24 <= 0.0;
        cVar6 = func_0x000144ed0cc0(lVar15,uVar20 & 0xffffffff);
        auVar22 = auVar23._0_16_;
        if (cVar6 == '\0') {
          auVar22 = ZEXT816(0) << 0x20;
        }
        auVar27 = ZEXT1664(auVar22);
        uVar17 = (ulonglong)bVar4 << 0x16;
        if (fVar24 <= auVar22._0_4_) {
LAB_14019b544:
          cVar6 = func_0x000144ed0cc0(lVar15,uVar20 & 0xffffffff);
          if (cVar6 == '\0') {
            uStack_148 = uVar17 | 0x2000211e00;
          }
          else {
            uStack_148 = uVar17 ^ uStack_110;
          }
        }
        else {
          cVar6 = func_0x000145056820(param_1,uVar20 & 0xffffffff);
          lVar15 = *(longlong *)(param_1 + 0x2c8);
          if (cVar6 != '\0') goto LAB_14019b544;
          uStack_148 = 0;
        }
        fVar25 = auVar27._0_4_;
        auVar26 = auVar27._0_16_;
        auVar22 = auVar23._0_16_;
        sVar7 = *(short *)(lVar15 + 0xb0 + lVar10);
        if (sVar7 != -1) {
          if (*(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
              == '\0') {
            func_0x0001455db994();
            auVar26 = auVar27._0_16_;
            auVar22 = auVar23._0_16_;
          }
          if (*plStack_108 == 0) {
            auVar21._0_12_ = ZEXT812(0);
            auVar21._12_4_ = 0;
            auStack_b8 = ZEXT1632(auVar21);
            auStack_f8 = ZEXT1632(auVar21);
            auStack_d8 = auStack_f8;
            auStack_98 = auStack_b8;
          }
          auVar23 = ZEXT1664(auVar22);
          auVar27 = ZEXT1664(auVar26);
          FUN_1454f92a0(plVar11[0x35],sVar7,auStack_f8);
          FUN_145351650(&plStack_138,plVar11);
          uVar19 = (uint)uStack_130;
          if ((short)uStack_130 < sStack_12e) {
            lVar15 = plStack_138[0x2e];
            do {
              plVar5 = plStack_138;
              sVar7 = (short)uVar19;
              uVar12 = (ulonglong)sVar7;
              if (lVar15 != 0) {
                sVar7 = *(short *)(*(longlong *)(lVar15 + 0x158) + 8 + (uVar12 & 0xffffffff) * 0x18)
                ;
              }
              if ((*(uint *)(auStack_f8 + (ulonglong)((uint)(int)sVar7 >> 5) * 4) >>
                   ((int)sVar7 & 0x1fU) & 1) != 0) {
                if (lVar15 != 0) {
                  uVar19 = (uint)*(ushort *)
                                  (*(longlong *)(lVar15 + 0x158) + 8 + (uVar12 & 0xffffffff) * 0x18)
                  ;
                }
                iVar8 = func_0x0001454e3ba0(lVar15,uVar19);
                lVar15 = (longlong)(short)uVar19 * 0x70 + *(longlong *)(plVar5[0x35] + 0x20);
                uVar18 = *(ushort *)
                          (lVar15 + 0x1a +
                          (longlong)*(int *)(&UNK_1466c7130 + (uint)(iVar8 << 2)) * 2);
                uVar19 = (uint)uVar18;
                uVar14 = *(ushort *)
                          (lVar15 + 0x1a +
                          (longlong)*(int *)(&UNK_146161460 + (uint)(iVar8 << 2)) * 2);
                if (uVar18 < uVar14) {
                  do {
                    sVar7 = (**(code **)(*plVar5 + 0x408))(plVar5,uVar19);
                    if (sVar7 != -1) goto LAB_14019b6df;
                    uVar19 = uVar19 + 1;
                  } while (uVar14 != (ushort)uVar19);
                }
                else {
LAB_14019b6df:
                  if ((ushort)uVar19 < uVar14) {
                    do {
                      uVar9 = (**(code **)(*plVar5 + 0x408))(plVar5,uVar19);
                      func_0x0001454b6460(plVar11[1],uVar9,uStack_148);
                      uVar9 = (**(code **)(*plVar5 + 0x408))(plVar5,uVar19);
                      func_0x0001455cea70(plVar11[1],uVar9,0xc0);
                      do {
                        if (uVar14 <= (ushort)((short)uVar19 + 1U)) goto LAB_14019b746;
                        sVar7 = (**(code **)(*plVar5 + 0x408))(plVar5);
                        uVar19 = uVar19 + 1;
                      } while (sVar7 == -1);
                    } while( true );
                  }
                }
              }
LAB_14019b746:
              uVar19 = uStack_130 + 1;
              uVar18 = (ushort)uVar19;
              lVar15 = plStack_138[0x2e];
              if ((short)uVar18 < sStack_12e && lVar15 != 0) {
                uVar19 = (uint)(short)uVar18;
                uVar14 = uStack_130 + 2;
                uStack_130 = uVar18;
                while ((sVar7 = *(short *)(*(longlong *)(lVar15 + 0x158) + 8 +
                                          (ulonglong)uVar19 * 0x18), sVar7 == -1 ||
                       (uVar18 = uStack_130,
                       *(short *)(*(longlong *)(lVar15 + 0x180) + (ulonglong)(uint)(int)sVar7 * 2)
                       == -1))) {
                  uVar19 = uVar19 + 1;
                  sVar7 = (2 - sStack_12e) + uVar14;
                  uStack_130 = uVar14;
                  uVar14 = uVar14 + 1;
                  if (sVar7 == 2) goto LAB_14019b7dc;
                }
              }
              uStack_130 = uVar18;
            } while ((short)uVar19 < sStack_12e);
          }
LAB_14019b7dc:
          lVar15 = lStack_128;
          fVar25 = auVar27._0_4_;
          if ((lStack_128 != 0) && (*psStack_120 = *psStack_120 + -1, *psStack_120 == 0)) {
            lVar3 = *(longlong *)(lStack_128 + 0x18);
            if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
              lVar13 = *plVar1;
            }
            else {
              *(undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) = 1;
              lVar13 = FUN_1400063f0();
              *plVar1 = lVar13;
            }
            fVar25 = auVar27._0_4_;
            if (lVar13 != lVar3) {
              FUN_1402c59f0(lVar15);
              fVar25 = auVar27._0_4_;
            }
          }
          lVar15 = *(longlong *)(param_1 + 0x2c8);
        }
        uVar17 = uVar17 ^ 0x10020147f3fe0;
        if (fVar24 <= fVar25) {
          uVar17 = 0;
        }
        if ((*(short *)(lVar15 + 0xb4 + lVar10) != -1) &&
           (uVar9 = (**(code **)(*plVar11 + 0x408))(plVar11), (short)uVar9 != -1)) {
          func_0x0001454b6460(plVar11[1],uVar9,uVar17);
          func_0x0001455cea70(plVar11[1],uVar9,0xc0);
        }
        uVar17 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x2c8) + 0x4d4 + lVar10);
        if (uVar17 != 0) {
          puVar16 = *(undefined4 **)(*(longlong *)(param_1 + 0x2c8) + 0x4d8 + lVar10);
          puVar2 = puVar16 + uVar17;
          do {
            uVar9 = FUN_144e25cf0(plVar11,*puVar16);
            if ((short)uVar9 != -1) {
              iVar8 = func_0x0001454e3ba0(plVar11[0x2e],uVar9);
              lVar10 = (longlong)(short)uVar9 * 0x70 + *(longlong *)(plVar11[0x35] + 0x20);
              uVar18 = *(ushort *)
                        (lVar10 + 0x1a + (longlong)*(int *)(&UNK_1466c7130 + (uint)(iVar8 << 2)) * 2
                        );
              uVar19 = (uint)uVar18;
              uVar14 = *(ushort *)
                        (lVar10 + 0x1a + (longlong)*(int *)(&UNK_146161460 + (uint)(iVar8 << 2)) * 2
                        );
              if (uVar18 < uVar14) {
                do {
                  sVar7 = (**(code **)(*plVar11 + 0x408))(plVar11,uVar19);
                  if (sVar7 != -1) goto LAB_14019b928;
                  uVar19 = uVar19 + 1;
                } while (uVar14 != (ushort)uVar19);
              }
              else {
LAB_14019b928:
                if ((ushort)uVar19 < uVar14) {
                  do {
                    uVar9 = (**(code **)(*plVar11 + 0x408))(plVar11,uVar19);
                    func_0x0001454b6460(plVar11[1],uVar9,0);
                    do {
                      if (uVar14 <= (ushort)((short)uVar19 + 1U)) goto LAB_14019b96a;
                      sVar7 = (**(code **)(*plVar11 + 0x408))(plVar11);
                      uVar19 = uVar19 + 1;
                    } while (sVar7 == -1);
                  } while( true );
                }
              }
            }
LAB_14019b96a:
            puVar16 = puVar16 + 1;
          } while (puVar16 != puVar2);
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < *(uint *)(param_1 + 0x2c4));
  }
  return;
}

