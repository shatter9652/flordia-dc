// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140101dc0  size: 1608 bytes
// Name:    FUN_140101dc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fa6c50, FUN_144fa4300, FUN_144fa4390
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140101dc0(longlong param_1,longlong *param_2,float *param_3,byte param_4,uint param_5)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  char cVar11;
  int iVar12;
  ulonglong uVar13;
  byte bVar14;
  undefined8 unaff_RBP;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
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
  float fVar39;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar40 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [64];
  undefined1 auVar47 [16];
  undefined1 auVar48 [64];
  undefined1 auVar49 [64];
  float fVar50;
  undefined1 auVar51 [64];
  float fVar52;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar53 [64];
  undefined1 auVar57 [64];
  undefined1 in_ZMM12 [64];
  undefined1 auVar58 [64];
  undefined1 auVar59 [16];
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  undefined1 auVar62 [64];
  undefined1 auVar63 [64];
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [112];
  undefined1 auStack_78 [16];
  
  auStack_78 = in_ZMM12._0_16_;
  if (param_2 == (longlong *)0x0) {
    uVar13 = 0;
  }
  else {
    uStack_118 = *(undefined8 *)(param_1 + 0x70);
    uStack_110 = *(undefined8 *)(param_1 + 0x78);
    auVar46 = ZEXT464(param_5);
    func_0x000144dc3790(&uStack_118,&fStack_158);
    FUN_144fa6c50(auStack_e8);
    auVar48 = ZEXT1664(CONCAT412(auStack_e8._12_4_ * _DAT_146171468 + fStack_14c,
                                 CONCAT48(auStack_e8._8_4_ * _DAT_146171468 + fStack_150,
                                          CONCAT44(auStack_e8._4_4_ * _DAT_146171468 + fStack_154,
                                                   auStack_e8._0_4_ * _DAT_146171468 + fStack_158)))
                      );
    iVar12 = FUN_144fa4300(param_2);
    if (iVar12 == 0) {
      FUN_144fa4390(param_2,&fStack_158);
      auVar9._4_4_ = fStack_154;
      auVar9._0_4_ = fStack_158;
      auVar9._8_4_ = fStack_150;
      auVar9._12_4_ = fStack_14c;
      auVar7 = vsubps_avx(auVar9,auVar48._0_16_);
      auVar48 = ZEXT1664(auVar7);
      FUN_144fa6c50(auStack_f8);
      auVar31 = auVar48._0_16_;
      fVar52 = auVar48._0_4_;
      auVar28._0_4_ = fVar52 * fVar52;
      fVar56 = auVar48._4_4_;
      auVar28._4_4_ = fVar56 * fVar56;
      fVar42 = auVar48._8_4_;
      auVar28._8_4_ = fVar42 * fVar42;
      fVar3 = auVar48._12_4_;
      auVar28._12_4_ = fVar3 * fVar3;
      auVar7 = vhaddps_avx(auVar28,auVar28);
      fVar54 = auStack_f8._0_4_;
      auVar18._0_4_ = fVar54 * fVar54;
      fVar39 = auStack_f8._4_4_;
      auVar18._4_4_ = fVar39 * fVar39;
      fVar43 = auStack_f8._8_4_;
      auVar18._8_4_ = fVar43 * fVar43;
      fVar4 = auStack_f8._12_4_;
      auVar18._12_4_ = fVar4 * fVar4;
      auVar27 = vshufps_avx(auStack_f8,auStack_f8,0xc9);
      auVar21 = vhaddps_avx(auVar18,auVar18);
      fVar50 = auVar7._0_4_ * auVar21._0_4_;
      auVar19._4_4_ = fVar50;
      auVar19._0_4_ = fVar50;
      auVar19._8_4_ = fVar50;
      auVar19._12_4_ = fVar50;
      auVar7 = vrsqrtps_avx(auVar19);
      fVar55 = auVar7._0_4_;
      fVar41 = auVar7._4_4_;
      fVar2 = auVar7._8_4_;
      fVar5 = auVar7._12_4_;
      auVar7 = vshufps_avx(auVar31,auVar31,0xc9);
      auVar22 = vshufps_avx(auStack_f8,auStack_f8,0xd2);
      auVar24._0_4_ = fVar54 * fVar52;
      auVar24._4_4_ = fVar39 * fVar56;
      auVar24._8_4_ = fVar43 * fVar42;
      auVar24._12_4_ = fVar4 * fVar3;
      auVar31 = vshufps_avx(auVar31,auVar31,0xd2);
      auVar21 = vhaddps_avx(auVar24,auVar24);
      auVar44._0_4_ = -(auVar31._0_4_ * auVar27._0_4_) + auVar22._0_4_ * auVar7._0_4_;
      auVar44._4_4_ = -(auVar31._4_4_ * auVar27._4_4_) + auVar22._4_4_ * auVar7._4_4_;
      auVar44._8_4_ = -(auVar31._8_4_ * auVar27._8_4_) + auVar22._8_4_ * auVar7._8_4_;
      auVar44._12_4_ = -(auVar31._12_4_ * auVar27._12_4_) + auVar22._12_4_ * auVar7._12_4_;
      auVar29._4_4_ = _DAT_145fc6f48;
      auVar29._0_4_ = _DAT_145fc6f48;
      auVar29._8_4_ = _DAT_145fc6f48;
      auVar29._12_4_ = _DAT_145fc6f48;
      auVar7 = vcmpps_avx(ZEXT416(0) << 0x20,auVar44,2);
      auVar45._4_4_ = _DAT_145fc6ed8;
      auVar45._0_4_ = _DAT_145fc6ed8;
      auVar45._8_4_ = _DAT_145fc6ed8;
      auVar45._12_4_ = _DAT_145fc6ed8;
      fVar52 = auVar21._0_4_;
      auVar27 = vshufpd_avx(auVar7,auVar7,3);
      auVar25._0_4_ =
           ((_DAT_145fc6f08 * fVar55 * fVar55 * fVar50 - _DAT_145fc6f08) * fVar55 + fVar55) * fVar52
      ;
      auVar25._4_4_ =
           ((_DAT_145fc6f08 * fVar41 * fVar41 * fVar50 - _DAT_145fc6f08) * fVar41 + fVar41) * fVar52
      ;
      auVar25._8_4_ =
           ((_DAT_145fc6f08 * fVar2 * fVar2 * fVar50 - _DAT_145fc6f08) * fVar2 + fVar2) * fVar52;
      auVar25._12_4_ =
           ((_DAT_145fc6f08 * fVar5 * fVar5 * fVar50 - _DAT_145fc6f08) * fVar5 + fVar5) * fVar52;
      auVar7 = vmaxps_avx(auVar25,auVar29);
      auVar21 = vminps_avx(auVar7,auVar45);
      fVar52 = auVar21._0_4_;
      auVar34._0_4_ = (float)(_DAT_145fc6f4c & (uint)fVar52);
      fVar54 = auVar21._4_4_;
      auVar34._4_4_ = (float)(_DAT_145fc6f4c & (uint)fVar54);
      fVar55 = auVar21._8_4_;
      auVar34._8_4_ = (float)(_DAT_145fc6f4c & (uint)fVar55);
      fVar56 = auVar21._12_4_;
      auVar34._12_4_ = (float)(_DAT_145fc6f4c & (uint)fVar56);
      auVar22 = vsubps_avx(auVar45,auVar34);
      auVar7 = vrsqrtps_avx(auVar22);
      fVar39 = auVar7._0_4_;
      fVar41 = auVar7._4_4_;
      fVar42 = auVar7._8_4_;
      fVar43 = auVar7._12_4_;
      auVar47._4_4_ = _DAT_146159bfc;
      auVar47._0_4_ = _DAT_146159bfc;
      auVar47._8_4_ = _DAT_146159bfc;
      auVar47._12_4_ = _DAT_146159bfc;
      auVar7 = vcmpps_avx(auVar47,auVar22,2);
      fVar39 = (float)(auVar7._0_4_ &
                      (uint)(((_DAT_145fc6f08 * fVar39 * fVar39 * auVar22._0_4_ - _DAT_145fc6f08) *
                              fVar39 + fVar39) * auVar22._0_4_));
      fVar41 = (float)(auVar7._4_4_ &
                      (uint)(((_DAT_145fc6f08 * fVar41 * fVar41 * auVar22._4_4_ - _DAT_145fc6f08) *
                              fVar41 + fVar41) * auVar22._4_4_));
      fVar42 = (float)(auVar7._8_4_ &
                      (uint)(((_DAT_145fc6f08 * fVar42 * fVar42 * auVar22._8_4_ - _DAT_145fc6f08) *
                              fVar42 + fVar42) * auVar22._8_4_));
      fVar43 = (float)(auVar7._12_4_ &
                      (uint)(((_DAT_145fc6f08 * fVar43 * fVar43 * auVar22._12_4_ - _DAT_145fc6f08) *
                              fVar43 + fVar43) * auVar22._12_4_));
      auVar8._12_4_ = 0;
      auVar8._0_12_ = ZEXT412(0);
      auVar48 = ZEXT1264(ZEXT412(0)) << 0x20;
      fVar52 = fVar52 * fVar52 * fVar52 * fVar52 *
               (auVar34._0_4_ *
                (auVar34._0_4_ * (auVar34._0_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08)
               + _DAT_146159c0c) +
               auVar34._0_4_ *
               (auVar34._0_4_ * (auVar34._0_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18)
               + _DAT_146159c1c;
      fVar54 = fVar54 * fVar54 * fVar54 * fVar54 *
               (auVar34._4_4_ *
                (auVar34._4_4_ * (auVar34._4_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08)
               + _DAT_146159c0c) +
               auVar34._4_4_ *
               (auVar34._4_4_ * (auVar34._4_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18)
               + _DAT_146159c1c;
      fVar55 = fVar55 * fVar55 * fVar55 * fVar55 *
               (auVar34._8_4_ *
                (auVar34._8_4_ * (auVar34._8_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08)
               + _DAT_146159c0c) +
               auVar34._8_4_ *
               (auVar34._8_4_ * (auVar34._8_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18)
               + _DAT_146159c1c;
      fVar56 = fVar56 * fVar56 * fVar56 * fVar56 *
               (auVar34._12_4_ *
                (auVar34._12_4_ * (auVar34._12_4_ * _DAT_146159c04 + _DAT_146159c00) +
                _DAT_146159c08) + _DAT_146159c0c) +
               auVar34._12_4_ *
               (auVar34._12_4_ * (auVar34._12_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18
               ) + _DAT_146159c1c;
      auVar35._0_4_ = -(fVar52 * fVar39) + _DAT_145fc6f80;
      auVar35._4_4_ = -(fVar54 * fVar41) + _DAT_145fc6f80;
      auVar35._8_4_ = -(fVar55 * fVar42) + _DAT_145fc6f80;
      auVar35._12_4_ = -(fVar56 * fVar43) + _DAT_145fc6f80;
      auVar40._0_4_ = fVar52 * fVar39;
      auVar40._4_4_ = fVar54 * fVar41;
      auVar40._8_4_ = fVar55 * fVar42;
      auVar40._12_4_ = fVar56 * fVar43;
      auVar7 = vblendvps_avx(auVar40,auVar35,auVar21);
      auVar36._0_4_ = auVar7._0_4_ ^ _DAT_145fc6f10;
      auVar36._4_4_ = auVar7._4_4_ ^ _DAT_145fc6f10;
      auVar36._8_4_ = auVar7._8_4_ ^ _DAT_145fc6f10;
      auVar36._12_4_ = auVar7._12_4_ ^ _DAT_145fc6f10;
      auVar7 = vblendvps_avx(auVar36,auVar7,auVar27);
      auVar30._4_4_ = _DAT_146159cc4;
      auVar30._0_4_ = _DAT_146159cc4;
      auVar30._8_4_ = _DAT_146159cc4;
      auVar30._12_4_ = _DAT_146159cc4;
      bVar1 = (float)(_DAT_145fc6f4c & (uint)(auVar7._0_4_ * _DAT_146159c20)) <= _DAT_146159ca8;
      auVar7 = vcmpss_avx(auVar46._0_16_,auVar8 << 0x20,4);
      auVar7 = vblendvps_avx(auVar30,auVar46._0_16_,auVar7);
      fVar52 = auVar7._0_4_ * auVar7._0_4_;
      (**(code **)(*param_2 + 0x138))(param_2,&fStack_158);
      uStack_128 = *(undefined8 *)(param_1 + 0x70);
      uStack_120 = *(undefined8 *)(param_1 + 0x78);
      func_0x000144dc3790(&uStack_128,auStack_108);
      fVar54 = auVar48._0_4_;
      auVar10._4_4_ = fStack_154;
      auVar10._0_4_ = fStack_158;
      auVar10._8_4_ = fStack_150;
      auVar10._12_4_ = fStack_14c;
      auVar7 = vsubps_avx(auVar10,auStack_108);
      auVar20._0_4_ = auVar7._0_4_ * auVar7._0_4_;
      auVar20._4_4_ = auVar7._4_4_ * auVar7._4_4_;
      auVar20._8_4_ = auVar7._8_4_ * auVar7._8_4_;
      auVar20._12_4_ = auVar7._12_4_ * auVar7._12_4_;
      auVar7 = vhaddps_avx(auVar20,auVar20);
      bVar14 = param_4 ^ 1 | auVar7._0_4_ < fVar52;
      if (bVar14 != 0) {
        fVar54 = (fVar52 - auVar7._0_4_) / fVar52;
      }
      *param_3 = fVar54;
      uVar13 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar1 & bVar14);
    }
    else {
      *param_3 = 0.0;
      if ((ulonglong)*(uint *)((longlong)param_2 + 0x464) == 0) {
        uVar13 = 0;
        fVar52 = 0.0;
      }
      else {
        auVar51 = ZEXT1664(CONCAT412(_DAT_146159cc4,
                                     CONCAT48(_DAT_146159cc4,CONCAT44(_DAT_146159cc4,_DAT_146159cc4)
                                             )));
        auVar57 = ZEXT1664(CONCAT412(_DAT_145fc6f48,
                                     CONCAT48(_DAT_145fc6f48,CONCAT44(_DAT_145fc6f48,_DAT_145fc6f48)
                                             )));
        auVar53 = ZEXT1664(CONCAT412(_DAT_145fc6ed8,
                                     CONCAT48(_DAT_145fc6ed8,CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8)
                                             )));
        auVar49 = ZEXT1664(CONCAT412(_DAT_145fc6f4c,
                                     CONCAT48(_DAT_145fc6f4c,CONCAT44(_DAT_145fc6f4c,_DAT_145fc6f4c)
                                             )));
        auVar62 = ZEXT1664(CONCAT412(_DAT_146159c00,
                                     CONCAT48(_DAT_146159c00,CONCAT44(_DAT_146159c00,_DAT_146159c00)
                                             )));
        auVar61 = ZEXT1664(ZEXT816(0));
        plVar16 = param_2 + 0x8e;
        lVar17 = (ulonglong)*(uint *)((longlong)param_2 + 0x464) * 0x60;
        auVar7 = vcmpss_avx(ZEXT816(0),auVar46._0_16_,4);
        auVar60 = ZEXT1664(auVar7);
        uVar15 = 0;
        do {
          uVar13 = uVar15;
          if ((char)plVar16[10] == '\0') {
            auVar58 = ZEXT1664(auVar62._0_16_);
            auVar63 = ZEXT1664(auVar49._0_16_);
            auVar49 = ZEXT1664(auVar53._0_16_);
            auVar53 = ZEXT1664(auVar57._0_16_);
            cVar11 = func_0x000145311e80(plVar16);
            if (cVar11 == '\0') {
              auVar57 = ZEXT1664(auVar53._0_16_);
              auVar53 = ZEXT1664(auVar49._0_16_);
              auVar49 = ZEXT1664(auVar63._0_16_);
              auVar62 = ZEXT1664(auVar58._0_16_);
            }
            else {
              auStack_148 = auVar60._0_16_;
              auVar7 = vblendvps_avx(auVar51._0_16_,auVar46._0_16_,auStack_148);
              fVar50 = auVar7._0_4_ * auVar7._0_4_;
              func_0x000144fa06a0(plVar16,&fStack_158);
              auVar7._4_4_ = fStack_154;
              auVar7._0_4_ = fStack_158;
              auVar7._8_4_ = fStack_150;
              auVar7._12_4_ = fStack_14c;
              auVar7 = vsubps_avx(auVar7,auVar48._0_16_);
              auVar51 = ZEXT1664(auVar7);
              FUN_144fa6c50(auStack_138);
              auVar23 = auVar51._0_16_;
              fVar52 = auVar51._0_4_;
              auVar31._0_4_ = fVar52 * fVar52;
              fVar56 = auVar51._4_4_;
              auVar31._4_4_ = fVar56 * fVar56;
              fVar42 = auVar51._8_4_;
              auVar31._8_4_ = fVar42 * fVar42;
              fVar3 = auVar51._12_4_;
              auVar31._12_4_ = fVar3 * fVar3;
              auVar27 = vshufps_avx(auVar23,auVar23,0xd2);
              auVar7 = vhaddps_avx(auVar31,auVar31);
              fVar54 = auStack_138._0_4_;
              auVar21._0_4_ = fVar54 * fVar54;
              fVar39 = auStack_138._4_4_;
              auVar21._4_4_ = fVar39 * fVar39;
              fVar43 = auStack_138._8_4_;
              auVar21._8_4_ = fVar43 * fVar43;
              fVar4 = auStack_138._12_4_;
              auVar21._12_4_ = fVar4 * fVar4;
              auVar21 = vhaddps_avx(auVar21,auVar21);
              fVar6 = auVar7._0_4_ * auVar21._0_4_;
              auVar22._4_4_ = fVar6;
              auVar22._0_4_ = fVar6;
              auVar22._8_4_ = fVar6;
              auVar22._12_4_ = fVar6;
              auVar7 = vrsqrtps_avx(auVar22);
              fVar55 = auVar7._0_4_;
              fVar41 = auVar7._4_4_;
              fVar2 = auVar7._8_4_;
              fVar5 = auVar7._12_4_;
              auVar21 = vshufps_avx(auVar23,auVar23,0xc9);
              auVar22 = vshufps_avx(auStack_138,auStack_138,0xd2);
              auVar31 = vshufps_avx(auStack_138,auStack_138,0xc9);
              auVar26._0_4_ = fVar52 * fVar54;
              auVar26._4_4_ = fVar56 * fVar39;
              auVar26._8_4_ = fVar42 * fVar43;
              auVar26._12_4_ = fVar3 * fVar4;
              auVar57 = ZEXT1664(auVar53._0_16_);
              auVar7 = vhaddps_avx(auVar26,auVar26);
              auVar23._0_4_ = -(auVar27._0_4_ * auVar31._0_4_) + auVar22._0_4_ * auVar21._0_4_;
              auVar23._4_4_ = -(auVar27._4_4_ * auVar31._4_4_) + auVar22._4_4_ * auVar21._4_4_;
              auVar23._8_4_ = -(auVar27._8_4_ * auVar31._8_4_) + auVar22._8_4_ * auVar21._8_4_;
              auVar23._12_4_ = -(auVar27._12_4_ * auVar31._12_4_) + auVar22._12_4_ * auVar21._12_4_;
              fVar52 = auVar7._0_4_;
              auVar27._0_4_ =
                   ((_DAT_145fc6f08 * fVar55 * fVar55 * fVar6 - _DAT_145fc6f08) * fVar55 + fVar55) *
                   fVar52;
              auVar27._4_4_ =
                   ((_DAT_145fc6f08 * fVar41 * fVar41 * fVar6 - _DAT_145fc6f08) * fVar41 + fVar41) *
                   fVar52;
              auVar27._8_4_ =
                   ((_DAT_145fc6f08 * fVar2 * fVar2 * fVar6 - _DAT_145fc6f08) * fVar2 + fVar2) *
                   fVar52;
              auVar27._12_4_ =
                   ((_DAT_145fc6f08 * fVar5 * fVar5 * fVar6 - _DAT_145fc6f08) * fVar5 + fVar5) *
                   fVar52;
              auVar7 = vmaxps_avx(auVar27,auVar53._0_16_);
              auVar27 = auVar49._0_16_;
              auVar53 = ZEXT1664(auVar27);
              auVar21 = vminps_avx(auVar7,auVar27);
              auVar49 = ZEXT1664(auVar63._0_16_);
              fVar52 = auVar21._0_4_;
              auVar37._0_4_ = (float)(auVar63._0_4_ & (uint)fVar52);
              fVar54 = auVar21._4_4_;
              auVar37._4_4_ = (float)(auVar63._4_4_ & (uint)fVar54);
              fVar55 = auVar21._8_4_;
              auVar37._8_4_ = (float)(auVar63._8_4_ & (uint)fVar55);
              fVar56 = auVar21._12_4_;
              auVar37._12_4_ = (float)(auVar63._12_4_ & (uint)fVar56);
              auVar62 = ZEXT1664(auVar58._0_16_);
              auVar27 = vsubps_avx(auVar27,auVar37);
              fVar39 = fVar52 * fVar52 * fVar52 * fVar52 *
                       (auVar37._0_4_ *
                        (auVar37._0_4_ * (auVar37._0_4_ * _DAT_146159c04 + auVar58._0_4_) +
                        _DAT_146159c08) + _DAT_146159c0c) +
                       auVar37._0_4_ *
                       (auVar37._0_4_ * (auVar37._0_4_ * _DAT_146159c14 + _DAT_146159c10) +
                       _DAT_146159c18) + _DAT_146159c1c;
              fVar41 = fVar54 * fVar54 * fVar54 * fVar54 *
                       (auVar37._4_4_ *
                        (auVar37._4_4_ * (auVar37._4_4_ * _DAT_146159c04 + auVar58._4_4_) +
                        _DAT_146159c08) + _DAT_146159c0c) +
                       auVar37._4_4_ *
                       (auVar37._4_4_ * (auVar37._4_4_ * _DAT_146159c14 + _DAT_146159c10) +
                       _DAT_146159c18) + _DAT_146159c1c;
              fVar42 = fVar55 * fVar55 * fVar55 * fVar55 *
                       (auVar37._8_4_ *
                        (auVar37._8_4_ * (auVar37._8_4_ * _DAT_146159c04 + auVar58._8_4_) +
                        _DAT_146159c08) + _DAT_146159c0c) +
                       auVar37._8_4_ *
                       (auVar37._8_4_ * (auVar37._8_4_ * _DAT_146159c14 + _DAT_146159c10) +
                       _DAT_146159c18) + _DAT_146159c1c;
              fVar43 = fVar56 * fVar56 * fVar56 * fVar56 *
                       (auVar37._12_4_ *
                        (auVar37._12_4_ * (auVar37._12_4_ * _DAT_146159c04 + auVar58._12_4_) +
                        _DAT_146159c08) + _DAT_146159c0c) +
                       auVar37._12_4_ *
                       (auVar37._12_4_ * (auVar37._12_4_ * _DAT_146159c14 + _DAT_146159c10) +
                       _DAT_146159c18) + _DAT_146159c1c;
              auVar7 = vrsqrtps_avx(auVar27);
              fVar52 = auVar7._0_4_;
              fVar54 = auVar7._4_4_;
              fVar55 = auVar7._8_4_;
              fVar56 = auVar7._12_4_;
              auVar59._4_4_ = _DAT_146159bfc;
              auVar59._0_4_ = _DAT_146159bfc;
              auVar59._8_4_ = _DAT_146159bfc;
              auVar59._12_4_ = _DAT_146159bfc;
              auVar7 = vcmpps_avx(auVar59,auVar27,2);
              fVar52 = (float)(auVar7._0_4_ &
                              (uint)(((_DAT_145fc6f08 * fVar52 * fVar52 * auVar27._0_4_ -
                                      _DAT_145fc6f08) * fVar52 + fVar52) * auVar27._0_4_));
              fVar54 = (float)(auVar7._4_4_ &
                              (uint)(((_DAT_145fc6f08 * fVar54 * fVar54 * auVar27._4_4_ -
                                      _DAT_145fc6f08) * fVar54 + fVar54) * auVar27._4_4_));
              fVar55 = (float)(auVar7._8_4_ &
                              (uint)(((_DAT_145fc6f08 * fVar55 * fVar55 * auVar27._8_4_ -
                                      _DAT_145fc6f08) * fVar55 + fVar55) * auVar27._8_4_));
              fVar56 = (float)(auVar7._12_4_ &
                              (uint)(((_DAT_145fc6f08 * fVar56 * fVar56 * auVar27._12_4_ -
                                      _DAT_145fc6f08) * fVar56 + fVar56) * auVar27._12_4_));
              auVar38._0_4_ = fVar52 * fVar39;
              auVar38._4_4_ = fVar54 * fVar41;
              auVar38._8_4_ = fVar55 * fVar42;
              auVar38._12_4_ = fVar56 * fVar43;
              auVar32._0_4_ = -(fVar39 * fVar52) + _DAT_145fc6f80;
              auVar32._4_4_ = -(fVar41 * fVar54) + _DAT_145fc6f80;
              auVar32._8_4_ = -(fVar42 * fVar55) + _DAT_145fc6f80;
              auVar32._12_4_ = -(fVar43 * fVar56) + _DAT_145fc6f80;
              auVar7 = vblendvps_avx(auVar38,auVar32,auVar21);
              auVar21 = vcmpps_avx(ZEXT416(0) << 0x20,auVar23,2);
              auVar21 = vshufpd_avx(auVar21,auVar21,3);
              auVar33._0_4_ = auVar7._0_4_ ^ _DAT_145fc6f10;
              auVar33._4_4_ = auVar7._4_4_ ^ _DAT_145fc6f10;
              auVar33._8_4_ = auVar7._8_4_ ^ _DAT_145fc6f10;
              auVar33._12_4_ = auVar7._12_4_ ^ _DAT_145fc6f10;
              auVar7 = vblendvps_avx(auVar33,auVar7,auVar21);
              if ((param_4 == 0) || (*(float *)((longlong)plVar16 + 0x4c) < fVar50)) {
                bVar14 = 1;
                fVar52 = (fVar50 - *(float *)((longlong)plVar16 + 0x4c)) * (_DAT_145fc6ed8 / fVar50)
                ;
                auVar21 = ZEXT416((uint)fVar52);
                uVar13 = 1;
                if (fVar52 <= auVar61._0_4_) goto LAB_1401023a5;
              }
              else {
LAB_1401023a5:
                bVar14 = (byte)uVar13;
                auVar21 = auVar61._0_16_;
              }
              auVar51 = ZEXT1664(CONCAT412(_DAT_146159cc4,
                                           CONCAT48(_DAT_146159cc4,
                                                    CONCAT44(_DAT_146159cc4,_DAT_146159cc4))));
              auVar60 = ZEXT1664(auStack_148);
              auVar61 = ZEXT1664(auVar21);
              uVar13 = (ulonglong)bVar14;
              if (_DAT_146159ca8 < (float)(auVar63._0_4_ & (uint)(auVar7._0_4_ * _DAT_146159c20))) {
                uVar13 = uVar15;
              }
            }
          }
          fVar52 = auVar61._0_4_;
          plVar16 = plVar16 + 0xc;
          lVar17 = lVar17 + -0x60;
          uVar15 = uVar13;
        } while (lVar17 != 0);
      }
      *param_3 = fVar52;
    }
  }
  return uVar13 & 0xffffff01;
}

