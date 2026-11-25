// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140021d80  size: 2820 bytes
// Name:    FUN_140021d80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e10340, FUN_144db6f00, FUN_144daa460, FUN_144db6f30, FUN_144e14710, FUN_144f64580, FUN_144e10100, FUN_14478e420, FUN_144e1ff00, FUN_144e155c0, FUN_144da0e70, FUN_144e10840
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140021d80(undefined8 param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
             undefined8 *param_4,undefined8 param_5)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar36;
  float fVar37;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar38;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar39;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [64];
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  float fVar50;
  undefined1 auVar46 [64];
  undefined1 auVar51 [64];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined *puStack_328;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined8 uStack_308;
  undefined1 (*pauStack_300) [16];
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 auStack_2e8 [16];
  undefined4 uStack_2d8;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  undefined8 uStack_298;
  undefined1 (*pauStack_290) [16];
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [16];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [16];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [16];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_158 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  auVar19._0_12_ = ZEXT812(0);
  auVar19._12_4_ = 0;
  auVar41 = vcmpps_avx(auVar19,param_2[0x11],0);
  pauVar1 = param_2 + 0x11;
  uVar15 = vmovmskps_avx(auVar41);
  uStack_308 = param_1;
  pauStack_300 = param_2;
  if (((~(byte)uVar15 & 7) != 0) && ((param_2[0x1c][1] & 0x10) != 0)) {
    uStack_314 = 0x3dcccccd;
    uStack_2f8 = *(undefined8 *)param_2[0x14];
    uStack_2f0 = *(undefined8 *)(param_2[0x14] + 8);
    auStack_2e8 = *param_2;
    uStack_2d8 = *(undefined4 *)param_2[1];
    uStack_320 = *(undefined8 *)param_2[0x17];
    uStack_318 = *(undefined4 *)(param_2[0x18] + 4);
    uStack_310 = 2;
    puStack_328 = &UNK_146676e70;
    uStack_2c8 = *(undefined8 *)*pauVar1;
    uStack_2c0 = *(undefined8 *)(param_2[0x11] + 8);
    auStack_178 = ZEXT816(0) << 0x20;
    uStack_188 = *(undefined8 *)*param_3;
    uStack_180 = *(undefined8 *)(*param_3 + 8);
    FUN_144e10840(param_5,&puStack_328,&uStack_188,auStack_178,
                  (ulonglong)*(uint *)(param_2[0x19] + 0xc) | 0x700000000);
    FUN_144f64580(uStack_308,auStack_2e8._12_4_,&puStack_2b8);
    auVar3._8_8_ = uStack_2c0;
    auVar3._0_8_ = uStack_2c8;
    auVar4._8_4_ = fStack_2b0;
    auVar4._0_8_ = puStack_2b8;
    auVar4._12_4_ = fStack_2ac;
    auVar41 = vshufps_avx(auVar4,auVar4,0xc9);
    auVar19 = vshufps_avx(auVar3,auVar3,0xd2);
    auVar3 = vshufps_avx(auVar3,auVar3,0xc9);
    auVar4 = vshufps_avx(auVar4,auVar4,0xd2);
    fVar28 = -(auVar4._0_4_ * auVar3._0_4_) + auVar41._0_4_ * auVar19._0_4_;
    fVar36 = -(auVar4._4_4_ * auVar3._4_4_) + auVar41._4_4_ * auVar19._4_4_;
    fVar37 = -(auVar4._8_4_ * auVar3._8_4_) + auVar41._8_4_ * auVar19._8_4_;
    fVar39 = -(auVar4._12_4_ * auVar3._12_4_) + auVar41._12_4_ * auVar19._12_4_;
    auVar29._0_4_ = fVar28 + fVar28;
    auVar29._4_4_ = fVar36 + fVar36;
    auVar29._8_4_ = fVar37 + fVar37;
    auVar29._12_4_ = fVar39 + fVar39;
    auVar19 = vshufps_avx(auVar29,auVar29,0xd2);
    auVar3 = vshufps_avx(auVar29,auVar29,0xc9);
    fVar28 = auVar29._0_4_ * fStack_2ac + (float)uStack_2c8 + fStack_2a8;
    fVar36 = auVar29._4_4_ * fStack_2ac + (float)((ulonglong)uStack_2c8 >> 0x20) + fStack_2a4;
    uVar18 = CONCAT44(fVar36,fVar28);
    auVar45 = ZEXT1664(CONCAT412(auVar29._12_4_ * fStack_2ac +
                                 (float)((ulonglong)uStack_2c0 >> 0x20) + fStack_29c +
                                 -(auVar4._12_4_ * auVar3._12_4_) + auVar19._12_4_ * auVar41._12_4_,
                                 CONCAT48(auVar29._8_4_ * fStack_2ac +
                                          (float)uStack_2c0 + fStack_2a0 +
                                          -(auVar4._8_4_ * auVar3._8_4_) +
                                          auVar19._8_4_ * auVar41._8_4_,
                                          CONCAT44(fVar36 + -(auVar4._4_4_ * auVar3._4_4_) +
                                                            auVar19._4_4_ * auVar41._4_4_,
                                                   fVar28 + -(auVar4._0_4_ * auVar3._0_4_) +
                                                            auVar19._0_4_ * auVar41._0_4_))));
    uVar16 = auStack_2e8._12_4_;
    uVar15 = uStack_2d8;
    goto LAB_14002221d;
  }
  uVar15 = *(undefined4 *)param_2[1];
  uStack_314 = 0x3dcccccd;
  uStack_2f8 = *(undefined8 *)param_2[0x14];
  uStack_2f0 = *(undefined8 *)(param_2[0x14] + 8);
  auStack_2e8 = *param_2;
  auVar46 = ZEXT1664(auStack_2e8);
  uVar16 = vextractps_avx(auStack_2e8,3);
  uStack_318 = *(undefined4 *)(param_2[0x18] + 4);
  puStack_328 = &UNK_146676dd0;
  uStack_320 = _DAT_146169990;
  uStack_310 = 1;
  uStack_2c8 = *(undefined8 *)*pauVar1;
  uStack_2c0 = *(undefined8 *)(param_2[0x11] + 8);
  auVar45 = ZEXT1664(*pauVar1);
  auVar41 = vcmpps_avx(*pauVar1,auVar19,0);
  uVar13 = vmovmskps_avx(auVar41);
  uStack_2d8 = uVar15;
  if ((~(byte)uVar13 & 7) == 0) {
    FUN_144db6f00(param_1,&puStack_2b8);
    auVar51 = ZEXT1664(CONCAT412(fStack_2ac,CONCAT48(fStack_2b0,puStack_2b8)));
    uVar13 = vextractps_avx(auVar46._0_16_,2);
    FUN_144db6f00(param_1,&puStack_2b8,uVar13);
  }
  else {
    uVar13 = vextractps_avx(auStack_2e8,2);
    FUN_144f64580(param_1,uVar13,&puStack_2b8);
    auVar2._8_4_ = fStack_2b0;
    auVar2._0_8_ = puStack_2b8;
    auVar2._12_4_ = fStack_2ac;
    auVar19 = auVar45._0_16_;
    auVar41 = vshufps_avx(auVar19,auVar19,0xd2);
    auVar19 = vshufps_avx(auVar19,auVar19,0xc9);
    auVar3 = vshufps_avx(auVar2,auVar2,0xc9);
    auVar4 = vshufps_avx(auVar2,auVar2,0xd2);
    fVar28 = -(auVar4._0_4_ * auVar19._0_4_) + auVar3._0_4_ * auVar41._0_4_;
    fVar36 = -(auVar4._4_4_ * auVar19._4_4_) + auVar3._4_4_ * auVar41._4_4_;
    fVar37 = -(auVar4._8_4_ * auVar19._8_4_) + auVar3._8_4_ * auVar41._8_4_;
    fVar39 = -(auVar4._12_4_ * auVar19._12_4_) + auVar3._12_4_ * auVar41._12_4_;
    auVar26._0_4_ = fVar28 + fVar28;
    auVar26._4_4_ = fVar36 + fVar36;
    auVar26._8_4_ = fVar37 + fVar37;
    auVar26._12_4_ = fVar39 + fVar39;
    auVar41 = vshufps_avx(auVar26,auVar26,0xd2);
    auVar19 = vshufps_avx(auVar26,auVar26,0xc9);
    auVar51 = ZEXT1664(CONCAT412(auVar26._12_4_ * fStack_2ac + auVar45._12_4_ + fStack_29c +
                                 -(auVar4._12_4_ * auVar19._12_4_) + auVar41._12_4_ * auVar3._12_4_,
                                 CONCAT48(auVar26._8_4_ * fStack_2ac + auVar45._8_4_ + fStack_2a0 +
                                          -(auVar4._8_4_ * auVar19._8_4_) +
                                          auVar41._8_4_ * auVar3._8_4_,
                                          CONCAT44(auVar26._4_4_ * fStack_2ac +
                                                   auVar45._4_4_ + fStack_2a4 +
                                                   -(auVar4._4_4_ * auVar19._4_4_) +
                                                   auVar41._4_4_ * auVar3._4_4_,
                                                   auVar26._0_4_ * fStack_2ac +
                                                   auVar45._0_4_ + fStack_2a8 +
                                                   -(auVar4._0_4_ * auVar19._0_4_) +
                                                   auVar41._0_4_ * auVar3._0_4_))));
  }
  FUN_144daa460(param_1,&uStack_b8,uVar13);
  uVar17 = vextractps_avx(auVar46._0_16_,1);
  FUN_144db6f30(param_1,&uStack_c8);
  uStack_d8 = uStack_b8;
  uStack_d0 = uStack_b0;
  uVar18 = *(undefined8 *)*param_3;
  uVar49 = *(undefined8 *)(*param_3 + 8);
  FUN_144db6f00(param_1,&uStack_e8,uVar13);
  auStack_1a8 = auVar51._0_16_;
  uStack_198 = uStack_e8;
  uStack_190 = uStack_e0;
  uStack_1c8 = uStack_c8;
  uStack_1c0 = uStack_c0;
  uStack_1b8 = uVar18;
  uStack_1b0 = uVar49;
  FUN_144e1ff00(&uStack_b8,&uStack_198,auStack_1a8,&uStack_1b8,&uStack_d8,&uStack_1c8);
  FUN_144da0e70(param_1,uVar13,&uStack_b8);
  auVar41 = auVar45._0_16_;
  if (_DAT_145fc6f00 < *(float *)(param_2[0x19] + 0xc)) {
    uStack_f8 = *(undefined8 *)*param_3;
    uStack_f0 = *(undefined8 *)(*param_3 + 8);
    FUN_144e14710(param_1,&puStack_328,1,1,&uStack_f8);
    auVar41._8_8_ = uStack_2c0;
    auVar41._0_8_ = uStack_2c8;
    if (*(longlong *)(param_2[3] + 8) != 0 || *(longlong *)param_2[3] != 0) {
      auVar20._0_12_ = ZEXT812(0);
      auVar20._12_4_ = 0;
      auVar41 = vcmpps_avx(auVar41,auVar20,0);
      uVar14 = vmovmskps_avx(auVar41);
      if ((~(byte)uVar14 & 7) == 0) {
        FUN_144db6f00(uStack_308,&puStack_2b8,auStack_2e8._12_4_);
        auVar45 = ZEXT1664(CONCAT412(fStack_2ac,CONCAT48(fStack_2b0,puStack_2b8)));
        FUN_144db6f00(uStack_308,&puStack_2b8,auStack_2e8._8_4_);
      }
      else {
        FUN_144f64580(uStack_308,auStack_2e8._8_4_,&puStack_2b8);
        auVar8._8_8_ = uStack_2c0;
        auVar8._0_8_ = uStack_2c8;
        auVar12._8_4_ = fStack_2b0;
        auVar12._0_8_ = puStack_2b8;
        auVar12._12_4_ = fStack_2ac;
        auVar41 = vshufps_avx(auVar12,auVar12,0xc9);
        auVar19 = vshufps_avx(auVar8,auVar8,0xd2);
        auVar3 = vshufps_avx(auVar8,auVar8,0xc9);
        auVar4 = vshufps_avx(auVar12,auVar12,0xd2);
        fVar28 = -(auVar4._0_4_ * auVar3._0_4_) + auVar41._0_4_ * auVar19._0_4_;
        fVar36 = -(auVar4._4_4_ * auVar3._4_4_) + auVar41._4_4_ * auVar19._4_4_;
        fVar37 = -(auVar4._8_4_ * auVar3._8_4_) + auVar41._8_4_ * auVar19._8_4_;
        fVar39 = -(auVar4._12_4_ * auVar3._12_4_) + auVar41._12_4_ * auVar19._12_4_;
        auVar35._0_4_ = fVar28 + fVar28;
        auVar35._4_4_ = fVar36 + fVar36;
        auVar35._8_4_ = fVar37 + fVar37;
        auVar35._12_4_ = fVar39 + fVar39;
        auVar19 = vshufps_avx(auVar35,auVar35,0xd2);
        auVar3 = vshufps_avx(auVar35,auVar35,0xc9);
        auVar45 = ZEXT1664(CONCAT412(auVar35._12_4_ * fStack_2ac +
                                     (float)((ulonglong)uStack_2c0 >> 0x20) + fStack_29c +
                                     -(auVar4._12_4_ * auVar3._12_4_) +
                                     auVar19._12_4_ * auVar41._12_4_,
                                     CONCAT48(auVar35._8_4_ * fStack_2ac +
                                              (float)uStack_2c0 + fStack_2a0 +
                                              -(auVar4._8_4_ * auVar3._8_4_) +
                                              auVar19._8_4_ * auVar41._8_4_,
                                              CONCAT44(auVar35._4_4_ * fStack_2ac +
                                                       (float)((ulonglong)uStack_2c8 >> 0x20) +
                                                       fStack_2a4 +
                                                       -(auVar4._4_4_ * auVar3._4_4_) +
                                                       auVar19._4_4_ * auVar41._4_4_,
                                                       auVar35._0_4_ * fStack_2ac +
                                                       (float)uStack_2c8 + fStack_2a8 +
                                                       -(auVar4._0_4_ * auVar3._0_4_) +
                                                       auVar19._0_4_ * auVar41._0_4_))));
      }
      FUN_144daa460(param_1,&uStack_108,uVar13);
      FUN_144db6f30(param_1,&uStack_118,uVar17);
      uStack_128 = uStack_108;
      uStack_120 = uStack_100;
      uVar18 = *(undefined8 *)*param_3;
      uVar49 = *(undefined8 *)(*param_3 + 8);
      FUN_144db6f00(param_1,&uStack_138,uVar13);
      auStack_1e8 = auVar45._0_16_;
      uStack_1d8 = uStack_138;
      uStack_1d0 = uStack_130;
      uStack_208 = uStack_118;
      uStack_200 = uStack_110;
      uStack_1f8 = uVar18;
      uStack_1f0 = uVar49;
      FUN_144e1ff00(&uStack_108,&uStack_1d8,auStack_1e8,&uStack_1f8,&uStack_128,&uStack_208);
      FUN_144da0e70(param_1,uVar13,&uStack_108);
      auVar41._8_8_ = uStack_2c0;
      auVar41._0_8_ = uStack_2c8;
    }
  }
  auVar21._0_12_ = ZEXT812(0);
  auVar21._12_4_ = 0;
  auVar41 = vcmpps_avx(auVar41,auVar21,0);
  uVar17 = vmovmskps_avx(auVar41);
  if ((~(byte)uVar17 & 7) == 0) {
    FUN_144db6f00(uStack_308,&puStack_2b8,auStack_2e8._12_4_);
    auVar45 = ZEXT1664(CONCAT412(fStack_2ac,CONCAT48(fStack_2b0,puStack_2b8)));
    FUN_144db6f00(uStack_308,&puStack_2b8,auStack_2e8._8_4_);
  }
  else {
    FUN_144f64580(uStack_308,auStack_2e8._8_4_,&puStack_2b8);
    auVar6._8_8_ = uStack_2c0;
    auVar6._0_8_ = uStack_2c8;
    auVar9._8_4_ = fStack_2b0;
    auVar9._0_8_ = puStack_2b8;
    auVar9._12_4_ = fStack_2ac;
    auVar41 = vshufps_avx(auVar9,auVar9,0xc9);
    auVar19 = vshufps_avx(auVar6,auVar6,0xd2);
    auVar3 = vshufps_avx(auVar6,auVar6,0xc9);
    auVar4 = vshufps_avx(auVar9,auVar9,0xd2);
    fVar28 = -(auVar4._0_4_ * auVar3._0_4_) + auVar41._0_4_ * auVar19._0_4_;
    fVar36 = -(auVar4._4_4_ * auVar3._4_4_) + auVar41._4_4_ * auVar19._4_4_;
    fVar37 = -(auVar4._8_4_ * auVar3._8_4_) + auVar41._8_4_ * auVar19._8_4_;
    fVar39 = -(auVar4._12_4_ * auVar3._12_4_) + auVar41._12_4_ * auVar19._12_4_;
    auVar30._0_4_ = fVar28 + fVar28;
    auVar30._4_4_ = fVar36 + fVar36;
    auVar30._8_4_ = fVar37 + fVar37;
    auVar30._12_4_ = fVar39 + fVar39;
    auVar19 = vshufps_avx(auVar30,auVar30,0xd2);
    auVar3 = vshufps_avx(auVar30,auVar30,0xc9);
    auVar45 = ZEXT1664(CONCAT412(auVar30._12_4_ * fStack_2ac +
                                 (float)((ulonglong)uStack_2c0 >> 0x20) + fStack_29c +
                                 -(auVar4._12_4_ * auVar3._12_4_) + auVar19._12_4_ * auVar41._12_4_,
                                 CONCAT48(auVar30._8_4_ * fStack_2ac +
                                          (float)uStack_2c0 + fStack_2a0 +
                                          -(auVar4._8_4_ * auVar3._8_4_) +
                                          auVar19._8_4_ * auVar41._8_4_,
                                          CONCAT44(auVar30._4_4_ * fStack_2ac +
                                                   (float)((ulonglong)uStack_2c8 >> 0x20) +
                                                   fStack_2a4 +
                                                   -(auVar4._4_4_ * auVar3._4_4_) +
                                                   auVar19._4_4_ * auVar41._4_4_,
                                                   auVar30._0_4_ * fStack_2ac +
                                                   (float)uStack_2c8 + fStack_2a8 +
                                                   -(auVar4._0_4_ * auVar3._0_4_) +
                                                   auVar19._0_4_ * auVar41._0_4_))));
  }
  if ((param_2[0x1c][1] & 8) == 0) {
    if (param_2[0x1b][0xe] == '\0') {
      fVar28 = *(float *)(param_2[0x17] + 8);
      goto LAB_14002217f;
    }
  }
  else {
    FUN_144db6f30(param_1,&uStack_148,uVar13);
    uStack_218 = *param_4;
    uStack_210 = param_4[1];
    uStack_228 = uStack_148;
    uStack_220 = uStack_140;
    auStack_238 = auVar45._0_16_;
    auStack_248 = ZEXT416((uint)_DAT_145fc6ed8);
    uStack_258 = CONCAT44(_UNK_146159bc4,_DAT_146159bc0);
    uStack_250 = 0;
    fVar28 = (float)FUN_14478e420(&uStack_218,&uStack_228,auStack_238,auStack_248,&uStack_258);
LAB_14002217f:
    if ((fVar28 != 0.0) || (NAN(fVar28))) {
      FUN_144daa460(param_1,&puStack_2b8,uVar13);
      auVar10._8_4_ = fStack_2b0;
      auVar10._0_8_ = puStack_2b8;
      auVar10._12_4_ = fStack_2ac;
      auVar29 = vshufps_avx(auVar10,auVar10,0xc9);
      auVar2 = vshufps_avx(auVar10,auVar10,0xd2);
      fVar36 = auVar2._0_4_ * _DAT_14615af60 + auVar29._0_4_ * _DAT_146159bc0;
      fVar37 = auVar2._4_4_ * _UNK_14615af64 + auVar29._4_4_ * _UNK_146159bc4;
      fVar39 = auVar2._8_4_ * _UNK_14615af68 + auVar29._8_4_ * _UNK_146159bc8;
      fVar38 = auVar2._12_4_ * _UNK_14615af6c + auVar29._12_4_ * _UNK_146159bcc;
      auVar31._0_4_ = fVar36 + fVar36;
      auVar31._4_4_ = fVar37 + fVar37;
      auVar31._8_4_ = fVar39 + fVar39;
      auVar31._12_4_ = fVar38 + fVar38;
      auVar26 = vshufps_avx(auVar31,auVar31,0xd2);
      auVar20 = vshufps_avx(auVar31,auVar31,0xc9);
      fVar36 = fVar28 * _DAT_145fc6edc;
      fVar28 = fVar28 * _DAT_146159b48;
      auVar42._4_4_ = _DAT_145fc6edc;
      auVar42._0_4_ = _DAT_145fc6edc;
      auVar42._8_4_ = _DAT_145fc6edc;
      auVar42._12_4_ = _DAT_145fc6edc;
      auVar40._0_4_ = (uint)fVar28 & _DAT_145fc6f10;
      auVar40._4_4_ = (uint)fVar28 & _DAT_145fc6f10;
      auVar40._8_4_ = (uint)fVar28 & _DAT_145fc6f10;
      auVar40._12_4_ = (uint)fVar28 & _DAT_145fc6f10;
      auVar40 = auVar40 | auVar42;
      auVar43._4_4_ = _DAT_145f43778;
      auVar43._0_4_ = _DAT_145f43778;
      auVar43._8_4_ = _DAT_145f43778;
      auVar43._12_4_ = _DAT_145f43778;
      auVar19 = vpcmpeqd_avx(auVar40,auVar40);
      auVar32._0_4_ = (int)(fVar28 + auVar40._0_4_);
      auVar32._4_4_ = (int)(fVar28 + auVar40._4_4_);
      auVar32._8_4_ = (int)(fVar28 + auVar40._8_4_);
      auVar32._12_4_ = (int)(fVar28 + auVar40._12_4_);
      auVar41 = vcvtdq2ps_avx(auVar32);
      auVar4 = vpsubd_avx(auVar32,auVar19);
      fVar28 = auVar41._0_4_ * _DAT_146159b50 + auVar41._0_4_ * _DAT_146159b4c + fVar36;
      fVar37 = auVar41._4_4_ * _DAT_146159b50 + auVar41._4_4_ * _DAT_146159b4c + fVar36;
      fVar39 = auVar41._8_4_ * _DAT_146159b50 + auVar41._8_4_ * _DAT_146159b4c + fVar36;
      fVar36 = auVar41._12_4_ * _DAT_146159b50 + auVar41._12_4_ * _DAT_146159b4c + fVar36;
      fVar38 = fVar28 * fVar28;
      fVar47 = fVar37 * fVar37;
      fVar48 = fVar39 * fVar39;
      fVar50 = fVar36 * fVar36;
      auVar53._0_4_ =
           fVar38 * fVar28 * (fVar38 * (fVar38 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar28;
      auVar53._4_4_ =
           fVar47 * fVar37 * (fVar47 * (fVar47 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar37;
      auVar53._8_4_ =
           fVar48 * fVar39 * (fVar48 * (fVar48 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar39;
      auVar53._12_4_ =
           fVar50 * fVar36 * (fVar50 * (fVar50 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar36;
      auVar41 = vpand_avx(auVar32,auVar43);
      auVar54._0_4_ =
           fVar38 * (fVar38 * (fVar38 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           _DAT_145fc6ed8;
      auVar54._4_4_ =
           fVar47 * (fVar47 * (fVar47 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           _DAT_145fc6ed8;
      auVar54._8_4_ =
           fVar48 * (fVar48 * (fVar48 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           _DAT_145fc6ed8;
      auVar54._12_4_ =
           fVar50 * (fVar50 * (fVar50 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           _DAT_145fc6ed8;
      auVar52._4_4_ = _DAT_145f43774;
      auVar52._0_4_ = _DAT_145f43774;
      auVar52._8_4_ = _DAT_145f43774;
      auVar52._12_4_ = _DAT_145f43774;
      auVar19 = vpcmpeqd_avx(auVar41,(undefined1  [16])0x0);
      auVar3 = vpsubd_avx((undefined1  [16])0x0,auVar41);
      auVar41 = vblendvps_avx(auVar54,auVar53,auVar19);
      auVar19 = vblendvps_avx(auVar54,auVar53,auVar3);
      auVar3 = vpand_avx(auVar52,auVar32);
      auVar4 = vpand_avx(auVar52,auVar4);
      auVar3 = vpcmpeqd_avx(auVar3,(undefined1  [16])0x0);
      auVar4 = vpcmpeqd_avx(auVar4,(undefined1  [16])0x0);
      auVar44._0_4_ = auVar41._0_4_ ^ _DAT_145fc6f10;
      auVar44._4_4_ = auVar41._4_4_ ^ _DAT_145fc6f10;
      auVar44._8_4_ = auVar41._8_4_ ^ _DAT_145fc6f10;
      auVar44._12_4_ = auVar41._12_4_ ^ _DAT_145fc6f10;
      auVar41 = vblendvps_avx(auVar44,auVar41,auVar3);
      auVar25._0_4_ =
           auVar41._0_4_ *
           (auVar31._0_4_ * fStack_2ac + _DAT_145fc6ed8 +
           -(auVar2._0_4_ * auVar20._0_4_) + auVar26._0_4_ * auVar29._0_4_);
      auVar25._4_4_ =
           auVar41._4_4_ *
           (auVar31._4_4_ * fStack_2ac + 0.0 +
           -(auVar2._4_4_ * auVar20._4_4_) + auVar26._4_4_ * auVar29._4_4_);
      auVar25._8_4_ =
           auVar41._8_4_ *
           (auVar31._8_4_ * fStack_2ac + 0.0 +
           -(auVar2._8_4_ * auVar20._8_4_) + auVar26._8_4_ * auVar29._8_4_);
      auVar25._12_4_ =
           auVar41._12_4_ *
           (auVar31._12_4_ * fStack_2ac + 0.0 +
           -(auVar2._12_4_ * auVar20._12_4_) + auVar26._12_4_ * auVar29._12_4_);
      auVar33._0_4_ = auVar19._0_4_ ^ _DAT_145fc6f10;
      auVar33._4_4_ = auVar19._4_4_ ^ _DAT_145fc6f10;
      auVar33._8_4_ = auVar19._8_4_ ^ _DAT_145fc6f10;
      auVar33._12_4_ = auVar19._12_4_ ^ _DAT_145fc6f10;
      auVar27._0_4_ = (uint)SUB84(puStack_2b8,0) ^ _DAT_145fc6f10;
      fVar28 = (float)((ulonglong)puStack_2b8 >> 0x20);
      auVar27._4_4_ = (uint)fVar28 ^ _DAT_145fc6f10;
      auVar27._8_4_ = (uint)fStack_2b0 ^ _DAT_145fc6f10;
      auVar27._12_4_ = (uint)fStack_2ac ^ _DAT_145fc6f10;
      auVar19 = vblendvps_avx(auVar33,auVar19,auVar4);
      auVar41 = vblendps_avx(auVar27,auVar10,10);
      auVar3 = vshufps_avx(auVar19,auVar19,0xff);
      auVar4 = vshufps_avx(auVar41,auVar41,0x1b);
      auVar29 = vshufps_avx(auVar25,auVar25,0x55);
      auVar2 = vshufps_avx(auVar25,auVar25,0xaa);
      auVar19 = vshufpd_avx(auVar10,auVar27,1);
      auVar41 = vblendps_avx(auVar27,auVar10,9);
      auVar41 = vshufps_avx(auVar41,auVar41,0xb1);
      auStack_158._0_4_ =
           auVar2._0_4_ * auVar41._0_4_ +
           auVar29._0_4_ * auVar19._0_4_ +
           auVar25._0_4_ * auVar4._0_4_ + auVar3._0_4_ * SUB84(puStack_2b8,0);
      auStack_158._4_4_ =
           auVar2._4_4_ * auVar41._4_4_ +
           auVar29._4_4_ * auVar19._4_4_ + auVar25._0_4_ * auVar4._4_4_ + auVar3._4_4_ * fVar28;
      auStack_158._8_4_ =
           auVar2._8_4_ * auVar41._8_4_ +
           auVar29._8_4_ * auVar19._8_4_ + auVar25._0_4_ * auVar4._8_4_ + auVar3._8_4_ * fStack_2b0;
      auStack_158._12_4_ =
           auVar2._12_4_ * auVar41._12_4_ +
           auVar29._12_4_ * auVar19._12_4_ +
           auVar25._0_4_ * auVar4._12_4_ + auVar3._12_4_ * fStack_2ac;
      FUN_144da0e70(param_1,uVar13);
    }
  }
  if ((param_2[0x1c][1] & 8) != 0) {
    fStack_2a4 = 0.1;
    puStack_2b8 = &UNK_146676e20;
    uStack_288 = *(undefined8 *)param_2[0x14];
    uStack_280 = *(undefined8 *)(param_2[0x14] + 8);
    uStack_278 = *(undefined8 *)*param_2;
    uStack_270 = *(undefined8 *)(*param_2 + 8);
    uStack_268 = *(undefined4 *)param_2[1];
    fStack_2b0 = (float)*(undefined8 *)param_2[0x17];
    fStack_2ac = (float)((ulonglong)*(undefined8 *)param_2[0x17] >> 0x20);
    fStack_2a8 = *(float *)(param_2[0x18] + 4);
    fStack_2a0 = 2.8026e-45;
    uStack_168 = *param_4;
    uStack_160 = param_4[1];
    uStack_298 = param_1;
    pauStack_290 = param_2;
    FUN_144e10340(param_5,&puStack_2b8,0,&uStack_168,1);
  }
  if (*(longlong *)(param_2[3] + 8) != 0) {
    FUN_144e155c0(&puStack_2b8,param_1,uVar13);
  }
  auVar22._0_12_ = ZEXT812(0);
  auVar22._12_4_ = 0;
  auVar5._8_8_ = uStack_2c0;
  auVar5._0_8_ = uStack_2c8;
  auVar41 = vcmpps_avx(auVar22,auVar5,0);
  uVar13 = vmovmskps_avx(auVar41);
  if ((~(byte)uVar13 & 7) == 0) {
    FUN_144db6f00(uStack_308,&puStack_2b8,auStack_2e8._12_4_);
    auVar45 = ZEXT1664(CONCAT412(fStack_2ac,CONCAT48(fStack_2b0,puStack_2b8)));
    uVar18 = FUN_144db6f00(uStack_308,&puStack_2b8,auStack_2e8._8_4_);
  }
  else {
    FUN_144f64580(uStack_308,auStack_2e8._8_4_,&puStack_2b8);
    auVar7._8_8_ = uStack_2c0;
    auVar7._0_8_ = uStack_2c8;
    auVar11._8_4_ = fStack_2b0;
    auVar11._0_8_ = puStack_2b8;
    auVar11._12_4_ = fStack_2ac;
    auVar41 = vshufps_avx(auVar11,auVar11,0xc9);
    auVar19 = vshufps_avx(auVar7,auVar7,0xd2);
    auVar3 = vshufps_avx(auVar7,auVar7,0xc9);
    auVar4 = vshufps_avx(auVar11,auVar11,0xd2);
    fVar28 = -(auVar4._0_4_ * auVar3._0_4_) + auVar41._0_4_ * auVar19._0_4_;
    fVar36 = -(auVar4._4_4_ * auVar3._4_4_) + auVar41._4_4_ * auVar19._4_4_;
    fVar37 = -(auVar4._8_4_ * auVar3._8_4_) + auVar41._8_4_ * auVar19._8_4_;
    fVar39 = -(auVar4._12_4_ * auVar3._12_4_) + auVar41._12_4_ * auVar19._12_4_;
    auVar34._0_4_ = fVar28 + fVar28;
    auVar34._4_4_ = fVar36 + fVar36;
    auVar34._8_4_ = fVar37 + fVar37;
    auVar34._12_4_ = fVar39 + fVar39;
    auVar19 = vshufps_avx(auVar34,auVar34,0xd2);
    auVar3 = vshufps_avx(auVar34,auVar34,0xc9);
    fVar28 = auVar34._0_4_ * fStack_2ac + (float)uStack_2c8 + fStack_2a8;
    fVar36 = auVar34._4_4_ * fStack_2ac + (float)((ulonglong)uStack_2c8 >> 0x20) + fStack_2a4;
    uVar18 = CONCAT44(fVar36,fVar28);
    auVar45 = ZEXT1664(CONCAT412(auVar34._12_4_ * fStack_2ac +
                                 (float)((ulonglong)uStack_2c0 >> 0x20) + fStack_29c +
                                 -(auVar4._12_4_ * auVar3._12_4_) + auVar19._12_4_ * auVar41._12_4_,
                                 CONCAT48(auVar34._8_4_ * fStack_2ac +
                                          (float)uStack_2c0 + fStack_2a0 +
                                          -(auVar4._8_4_ * auVar3._8_4_) +
                                          auVar19._8_4_ * auVar41._8_4_,
                                          CONCAT44(fVar36 + -(auVar4._4_4_ * auVar3._4_4_) +
                                                            auVar19._4_4_ * auVar41._4_4_,
                                                   fVar28 + -(auVar4._0_4_ * auVar3._0_4_) +
                                                            auVar19._0_4_ * auVar41._0_4_))));
  }
LAB_14002221d:
  FUN_144e10100(uVar18,uVar16,uVar15);
  auVar41 = vsubps_avx(auVar45._0_16_,*param_3);
  auVar24._0_12_ = ZEXT812(0);
  auVar24._12_4_ = 0;
  auVar23._0_4_ = auVar41._0_4_ * auVar41._0_4_;
  auVar23._4_4_ = auVar41._4_4_ * auVar41._4_4_;
  auVar23._8_4_ = auVar41._8_4_ * auVar41._8_4_;
  auVar23._12_4_ = auVar41._12_4_ * auVar41._12_4_;
  auVar41 = vblendps_avx(auVar23,auVar24,8);
  auVar41 = vhaddps_avx(auVar41,auVar41);
  auVar41 = vhaddps_avx(auVar41,auVar41);
  return auVar41._0_8_;
}

