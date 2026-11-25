// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140030e90  size: 603 bytes
// Name:    FUN_140030e90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fb8210
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140030e90(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  uint uVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 aauStack_68 [4] [16];
  
  if (param_3 != 0) {
    FUN_144fb8210(param_2,aauStack_68,0);
    auVar2 = *(undefined1 (*) [16])(param_3 + 0x40);
    auVar11 = *(undefined1 (*) [16])(param_3 + 0x50);
    auVar17 = *(undefined1 (*) [16])(param_3 + 0x60);
    auVar18 = vblendps_avx(auVar2,auVar11,2);
    auVar18 = vblendps_avx(auVar17,auVar18,3);
    auVar12 = vshufps_avx(auVar18,auVar18,0x49);
    auVar13 = vshufps_avx(auVar18,auVar18,0x92);
    auVar14 = vshufps_avx(auVar18,auVar18,0x24);
    auVar21._0_4_ = auVar13._0_4_ + auVar12._0_4_;
    auVar21._4_4_ = auVar13._4_4_ + auVar12._4_4_;
    auVar21._8_4_ = auVar13._8_4_ + auVar12._8_4_;
    auVar21._12_4_ = auVar13._12_4_ + auVar12._12_4_;
    auVar10._0_4_ = auVar21._0_4_ + auVar14._0_4_;
    auVar10._4_4_ = auVar21._4_4_ + auVar14._4_4_;
    auVar10._8_4_ = auVar21._8_4_ + auVar14._8_4_;
    auVar10._12_4_ = auVar21._12_4_ + auVar14._12_4_;
    auVar18 = vsubps_avx(auVar18,auVar21);
    auVar18 = vblendps_avx(auVar18,auVar10,8);
    auVar19._0_4_ = auVar18._0_4_ + _DAT_145fc6ed8;
    auVar19._4_4_ = auVar18._4_4_ + _DAT_145fc6ed8;
    auVar19._8_4_ = auVar18._8_4_ + _DAT_145fc6ed8;
    auVar19._12_4_ = auVar18._12_4_ + _DAT_145fc6ed8;
    auVar18 = vrsqrtps_avx(auVar19);
    fVar9 = auVar18._0_4_;
    fVar4 = auVar18._4_4_;
    fVar5 = auVar18._8_4_;
    fVar6 = auVar18._12_4_;
    auVar18 = vblendps_avx(auVar11,auVar17,3);
    auVar18 = vshufps_avx(auVar18,auVar2,0x12);
    auVar2 = vblendps_avx(auVar2,auVar11,3);
    auVar2 = vblendps_avx(auVar2,auVar17,2);
    auVar2 = vshufps_avx(auVar2,auVar2,9);
    auVar13._0_4_ = auVar18._0_4_ + auVar2._0_4_;
    auVar13._4_4_ = auVar18._4_4_ + auVar2._4_4_;
    auVar13._8_4_ = auVar18._8_4_ + auVar2._8_4_;
    auVar13._12_4_ = auVar18._12_4_ + auVar2._12_4_;
    auVar17 = vsubps_avx(auVar18,auVar2);
    auVar16._0_4_ =
         ((-(_DAT_145fc6edc * fVar9 * fVar9 * auVar19._0_4_) + _DAT_145fc6edc) * fVar9 + fVar9) *
         _DAT_145fc6edc;
    auVar16._4_4_ =
         ((-(_DAT_145fc6edc * fVar4 * fVar4 * auVar19._4_4_) + _DAT_145fc6edc) * fVar4 + fVar4) *
         _DAT_145fc6edc;
    auVar16._8_4_ =
         ((-(_DAT_145fc6edc * fVar5 * fVar5 * auVar19._8_4_) + _DAT_145fc6edc) * fVar5 + fVar5) *
         _DAT_145fc6edc;
    auVar16._12_4_ =
         ((-(_DAT_145fc6edc * fVar6 * fVar6 * auVar19._12_4_) + _DAT_145fc6edc) * fVar6 + fVar6) *
         _DAT_145fc6edc;
    uVar1 = *(undefined4 *)(param_3 + 0x68);
    auVar24._4_4_ = uVar1;
    auVar24._0_4_ = uVar1;
    auVar24._8_4_ = uVar1;
    auVar24._12_4_ = uVar1;
    auVar2 = vblendps_avx(auVar13,auVar17,1);
    auVar11 = vblendps_avx(auVar13,auVar17,2);
    auVar12 = vshufps_avx(auVar13,auVar17,0xa1);
    auVar17 = vblendps_avx(auVar17,auVar19,8);
    auVar13 = vshufps_avx(auVar2,auVar2,0x18);
    auVar18 = vshufpd_avx(auVar11,auVar11,1);
    auVar2 = vblendps_avx(auVar12,auVar19,4);
    auVar11 = vblendps_avx(auVar13,auVar19,1);
    auVar18 = vblendps_avx(auVar18,auVar19,2);
    auVar20._0_4_ = auVar16._0_4_ * auVar11._0_4_;
    auVar20._4_4_ = auVar16._0_4_ * auVar11._4_4_;
    auVar20._8_4_ = auVar16._0_4_ * auVar11._8_4_;
    auVar20._12_4_ = auVar16._0_4_ * auVar11._12_4_;
    auVar11 = vshufps_avx(auVar16,auVar16,0x55);
    auVar22._0_4_ = auVar11._0_4_ * auVar18._0_4_;
    auVar22._4_4_ = auVar11._4_4_ * auVar18._4_4_;
    auVar22._8_4_ = auVar11._8_4_ * auVar18._8_4_;
    auVar22._12_4_ = auVar11._12_4_ * auVar18._12_4_;
    auVar11 = vshufps_avx(auVar16,auVar16,0xaa);
    auVar18 = vshufps_avx(auVar16,auVar16,0xff);
    auVar14._0_4_ = auVar11._0_4_ * auVar2._0_4_;
    auVar14._4_4_ = auVar11._4_4_ * auVar2._4_4_;
    auVar14._8_4_ = auVar11._8_4_ * auVar2._8_4_;
    auVar14._12_4_ = auVar11._12_4_ * auVar2._12_4_;
    auVar12._0_4_ = auVar18._0_4_ * auVar17._0_4_;
    auVar12._4_4_ = auVar18._4_4_ * auVar17._4_4_;
    auVar12._8_4_ = auVar18._8_4_ * auVar17._8_4_;
    auVar12._12_4_ = auVar18._12_4_ * auVar17._12_4_;
    uVar1 = *(undefined4 *)(param_3 + 0x40);
    auVar17._4_4_ = uVar1;
    auVar17._0_4_ = uVar1;
    auVar17._8_4_ = uVar1;
    auVar17._12_4_ = uVar1;
    uVar1 = *(undefined4 *)(param_3 + 0x54);
    auVar23._4_4_ = uVar1;
    auVar23._0_4_ = uVar1;
    auVar23._8_4_ = uVar1;
    auVar23._12_4_ = uVar1;
    auVar2 = vcmpps_avx(auVar17,auVar23,1);
    auVar11 = vcmpps_avx(auVar17,auVar24,1);
    auVar2 = vblendvps_avx(auVar20,auVar22,auVar2);
    auVar17 = vcmpps_avx(auVar23,auVar24,1);
    auVar18._0_4_ = auVar11._0_4_ & auVar17._0_4_;
    auVar18._4_4_ = auVar11._4_4_ & auVar17._4_4_;
    auVar18._8_4_ = auVar11._8_4_ & auVar17._8_4_;
    auVar18._12_4_ = auVar11._12_4_ & auVar17._12_4_;
    auVar2 = vblendvps_avx(auVar2,auVar14,auVar18);
    auVar11 = vcmpps_avx(ZEXT416(0) << 0x20,auVar10,1);
    auVar11._4_4_ = auVar11._0_4_;
    auVar11._8_4_ = auVar11._0_4_;
    auVar11._12_4_ = auVar11._0_4_;
    auVar2 = vblendvps_avx(auVar2,auVar12,auVar11);
    auVar17 = vshufps_avx(auVar2,auVar2,0xff);
    fVar9 = auVar2._0_4_;
    auVar18 = vshufps_avx(auVar2,auVar2,0x55);
    auVar12 = vshufps_avx(auVar2,auVar2,0xaa);
    auVar15._0_4_ = (uint)aauStack_68[0]._0_4_ ^ _DAT_145fc6f10;
    auVar15._4_4_ = (uint)aauStack_68[0]._4_4_ ^ _DAT_145fc6f10;
    auVar15._8_4_ = (uint)aauStack_68[0]._8_4_ ^ _DAT_145fc6f10;
    auVar15._12_4_ = (uint)aauStack_68[0]._12_4_ ^ _DAT_145fc6f10;
    auVar2 = vblendps_avx(auVar15,aauStack_68[0],10);
    auVar13 = vshufps_avx(auVar2,auVar2,0x1b);
    auVar11 = vshufpd_avx(aauStack_68[0],auVar15,1);
    auVar2 = vblendps_avx(auVar15,aauStack_68[0],9);
    auVar2 = vshufps_avx(auVar2,auVar2,0xb1);
    *(float *)(param_1 + 4) =
         -(auVar12._0_4_ * auVar2._0_4_) -
         (auVar18._0_4_ * auVar11._0_4_ +
         (fVar9 * auVar13._0_4_ - auVar17._0_4_ * aauStack_68[0]._0_4_));
    *(float *)((longlong)param_1 + 0x24) =
         -(auVar12._4_4_ * auVar2._4_4_) -
         (auVar18._4_4_ * auVar11._4_4_ +
         (fVar9 * auVar13._4_4_ - auVar17._4_4_ * aauStack_68[0]._4_4_));
    *(float *)(param_1 + 5) =
         -(auVar12._8_4_ * auVar2._8_4_) -
         (auVar18._8_4_ * auVar11._8_4_ +
         (fVar9 * auVar13._8_4_ - auVar17._8_4_ * aauStack_68[0]._8_4_));
    *(float *)((longlong)param_1 + 0x2c) =
         -(auVar12._12_4_ * auVar2._12_4_) -
         (auVar18._12_4_ * auVar11._12_4_ +
         (fVar9 * auVar13._12_4_ - auVar17._12_4_ * aauStack_68[0]._12_4_));
    plVar3 = *(longlong **)((ulonglong)*(byte *)(param_3 + 0x30) * 8 + 0x14abbe7c0);
    uVar8 = (uint)((ulonglong)(param_3 - *plVar3) / (ulonglong)*(uint *)(plVar3 + 1)) & 0x1ffff;
    uVar8 = (*(byte *)(param_3 + 0x30) & 0x1f) << 0x11 | uVar8 |
            (*(uint *)(plVar3[5] + (ulonglong)uVar8 * 4) & 0x7fe0000) << 5;
  }
  else {
    uVar8 = 0x1ffff;
  }
  *(bool *)((longlong)param_1 + 0x34) = param_3 != 0;
  *(uint *)(param_1 + 6) = uVar8;
  if (param_1 != param_2) {
    uVar7 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar7;
    param_1[2] = param_2[2];
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  }
  return;
}

