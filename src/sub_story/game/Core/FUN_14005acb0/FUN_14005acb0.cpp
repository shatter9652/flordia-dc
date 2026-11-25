// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005acb0  size: 350 bytes
// Name:    FUN_14005acb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450c7ff0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14005acb0(longlong *param_1,undefined1 (*param_2) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auVar17 [64];
  
  auVar15._0_12_ = ZEXT812(0);
  auVar15._12_4_ = 0;
  auVar17 = ZEXT1664(auVar15);
  auVar14 = ZEXT1664(*param_2);
  fVar1 = *(float *)(*param_1 + 0x14);
  fVar18 = fVar1 + *(float *)((longlong)param_1 + 0x24);
  auVar15 = vblendps_avx(auVar15,ZEXT416((uint)((*(float *)(*param_1 + 0x10) +
                                                *(float *)(param_1 + 4)) * _DAT_145fc6edc)),1);
  FUN_1450c7ff0(CONCAT44(auVar15._4_4_ ^ _DAT_145fc6f10,auVar15._0_4_ ^ _DAT_145fc6f10),fVar1);
  FUN_1450c7ff0(param_1,auStack_78);
  auVar13._4_4_ = _DAT_145fc6ed8;
  auVar13._0_4_ = _DAT_145fc6ed8;
  auVar13._8_4_ = _DAT_145fc6ed8;
  auVar13._12_4_ = _DAT_145fc6ed8;
  auVar15 = vsubps_avx(auStack_68,auStack_78);
  auVar6 = vsubps_avx(auVar14._0_16_,auStack_78);
  fVar1 = auVar15._0_4_;
  auVar11._0_4_ = fVar1 * fVar1;
  fVar2 = auVar15._4_4_;
  auVar11._4_4_ = fVar2 * fVar2;
  fVar3 = auVar15._8_4_;
  auVar11._8_4_ = fVar3 * fVar3;
  fVar4 = auVar15._12_4_;
  auVar11._12_4_ = fVar4 * fVar4;
  auVar8._0_4_ = auVar6._0_4_ * fVar1;
  auVar8._4_4_ = auVar6._4_4_ * fVar2;
  auVar8._8_4_ = auVar6._8_4_ * fVar3;
  auVar8._12_4_ = auVar6._12_4_ * fVar4;
  auVar16 = auVar17._0_16_;
  auVar15 = vblendps_avx(auVar11,auVar16,8);
  auVar6 = vblendps_avx(auVar8,auVar16,8);
  auVar15 = vhaddps_avx(auVar15,auVar15);
  auVar6 = vhaddps_avx(auVar6,auVar6);
  auVar15 = vhaddps_avx(auVar15,auVar15);
  auVar6 = vhaddps_avx(auVar6,auVar6);
  auVar7 = vrcpps_avx(auVar15);
  fVar19 = auVar7._0_4_;
  fVar20 = auVar7._4_4_;
  fVar21 = auVar7._8_4_;
  fVar5 = auVar7._12_4_;
  auVar12._4_4_ = _DAT_14615a034;
  auVar12._0_4_ = _DAT_14615a034;
  auVar12._8_4_ = _DAT_14615a034;
  auVar12._12_4_ = _DAT_14615a034;
  auVar9._0_4_ = (-((auVar15._0_4_ * fVar19 - _DAT_145fc6ed8) * fVar19) + fVar19) * auVar6._0_4_;
  auVar9._4_4_ = (-((auVar15._4_4_ * fVar20 - _DAT_145fc6ed8) * fVar20) + fVar20) * auVar6._4_4_;
  auVar9._8_4_ = (-((auVar15._8_4_ * fVar21 - _DAT_145fc6ed8) * fVar21) + fVar21) * auVar6._8_4_;
  auVar9._12_4_ = (-((auVar15._12_4_ * fVar5 - _DAT_145fc6ed8) * fVar5) + fVar5) * auVar6._12_4_;
  auVar6 = vmaxps_avx(auVar9,auVar16);
  auVar15 = vcmpps_avx(auVar12,auVar15,1);
  auVar6 = vminps_avx(auVar6,auVar13);
  auVar10._0_4_ = fVar1 * (float)(auVar15._0_4_ & auVar6._0_4_) + auStack_78._0_4_;
  auVar10._4_4_ = fVar2 * (float)(auVar15._4_4_ & auVar6._4_4_) + auStack_78._4_4_;
  auVar10._8_4_ = fVar3 * (float)(auVar15._8_4_ & auVar6._8_4_) + auStack_78._8_4_;
  auVar10._12_4_ = fVar4 * (float)(auVar15._12_4_ & auVar6._12_4_) + auStack_78._12_4_;
  fVar18 = fVar18 * fVar18;
  auVar6._4_4_ = fVar18;
  auVar6._0_4_ = fVar18;
  auVar6._8_4_ = fVar18;
  auVar6._12_4_ = fVar18;
  auVar15 = vsubps_avx(auVar10,auVar14._0_16_);
  auVar7._0_4_ = auVar15._0_4_ * auVar15._0_4_;
  auVar7._4_4_ = auVar15._4_4_ * auVar15._4_4_;
  auVar7._8_4_ = auVar15._8_4_ * auVar15._8_4_;
  auVar7._12_4_ = auVar15._12_4_ * auVar15._12_4_;
  auVar15 = vblendps_avx(auVar7,auVar16,8);
  auVar15 = vhaddps_avx(auVar15,auVar15);
  auVar15 = vhaddps_avx(auVar15,auVar15);
  auVar15 = vcmpps_avx(auVar15,auVar6,2);
  return (((SUB161(auVar15 >> 0x1f,0) & 1) != 0 || (SUB161(auVar15 >> 0x3f,0) & 1) != 0) ||
         (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || auVar15[0xf] < '\0';
}

