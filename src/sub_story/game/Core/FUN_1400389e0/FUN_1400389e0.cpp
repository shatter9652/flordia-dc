// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400389e0  size: 178 bytes
// Name:    FUN_1400389e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400389e0(longlong *param_1,undefined1 (*param_2) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar11;
  float fVar12;
  undefined1 auVar9 [16];
  float fVar13;
  undefined1 auVar10 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_28 [16];
  
  (**(code **)(*param_1 + 0x58))(param_1,auStack_28);
  auVar5._0_4_ = (float)(**(code **)(*(longlong *)param_1[1] + 0x88))();
  auVar9._0_12_ = ZEXT812(0);
  auVar9._12_4_ = 0;
  auVar5._4_4_ = auVar5._0_4_;
  auVar5._8_4_ = auVar5._0_4_;
  auVar5._12_4_ = auVar5._0_4_;
  fVar1 = auStack_28._0_4_;
  auVar6._0_4_ = fVar1 * fVar1;
  fVar2 = auStack_28._4_4_;
  auVar6._4_4_ = fVar2 * fVar2;
  fVar3 = auStack_28._8_4_;
  auVar6._8_4_ = fVar3 * fVar3;
  fVar4 = auStack_28._12_4_;
  auVar6._12_4_ = fVar4 * fVar4;
  auVar6 = vblendps_avx(auVar6,auVar9,8);
  auVar6 = vhaddps_avx(auVar6,auVar6);
  auVar9 = vhaddps_avx(auVar6,auVar6);
  auVar6 = vrsqrtps_avx(auVar9);
  fVar8 = auVar6._0_4_;
  fVar11 = auVar6._4_4_;
  fVar12 = auVar6._8_4_;
  fVar13 = auVar6._12_4_;
  auVar14._4_4_ = _DAT_146159bfc;
  auVar14._0_4_ = _DAT_146159bfc;
  auVar14._8_4_ = _DAT_146159bfc;
  auVar14._12_4_ = _DAT_146159bfc;
  auVar6 = vcmpps_avx(auVar14,auVar9,2);
  auVar7._0_4_ = (float)(auVar6._0_4_ &
                        (uint)(((fVar8 * fVar8 * auVar9._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                                fVar8 + fVar8) * auVar9._0_4_));
  auVar7._4_4_ = (float)(auVar6._4_4_ &
                        (uint)(((fVar11 * fVar11 * auVar9._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                                fVar11 + fVar11) * auVar9._4_4_));
  auVar7._8_4_ = (float)(auVar6._8_4_ &
                        (uint)(((fVar12 * fVar12 * auVar9._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                                fVar12 + fVar12) * auVar9._8_4_));
  auVar7._12_4_ =
       (float)(auVar6._12_4_ &
              (uint)(((fVar13 * fVar13 * auVar9._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar13 +
                     fVar13) * auVar9._12_4_));
  auVar6 = vrcpps_avx(auVar7);
  fVar8 = auVar6._0_4_;
  fVar11 = auVar6._4_4_;
  fVar12 = auVar6._8_4_;
  fVar13 = auVar6._12_4_;
  auVar6 = vcmpps_avx(auVar5,auVar7,1);
  auVar10._0_4_ =
       auVar5._0_4_ * fVar1 * (-((auVar7._0_4_ * fVar8 - _DAT_145fc6ed8) * fVar8) + fVar8);
  auVar10._4_4_ =
       auVar5._0_4_ * fVar2 * (-((auVar7._4_4_ * fVar11 - _DAT_145fc6ed8) * fVar11) + fVar11);
  auVar10._8_4_ =
       auVar5._0_4_ * fVar3 * (-((auVar7._8_4_ * fVar12 - _DAT_145fc6ed8) * fVar12) + fVar12);
  auVar10._12_4_ =
       auVar5._0_4_ * fVar4 * (-((auVar7._12_4_ * fVar13 - _DAT_145fc6ed8) * fVar13) + fVar13);
  auVar6 = vblendvps_avx(auStack_28,auVar10,auVar6);
  *param_2 = auVar6;
  return;
}

