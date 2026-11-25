// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016fc20  size: 214 bytes
// Name:    FUN_14016fc20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14016fc20(float *param_1,float *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar8;
  float fVar9;
  
  if (param_3 == '\0') {
    auVar23._8_8_ = 0;
    auVar23._0_8_ = _DAT_146159d80;
    auVar25 = _DAT_14615abe0;
  }
  else {
    auVar25._8_8_ = 0;
    auVar25._0_8_ = _DAT_146159bc0;
    auVar23 = _DAT_14615abe0;
  }
  fVar10 = *param_2;
  fVar11 = param_2[1];
  fVar12 = param_2[2];
  fVar13 = param_2[3];
  fVar14 = param_2[4];
  fVar15 = param_2[5];
  fVar16 = param_2[6];
  fVar17 = param_2[7];
  auVar26._0_12_ = ZEXT812(0);
  auVar26._12_4_ = 0;
  fVar18 = param_2[8];
  fVar19 = param_2[9];
  fVar20 = param_2[10];
  fVar21 = param_2[0xb];
  auVar5 = vshufps_avx(auVar25,auVar25,0x55);
  fVar7 = fVar19 * _DAT_145fc6f48;
  fVar8 = fVar20 * _DAT_145fc6f48;
  fVar9 = fVar21 * _DAT_145fc6f48;
  fVar24 = auVar25._0_4_;
  auVar25 = vblendps_avx(auVar26,auVar25,4);
  auVar6 = vshufps_avx(auVar23,auVar23,0x55);
  fVar22 = auVar23._0_4_;
  auVar23 = vblendps_avx(auVar26,auVar23,4);
  fVar1 = param_2[0xc];
  fVar2 = param_2[0xd];
  fVar3 = param_2[0xe];
  fVar4 = param_2[0xf];
  *param_1 = fVar18 * _DAT_145fc6f48 + fVar14 * 0.0 + fVar10 * 0.0;
  param_1[1] = fVar7 + fVar15 * 0.0 + fVar11 * 0.0;
  param_1[2] = fVar8 + fVar16 * 0.0 + fVar12 * 0.0;
  param_1[3] = fVar9 + fVar17 * 0.0 + fVar13 * 0.0;
  param_1[4] = fVar18 * auVar25._0_4_ + fVar14 * auVar5._0_4_ + fVar10 * fVar24;
  param_1[5] = fVar19 * auVar25._4_4_ + fVar15 * auVar5._4_4_ + fVar11 * fVar24;
  param_1[6] = fVar20 * auVar25._8_4_ + fVar16 * auVar5._8_4_ + fVar12 * fVar24;
  param_1[7] = fVar21 * auVar25._12_4_ + fVar17 * auVar5._12_4_ + fVar13 * fVar24;
  param_1[8] = fVar18 * auVar23._0_4_ + fVar14 * auVar6._0_4_ + fVar10 * fVar22;
  param_1[9] = fVar19 * auVar23._4_4_ + fVar15 * auVar6._4_4_ + fVar11 * fVar22;
  param_1[10] = fVar20 * auVar23._8_4_ + fVar16 * auVar6._8_4_ + fVar12 * fVar22;
  param_1[0xb] = fVar21 * auVar23._12_4_ + fVar17 * auVar6._12_4_ + fVar13 * fVar22;
  param_1[0xc] = fVar18 * 0.0 + fVar14 * 0.0 + fVar10 * 0.0 + fVar1;
  param_1[0xd] = fVar19 * 0.0 + fVar15 * 0.0 + fVar11 * 0.0 + fVar2;
  param_1[0xe] = fVar20 * 0.0 + fVar16 * 0.0 + fVar12 * 0.0 + fVar3;
  param_1[0xf] = fVar21 * 0.0 + fVar17 * 0.0 + fVar13 * 0.0 + fVar4;
  return;
}

