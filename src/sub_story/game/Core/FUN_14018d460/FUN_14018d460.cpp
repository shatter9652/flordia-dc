// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018d460  size: 562 bytes
// Name:    FUN_14018d460
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140897f10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14018d460(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [16];
  float fVar7;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar8 [16];
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
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  lVar4 = func_0x000144dd26c0(*(undefined8 *)(param_1 + 0x40));
  lVar4 = FUN_140897f10(*(undefined8 *)(lVar4 + 0x38));
  if (lVar4 != 0) {
    fVar7 = *(float *)(lVar4 + 0x90);
    fVar9 = *(float *)(lVar4 + 0x94);
    fVar10 = *(float *)(lVar4 + 0x98);
    fVar11 = *(float *)(lVar4 + 0x9c);
    lVar5 = func_0x000144dd26c0(*(undefined8 *)(param_1 + 0x40));
    uVar2 = *(uint *)(param_1 + 0x74);
    if ((ulonglong)uVar2 != 0) {
      auVar15 = *(undefined1 (*) [16])(lVar5 + 0x70);
      auVar26 = *(undefined1 (*) [16])(lVar4 + 0x60);
      auVar20 = *(undefined1 (*) [16])(lVar4 + 0x70);
      auVar12 = vpunpckhwd_avx(auVar15,auVar15);
      auVar12 = vpsrad_avx(auVar12,0x10);
      auVar12 = vcvtdq2ps_avx(auVar12);
      auVar12 = vshufpd_avx(auVar12,auVar12,3);
      fVar7 = fVar7 + (-(auVar12._0_4_ * _DAT_146159c90) - auVar15._0_4_);
      fVar9 = fVar9 + (-(auVar12._4_4_ * _UNK_146159c94) - auVar15._4_4_);
      fVar10 = fVar10 + (-(auVar12._8_4_ * _UNK_146159c98) - auVar15._8_4_);
      fVar11 = fVar11 + (-(auVar12._12_4_ * _UNK_146159c9c) - auVar15._12_4_);
      auVar15._0_4_ = fVar7 * *(float *)(lVar5 + 0x40);
      auVar15._4_4_ = fVar9 * *(float *)(lVar5 + 0x44);
      auVar15._8_4_ = fVar10 * *(float *)(lVar5 + 0x48);
      auVar15._12_4_ = fVar11 * *(float *)(lVar5 + 0x4c);
      auVar12._0_4_ = fVar7 * *(float *)(lVar5 + 0x50);
      auVar12._4_4_ = fVar9 * *(float *)(lVar5 + 0x54);
      auVar12._8_4_ = fVar10 * *(float *)(lVar5 + 0x58);
      auVar12._12_4_ = fVar11 * *(float *)(lVar5 + 0x5c);
      auVar8._0_4_ = fVar7 * *(float *)(lVar5 + 0x60);
      auVar8._4_4_ = fVar9 * *(float *)(lVar5 + 100);
      auVar8._8_4_ = fVar10 * *(float *)(lVar5 + 0x68);
      auVar8._12_4_ = fVar11 * *(float *)(lVar5 + 0x6c);
      auVar13 = ZEXT416(0) << 0x20;
      pauVar6 = (undefined1 (*) [16])(param_1 + 0x80);
      auVar15 = vblendps_avx(auVar15,auVar13,8);
      auVar12 = vblendps_avx(auVar12,auVar13,8);
      auVar8 = vblendps_avx(auVar8,auVar13,8);
      auVar8 = vhaddps_avx(auVar8,auVar12);
      auVar12 = vhaddps_avx(auVar15,auVar12);
      auVar15 = *(undefined1 (*) [16])(lVar4 + 0x50);
      auVar3 = vhaddps_avx(auVar12,auVar8);
      auVar12 = vblendps_avx(auVar15,auVar26,2);
      auVar12 = vblendps_avx(auVar20,auVar12,3);
      auVar8 = vshufps_avx(auVar12,auVar12,0x49);
      auVar16 = vshufps_avx(auVar12,auVar12,0x92);
      auVar14 = vshufps_avx(auVar12,auVar12,0x24);
      auVar24._0_4_ = auVar16._0_4_ + auVar8._0_4_;
      auVar24._4_4_ = auVar16._4_4_ + auVar8._4_4_;
      auVar24._8_4_ = auVar16._8_4_ + auVar8._8_4_;
      auVar24._12_4_ = auVar16._12_4_ + auVar8._12_4_;
      auVar16._0_4_ = auVar24._0_4_ + auVar14._0_4_;
      auVar16._4_4_ = auVar24._4_4_ + auVar14._4_4_;
      auVar16._8_4_ = auVar24._8_4_ + auVar14._8_4_;
      auVar16._12_4_ = auVar24._12_4_ + auVar14._12_4_;
      auVar12 = vsubps_avx(auVar12,auVar24);
      auVar12 = vblendps_avx(auVar12,auVar16,8);
      auVar8 = vcmpps_avx(auVar13,auVar16,1);
      auVar14._0_4_ = auVar8._0_4_;
      auVar14._4_4_ = auVar14._0_4_;
      auVar14._8_4_ = auVar14._0_4_;
      auVar14._12_4_ = auVar14._0_4_;
      auVar22._0_4_ = auVar12._0_4_ + _DAT_145fc6ed8;
      auVar22._4_4_ = auVar12._4_4_ + _DAT_145fc6ed8;
      auVar22._8_4_ = auVar12._8_4_ + _DAT_145fc6ed8;
      auVar22._12_4_ = auVar12._12_4_ + _DAT_145fc6ed8;
      auVar12 = vrsqrtps_avx(auVar22);
      fVar7 = auVar12._0_4_;
      fVar9 = auVar12._4_4_;
      fVar10 = auVar12._8_4_;
      fVar11 = auVar12._12_4_;
      auVar12 = vblendps_avx(auVar26,auVar20,3);
      auVar12 = vshufps_avx(auVar12,auVar15,0x12);
      auVar15 = vblendps_avx(auVar15,auVar26,3);
      auVar15 = vblendps_avx(auVar15,auVar20,2);
      auVar15 = vshufps_avx(auVar15,auVar15,9);
      auVar17._0_4_ = auVar12._0_4_ + auVar15._0_4_;
      auVar17._4_4_ = auVar12._4_4_ + auVar15._4_4_;
      auVar17._8_4_ = auVar12._8_4_ + auVar15._8_4_;
      auVar17._12_4_ = auVar12._12_4_ + auVar15._12_4_;
      auVar20 = vsubps_avx(auVar12,auVar15);
      auVar19._0_4_ =
           ((-(_DAT_145fc6edc * fVar7 * fVar7 * auVar22._0_4_) + _DAT_145fc6edc) * fVar7 + fVar7) *
           _DAT_145fc6edc;
      auVar19._4_4_ =
           ((-(_DAT_145fc6edc * fVar9 * fVar9 * auVar22._4_4_) + _DAT_145fc6edc) * fVar9 + fVar9) *
           _DAT_145fc6edc;
      auVar19._8_4_ =
           ((-(_DAT_145fc6edc * fVar10 * fVar10 * auVar22._8_4_) + _DAT_145fc6edc) * fVar10 + fVar10
           ) * _DAT_145fc6edc;
      auVar19._12_4_ =
           ((-(_DAT_145fc6edc * fVar11 * fVar11 * auVar22._12_4_) + _DAT_145fc6edc) * fVar11 +
           fVar11) * _DAT_145fc6edc;
      uVar1 = *(undefined4 *)(lVar4 + 0x78);
      auVar27._4_4_ = uVar1;
      auVar27._0_4_ = uVar1;
      auVar27._8_4_ = uVar1;
      auVar27._12_4_ = uVar1;
      auVar15 = vblendps_avx(auVar17,auVar20,1);
      auVar26 = vblendps_avx(auVar17,auVar20,2);
      auVar8 = vshufps_avx(auVar17,auVar20,0xa1);
      auVar20 = vblendps_avx(auVar20,auVar22,8);
      auVar16 = vshufps_avx(auVar15,auVar15,0x18);
      auVar12 = vshufpd_avx(auVar26,auVar26,1);
      auVar15 = vblendps_avx(auVar8,auVar22,4);
      auVar26 = vblendps_avx(auVar16,auVar22,1);
      auVar12 = vblendps_avx(auVar12,auVar22,2);
      auVar23._0_4_ = auVar19._0_4_ * auVar26._0_4_;
      auVar23._4_4_ = auVar19._0_4_ * auVar26._4_4_;
      auVar23._8_4_ = auVar19._0_4_ * auVar26._8_4_;
      auVar23._12_4_ = auVar19._0_4_ * auVar26._12_4_;
      auVar26 = vshufps_avx(auVar19,auVar19,0x55);
      auVar25._0_4_ = auVar12._0_4_ * auVar26._0_4_;
      auVar25._4_4_ = auVar12._4_4_ * auVar26._4_4_;
      auVar25._8_4_ = auVar12._8_4_ * auVar26._8_4_;
      auVar25._12_4_ = auVar12._12_4_ * auVar26._12_4_;
      auVar26 = vshufps_avx(auVar19,auVar19,0xaa);
      auVar12 = vshufps_avx(auVar19,auVar19,0xff);
      auVar18._0_4_ = auVar26._0_4_ * auVar15._0_4_;
      auVar18._4_4_ = auVar26._4_4_ * auVar15._4_4_;
      auVar18._8_4_ = auVar26._8_4_ * auVar15._8_4_;
      auVar18._12_4_ = auVar26._12_4_ * auVar15._12_4_;
      auVar13._0_4_ = auVar12._0_4_ * auVar20._0_4_;
      auVar13._4_4_ = auVar12._4_4_ * auVar20._4_4_;
      auVar13._8_4_ = auVar12._8_4_ * auVar20._8_4_;
      auVar13._12_4_ = auVar12._12_4_ * auVar20._12_4_;
      uVar1 = *(undefined4 *)(lVar4 + 0x50);
      auVar20._4_4_ = uVar1;
      auVar20._0_4_ = uVar1;
      auVar20._8_4_ = uVar1;
      auVar20._12_4_ = uVar1;
      uVar1 = *(undefined4 *)(lVar4 + 100);
      auVar26._4_4_ = uVar1;
      auVar26._0_4_ = uVar1;
      auVar26._8_4_ = uVar1;
      auVar26._12_4_ = uVar1;
      auVar15 = vcmpps_avx(auVar20,auVar26,1);
      auVar26 = vcmpps_avx(auVar26,auVar27,1);
      auVar20 = vcmpps_avx(auVar20,auVar27,1);
      auVar15 = vblendvps_avx(auVar23,auVar25,auVar15);
      auVar21._0_4_ = auVar26._0_4_ & auVar20._0_4_;
      auVar21._4_4_ = auVar26._4_4_ & auVar20._4_4_;
      auVar21._8_4_ = auVar26._8_4_ & auVar20._8_4_;
      auVar21._12_4_ = auVar26._12_4_ & auVar20._12_4_;
      auVar15 = vblendvps_avx(auVar15,auVar18,auVar21);
      auVar15 = vblendvps_avx(auVar15,auVar13,auVar14);
      do {
        *pauVar6 = auVar3;
        pauVar6[2] = auVar15;
        pauVar6 = pauVar6 + 9;
      } while (pauVar6 != (undefined1 (*) [16])(param_1 + 0x80 + (ulonglong)uVar2 * 0x90));
    }
  }
  return;
}

