// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140025f40  size: 641 bytes
// Name:    FUN_140025f40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144df46c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140025f40(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16])

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [16];
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  undefined1 auStack_f8 [8];
  undefined4 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined1 aauStack_88 [6] [16];
  undefined1 auVar11 [64];
  undefined1 auVar15 [64];
  
  fVar1 = *(float *)(param_2 + 0x10);
  auVar8 = ZEXT1664(CONCAT412(fVar1 * _UNK_146159bcc,
                              CONCAT48(fVar1 * _UNK_146159bc8,
                                       CONCAT44(fVar1 * _UNK_146159bc4,fVar1 * _DAT_146159bc0))));
  uStack_a8 = *(undefined8 *)*param_3;
  uStack_a0 = *(undefined8 *)(*param_3 + 8);
  fVar1 = (float)FUN_144df46c0(aauStack_88,auStack_98,param_2,&uStack_a8,0);
  auVar10._0_12_ = ZEXT812(0);
  auVar10._12_4_ = 0;
  auVar11 = ZEXT1664(auVar10);
  auStack_d8 = vsubps_avx(auStack_98,aauStack_88[0]);
  auVar2 = vminss_avx(ZEXT416(_DAT_145fc6ed8),ZEXT416((uint)(fVar1 + _DAT_145fc6edc)));
  auVar10 = vcmpss_avx(ZEXT416((uint)(fVar1 + _DAT_145fc6edc)),auVar10,1);
  fVar1 = (float)(~auVar10._0_4_ & auVar2._0_4_);
  auVar7._0_4_ = auStack_d8._0_4_ * fVar1 + aauStack_88[0]._0_4_;
  auVar7._4_4_ = auStack_d8._4_4_ * fVar1 + aauStack_88[0]._4_4_;
  auVar7._8_4_ = auStack_d8._8_4_ * fVar1 + aauStack_88[0]._8_4_;
  auVar7._12_4_ = auStack_d8._12_4_ * fVar1 + aauStack_88[0]._12_4_;
  auVar12 = ZEXT1664(auVar7);
  auStack_e8 = vinsertps_avx(auVar7,auVar7,0x32);
  *param_1 = auVar7;
  func_0x0001400261f0(auStack_118);
  auVar7 = auVar8._0_16_;
  fVar9 = auVar11._0_4_;
  auVar14._0_12_ = ZEXT812(0);
  auVar14._12_4_ = 0;
  auVar15 = ZEXT1664(auVar14);
  *(undefined1 (*) [8])param_1[1] = auStack_118;
  *(undefined8 *)(param_1[1] + 8) = uStack_110;
  auVar13 = ZEXT1664(*param_3);
  auVar10 = vsubps_avx(auVar12._0_16_,*param_3);
  auVar2._0_4_ = auVar10._0_4_ * auVar10._0_4_;
  auVar2._4_4_ = auVar10._4_4_ * auVar10._4_4_;
  auVar2._8_4_ = auVar10._8_4_ * auVar10._8_4_;
  auVar2._12_4_ = auVar10._12_4_ * auVar10._12_4_;
  auVar10 = vblendps_avx(auVar2,auVar14,8);
  auVar10 = vhaddps_avx(auVar10,auVar10);
  auVar10 = vhaddps_avx(auVar10,auVar10);
  auVar12 = ZEXT1664(auVar10);
  fVar1 = *(float *)(*param_3 + 4);
  if (fVar1 <= fVar9) {
    func_0x0001400261d0(auStack_f8);
    uStack_f0 = *(undefined4 *)(param_2 + 8);
    auStack_b8._0_4_ = auVar13._0_4_ + auVar8._0_4_;
    auStack_b8._4_4_ = auVar13._4_4_ + auVar8._4_4_;
    auStack_b8._8_4_ = auVar13._8_4_ + auVar8._8_4_;
    auStack_b8._12_4_ = auVar13._12_4_ + auVar8._12_4_;
    func_0x000140026270(auStack_118,auStack_f8);
    fVar9 = auVar11._0_4_;
    auVar7 = auVar8._0_16_;
    _auStack_118 = vsubps_avx(_auStack_118,auVar7);
    auVar10 = vsubps_avx(_auStack_118,auVar13._0_16_);
    uStack_108 = _DAT_145fc6f10 ^ uStack_108;
    uStack_104 = _DAT_145fc6f10 ^ uStack_104;
    uStack_100 = _DAT_145fc6f10 ^ uStack_100;
    uStack_fc = _DAT_145fc6f10 ^ uStack_fc;
    auVar5._0_4_ = auVar10._0_4_ * auVar10._0_4_;
    auVar5._4_4_ = auVar10._4_4_ * auVar10._4_4_;
    auVar5._8_4_ = auVar10._8_4_ * auVar10._8_4_;
    auVar5._12_4_ = auVar10._12_4_ * auVar10._12_4_;
    auVar10 = vblendps_avx(auVar5,auVar15._0_16_,8);
    auVar10 = vhaddps_avx(auVar10,auVar10);
    auVar10 = vhaddps_avx(auVar10,auVar10);
    if (auVar10._0_4_ < auVar12._0_4_) {
      *(undefined1 (*) [8])*param_1 = auStack_118;
      *(undefined8 *)(*param_1 + 8) = uStack_110;
      *(ulonglong *)param_1[1] = CONCAT44(uStack_104,uStack_108);
      *(ulonglong *)(param_1[1] + 8) = CONCAT44(uStack_fc,uStack_100);
      fVar1 = *(float *)(*param_3 + 4);
    }
    else {
      auVar10 = vmovshdup_avx(auVar13._0_16_);
      fVar1 = auVar10._0_4_;
      auVar10 = auVar12._0_16_;
    }
  }
  if (fVar9 <= fVar1) {
    auVar8 = ZEXT1664(auVar7);
    auVar12 = ZEXT1664(auVar10);
    func_0x0001400261d0(auStack_f8);
    uStack_f0 = *(undefined4 *)(param_2 + 0xc);
    auVar11 = ZEXT1664(*param_3);
    auStack_c8 = vsubps_avx(*param_3,auVar8._0_16_);
    func_0x000140026270(auStack_118,auStack_f8);
    auVar3._0_8_ = CONCAT44(auVar8._4_4_ + (float)auStack_118._4_4_,
                            auVar8._0_4_ + (float)auStack_118._0_4_);
    auVar3._8_4_ = auVar8._8_4_ + (float)uStack_110;
    auVar3._12_4_ = auVar8._12_4_ + uStack_110._4_4_;
    auVar6._0_12_ = ZEXT812(0);
    auVar6._12_4_ = 0;
    auVar10 = vsubps_avx(auVar3,auVar11._0_16_);
    auVar4._0_4_ = auVar10._0_4_ * auVar10._0_4_;
    auVar4._4_4_ = auVar10._4_4_ * auVar10._4_4_;
    auVar4._8_4_ = auVar10._8_4_ * auVar10._8_4_;
    auVar4._12_4_ = auVar10._12_4_ * auVar10._12_4_;
    auVar10 = vblendps_avx(auVar4,auVar6,8);
    auVar10 = vhaddps_avx(auVar10,auVar10);
    auVar10 = vhaddps_avx(auVar10,auVar10);
    if (auVar10._0_4_ < auVar12._0_4_) {
      uStack_110 = auVar3._8_8_;
      *(undefined8 *)*param_1 = auVar3._0_8_;
      *(undefined8 *)(*param_1 + 8) = uStack_110;
      *(ulonglong *)param_1[1] = CONCAT44(uStack_104,uStack_108);
      *(ulonglong *)(param_1[1] + 8) = CONCAT44(uStack_fc,uStack_100);
    }
  }
  return;
}

