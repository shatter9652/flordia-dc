// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400eedf0  size: 598 bytes
// Name:    FUN_1400eedf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145156580, FUN_1453110b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400eedf0(longlong param_1,float *param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  char cVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  undefined1 auVar23 [16];
  undefined1 auVar25 [64];
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  undefined1 auStack_16c [4];
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 auStack_148 [2];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [16];
  undefined8 uStack_118;
  float fStack_110;
  float fStack_10c;
  undefined4 uStack_d8;
  undefined1 auVar24 [64];
  
  uVar1 = *(undefined4 *)(param_3 + 0x9c);
  cVar11 = func_0x000144e52850(uVar1);
  fVar13 = _DAT_145fc6f70;
  fVar14 = _DAT_145fc6f70;
  fVar15 = _DAT_145fc6f70;
  fVar16 = _DAT_145fc6f70;
  if (((cVar11 == '\0') &&
      (lVar12 = func_0x000144dd79f0(uVar1), fVar13 = _DAT_145fc6f70, fVar14 = _DAT_145fc6f70,
      fVar15 = _DAT_145fc6f70, fVar16 = _DAT_145fc6f70, lVar12 != 0)) &&
     (lVar2 = *(longlong *)(lVar12 + 0x11e8), lVar2 != 0)) {
    func_0x0001451565d0(&uStack_118);
    cVar11 = FUN_145156580(*(undefined4 *)(lVar2 + 0x26f0),*(undefined1 *)(lVar2 + 0x2760),uStack_d8
                          );
    fVar13 = _DAT_145fc6f70;
    fVar14 = _DAT_145fc6f70;
    fVar15 = _DAT_145fc6f70;
    fVar16 = _DAT_145fc6f70;
    if (cVar11 != '\0') {
      uStack_158 = *(undefined8 *)(param_3 + 0x70);
      uStack_150 = *(undefined8 *)(param_3 + 0x78);
      func_0x000144dc3790(&uStack_158,&uStack_118);
      auVar21 = *(undefined1 (*) [16])(param_3 + 0x50);
      auVar22 = ZEXT1664(auVar21);
      auVar19._0_12_ = ZEXT812(0);
      auVar19._12_4_ = 0;
      fStack_168 = *(float *)(param_1 + 0x1c);
      auVar25 = ZEXT1664(CONCAT412(fStack_10c,CONCAT48(fStack_110,uStack_118)));
      fVar13 = auVar21._0_4_;
      auVar17._0_4_ = fVar13 * fVar13;
      fVar15 = auVar21._4_4_;
      auVar17._4_4_ = fVar15 * fVar15;
      fVar3 = auVar21._8_4_;
      auVar17._8_4_ = fVar3 * fVar3;
      fVar5 = auVar21._12_4_;
      auVar17._12_4_ = fVar5 * fVar5;
      auVar17 = vblendps_avx(auVar17,auVar19,8);
      auVar17 = vhaddps_avx(auVar17,auVar17);
      auVar17 = vhaddps_avx(auVar17,auVar17);
      auVar19 = vrsqrtps_avx(auVar17);
      fVar14 = auVar19._0_4_;
      fVar16 = auVar19._4_4_;
      fVar4 = auVar19._8_4_;
      fVar6 = auVar19._12_4_;
      auVar23._0_4_ =
           (_DAT_145fc6f08 * fVar14 * fVar14 * auVar17._0_4_ - _DAT_145fc6f08) * fVar14 + fVar14;
      auVar23._4_4_ =
           (_DAT_145fc6f08 * fVar16 * fVar16 * auVar17._4_4_ - _DAT_145fc6f08) * fVar16 + fVar16;
      auVar23._8_4_ =
           (_DAT_145fc6f08 * fVar4 * fVar4 * auVar17._8_4_ - _DAT_145fc6f08) * fVar4 + fVar4;
      auVar23._12_4_ =
           (_DAT_145fc6f08 * fVar6 * fVar6 * auVar17._12_4_ - _DAT_145fc6f08) * fVar6 + fVar6;
      auVar24 = ZEXT1664(auVar23);
      fStack_188 = auVar23._0_4_ * fStack_168 * fVar13 + (float)uStack_118;
      fStack_184 = auVar23._4_4_ * fStack_168 * fVar15 + (float)((ulonglong)uStack_118 >> 0x20);
      fStack_180 = auVar23._8_4_ * fStack_168 * fVar3 + fStack_110;
      fStack_17c = auVar23._12_4_ * fStack_168 * fVar5 + fStack_10c;
      if (*(longlong *)(lVar12 + 0x13b0) != 0) {
        uStack_138 = CONCAT44(fStack_168,fStack_168);
        uStack_130 = CONCAT44(fStack_168,fStack_168);
        auStack_148[0] = uStack_118;
        fVar13 = _DAT_145fc6f08;
        fVar14 = _DAT_145fc6f08;
        fVar15 = _DAT_145fc6f08;
        fVar16 = _DAT_145fc6f08;
        fStack_164 = fStack_168;
        fStack_160 = fStack_168;
        fStack_15c = fStack_168;
        cVar11 = FUN_1453110b0(*(longlong *)(lVar12 + 0x13b0),auStack_148,&uStack_138,&fStack_188,
                               auStack_128,auStack_16c,0,0xffffffff,&fStack_168,0,0,0,0,0);
        auVar23 = auVar24._0_16_;
        auVar21 = auVar22._0_16_;
        if (cVar11 != '\0') {
          auVar20._0_12_ = ZEXT812(0);
          auVar20._12_4_ = 0;
          auVar21._4_4_ = fStack_184;
          auVar21._0_4_ = fStack_188;
          auVar21._8_4_ = fStack_110;
          auVar21._12_4_ = fStack_17c;
          auVar21 = vsubps_avx(auVar21,auVar25._0_16_);
          fVar3 = auVar21._0_4_;
          auVar18._0_4_ = fVar3 * fVar3;
          fVar5 = auVar21._4_4_;
          auVar18._4_4_ = fVar5 * fVar5;
          fVar7 = auVar21._8_4_;
          auVar18._8_4_ = fVar7 * fVar7;
          fVar9 = auVar21._12_4_;
          auVar18._12_4_ = fVar9 * fVar9;
          auVar21 = vblendps_avx(auVar18,auVar20,8);
          auVar21 = vhaddps_avx(auVar21,auVar21);
          auVar21 = vhaddps_avx(auVar21,auVar21);
          auVar17 = vrsqrtps_avx(auVar21);
          fVar4 = auVar17._0_4_;
          fVar6 = auVar17._4_4_;
          fVar8 = auVar17._8_4_;
          fVar10 = auVar17._12_4_;
          fVar13 = ((fVar4 * fVar4 * auVar21._0_4_ * fVar13 - fVar13) * fVar4 + fVar4) * fVar3;
          fVar14 = ((fVar6 * fVar6 * auVar21._4_4_ * fVar14 - fVar14) * fVar6 + fVar6) * fVar5;
          fVar15 = ((fVar8 * fVar8 * auVar21._8_4_ * fVar15 - fVar15) * fVar8 + fVar8) * fVar7;
          fVar16 = ((fVar10 * fVar10 * auVar21._12_4_ * fVar16 - fVar16) * fVar10 + fVar10) * fVar9;
          goto LAB_1400eee9d;
        }
      }
      fVar13 = auVar23._0_4_ * auVar21._0_4_;
      fVar14 = auVar23._4_4_ * auVar21._4_4_;
      fVar15 = auVar23._8_4_ * auVar21._8_4_;
      fVar16 = auVar23._12_4_ * auVar21._12_4_;
    }
  }
LAB_1400eee9d:
  *param_2 = fVar13;
  param_2[1] = fVar14;
  param_2[2] = fVar15;
  param_2[3] = fVar16;
  return;
}

