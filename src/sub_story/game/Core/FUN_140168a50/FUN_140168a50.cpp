// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140168a50  size: 503 bytes
// Name:    FUN_140168a50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1447d1290, FUN_1447d0df0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_140168a50(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar7 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [8];
  float fStack_80;
  undefined1 auStack_78 [8];
  uint uStack_70;
  ulonglong uStack_68;
  float fStack_60;
  undefined1 auStack_58 [8];
  uint uStack_50;
  
  auVar9 = ZEXT1664(in_ZMM1._0_16_);
  auVar8 = ZEXT1664(in_ZMM2._0_16_);
  auVar1._0_4_ = (in_ZMM1._0_4_ - *(float *)(param_1 + 0x30)) / *(float *)(param_1 + 0x7c);
  auVar1._4_12_ = SUB6012((undefined1  [60])0x0,0);
  auVar1 = vroundss_avx(auVar1,auVar1,9);
  auVar2 = ZEXT416((uint)((in_ZMM2._0_4_ - *(float *)(param_1 + 0x34)) / *(float *)(param_1 + 0x80))
                  );
  auVar2 = vroundss_avx(auVar2,auVar2,9);
  FUN_1447d0df0(*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78),
                ~((int)auVar1._0_4_ >> 0x1f) & (int)auVar1._0_4_,
                ~((int)auVar2._0_4_ >> 0x1f) & (int)auVar2._0_4_,1,&uStack_94,&uStack_90,&uStack_8c,
                &uStack_a0,&uStack_9c,&uStack_98);
  FUN_1447d1290(param_1,&uStack_68,uStack_90,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uStack_68;
  auVar1 = vinsertps_avx(auVar9._0_16_,auVar8._0_16_,0x10);
  auVar1 = vsubps_avx(auVar1,auVar2);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *(ulonglong *)(param_1 + 0x7c);
  auVar1 = vdivps_avx(auVar1,auVar5);
  auVar8 = ZEXT1664(auVar1);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  if (auVar1._0_4_ <= _DAT_145fc6ed8) {
    FUN_1447d1290(param_1,auStack_78,uStack_94,0);
    FUN_1447d1290(param_1,auStack_88,uStack_8c,0);
    auVar6._4_4_ = fStack_60;
    auVar6._0_4_ = fStack_60;
    auVar6._8_4_ = fStack_60;
    auVar6._12_4_ = fStack_60;
    auVar1 = vinsertps_avx(ZEXT416((uint)fStack_80),ZEXT416(uStack_70),0x10);
    auVar1 = vsubps_avx(auVar1,auVar6);
    auVar4._0_4_ = auVar1._0_4_ * auVar8._0_4_;
    auVar4._4_4_ = auVar1._4_4_ * auVar8._4_4_;
    auVar4._8_4_ = auVar1._8_4_ * auVar8._8_4_;
    auVar4._12_4_ = auVar1._12_4_ * auVar8._12_4_;
    fStack_80 = auVar4._0_4_ + fStack_60;
  }
  else {
    FUN_1447d1290(param_1,auStack_78,uStack_a0,0);
    FUN_1447d1290(param_1,auStack_88,uStack_98,0);
    FUN_1447d1290(param_1,auStack_58,uStack_9c,0);
    auVar3._4_4_ = _DAT_145fc6ed8;
    auVar3._0_4_ = _DAT_145fc6ed8;
    auVar3._8_4_ = _DAT_145fc6ed8;
    auVar3._12_4_ = _DAT_145fc6ed8;
    auVar7._4_4_ = fStack_80;
    auVar7._0_4_ = fStack_80;
    auVar7._8_4_ = fStack_80;
    auVar7._12_4_ = fStack_80;
    auVar1 = vinsertps_avx(ZEXT416(uStack_70),ZEXT416(uStack_50),0x10);
    auVar2 = vsubps_avx(auVar3,auVar8._0_16_);
    auVar1 = vsubps_avx(auVar1,auVar7);
    auVar4._0_4_ = auVar1._0_4_ * auVar2._0_4_;
    auVar4._4_4_ = auVar1._4_4_ * auVar2._4_4_;
    auVar4._8_4_ = auVar1._8_4_ * auVar2._8_4_;
    auVar4._12_4_ = auVar1._12_4_ * auVar2._12_4_;
    fStack_80 = auVar4._0_4_ + fStack_80;
  }
  auVar1 = vmovshdup_avx(auVar4);
  return fStack_80 + auVar1._0_4_;
}

