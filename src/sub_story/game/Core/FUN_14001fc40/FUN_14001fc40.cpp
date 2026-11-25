// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001fc40  size: 392 bytes
// Name:    FUN_14001fc40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001fc40(undefined8 param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16],float *param_5,byte param_6,undefined1 (*param_7) [16])

{
  undefined8 uVar1;
  byte bVar2;
  int iVar3;
  float fVar4;
  float fVar6;
  float fVar7;
  undefined1 auVar5 [16];
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar16;
  float fVar17;
  undefined1 auVar15 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 aauStack_78 [5] [16];
  
  auVar23 = ZEXT1664(*param_4);
  fVar19 = *param_5;
  fVar20 = param_5[1];
  fVar21 = param_5[2];
  fVar22 = param_5[3];
  auVar24 = ZEXT1664(*param_7);
  func_0x000144e0a1d0(param_7,aauStack_78);
  bVar2 = func_0x000144e0a1e0(param_1);
  iVar3 = -(uint)(bVar2 & param_6);
  auVar5._4_4_ = iVar3;
  auVar5._0_4_ = iVar3;
  auVar5._8_4_ = iVar3;
  auVar5._12_4_ = iVar3;
  auVar5 = vblendvps_avx(auVar23._0_16_,aauStack_78[0],auVar5);
  auVar9 = auVar5;
  if (auVar24._0_4_ < _DAT_145fc6ed8) {
    auVar9 = auVar24._0_16_;
  }
  if (param_6 == 0) {
    auVar5 = auVar9;
  }
  if (((_DAT_146159ec4 < auVar5._0_4_) && (_DAT_146159ec4 < auVar23._0_4_)) &&
     (auVar5._0_4_ < _DAT_145fc6ed8)) {
    auVar9._4_4_ = _DAT_145fc6ed8;
    auVar9._0_4_ = _DAT_145fc6ed8;
    auVar9._8_4_ = _DAT_145fc6ed8;
    auVar9._12_4_ = _DAT_145fc6ed8;
    auVar15._0_12_ = ZEXT812(0);
    auVar15._12_4_ = 0;
    auVar9 = vsubps_avx(auVar9,auVar5);
    auVar5 = vrcpps_avx(auVar23._0_16_);
    fVar4 = auVar5._0_4_;
    fVar6 = auVar5._4_4_;
    fVar7 = auVar5._8_4_;
    fVar8 = auVar5._12_4_;
    fVar10 = auVar9._0_4_;
    auVar12._0_4_ = (-((fVar4 * auVar23._0_4_ - _DAT_145fc6ed8) * fVar4) + fVar4) * fVar10 * fVar19;
    auVar12._4_4_ =
         (-((fVar6 * auVar23._4_4_ - _DAT_145fc6ed8) * fVar6) + fVar6) * auVar9._4_4_ * fVar20;
    auVar12._8_4_ =
         (-((fVar7 * auVar23._8_4_ - _DAT_145fc6ed8) * fVar7) + fVar7) * auVar9._8_4_ * fVar21;
    auVar12._12_4_ =
         (-((fVar8 * auVar23._12_4_ - _DAT_145fc6ed8) * fVar8) + fVar8) * auVar9._12_4_ * fVar22;
    auVar5 = *param_3;
    auVar13._0_4_ = auVar12._0_4_ * auVar12._0_4_;
    auVar13._4_4_ = auVar12._4_4_ * auVar12._4_4_;
    auVar13._8_4_ = auVar12._8_4_ * auVar12._8_4_;
    auVar13._12_4_ = auVar12._12_4_ * auVar12._12_4_;
    auVar9 = vsubps_avx(*param_2,auVar5);
    fVar19 = auVar9._0_4_;
    auVar14._0_4_ = fVar19 * fVar19;
    fVar20 = auVar9._4_4_;
    auVar14._4_4_ = fVar20 * fVar20;
    fVar21 = auVar9._8_4_;
    auVar14._8_4_ = fVar21 * fVar21;
    fVar22 = auVar9._12_4_;
    auVar14._12_4_ = fVar22 * fVar22;
    auVar9 = vblendps_avx(auVar14,auVar15,8);
    auVar9 = vhaddps_avx(auVar9,auVar9);
    auVar9 = vhaddps_avx(auVar9,auVar9);
    fVar4 = auVar9._0_4_;
    if ((fVar4 <= _DAT_14617be10) || (fVar4 <= auVar13._0_4_)) {
      uVar1 = *(undefined8 *)(*param_2 + 8);
      *(undefined8 *)*param_3 = *(undefined8 *)*param_2;
      *(undefined8 *)(*param_3 + 8) = uVar1;
    }
    else {
      auVar14 = vrsqrtps_avx(auVar9);
      fVar11 = fVar4 * fVar10 * fVar10;
      auVar13 = vcmpss_avx(ZEXT416((uint)fVar11),auVar13,1);
      fVar6 = auVar14._0_4_;
      fVar7 = auVar14._4_4_;
      fVar8 = auVar14._8_4_;
      fVar10 = auVar14._12_4_;
      auVar12 = vblendvps_avx(ZEXT416((uint)SQRT(fVar11)),auVar12,auVar13);
      fVar11 = auVar12._0_4_;
      fVar16 = fVar7 * fVar7 * auVar9._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
      fVar17 = fVar8 * fVar8 * auVar9._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
      fVar18 = fVar10 * fVar10 * auVar9._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
      *(float *)*param_3 =
           fVar11 * ((fVar6 * fVar6 * fVar4 * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar6 + fVar6) *
                    fVar19 + auVar5._0_4_;
      *(float *)(*param_3 + 4) = fVar11 * (fVar16 * fVar7 + fVar7) * fVar20 + auVar5._4_4_;
      *(float *)(*param_3 + 8) = fVar11 * (fVar17 * fVar8 + fVar8) * fVar21 + auVar5._8_4_;
      *(float *)(*param_3 + 0xc) = fVar11 * (fVar18 * fVar10 + fVar10) * fVar22 + auVar5._12_4_;
    }
  }
  return;
}

