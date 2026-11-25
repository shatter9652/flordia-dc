// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140112df0  size: 414 bytes
// Name:    FUN_140112df0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140112df0(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 (*pauVar5) [16];
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [64];
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  auVar13 = _DAT_14614f7f0;
  fVar6 = _DAT_145fc6ed8;
  auVar10 = ZEXT464((uint)_DAT_145fc6ed8);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = _DAT_146159bc0;
  auVar14._0_12_ = ZEXT812(0);
  auVar14._12_4_ = 0.0;
  *param_2 = ZEXT416((uint)_DAT_145fc6ed8);
  param_2[1] = auVar12;
  param_2[2] = auVar13;
  param_2[3] = auVar14;
  do {
    auVar1 = *param_1;
    fVar15 = *(float *)(*param_1 + 0xc);
    auVar8._0_4_ = auVar1._0_4_ + auVar1._0_4_;
    auVar8._4_4_ = auVar1._4_4_ + auVar1._4_4_;
    auVar8._8_4_ = auVar1._8_4_ + auVar1._8_4_;
    auVar8._12_4_ = auVar1._12_4_ + auVar1._12_4_;
    auVar2 = vshufps_avx(auVar1,auVar1,0xc9);
    auVar1 = vshufps_avx(auVar1,auVar1,0xd2);
    auVar3 = vshufps_avx(auVar8,auVar8,0xc9);
    auVar4 = vshufps_avx(auVar8,auVar8,0xd2);
    auVar29._0_4_ = auVar1._0_4_ * auVar8._0_4_ + auVar3._0_4_ * fVar15;
    auVar29._4_4_ = auVar1._4_4_ * auVar8._4_4_ + auVar3._4_4_ * fVar15;
    auVar29._8_4_ = auVar1._8_4_ * auVar8._8_4_ + auVar3._8_4_ * fVar15;
    auVar29._12_4_ = auVar1._12_4_ * auVar8._12_4_ + auVar3._12_4_ * fVar15;
    auVar27._0_4_ = -(fVar15 * auVar4._0_4_) + auVar2._0_4_ * auVar8._0_4_;
    auVar27._4_4_ = -(fVar15 * auVar4._4_4_) + auVar2._4_4_ * auVar8._4_4_;
    auVar27._8_4_ = -(fVar15 * auVar4._8_4_) + auVar2._8_4_ * auVar8._8_4_;
    auVar27._12_4_ = -(fVar15 * auVar4._12_4_) + auVar2._12_4_ * auVar8._12_4_;
    auVar28._0_4_ = -(auVar4._0_4_ * auVar1._0_4_) - (auVar2._0_4_ * auVar3._0_4_ - fVar6);
    auVar28._4_4_ = -(auVar4._4_4_ * auVar1._4_4_) - (auVar2._4_4_ * auVar3._4_4_ - fVar6);
    auVar28._8_4_ = -(auVar4._8_4_ * auVar1._8_4_) - (auVar2._8_4_ * auVar3._8_4_ - fVar6);
    auVar28._12_4_ = -(auVar4._12_4_ * auVar1._12_4_) - (auVar2._12_4_ * auVar3._12_4_ - fVar6);
    auVar8 = auVar10._0_16_;
    auVar4 = vshufps_avx(auVar8,auVar8,0xaa);
    auVar1 = vblendps_avx(auVar29,auVar27,2);
    auVar2 = vblendps_avx(auVar28,auVar29,2);
    auVar3 = vblendps_avx(auVar27,auVar28,2);
    auVar1 = vblendps_avx(auVar28,auVar1,3);
    auVar8 = vshufps_avx(auVar8,auVar8,0x55);
    auVar2 = vblendps_avx(auVar27,auVar2,3);
    fVar7 = auVar10._0_4_;
    auVar3 = vblendps_avx(auVar29,auVar3,3);
    fVar15 = auVar2._0_4_;
    fVar16 = auVar2._4_4_;
    fVar17 = auVar2._8_4_;
    fVar18 = auVar2._12_4_;
    fVar11 = auVar12._0_4_;
    fVar19 = auVar3._0_4_;
    fVar20 = auVar3._4_4_;
    fVar21 = auVar3._8_4_;
    fVar22 = auVar3._12_4_;
    auVar2 = vshufps_avx(auVar12,auVar12,0x55);
    fVar23 = auVar1._0_4_;
    auVar9._0_4_ = fVar23 * auVar4._0_4_ + fVar19 * auVar8._0_4_ + fVar7 * fVar15;
    fVar24 = auVar1._4_4_;
    auVar9._4_4_ = fVar24 * auVar4._4_4_ + fVar20 * auVar8._4_4_ + fVar7 * fVar16;
    fVar25 = auVar1._8_4_;
    auVar9._8_4_ = fVar25 * auVar4._8_4_ + fVar21 * auVar8._8_4_ + fVar7 * fVar17;
    fVar26 = auVar1._12_4_;
    auVar9._12_4_ = fVar26 * auVar4._12_4_ + fVar22 * auVar8._12_4_ + fVar7 * fVar18;
    auVar10 = ZEXT1664(auVar9);
    auVar1 = vshufps_avx(auVar12,auVar12,0xaa);
    fVar7 = auVar13._0_4_;
    auVar3 = vshufps_avx(auVar13,auVar13,0x55);
    *param_2 = auVar9;
    auVar12._0_4_ = fVar23 * auVar1._0_4_ + fVar19 * auVar2._0_4_ + fVar11 * fVar15;
    auVar12._4_4_ = fVar24 * auVar1._4_4_ + fVar20 * auVar2._4_4_ + fVar11 * fVar16;
    auVar12._8_4_ = fVar25 * auVar1._8_4_ + fVar21 * auVar2._8_4_ + fVar11 * fVar17;
    auVar12._12_4_ = fVar26 * auVar1._12_4_ + fVar22 * auVar2._12_4_ + fVar11 * fVar18;
    auVar1 = vshufps_avx(auVar13,auVar13,0xaa);
    auVar2 = vshufps_avx(auVar14,auVar14,0x55);
    param_2[1] = auVar12;
    auVar13._0_4_ = fVar23 * auVar1._0_4_ + fVar19 * auVar3._0_4_ + fVar7 * fVar15;
    auVar13._4_4_ = fVar24 * auVar1._4_4_ + fVar20 * auVar3._4_4_ + fVar7 * fVar16;
    auVar13._8_4_ = fVar25 * auVar1._8_4_ + fVar21 * auVar3._8_4_ + fVar7 * fVar17;
    auVar13._12_4_ = fVar26 * auVar1._12_4_ + fVar22 * auVar3._12_4_ + fVar7 * fVar18;
    fVar7 = auVar14._0_4_;
    auVar14 = vshufps_avx(auVar14,auVar14,0xaa);
    param_2[2] = auVar13;
    fVar15 = fVar23 * auVar14._0_4_ + fVar19 * auVar2._0_4_ + fVar7 * fVar15;
    fVar16 = fVar24 * auVar14._4_4_ + fVar20 * auVar2._4_4_ + fVar7 * fVar16;
    fVar17 = fVar25 * auVar14._8_4_ + fVar21 * auVar2._8_4_ + fVar7 * fVar17;
    fVar18 = fVar26 * auVar14._12_4_ + fVar22 * auVar2._12_4_ + fVar7 * fVar18;
    *(float *)param_2[3] = fVar15;
    *(float *)(param_2[3] + 4) = fVar16;
    *(float *)(param_2[3] + 8) = fVar17;
    *(float *)(param_2[3] + 0xc) = fVar18;
    auVar14._0_4_ = fVar15 + *(float *)param_1[1];
    auVar14._4_4_ = fVar16 + *(float *)(param_1[1] + 4);
    auVar14._8_4_ = fVar17 + *(float *)(param_1[1] + 8);
    auVar14._12_4_ = fVar18 + *(float *)(param_1[1] + 0xc);
    param_2[3] = auVar14;
    pauVar5 = param_1 + 4;
    param_1 = param_1 + ((longlong)*(short *)(*pauVar5 + 6) - (ulonglong)*(ushort *)(param_1[4] + 8)
                        ) * 5;
  } while (-1 < (longlong)*(short *)(*pauVar5 + 6));
  return;
}

