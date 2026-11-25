// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010d6a0  size: 619 bytes
// Name:    FUN_14010d6a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010d6a0(longlong param_1,uint param_2)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  fVar13 = _DAT_145fc6f08;
  fVar12 = _DAT_145fc6ed8;
  if (0 < (int)param_2) {
    lVar1 = param_1 + 0x10;
    lVar14 = 0;
    auVar16._0_12_ = ZEXT812(0);
    auVar16._12_4_ = 0;
    do {
      uVar15 = *(uint *)(param_1 + 0x810 + lVar14);
      if ((uVar15 & 1) != 0) {
        iVar3 = *(int *)(param_1 + 4);
        auVar4 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 0x510 + lVar14 * 4)),
                               ZEXT416(*(uint *)(param_1 + 0x610 + lVar14 * 4)),0x10);
        auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(param_1 + 0x710 + lVar14 * 4)),0x20);
        fVar2 = auVar4._0_4_;
        auVar21._0_4_ = fVar2 * fVar2;
        fVar6 = auVar4._4_4_;
        auVar21._4_4_ = fVar6 * fVar6;
        fVar8 = auVar4._8_4_;
        auVar21._8_4_ = fVar8 * fVar8;
        fVar10 = auVar4._12_4_;
        auVar21._12_4_ = fVar10 * fVar10;
        auVar4 = vblendps_avx(auVar21,auVar16,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar17 = vrsqrtps_avx(auVar4);
        fVar5 = auVar17._0_4_;
        fVar7 = auVar17._4_4_;
        fVar9 = auVar17._8_4_;
        fVar11 = auVar17._12_4_;
        auVar17._0_4_ = ((fVar13 * fVar5 * fVar5 * auVar4._0_4_ - fVar13) * fVar5 + fVar5) * fVar2;
        auVar17._4_4_ = ((fVar13 * fVar7 * fVar7 * auVar4._4_4_ - fVar13) * fVar7 + fVar7) * fVar6;
        auVar17._8_4_ = ((fVar13 * fVar9 * fVar9 * auVar4._8_4_ - fVar13) * fVar9 + fVar9) * fVar8;
        auVar17._12_4_ =
             ((fVar13 * fVar11 * fVar11 * auVar4._12_4_ - fVar13) * fVar11 + fVar11) * fVar10;
        fVar2 = *(float *)(param_1 + 0x410 + lVar14 * 4);
        *(int *)(param_1 + 4) = iVar3 + 1;
        auVar4 = vinsertps_avx(auVar17,ZEXT416((uint)(fVar12 / fVar2)),0x30);
        *(undefined1 (*) [16])(lVar1 + (longlong)iVar3 * 0x10) = auVar4;
        uVar15 = *(uint *)(param_1 + 0x810 + lVar14);
      }
      if ((uVar15 & 2) != 0) {
        iVar3 = *(int *)(param_1 + 4);
        auVar4 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 0x514 + lVar14 * 4)),
                               ZEXT416(*(uint *)(param_1 + 0x614 + lVar14 * 4)),0x10);
        auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(param_1 + 0x714 + lVar14 * 4)),0x20);
        fVar2 = auVar4._0_4_;
        auVar22._0_4_ = fVar2 * fVar2;
        fVar6 = auVar4._4_4_;
        auVar22._4_4_ = fVar6 * fVar6;
        fVar8 = auVar4._8_4_;
        auVar22._8_4_ = fVar8 * fVar8;
        fVar10 = auVar4._12_4_;
        auVar22._12_4_ = fVar10 * fVar10;
        auVar4 = vblendps_avx(auVar22,auVar16,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar17 = vrsqrtps_avx(auVar4);
        fVar5 = auVar17._0_4_;
        fVar7 = auVar17._4_4_;
        fVar9 = auVar17._8_4_;
        fVar11 = auVar17._12_4_;
        auVar18._0_4_ = ((fVar13 * fVar5 * fVar5 * auVar4._0_4_ - fVar13) * fVar5 + fVar5) * fVar2;
        auVar18._4_4_ = ((fVar13 * fVar7 * fVar7 * auVar4._4_4_ - fVar13) * fVar7 + fVar7) * fVar6;
        auVar18._8_4_ = ((fVar13 * fVar9 * fVar9 * auVar4._8_4_ - fVar13) * fVar9 + fVar9) * fVar8;
        auVar18._12_4_ =
             ((fVar13 * fVar11 * fVar11 * auVar4._12_4_ - fVar13) * fVar11 + fVar11) * fVar10;
        fVar2 = *(float *)(param_1 + 0x414 + lVar14 * 4);
        *(int *)(param_1 + 4) = iVar3 + 1;
        auVar4 = vinsertps_avx(auVar18,ZEXT416((uint)(fVar12 / fVar2)),0x30);
        *(undefined1 (*) [16])(lVar1 + (longlong)iVar3 * 0x10) = auVar4;
        uVar15 = *(uint *)(param_1 + 0x810 + lVar14);
      }
      if ((uVar15 & 4) != 0) {
        iVar3 = *(int *)(param_1 + 4);
        auVar4 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 0x518 + lVar14 * 4)),
                               ZEXT416(*(uint *)(param_1 + 0x618 + lVar14 * 4)),0x10);
        auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(param_1 + 0x718 + lVar14 * 4)),0x20);
        fVar2 = auVar4._0_4_;
        auVar23._0_4_ = fVar2 * fVar2;
        fVar6 = auVar4._4_4_;
        auVar23._4_4_ = fVar6 * fVar6;
        fVar8 = auVar4._8_4_;
        auVar23._8_4_ = fVar8 * fVar8;
        fVar10 = auVar4._12_4_;
        auVar23._12_4_ = fVar10 * fVar10;
        auVar4 = vblendps_avx(auVar23,auVar16,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar17 = vrsqrtps_avx(auVar4);
        fVar5 = auVar17._0_4_;
        fVar7 = auVar17._4_4_;
        fVar9 = auVar17._8_4_;
        fVar11 = auVar17._12_4_;
        auVar19._0_4_ = ((fVar13 * fVar5 * fVar5 * auVar4._0_4_ - fVar13) * fVar5 + fVar5) * fVar2;
        auVar19._4_4_ = ((fVar13 * fVar7 * fVar7 * auVar4._4_4_ - fVar13) * fVar7 + fVar7) * fVar6;
        auVar19._8_4_ = ((fVar13 * fVar9 * fVar9 * auVar4._8_4_ - fVar13) * fVar9 + fVar9) * fVar8;
        auVar19._12_4_ =
             ((fVar13 * fVar11 * fVar11 * auVar4._12_4_ - fVar13) * fVar11 + fVar11) * fVar10;
        fVar2 = *(float *)(param_1 + 0x418 + lVar14 * 4);
        *(int *)(param_1 + 4) = iVar3 + 1;
        auVar4 = vinsertps_avx(auVar19,ZEXT416((uint)(fVar12 / fVar2)),0x30);
        *(undefined1 (*) [16])(lVar1 + (longlong)iVar3 * 0x10) = auVar4;
        uVar15 = *(uint *)(param_1 + 0x810 + lVar14);
      }
      if ((uVar15 & 8) != 0) {
        iVar3 = *(int *)(param_1 + 4);
        auVar4 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 0x51c + lVar14 * 4)),
                               ZEXT416(*(uint *)(param_1 + 0x61c + lVar14 * 4)),0x10);
        auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(param_1 + 0x71c + lVar14 * 4)),0x20);
        fVar2 = auVar4._0_4_;
        auVar24._0_4_ = fVar2 * fVar2;
        fVar6 = auVar4._4_4_;
        auVar24._4_4_ = fVar6 * fVar6;
        fVar8 = auVar4._8_4_;
        auVar24._8_4_ = fVar8 * fVar8;
        fVar10 = auVar4._12_4_;
        auVar24._12_4_ = fVar10 * fVar10;
        auVar4 = vblendps_avx(auVar24,auVar16,8);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar4 = vhaddps_avx(auVar4,auVar4);
        auVar17 = vrsqrtps_avx(auVar4);
        fVar5 = auVar17._0_4_;
        fVar7 = auVar17._4_4_;
        fVar9 = auVar17._8_4_;
        fVar11 = auVar17._12_4_;
        auVar20._0_4_ = ((fVar13 * fVar5 * fVar5 * auVar4._0_4_ - fVar13) * fVar5 + fVar5) * fVar2;
        auVar20._4_4_ = ((fVar13 * fVar7 * fVar7 * auVar4._4_4_ - fVar13) * fVar7 + fVar7) * fVar6;
        auVar20._8_4_ = ((fVar13 * fVar9 * fVar9 * auVar4._8_4_ - fVar13) * fVar9 + fVar9) * fVar8;
        auVar20._12_4_ =
             ((fVar13 * fVar11 * fVar11 * auVar4._12_4_ - fVar13) * fVar11 + fVar11) * fVar10;
        fVar2 = *(float *)(param_1 + 0x41c + lVar14 * 4);
        *(int *)(param_1 + 4) = iVar3 + 1;
        auVar4 = vinsertps_avx(auVar20,ZEXT416((uint)(fVar12 / fVar2)),0x30);
        *(undefined1 (*) [16])(lVar1 + (longlong)iVar3 * 0x10) = auVar4;
      }
      lVar14 = lVar14 + 4;
    } while ((ulonglong)param_2 << 2 != lVar14);
  }
  return;
}

