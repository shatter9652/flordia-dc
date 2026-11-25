// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400847e0  size: 1235 bytes
// Name:    FUN_1400847e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ffa120, FUN_140084cc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400847e0(longlong param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  longlong param_4)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  float fVar3;
  float fVar7;
  float fVar8;
  undefined1 auVar4 [16];
  float fVar9;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar18;
  float fVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [64];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [64];
  float fVar39;
  float fVar40;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar41;
  undefined1 auVar38 [64];
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [64];
  float fVar48;
  undefined1 auVar49 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined1 auVar32 [64];
  undefined1 auVar37 [64];
  
  uStack_e8 = *(undefined8 *)param_2[3];
  uStack_e0 = *(undefined8 *)(param_2[3] + 8);
  FUN_140084cc0(uStack_e8,&uStack_e8);
  *(undefined8 *)param_2[3] = uStack_e8;
  *(undefined8 *)(param_2[3] + 8) = uStack_e0;
  auVar4 = *param_3;
  auVar26 = ZEXT1664(auVar4);
  if (param_4 != 0) {
    lVar2 = func_0x000144f20050(*(undefined4 *)(param_1 + 0x9c));
    auVar4 = auVar26._0_16_;
    if (lVar2 != 0) {
      lVar2 = FUN_144ffa120(lVar2,param_4);
      auVar4 = auVar26._0_16_;
      if (lVar2 != 0) {
        auVar4 = *(undefined1 (*) [16])(lVar2 + 0x10);
      }
    }
  }
  fVar10 = _DAT_145fc6f08;
  fVar39 = _DAT_145fc6ed8;
  auVar1._8_8_ = uStack_e0;
  auVar1._0_8_ = uStack_e8;
  auVar34 = ZEXT464((uint)_DAT_145fc6ed8);
  auVar4 = vsubps_avx(auVar1,auVar4);
  auVar25._0_12_ = ZEXT812(0);
  auVar25._12_4_ = 0;
  auVar26 = ZEXT1664(auVar25);
  fVar27 = auVar4._0_4_;
  auVar11._0_4_ = fVar27 * fVar27;
  fVar29 = auVar4._4_4_;
  auVar11._4_4_ = fVar29 * fVar29;
  fVar3 = auVar4._8_4_;
  auVar11._8_4_ = fVar3 * fVar3;
  fVar8 = auVar4._12_4_;
  auVar11._12_4_ = fVar8 * fVar8;
  auVar4 = vblendps_avx(auVar11,auVar25,8);
  auVar4 = vhaddps_avx(auVar4,auVar4);
  auVar4 = vhaddps_avx(auVar4,auVar4);
  auVar1 = vrsqrtps_avx(auVar4);
  fVar28 = auVar1._0_4_;
  fVar42 = auVar1._4_4_;
  fVar7 = auVar1._8_4_;
  fVar9 = auVar1._12_4_;
  auVar35._0_4_ =
       ((_DAT_145fc6f08 * fVar28 * fVar28 * auVar4._0_4_ - _DAT_145fc6f08) * fVar28 + fVar28) *
       fVar27;
  auVar35._4_4_ =
       ((_DAT_145fc6f08 * fVar42 * fVar42 * auVar4._4_4_ - _DAT_145fc6f08) * fVar42 + fVar42) *
       fVar29;
  auVar35._8_4_ =
       ((_DAT_145fc6f08 * fVar7 * fVar7 * auVar4._8_4_ - _DAT_145fc6f08) * fVar7 + fVar7) * fVar3;
  auVar35._12_4_ =
       ((_DAT_145fc6f08 * fVar9 * fVar9 * auVar4._12_4_ - _DAT_145fc6f08) * fVar9 + fVar9) * fVar8;
  auVar37 = ZEXT1664(auVar35);
  auVar4._0_4_ = auVar35._0_4_ * _DAT_145fc6ed8;
  auVar4._4_4_ = auVar35._4_4_ * 0.0;
  auVar4._8_4_ = auVar35._8_4_ * 0.0;
  auVar4._12_4_ = auVar35._12_4_ * 0.0;
  auVar5 = vshufps_avx(auVar35,auVar35,0xc9);
  param_2[2] = auVar35;
  auVar4 = vshufps_avx(auVar4,auVar4,0xd2);
  fVar3 = -(auVar5._0_4_ * fVar39) + auVar4._0_4_;
  fVar7 = -(auVar5._4_4_ * 0.0) + auVar4._4_4_;
  fVar8 = -(auVar5._8_4_ * 0.0) + auVar4._8_4_;
  fVar9 = -(auVar5._12_4_ * 0.0) + auVar4._12_4_;
  auVar12._0_4_ = fVar3 * fVar3;
  auVar12._4_4_ = fVar7 * fVar7;
  auVar12._8_4_ = fVar8 * fVar8;
  auVar12._12_4_ = fVar9 * fVar9;
  auVar4 = vblendps_avx(auVar12,auVar25,8);
  auVar4 = vhaddps_avx(auVar4,auVar4);
  auVar4 = vhaddps_avx(auVar4,auVar4);
  auVar1 = vrsqrtps_avx(auVar4);
  fVar27 = auVar1._0_4_;
  fVar28 = auVar1._4_4_;
  fVar29 = auVar1._8_4_;
  fVar42 = auVar1._12_4_;
  auVar31._0_4_ = ((fVar10 * fVar27 * fVar27 * auVar4._0_4_ - fVar10) * fVar27 + fVar27) * fVar3;
  auVar31._4_4_ = ((fVar10 * fVar28 * fVar28 * auVar4._4_4_ - fVar10) * fVar28 + fVar28) * fVar7;
  auVar31._8_4_ = ((fVar10 * fVar29 * fVar29 * auVar4._8_4_ - fVar10) * fVar29 + fVar29) * fVar8;
  auVar31._12_4_ = ((fVar10 * fVar42 * fVar42 * auVar4._12_4_ - fVar10) * fVar42 + fVar42) * fVar9;
  auVar32 = ZEXT1664(auVar31);
  auVar4 = vshufps_avx(auVar31,auVar31,0xd2);
  auVar1 = vshufps_avx(auVar31,auVar31,0xc9);
  *param_2 = auVar31;
  auVar6 = vshufps_avx(auVar35,auVar35,0xd2);
  fVar42 = -(auVar6._0_4_ * auVar1._0_4_) + auVar4._0_4_ * auVar5._0_4_;
  fVar3 = -(auVar6._4_4_ * auVar1._4_4_) + auVar4._4_4_ * auVar5._4_4_;
  fVar7 = -(auVar6._8_4_ * auVar1._8_4_) + auVar4._8_4_ * auVar5._8_4_;
  fVar8 = -(auVar6._12_4_ * auVar1._12_4_) + auVar4._12_4_ * auVar5._12_4_;
  *(float *)param_2[1] = fVar42;
  *(float *)(param_2[1] + 4) = fVar3;
  *(float *)(param_2[1] + 8) = fVar7;
  *(float *)(param_2[1] + 0xc) = fVar8;
  fVar27 = fVar10;
  fVar28 = fVar10;
  fVar29 = fVar10;
  func_0x000144f7ac60(&fStack_c8);
  auVar37 = ZEXT1664(CONCAT412(auVar37._12_4_ * fStack_c0 +
                               fVar8 * fStack_c4 + auVar32._12_4_ * fStack_c8,
                               CONCAT48(auVar37._8_4_ * fStack_c0 +
                                        fVar7 * fStack_c4 + auVar32._8_4_ * fStack_c8,
                                        CONCAT44(auVar37._4_4_ * fStack_c0 +
                                                 fVar3 * fStack_c4 + auVar32._4_4_ * fStack_c8,
                                                 auVar37._0_4_ * fStack_c0 +
                                                 fVar42 * fStack_c4 + auVar32._0_4_ * fStack_c8))));
  func_0x000144f7ac60(auStack_d8);
  auVar22._4_4_ = _DAT_145fc6ed8;
  auVar22._0_4_ = _DAT_145fc6ed8;
  auVar22._8_4_ = _DAT_145fc6ed8;
  auVar22._12_4_ = _DAT_145fc6ed8;
  auVar5._0_4_ = auVar37._0_4_ * auStack_d8._0_4_;
  auVar5._4_4_ = auVar37._4_4_ * auStack_d8._4_4_;
  auVar5._8_4_ = auVar37._8_4_ * auStack_d8._8_4_;
  auVar5._12_4_ = auVar37._12_4_ * auStack_d8._12_4_;
  auVar4 = vblendps_avx(auVar5,auVar26._0_16_,8);
  auVar4 = vhaddps_avx(auVar4,auVar4);
  auVar1 = vhaddps_avx(auVar4,auVar4);
  fVar42 = auVar1._0_4_;
  auVar6._0_4_ = fVar42 + _DAT_145fc6f00;
  fVar3 = auVar1._4_4_;
  auVar6._4_4_ = fVar3 + _DAT_145fc6f00;
  fVar7 = auVar1._8_4_;
  auVar6._8_4_ = fVar7 + _DAT_145fc6f00;
  fVar8 = auVar1._12_4_;
  auVar6._12_4_ = fVar8 + _DAT_145fc6f00;
  auVar4 = vcmpps_avx(auVar6,auVar22,6);
  if ((((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf]) {
    auVar36._4_4_ = _DAT_146159bfc;
    auVar36._0_4_ = _DAT_146159bfc;
    auVar36._8_4_ = _DAT_146159bfc;
    auVar36._12_4_ = _DAT_146159bfc;
    auVar21._0_4_ = (float)((uint)fVar42 & _DAT_145fc6f4c);
    auVar21._4_4_ = (float)((uint)fVar3 & _DAT_145fc6f4c);
    auVar21._8_4_ = (float)((uint)fVar7 & _DAT_145fc6f4c);
    auVar21._12_4_ = (float)((uint)fVar8 & _DAT_145fc6f4c);
    auVar16._0_4_ = (uint)auVar37._0_4_ & _DAT_145fc6f4c;
    auVar16._4_4_ = (uint)auVar37._4_4_ & _DAT_145fc6f4c;
    auVar16._8_4_ = (uint)auVar37._8_4_ & _DAT_145fc6f4c;
    auVar16._12_4_ = (uint)auVar37._12_4_ & _DAT_145fc6f4c;
    auVar11 = vsubps_avx(auVar22,auVar21);
    auVar5 = vrsqrtps_avx(auVar11);
    auVar4 = vcmpps_avx(auVar36,auVar11,2);
    fVar9 = auVar5._0_4_;
    fVar39 = auVar5._4_4_;
    fVar40 = auVar5._8_4_;
    fVar41 = auVar5._12_4_;
    fVar9 = (float)(auVar4._0_4_ &
                   (uint)(((fVar10 * fVar9 * fVar9 * auVar11._0_4_ - fVar10) * fVar9 + fVar9) *
                         auVar11._0_4_));
    fVar39 = (float)(auVar4._4_4_ &
                    (uint)(((fVar27 * fVar39 * fVar39 * auVar11._4_4_ - fVar27) * fVar39 + fVar39) *
                          auVar11._4_4_));
    fVar40 = (float)(auVar4._8_4_ &
                    (uint)(((fVar28 * fVar40 * fVar40 * auVar11._8_4_ - fVar28) * fVar40 + fVar40) *
                          auVar11._8_4_));
    fVar41 = (float)(auVar4._12_4_ &
                    (uint)(((fVar29 * fVar41 * fVar41 * auVar11._12_4_ - fVar29) * fVar41 + fVar41)
                          * auVar11._12_4_));
    fVar48 = (auVar21._0_4_ *
              (auVar21._0_4_ * (auVar21._0_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
             _DAT_146159c0c) * fVar42 * fVar42 * fVar42 * fVar42 +
             auVar21._0_4_ *
             (auVar21._0_4_ * (auVar21._0_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
             _DAT_146159c1c;
    fVar3 = (auVar21._4_4_ *
             (auVar21._4_4_ * (auVar21._4_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
            _DAT_146159c0c) * fVar3 * fVar3 * fVar3 * fVar3 +
            auVar21._4_4_ *
            (auVar21._4_4_ * (auVar21._4_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
            _DAT_146159c1c;
    fVar7 = (auVar21._8_4_ *
             (auVar21._8_4_ * (auVar21._8_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
            _DAT_146159c0c) * fVar7 * fVar7 * fVar7 * fVar7 +
            auVar21._8_4_ *
            (auVar21._8_4_ * (auVar21._8_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
            _DAT_146159c1c;
    fVar8 = (auVar21._12_4_ *
             (auVar21._12_4_ * (auVar21._12_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08)
            + _DAT_146159c0c) * fVar8 * fVar8 * fVar8 * fVar8 +
            auVar21._12_4_ *
            (auVar21._12_4_ * (auVar21._12_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
            _DAT_146159c1c;
    auVar23._4_4_ = _DAT_145fc6f80;
    auVar23._0_4_ = _DAT_145fc6f80;
    auVar23._8_4_ = _DAT_145fc6f80;
    auVar23._12_4_ = _DAT_145fc6f80;
    auVar43._0_4_ = fVar9 * fVar48;
    auVar43._4_4_ = fVar39 * fVar3;
    auVar43._8_4_ = fVar40 * fVar7;
    auVar43._12_4_ = fVar41 * fVar8;
    auVar49._0_4_ = -(fVar9 * fVar48) + _DAT_145fc6f80;
    auVar49._4_4_ = -(fVar39 * fVar3) + _DAT_145fc6f80;
    auVar49._8_4_ = -(fVar40 * fVar7) + _DAT_145fc6f80;
    auVar49._12_4_ = -(fVar41 * fVar8) + _DAT_145fc6f80;
    auVar4 = vblendvps_avx(auVar43,auVar49,auVar1);
    auVar44._4_4_ = _DAT_145fc6f0c;
    auVar44._0_4_ = _DAT_145fc6f0c;
    auVar44._8_4_ = _DAT_145fc6f0c;
    auVar44._12_4_ = _DAT_145fc6f0c;
    auVar1 = vcmpss_avx(ZEXT416((uint)(fVar42 + _DAT_146159f9c)),ZEXT416(_DAT_145fc6f48),2);
    auVar5 = vcmpps_avx(auVar44,auVar21,2);
    auVar45._4_4_ = _DAT_14615ad74;
    auVar45._0_4_ = _DAT_14615ad74;
    auVar45._8_4_ = _DAT_14615ad74;
    auVar45._12_4_ = _DAT_14615ad74;
    auVar1 = vblendvps_avx(auVar4,auVar23,auVar1);
    auVar4 = vcmpps_avx(auVar16,auVar45,1);
    uVar14 = auVar4._0_4_;
    auVar46._4_4_ = uVar14;
    auVar46._0_4_ = uVar14;
    auVar46._8_4_ = uVar14;
    auVar46._12_4_ = uVar14;
    auVar4 = vshufps_avx(auVar4,auVar4,0x55);
    auVar4 = vblendvps_avx(_DAT_14614f7f0,_DAT_146159bc0,auVar4);
    auVar4 = vblendvps_avx(auVar4,auVar34._0_16_,auVar46);
    auVar12 = auVar37._0_16_;
    auVar11 = vshufps_avx(auVar12,auVar12,0xc9);
    auVar47 = ZEXT464((uint)_DAT_145fc6ed8);
    auVar4 = vblendvps_avx(auStack_d8,auVar4,auVar5);
    auVar5 = vshufps_avx(auVar12,auVar12,0xd2);
    auVar12 = vshufps_avx(auVar4,auVar4,0xc9);
    auVar4 = vshufps_avx(auVar4,auVar4,0xd2);
    fVar9 = -(auVar12._0_4_ * auVar5._0_4_) + auVar11._0_4_ * auVar4._0_4_;
    fVar39 = -(auVar12._4_4_ * auVar5._4_4_) + auVar11._4_4_ * auVar4._4_4_;
    fVar40 = -(auVar12._8_4_ * auVar5._8_4_) + auVar11._8_4_ * auVar4._8_4_;
    fVar41 = -(auVar12._12_4_ * auVar5._12_4_) + auVar11._12_4_ * auVar4._12_4_;
    auVar5 = vcmpss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar6,6);
    auVar17._0_4_ = fVar9 * fVar9;
    auVar17._4_4_ = fVar39 * fVar39;
    auVar17._8_4_ = fVar40 * fVar40;
    auVar17._12_4_ = fVar41 * fVar41;
    auVar4 = vblendps_avx(auVar17,auVar26._0_16_,8);
    auVar4 = vhaddps_avx(auVar4,auVar4);
    auVar4 = vhaddps_avx(auVar4,auVar4);
    auVar6 = vrsqrtps_avx(auVar4);
    fVar42 = auVar6._0_4_;
    fVar3 = auVar6._4_4_;
    fVar7 = auVar6._8_4_;
    fVar8 = auVar6._12_4_;
    uVar24 = CONCAT44(auVar5._4_4_ & auVar1._4_4_,auVar5._0_4_ & auVar1._0_4_);
    auVar26 = ZEXT1664(CONCAT412(auVar5._12_4_ & auVar1._12_4_,
                                 CONCAT48(auVar5._8_4_ & auVar1._8_4_,uVar24)));
    auVar33._0_4_ = ((fVar10 * fVar42 * fVar42 * auVar4._0_4_ - fVar10) * fVar42 + fVar42) * fVar9;
    auVar33._4_4_ = ((fVar27 * fVar3 * fVar3 * auVar4._4_4_ - fVar27) * fVar3 + fVar3) * fVar39;
    auVar33._8_4_ = ((fVar28 * fVar7 * fVar7 * auVar4._8_4_ - fVar28) * fVar7 + fVar7) * fVar40;
    auVar33._12_4_ = ((fVar29 * fVar8 * fVar8 * auVar4._12_4_ - fVar29) * fVar8 + fVar8) * fVar41;
    auVar34 = ZEXT1664(auVar33);
    auVar4 = vmovshdup_avx(auVar33);
    auVar37 = ZEXT1664(auVar4);
    auVar4 = vshufpd_avx(auVar33,auVar33,1);
    auVar38 = ZEXT1664(auVar4);
    fVar3 = (float)func_0x000145f40770(uVar24);
    fVar7 = (float)func_0x000145f407b0(auVar26._0_8_);
    fVar42 = auVar47._0_4_ - fVar3;
    fVar8 = auVar34._0_4_;
    fVar9 = auVar37._0_4_;
    fVar39 = auVar38._0_4_;
    fVar27 = fVar9 * fVar8 * fVar42;
    fVar28 = fVar39 * fVar8 * fVar42;
    fVar29 = fVar39 * fVar9 * fVar42;
    auVar4 = vinsertps_avx(ZEXT416((uint)(fVar27 - fVar39 * fVar7)),
                           ZEXT416((uint)(fVar42 * fVar9 * fVar9 + fVar3)),0x10);
    auVar1 = vinsertps_avx(ZEXT416((uint)(fVar42 * fVar8 * fVar8 + fVar3)),
                           ZEXT416((uint)(fVar27 + fVar39 * fVar7)),0x10);
    fVar30 = auVar32._0_4_;
    auVar1 = vinsertps_avx(auVar1,ZEXT416((uint)(fVar28 - fVar9 * fVar7)),0x20);
    auVar5 = vinsertps_avx(ZEXT416((uint)(fVar28 + fVar9 * fVar7)),
                           ZEXT416((uint)(fVar29 - fVar8 * fVar7)),0x10);
    auVar4 = vinsertps_avx(auVar4,ZEXT416((uint)(fVar29 + fVar8 * fVar7)),0x20);
    auVar11 = auVar32._0_16_;
    auVar6 = vshufps_avx(auVar11,auVar11,0xaa);
    fVar27 = *(float *)(param_2[1] + 8);
    fVar28 = *(float *)(param_2[2] + 8);
    fVar40 = auVar1._0_4_;
    fVar41 = auVar1._4_4_;
    fVar48 = auVar1._8_4_;
    fVar13 = auVar1._12_4_;
    auVar1 = vinsertps_avx(auVar5,ZEXT416((uint)(fVar42 * fVar39 * fVar39 + fVar3)),0x20);
    auVar5 = vshufps_avx(auVar11,auVar11,0x55);
    fVar29 = *(float *)(param_2[2] + 4);
    fVar15 = auVar4._0_4_;
    fVar18 = auVar4._4_4_;
    fVar19 = auVar4._8_4_;
    fVar20 = auVar4._12_4_;
    fVar42 = *(float *)param_2[1];
    fVar8 = auVar1._0_4_;
    fVar9 = auVar1._4_4_;
    fVar39 = auVar1._8_4_;
    fVar10 = auVar1._12_4_;
    fVar3 = *(float *)(param_2[1] + 4);
    fVar7 = *(float *)param_2[2];
    *(float *)*param_2 = fVar8 * auVar6._0_4_ + fVar15 * auVar5._0_4_ + fVar40 * fVar30;
    *(float *)(*param_2 + 4) = fVar9 * auVar6._4_4_ + fVar18 * auVar5._4_4_ + fVar41 * fVar30;
    *(float *)(*param_2 + 8) = fVar39 * auVar6._8_4_ + fVar19 * auVar5._8_4_ + fVar48 * fVar30;
    *(float *)(*param_2 + 0xc) = fVar10 * auVar6._12_4_ + fVar20 * auVar5._12_4_ + fVar13 * fVar30;
    *(float *)param_2[1] = fVar8 * fVar27 + fVar15 * fVar3 + fVar40 * fVar42;
    *(float *)(param_2[1] + 4) = fVar9 * fVar27 + fVar18 * fVar3 + fVar41 * fVar42;
    *(float *)(param_2[1] + 8) = fVar39 * fVar27 + fVar19 * fVar3 + fVar48 * fVar42;
    *(float *)(param_2[1] + 0xc) = fVar10 * fVar27 + fVar20 * fVar3 + fVar13 * fVar42;
    *(float *)param_2[2] = fVar8 * fVar28 + fVar15 * fVar29 + fVar40 * fVar7;
    *(float *)(param_2[2] + 4) = fVar9 * fVar28 + fVar18 * fVar29 + fVar41 * fVar7;
    *(float *)(param_2[2] + 8) = fVar39 * fVar28 + fVar19 * fVar29 + fVar48 * fVar7;
    *(float *)(param_2[2] + 0xc) = fVar10 * fVar28 + fVar20 * fVar29 + fVar13 * fVar7;
  }
  *(undefined8 *)param_2[3] = uStack_e8;
  *(undefined8 *)(param_2[3] + 8) = uStack_e0;
  return;
}

