// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006ae00  size: 173 bytes
// Name:    FUN_14006ae00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14006ae00(longlong param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar4 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  auVar4 = *(undefined1 (*) [16])(param_1 + 0x10);
  auVar8._0_12_ = ZEXT812(0);
  auVar8._12_4_ = 0;
  auVar1 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 0x20),auVar4);
  fVar3 = auVar1._0_4_;
  auVar10._0_4_ = fVar3 * fVar3;
  fVar5 = auVar1._4_4_;
  auVar10._4_4_ = fVar5 * fVar5;
  fVar6 = auVar1._8_4_;
  auVar10._8_4_ = fVar6 * fVar6;
  fVar7 = auVar1._12_4_;
  auVar10._12_4_ = fVar7 * fVar7;
  auVar1 = vblendps_avx(auVar10,auVar8,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  if (_DAT_14615af54 < auVar1._0_4_) {
    auVar13._0_12_ = ZEXT812(0);
    auVar13._12_4_ = 0;
    auVar10 = vsubps_avx(*param_2,auVar4);
    auVar2 = vsubps_avx(auVar4,*param_2);
    auVar12._0_4_ = auVar10._0_4_ * fVar3;
    auVar12._4_4_ = auVar10._4_4_ * fVar5;
    auVar12._8_4_ = auVar10._8_4_ * fVar6;
    auVar12._12_4_ = auVar10._12_4_ * fVar7;
    auVar4 = vblendps_avx(auVar12,auVar8,8);
    auVar4 = vhaddps_avx(auVar4,auVar4);
    auVar4 = vhaddps_avx(auVar4,auVar4);
    auVar11._0_4_ = auVar4._0_4_ / auVar1._0_4_;
    auVar11._4_12_ = auVar4._4_12_;
    auVar1 = vminss_avx(ZEXT416(_DAT_145fc6ed8),auVar11);
    auVar4 = vcmpss_avx(auVar11,auVar13,1);
    fVar9 = (float)(~auVar4._0_4_ & auVar1._0_4_);
    fVar3 = fVar3 * fVar9 + auVar2._0_4_;
    fVar5 = fVar5 * fVar9 + auVar2._4_4_;
    fVar6 = fVar6 * fVar9 + auVar2._8_4_;
    fVar7 = fVar7 * fVar9 + auVar2._12_4_;
    auVar4._0_4_ = fVar3 * fVar3;
    auVar4._4_4_ = fVar5 * fVar5;
    auVar4._8_4_ = fVar6 * fVar6;
    auVar4._12_4_ = fVar7 * fVar7;
    auVar4 = vblendps_avx(auVar4,auVar8,8);
    auVar4 = vhaddps_avx(auVar4,auVar4);
    auVar4 = vhaddps_avx(auVar4,auVar4);
    if (auVar4._0_4_ < *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30)) {
      return 1;
    }
  }
  return 0;
}

