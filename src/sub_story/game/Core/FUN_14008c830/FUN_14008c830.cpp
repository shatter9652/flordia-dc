// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008c830  size: 1538 bytes
// Name:    FUN_14008c830
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14008c830(longlong param_1,undefined1 (*param_2) [16],ushort *param_3,uint param_4,
                  ushort *param_5,float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar32;
  float fVar33;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar34;
  undefined1 auVar31 [16];
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [64];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [64];
  undefined1 auVar53 [16];
  undefined1 auVar54 [64];
  undefined1 auVar55 [16];
  undefined1 auVar56 [64];
  undefined1 auVar57 [16];
  undefined1 auVar58 [64];
  float fStack_dc;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 aauStack_b8 [9] [16];
  undefined1 auVar50 [64];
  
  uVar3 = _DAT_145fc6f70;
  auVar36._0_12_ = ZEXT812(0);
  auVar36._12_4_ = 0;
  uVar5 = *param_3 & 0x3fff;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = *(ulonglong *)(param_1 + 0x21c8 + (ulonglong)uVar5 * 8);
  auVar10 = vshufps_avx(auVar14,ZEXT416(*(uint *)(param_1 + 0x21c8 + (ulonglong)uVar5 * 8)),0x14);
  uVar6 = param_3[2] & 0x3fff;
  aauStack_b8[0] =
       vsubps_avx(*(undefined1 (*) [16])(param_1 + 0x1c0 + (ulonglong)(uVar5 << 4)),auVar10);
  auVar54 = ZEXT1664(aauStack_b8[0]);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *(ulonglong *)(param_1 + 0x21c8 + (ulonglong)uVar6 * 8);
  auVar10 = vshufps_avx(auVar15,ZEXT416(*(uint *)(param_1 + 0x21c8 + (ulonglong)uVar6 * 8)),0x14);
  auVar9._0_4_ = aauStack_b8[0]._0_4_ + auVar10._0_4_;
  auVar9._4_4_ = aauStack_b8[0]._4_4_ + auVar10._4_4_;
  auVar9._8_4_ = aauStack_b8[0]._8_4_ + auVar10._8_4_;
  auVar9._12_4_ = aauStack_b8[0]._12_4_ + auVar10._12_4_;
  uVar5 = *param_5 & 0x3fff;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = *(ulonglong *)(param_1 + 0x21c8 + (ulonglong)uVar5 * 8);
  auStack_c8 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 0x1c0 + (ulonglong)(uVar6 << 4)),auVar9);
  auVar58 = ZEXT1664(auStack_c8);
  auVar16._4_4_ = _DAT_145fc6f70;
  auVar16._0_4_ = _DAT_145fc6f70;
  auVar16._8_4_ = _DAT_145fc6f70;
  auVar16._12_4_ = _DAT_145fc6f70;
  auVar10 = vcmpps_avx(auStack_c8,auVar36,0);
  auVar9 = vshufps_avx(auVar27,ZEXT416(*(uint *)(param_1 + 0x21c8 + (ulonglong)uVar5 * 8)),0x14);
  uVar6 = param_5[2] & 0x3fff;
  auVar14 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 0x1c0 + (ulonglong)(uVar5 << 4)),auVar9);
  auVar47 = ZEXT1664(auVar14);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = *(ulonglong *)(param_1 + 0x21c8 + (ulonglong)uVar6 * 8);
  auVar9 = vshufps_avx(auVar28,ZEXT416(*(uint *)(param_1 + 0x21c8 + (ulonglong)uVar6 * 8)),0x14);
  uVar7 = vmovmskps_avx(auVar10);
  auVar10 = auVar16;
  if ((~(byte)uVar7 & 7) != 0) {
    auVar42._0_4_ = auStack_c8._0_4_ & _DAT_145fc6f4c;
    auVar42._4_4_ = auStack_c8._4_4_ & _DAT_145fc6f4c;
    auVar42._8_4_ = auStack_c8._8_4_ & _DAT_145fc6f4c;
    auVar42._12_4_ = auStack_c8._12_4_ & _DAT_145fc6f4c;
    auVar10._4_4_ = (float)_DAT_145fc6f70;
    auVar10._0_4_ = (float)_DAT_145fc6f70;
    auVar10._8_4_ = (float)_DAT_145fc6f70;
    auVar10._12_4_ = (float)_DAT_145fc6f70;
    auVar15 = vcmpps_avx(auVar42,auVar10,0x11);
    uVar7 = vmovmskps_avx(auVar15);
    if ((~(byte)uVar7 & 7) == 0) {
      auVar10 = vmovshdup_avx(auStack_c8);
      auVar48._0_12_ = ZEXT812(0);
      auVar48._12_4_ = 0;
      auVar11._0_4_ = auStack_c8._0_4_ ^ _DAT_145fc6f10;
      auVar11._4_4_ = auStack_c8._4_4_ ^ _DAT_145fc6f10;
      auVar11._8_4_ = auStack_c8._8_4_ ^ _DAT_145fc6f10;
      auVar11._12_4_ = auStack_c8._12_4_ ^ _DAT_145fc6f10;
      auVar10 = vunpcklps_avx(auVar10,auVar11);
      auVar10 = vinsertps_avx(auVar10,auStack_c8,0x74);
      fVar8 = auVar10._0_4_;
      auVar43._0_4_ = fVar8 * fVar8;
      fVar26 = auVar10._4_4_;
      auVar43._4_4_ = fVar26 * fVar26;
      fVar32 = auVar10._8_4_;
      auVar43._8_4_ = fVar32 * fVar32;
      fVar33 = auVar10._12_4_;
      auVar43._12_4_ = fVar33 * fVar33;
      auVar10 = vblendps_avx(auVar43,auVar48,8);
      auVar10 = vhaddps_avx(auVar10,auVar10);
      auVar10 = vhaddps_avx(auVar10,auVar10);
      auVar15 = vrsqrtps_avx(auVar10);
      auVar10._0_4_ = auVar15._0_4_ * fVar8;
      auVar10._4_4_ = auVar15._4_4_ * fVar26;
      auVar10._8_4_ = auVar15._8_4_ * fVar32;
      auVar10._12_4_ = auVar15._12_4_ * fVar33;
    }
  }
  auVar22._0_4_ = auVar14._0_4_ + auVar9._0_4_;
  auVar22._4_4_ = auVar14._4_4_ + auVar9._4_4_;
  auVar22._8_4_ = auVar14._8_4_ + auVar9._8_4_;
  auVar22._12_4_ = auVar14._12_4_ + auVar9._12_4_;
  auVar52 = ZEXT1664(auVar16);
  auVar15 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 0x1c0 + (ulonglong)(uVar6 << 4)),auVar22);
  auVar56 = ZEXT1664(auVar15);
  auVar9 = vcmpps_avx(auVar15,auVar36,0);
  uVar7 = vmovmskps_avx(auVar9);
  if ((~(byte)uVar7 & 7) != 0) {
    auVar51._4_4_ = _DAT_145fc6f70;
    auVar51._0_4_ = _DAT_145fc6f70;
    auVar51._8_4_ = _DAT_145fc6f70;
    auVar51._12_4_ = _DAT_145fc6f70;
    auVar52 = ZEXT1664(auVar51);
    auVar23._0_4_ = auVar15._0_4_ & _DAT_145fc6f4c;
    auVar23._4_4_ = auVar15._4_4_ & _DAT_145fc6f4c;
    auVar23._8_4_ = auVar15._8_4_ & _DAT_145fc6f4c;
    auVar23._12_4_ = auVar15._12_4_ & _DAT_145fc6f4c;
    auVar9 = vcmpps_avx(auVar23,auVar51,0x11);
    uVar7 = vmovmskps_avx(auVar9);
    if ((~(byte)uVar7 & 7) == 0) {
      auVar9 = vmovshdup_avx(auVar15);
      auVar24._0_4_ = auVar15._0_4_ ^ _DAT_145fc6f10;
      auVar24._4_4_ = auVar15._4_4_ ^ _DAT_145fc6f10;
      auVar24._8_4_ = auVar15._8_4_ ^ _DAT_145fc6f10;
      auVar24._12_4_ = auVar15._12_4_ ^ _DAT_145fc6f10;
      auVar9 = vunpcklps_avx(auVar9,auVar24);
      auVar9 = vinsertps_avx(auVar9,auVar15,0x74);
      fVar8 = auVar9._0_4_;
      auVar29._0_4_ = fVar8 * fVar8;
      fVar26 = auVar9._4_4_;
      auVar29._4_4_ = fVar26 * fVar26;
      fVar32 = auVar9._8_4_;
      auVar29._8_4_ = fVar32 * fVar32;
      fVar33 = auVar9._12_4_;
      auVar29._12_4_ = fVar33 * fVar33;
      auVar9 = vblendps_avx(auVar29,auVar36,8);
      auVar9 = vhaddps_avx(auVar9,auVar9);
      auVar9 = vhaddps_avx(auVar9,auVar9);
      auVar9 = vrsqrtps_avx(auVar9);
      auVar52 = ZEXT1664(CONCAT412(auVar9._12_4_ * fVar33,
                                   CONCAT48(auVar9._8_4_ * fVar32,
                                            CONCAT44(auVar9._4_4_ * fVar26,auVar9._0_4_ * fVar8))));
    }
  }
  auVar30._0_4_ = (uint)auVar10._0_4_ & _DAT_145fc6f4c;
  auVar30._4_4_ = (uint)auVar10._4_4_ & _DAT_145fc6f4c;
  auVar30._8_4_ = (uint)auVar10._8_4_ & _DAT_145fc6f4c;
  auVar30._12_4_ = (uint)auVar10._12_4_ & _DAT_145fc6f4c;
  auVar9 = vcmpps_avx(auVar30,auVar16,0x11);
  uVar7 = vmovmskps_avx(auVar9);
  if ((~(byte)uVar7 & 7) == 0) {
    auVar49._4_4_ = _DAT_145fc6f70;
    auVar49._0_4_ = _DAT_145fc6f70;
    auVar49._8_4_ = _DAT_145fc6f70;
    auVar49._12_4_ = _DAT_145fc6f70;
    auVar50 = ZEXT1664(auVar49);
    fVar8 = auVar52._0_4_;
    auVar17._0_4_ = (uint)fVar8 & _DAT_145fc6f4c;
    fVar26 = auVar52._4_4_;
    auVar17._4_4_ = (uint)fVar26 & _DAT_145fc6f4c;
    fVar32 = auVar52._8_4_;
    auVar17._8_4_ = (uint)fVar32 & _DAT_145fc6f4c;
    fVar33 = auVar52._12_4_;
    auVar17._12_4_ = (uint)fVar33 & _DAT_145fc6f4c;
    auVar9 = vcmpps_avx(auVar17,auVar49,0x11);
    uVar7 = vmovmskps_avx(auVar9);
    if ((~(byte)uVar7 & 7) == 0) {
      auVar18._0_4_ = fVar8 * auVar10._0_4_;
      auVar18._4_4_ = fVar26 * auVar10._4_4_;
      auVar18._8_4_ = fVar32 * auVar10._8_4_;
      auVar18._12_4_ = fVar33 * auVar10._12_4_;
      auVar10 = vblendps_avx(auVar18,ZEXT816(0) << 0x40,8);
      auVar10 = vhaddps_avx(auVar10,auVar10);
      auVar10 = vhaddps_avx(auVar10,auVar10);
      if (auVar10._0_4_ < _DAT_1461718f0) {
        auVar19._0_4_ = fVar8 * auVar14._0_4_;
        auVar19._4_4_ = fVar26 * auVar14._4_4_;
        auVar19._8_4_ = fVar32 * auVar14._8_4_;
        auVar19._12_4_ = fVar33 * auVar14._12_4_;
        auVar10 = vblendps_avx(auVar19,ZEXT816(0) << 0x40,8);
        auVar10 = vhaddps_avx(auVar10,auVar10);
        auVar10 = vhaddps_avx(auVar10,auVar10);
        auStack_d8 = vblendps_avx(auVar52._0_16_,auVar10,8);
        cVar4 = func_0x0001450e7a40(aauStack_b8,auStack_c8,auStack_d8,&fStack_dc,0);
        auVar49 = auVar50._0_16_;
        fVar8 = *(float *)(param_3 + 0x20);
        fVar26 = auVar58._0_4_;
        fVar32 = auVar58._4_4_;
        fVar33 = auVar58._8_4_;
        fVar34 = auVar58._12_4_;
        if (_DAT_14615d770 < fVar8) {
          auVar12._0_4_ = fVar26 * fVar26;
          auVar12._4_4_ = fVar32 * fVar32;
          auVar12._8_4_ = fVar33 * fVar33;
          auVar12._12_4_ = fVar34 * fVar34;
          auVar20._0_12_ = ZEXT812(0);
          auVar20._12_4_ = 0;
          auVar10 = vblendps_avx(auVar12,auVar20,8);
          auVar10 = vhaddps_avx(auVar10,auVar10);
          auVar9 = vhaddps_avx(auVar10,auVar10);
          auVar10 = vrsqrtss_avx(auVar9,auVar9);
          fVar8 = auVar10._0_4_;
          auVar10 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar9,2);
          fVar8 = (float)(auVar10._0_4_ &
                         (uint)(((fVar8 * fVar8 * auVar9._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) *
                                 fVar8 + fVar8) * auVar9._0_4_));
          *(float *)(param_3 + 0x20) = fVar8;
        }
        fVar40 = _DAT_14615af54;
        uVar5 = _DAT_145fc6f10;
        fVar13 = _DAT_146159ef4;
        if (_DAT_14615af54 < fVar8) {
          fVar13 = 0.0;
          fVar8 = _DAT_145fc6ed8;
          if ((*(uint *)(param_3 + 6) & 1) == 0) {
            fVar13 = _DAT_146159ef4;
            fVar8 = 0.0;
          }
          fVar13 = fVar8 * _DAT_146159fa0 + fVar13;
        }
        if ((cVar4 != '\0') && (fStack_dc < fVar13 + _DAT_145fc6ed8)) {
          auVar37._0_8_ = CONCAT44(_DAT_145fc6f10,_DAT_145fc6f10);
          auVar37._8_4_ = _DAT_145fc6f10;
          auVar37._12_4_ = _DAT_145fc6f10;
          if ((float)((uint)fVar13 ^ _DAT_145fc6f10) < fStack_dc) {
            fVar26 = fVar26 * fStack_dc;
            fVar32 = fVar32 * fStack_dc;
            fVar33 = fVar33 * fStack_dc;
            fVar34 = fVar34 * fStack_dc;
            fVar13 = auVar56._0_4_;
            auVar57._0_4_ = fVar13 * fVar13;
            fVar1 = auVar56._4_4_;
            auVar57._4_4_ = fVar1 * fVar1;
            fVar2 = auVar56._8_4_;
            auVar57._8_4_ = fVar2 * fVar2;
            fVar35 = auVar56._12_4_;
            auVar57._12_4_ = fVar35 * fVar35;
            auVar21._0_4_ = auVar54._0_4_ + fVar26;
            auVar21._4_4_ = auVar54._4_4_ + fVar32;
            auVar21._8_4_ = auVar54._8_4_ + fVar33;
            auVar21._12_4_ = auVar54._12_4_ + fVar34;
            auVar53._0_12_ = ZEXT812(0);
            auVar53._12_4_ = 0;
            auVar10 = vsubps_avx(auVar21,auVar47._0_16_);
            auVar25._0_4_ = fVar13 * auVar10._0_4_;
            auVar25._4_4_ = fVar1 * auVar10._4_4_;
            auVar25._8_4_ = fVar2 * auVar10._8_4_;
            auVar25._12_4_ = fVar35 * auVar10._12_4_;
            auVar10 = vblendps_avx(auVar25,auVar53,8);
            auVar9 = vblendps_avx(auVar57,auVar53,8);
            fVar8 = *(float *)(param_5 + 0x20);
            auVar10 = vhaddps_avx(auVar10,auVar10);
            auVar9 = vhaddps_avx(auVar9,auVar9);
            auVar10 = vhaddps_avx(auVar10,auVar10);
            auVar9 = vhaddps_avx(auVar9,auVar9);
            auVar10 = vdivps_avx(auVar10,auVar9);
            if (_DAT_14615d770 < fVar8) {
              auVar14 = vrsqrtss_avx(auVar9,auVar9);
              fVar8 = auVar14._0_4_;
              auVar14 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar9,2);
              fVar8 = (float)(auVar14._0_4_ &
                             (uint)(((fVar8 * fVar8 * auVar9._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc
                                     ) * fVar8 + fVar8) * auVar9._0_4_));
              *(float *)(param_5 + 0x20) = fVar8;
            }
            fVar41 = _DAT_146159ef4;
            if (fVar40 < fVar8) {
              fVar40 = 0.0;
              fVar8 = _DAT_145fc6ed8;
              if ((*(uint *)(param_5 + 6) & 1) == 0) {
                fVar40 = _DAT_146159ef4;
                fVar8 = 0.0;
              }
              fVar41 = fVar8 * _DAT_146159fa0 + fVar40;
            }
            fVar8 = auVar10._0_4_;
            if (((float)((uint)fVar41 ^ uVar5) < fVar8) && (fVar8 < fVar41 + _DAT_145fc6ed8)) {
              auVar55._0_4_ = fVar8 * fVar13 + auVar47._0_4_;
              auVar55._4_4_ = fVar8 * fVar1 + auVar47._4_4_;
              auVar55._8_4_ = fVar8 * fVar2 + auVar47._8_4_;
              auVar55._12_4_ = fVar8 * fVar35 + auVar47._12_4_;
              auVar9 = vsubps_avx(auVar55,auVar21);
              auVar10 = vshufpd_avx(auVar9,auVar9,1);
              auVar38._0_8_ = auVar10._0_8_ ^ auVar37._0_8_;
              auVar38._8_8_ = auVar10._8_8_ ^ auVar37._8_8_;
              auVar10 = vmaxss_avx(auVar38,auVar10);
              if ((auVar10._0_4_ < _DAT_1461626e4) &&
                 (auVar39._0_4_ = auVar9._0_4_ * auVar9._0_4_,
                 auVar39._4_4_ = auVar9._4_4_ * auVar9._4_4_,
                 auVar39._8_4_ = auVar9._8_4_ * auVar9._8_4_,
                 auVar39._12_4_ = auVar9._12_4_ * auVar9._12_4_,
                 auVar10 = vhaddps_avx(auVar39,auVar39), auVar10._0_4_ <= _DAT_146159f8c)) {
                auVar10 = vcmpss_avx(ZEXT416((uint)fStack_dc),ZEXT416(_DAT_14615d120),1);
                auVar44._4_4_ = _DAT_145fc6f48;
                auVar44._0_4_ = _DAT_145fc6f48;
                auVar44._8_4_ = _DAT_145fc6f48;
                auVar44._12_4_ = _DAT_145fc6f48;
                auVar46._4_4_ = _DAT_145fc6ed8;
                auVar46._0_4_ = _DAT_145fc6ed8;
                auVar46._8_4_ = _DAT_145fc6ed8;
                auVar46._12_4_ = _DAT_145fc6ed8;
                auVar10 = vblendvps_avx(auVar46,auVar44,auVar10);
                auVar45._0_4_ = fVar26 * fVar26;
                auVar45._4_4_ = fVar32 * fVar32;
                auVar45._8_4_ = fVar33 * fVar33;
                auVar45._12_4_ = fVar34 * fVar34;
                fVar35 = auVar10._0_4_;
                auVar10 = vblendps_avx(auVar45,ZEXT416(0) << 0x20,8);
                auVar10 = vhaddps_avx(auVar10,auVar10);
                auVar10 = vhaddps_avx(auVar10,auVar10);
                auVar9 = vrsqrtps_avx(auVar10);
                fVar40 = auVar9._0_4_;
                fVar13 = auVar9._4_4_;
                fVar1 = auVar9._8_4_;
                fVar2 = auVar9._12_4_;
                auVar31._0_4_ =
                     (-((fVar40 * fVar40 * auVar10._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar40
                       ) - fVar40) * auVar52._0_4_ * fVar26 * fVar35;
                auVar31._4_4_ =
                     (-((fVar13 * fVar13 * auVar10._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar13
                       ) - fVar13) * auVar52._4_4_ * fVar32 * fVar35;
                auVar31._8_4_ =
                     (-((fVar1 * fVar1 * auVar10._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar1) -
                     fVar1) * auVar52._8_4_ * fVar33 * fVar35;
                auVar31._12_4_ =
                     (-((fVar2 * fVar2 * auVar10._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar2)
                     - fVar2) * auVar52._12_4_ * fVar34 * fVar35;
                auVar10 = vblendps_avx(auVar31,ZEXT416(0) << 0x20,8);
                auVar10 = vhaddps_avx(auVar10,auVar10);
                auVar10 = vhaddps_avx(auVar10,auVar10);
                if (0.0 < auVar10._0_4_ == param_4) {
                  *param_6 = fStack_dc;
                  *param_7 = fVar8;
                  auVar49 = auVar21;
                }
              }
            }
          }
        }
      }
      *param_2 = auVar49;
      return;
    }
  }
  *(undefined4 *)*param_2 = _DAT_145fc6f70;
  *(undefined4 *)(*param_2 + 4) = uVar3;
  *(undefined4 *)(*param_2 + 8) = uVar3;
  *(undefined4 *)(*param_2 + 0xc) = uVar3;
  return;
}

