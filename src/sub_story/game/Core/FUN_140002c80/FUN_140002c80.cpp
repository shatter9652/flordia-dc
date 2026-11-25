// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140002c80  size: 1555 bytes
// Name:    FUN_140002c80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143a115f0, FUN_145362690
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140002c80(undefined8 *param_1,undefined1 (*param_2) [16],undefined4 param_3,undefined8 *param_4,
             uint param_5)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char cVar19;
  byte bVar20;
  byte bVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int iVar24;
  undefined8 uVar25;
  undefined1 (*pauVar26) [16];
  undefined8 *puVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined8 uVar47;
  undefined8 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fStack_2fc;
  undefined1 auStack_2f8 [32];
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [16];
  undefined8 uStack_2b8;
  undefined1 uStack_2b0;
  undefined4 uStack_2ac;
  undefined1 uStack_2a8;
  undefined1 auStack_2a0 [16];
  undefined8 uStack_290;
  undefined1 auStack_288 [16];
  undefined1 auStack_278 [16];
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [8];
  undefined8 uStack_250;
  undefined1 auStack_248 [16];
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 auStack_228 [16];
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined4 uStack_20c;
  undefined1 uStack_208;
  undefined1 auStack_200 [16];
  longlong lStack_1f0;
  undefined1 auStack_1e8 [16];
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 *puStack_1c0;
  undefined4 uStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 *puStack_140;
  undefined4 uStack_138;
  undefined1 auStack_128 [16];
  uint uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  
  uVar23 = _DAT_149587500;
  bVar21 = 0;
  auStack_228._0_12_ = ZEXT812(0);
  auStack_228._12_4_ = 0;
  _auStack_258 = ZEXT1232(ZEXT812(0));
  uStack_160 = 0;
  uStack_154 = 0;
  uStack_110 = 0;
  uStack_238 = _DAT_14614f7f0;
  uStack_230 = _UNK_14614f7f8;
  uStack_218 = 0;
  uStack_210 = 0xff;
  uStack_20c = 0;
  uStack_208 = 0;
  lStack_1f0 = 0;
  uStack_108 = *(undefined8 *)*param_2;
  uStack_100 = *(undefined8 *)(*param_2 + 8);
  uStack_168 = 0;
  uStack_14c = 0;
  uStack_148 = _DAT_149587500;
  uStack_144 = 0xfffffffd;
  uStack_150 = _DAT_1499a3bd0;
  uStack_138 = 1;
  uStack_118 = param_5;
  auVar44 = ZEXT464(param_5);
  auVar45 = ZEXT464(_DAT_1499a3bd0);
  auVar46 = ZEXT1664(auStack_228);
  uVar47 = _DAT_14614f7f0;
  uVar48 = _UNK_14614f7f8;
  auStack_200 = auStack_228;
  uStack_158 = param_3;
  puStack_140 = (undefined8 *)auStack_258;
  auStack_128 = auStack_228;
  cVar19 = func_0x0001400032a0();
  uStack_198 = auVar44._0_4_;
  uStack_1d0 = auVar45._0_4_;
  auStack_2c8 = auVar46._0_16_;
  if (cVar19 != '\0') {
    auVar5 = vcmpps_avx(auStack_2c8,_auStack_258,0);
    uVar22 = vmovmskps_avx(auVar5);
    if ((~(byte)uVar22 & 7) == 0) {
      bVar21 = 0;
    }
    else if (lStack_1f0 == 0) {
      bVar21 = 1;
    }
    else {
      lVar1 = *(longlong *)(lStack_1f0 + 8);
      lVar2 = *(longlong *)(lStack_1f0 + 0x10);
      if (lVar1 != 0 || lVar2 != 0) {
        auStack_1e8._0_12_ = ZEXT812(0);
        auStack_1e8._12_4_ = 0;
        auStack_2f8._0_16_ = auStack_1e8;
        auVar5 = *param_2;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = auVar5._0_8_;
        if (lVar1 == 0) {
          if (lVar2 != 0) goto LAB_140003153;
LAB_140003282:
          pauVar26 = (undefined1 (*) [16])auStack_2f8;
        }
        else {
          auVar34 = *(undefined1 (*) [16])(lVar1 + 0x70);
          auVar56._4_4_ = _DAT_145fc6ed8;
          auVar56._0_4_ = _DAT_145fc6ed8;
          auVar56._8_4_ = _DAT_145fc6ed8;
          auVar56._12_4_ = _DAT_145fc6ed8;
          auVar35 = vsubps_avx(_auStack_258,auVar34);
          auVar42._8_8_ = 0;
          auVar42._0_8_ = auVar34._0_8_;
          auVar42 = vsubps_avx(auVar33,auVar42);
          fVar43 = auVar35._0_4_;
          auVar53._0_4_ = fVar43 * fVar43;
          fVar3 = auVar35._4_4_;
          auVar53._4_4_ = fVar3 * fVar3;
          auVar53._8_8_ = 0;
          auVar49._0_4_ = auVar42._0_4_ * fVar43;
          auVar49._4_4_ = auVar42._4_4_ * fVar3;
          auVar49._8_4_ = auVar42._8_4_ * 0.0;
          auVar49._12_4_ = auVar42._12_4_ * 0.0;
          auVar35 = vblendps_avx(auVar53,auStack_1e8,8);
          auVar42 = vblendps_avx(auVar49,auStack_1e8,8);
          auVar35 = vhaddps_avx(auVar35,auVar35);
          auVar42 = vhaddps_avx(auVar42,auVar42);
          auVar35 = vhaddps_avx(auVar35,auVar35);
          auVar42 = vhaddps_avx(auVar42,auVar42);
          auVar40 = vrcpps_avx(auVar35);
          fVar58 = auVar40._0_4_;
          fVar59 = auVar40._4_4_;
          fVar60 = auVar40._8_4_;
          fVar4 = auVar40._12_4_;
          auVar50._0_4_ =
               (-((auVar35._0_4_ * fVar58 - _DAT_145fc6ed8) * fVar58) + fVar58) * auVar42._0_4_;
          auVar50._4_4_ =
               (-((auVar35._4_4_ * fVar59 - _DAT_145fc6ed8) * fVar59) + fVar59) * auVar42._4_4_;
          auVar50._8_4_ =
               (-((auVar35._8_4_ * fVar60 - _DAT_145fc6ed8) * fVar60) + fVar60) * auVar42._8_4_;
          auVar50._12_4_ =
               (-((auVar35._12_4_ * fVar4 - _DAT_145fc6ed8) * fVar4) + fVar4) * auVar42._12_4_;
          auVar42 = vmaxps_avx(auVar50,auStack_1e8);
          auVar51._4_4_ = _DAT_14615a034;
          auVar51._0_4_ = _DAT_14615a034;
          auVar51._8_4_ = _DAT_14615a034;
          auVar51._12_4_ = _DAT_14615a034;
          auVar42 = vminps_avx(auVar42,auVar56);
          auVar35 = vcmpps_avx(auVar51,auVar35,1);
          auVar40._0_4_ = fVar43 * (float)(auVar35._0_4_ & auVar42._0_4_) + auVar34._0_4_;
          auVar40._4_4_ = fVar3 * (float)(auVar35._4_4_ & auVar42._4_4_) + auVar34._4_4_;
          auVar40._8_4_ = (float)(auVar35._8_4_ & auVar42._8_4_) * 0.0 + 0.0;
          auVar40._12_4_ = (float)(auVar35._12_4_ & auVar42._12_4_) * 0.0 + 0.0;
          auStack_1e8 = vblendps_avx(auVar40,_auStack_258,4);
          if (lVar2 == 0) {
            pauVar26 = &auStack_1e8;
          }
          else {
LAB_140003153:
            auVar54._0_12_ = ZEXT812(0);
            auVar54._12_4_ = 0;
            auVar57._4_4_ = _DAT_145fc6ed8;
            auVar57._0_4_ = _DAT_145fc6ed8;
            auVar57._8_4_ = _DAT_145fc6ed8;
            auVar57._12_4_ = _DAT_145fc6ed8;
            auVar41._8_8_ = 0;
            auVar41._0_8_ = auStack_258;
            auVar33 = vsubps_avx(auVar33,auVar41);
            auVar34 = vsubps_avx(*(undefined1 (*) [16])(lVar2 + 0x70),_auStack_258);
            fVar43 = auVar34._0_4_;
            auVar52._0_4_ = fVar43 * fVar43;
            fVar3 = auVar34._4_4_;
            auVar52._4_4_ = fVar3 * fVar3;
            auVar52._8_8_ = 0;
            auVar34._0_4_ = auVar33._0_4_ * fVar43;
            auVar34._4_4_ = auVar33._4_4_ * fVar3;
            auVar34._8_4_ = auVar33._8_4_ * 0.0;
            auVar34._12_4_ = auVar33._12_4_ * 0.0;
            auVar33 = vblendps_avx(auVar52,auVar54,8);
            auVar34 = vblendps_avx(auVar34,auVar54,8);
            auVar33 = vhaddps_avx(auVar33,auVar33);
            auVar34 = vhaddps_avx(auVar34,auVar34);
            auVar33 = vhaddps_avx(auVar33,auVar33);
            auVar34 = vhaddps_avx(auVar34,auVar34);
            auVar35 = vrcpps_avx(auVar33);
            fVar58 = auVar35._0_4_;
            fVar59 = auVar35._4_4_;
            fVar60 = auVar35._8_4_;
            fVar4 = auVar35._12_4_;
            auVar55._4_4_ = _DAT_14615a034;
            auVar55._0_4_ = _DAT_14615a034;
            auVar55._8_4_ = _DAT_14615a034;
            auVar55._12_4_ = _DAT_14615a034;
            auVar35._0_4_ =
                 (-((auVar33._0_4_ * fVar58 - _DAT_145fc6ed8) * fVar58) + fVar58) * auVar34._0_4_;
            auVar35._4_4_ =
                 (-((auVar33._4_4_ * fVar59 - _DAT_145fc6ed8) * fVar59) + fVar59) * auVar34._4_4_;
            auVar35._8_4_ =
                 (-((auVar33._8_4_ * fVar60 - _DAT_145fc6ed8) * fVar60) + fVar60) * auVar34._8_4_;
            auVar35._12_4_ =
                 (-((auVar33._12_4_ * fVar4 - _DAT_145fc6ed8) * fVar4) + fVar4) * auVar34._12_4_;
            auVar34 = vmaxps_avx(auVar35,auVar54);
            auVar33 = vcmpps_avx(auVar55,auVar33,1);
            auVar34 = vminps_avx(auVar34,auVar57);
            auVar36._0_4_ = fVar43 * (float)(auVar33._0_4_ & auVar34._0_4_) + auStack_258._0_4_;
            auVar36._4_4_ = fVar3 * (float)(auVar33._4_4_ & auVar34._4_4_) + auStack_258._4_4_;
            auVar36._8_4_ = (float)(auVar33._8_4_ & auVar34._8_4_) * 0.0 + 0.0;
            auVar36._12_4_ = (float)(auVar33._12_4_ & auVar34._12_4_) * 0.0 + 0.0;
            auStack_2f8._0_16_ = vblendps_avx(auVar36,_auStack_258,4);
            if (lVar1 == 0) goto LAB_140003282;
            auVar33 = vsubps_avx(auVar5,auStack_1e8);
            auVar5 = vsubps_avx(auVar5,auStack_2f8._0_16_);
            auVar37._0_4_ = auVar33._0_4_ * auVar33._0_4_;
            auVar37._4_4_ = auVar33._4_4_ * auVar33._4_4_;
            auVar37._8_4_ = auVar33._8_4_ * auVar33._8_4_;
            auVar37._12_4_ = auVar33._12_4_ * auVar33._12_4_;
            auVar30._0_4_ = auVar5._0_4_ * auVar5._0_4_;
            auVar30._4_4_ = auVar5._4_4_ * auVar5._4_4_;
            auVar30._8_4_ = auVar5._8_4_ * auVar5._8_4_;
            auVar30._12_4_ = auVar5._12_4_ * auVar5._12_4_;
            auVar5 = vhaddps_avx(auVar37,auVar37);
            auVar33 = vhaddps_avx(auVar30,auVar30);
            pauVar26 = (undefined1 (*) [16])auStack_2f8;
            if (auVar5._0_4_ <= auVar33._0_4_) {
              pauVar26 = &auStack_1e8;
            }
          }
        }
        _auStack_258 = *pauVar26;
      }
      auVar5._12_4_ = 0;
      auVar5._0_12_ = auStack_1e8._4_12_;
      auStack_1e8 = auVar5 << 0x20;
      uStack_268 = auStack_258;
      uStack_260 = uStack_250;
      bVar21 = FUN_145362690(&uStack_268,auStack_1e8);
      uVar6 = auStack_1e8._0_8_;
      uStack_198 = auVar44._0_4_;
      uStack_1d0 = auVar45._0_4_;
      auStack_2c8 = auVar46._0_16_;
      bVar21 = bVar21 ^ 1 | (float)auStack_1e8._0_4_ < (float)uStack_250;
      auStack_1e8._0_8_ = uVar6;
    }
  }
  bVar20 = 0;
  auStack_2f8 = ZEXT1232(ZEXT812(0));
  uStack_1d4 = 0x1000000;
  uStack_2b8 = 0;
  uStack_2b0 = 0xff;
  uStack_2ac = 0;
  uStack_2a8 = 0;
  uStack_290 = 0;
  uStack_190 = 0;
  uStack_1a8 = *param_4;
  uStack_1a0 = param_4[1];
  uStack_188 = *(undefined8 *)*param_2;
  uStack_180 = *(undefined8 *)(*param_2 + 8);
  auStack_1e8 = ZEXT716(SUB87(auStack_1e8._0_8_,1)) << 8;
  uStack_1cc = 0xe000;
  uStack_1c8 = uVar23;
  uStack_1c4 = 0xffffffff;
  uStack_1b8 = 1;
  uStack_2d8 = uVar47;
  uStack_2d0 = uVar48;
  auStack_2a0 = auStack_2c8;
  uStack_1d8 = param_3;
  puStack_1c0 = (undefined8 *)auStack_2f8;
  cVar19 = func_0x0001400032b0();
  if (cVar19 == '\0') {
LAB_140002e63:
    if (bVar21 == 0) {
      puVar27 = (undefined8 *)auStack_2f8;
      if (bVar20 == 0) goto LAB_140002e75;
    }
    else {
      puVar27 = (undefined8 *)auStack_258;
      if (bVar20 != 0) {
        auVar5 = vsubps_avx(*param_2,_auStack_258);
        auVar33 = vsubps_avx(*param_2,auStack_2f8._0_16_);
        auVar31._0_4_ = auVar5._0_4_ * auVar5._0_4_;
        auVar31._4_4_ = auVar5._4_4_ * auVar5._4_4_;
        auVar31._8_4_ = auVar5._8_4_ * auVar5._8_4_;
        auVar31._12_4_ = auVar5._12_4_ * auVar5._12_4_;
        auVar29._0_4_ = auVar33._0_4_ * auVar33._0_4_;
        auVar29._4_4_ = auVar33._4_4_ * auVar33._4_4_;
        auVar29._8_4_ = auVar33._8_4_ * auVar33._8_4_;
        auVar29._12_4_ = auVar33._12_4_ * auVar33._12_4_;
        auVar5 = vhaddps_avx(auVar31,auVar31);
        auVar33 = vhaddps_avx(auVar29,auVar29);
        puVar27 = (undefined8 *)auStack_2f8;
        if (auVar5._0_4_ < auVar33._0_4_) {
          puVar27 = (undefined8 *)auStack_258;
        }
      }
    }
    uVar47 = *puVar27;
    uVar48 = puVar27[1];
    uVar6 = puVar27[2];
    uVar7 = puVar27[3];
    uVar8 = puVar27[4];
    uVar9 = puVar27[5];
    uVar10 = puVar27[6];
    uVar11 = puVar27[7];
    uVar12 = puVar27[8];
    uVar13 = puVar27[9];
    uVar14 = puVar27[10];
    uVar15 = puVar27[0xb];
    uVar16 = puVar27[0xb];
    uVar17 = puVar27[0xc];
    uVar18 = puVar27[0xd];
    uVar25 = 1;
    param_1[10] = puVar27[10];
    param_1[0xb] = uVar16;
    param_1[0xc] = uVar17;
    param_1[0xd] = uVar18;
    param_1[8] = uVar12;
    param_1[9] = uVar13;
    param_1[10] = uVar14;
    param_1[0xb] = uVar15;
    param_1[4] = uVar8;
    param_1[5] = uVar9;
    param_1[6] = uVar10;
    param_1[7] = uVar11;
    *param_1 = uVar47;
    param_1[1] = uVar48;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
  }
  else {
    auVar44 = ZEXT1664(auStack_2f8._0_16_);
    auVar28._0_12_ = ZEXT812(0);
    auVar28._12_4_ = 0;
    bVar20 = 0;
    auVar5 = vcmpps_avx(auStack_2f8._0_16_,auVar28,0);
    uVar23 = vmovmskps_avx(auVar5);
    if (((~(byte)uVar23 & 7) == 0) || ((float)uStack_2d0 <= _DAT_145fc6f98)) goto LAB_140002e63;
    auVar45 = ZEXT1664(*param_2);
    auStack_278 = auStack_2f8._0_16_;
    fVar43 = (float)auStack_2c8._12_4_;
    iVar24 = FUN_143a115f0(auStack_278,auStack_2c8._12_4_);
    if (iVar24 == 0) {
      auVar5 = vsubps_avx(auVar45._0_16_,auVar44._0_16_);
      auVar38._0_12_ = ZEXT812(0);
      auVar38._12_4_ = 0;
      fStack_2fc = 0.0;
      fVar3 = auVar5._0_4_;
      auVar32._0_4_ = fVar3 * fVar3;
      fVar58 = auVar5._4_4_;
      auVar32._4_4_ = fVar58 * fVar58;
      auVar32._8_4_ = auVar5._8_4_ * auVar5._8_4_;
      auVar32._12_4_ = auVar5._12_4_ * auVar5._12_4_;
      auVar5 = vblendps_avx(auVar32,auVar38,8);
      auVar39._4_4_ = _DAT_145fc6f14;
      auVar39._0_4_ = _DAT_145fc6f14;
      auVar39._8_4_ = _DAT_145fc6f14;
      auVar39._12_4_ = _DAT_145fc6f14;
      auVar5 = vhaddps_avx(auVar5,auVar5);
      auVar33 = vhaddps_avx(auVar5,auVar5);
      auVar34 = vrsqrtps_avx(auVar33);
      auVar5 = vcmpps_avx(auVar39,auVar33,1);
      fVar4 = auVar34._0_4_;
      fVar59 = auVar34._4_4_;
      auStack_288._0_4_ =
           fVar43 * (float)(auVar5._0_4_ &
                           (uint)(((fVar4 * fVar4 * auVar33._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08)
                                   * fVar4 + fVar4) * fVar3)) + auVar44._0_4_;
      auStack_288._4_4_ =
           fVar43 * (float)(auVar5._4_4_ &
                           (uint)(((fVar59 * fVar59 * auVar33._4_4_ * _DAT_145fc6f08 -
                                   _DAT_145fc6f08) * fVar59 + fVar59) * fVar58)) + auVar44._4_4_;
      auStack_288._8_4_ = fVar43 * 0.0 + auVar44._8_4_;
      auStack_288._12_4_ = fVar43 * 0.0 + auVar44._12_4_;
      auVar44 = ZEXT1664(auStack_288);
      bVar20 = FUN_145362690(auStack_288,&fStack_2fc);
      uVar23 = auStack_2f8._8_4_;
      auStack_2f8._0_16_ = auVar44._0_16_;
      bVar20 = bVar20 ^ 1 | fStack_2fc < (float)uVar23;
      goto LAB_140002e63;
    }
LAB_140002e75:
    uVar25 = 0;
  }
  return uVar25;
}

