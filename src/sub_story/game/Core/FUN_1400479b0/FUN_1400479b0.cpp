// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400479b0  size: 470 bytes
// Name:    FUN_1400479b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400479b0(undefined1 (*param_1) [16],longlong param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
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
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  auVar28._4_4_ = _DAT_145fc6f48;
  auVar28._0_4_ = _DAT_145fc6f48;
  auVar28._8_4_ = _DAT_145fc6f48;
  auVar28._12_4_ = _DAT_145fc6f48;
  fVar1 = *(float *)(param_2 + 0x6d0);
  fVar3 = (*(float *)(param_2 + 0x6f8) + _DAT_145fc6ed8) * *(float *)(param_2 + 0x6f0);
  fVar5 = *(float *)(param_2 + 0xc0);
  fVar6 = *(float *)(param_2 + 0xc4);
  fVar7 = *(float *)(param_2 + 200);
  fVar8 = *(float *)(param_2 + 0xcc);
  fVar9 = *(float *)(param_2 + 0xd0);
  fVar10 = *(float *)(param_2 + 0xd4);
  fVar11 = *(float *)(param_2 + 0xd8);
  fVar12 = *(float *)(param_2 + 0xdc);
  fVar4 = (*(float *)(param_2 + 0x6f8) + _DAT_145fc6f48) * *(float *)(param_2 + 0x6f0);
  fVar13 = *(float *)(param_2 + 0xf0);
  fVar14 = *(float *)(param_2 + 0xf4);
  fVar15 = *(float *)(param_2 + 0xf8);
  fVar16 = *(float *)(param_2 + 0xfc);
  fVar17 = *(float *)(param_2 + 0xe0);
  fVar18 = *(float *)(param_2 + 0xe4);
  fVar19 = *(float *)(param_2 + 0xe8);
  fVar20 = *(float *)(param_2 + 0xec);
  auVar29 = vblendps_avx(auVar28,ZEXT416((uint)fVar4),1);
  auVar28 = vblendps_avx(auVar28,ZEXT416((uint)fVar3),1);
  auVar22 = ZEXT416((uint)((*(float *)(param_2 + 0x6fc) + _DAT_145fc6f48) *
                          *(float *)(param_2 + 0x6f4)));
  auVar2 = vinsertps_avx(auVar29,auVar22,0x10);
  auVar22 = vinsertps_avx(auVar28,auVar22,0x10);
  auVar21 = ZEXT416((uint)((*(float *)(param_2 + 0x6fc) + _DAT_145fc6ed8) *
                          *(float *)(param_2 + 0x6f4)));
  auVar28 = vinsertps_avx(auVar28,auVar21,0x10);
  auVar29 = vinsertps_avx(auVar29,auVar21,0x10);
  auVar2 = vinsertps_avx(auVar2,ZEXT416((uint)fVar4),0x30);
  auVar29 = vinsertps_avx(auVar29,ZEXT416((uint)fVar4),0x30);
  auVar22 = vinsertps_avx(auVar22,ZEXT416((uint)fVar3),0x30);
  auVar28 = vinsertps_avx(auVar28,ZEXT416((uint)fVar3),0x30);
  auVar31._0_4_ = fVar1 * auVar2._0_4_;
  auVar31._4_4_ = fVar1 * auVar2._4_4_;
  auVar31._8_4_ = fVar1 * auVar2._8_4_;
  auVar31._12_4_ = fVar1 * auVar2._12_4_;
  auVar24._0_4_ = fVar1 * auVar22._0_4_;
  auVar24._4_4_ = fVar1 * auVar22._4_4_;
  auVar24._8_4_ = fVar1 * auVar22._8_4_;
  auVar24._12_4_ = fVar1 * auVar22._12_4_;
  auVar23._0_4_ = fVar1 * auVar28._0_4_;
  auVar23._4_4_ = fVar1 * auVar28._4_4_;
  auVar23._8_4_ = fVar1 * auVar28._8_4_;
  auVar23._12_4_ = fVar1 * auVar28._12_4_;
  auVar21._0_4_ = fVar1 * auVar29._0_4_;
  auVar21._4_4_ = fVar1 * auVar29._4_4_;
  auVar21._8_4_ = fVar1 * auVar29._8_4_;
  auVar21._12_4_ = fVar1 * auVar29._12_4_;
  auVar29 = vshufps_avx(auVar31,auVar31,0x55);
  auVar28 = vshufps_avx(auVar31,auVar31,0xaa);
  auVar2 = vshufps_avx(auVar24,auVar24,0x55);
  auVar26._4_4_ = _DAT_145fc6f50;
  auVar26._0_4_ = _DAT_145fc6f50;
  auVar26._8_4_ = _DAT_145fc6f50;
  auVar26._12_4_ = _DAT_145fc6f50;
  auVar22._0_4_ = fVar17 * auVar28._0_4_ + fVar9 * auVar29._0_4_ + fVar5 * auVar31._0_4_ + fVar13;
  auVar22._4_4_ = fVar18 * auVar28._4_4_ + fVar10 * auVar29._4_4_ + fVar6 * auVar31._0_4_ + fVar14;
  auVar22._8_4_ = fVar19 * auVar28._8_4_ + fVar11 * auVar29._8_4_ + fVar7 * auVar31._0_4_ + fVar15;
  auVar22._12_4_ =
       fVar20 * auVar28._12_4_ + fVar12 * auVar29._12_4_ + fVar8 * auVar31._0_4_ + fVar16;
  auVar29._4_4_ = _DAT_145fc6f54;
  auVar29._0_4_ = _DAT_145fc6f54;
  auVar29._8_4_ = _DAT_145fc6f54;
  auVar29._12_4_ = _DAT_145fc6f54;
  auVar28 = vminps_avx(auVar22,auVar26);
  auVar29 = vmaxps_avx(auVar22,auVar29);
  auVar22 = vshufps_avx(auVar24,auVar24,0xaa);
  auVar30._0_4_ = fVar17 * auVar22._0_4_ + fVar9 * auVar2._0_4_ + fVar5 * auVar24._0_4_ + fVar13;
  auVar30._4_4_ = fVar18 * auVar22._4_4_ + fVar10 * auVar2._4_4_ + fVar6 * auVar24._0_4_ + fVar14;
  auVar30._8_4_ = fVar19 * auVar22._8_4_ + fVar11 * auVar2._8_4_ + fVar7 * auVar24._0_4_ + fVar15;
  auVar30._12_4_ = fVar20 * auVar22._12_4_ + fVar12 * auVar2._12_4_ + fVar8 * auVar24._0_4_ + fVar16
  ;
  auVar28 = vminps_avx(auVar30,auVar28);
  auVar29 = vmaxps_avx(auVar30,auVar29);
  auVar2 = vshufps_avx(auVar23,auVar23,0x55);
  auVar22 = vshufps_avx(auVar23,auVar23,0xaa);
  auVar27._0_4_ = fVar17 * auVar22._0_4_ + fVar9 * auVar2._0_4_ + fVar5 * auVar23._0_4_ + fVar13;
  auVar27._4_4_ = fVar18 * auVar22._4_4_ + fVar10 * auVar2._4_4_ + fVar6 * auVar23._0_4_ + fVar14;
  auVar27._8_4_ = fVar19 * auVar22._8_4_ + fVar11 * auVar2._8_4_ + fVar7 * auVar23._0_4_ + fVar15;
  auVar27._12_4_ = fVar20 * auVar22._12_4_ + fVar12 * auVar2._12_4_ + fVar8 * auVar23._0_4_ + fVar16
  ;
  auVar28 = vminps_avx(auVar27,auVar28);
  auVar29 = vmaxps_avx(auVar27,auVar29);
  auVar2 = vshufps_avx(auVar21,auVar21,0x55);
  auVar22 = vshufps_avx(auVar21,auVar21,0xaa);
  auVar25._0_4_ = fVar17 * auVar22._0_4_ + fVar9 * auVar2._0_4_ + fVar5 * auVar21._0_4_ + fVar13;
  auVar25._4_4_ = fVar18 * auVar22._4_4_ + fVar10 * auVar2._4_4_ + fVar6 * auVar21._0_4_ + fVar14;
  auVar25._8_4_ = fVar19 * auVar22._8_4_ + fVar11 * auVar2._8_4_ + fVar7 * auVar21._0_4_ + fVar15;
  auVar25._12_4_ = fVar20 * auVar22._12_4_ + fVar12 * auVar2._12_4_ + fVar8 * auVar21._0_4_ + fVar16
  ;
  auVar28 = vminps_avx(auVar25,auVar28);
  auVar29 = vmaxps_avx(auVar25,auVar29);
  *param_1 = auVar28;
  param_1[1] = auVar29;
  return;
}

