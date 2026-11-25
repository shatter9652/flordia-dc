// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140068880  size: 896 bytes
// Name:    FUN_140068880
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140a0f4b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140068880(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  ushort uVar18;
  uint uVar19;
  longlong *plVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [64];
  short sStack_94;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_5c;
  
  lVar16 = *(longlong *)(param_3 + 0x10);
  if ((lVar16 != 0) && (*(short *)(lVar16 + 0x30) != 0)) {
    lVar21 = lVar16 + 0x20;
    uVar11 = 0;
    lVar8 = lVar21;
    do {
      uVar23 = (ulonglong)uVar11;
      uVar11 = uVar11 + 1;
      *(undefined4 *)(*(longlong *)(lVar8 + 8) + 0x30 + uVar23 * 0x40) = 0;
      if ((int)(uint)*(ushort *)(lVar8 + 0x10) <= (int)uVar11) {
        lVar8 = 0;
        uVar11 = 0;
      }
    } while ((uVar11 != 0) || (lVar8 != 0));
    iVar17 = 0x60;
    if ((*param_2 == 0) || (iVar17 = *(int *)(*param_2 + 0x9000), iVar17 != 0)) {
      lVar8 = func_0x000144d9c140(0x10,(longlong)iVar17 * 0x20);
      lVar9 = 0;
      do {
        if (lVar8 + lVar9 != 0) {
          *(undefined8 *)(lVar8 + 0x10 + lVar9) = 0xffffffffffff;
          *(undefined4 *)(lVar8 + 0x18 + lVar9) = 0;
        }
        lVar9 = lVar9 + 0x20;
      } while ((longlong)iVar17 * 0x20 != lVar9);
      lVar9 = 0;
      iVar14 = 0;
      uVar18 = 0;
      do {
        plVar20 = (longlong *)((longlong)iVar14 * 0x110 + param_2[1]);
        if (*param_2 != 0) {
          plVar20 = (longlong *)(*param_2 + lVar9);
        }
        cVar7 = (**(code **)(*plVar20 + 0x10))(plVar20);
        if (cVar7 != '\0') {
          puVar10 = (undefined8 *)(**(code **)(*plVar20 + 0x78))(plVar20);
          (**(code **)(*plVar20 + 0x20))(plVar20);
          uVar4 = *(undefined4 *)(puVar10 + 1);
          uVar5 = *puVar10;
          puVar10 = (undefined8 *)(lVar8 + (ulonglong)uVar18 * 0x20);
          *puVar10 = uStack_88;
          puVar10[1] = uStack_80;
          puVar10[2] = uVar5;
          puVar10[3] = CONCAT44(uStack_5c,uVar4);
          uVar18 = uVar18 + 1;
        }
        iVar14 = iVar14 + 1;
        lVar9 = lVar9 + 0x120;
      } while (iVar17 + (uint)(iVar17 == 0) != iVar14);
      if (*(short *)(lVar16 + 0x30) != 0) {
        auVar26 = ZEXT1264(ZEXT812(0));
        uVar23 = 0;
        do {
          lVar16 = *(longlong *)(lVar21 + 8);
          if (*(int *)(lVar16 + 0x2c + uVar23 * 0x40) == 0) {
LAB_140068bb2:
            lVar12 = 0;
          }
          else {
            auVar26 = ZEXT1664(auVar26._0_16_);
            lVar9 = FUN_140a0f4b0();
            if (lVar9 == 0) goto LAB_140068bb2;
            lVar12 = 0;
            if (*(char *)(lVar9 + 0x1b9) == '\0') {
              lVar12 = lVar9;
            }
          }
          if (uVar18 != 0) {
            pauVar1 = (undefined1 (*) [16])(lVar16 + 0x10 + uVar23 * 0x40);
            fVar2 = *(float *)(pauVar1[1] + 4);
            auVar3 = *pauVar1;
            if (lVar12 == 0) {
              lVar16 = 0;
              do {
                auVar6 = vsubps_avx(auVar3,*(undefined1 (*) [16])(lVar8 + lVar16));
                auVar24._0_4_ = auVar6._0_4_ * auVar6._0_4_;
                auVar24._4_4_ = auVar6._4_4_ * auVar6._4_4_;
                auVar24._8_4_ = auVar6._8_4_ * auVar6._8_4_;
                auVar24._12_4_ = auVar6._12_4_ * auVar6._12_4_;
                auVar6 = vblendps_avx(auVar24,auVar26._0_16_,8);
                auVar6 = vhaddps_avx(auVar6,auVar6);
                auVar6 = vhaddps_avx(auVar6,auVar6);
                if (auVar6._0_4_ < fVar2 * fVar2) {
                  *(int *)pauVar1[2] = *(int *)pauVar1[2] + 1;
                }
                lVar16 = lVar16 + 0x20;
              } while ((ulonglong)uVar18 * 0x20 != lVar16);
            }
            else {
              uVar13 = 0;
              do {
                auVar6 = vsubps_avx(auVar3,*(undefined1 (*) [16])(lVar8 + uVar13 * 0x20));
                auVar25._0_4_ = auVar6._0_4_ * auVar6._0_4_;
                auVar25._4_4_ = auVar6._4_4_ * auVar6._4_4_;
                auVar25._8_4_ = auVar6._8_4_ * auVar6._8_4_;
                auVar25._12_4_ = auVar6._12_4_ * auVar6._12_4_;
                auVar6 = vblendps_avx(auVar25,auVar26._0_16_,8);
                auVar6 = vhaddps_avx(auVar6,auVar6);
                auVar6 = vhaddps_avx(auVar6,auVar6);
                if (auVar6._0_4_ < fVar2 * fVar2) {
                  lVar16 = uVar13 * 0x20 + lVar8;
                  iVar14 = *(int *)(lVar16 + 0x10);
                  if ((iVar14 == -1) || (uVar11 = *(uint *)(lVar16 + 0x14), uVar11 == 0xffff)) {
LAB_140068b4f:
                    *(int *)pauVar1[2] = *(int *)pauVar1[2] + 1;
                  }
                  else if (*(int *)(lVar12 + 0x138) != 0) {
                    lVar16 = *(longlong *)(lVar12 + 0x140);
                    uVar22 = *(int *)(lVar12 + 0x138) - 1;
                    lVar9 = (ulonglong)(uVar11 & uVar22) * 0x10;
                    iVar15 = *(int *)(lVar16 + lVar9);
                    if ((iVar15 != -1) && (uVar19 = *(uint *)(lVar16 + 4 + lVar9), uVar19 != 0xffff)
                       ) {
                      while ((iVar15 != iVar14 || (uVar19 != uVar11))) {
                        lVar9 = (ulonglong)
                                ((uint)(((lVar9 + lVar16) - lVar16) + 0x10U >> 4) & uVar22) * 0x10;
                        iVar15 = *(int *)(lVar16 + lVar9);
                        if ((iVar15 == -1) ||
                           (uVar19 = *(uint *)(lVar16 + 4 + lVar9), uVar19 == 0xffff))
                        goto LAB_140068a98;
                      }
                      if (*(float *)(lVar9 + lVar16 + 0xc) < fVar2) goto LAB_140068b4f;
                    }
                  }
                }
LAB_140068a98:
                uVar13 = uVar13 + 1;
              } while (uVar13 != uVar18);
            }
          }
          uVar22 = (int)uVar23 + 1;
          uVar11 = uVar22;
          if ((int)(uint)*(ushort *)(lVar21 + 0x10) <= (int)uVar22) {
            uVar11 = 0;
          }
          uVar23 = (ulonglong)uVar11;
          if ((int)(uint)*(ushort *)(lVar21 + 0x10) <= (int)uVar22) {
            lVar21 = 0;
          }
        } while ((uVar11 != 0) || (lVar21 != 0));
      }
      sStack_94 = (short)iVar17;
      if ((sStack_94 != 0) && (lVar8 != 0)) {
        func_0x000144d9c130(lVar8);
      }
    }
  }
  return;
}

