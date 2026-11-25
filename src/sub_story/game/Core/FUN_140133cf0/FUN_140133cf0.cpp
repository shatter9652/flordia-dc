// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140133cf0  size: 695 bytes
// Name:    FUN_140133cf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401e4c00, FUN_144e40a00, FUN_1402e5b80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140133cf0(longlong param_1,uint param_2,ulonglong param_3,undefined1 (*param_4) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar9;
  float fVar10;
  undefined1 auVar7 [16];
  float fVar11;
  undefined1 auVar8 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  float fVar30;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  longlong alStack_b8 [2];
  undefined1 auStack_a8 [16];
  longlong *plStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  uVar5 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  FUN_144e40a00(param_1,&fStack_c8);
  auVar15._0_12_ = ZEXT812(0);
  auVar15._12_4_ = 0;
  _auStack_d8 = *(undefined1 (*) [16])(uVar5 + 0x50);
  auVar27 = ZEXT1664(_auStack_d8);
  auVar12._0_4_ = fStack_c8 * fStack_c8;
  auVar12._4_4_ = fStack_c4 * fStack_c4;
  auVar12._8_4_ = fStack_c0 * fStack_c0;
  auVar12._12_4_ = fStack_bc * fStack_bc;
  auVar12 = vblendps_avx(auVar12,auVar15,8);
  auVar12 = vhaddps_avx(auVar12,auVar12);
  auVar12 = vhaddps_avx(auVar12,auVar12);
  auVar7 = vrsqrtps_avx(auVar12);
  fVar30 = auVar7._0_4_;
  fVar6 = auVar7._4_4_;
  fVar9 = auVar7._8_4_;
  fVar10 = auVar7._12_4_;
  auVar28 = ZEXT1664(CONCAT412(((fVar10 * fVar10 * auVar12._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08)
                                * fVar10 + fVar10) * fStack_bc,
                               CONCAT48(((fVar9 * fVar9 * auVar12._8_4_ * _DAT_145fc6f08 -
                                         _DAT_145fc6f08) * fVar9 + fVar9) * fStack_c0,
                                        CONCAT44(((fVar6 * fVar6 * auVar12._4_4_ * _DAT_145fc6f08 -
                                                  _DAT_145fc6f08) * fVar6 + fVar6) * fStack_c4,
                                                 ((fVar30 * fVar30 * auVar12._0_4_ * _DAT_145fc6f08
                                                  - _DAT_145fc6f08) * fVar30 + fVar30) * fStack_c8))
                              ));
  auVar7._4_4_ = _DAT_145fc6f14;
  auVar7._0_4_ = _DAT_145fc6f14;
  auVar7._8_4_ = _DAT_145fc6f14;
  auVar7._12_4_ = _DAT_145fc6f14;
  auVar12 = vcmpps_avx(auVar7,auVar12,1);
  auVar29 = ZEXT1664(auVar12);
  uStack_e8 = *(undefined8 *)(uVar5 + 0x40);
  uStack_e0 = *(undefined8 *)(uVar5 + 0x48);
  uStack_f8 = *(undefined8 *)(uVar5 + 0x60);
  uStack_f0 = *(undefined8 *)(uVar5 + 0x68);
  fVar30 = *(float *)(uVar5 + 0x68);
  lVar4 = func_0x00014515d910(*(undefined4 *)(uVar5 + 0x9c));
  auVar12 = auVar27._0_16_;
  auVar15 = auVar29._0_16_;
  auVar7 = auVar28._0_16_;
  if (lVar4 != 0) {
    FUN_1401e4c00(lVar4,auStack_d8,&uStack_e8,&uStack_f8,0x7f7fffff);
    auVar12 = auVar27._0_16_;
    auVar15 = auVar29._0_16_;
    auVar7 = auVar28._0_16_;
    fVar30 = (float)uStack_f0;
  }
  auVar16 = ZEXT416(_DAT_145fc6ed8);
  auVar12 = vblendvps_avx(auVar12,auVar7,auVar15);
  fVar6 = _DAT_14614f7f0;
  fVar9 = _UNK_14614f7f4;
  fVar10 = _UNK_14614f7f8;
  fVar11 = _UNK_14614f7fc;
  fVar17 = _DAT_146159bc0;
  fVar19 = _UNK_146159bc4;
  fVar20 = 0.0;
  fVar21 = 0.0;
  if ((fVar30 != 0.0) || (NAN(fVar30))) {
    auVar26._0_12_ = ZEXT812(0);
    auVar26._12_4_ = 0;
    auVar23._0_4_ = (float)uStack_f8 * _DAT_14614f7f0;
    auVar23._4_4_ = uStack_f8._4_4_ * _UNK_14614f7f4;
    auVar23._8_4_ = (float)uStack_f0 * _UNK_14614f7f8;
    auVar23._12_4_ = uStack_f0._4_4_ * _UNK_14614f7fc;
    auVar7 = vblendps_avx(auVar23,auVar26,8);
    auVar7 = vhaddps_avx(auVar7,auVar7);
    auVar7 = vhaddps_avx(auVar7,auVar7);
    if (_DAT_14615d810 <= auVar7._0_4_) {
      auVar16._8_8_ = uStack_e0;
      auVar16._0_8_ = uStack_e8;
      fVar6 = (float)uStack_f8;
      fVar9 = uStack_f8._4_4_;
      fVar10 = (float)uStack_f0;
      fVar11 = uStack_f0._4_4_;
      fVar17 = (float)auStack_d8._0_4_;
      fVar19 = (float)auStack_d8._4_4_;
      fVar20 = fStack_d0;
      fVar21 = fStack_cc;
    }
  }
  fVar30 = auVar12._0_4_;
  auVar24._0_4_ = fVar17 * fVar30;
  fVar1 = auVar12._4_4_;
  auVar24._4_4_ = fVar19 * fVar1;
  fVar2 = auVar12._8_4_;
  auVar24._8_4_ = fVar20 * fVar2;
  fVar3 = auVar12._12_4_;
  auVar24._12_4_ = fVar21 * fVar3;
  auVar22._0_12_ = ZEXT812(0);
  auVar22._12_4_ = 0;
  auVar12 = vblendps_avx(auVar24,auVar22,8);
  auVar12 = vhaddps_avx(auVar12,auVar12);
  auVar7 = vhaddps_avx(auVar12,auVar12);
  auVar25._0_4_ = auVar16._0_4_ * fVar30;
  auVar25._4_4_ = auVar16._4_4_ * fVar1;
  auVar25._8_4_ = auVar16._8_4_ * fVar2;
  auVar25._12_4_ = auVar16._12_4_ * fVar3;
  auVar12 = vblendps_avx(auVar25,auVar22,8);
  auVar12 = vhaddps_avx(auVar12,auVar12);
  auVar12 = vhaddps_avx(auVar12,auVar12);
  if ((char)(param_3 & 0xffffffff) == '\0') {
    auVar18._0_4_ = fVar6 * fStack_c8;
    auVar18._4_4_ = fVar9 * fStack_c4;
    auVar18._8_4_ = fVar10 * fStack_c0;
    auVar18._12_4_ = fVar11 * fStack_bc;
    auVar15 = vblendps_avx(auVar18,auVar22,8);
    auVar15 = vhaddps_avx(auVar15,auVar15);
    auVar15 = vhaddps_avx(auVar15,auVar15);
    fVar6 = auVar15._0_4_ * fVar6;
    fVar9 = auVar15._4_4_ * fVar9;
    fVar10 = auVar15._8_4_ * fVar10;
    fVar11 = auVar15._12_4_ * fVar11;
  }
  else {
    auVar13._0_4_ = fVar6 * fVar30;
    auVar13._4_4_ = fVar9 * fVar1;
    auVar13._8_4_ = fVar10 * fVar2;
    auVar13._12_4_ = fVar11 * fVar3;
    auVar15 = vblendps_avx(auVar13,auVar22,8);
    auVar15 = vhaddps_avx(auVar15,auVar15);
    auVar15 = vhaddps_avx(auVar15,auVar15);
    fVar6 = fVar6 * (float)(param_2 & _DAT_145fc6f4c) * auVar15._0_4_;
    fVar9 = fVar9 * (float)(param_2 & _DAT_145fc6f4c) * auVar15._4_4_;
    fVar10 = fVar10 * (float)(param_2 & _DAT_145fc6f4c) * auVar15._8_4_;
    fVar11 = fVar11 * (float)(param_2 & _DAT_145fc6f4c) * auVar15._12_4_;
  }
  auStack_a8._0_4_ =
       fVar6 + (auVar16._0_4_ * auVar12._0_4_ + auVar7._0_4_ * fVar17) *
               (float)(param_2 & _DAT_145fc6f4c);
  auStack_a8._4_4_ =
       fVar9 + (auVar16._4_4_ * auVar12._4_4_ + auVar7._4_4_ * fVar19) *
               (float)(param_2 & _DAT_145fc6f4c);
  auStack_a8._8_4_ =
       fVar10 + (auVar16._8_4_ * auVar12._8_4_ + auVar7._8_4_ * fVar20) *
                (float)(param_2 & _DAT_145fc6f4c);
  auStack_a8._12_4_ =
       fVar11 + (auVar16._12_4_ * auVar12._12_4_ + auVar7._12_4_ * fVar21) *
                (float)(param_2 & _DAT_145fc6f4c);
  auVar27 = ZEXT1664(auStack_a8);
  auVar14._0_4_ = fStack_c8 * fStack_c8;
  auVar14._4_4_ = fStack_c4 * fStack_c4;
  auVar14._8_4_ = fStack_c0 * fStack_c0;
  auVar14._12_4_ = fStack_bc * fStack_bc;
  auVar8._0_4_ = auStack_a8._0_4_ * auStack_a8._0_4_;
  auVar8._4_4_ = auStack_a8._4_4_ * auStack_a8._4_4_;
  auVar8._8_4_ = auStack_a8._8_4_ * auStack_a8._8_4_;
  auVar8._12_4_ = auStack_a8._12_4_ * auStack_a8._12_4_;
  auVar12 = vblendps_avx(auVar14,ZEXT816(0) << 0x20,8);
  auVar7 = vhaddps_avx(auVar12,auVar12);
  auVar12 = vblendps_avx(auVar8,ZEXT816(0) << 0x20,8);
  auVar12 = vhaddps_avx(auVar12,auVar12);
  auVar7 = vhaddps_avx(auVar7,auVar7);
  auVar12 = vhaddps_avx(auVar12,auVar12);
  if (auVar12._0_4_ < auVar7._0_4_) {
    plStack_98 = alStack_b8;
    pcStack_90 = FUN_142e16150;
    puStack_88 = &UNK_1403a85f0;
    puStack_80 = &SUB_140004380;
    alStack_b8[0] = param_1;
    FUN_1402e5b80(4);
    *param_4 = auVar27._0_16_;
  }
  return CONCAT71((int7)((param_3 & 0xffffffff) >> 8),auVar12._0_4_ < auVar7._0_4_);
}

