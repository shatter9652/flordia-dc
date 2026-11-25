// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ffd30  size: 248 bytes
// Name:    FUN_1400ffd30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400ffd30(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar6 [64];
  undefined8 uVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined1 aauStack_48 [3] [16];
  
  uStack_68 = *param_1;
  uStack_60 = param_1[1];
  uVar2 = *param_2;
  uVar7 = param_2[1];
  auVar6 = ZEXT1664(in_ZMM2._0_16_);
  func_0x000144dc3790(&uStack_68,aauStack_48);
  uStack_78 = uVar2;
  uStack_70 = uVar7;
  func_0x000144dc3790(&uStack_78,auStack_58);
  auVar5._0_12_ = ZEXT812(0);
  auVar5._12_4_ = 0;
  auVar1 = vsubps_avx(aauStack_48[0],auStack_58);
  auVar3._0_4_ = auVar1._0_4_ * auVar1._0_4_;
  auVar3._4_4_ = auVar1._4_4_ * auVar1._4_4_;
  auVar3._8_4_ = auVar1._8_4_ * auVar1._8_4_;
  auVar3._12_4_ = auVar1._12_4_ * auVar1._12_4_;
  auVar1 = vblendps_avx(auVar3,auVar5,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar5 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vrsqrtss_avx(auVar5,auVar5);
  fVar4 = auVar1._0_4_;
  auVar1 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar5,2);
  uVar2 = 0;
  auVar3 = vcmpss_avx(ZEXT816(0) << 0x20,auVar6._0_16_,6);
  auVar1 = vblendvps_avx(auVar6._0_16_,
                         ZEXT416(auVar1._0_4_ &
                                 (uint)(((fVar4 * fVar4 * auVar5._0_4_ * _DAT_145fc6f08 +
                                         _DAT_145fc6edc) * fVar4 + fVar4) * auVar5._0_4_)),auVar3);
  fVar4 = auVar1._0_4_ + _DAT_14615d6d0;
  if ((fVar4 != 0.0) || (NAN(fVar4))) {
    auVar3 = vminss_avx(ZEXT416(_DAT_145fc6ed8),ZEXT416((uint)(fVar4 * _DAT_14617a8e0)));
    auVar1 = vcmpss_avx(ZEXT416((uint)(fVar4 * _DAT_14617a8e0)),ZEXT816(0) << 0x20,1);
    uVar2 = CONCAT44(~auVar1._4_4_ & auVar3._4_4_,~auVar1._0_4_ & auVar3._0_4_);
  }
  return uVar2;
}

