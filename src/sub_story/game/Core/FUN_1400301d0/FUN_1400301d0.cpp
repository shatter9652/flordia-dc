// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400301d0  size: 316 bytes
// Name:    FUN_1400301d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400301d0(float *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16],undefined1 (*param_5) [16],float *param_6,
                  float *param_7)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  auVar4 = *param_3;
  auVar5 = *param_2;
  auVar13 = vsubps_avx(*param_4,auVar5);
  auVar14 = vsubps_avx(*param_5,auVar4);
  fVar2 = 0.0;
  auVar15 = auVar5;
  auVar16 = auVar13;
  if (0.0 <= *param_1) {
    auVar15 = auVar4;
    auVar16 = auVar14;
  }
  auVar17 = auVar5;
  auVar18 = auVar13;
  if (0.0 <= param_1[1]) {
    auVar17 = auVar4;
    auVar18 = auVar14;
  }
  auVar16 = vblendps_avx(auVar16,auVar18,2);
  auVar15 = vblendps_avx(auVar15,auVar17,2);
  if (0.0 <= param_1[2]) {
    auVar5 = auVar4;
    auVar13 = auVar14;
  }
  auVar4 = vblendps_avx(auVar5,auVar15,3);
  auVar5 = vblendps_avx(auVar16,auVar13,4);
  auVar13 = ZEXT816(0) << 0x20;
  auVar15._4_4_ = _DAT_145fc6f00;
  auVar15._0_4_ = _DAT_145fc6f00;
  auVar15._8_4_ = _DAT_145fc6f00;
  auVar15._12_4_ = _DAT_145fc6f00;
  fVar3 = auVar4._0_4_ * (float)(_DAT_145fc6f4c & (uint)*param_1);
  fVar6 = auVar4._4_4_ * (float)(_DAT_145fc6f4c & (uint)param_1[1]);
  fVar7 = auVar4._8_4_ * (float)(_DAT_145fc6f4c & (uint)param_1[2]);
  fVar8 = auVar4._12_4_ * (float)(_DAT_145fc6f4c & (uint)param_1[3]);
  fVar9 = (float)(_DAT_145fc6f4c & (uint)*param_1) * auVar5._0_4_ + fVar3;
  fVar10 = (float)(_DAT_145fc6f4c & (uint)param_1[1]) * auVar5._4_4_ + fVar6;
  fVar11 = (float)(_DAT_145fc6f4c & (uint)param_1[2]) * auVar5._8_4_ + fVar7;
  fVar12 = (float)(_DAT_145fc6f4c & (uint)param_1[3]) * auVar5._12_4_ + fVar8;
  auVar4._0_4_ = fVar3 * fVar3;
  auVar4._4_4_ = fVar6 * fVar6;
  auVar4._8_4_ = fVar7 * fVar7;
  auVar4._12_4_ = fVar8 * fVar8;
  auVar4 = vblendps_avx(auVar4,auVar13,8);
  auVar5._0_4_ = fVar9 * fVar9;
  auVar5._4_4_ = fVar10 * fVar10;
  auVar5._8_4_ = fVar11 * fVar11;
  auVar5._12_4_ = fVar12 * fVar12;
  auVar5 = vblendps_avx(auVar5,auVar13,8);
  auVar13 = vhaddps_avx(auVar13,auVar13);
  auVar14 = vhaddps_avx(auVar5,auVar4);
  auVar13 = vhaddps_avx(auVar14,auVar13);
  auVar14._0_4_ = auVar13._0_4_ ^ _DAT_145fc6f10;
  auVar14._4_4_ = auVar13._4_4_ ^ _DAT_145fc6f10;
  auVar14._8_4_ = auVar13._8_4_ ^ _DAT_145fc6f10;
  auVar14._12_4_ = auVar13._12_4_ ^ _DAT_145fc6f10;
  auVar13 = vmaxps_avx(auVar14,auVar13);
  auVar13 = vcmpps_avx(auVar13,auVar15,2);
  auVar13 = vshufps_avx(auVar13,auVar13,0x50);
  uVar1 = vmovmskpd_avx(auVar13);
  fVar3 = 0.0;
  if ((uVar1 & 2) == 0) {
    auVar4 = vhaddps_avx(auVar4,auVar4);
    auVar4 = vhaddps_avx(auVar4,auVar4);
    fVar3 = SQRT(auVar4._0_4_);
  }
  *param_6 = fVar3;
  if ((uVar1 & 1) == 0) {
    auVar4 = vhaddps_avx(auVar5,auVar5);
    auVar4 = vhaddps_avx(auVar4,auVar4);
    fVar2 = SQRT(auVar4._0_4_);
  }
  *param_7 = fVar2;
  return;
}

