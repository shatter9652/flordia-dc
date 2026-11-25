// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140112cf0  size: 246 bytes
// Name:    FUN_140112cf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140112cf0(undefined1 (*param_1) [16],undefined8 param_2,float *param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  undefined1 (*pauVar22) [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  pauVar22 = (undefined1 (*) [16])func_0x000144f48a00();
  fVar10 = *(float *)param_1[2];
  fVar11 = *(float *)(param_1[2] + 4);
  fVar12 = *(float *)(param_1[2] + 8);
  fVar13 = *(float *)(param_1[2] + 0xc);
  auVar2 = *param_1;
  fVar1 = *(float *)(*param_1 + 8);
  fVar14 = *(float *)pauVar22[2];
  fVar15 = *(float *)(pauVar22[2] + 4);
  fVar16 = *(float *)(pauVar22[2] + 8);
  fVar17 = *(float *)(pauVar22[2] + 0xc);
  auVar23._0_4_ = fVar10 * *(float *)pauVar22[1];
  auVar23._4_4_ = fVar11 * *(float *)(pauVar22[1] + 4);
  auVar23._8_4_ = fVar12 * *(float *)(pauVar22[1] + 8);
  auVar23._12_4_ = fVar13 * *(float *)(pauVar22[1] + 0xc);
  auVar4 = vshufps_avx(auVar2,auVar2,0xc9);
  auVar5 = vshufps_avx(auVar2,auVar2,0xd2);
  auVar2 = vshufps_avx(auVar23,auVar23,0xd2);
  auVar6 = vshufps_avx(auVar23,auVar23,0xc9);
  fVar18 = *(float *)param_1[1];
  fVar19 = *(float *)(param_1[1] + 4);
  fVar20 = *(float *)(param_1[1] + 8);
  fVar21 = *(float *)(param_1[1] + 0xc);
  fVar24 = -(auVar5._0_4_ * auVar6._0_4_) + auVar4._0_4_ * auVar2._0_4_;
  fVar27 = -(auVar5._4_4_ * auVar6._4_4_) + auVar4._4_4_ * auVar2._4_4_;
  fVar28 = -(auVar5._8_4_ * auVar6._8_4_) + auVar4._8_4_ * auVar2._8_4_;
  fVar29 = -(auVar5._12_4_ * auVar6._12_4_) + auVar4._12_4_ * auVar2._12_4_;
  auVar25._0_4_ = fVar24 + fVar24;
  auVar25._4_4_ = fVar27 + fVar27;
  auVar25._8_4_ = fVar28 + fVar28;
  auVar25._12_4_ = fVar29 + fVar29;
  auVar7 = vshufps_avx(auVar25,auVar25,0xd2);
  auVar8 = vshufps_avx(auVar25,auVar25,0xc9);
  fVar24 = *(float *)*param_1;
  fVar27 = *(float *)(*param_1 + 0xc);
  fVar28 = *(float *)(*param_1 + 4);
  auVar2 = *pauVar22;
  auVar26._0_4_ = (uint)auVar2._0_4_ ^ _DAT_145fc6f10;
  auVar26._4_4_ = (uint)auVar2._4_4_ ^ _DAT_145fc6f10;
  auVar26._8_4_ = (uint)auVar2._8_4_ ^ _DAT_145fc6f10;
  auVar26._12_4_ = (uint)auVar2._12_4_ ^ _DAT_145fc6f10;
  auVar6 = vblendps_avx(auVar26,auVar2,10);
  auVar9 = vshufps_avx(auVar6,auVar6,0x1b);
  auVar3 = vshufpd_avx(auVar2,auVar26,1);
  auVar6 = vblendps_avx(auVar26,auVar2,9);
  auVar6 = vshufps_avx(auVar6,auVar6,0xb1);
  *param_3 = fVar1 * auVar6._0_4_ +
             fVar28 * auVar3._0_4_ + fVar24 * auVar9._0_4_ + auVar2._0_4_ * fVar27;
  param_3[1] = fVar1 * auVar6._4_4_ +
               fVar28 * auVar3._4_4_ + fVar24 * auVar9._4_4_ + auVar2._4_4_ * fVar27;
  param_3[2] = fVar1 * auVar6._8_4_ +
               fVar28 * auVar3._8_4_ + fVar24 * auVar9._8_4_ + auVar2._8_4_ * fVar27;
  param_3[3] = fVar1 * auVar6._12_4_ +
               fVar28 * auVar3._12_4_ + fVar24 * auVar9._12_4_ + auVar2._12_4_ * fVar27;
  param_3[4] = fVar27 * auVar25._0_4_ + auVar23._0_4_ + fVar18 +
               -(auVar5._0_4_ * auVar8._0_4_) + auVar7._0_4_ * auVar4._0_4_;
  param_3[5] = fVar27 * auVar25._4_4_ + auVar23._4_4_ + fVar19 +
               -(auVar5._4_4_ * auVar8._4_4_) + auVar7._4_4_ * auVar4._4_4_;
  param_3[6] = fVar27 * auVar25._8_4_ + auVar23._8_4_ + fVar20 +
               -(auVar5._8_4_ * auVar8._8_4_) + auVar7._8_4_ * auVar4._8_4_;
  param_3[7] = fVar27 * auVar25._12_4_ + auVar23._12_4_ + fVar21 +
               -(auVar5._12_4_ * auVar8._12_4_) + auVar7._12_4_ * auVar4._12_4_;
  param_3[8] = fVar10 * fVar14;
  param_3[9] = fVar11 * fVar15;
  param_3[10] = fVar12 * fVar16;
  param_3[0xb] = fVar13 * fVar17;
  return;
}

