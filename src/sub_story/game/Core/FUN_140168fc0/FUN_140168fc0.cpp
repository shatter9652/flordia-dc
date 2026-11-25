// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140168fc0  size: 2205 bytes
// Name:    FUN_140168fc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140323580, FUN_140006180, FUN_145647140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140168fc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  code *pcVar10;
  undefined1 (*pauVar11) [16];
  int *piVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  char cVar15;
  undefined1 uVar16;
  char cVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong *plVar25;
  undefined1 *puVar26;
  uint uVar27;
  longlong *plVar28;
  undefined1 *puVar29;
  int iVar30;
  bool bVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  undefined1 auVar35 [16];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar36 [64];
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  longlong alStackX_8 [4];
  undefined8 uStack_48;
  
  uStack_48 = 0x140168fd6;
  lVar20 = FUN_145647140();
  lVar20 = -lVar20;
  *(undefined8 *)(&stack0x000020f0 + lVar20) = unaff_XMM7_Qa;
  *(undefined8 *)(&stack0x000020f8 + lVar20) = unaff_XMM7_Qb;
  *(undefined8 *)(&stack0x000020e0 + lVar20) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x000020e8 + lVar20) = unaff_XMM6_Qb;
  *(undefined8 *)((longlong)alStackX_8 + lVar20) = param_3;
  *(undefined8 *)((longlong)alStackX_8 + lVar20 + 8) = param_2;
  puVar1 = (uint *)(param_1 + 0x18);
  puVar2 = (ulonglong *)(param_1 + 0x20);
  uVar19 = *(uint *)(param_1 + 0x18);
  *(longlong *)((longlong)alStackX_8 + lVar20 + 0x10) = param_1;
