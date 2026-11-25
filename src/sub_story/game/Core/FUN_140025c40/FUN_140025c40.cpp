// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140025c40  size: 765 bytes
// Name:    FUN_140025c40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14531ecd0, FUN_144e15620
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140025c40(longlong param_1,undefined1 *param_2,undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16])

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar17;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  float fStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  float fStack_9c;
  int aiStack_98 [4];
  undefined1 auStack_88 [72];
  
  uStack_b8 = *(undefined8 *)*param_3;
  uStack_b0 = *(undefined8 *)(*param_3 + 8);
  uStack_c8 = *(undefined8 *)*param_3;
  uStack_c0 = (undefined4)*(undefined8 *)(*param_3 + 8);
  fStack_bc = (float)((ulonglong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  *param_4 = ZEXT816(0) << 0x20;
  lVar10 = *(longlong *)(param_1 + 0x88);
  lVar1 = *(longlong *)(lVar10 + 0x160);
  if (lVar1 == 0) {
    FUN_14531ecd0(**(undefined8 **)(param_1 + 0x10),(*(undefined8 **)(param_1 + 0x10))[1],&uStack_c8
                  ,*(undefined4 *)(param_1 + 0x78));
    lVar10 = *(longlong *)(param_1 + 0x88);
    uVar9 = *(undefined4 *)(param_1 + 0x78);
    uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8);
  }
  else {
    uVar9 = *(undefined4 *)(param_1 + 0x78);
    uVar11 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8);
    FUN_144e15620(aiStack_98,uVar11,uVar9,&uStack_c8,lVar1,0);
    if (aiStack_98[0] == 0) {
      auVar13._0_12_ = ZEXT812(0);
      auVar13._12_4_ = 0;
      *param_4 = auVar13;
      *param_2 = 0;
      uVar11 = *(undefined8 *)(*param_3 + 8);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)*param_3;
      *(undefined8 *)(param_2 + 0x18) = uVar11;
      return;
    }
    FUN_144e15620(&uStack_a8,uVar11,uVar9,&uStack_c8,lVar1,1);
  }
  FUN_144e15620(aiStack_98,uVar11,uVar9,&uStack_b8,*(undefined8 *)(lVar10 + 0x38),0);
  fVar21 = _DAT_145fc6ed8;
  if (aiStack_98[0] == 0) {
    uStack_a8 = *(undefined8 *)*param_3;
    uStack_a0 = (undefined4)*(undefined8 *)(*param_3 + 8);
    fStack_9c = (float)((ulonglong)*(undefined8 *)(*param_3 + 8) >> 0x20);
    FUN_144e15620(auStack_88,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8),
                  *(undefined4 *)(param_1 + 0x78),&uStack_a8,*(undefined8 *)(lVar10 + 0x38),1);
    auVar2._8_4_ = uStack_c0;
    auVar2._0_8_ = uStack_c8;
    auVar2._12_4_ = fStack_bc;
    auVar15 = vshufps_avx(auVar2,auVar2,0xc9);
    auVar2 = vshufps_avx(auVar2,auVar2,0xd2);
    fVar12 = (float)_DAT_146159bc0;
    fVar17 = (float)((ulonglong)_DAT_146159bc0 >> 0x20);
    fVar21 = -(auVar2._0_4_ * _DAT_14614f7f0) + auVar15._0_4_ * fVar12;
    fVar23 = -(auVar2._4_4_ * _UNK_14614f7f4) + auVar15._4_4_ * fVar17;
    fVar24 = -(auVar2._8_4_ * _UNK_14614f7f8) + auVar15._8_4_ * 0.0;
    fVar25 = -(auVar2._12_4_ * _UNK_14614f7fc) + auVar15._12_4_ * 0.0;
    auVar22._0_4_ = fVar21 + fVar21;
    auVar22._4_4_ = fVar23 + fVar23;
    auVar22._8_4_ = fVar24 + fVar24;
    auVar22._12_4_ = fVar25 + fVar25;
    auVar16 = vshufps_avx(auVar22,auVar22,0xd2);
    auVar20 = vshufps_avx(auVar22,auVar22,0xc9);
    auVar13 = *param_3;
    auVar3 = vshufps_avx(auVar13,auVar13,0xc9);
    auVar13 = vshufps_avx(auVar13,auVar13,0xd2);
    fVar21 = -(auVar13._0_4_ * _DAT_14614f7f0) + auVar3._0_4_ * fVar12;
    fVar23 = -(auVar13._4_4_ * _UNK_14614f7f4) + auVar3._4_4_ * fVar17;
    fVar24 = -(auVar13._8_4_ * _UNK_14614f7f8) + auVar3._8_4_ * 0.0;
    fVar25 = -(auVar13._12_4_ * _UNK_14614f7fc) + auVar3._12_4_ * 0.0;
    auVar26._0_4_ = fVar21 + fVar21;
    auVar26._4_4_ = fVar23 + fVar23;
    auVar26._8_4_ = fVar24 + fVar24;
    auVar26._12_4_ = fVar25 + fVar25;
    auVar4 = vshufps_avx(auVar26,auVar26,0xd2);
    auVar5 = vshufps_avx(auVar26,auVar26,0xc9);
    fVar21 = *(float *)(*param_3 + 0xc);
    auVar6._8_4_ = uStack_a0;
    auVar6._0_8_ = uStack_a8;
    auVar6._12_4_ = fStack_9c;
    auVar18 = vshufps_avx(auVar6,auVar6,0xc9);
    auVar6 = vshufps_avx(auVar6,auVar6,0xd2);
    fVar12 = -(auVar6._0_4_ * _DAT_14614f7f0) + auVar18._0_4_ * fVar12;
    fVar17 = -(auVar6._4_4_ * _UNK_14614f7f4) + auVar18._4_4_ * fVar17;
    fVar23 = -(auVar6._8_4_ * _UNK_14614f7f8) + auVar18._8_4_ * 0.0;
    fVar24 = -(auVar6._12_4_ * _UNK_14614f7fc) + auVar18._12_4_ * 0.0;
    auVar14._0_4_ = fVar12 + fVar12;
    auVar14._4_4_ = fVar17 + fVar17;
    auVar14._8_4_ = fVar23 + fVar23;
    auVar14._12_4_ = fVar24 + fVar24;
    auVar7 = vshufps_avx(auVar14,auVar14,0xd2);
    auVar8 = vshufps_avx(auVar14,auVar14,0xc9);
    auVar19._0_12_ = ZEXT812(0);
    auVar19._12_4_ = 0;
    fVar12 = auVar14._0_4_ * fStack_9c + _DAT_145fc6ed8 +
             -(auVar6._0_4_ * auVar8._0_4_) + auVar7._0_4_ * auVar18._0_4_;
    fVar17 = auVar14._4_4_ * fStack_9c + 0.0 +
             -(auVar6._4_4_ * auVar8._4_4_) + auVar7._4_4_ * auVar18._4_4_;
    fVar23 = auVar14._8_4_ * fStack_9c + 0.0 +
             -(auVar6._8_4_ * auVar8._8_4_) + auVar7._8_4_ * auVar18._8_4_;
    fVar24 = auVar14._12_4_ * fStack_9c + 0.0 +
             -(auVar6._12_4_ * auVar8._12_4_) + auVar7._12_4_ * auVar18._12_4_;
    auVar18._0_4_ =
         fVar12 * (auVar22._0_4_ * fStack_bc + _DAT_145fc6ed8 +
                  -(auVar2._0_4_ * auVar20._0_4_) + auVar16._0_4_ * auVar15._0_4_);
    auVar18._4_4_ =
         fVar17 * (auVar22._4_4_ * fStack_bc + 0.0 +
                  -(auVar2._4_4_ * auVar20._4_4_) + auVar16._4_4_ * auVar15._4_4_);
    auVar18._8_4_ =
         fVar23 * (auVar22._8_4_ * fStack_bc + 0.0 +
                  -(auVar2._8_4_ * auVar20._8_4_) + auVar16._8_4_ * auVar15._8_4_);
    auVar18._12_4_ =
         fVar24 * (auVar22._12_4_ * fStack_bc + 0.0 +
                  -(auVar2._12_4_ * auVar20._12_4_) + auVar16._12_4_ * auVar15._12_4_);
    auVar15._0_4_ =
         fVar12 * (auVar26._0_4_ * fVar21 + _DAT_145fc6ed8 +
                  -(auVar13._0_4_ * auVar5._0_4_) + auVar4._0_4_ * auVar3._0_4_);
    auVar15._4_4_ =
         fVar17 * (auVar26._4_4_ * fVar21 + 0.0 +
                  -(auVar13._4_4_ * auVar5._4_4_) + auVar4._4_4_ * auVar3._4_4_);
    auVar15._8_4_ =
         fVar23 * (auVar26._8_4_ * fVar21 + 0.0 +
                  -(auVar13._8_4_ * auVar5._8_4_) + auVar4._8_4_ * auVar3._8_4_);
    auVar15._12_4_ =
         fVar24 * (auVar26._12_4_ * fVar21 + 0.0 +
                  -(auVar13._12_4_ * auVar5._12_4_) + auVar4._12_4_ * auVar3._12_4_);
    auVar20._4_4_ = _DAT_145fc6ed8;
    auVar20._0_4_ = _DAT_145fc6ed8;
    auVar20._8_4_ = _DAT_145fc6ed8;
    auVar20._12_4_ = _DAT_145fc6ed8;
    auVar13 = vblendps_avx(auVar18,auVar19,8);
    auVar15 = vblendps_avx(auVar15,auVar19,8);
    auVar13 = vhaddps_avx(auVar13,auVar13);
    auVar15 = vhaddps_avx(auVar15,auVar15);
    auVar13 = vhaddps_avx(auVar13,auVar13);
    auVar15 = vhaddps_avx(auVar15,auVar15);
    auVar15 = vsubps_avx(auVar13,auVar15);
    auVar2 = vsubps_avx(auVar20,auVar13);
    auVar13 = vrcpps_avx(auVar2);
    fVar21 = auVar13._0_4_;
    fVar12 = auVar13._4_4_;
    fVar17 = auVar13._8_4_;
    fVar23 = auVar13._12_4_;
    auVar16._0_4_ = ((fVar21 * auVar2._0_4_ - _DAT_145fc6ed8) * fVar21 - fVar21) * auVar15._0_4_;
    auVar16._4_4_ = ((fVar12 * auVar2._4_4_ - _DAT_145fc6ed8) * fVar12 - fVar12) * auVar15._4_4_;
    auVar16._8_4_ = ((fVar17 * auVar2._8_4_ - _DAT_145fc6ed8) * fVar17 - fVar17) * auVar15._8_4_;
    auVar16._12_4_ = ((fVar23 * auVar2._12_4_ - _DAT_145fc6ed8) * fVar23 - fVar23) * auVar15._12_4_;
    auVar13 = vmaxps_avx(auVar16,auVar19);
    auVar13 = vminps_avx(auVar13,auVar20);
    *param_4 = auVar13;
    uStack_b8 = *(undefined8 *)*param_3;
    uStack_b0 = *(undefined8 *)(*param_3 + 8);
  }
  else {
    *(float *)*param_4 = _DAT_145fc6ed8;
    *(float *)(*param_4 + 4) = fVar21;
    *(float *)(*param_4 + 8) = fVar21;
    *(float *)(*param_4 + 0xc) = fVar21;
  }
  *(undefined8 *)(param_2 + 0x10) = uStack_b8;
  *(undefined8 *)(param_2 + 0x18) = uStack_b0;
  *param_2 = 1;
  return;
}

