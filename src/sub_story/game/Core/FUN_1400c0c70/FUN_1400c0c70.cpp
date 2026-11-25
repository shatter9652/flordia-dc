// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c0c70  size: 329 bytes
// Name:    FUN_1400c0c70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c0c70(longlong param_1,float *param_2,undefined1 (*param_3) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  
  auVar12 = *param_3;
  auVar13 = ZEXT1664(auVar12);
  auVar5._0_12_ = ZEXT812(0);
  auVar5._12_4_ = 0;
  auVar7 = vsubps_avx(auVar12,*(undefined1 (*) [16])(param_1 + 0x1dc780));
  fVar4 = auVar7._0_4_;
  auVar9._0_4_ = fVar4 * fVar4;
  fVar1 = auVar7._4_4_;
  auVar9._4_4_ = fVar1 * fVar1;
  fVar2 = auVar7._8_4_;
  auVar9._8_4_ = fVar2 * fVar2;
  fVar3 = auVar7._12_4_;
  auVar9._12_4_ = fVar3 * fVar3;
  auVar7 = vblendps_avx(auVar9,auVar5,8);
  auVar7 = vhaddps_avx(auVar7,auVar7);
  auVar7 = vhaddps_avx(auVar7,auVar7);
  if (auVar7._0_4_ <= _DAT_145fc6f00) {
    auVar9 = *(undefined1 (*) [16])(param_1 + 0x1dc7d0);
    fVar4 = 0.0;
  }
  else {
    auVar8 = vrsqrtps_avx(auVar7);
    auVar9 = *(undefined1 (*) [16])(param_1 + 0x1dc7d0);
    auVar14 = ZEXT1664(auVar9);
    auVar7 = vcmpps_avx(auVar5,auVar7,1);
    auVar6._0_4_ = (float)(auVar7._0_4_ & (uint)(auVar8._0_4_ * fVar4)) * auVar9._0_4_;
    auVar6._4_4_ = (float)(auVar7._4_4_ & (uint)(auVar8._4_4_ * fVar1)) * auVar9._4_4_;
    auVar6._8_4_ = (float)(auVar7._8_4_ & (uint)(auVar8._8_4_ * fVar2)) * auVar9._8_4_;
    auVar6._12_4_ = (float)(auVar7._12_4_ & (uint)(auVar8._12_4_ * fVar3)) * auVar9._12_4_;
    auVar7 = vblendps_avx(auVar6,auVar5,8);
    auVar7 = vhaddps_avx(auVar7,auVar7);
    auVar7 = vhaddps_avx(auVar7,auVar7);
    fVar4 = _DAT_1461661d0;
    if (_DAT_145fc6f48 < auVar7._0_4_) {
      if (_DAT_145fc6ed8 <= auVar7._0_4_) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = (float)func_0x000145f40740();
        auVar9 = auVar14._0_16_;
        auVar12 = auVar13._0_16_;
        fVar4 = fVar4 * _DAT_146176a30;
      }
    }
    fVar4 = fVar4 * *(float *)(param_1 + 0x1df0fc);
  }
  auVar11._0_4_ = auVar12._0_4_ * *(float *)(param_1 + 0x1dc7e0);
  auVar11._4_4_ = auVar12._4_4_ * *(float *)(param_1 + 0x1dc7e4);
  auVar11._8_4_ = auVar12._8_4_ * *(float *)(param_1 + 0x1dc7e8);
  auVar11._12_4_ = auVar12._12_4_ * *(float *)(param_1 + 0x1dc7ec);
  auVar7._0_4_ = auVar9._0_4_ * auVar12._0_4_;
  auVar7._4_4_ = auVar9._4_4_ * auVar12._4_4_;
  auVar7._8_4_ = auVar9._8_4_ * auVar12._8_4_;
  auVar7._12_4_ = auVar9._12_4_ * auVar12._12_4_;
  auVar10._0_12_ = ZEXT812(0);
  auVar10._12_4_ = 0;
  auVar12 = vblendps_avx(auVar7,auVar10,8);
  auVar7 = vhaddps_avx(auVar12,auVar12);
  auVar12 = vblendps_avx(auVar11,auVar10,8);
  auVar12 = vhaddps_avx(auVar12,auVar12);
  auVar7 = vhaddps_avx(auVar7,auVar7);
  auVar12 = vhaddps_avx(auVar12,auVar12);
  fVar1 = auVar12._0_4_ + *(float *)(param_1 + 0x1df114);
  auVar8._0_4_ = (uint)(auVar7._0_4_ + *(float *)(param_1 + 0x1df0f0)) ^ _DAT_145fc6f10;
  auVar8._4_4_ = _DAT_145fc6f10;
  auVar8._8_4_ = _DAT_145fc6f10;
  auVar8._12_4_ = _DAT_145fc6f10;
  auVar12._0_4_ = (uint)fVar1 ^ _DAT_145fc6f10;
  auVar12._4_4_ = _DAT_145fc6f10;
  auVar12._8_4_ = _DAT_145fc6f10;
  auVar12._12_4_ = _DAT_145fc6f10;
  auVar12 = vmaxss_avx(auVar12,ZEXT416((uint)fVar1));
  auVar12 = vmaxss_avx(auVar12,auVar8);
  *param_2 = auVar12._0_4_ * *(float *)(param_1 + 0x1df0f8) + fVar4 + *param_2;
  return;
}

