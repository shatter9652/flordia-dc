// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140094f60  size: 1130 bytes
// Name:    FUN_140094f60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f273c0, FUN_144f27020, FUN_1455a9470, FUN_14052c5a0, FUN_1451676d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140094f60(longlong *param_1,undefined8 *param_2,undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16],undefined1 (*param_5) [16],float *param_6,
                  undefined8 *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [64];
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 *puVar31;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 auStack_268 [16];
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [16];
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [8];
  float fStack_1c0;
  float fStack_1bc;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [264];
  undefined1 auVar16 [64];
  
  puVar31 = &uStack_1e8;
  uStack_1e8 = *(undefined8 *)*param_5;
  uStack_1e0 = *(undefined8 *)(*param_5 + 8);
  uStack_1f8 = *(undefined8 *)*param_4;
  uStack_1f0 = *(undefined8 *)(*param_4 + 8);
  uStack_208 = *param_2;
  uStack_200 = param_2[1];
  cVar9 = FUN_1455a9470(param_1,&uStack_208,param_3,&uStack_1f8,puVar31,param_6,param_7);
  if (cVar9 == '\0') {
    FUN_14052c5a0(auStack_148);
    auVar11 = *param_4;
    auVar22 = *param_5;
    auVar15._0_12_ = ZEXT812(0);
    auVar15._12_4_ = 0;
    auVar16 = ZEXT1664(auVar15);
    auStack_178._8_8_ = 0;
    auStack_178._0_8_ = _DAT_146159bc0;
    auVar23 = ZEXT1664(auStack_178);
    auVar25 = ZEXT464(_DAT_145fc6ed8);
    auVar26 = vsubps_avx(auVar22,auVar11);
    auStack_188 = ZEXT416(_DAT_145fc6ed8);
    fVar1 = auVar26._0_4_;
    auVar13._0_4_ = fVar1 * fVar1;
    fVar17 = auVar26._4_4_;
    auVar13._4_4_ = fVar17 * fVar17;
    fVar19 = auVar26._8_4_;
    auVar13._8_4_ = fVar19 * fVar19;
    fVar20 = auVar26._12_4_;
    auVar13._12_4_ = fVar20 * fVar20;
    auVar24 = vblendps_avx(auVar26,auVar15,2);
    auVar24 = vcmpps_avx(auVar24,auVar15,0);
    uVar10 = vmovmskps_avx(auVar24);
    auVar18 = ZEXT1664(_DAT_14614f7f0);
    auVar24 = vblendps_avx(auVar13,auVar15,8);
    auVar24 = vhaddps_avx(auVar24,auVar24);
    auVar24 = vhaddps_avx(auVar24,auVar24);
    auVar13 = vrsqrtps_avx(auVar24);
    auStack_218 = vrcpps_avx(auVar13);
    auStack_168 = _DAT_14614f7f0;
    if ((~(byte)uVar10 & 7) != 0) {
      auVar12 = vshufps_avx(auVar26,auVar26,0xc9);
      auVar14 = vshufps_avx(_DAT_14615abe0,_DAT_14615abe0,0xc9);
      auVar26 = vshufps_avx(auVar26,auVar26,0xd2);
      fVar27 = -((float)DAT_14615abe0 * auVar26._0_4_) + auVar12._0_4_ * auVar14._0_4_;
      fVar28 = -(DAT_14615abe0._4_4_ * auVar26._4_4_) + auVar12._4_4_ * auVar14._4_4_;
      fVar29 = -(DAT_14615abe0._8_4_ * auVar26._8_4_) + auVar12._8_4_ * auVar14._8_4_;
      fVar30 = -(DAT_14615abe0._12_4_ * auVar26._12_4_) + auVar12._12_4_ * auVar14._12_4_;
      auVar26._0_4_ = fVar27 * fVar27;
      auVar26._4_4_ = fVar28 * fVar28;
      auVar26._8_4_ = fVar29 * fVar29;
      auVar26._12_4_ = fVar30 * fVar30;
      auVar26 = vblendps_avx(auVar26,auVar15,8);
      auVar26 = vhaddps_avx(auVar26,auVar26);
      auVar26 = vhaddps_avx(auVar26,auVar26);
      auVar15 = vrsqrtps_avx(auVar26);
      fVar21 = auVar15._0_4_;
      fVar3 = auVar15._4_4_;
      fVar5 = auVar15._8_4_;
      fVar7 = auVar15._12_4_;
      fVar2 = auVar13._0_4_;
      fVar4 = auVar13._4_4_;
      fVar6 = auVar13._8_4_;
      fVar8 = auVar13._12_4_;
      auStack_188._0_4_ =
           ((_DAT_145fc6f08 * fVar21 * fVar21 * auVar26._0_4_ - _DAT_145fc6f08) * fVar21 + fVar21) *
           fVar27;
      auStack_188._4_4_ =
           ((_DAT_145fc6f08 * fVar3 * fVar3 * auVar26._4_4_ - _DAT_145fc6f08) * fVar3 + fVar3) *
           fVar28;
      auStack_188._8_4_ =
           ((_DAT_145fc6f08 * fVar5 * fVar5 * auVar26._8_4_ - _DAT_145fc6f08) * fVar5 + fVar5) *
           fVar29;
      auStack_188._12_4_ =
           ((_DAT_145fc6f08 * fVar7 * fVar7 * auVar26._12_4_ - _DAT_145fc6f08) * fVar7 + fVar7) *
           fVar30;
      auStack_178._0_4_ =
           ((_DAT_145fc6f08 * fVar2 * fVar2 * auVar24._0_4_ - _DAT_145fc6f08) * fVar2 + fVar2) *
           fVar1;
      auStack_178._4_4_ =
           ((_DAT_145fc6f08 * fVar4 * fVar4 * auVar24._4_4_ - _DAT_145fc6f08) * fVar4 + fVar4) *
           fVar17;
      auStack_178._8_4_ =
           ((_DAT_145fc6f08 * fVar6 * fVar6 * auVar24._8_4_ - _DAT_145fc6f08) * fVar6 + fVar6) *
           fVar19;
      auStack_178._12_4_ =
           ((_DAT_145fc6f08 * fVar8 * fVar8 * auVar24._12_4_ - _DAT_145fc6f08) * fVar8 + fVar8) *
           fVar20;
      auVar24 = vshufps_avx(auStack_188,auStack_188,0xc9);
      auVar13 = vshufps_avx(auStack_178,auStack_178,0xd2);
      auVar26 = vshufps_avx(auStack_178,auStack_178,0xc9);
      auVar15 = vshufps_avx(auStack_188,auStack_188,0xd2);
      auStack_168._0_4_ = -(auVar15._0_4_ * auVar26._0_4_) + auVar24._0_4_ * auVar13._0_4_;
      auStack_168._4_4_ = -(auVar15._4_4_ * auVar26._4_4_) + auVar24._4_4_ * auVar13._4_4_;
      auStack_168._8_4_ = -(auVar15._8_4_ * auVar26._8_4_) + auVar24._8_4_ * auVar13._8_4_;
      auStack_168._12_4_ = -(auVar15._12_4_ * auVar26._12_4_) + auVar24._12_4_ * auVar13._12_4_;
    }
    auStack_158._0_4_ = (auVar22._0_4_ + auVar11._0_4_) * _DAT_145fc6edc;
    auStack_158._4_4_ = (auVar22._4_4_ + auVar11._4_4_) * _DAT_145fc6edc;
    auStack_158._8_4_ = (auVar22._8_4_ + auVar11._8_4_) * _DAT_145fc6edc;
    auStack_158._12_4_ = (auVar22._12_4_ + auVar11._12_4_) * _DAT_145fc6edc;
    auStack_228._4_4_ = _DAT_146159ef4;
    auStack_228._0_4_ = _DAT_146159ef4;
    auStack_228._8_4_ = _DAT_146159ef4;
    auStack_228._12_4_ = _DAT_146159ef4;
    func_0x00014517f8a0(auStack_148);
    _auStack_1c8 = auVar25._0_16_;
    auStack_1b8 = auVar23._0_16_;
    auStack_1a8 = auVar18._0_16_;
    auStack_198 = auVar16._0_16_;
    FUN_1451676d0(auStack_148,param_1,auStack_188,auStack_1c8,
                  (ulonglong)puVar31 & 0xffffffffffffff00,&fStack_288,&fStack_238);
    auVar22._0_4_ = fStack_288 * fStack_238 + *(float *)*param_4;
    auVar22._4_4_ = fStack_284 * fStack_234 + *(float *)(*param_4 + 4);
    auVar22._8_4_ = fStack_280 * fStack_230 + *(float *)(*param_4 + 8);
    auVar22._12_4_ = fStack_27c * fStack_22c + *(float *)(*param_4 + 0xc);
    auVar18 = ZEXT1664(auVar22);
    auVar24._0_4_ = fStack_288 * fStack_238 + *(float *)*param_5;
    auVar24._4_4_ = fStack_284 * fStack_234 + *(float *)(*param_5 + 4);
    auVar24._8_4_ = fStack_280 * fStack_230 + *(float *)(*param_5 + 8);
    auVar24._12_4_ = fStack_27c * fStack_22c + *(float *)(*param_5 + 0xc);
    auVar23 = ZEXT1664(auVar24);
    auVar11 = vblendvps_avx(auVar24,auVar22,param_3[8]);
    auVar11 = vsubps_avx(param_3[4],auVar11);
    *param_3 = auVar11;
    auVar11 = vblendvps_avx(auVar24,auVar22,param_3[9]);
    auVar11 = vsubps_avx(param_3[5],auVar11);
    param_3[1] = auVar11;
    auVar11 = vblendvps_avx(auVar24,auVar22,param_3[10]);
    auVar11 = vsubps_avx(param_3[6],auVar11);
    param_3[2] = auVar11;
    auVar11 = vblendvps_avx(auVar24,auVar22,param_3[0xb]);
    auVar11 = vsubps_avx(param_3[7],auVar11);
    param_3[3] = auVar11;
    fVar17 = fStack_288;
    fVar19 = fStack_284;
    fVar20 = fStack_280;
    fVar21 = fStack_27c;
    FUN_144f273c0(param_3);
    auStack_248 = auVar16._0_16_;
    FUN_144f27020(param_3);
    auStack_258 = auVar23._0_16_;
    auStack_268 = auVar18._0_16_;
    uStack_278 = *param_2;
    uStack_270 = param_2[1];
    cVar9 = FUN_1455a9470(param_1,&uStack_278,param_3,auStack_268,auStack_258,param_6,param_7);
    fVar1 = _DAT_145fc6f08;
    if (cVar9 == '\0') {
      auVar12._0_12_ = ZEXT812(0);
      auVar12._12_4_ = 0;
      *param_7 = CONCAT44(fStack_284,fStack_288);
      param_7[1] = CONCAT44(fStack_27c,fStack_280);
      auVar11._0_4_ = fVar17 * fVar17;
      auVar11._4_4_ = fVar19 * fVar19;
      auVar11._8_4_ = fVar20 * fVar20;
      auVar11._12_4_ = fVar21 * fVar21;
      auVar11 = vblendps_avx(auVar11,auVar12,8);
      auVar11 = vhaddps_avx(auVar11,auVar11);
      auVar22 = vhaddps_avx(auVar11,auVar11);
      auVar11 = vrsqrtps_avx(auVar22);
      fVar2 = auVar11._0_4_;
      fVar3 = auVar11._4_4_;
      fVar4 = auVar11._8_4_;
      fVar5 = auVar11._12_4_;
      auVar11 = vcmpps_avx(auVar12,auVar22,1);
      auVar14._0_4_ = ((fVar2 * fVar2 * auVar22._0_4_ * fVar1 - fVar1) * fVar2 + fVar2) * fVar17;
      auVar14._4_4_ = ((fVar3 * fVar3 * auVar22._4_4_ * fVar1 - fVar1) * fVar3 + fVar3) * fVar19;
      auVar14._8_4_ = ((fVar4 * fVar4 * auVar22._8_4_ * fVar1 - fVar1) * fVar4 + fVar4) * fVar20;
      auVar14._12_4_ = ((fVar5 * fVar5 * auVar22._12_4_ * fVar1 - fVar1) * fVar5 + fVar5) * fVar21;
      auStack_1d8 = vblendvps_avx(_DAT_14615abe0,auVar14,auVar11);
      auVar16 = ZEXT1664(auStack_1d8);
      (**(code **)(*param_1 + 0xa0))(param_1,auStack_1d8,auStack_1c8);
      fVar1 = *(float *)((longlong)param_1 + 0x2c);
      *param_6 = auVar16._0_4_ * fVar1 + (float)auStack_1c8._0_4_;
      param_6[1] = auVar16._4_4_ * fVar1 + (float)auStack_1c8._4_4_;
      param_6[2] = auVar16._8_4_ * fVar1 + fStack_1c0;
      param_6[3] = auVar16._12_4_ * fVar1 + fStack_1bc;
    }
  }
  return;
}

