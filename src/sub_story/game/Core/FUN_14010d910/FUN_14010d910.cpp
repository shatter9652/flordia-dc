// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010d910  size: 1215 bytes
// Name:    FUN_14010d910
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14010dee0, FUN_14010c8d0, FUN_14327e310, FUN_1402eee20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010d910(undefined1 *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined4 param_4,longlong param_5,longlong param_6,undefined4 param_7,
                  uint param_8,undefined1 (*param_9) [16],undefined8 *param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  float fVar18;
  float fVar19;
  undefined1 auVar20 [64];
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  float fVar25;
  undefined1 auVar26 [64];
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  undefined8 in_stack_fffffffffffffe90;
  undefined4 uVar30;
  undefined8 *puVar29;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 auStack_d8 [2];
  undefined4 uStack_d0;
  undefined1 auVar24 [64];
  
  uVar30 = (undefined4)((ulonglong)in_stack_fffffffffffffe90 >> 0x20);
  if (*(longlong *)(param_1 + 0x160) == param_5) {
    auVar13 = vminss_avx(ZEXT416(_DAT_145fc6ed8),
                         ZEXT416((uint)(_DAT_14a943794 / _DAT_14849bfe0 +
                                       *(float *)(param_1 + 0x174))));
    uVar9 = auVar13._0_4_;
  }
  else {
    *(longlong *)(param_1 + 0x160) = param_5;
    auVar13._0_12_ = ZEXT812(0);
    auVar13._12_4_ = 0;
    auVar13 = vcmpss_avx(auVar13,ZEXT416((uint)_DAT_14849bfe0),0);
    uVar9 = auVar13._0_4_ & _DAT_145fc6ed8;
  }
  *(uint *)(param_1 + 0x174) = uVar9;
  *(undefined4 *)(param_1 + 0x168) = param_4;
  *(undefined4 *)(param_1 + 0x16c) = param_7;
  *(uint *)(param_1 + 0x170) = param_8;
  auVar23._0_12_ = ZEXT812(0);
  auVar23._12_4_ = 0;
  auVar24 = ZEXT1664(auVar23);
  auVar20 = ZEXT464(_DAT_146159bfc);
  auVar17 = ZEXT1664(*param_2);
  fVar19 = *(float *)(*param_9 + 0xc);
  uVar21 = *param_10;
  uVar22 = param_10[1];
  auVar10._0_4_ = *(float *)*param_3 * *(float *)*param_3;
  auVar10._4_4_ = *(float *)(*param_3 + 4) * *(float *)(*param_3 + 4);
  auVar10._8_4_ = *(float *)(*param_3 + 8) * *(float *)(*param_3 + 8);
  auVar10._12_4_ = *(float *)(*param_3 + 0xc) * *(float *)(*param_3 + 0xc);
  auVar13 = vblendps_avx(auVar10,auVar23,8);
  auVar13 = vhaddps_avx(auVar13,auVar13);
  auVar10 = vhaddps_avx(auVar13,auVar13);
  auVar13 = vrsqrtss_avx(auVar10,auVar10);
  fVar14 = auVar13._0_4_;
  auVar13 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar10,2);
  fVar18 = _DAT_145fc6f08;
  fVar25 = _DAT_145fc6edc;
  func_0x000145f40560(auVar13._0_8_,
                      ((_DAT_145fc6f08 * fVar14 * fVar14 * auVar10._0_4_ + _DAT_145fc6edc) * fVar14
                      + fVar14) * auVar10._0_4_,0xe8);
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_6 + 0xe8);
  uVar1 = *(undefined8 *)(param_6 + 0xf0);
  uVar2 = *(undefined8 *)(param_6 + 0xf8);
  uVar3 = *(undefined8 *)(param_6 + 0x100);
  uVar4 = *(undefined8 *)(param_6 + 0x108);
  uVar5 = *(undefined8 *)(param_6 + 0x106);
  uVar6 = *(undefined8 *)(param_6 + 0x10e);
  uVar7 = *(undefined8 *)(param_6 + 0x116);
  *(undefined8 *)(param_1 + 0x13e) = *(undefined8 *)(param_6 + 0xfe);
  *(undefined8 *)(param_1 + 0x146) = uVar5;
  *(undefined8 *)(param_1 + 0x14e) = uVar6;
  *(undefined8 *)(param_1 + 0x156) = uVar7;
  *(undefined8 *)(param_1 + 0x130) = uVar1;
  *(undefined8 *)(param_1 + 0x138) = uVar2;
  *(undefined8 *)(param_1 + 0x140) = uVar3;
  *(undefined8 *)(param_1 + 0x148) = uVar4;
  uVar1 = *(undefined8 *)(*param_9 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)*param_9;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  auVar27._0_12_ = ZEXT812(0);
  auVar27._12_4_ = 0;
  vminss_avx(ZEXT416(_DAT_145fc6ed8),ZEXT416((uint)(fVar19 + _DAT_145fc6f48)));
  vcmpss_avx(ZEXT416((uint)(fVar19 + _DAT_145fc6f48)),auVar27,1);
  auVar17 = ZEXT1664(auVar17._0_16_);
  auVar20 = ZEXT1664(auVar20._0_16_);
  auVar24 = ZEXT1664(auVar24._0_16_);
  auVar26 = ZEXT1664(ZEXT416(_DAT_145fc6ed8));
  auVar28 = ZEXT1664(auVar27);
  func_0x00014010ddd0(auStack_d8);
  *(undefined4 *)(param_1 + 0x144) = uStack_d0;
  auVar13 = vsubps_avx(*(undefined1 (*) [16])((longlong)_DAT_14a210d10 * 0x730 + 0x14a94bca0),
                       *param_9);
  auVar11._0_4_ = auVar13._0_4_ * auVar13._0_4_;
  auVar11._4_4_ = auVar13._4_4_ * auVar13._4_4_;
  auVar11._8_4_ = auVar13._8_4_ * auVar13._8_4_;
  auVar11._12_4_ = auVar13._12_4_ * auVar13._12_4_;
  auVar13 = vblendps_avx(auVar11,auVar24._0_16_,8);
  auVar13 = vhaddps_avx(auVar13,auVar13);
  auVar10 = vhaddps_avx(auVar13,auVar13);
  auVar13 = vrsqrtss_avx(auVar10,auVar10);
  fVar19 = auVar13._0_4_;
  auVar13 = vcmpss_avx(auVar20._0_16_,auVar10,2);
  auVar13 = ZEXT416((uint)((float)(auVar13._0_4_ &
                                  (uint)(((fVar18 * fVar19 * fVar19 * auVar10._0_4_ + fVar25) *
                                          fVar19 + fVar19) * auVar10._0_4_)) * _DAT_145fc6f90 +
                          _DAT_146159b44));
  auVar10 = vminss_avx(auVar26._0_16_,auVar13);
  auVar13 = vcmpss_avx(auVar13,auVar28._0_16_,1);
  cVar8 = func_0x0001402ee0d0(&uStack_148,auStack_d8[0],
                              (float)(~auVar13._0_4_ & auVar10._0_4_) * _DAT_14849c000);
  if (cVar8 != '\0') {
    *(undefined8 *)(param_1 + 0x10) = uStack_148;
    *(undefined8 *)(param_1 + 0x18) = uStack_140;
  }
  cVar8 = FUN_1402eee20();
  if (cVar8 != '\0') {
    puVar29 = &uStack_e8;
    uStack_f8 = *(undefined8 *)*param_9;
    uStack_f0 = *(undefined8 *)(*param_9 + 8);
    uStack_e8 = uVar21;
    uStack_e0 = uVar22;
    FUN_14327e310(param_1 + 0x10,param_2,param_6,&uStack_f8,1,puVar29,param_4,
                  *(undefined4 *)((ulonglong)param_8 * 0x2f0 + 0x1484be480));
    uVar30 = (undefined4)((ulonglong)puVar29 >> 0x20);
  }
  if (0.0 < _DAT_14849c008) {
    *(float *)(param_1 + 0x1c) =
         (_DAT_14849c00c - *(float *)(param_1 + 0x1c)) * _DAT_14849c008 + *(float *)(param_1 + 0x1c)
    ;
  }
  auVar13 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 0x10),auVar17._0_16_);
  vmovshdup_avx(auVar13);
  *param_3 = auVar13;
  FUN_14010c8d0(auStack_108);
  auVar15._0_12_ = ZEXT812(0);
  auVar15._12_4_ = 0;
  auVar24 = ZEXT464(*(uint *)(param_1 + 0x1c));
  auVar12._0_4_ = *(float *)*param_3 * *(float *)*param_3;
  auVar12._4_4_ = *(float *)(*param_3 + 4) * *(float *)(*param_3 + 4);
  auVar12._8_4_ = *(float *)(*param_3 + 8) * *(float *)(*param_3 + 8);
  auVar12._12_4_ = *(float *)(*param_3 + 0xc) * *(float *)(*param_3 + 0xc);
  auVar13 = vblendps_avx(auVar12,auVar15,8);
  auVar13 = vhaddps_avx(auVar13,auVar13);
  auVar10 = vhaddps_avx(auVar13,auVar13);
  auVar13 = vrsqrtss_avx(auVar10,auVar10);
  fVar19 = auVar13._0_4_;
  auVar13 = vcmpss_avx(auVar20._0_16_,auVar10,2);
  fVar19 = (float)(auVar13._0_4_ &
                  (uint)(((fVar19 * fVar19 * auVar10._0_4_ * fVar18 + _DAT_145fc6edc) * fVar19 +
                         fVar19) * auVar10._0_4_));
  cVar8 = FUN_1402eee20();
  if (cVar8 != '\0') {
    *(float *)(param_1 + 0x110) = fVar19 - auVar24._0_4_;
  }
  auVar16._0_4_ = auVar24._0_4_ / fVar19;
  auVar16._4_12_ = auVar24._4_12_;
  func_0x00014010de50(param_1 + 0x40,param_6,auVar16._0_8_,_DAT_14849bff8,_DAT_14849bffc,
                      CONCAT44(uVar30,_DAT_14849c004));
  auStack_118 = auVar17._0_16_;
  uStack_128 = *(undefined8 *)(param_1 + 0x10);
  uStack_120 = *(undefined8 *)(param_1 + 0x18);
  FUN_14010dee0(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x174);
  *param_1 = 1;
  return;
}

