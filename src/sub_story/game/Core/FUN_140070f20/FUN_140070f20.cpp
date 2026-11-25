// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140070f20  size: 537 bytes
// Name:    FUN_140070f20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140071140, FUN_144ed2040
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140070f20(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
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
  undefined1 auVar25 [16];
  undefined4 auStack_5c [15];
  
  fVar9 = _DAT_145fc6edc;
  uVar8 = *(undefined8 *)(param_2 + 0x248);
  param_3 = param_3 & 0xff;
  puVar1 = (undefined8 *)(param_1 + (ulonglong)(uint)((int)param_3 << 4));
  *puVar1 = *(undefined8 *)(param_2 + 0x240);
  puVar1[1] = uVar8;
  auVar3 = *(undefined1 (*) [16])(param_2 + 0x210);
  auVar11 = *(undefined1 (*) [16])(param_2 + 0x220);
  auVar14 = *(undefined1 (*) [16])(param_2 + 0x230);
  auVar12 = vblendps_avx(auVar3,auVar11,2);
  auVar12 = vblendps_avx(auVar14,auVar12,3);
  auVar13 = vshufps_avx(auVar12,auVar12,0x49);
  auVar15 = vshufps_avx(auVar12,auVar12,0x92);
  auVar16 = vshufps_avx(auVar12,auVar12,0x24);
  auVar22._0_4_ = auVar15._0_4_ + auVar13._0_4_;
  auVar22._4_4_ = auVar15._4_4_ + auVar13._4_4_;
  auVar22._8_4_ = auVar15._8_4_ + auVar13._8_4_;
  auVar22._12_4_ = auVar15._12_4_ + auVar13._12_4_;
  auVar10._0_4_ = auVar22._0_4_ + auVar16._0_4_;
  auVar10._4_4_ = auVar22._4_4_ + auVar16._4_4_;
  auVar10._8_4_ = auVar22._8_4_ + auVar16._8_4_;
  auVar10._12_4_ = auVar22._12_4_ + auVar16._12_4_;
  auVar12 = vsubps_avx(auVar12,auVar22);
  auVar12 = vblendps_avx(auVar12,auVar10,8);
  auVar20._0_4_ = auVar12._0_4_ + _DAT_145fc6ed8;
  auVar20._4_4_ = auVar12._4_4_ + _DAT_145fc6ed8;
  auVar20._8_4_ = auVar12._8_4_ + _DAT_145fc6ed8;
  auVar20._12_4_ = auVar12._12_4_ + _DAT_145fc6ed8;
  auVar12 = vrsqrtps_avx(auVar20);
  fVar4 = auVar12._0_4_;
  fVar5 = auVar12._4_4_;
  fVar6 = auVar12._8_4_;
  fVar7 = auVar12._12_4_;
  auVar12 = vblendps_avx(auVar11,auVar14,3);
  auVar12 = vshufps_avx(auVar12,auVar3,0x12);
  auVar3 = vblendps_avx(auVar3,auVar11,3);
  auVar3 = vblendps_avx(auVar3,auVar14,2);
  auVar3 = vshufps_avx(auVar3,auVar3,9);
  auVar15._0_4_ = auVar12._0_4_ + auVar3._0_4_;
  auVar15._4_4_ = auVar12._4_4_ + auVar3._4_4_;
  auVar15._8_4_ = auVar12._8_4_ + auVar3._8_4_;
  auVar15._12_4_ = auVar12._12_4_ + auVar3._12_4_;
  auVar14 = vsubps_avx(auVar12,auVar3);
  auVar17._0_4_ = ((-(fVar9 * fVar4 * fVar4 * auVar20._0_4_) + fVar9) * fVar4 + fVar4) * fVar9;
  auVar17._4_4_ = ((-(fVar9 * fVar5 * fVar5 * auVar20._4_4_) + fVar9) * fVar5 + fVar5) * fVar9;
  auVar17._8_4_ = ((-(fVar9 * fVar6 * fVar6 * auVar20._8_4_) + fVar9) * fVar6 + fVar6) * fVar9;
  auVar17._12_4_ = ((-(fVar9 * fVar7 * fVar7 * auVar20._12_4_) + fVar9) * fVar7 + fVar7) * fVar9;
  uVar2 = *(undefined4 *)(param_2 + 0x238);
  auVar25._4_4_ = uVar2;
  auVar25._0_4_ = uVar2;
  auVar25._8_4_ = uVar2;
  auVar25._12_4_ = uVar2;
  auVar3 = vblendps_avx(auVar15,auVar14,1);
  auVar11 = vblendps_avx(auVar15,auVar14,2);
  auVar13 = vshufps_avx(auVar15,auVar14,0xa1);
  auVar14 = vblendps_avx(auVar14,auVar20,8);
  auVar15 = vshufps_avx(auVar3,auVar3,0x18);
  auVar12 = vshufpd_avx(auVar11,auVar11,1);
  auVar3 = vblendps_avx(auVar13,auVar20,4);
  auVar11 = vblendps_avx(auVar15,auVar20,1);
  auVar12 = vblendps_avx(auVar12,auVar20,2);
  auVar21._0_4_ = auVar17._0_4_ * auVar11._0_4_;
  auVar21._4_4_ = auVar17._0_4_ * auVar11._4_4_;
  auVar21._8_4_ = auVar17._0_4_ * auVar11._8_4_;
  auVar21._12_4_ = auVar17._0_4_ * auVar11._12_4_;
  auVar11 = vshufps_avx(auVar17,auVar17,0x55);
  auVar23._0_4_ = auVar11._0_4_ * auVar12._0_4_;
  auVar23._4_4_ = auVar11._4_4_ * auVar12._4_4_;
  auVar23._8_4_ = auVar11._8_4_ * auVar12._8_4_;
  auVar23._12_4_ = auVar11._12_4_ * auVar12._12_4_;
  auVar11 = vshufps_avx(auVar17,auVar17,0xaa);
  auVar12 = vshufps_avx(auVar17,auVar17,0xff);
  auVar16._0_4_ = auVar11._0_4_ * auVar3._0_4_;
  auVar16._4_4_ = auVar11._4_4_ * auVar3._4_4_;
  auVar16._8_4_ = auVar11._8_4_ * auVar3._8_4_;
  auVar16._12_4_ = auVar11._12_4_ * auVar3._12_4_;
  auVar13._0_4_ = auVar12._0_4_ * auVar14._0_4_;
  auVar13._4_4_ = auVar12._4_4_ * auVar14._4_4_;
  auVar13._8_4_ = auVar12._8_4_ * auVar14._8_4_;
  auVar13._12_4_ = auVar12._12_4_ * auVar14._12_4_;
  uVar2 = *(undefined4 *)(param_2 + 0x210);
  auVar18._4_4_ = uVar2;
  auVar18._0_4_ = uVar2;
  auVar18._8_4_ = uVar2;
  auVar18._12_4_ = uVar2;
  uVar2 = *(undefined4 *)(param_2 + 0x224);
  auVar24._4_4_ = uVar2;
  auVar24._0_4_ = uVar2;
  auVar24._8_4_ = uVar2;
  auVar24._12_4_ = uVar2;
  auVar3 = vcmpps_avx(auVar18,auVar24,1);
  auVar11 = vcmpps_avx(auVar18,auVar25,1);
  auVar3 = vblendvps_avx(auVar21,auVar23,auVar3);
  auVar14 = vcmpps_avx(auVar24,auVar25,1);
  auVar19._0_4_ = auVar11._0_4_ & auVar14._0_4_;
  auVar19._4_4_ = auVar11._4_4_ & auVar14._4_4_;
  auVar19._8_4_ = auVar11._8_4_ & auVar14._8_4_;
  auVar19._12_4_ = auVar11._12_4_ & auVar14._12_4_;
  auVar3 = vblendvps_avx(auVar3,auVar16,auVar19);
  auVar11 = vcmpps_avx(ZEXT416(0) << 0x20,auVar10,1);
  auVar11._4_4_ = auVar11._0_4_;
  auVar11._8_4_ = auVar11._0_4_;
  auVar11._12_4_ = auVar11._0_4_;
  auVar3 = vblendvps_avx(auVar3,auVar13,auVar11);
  fVar4 = auVar3._0_4_;
  auVar14._0_4_ = fVar4 * fVar4;
  fVar5 = auVar3._4_4_;
  auVar14._4_4_ = fVar5 * fVar5;
  fVar6 = auVar3._8_4_;
  auVar14._8_4_ = fVar6 * fVar6;
  fVar7 = auVar3._12_4_;
  auVar14._12_4_ = fVar7 * fVar7;
  auVar3 = vhaddps_avx(auVar14,auVar14);
  auVar3 = vhaddps_avx(auVar3,auVar3);
  auVar3 = vrsqrtps_avx(auVar3);
  auVar12._0_4_ = auVar3._0_4_ * _DAT_14615b954 * fVar4;
  auVar12._4_4_ = auVar3._4_4_ * _DAT_14615b954 * fVar5;
  auVar12._8_4_ = auVar3._8_4_ * _DAT_14615b954 * fVar6;
  auVar12._12_4_ = auVar3._12_4_ * _DAT_14615b954 * fVar7;
  auVar3 = vmovshdup_avx(auVar12);
  auVar11 = vshufpd_avx(auVar12,auVar12,1);
  auVar14 = vshufps_avx(auVar12,auVar12,0xff);
  *(ulonglong *)(param_1 + 0x40 + param_3 * 8) =
       (ulonglong)((int)auVar12._0_4_ & 0xffff) |
       (ulonglong)(uint)((int)auVar3._0_4_ << 0x10) |
       (ulonglong)((int)auVar11._0_4_ & 0xffff) << 0x20 |
       (ulonglong)(uint)(int)auVar14._0_4_ << 0x30;
  FUN_144ed2040(param_1,param_2,param_3);
  FUN_140071140(auStack_5c,param_2);
  *(undefined4 *)(param_1 + 0x50 + param_3 * 4) = auStack_5c[0];
  return;
}

