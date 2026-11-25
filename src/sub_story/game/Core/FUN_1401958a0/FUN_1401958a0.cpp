// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401958a0  size: 1634 bytes
// Name:    FUN_1401958a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401958a0(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar19;
  float fVar21;
  undefined1 auVar14 [16];
  float fVar20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
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
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  
  plVar2 = *(longlong **)(param_1 + 0x340);
  if (((plVar2 != (longlong *)0x0) && (plVar2[7] != 0)) &&
     (lVar5 = func_0x000144dd11e0(*(undefined4 *)((longlong)plVar2 + 0x9c)), lVar5 != 0)) {
    uVar4 = func_0x000144dc06c0(*(undefined4 *)(param_1 + 0x10b4));
    fVar12 = (float)uVar4 * _DAT_14615ddf4;
    if (fVar12 < _DAT_145fc6ed8) {
      auVar7 = *(undefined1 (*) [16])(param_1 + 0x10e0);
      auVar30 = *(undefined1 (*) [16])(param_1 + 0x10f0);
      auVar8 = *(undefined1 (*) [16])(param_1 + 0x1100);
      uVar1 = *(undefined4 *)(param_1 + 0x1108);
      auVar49._4_4_ = uVar1;
      auVar49._0_4_ = uVar1;
      auVar49._8_4_ = uVar1;
      auVar49._12_4_ = uVar1;
      auVar10 = vblendps_avx(auVar7,auVar30,2);
      auVar10 = vblendps_avx(auVar8,auVar10,3);
      auVar11 = vshufps_avx(auVar10,auVar10,0x49);
      auVar14 = vshufps_avx(auVar10,auVar10,0x92);
      auVar6 = vshufps_avx(auVar10,auVar10,0x24);
      auVar37._0_4_ = auVar14._0_4_ + auVar11._0_4_;
      auVar37._4_4_ = auVar14._4_4_ + auVar11._4_4_;
      auVar37._8_4_ = auVar14._8_4_ + auVar11._8_4_;
      auVar37._12_4_ = auVar14._12_4_ + auVar11._12_4_;
      auVar22._0_4_ = auVar37._0_4_ + auVar6._0_4_;
      auVar22._4_4_ = auVar37._4_4_ + auVar6._4_4_;
      auVar22._8_4_ = auVar37._8_4_ + auVar6._8_4_;
      auVar22._12_4_ = auVar37._12_4_ + auVar6._12_4_;
      auVar10 = vsubps_avx(auVar10,auVar37);
      auVar10 = vblendps_avx(auVar10,auVar22,8);
      auVar6._4_4_ = _DAT_145fc6ed8;
      auVar6._0_4_ = _DAT_145fc6ed8;
      auVar6._8_4_ = _DAT_145fc6ed8;
      auVar6._12_4_ = _DAT_145fc6ed8;
      auVar38._0_4_ = auVar10._0_4_ + _DAT_145fc6ed8;
      auVar38._4_4_ = auVar10._4_4_ + _DAT_145fc6ed8;
      auVar38._8_4_ = auVar10._8_4_ + _DAT_145fc6ed8;
      auVar38._12_4_ = auVar10._12_4_ + _DAT_145fc6ed8;
      auVar10 = vrsqrtps_avx(auVar38);
      fVar13 = auVar10._0_4_;
      fVar19 = auVar10._4_4_;
      fVar20 = auVar10._8_4_;
      fVar21 = auVar10._12_4_;
      auVar10 = vblendps_avx(auVar30,auVar8,3);
      auVar10 = vshufps_avx(auVar10,auVar7,0x12);
      auVar7 = vblendps_avx(auVar7,auVar30,3);
      auVar7 = vblendps_avx(auVar7,auVar8,2);
      auVar7 = vshufps_avx(auVar7,auVar7,9);
      auVar28._0_4_ = auVar10._0_4_ + auVar7._0_4_;
      auVar28._4_4_ = auVar10._4_4_ + auVar7._4_4_;
      auVar28._8_4_ = auVar10._8_4_ + auVar7._8_4_;
      auVar28._12_4_ = auVar10._12_4_ + auVar7._12_4_;
      auVar8 = vsubps_avx(auVar10,auVar7);
      auVar31._0_4_ =
           ((-(_DAT_145fc6edc * fVar13 * fVar13 * auVar38._0_4_) + _DAT_145fc6edc) * fVar13 + fVar13
           ) * _DAT_145fc6edc;
      auVar31._4_4_ =
           ((-(_DAT_145fc6edc * fVar19 * fVar19 * auVar38._4_4_) + _DAT_145fc6edc) * fVar19 + fVar19
           ) * _DAT_145fc6edc;
      auVar31._8_4_ =
           ((-(_DAT_145fc6edc * fVar20 * fVar20 * auVar38._8_4_) + _DAT_145fc6edc) * fVar20 + fVar20
           ) * _DAT_145fc6edc;
      auVar31._12_4_ =
           ((-(_DAT_145fc6edc * fVar21 * fVar21 * auVar38._12_4_) + _DAT_145fc6edc) * fVar21 +
           fVar21) * _DAT_145fc6edc;
      auVar7 = vblendps_avx(auVar28,auVar8,1);
      auVar30 = vblendps_avx(auVar28,auVar8,2);
      auVar11 = vshufps_avx(auVar28,auVar8,0xa1);
      auVar8 = vblendps_avx(auVar8,auVar38,8);
      auVar14 = vshufps_avx(auVar7,auVar7,0x18);
      auVar10 = vshufpd_avx(auVar30,auVar30,1);
      auVar7 = vblendps_avx(auVar11,auVar38,4);
      auVar30 = vblendps_avx(auVar14,auVar38,1);
      auVar10 = vblendps_avx(auVar10,auVar38,2);
      auVar39._0_4_ = auVar30._0_4_ * auVar31._0_4_;
      auVar39._4_4_ = auVar30._4_4_ * auVar31._0_4_;
      auVar39._8_4_ = auVar30._8_4_ * auVar31._0_4_;
      auVar39._12_4_ = auVar30._12_4_ * auVar31._0_4_;
      auVar30 = vshufps_avx(auVar31,auVar31,0x55);
      auVar41._0_4_ = auVar30._0_4_ * auVar10._0_4_;
      auVar41._4_4_ = auVar30._4_4_ * auVar10._4_4_;
      auVar41._8_4_ = auVar30._8_4_ * auVar10._8_4_;
      auVar41._12_4_ = auVar30._12_4_ * auVar10._12_4_;
      auVar30 = vshufps_avx(auVar31,auVar31,0xaa);
      auVar10 = vshufps_avx(auVar31,auVar31,0xff);
      auVar29._0_4_ = auVar30._0_4_ * auVar7._0_4_;
      auVar29._4_4_ = auVar30._4_4_ * auVar7._4_4_;
      auVar29._8_4_ = auVar30._8_4_ * auVar7._8_4_;
      auVar29._12_4_ = auVar30._12_4_ * auVar7._12_4_;
      auVar26._0_4_ = auVar10._0_4_ * auVar8._0_4_;
      auVar26._4_4_ = auVar10._4_4_ * auVar8._4_4_;
      auVar26._8_4_ = auVar10._8_4_ * auVar8._8_4_;
      auVar26._12_4_ = auVar10._12_4_ * auVar8._12_4_;
      uVar1 = *(undefined4 *)(param_1 + 0x10e0);
      auVar32._4_4_ = uVar1;
      auVar32._0_4_ = uVar1;
      auVar32._8_4_ = uVar1;
      auVar32._12_4_ = uVar1;
      uVar1 = *(undefined4 *)(param_1 + 0x10f4);
      auVar46._4_4_ = uVar1;
      auVar46._0_4_ = uVar1;
      auVar46._8_4_ = uVar1;
      auVar46._12_4_ = uVar1;
      auVar7 = vcmpps_avx(auVar32,auVar46,1);
      auVar30 = vcmpps_avx(auVar32,auVar49,1);
      auVar7 = vblendvps_avx(auVar39,auVar41,auVar7);
      auVar8 = vcmpps_avx(auVar46,auVar49,1);
      auVar33._0_4_ = auVar8._0_4_ & auVar30._0_4_;
      auVar33._4_4_ = auVar8._4_4_ & auVar30._4_4_;
      auVar33._8_4_ = auVar8._8_4_ & auVar30._8_4_;
      auVar33._12_4_ = auVar8._12_4_ & auVar30._12_4_;
      auVar7 = vblendvps_avx(auVar7,auVar29,auVar33);
      auVar16 = ZEXT416(0) << 0x20;
      auVar30 = vcmpps_avx(auVar16,auVar22,1);
      auVar23._0_4_ = auVar30._0_4_;
      auVar23._4_4_ = auVar23._0_4_;
      auVar23._8_4_ = auVar23._0_4_;
      auVar23._12_4_ = auVar23._0_4_;
      auVar7 = vblendvps_avx(auVar7,auVar26,auVar23);
      auVar34._0_4_ = auVar7._0_4_ * _DAT_145fc6ee0;
      auVar34._4_4_ = auVar7._4_4_ * _UNK_145fc6ee4;
      auVar34._8_4_ = auVar7._8_4_ * _UNK_145fc6ee8;
      auVar34._12_4_ = auVar7._12_4_ * _UNK_145fc6eec;
      auVar30 = vhaddps_avx(auVar34,auVar34);
      auVar11 = vhaddps_avx(auVar30,auVar30);
      auVar30 = vrcpps_avx(auVar11);
      fVar54 = auVar11._0_4_;
      auVar42._0_4_ = _DAT_145fc6f10 ^ (uint)fVar54;
      fVar58 = auVar11._4_4_;
      auVar42._4_4_ = _DAT_145fc6f10 ^ (uint)fVar58;
      fVar60 = auVar11._8_4_;
      auVar42._8_4_ = _DAT_145fc6f10 ^ (uint)fVar60;
      fVar61 = auVar11._12_4_;
      auVar42._12_4_ = _DAT_145fc6f10 ^ (uint)fVar61;
      auVar35._0_4_ = -(fVar54 * fVar54) + _DAT_145fc6ed8;
      auVar35._4_4_ = -(fVar58 * fVar58) + _DAT_145fc6ed8;
      auVar35._8_4_ = -(fVar60 * fVar60) + _DAT_145fc6ed8;
      auVar35._12_4_ = -(fVar61 * fVar61) + _DAT_145fc6ed8;
      auVar8 = vmaxps_avx(auVar16,auVar35);
      fVar53 = auVar30._0_4_;
      fVar57 = auVar30._4_4_;
      fVar59 = auVar30._8_4_;
      fVar3 = auVar30._12_4_;
      auVar30 = vrsqrtps_avx(auVar8);
      fVar13 = auVar30._0_4_;
      fVar19 = auVar30._4_4_;
      fVar20 = auVar30._8_4_;
      fVar21 = auVar30._12_4_;
      auVar64._4_4_ = _DAT_146159bfc;
      auVar64._0_4_ = _DAT_146159bfc;
      auVar64._8_4_ = _DAT_146159bfc;
      auVar64._12_4_ = _DAT_146159bfc;
      auVar30 = vcmpps_avx(auVar64,auVar8,2);
      auVar36._0_4_ =
           (float)((uint)(((-(_DAT_145fc6edc * fVar13 * fVar13 * auVar8._0_4_) + _DAT_145fc6edc) *
                           fVar13 + fVar13) * auVar8._0_4_) & auVar30._0_4_);
      auVar36._4_4_ =
           (float)((uint)(((-(_DAT_145fc6edc * fVar19 * fVar19 * auVar8._4_4_) + _DAT_145fc6edc) *
                           fVar19 + fVar19) * auVar8._4_4_) & auVar30._4_4_);
      auVar36._8_4_ =
           (float)((uint)(((-(_DAT_145fc6edc * fVar20 * fVar20 * auVar8._8_4_) + _DAT_145fc6edc) *
                           fVar20 + fVar20) * auVar8._8_4_) & auVar30._8_4_);
      auVar36._12_4_ =
           (float)((uint)(((-(_DAT_145fc6edc * fVar21 * fVar21 * auVar8._12_4_) + _DAT_145fc6edc) *
                           fVar21 + fVar21) * auVar8._12_4_) & auVar30._12_4_);
      auVar50._0_4_ = (-((fVar54 * fVar53 - _DAT_145fc6ed8) * fVar53) + fVar53) * auVar36._0_4_;
      auVar50._4_4_ = (-((fVar58 * fVar57 - _DAT_145fc6ed8) * fVar57) + fVar57) * auVar36._4_4_;
      auVar50._8_4_ = (-((fVar60 * fVar59 - _DAT_145fc6ed8) * fVar59) + fVar59) * auVar36._8_4_;
      auVar50._12_4_ = (-((fVar61 * fVar3 - _DAT_145fc6ed8) * fVar3) + fVar3) * auVar36._12_4_;
      auVar30 = vrcpps_avx(auVar50);
      auVar47._0_4_ = _DAT_145fc6f10 ^ (uint)auVar36._0_4_;
      auVar47._4_4_ = _DAT_145fc6f10 ^ (uint)auVar36._4_4_;
      auVar47._8_4_ = _DAT_145fc6f10 ^ (uint)auVar36._8_4_;
      auVar47._12_4_ = _DAT_145fc6f10 ^ (uint)auVar36._12_4_;
      auVar62._0_4_ = (uint)auVar50._0_4_ & _DAT_145fc6f4c;
      auVar62._4_4_ = (uint)auVar50._4_4_ & _DAT_145fc6f4c;
      auVar62._8_4_ = (uint)auVar50._8_4_ & _DAT_145fc6f4c;
      auVar62._12_4_ = (uint)auVar50._12_4_ & _DAT_145fc6f4c;
      auVar8 = vcmpps_avx(auVar6,auVar62,1);
      fVar19 = auVar30._0_4_;
      fVar20 = auVar30._4_4_;
      fVar21 = auVar30._8_4_;
      fVar13 = auVar30._12_4_;
      auVar68._0_4_ = (auVar50._0_4_ * fVar19 - _DAT_145fc6ed8) * fVar19 - fVar19;
      auVar68._4_4_ = (auVar50._4_4_ * fVar20 - _DAT_145fc6ed8) * fVar20 - fVar20;
      auVar68._8_4_ = (auVar50._8_4_ * fVar21 - _DAT_145fc6ed8) * fVar21 - fVar21;
      auVar68._12_4_ = (auVar50._12_4_ * fVar13 - _DAT_145fc6ed8) * fVar13 - fVar13;
      auVar30 = vblendvps_avx(auVar50,auVar68,auVar8);
      fVar13 = auVar30._0_4_;
      fVar19 = auVar30._4_4_;
      fVar20 = auVar30._8_4_;
      fVar21 = auVar30._12_4_;
      fVar54 = fVar13 * fVar13;
      fVar58 = fVar19 * fVar19;
      fVar60 = fVar20 * fVar20;
      fVar61 = fVar21 * fVar21;
      auVar10 = vcmpps_avx(auVar11,auVar42,1);
      auVar11 = vcmpps_avx(auVar42,auVar11,0);
      auVar30 = vcmpps_avx(auVar36,auVar47,1);
      auVar63._0_4_ =
           fVar54 * fVar54 * fVar54 * fVar54 * fVar13 *
           (fVar54 * (fVar54 * (fVar54 * (fVar54 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188
                               ) + _DAT_14615a18c) + _DAT_14615a190) +
           fVar54 * fVar13 * (fVar54 * (fVar54 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c)
           + (float)(auVar8._0_4_ & ((uint)auVar50._0_4_ & _DAT_145fc6f10 | _DAT_146159bdc)) +
             fVar13;
      auVar63._4_4_ =
           fVar58 * fVar58 * fVar58 * fVar58 * fVar19 *
           (fVar58 * (fVar58 * (fVar58 * (fVar58 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188
                               ) + _DAT_14615a18c) + _DAT_14615a190) +
           fVar58 * fVar19 * (fVar58 * (fVar58 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c)
           + (float)(auVar8._4_4_ & ((uint)auVar50._4_4_ & _DAT_145fc6f10 | _DAT_146159bdc)) +
             fVar19;
      auVar63._8_4_ =
           fVar60 * fVar60 * fVar60 * fVar60 * fVar20 *
           (fVar60 * (fVar60 * (fVar60 * (fVar60 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188
                               ) + _DAT_14615a18c) + _DAT_14615a190) +
           fVar60 * fVar20 * (fVar60 * (fVar60 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c)
           + (float)(auVar8._8_4_ & ((uint)auVar50._8_4_ & _DAT_145fc6f10 | _DAT_146159bdc)) +
             fVar20;
      auVar63._12_4_ =
           fVar61 * fVar61 * fVar61 * fVar61 * fVar21 *
           (fVar61 * (fVar61 * (fVar61 * (fVar61 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188
                               ) + _DAT_14615a18c) + _DAT_14615a190) +
           fVar61 * fVar21 * (fVar61 * (fVar61 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c)
           + (float)(auVar8._12_4_ & ((uint)auVar50._12_4_ & _DAT_145fc6f10 | _DAT_146159bdc)) +
             fVar21;
      auVar51._4_4_ = _DAT_146159be0;
      auVar51._0_4_ = _DAT_146159be0;
      auVar51._8_4_ = _DAT_146159be0;
      auVar51._12_4_ = _DAT_146159be0;
      auVar65._4_4_ = _DAT_145fc6f80;
      auVar65._0_4_ = _DAT_145fc6f80;
      auVar65._8_4_ = _DAT_145fc6f80;
      auVar65._12_4_ = _DAT_145fc6f80;
      auVar30 = vblendvps_avx(auVar65,auVar51,auVar30);
      auVar66._4_4_ = _DAT_146159bdc;
      auVar66._0_4_ = _DAT_146159bdc;
      auVar66._8_4_ = _DAT_146159bdc;
      auVar66._12_4_ = _DAT_146159bdc;
      auVar55._0_4_ = auVar63._0_4_ + auVar30._0_4_;
      auVar55._4_4_ = auVar63._4_4_ + auVar30._4_4_;
      auVar55._8_4_ = auVar63._8_4_ + auVar30._8_4_;
      auVar55._12_4_ = auVar63._12_4_ + auVar30._12_4_;
      auVar30 = vblendvps_avx(auVar63,auVar55,auVar10);
      auVar69._4_4_ = _DAT_14615a1a0;
      auVar69._0_4_ = _DAT_14615a1a0;
      auVar69._8_4_ = _DAT_14615a1a0;
      auVar69._12_4_ = _DAT_14615a1a0;
      auVar8 = vcmpps_avx(auVar47,auVar36,1);
      auVar8 = vblendvps_avx(auVar69,auVar66,auVar8);
      auVar30 = vblendvps_avx(auVar30,auVar8,auVar11);
      auVar56._4_4_ = fVar12;
      auVar56._0_4_ = fVar12;
      auVar56._8_4_ = fVar12;
      auVar56._12_4_ = fVar12;
      auVar40._0_4_ = -(fVar12 * *(float *)(param_1 + 0x1110)) + *(float *)(param_1 + 0x1110);
      auVar40._4_4_ = -(fVar12 * *(float *)(param_1 + 0x1114)) + *(float *)(param_1 + 0x1114);
      auVar40._8_4_ = -(fVar12 * *(float *)(param_1 + 0x1118)) + *(float *)(param_1 + 0x1118);
      auVar40._12_4_ = -(fVar12 * *(float *)(param_1 + 0x111c)) + *(float *)(param_1 + 0x111c);
      fVar12 = _DAT_145fc6ed8 - fVar12;
      auVar14._4_4_ = fVar12;
      auVar14._0_4_ = fVar12;
      auVar14._8_4_ = fVar12;
      auVar14._12_4_ = fVar12;
      auVar8 = vunpcklps_avx(auVar14,auVar56);
      fVar12 = auVar30._0_4_ * auVar8._0_4_;
      fVar19 = auVar30._4_4_ * auVar8._4_4_;
      fVar21 = auVar30._8_4_ * auVar8._8_4_;
      fVar58 = auVar30._12_4_ * auVar8._12_4_;
      auVar43._0_4_ = _DAT_146159b48 * fVar12;
      auVar43._4_4_ = _DAT_146159b48 * fVar19;
      auVar43._8_4_ = _DAT_146159b48 * fVar21;
      auVar43._12_4_ = _DAT_146159b48 * fVar58;
      auVar30 = vroundps_avx(auVar43,0);
      fVar12 = auVar30._0_4_ * _DAT_146159be0 + fVar12;
      fVar19 = auVar30._4_4_ * _DAT_146159be0 + fVar19;
      fVar21 = auVar30._8_4_ * _DAT_146159be0 + fVar21;
      fVar58 = auVar30._12_4_ * _DAT_146159be0 + fVar58;
      auVar44._0_4_ = (int)auVar30._0_4_;
      auVar44._4_4_ = (int)auVar30._4_4_;
      auVar44._8_4_ = (int)auVar30._8_4_;
      auVar44._12_4_ = (int)auVar30._12_4_;
      fVar13 = fVar12 * fVar12;
      fVar20 = fVar19 * fVar19;
      fVar54 = fVar21 * fVar21;
      fVar60 = fVar58 * fVar58;
      fVar13 = fVar13 * (fVar13 * (fVar13 * (fVar13 * _DAT_146159be8 + _DAT_146159be4) +
                                  _DAT_146159bec) + _DAT_146159bf0) + _DAT_145fc6ed8;
      fVar20 = fVar20 * (fVar20 * (fVar20 * (fVar20 * _DAT_146159be8 + _DAT_146159be4) +
                                  _DAT_146159bec) + _DAT_146159bf0) + _DAT_145fc6ed8;
      fVar54 = fVar54 * (fVar54 * (fVar54 * (fVar54 * _DAT_146159be8 + _DAT_146159be4) +
                                  _DAT_146159bec) + _DAT_146159bf0) + _DAT_145fc6ed8;
      fVar60 = fVar60 * (fVar60 * (fVar60 * (fVar60 * _DAT_146159be8 + _DAT_146159be4) +
                                  _DAT_146159bec) + _DAT_146159bf0) + _DAT_145fc6ed8;
      auVar15._0_4_ = fVar13 * fVar12;
      auVar15._4_4_ = fVar20 * fVar19;
      auVar15._8_4_ = fVar54 * fVar21;
      auVar15._12_4_ = fVar60 * fVar58;
      auVar67._0_4_ = -(fVar12 * fVar13) - 0.0;
      auVar67._4_4_ = -(fVar19 * fVar20) - 0.0;
      auVar67._8_4_ = -(fVar21 * fVar54) - 0.0;
      auVar67._12_4_ = -(fVar58 * fVar60) - 0.0;
      auVar52._4_4_ = _DAT_145f43778;
      auVar52._0_4_ = _DAT_145f43778;
      auVar52._8_4_ = _DAT_145f43778;
      auVar52._12_4_ = _DAT_145f43778;
      auVar30 = vpand_avx(auVar44,auVar52);
      auVar30 = vpcmpeqd_avx(auVar30,auVar16);
      auVar30 = vblendvps_avx(auVar67,auVar15,auVar30);
      auVar8 = vrcpps_avx(auVar36);
      fVar13 = auVar8._0_4_;
      fVar19 = auVar8._4_4_;
      fVar20 = auVar8._8_4_;
      fVar12 = auVar8._12_4_;
      auVar16._0_4_ =
           (-((auVar36._0_4_ * fVar13 - _DAT_145fc6ed8) * fVar13) + fVar13) * auVar30._0_4_;
      auVar16._4_4_ =
           (-((auVar36._4_4_ * fVar19 - _DAT_145fc6ed8) * fVar19) + fVar19) * auVar30._4_4_;
      auVar16._8_4_ =
           (-((auVar36._8_4_ * fVar20 - _DAT_145fc6ed8) * fVar20) + fVar20) * auVar30._8_4_;
      auVar16._12_4_ =
           (-((auVar36._12_4_ * fVar12 - _DAT_145fc6ed8) * fVar12) + fVar12) * auVar30._12_4_;
      auVar30 = vshufps_avx(auVar16,auVar16,0x55);
      fVar21 = _DAT_145fc6ee0 * auVar30._0_4_ + auVar16._0_4_ * auVar7._0_4_;
      fVar54 = _UNK_145fc6ee4 * auVar30._4_4_ + auVar16._0_4_ * auVar7._4_4_;
      fVar58 = _UNK_145fc6ee8 * auVar30._8_4_ + auVar16._0_4_ * auVar7._8_4_;
      fVar60 = _UNK_145fc6eec * auVar30._12_4_ + auVar16._0_4_ * auVar7._12_4_;
      auVar17._0_4_ = fVar21 * fVar21;
      auVar17._4_4_ = fVar54 * fVar54;
      auVar17._8_4_ = fVar58 * fVar58;
      auVar17._12_4_ = fVar60 * fVar60;
      auVar30 = vhaddps_avx(auVar17,auVar17);
      auVar30 = vhaddps_avx(auVar30,auVar30);
      auVar8 = vrsqrtps_avx(auVar30);
      fVar12 = auVar8._0_4_;
      fVar13 = auVar8._4_4_;
      fVar19 = auVar8._8_4_;
      fVar20 = auVar8._12_4_;
      auVar8._0_4_ = fVar21 * ((-(_DAT_145fc6edc * fVar12 * fVar12 * auVar30._0_4_) + _DAT_145fc6edc
                               ) * fVar12 + fVar12);
      auVar8._4_4_ = fVar54 * ((-(_DAT_145fc6edc * fVar13 * fVar13 * auVar30._4_4_) + _DAT_145fc6edc
                               ) * fVar13 + fVar13);
      auVar8._8_4_ = fVar58 * ((-(_DAT_145fc6edc * fVar19 * fVar19 * auVar30._8_4_) + _DAT_145fc6edc
                               ) * fVar19 + fVar19);
      auVar8._12_4_ =
           fVar60 * ((-(_DAT_145fc6edc * fVar20 * fVar20 * auVar30._12_4_) + _DAT_145fc6edc) *
                     fVar20 + fVar20);
      auVar30 = vcmpps_avx(auVar47,auVar36,0);
      auVar7 = vblendvps_avx(auVar8,auVar7,auVar30);
      auVar24._0_4_ = auVar7._0_4_ + auVar7._0_4_;
      auVar24._4_4_ = auVar7._4_4_ + auVar7._4_4_;
      auVar24._8_4_ = auVar7._8_4_ + auVar7._8_4_;
      auVar24._12_4_ = auVar7._12_4_ + auVar7._12_4_;
      auVar30 = vshufps_avx(auVar7,auVar7,0xff);
      auVar8 = vshufps_avx(auVar7,auVar7,0xc9);
      auVar10 = vshufps_avx(auVar7,auVar7,0xd2);
      auVar11 = vshufps_avx(auVar24,auVar24,0xc9);
      auVar14 = vshufps_avx(auVar24,auVar24,0xd2);
      auVar18._0_4_ = auVar10._0_4_ * auVar24._0_4_ + auVar11._0_4_ * auVar30._0_4_;
      auVar18._4_4_ = auVar10._4_4_ * auVar24._4_4_ + auVar11._4_4_ * auVar30._4_4_;
      auVar18._8_4_ = auVar10._8_4_ * auVar24._8_4_ + auVar11._8_4_ * auVar30._8_4_;
      auVar18._12_4_ = auVar10._12_4_ * auVar24._12_4_ + auVar11._12_4_ * auVar30._12_4_;
      auVar7 = *(undefined1 (*) [16])(plVar2 + 0xe);
      auVar27._0_4_ = -(auVar30._0_4_ * auVar14._0_4_) + auVar8._0_4_ * auVar24._0_4_;
      auVar27._4_4_ = -(auVar30._4_4_ * auVar14._4_4_) + auVar8._4_4_ * auVar24._4_4_;
      auVar27._8_4_ = -(auVar30._8_4_ * auVar14._8_4_) + auVar8._8_4_ * auVar24._8_4_;
      auVar27._12_4_ = -(auVar30._12_4_ * auVar14._12_4_) + auVar8._12_4_ * auVar24._12_4_;
      auVar9._0_4_ = -(auVar14._0_4_ * auVar10._0_4_) -
                     (auVar8._0_4_ * auVar11._0_4_ - _DAT_145fc6ed8);
      auVar9._4_4_ = -(auVar14._4_4_ * auVar10._4_4_) -
                     (auVar8._4_4_ * auVar11._4_4_ - _DAT_145fc6ed8);
      auVar9._8_4_ = -(auVar14._8_4_ * auVar10._8_4_) -
                     (auVar8._8_4_ * auVar11._8_4_ - _DAT_145fc6ed8);
      auVar9._12_4_ =
           -(auVar14._12_4_ * auVar10._12_4_) - (auVar8._12_4_ * auVar11._12_4_ - _DAT_145fc6ed8);
      fVar12 = *(float *)(plVar2 + 8);
      fVar13 = *(float *)((longlong)plVar2 + 0x44);
      fVar19 = *(float *)(plVar2 + 9);
      fVar20 = *(float *)((longlong)plVar2 + 0x4c);
      fVar21 = *(float *)(plVar2 + 10);
      fVar54 = *(float *)((longlong)plVar2 + 0x54);
      fVar58 = *(float *)(plVar2 + 0xb);
      fVar60 = *(float *)((longlong)plVar2 + 0x5c);
      auVar8 = vshufps_avx(auVar18,auVar18,0x55);
      auVar30 = vpunpckhwd_avx(auVar7,auVar7);
      auVar30 = vpsrad_avx(auVar30,0x10);
      auVar30 = vcvtdq2ps_avx(auVar30);
      auVar30 = vshufpd_avx(auVar30,auVar30,3);
      auVar10 = vshufps_avx(auVar9,auVar9,0x55);
      auVar11 = vshufps_avx(auVar9,auVar9,0xaa);
      auVar14 = vshufps_avx(auVar18,auVar18,0xaa);
      auVar6 = vshufps_avx(auVar27,auVar27,0x55);
      auVar15 = vshufps_avx(auVar27,auVar27,0xaa);
      auVar16 = vshufps_avx(auVar40,auVar40,0x55);
      fVar61 = *(float *)(plVar2 + 0xc);
      fVar3 = *(float *)((longlong)plVar2 + 100);
      fVar53 = *(float *)(plVar2 + 0xd);
      fVar57 = *(float *)((longlong)plVar2 + 0x6c);
      auVar45._0_4_ = fVar61 * auVar11._0_4_ + fVar21 * auVar6._0_4_ + auVar18._0_4_ * fVar12;
      auVar45._4_4_ = fVar3 * auVar11._4_4_ + fVar54 * auVar6._4_4_ + auVar18._0_4_ * fVar13;
      auVar45._8_4_ = fVar53 * auVar11._8_4_ + fVar58 * auVar6._8_4_ + auVar18._0_4_ * fVar19;
      auVar45._12_4_ = fVar57 * auVar11._12_4_ + fVar60 * auVar6._12_4_ + auVar18._0_4_ * fVar20;
      auVar11 = vshufps_avx(auVar40,auVar40,0xaa);
      auVar25._0_4_ = fVar61 * auVar14._0_4_ + fVar21 * auVar10._0_4_ + fVar12 * auVar27._0_4_;
      auVar25._4_4_ = fVar3 * auVar14._4_4_ + fVar54 * auVar10._4_4_ + fVar13 * auVar27._0_4_;
      auVar25._8_4_ = fVar53 * auVar14._8_4_ + fVar58 * auVar10._8_4_ + fVar19 * auVar27._0_4_;
      auVar25._12_4_ = fVar57 * auVar14._12_4_ + fVar60 * auVar10._12_4_ + fVar20 * auVar27._0_4_;
      auVar48._0_4_ =
           fVar61 * auVar11._0_4_ +
           fVar21 * auVar16._0_4_ +
           fVar12 * auVar40._0_4_ + auVar30._0_4_ * _DAT_146159c90 + auVar7._0_4_;
      auVar48._4_4_ =
           fVar3 * auVar11._4_4_ +
           fVar54 * auVar16._4_4_ +
           fVar13 * auVar40._0_4_ + auVar30._4_4_ * _UNK_146159c94 + auVar7._4_4_;
      auVar48._8_4_ =
           fVar53 * auVar11._8_4_ +
           fVar58 * auVar16._8_4_ +
           fVar19 * auVar40._0_4_ + auVar30._8_4_ * _UNK_146159c98 + auVar7._8_4_;
      auVar48._12_4_ =
           fVar57 * auVar11._12_4_ +
           fVar60 * auVar16._12_4_ +
           fVar20 * auVar40._0_4_ + auVar30._12_4_ * _UNK_146159c9c + auVar7._12_4_;
      auVar10._4_4_ = _DAT_14615a290;
      auVar10._0_4_ = _DAT_14615a290;
      auVar10._8_4_ = _DAT_14615a290;
      auVar10._12_4_ = _DAT_14615a290;
      _fStack_e8 = CONCAT44(fVar3 * auVar15._4_4_ + fVar54 * auVar8._4_4_ + fVar13 * auVar9._0_4_,
                            fVar61 * auVar15._0_4_ + fVar21 * auVar8._0_4_ + fVar12 * auVar9._0_4_);
      _fStack_e0 = CONCAT44(fVar57 * auVar15._12_4_ + fVar60 * auVar8._12_4_ + fVar20 * auVar9._0_4_
                            ,fVar53 * auVar15._8_4_ + fVar58 * auVar8._8_4_ + fVar19 * auVar9._0_4_)
      ;
      auVar7 = vrcpps_avx(auVar10);
      fVar12 = auVar7._0_4_;
      fVar13 = auVar7._4_4_;
      fVar19 = auVar7._8_4_;
      fVar20 = auVar7._12_4_;
      auVar7._0_4_ = auVar48._0_4_ *
                     ((-(fVar12 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar12 + fVar12);
      auVar7._4_4_ = auVar48._4_4_ *
                     ((-(fVar13 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar13 + fVar13);
      auVar7._8_4_ = auVar48._8_4_ *
                     ((-(fVar19 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar19 + fVar19);
      auVar7._12_4_ =
           auVar48._12_4_ * ((-(fVar20 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar20 + fVar20);
      auVar7 = vroundps_avx(auVar7,3);
      auVar11._0_4_ = -(auVar7._0_4_ * _DAT_14615a290) + auVar48._0_4_;
      auVar11._4_4_ = -(auVar7._4_4_ * _DAT_14615a290) + auVar48._4_4_;
      auVar11._8_4_ = -(auVar7._8_4_ * _DAT_14615a290) + auVar48._8_4_;
      auVar11._12_4_ = -(auVar7._12_4_ * _DAT_14615a290) + auVar48._12_4_;
      auVar30._0_4_ = (int)auVar7._0_4_;
      auVar30._4_4_ = (int)auVar7._4_4_;
      auVar30._8_4_ = (int)auVar7._8_4_;
      auVar30._12_4_ = (int)auVar7._12_4_;
      auVar30 = vpackssdw_avx(auVar30,auVar30);
      auVar7 = vblendps_avx(auVar48,auVar11,3);
      auStack_b8 = vinsertps_avx(auVar7,auVar30,0x30);
      auStack_d8 = vblendps_avx(auVar25,*(undefined1 (*) [16])(plVar2 + 10),8);
      auStack_c8 = vblendps_avx(auVar45,*(undefined1 (*) [16])(plVar2 + 0xc),8);
      (**(code **)(*plVar2 + 0x170))(plVar2,&fStack_e8,0,0,1);
      return 1;
    }
  }
  return 0;
}