LAB_140169024:
  do {
    uVar18 = uVar19;
    if ((uVar18 & 0x1ff0000) != 0) {
      LOCK();
      uVar19 = *puVar1;
      bVar31 = uVar18 == uVar19;
      if (bVar31) {
        *puVar1 = uVar18 + 0x100;
        uVar19 = uVar18;
      }
      UNLOCK();
      if (bVar31) {
        uVar27 = (uint)(*puVar2 >> 7) & 0xffffff;
        uVar22 = *puVar2;
        if ((*puVar2 >> 7 & 0xffffff) != 0) {
          do {
            if ((longlong)uVar22 < 0x100000000) {
              uVar21 = *puVar2;
            }
            else {
              LOCK();
              uVar21 = *puVar2;
              if (uVar22 == uVar21) {
                *puVar2 = uVar22 - 0x100000000;
                uVar21 = uVar22;
              }
              UNLOCK();
              uVar19 = uVar18;
              if (uVar22 == uVar21) goto LAB_140169024;
            }
            uVar27 = uVar27 - 1;
            uVar22 = uVar21;
          } while (uVar27 != 0);
        }
        uVar22 = *puVar2;
        do {
          *(ulonglong *)(&stack0x00000040 + lVar20) = uVar22;
          uVar21 = uVar22;
          while ((longlong)uVar21 < 0x100000000) {
            *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1401690a4;
            cVar15 = FUN_140006180(puVar2,1,&stack0x00000040 + lVar20);
            uVar19 = uVar18;
            if (cVar15 != '\0') goto LAB_140169024;
            uVar21 = *(ulonglong *)(&stack0x00000040 + lVar20);
          }
          LOCK();
          uVar22 = *puVar2;
          if (uVar21 == uVar22) {
            *puVar2 = uVar21 - 0x100000000;
            uVar22 = uVar21;
          }
          UNLOCK();
          uVar19 = uVar18;
        } while (*(ulonglong *)(&stack0x00000040 + lVar20) != uVar22);
      }
      goto LAB_140169024;
    }
    LOCK();
    uVar19 = *puVar1;
    bVar31 = uVar18 == uVar19;
    if (bVar31) {
      *puVar1 = uVar18 + 1;
      uVar19 = uVar18;
    }
    UNLOCK();
  } while (!bVar31);
  lVar23 = *(longlong *)((longlong)alStackX_8 + lVar20 + 8);
  plVar9 = *(longlong **)((longlong)alStackX_8 + lVar20);
  *(undefined8 *)((longlong)alStackX_8 + lVar20 + 0x18) = param_4;
  uVar3 = *(undefined4 *)(lVar23 + 0x4c);
  uVar4 = *(undefined4 *)(lVar23 + 0x3c);
  uVar5 = *(undefined4 *)(lVar23 + 0x40);
  uVar6 = *(undefined4 *)(lVar23 + 0x48);
  uVar7 = *(undefined4 *)(lVar23 + 0x50);
  uVar8 = *(undefined4 *)(lVar23 + 0x54);
  *(int *)(&stack0x00000028 + lVar20) = POPCOUNT(*(undefined4 *)(lVar23 + 0x44));
  lVar24 = *plVar9;
  *(int *)(&stack0x0000002c + lVar20) = POPCOUNT(uVar3);
  pcVar10 = *(code **)(lVar24 + 8);
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140169115;
  uVar16 = (*pcVar10)(plVar9);
  (&stack0xffffffffffffffef)[lVar20] = uVar16;
  pcVar10 = *(code **)(*plVar9 + 0x10);
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140169123;
  uVar16 = (*pcVar10)(plVar9);
  (&stack0xffffffffffffffee)[lVar20] = uVar16;
  if (*(uint *)(lVar23 + 0x34) < 4) {
    iVar30 = POPCOUNT(uVar8) + POPCOUNT(uVar7) + *(int *)(&stack0x0000002c + lVar20) +
             POPCOUNT(uVar6) + *(int *)(&stack0x00000028 + lVar20) +
             POPCOUNT(uVar5) + POPCOUNT(uVar4);
    switch(*(uint *)(lVar23 + 0x34)) {
    case 0:
      lVar23 = *(longlong *)((longlong)alStackX_8 + lVar20 + 8);
      lVar24 = *(longlong *)((longlong)alStackX_8 + lVar20 + 0x10);
      piVar12 = *(int **)((longlong)alStackX_8 + lVar20 + 0x18);
      plVar9 = *(longlong **)((longlong)alStackX_8 + lVar20);
      uVar14 = *(undefined8 *)(lVar23 + 0x28);
      *(undefined8 *)(&stack0xfffffffffffffff0 + lVar20) = *(undefined8 *)(lVar23 + 0x20);
      *(undefined8 *)(&stack0xfffffffffffffff8 + lVar20) = uVar14;
      plVar28 = *(longlong **)(lVar24 + 0x10);
      *(undefined8 *)(&stack0x00000040 + lVar20) =
           *(undefined8 *)(&stack0xfffffffffffffff0 + lVar20);
      *(undefined8 *)(&stack0x00000048 + lVar20) =
           *(undefined8 *)(&stack0xfffffffffffffff8 + lVar20);
      *(undefined4 *)(&stack0x000000c0 + lVar20) = 5;
      *(undefined1 **)(&stack0x000000d8 + lVar20) = &stack0x000000e0 + lVar20;
      *(undefined8 *)(&stack0x000000d0 + lVar20) = 0x400;
      lVar24 = *plVar28;
      if (lVar24 != 0) {
        *(undefined4 *)(&stack0x000000d4 + lVar20) = 1;
        *(longlong *)(&stack0x000000e0 + lVar20) = lVar24;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1401691d1;
      lVar24 = FUN_144e38fb0(&stack0x00000040 + lVar20);
      if (lVar24 != 0) {
        plVar28 = (longlong *)(&stack0xfffffffffffffff0 + lVar20);
        do {
          if (((((iVar30 == 0xd1) || ((*(uint *)(lVar24 + 0x54) & *(uint *)(lVar23 + 0x3c)) != 0))
               || ((*(uint *)(lVar24 + 0x58) & *(uint *)(lVar23 + 0x40)) != 0)) ||
              (((*(uint *)(lVar24 + 0x5c) & *(uint *)(lVar23 + 0x44)) != 0 ||
               ((*(uint *)(lVar24 + 0x60) & *(uint *)(lVar23 + 0x48)) != 0)))) ||
             (((*(uint *)(lVar24 + 100) & *(uint *)(lVar23 + 0x4c)) != 0 ||
              (((*(uint *)(lVar24 + 0x68) & *(uint *)(lVar23 + 0x50)) != 0 ||
               ((*(uint *)(lVar24 + 0x6c) & *(uint *)(lVar23 + 0x54)) != 0)))))) {
            if ((&stack0xffffffffffffffef)[lVar20] != '\0') {
              pcVar10 = *(code **)(*plVar9 + 0x18);
              *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14016924b;
              cVar15 = (*pcVar10)(plVar9,lVar24);
              if (cVar15 == '\0') goto code_r0x000140169293;
            }
            plVar25 = *(longlong **)(lVar24 + 0x18);
            if (plVar25 != (longlong *)0x0) {
              pcVar10 = *(code **)(*plVar25 + 0x40);
              *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140169261;
              cVar15 = (*pcVar10)(plVar25,plVar28);
              if (cVar15 != '\0') {
                if ((&stack0xffffffffffffffee)[lVar20] != '\0') {
                  pcVar10 = *(code **)(*plVar9 + 0x20);
                  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140169278;
                  cVar15 = (*pcVar10)(plVar9,lVar24);
                  if (cVar15 == '\0') goto code_r0x000140169293;
                }
                *piVar12 = *piVar12 + 1;
                pcVar10 = *(code **)(*plVar9 + 0x28);
                *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14016928b;
                cVar15 = (*pcVar10)(plVar9,lVar24);
                if (cVar15 != '\0') goto code_r0x000140169806;
              }
            }
          }
code_r0x000140169293:
          *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14016929b;
          lVar24 = FUN_144e38fb0(&stack0x00000040 + lVar20);
        } while (lVar24 != 0);
      }
      break;
    case 1:
      lVar23 = *(longlong *)((longlong)alStackX_8 + lVar20 + 8);
      lVar24 = *(longlong *)((longlong)alStackX_8 + lVar20 + 0x10);
      piVar12 = *(int **)((longlong)alStackX_8 + lVar20 + 0x18);
      plVar9 = *(longlong **)((longlong)alStackX_8 + lVar20);
      uVar14 = *(undefined8 *)(lVar23 + 0x28);
      *(undefined8 *)(&stack0xfffffffffffffff0 + lVar20) = *(undefined8 *)(lVar23 + 0x20);
      *(undefined8 *)(&stack0xfffffffffffffff8 + lVar20) = uVar14;
      fVar34 = *(float *)(lVar23 + 0x30);
      plVar28 = *(longlong **)(lVar24 + 0x10);
      *(undefined8 *)(&stack0x00000040 + lVar20) =
           *(undefined8 *)(&stack0xfffffffffffffff0 + lVar20);
      *(undefined8 *)(&stack0x00000048 + lVar20) =
           *(undefined8 *)(&stack0xfffffffffffffff8 + lVar20);
      *(float *)(&stack0x00000050 + lVar20) = fVar34;
      *(float *)(&stack0x00000054 + lVar20) = fVar34;
      *(float *)(&stack0x00000058 + lVar20) = fVar34;
      *(float *)(&stack0x0000005c + lVar20) = fVar34;
      *(undefined4 *)(&stack0x000000c0 + lVar20) = 0;
      *(undefined1 **)(&stack0x000000d8 + lVar20) = &stack0x000000e0 + lVar20;
      *(undefined8 *)(&stack0x000000d0 + lVar20) = 0x400;
      lVar24 = *plVar28;
      if (lVar24 != 0) {
        *(undefined4 *)(&stack0x000000d4 + lVar20) = 1;
        *(longlong *)(&stack0x000000e0 + lVar20) = lVar24;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1401696a0;
      lVar24 = FUN_144e38fb0(&stack0x00000040 + lVar20);
      if (lVar24 != 0) {
        fVar34 = fVar34 * fVar34;
        auVar36 = ZEXT1264(ZEXT812(0));
        plVar28 = (longlong *)(&stack0x00000040 + lVar20);
        do {
          if (((((iVar30 == 0xd1) || ((*(uint *)(lVar24 + 0x54) & *(uint *)(lVar23 + 0x3c)) != 0))
               || ((*(uint *)(lVar24 + 0x58) & *(uint *)(lVar23 + 0x40)) != 0)) ||
              ((((*(uint *)(lVar24 + 0x5c) & *(uint *)(lVar23 + 0x44)) != 0 ||
                ((*(uint *)(lVar24 + 0x60) & *(uint *)(lVar23 + 0x48)) != 0)) ||
               (((*(uint *)(lVar24 + 100) & *(uint *)(lVar23 + 0x4c)) != 0 ||
                (((*(uint *)(lVar24 + 0x68) & *(uint *)(lVar23 + 0x50)) != 0 ||
                 ((*(uint *)(lVar24 + 0x6c) & *(uint *)(lVar23 + 0x54)) != 0)))))))) &&
             (plVar25 = *(longlong **)(lVar24 + 0x18), plVar25 != (longlong *)0x0)) {
            if ((&stack0xffffffffffffffef)[lVar20] != '\0') {
              pcVar10 = *(code **)(*plVar9 + 0x18);
              *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140169737;
              cVar15 = (*pcVar10)(plVar9,lVar24);
              if (cVar15 == '\0') goto code_r0x0001401697a0;
              plVar25 = *(longlong **)(lVar24 + 0x18);
            }
            pcVar10 = *(code **)(*plVar25 + 0x68);
            *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14016974e;
            cVar15 = (*pcVar10)(plVar25,&stack0xfffffffffffffff0 + lVar20,&stack0x00000030 + lVar20)
            ;
            if (cVar15 != '\0') {
              auVar35 = vsubps_avx(*(undefined1 (*) [16])(&stack0x00000030 + lVar20),
                                   *(undefined1 (*) [16])(&stack0xfffffffffffffff0 + lVar20));
              auVar33._0_4_ = auVar35._0_4_ * auVar35._0_4_;
              auVar33._4_4_ = auVar35._4_4_ * auVar35._4_4_;
              auVar33._8_4_ = auVar35._8_4_ * auVar35._8_4_;
              auVar33._12_4_ = auVar35._12_4_ * auVar35._12_4_;
              auVar35 = vblendps_avx(auVar33,auVar36._0_16_,8);
              auVar35 = vhaddps_avx(auVar35,auVar35);
              auVar35 = vhaddps_avx(auVar35,auVar35);
              if (auVar35._0_4_ < fVar34) {
                if ((&stack0xffffffffffffffee)[lVar20] != '\0') {
                  pcVar10 = *(code **)(*plVar9 + 0x20);
                  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140169789;
                  cVar15 = (*pcVar10)(plVar9,lVar24);
                  if (cVar15 == '\0') goto code_r0x0001401697a0;
                }
                *piVar12 = *piVar12 + 1;
                pcVar10 = *(code **)(*plVar9 + 0x28);
                *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14016979c;
                cVar15 = (*pcVar10)(plVar9,lVar24);
                if (cVar15 != '\0') goto code_r0x000140169806;
              }
            }
          }
code_r0x0001401697a0:
          *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1401697a8;
          lVar24 = FUN_144e38fb0(plVar28);
        } while (lVar24 != 0);
      }
      break;
    case 2:
      pauVar11 = *(undefined1 (**) [16])((longlong)alStackX_8 + lVar20 + 8);
      puVar29 = &stack0x000000e0 + lVar20;
      piVar12 = *(int **)((longlong)alStackX_8 + lVar20 + 0x18);
      plVar9 = *(longlong **)((longlong)alStackX_8 + lVar20);
      auVar35 = *pauVar11;
      auVar33 = pauVar11[1];
      plVar28 = *(longlong **)(*(longlong *)((longlong)alStackX_8 + lVar20 + 0x10) + 0x10);
      auVar13 = vsubps_avx(auVar33,auVar35);
      auVar32._0_4_ = (auVar33._0_4_ + auVar35._0_4_) * _DAT_145fc6edc;
      auVar32._4_4_ = (auVar33._4_4_ + auVar35._4_4_) * _DAT_145fc6edc;
      auVar32._8_4_ = (auVar33._8_4_ + auVar35._8_4_) * _DAT_145fc6edc;
      auVar32._12_4_ = (auVar33._12_4_ + auVar35._12_4_) * _DAT_145fc6edc;
      auVar35._0_4_ = auVar13._0_4_ * _DAT_145fc6edc;
      auVar35._4_4_ = auVar13._4_4_ * _DAT_145fc6edc;
      auVar35._8_4_ = auVar13._8_4_ * _DAT_145fc6edc;
      auVar35._12_4_ = auVar13._12_4_ * _DAT_145fc6edc;
      *(undefined1 (*) [16])(&stack0x00000040 + lVar20) = auVar32;
      *(undefined1 (*) [16])(&stack0x00000050 + lVar20) = auVar35;
      *(undefined4 *)(&stack0x000000c0 + lVar20) = 6;
      *(undefined1 **)(&stack0x000000d8 + lVar20) = puVar29;
      *(undefined8 *)(&stack0x000000d0 + lVar20) = 0x400;
      lVar23 = *plVar28;
      if (lVar23 != 0) {
        *(undefined4 *)(&stack0x000000d4 + lVar20) = 1;
        *(longlong *)(&stack0x000000e0 + lVar20) = lVar23;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14016933e;
      lVar23 = FUN_144e38fb0(&stack0x00000040 + lVar20);
      if (lVar23 != 0) {
        plVar28 = (longlong *)(&stack0x00000040 + lVar20);
        do {
          if ((((iVar30 == 0xd1) || ((*(uint *)(lVar23 + 0x54) & *(uint *)(pauVar11[3] + 0xc)) != 0)
               ) || ((*(uint *)(lVar23 + 0x58) & *(uint *)pauVar11[4]) != 0)) ||
             ((((*(uint *)(lVar23 + 0x5c) & *(uint *)(pauVar11[4] + 4)) != 0 ||
               ((*(uint *)(lVar23 + 0x60) & *(uint *)(pauVar11[4] + 8)) != 0)) ||
              (((*(uint *)(lVar23 + 100) & *(uint *)(pauVar11[4] + 0xc)) != 0 ||
               (((*(uint *)(lVar23 + 0x68) & *(uint *)pauVar11[5]) != 0 ||
                ((*(uint *)(lVar23 + 0x6c) & *(uint *)(pauVar11[5] + 4)) != 0)))))))) {
            if ((&stack0xffffffffffffffef)[lVar20] != '\0') {
              pcVar10 = *(code **)(*plVar9 + 0x18);
              *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1401693ba;
              cVar15 = (*pcVar10)(plVar9,lVar23);
              if (cVar15 == '\0') goto code_r0x0001401693ec;
            }
            if ((&stack0xffffffffffffffee)[lVar20] != '\0') {
              pcVar10 = *(code **)(*plVar9 + 0x20);
              *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1401693d1;
              cVar15 = (*pcVar10)(plVar9,lVar23);
              if (cVar15 == '\0') goto code_r0x0001401693ec;
            }
            *piVar12 = *piVar12 + 1;
            pcVar10 = *(code **)(*plVar9 + 0x28);
            *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1401693e4;
            cVar15 = (*pcVar10)(plVar9,lVar23);
            if (cVar15 != '\0') {
              *(undefined4 *)(&stack0x000000d4 + lVar20) = 0;
              puVar26 = *(undefined1 **)(&stack0x000000d8 + lVar20);
              if (puVar29 != puVar26) goto code_r0x000140169851;
              goto code_r0x000140169840;
            }
          }
code_r0x0001401693ec:
          *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1401693f4;
          lVar23 = FUN_144e38fb0(plVar28);
        } while (lVar23 != 0);
      }
      *(undefined4 *)(&stack0x000000d4 + lVar20) = 0;
      puVar26 = *(undefined1 **)(&stack0x000000d8 + lVar20);
      if (puVar29 == puVar26) goto LAB_1401697d4;
      goto code_r0x000140169845;
    case 3:
      pauVar11 = *(undefined1 (**) [16])((longlong)alStackX_8 + lVar20 + 8);
      lVar23 = *(longlong *)((longlong)alStackX_8 + lVar20 + 0x10);
      piVar12 = *(int **)((longlong)alStackX_8 + lVar20 + 0x18);
      plVar9 = *(longlong **)((longlong)alStackX_8 + lVar20);
      uVar14 = *(undefined8 *)(pauVar11[1] + 8);
      cVar15 = pauVar11[3][8];
      *(undefined8 *)(&stack0xfffffffffffffff0 + lVar20) = *(undefined8 *)pauVar11[1];
      *(undefined8 *)(&stack0xfffffffffffffff8 + lVar20) = uVar14;
      plVar28 = *(longlong **)(lVar23 + 0x10);
      *(undefined1 (*) [16])(&stack0x00000040 + lVar20) = *pauVar11;
      *(undefined8 *)(&stack0x00000050 + lVar20) =
           *(undefined8 *)(&stack0xfffffffffffffff0 + lVar20);
      *(undefined8 *)(&stack0x00000058 + lVar20) =
           *(undefined8 *)(&stack0xfffffffffffffff8 + lVar20);
      *(undefined4 *)(&stack0x000000c0 + lVar20) = 1;
      *(undefined1 **)(&stack0x000000d8 + lVar20) = &stack0x000000e0 + lVar20;
      *(undefined8 *)(&stack0x000000d0 + lVar20) = 0x400;
      lVar23 = *plVar28;
      if (lVar23 != 0) {
        *(undefined4 *)(&stack0x000000d4 + lVar20) = 1;
        *(longlong *)(&stack0x000000e0 + lVar20) = lVar23;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1401694a7;
      lVar23 = FUN_144e38fb0(&stack0x00000040 + lVar20);
      if (lVar23 != 0) {
        auVar36 = ZEXT464(_DAT_145fc6f78);
        do {
          if (((((iVar30 == 0xd1) ||
                ((*(uint *)(lVar23 + 0x54) & *(uint *)(pauVar11[3] + 0xc)) != 0)) ||
               ((*(uint *)(lVar23 + 0x58) & *(uint *)pauVar11[4]) != 0)) ||
              (((*(uint *)(lVar23 + 0x5c) & *(uint *)(pauVar11[4] + 4)) != 0 ||
               ((*(uint *)(lVar23 + 0x60) & *(uint *)(pauVar11[4] + 8)) != 0)))) ||
             (((*(uint *)(lVar23 + 100) & *(uint *)(pauVar11[4] + 0xc)) != 0 ||
              (((*(uint *)(lVar23 + 0x68) & *(uint *)pauVar11[5]) != 0 ||
               ((*(uint *)(lVar23 + 0x6c) & *(uint *)(pauVar11[5] + 4)) != 0)))))) {
            if ((&stack0xffffffffffffffef)[lVar20] != '\0') {
              pcVar10 = *(code **)(*plVar9 + 0x18);
              *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140169527;
              cVar17 = (*pcVar10)(plVar9,lVar23);
              if (cVar17 == '\0') goto code_r0x0001401695ff;
            }
            plVar28 = *(longlong **)(lVar23 + 0x18);
            if (plVar28 != (longlong *)0x0) {
              *(undefined4 *)(&stack0x00000030 + lVar20) = 0x3f800000;
              pcVar10 = *(code **)(*plVar28 + 0x40);
              *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140169551;
              cVar17 = (*pcVar10)(plVar28,pauVar11);
              if (cVar15 == '\0') {
                if (cVar17 == '\0') {
                  pcVar10 = *(code **)(*plVar28 + 0x40);
                  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x140169576;
                  cVar17 = (*pcVar10)(plVar28,&stack0xfffffffffffffff0 + lVar20);
                  if (cVar17 == '\0') {
                    lVar24 = *plVar28;
                    puVar29 = (undefined1 *)0x0;
                    goto code_r0x0001401695a0;
                  }
                }
              }
              else if (cVar17 == '\0') {
                lVar24 = *plVar28;
                puVar29 = &stack0x00000030 + lVar20;
code_r0x0001401695a0:
                pcVar10 = *(code **)(lVar24 + 0x78);
                *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1401695a3;
                cVar17 = (*pcVar10)(plVar28,pauVar11,&stack0xfffffffffffffff0 + lVar20,puVar29);
                if (cVar17 == '\0') goto code_r0x0001401695ff;
              }
              else {
                *(undefined4 *)(&stack0x00000030 + lVar20) = 0;
              }
              if ((&stack0xffffffffffffffee)[lVar20] != '\0') {
                pcVar10 = *(code **)(*plVar9 + 0x20);
                *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1401695ba;
                cVar17 = (*pcVar10)(plVar9,lVar23);
                if (cVar17 == '\0') goto code_r0x0001401695ff;
              }
              *piVar12 = *piVar12 + 1;
              pcVar10 = *(code **)(*plVar9 + 0x28);
              *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1401695cd;
              cVar17 = (*pcVar10)(plVar9,lVar23);
              if (cVar17 != '\0') goto code_r0x000140169806;
              if (cVar15 != '\0') {
                auVar35 = *pauVar11;
                auVar33 = vmaxss_avx(auVar36._0_16_,ZEXT416(*(uint *)(&stack0x00000030 + lVar20)));
                auVar13 = vsubps_avx(*(undefined1 (*) [16])(&stack0xfffffffffffffff0 + lVar20),
                                     auVar35);
                fVar34 = auVar33._0_4_;
                *(float *)(&stack0xfffffffffffffff0 + lVar20) =
                     auVar13._0_4_ * fVar34 + auVar35._0_4_;
                *(float *)(&stack0xfffffffffffffff4 + lVar20) =
                     auVar13._4_4_ * fVar34 + auVar35._4_4_;
                *(float *)(&stack0xfffffffffffffff8 + lVar20) =
                     auVar13._8_4_ * fVar34 + auVar35._8_4_;
                *(float *)(&stack0xfffffffffffffffc + lVar20) =
                     auVar13._12_4_ * fVar34 + auVar35._12_4_;
              }
            }
          }
code_r0x0001401695ff:
          *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14016960c;
          lVar23 = FUN_144e38fb0(&stack0x00000040 + lVar20);
        } while (lVar23 != 0);
      }
    }
    *(undefined4 *)(&stack0x000000d4 + lVar20) = 0;
    puVar26 = *(undefined1 **)(&stack0x000000d8 + lVar20);
    if (&stack0x000000e0 + lVar20 != puVar26) {
code_r0x000140169845:
      if (puVar26 != (undefined1 *)0x0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14016984f;
        func_0x000144d9c130();
      }
    }
  }
LAB_1401697d4:
  uVar22 = 0;
code_r0x0001401697d6:
  *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x1401697de;
  FUN_140323580(puVar1);
  return uVar22 & 0xffffffff;
code_r0x000140169806:
  *(undefined4 *)(&stack0x000000d4 + lVar20) = 0;
  puVar26 = *(undefined1 **)(&stack0x000000d8 + lVar20);
  if (&stack0x000000e0 + lVar20 != puVar26) {
code_r0x000140169851:
    if (puVar26 != (undefined1 *)0x0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar20) = 0x14016985b;
      func_0x000144d9c130();
    }
  }
code_r0x000140169840:
  uVar22 = CONCAT71((int7)((ulonglong)plVar28 >> 8),1);
  goto code_r0x0001401697d6;
}

