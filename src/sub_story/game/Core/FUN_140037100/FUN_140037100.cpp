// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140037100  size: 1180 bytes
// Name:    FUN_140037100
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e3bf50, FUN_1400375a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_140037100(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  char cVar7;
  byte bVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong unaff_GS_OFFSET;
  float fVar11;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [64];
  float fVar38;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar43 [64];
  undefined1 auVar44 [16];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined1 in_ZMM14 [64];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 aauStack_c8 [9] [16];
  undefined1 auStack_38 [16];
  undefined1 auVar17 [32];
  undefined1 auVar23 [32];
  undefined1 auVar39 [64];
  undefined1 auVar45 [64];
  
  auStack_38 = in_ZMM14._0_16_;
  auVar12 = *param_1;
  auVar46 = ZEXT1664(auVar12);
  auVar13 = param_1[1];
  auVar47 = ZEXT1664(auVar13);
  auVar43 = ZEXT1664(CONCAT412(_DAT_145fc6edc,
                               CONCAT48(_DAT_145fc6edc,CONCAT44(_DAT_145fc6edc,_DAT_145fc6edc))));
  auVar44._0_12_ = ZEXT812(0);
  auVar44._12_4_ = 0;
  auVar45 = ZEXT1664(auVar44);
  auVar37 = ZEXT1664(*param_2);
  auVar21 = vsubps_avx(auVar13,auVar12);
  fVar38 = auVar13._0_4_ + auVar12._0_4_;
  fVar40 = auVar13._4_4_ + auVar12._4_4_;
  fVar41 = auVar13._8_4_ + auVar12._8_4_;
  fVar42 = auVar13._12_4_ + auVar12._12_4_;
  auVar39 = ZEXT1664(CONCAT412(fVar42,CONCAT48(fVar41,CONCAT44(fVar40,fVar38))));
  fVar11 = _DAT_145fc6edc * auVar21._0_4_;
  fVar18 = _DAT_145fc6edc * auVar21._4_4_;
  fVar19 = _DAT_145fc6edc * auVar21._8_4_;
  fVar20 = _DAT_145fc6edc * auVar21._12_4_;
  auVar12._0_4_ = fVar11 * fVar11;
  auVar12._4_4_ = fVar18 * fVar18;
  auVar12._8_4_ = fVar19 * fVar19;
  auVar12._12_4_ = fVar20 * fVar20;
  auVar12 = vblendps_avx(auVar12,auVar44,8);
  auVar12 = vhaddps_avx(auVar12,auVar12);
  auVar13 = vhaddps_avx(auVar12,auVar12);
  auVar12 = vrsqrtps_avx(auVar13);
  fVar11 = auVar12._0_4_;
  fVar18 = auVar12._4_4_;
  fVar19 = auVar12._8_4_;
  fVar20 = auVar12._12_4_;
  auVar24._4_4_ = _DAT_146159bfc;
  auVar24._0_4_ = _DAT_146159bfc;
  auVar24._8_4_ = _DAT_146159bfc;
  auVar24._12_4_ = _DAT_146159bfc;
  auVar12 = vcmpps_avx(auVar24,auVar13,2);
  auVar21._0_4_ =
       auVar12._0_4_ &
       (uint)(((-(_DAT_145fc6edc * fVar11 * fVar11 * auVar13._0_4_) + _DAT_145fc6edc) * fVar11 +
              fVar11) * auVar13._0_4_);
  auVar21._4_4_ =
       auVar12._4_4_ &
       (uint)(((-(_DAT_145fc6edc * fVar18 * fVar18 * auVar13._4_4_) + _DAT_145fc6edc) * fVar18 +
              fVar18) * auVar13._4_4_);
  auVar21._8_4_ =
       auVar12._8_4_ &
       (uint)(((-(_DAT_145fc6edc * fVar19 * fVar19 * auVar13._8_4_) + _DAT_145fc6edc) * fVar19 +
              fVar19) * auVar13._8_4_);
  auVar21._12_4_ =
       auVar12._12_4_ &
       (uint)(((-(_DAT_145fc6edc * fVar20 * fVar20 * auVar13._12_4_) + _DAT_145fc6edc) * fVar20 +
              fVar20) * auVar13._12_4_);
  auVar13._0_8_ = CONCAT44(_DAT_145fc6edc * fVar40,_DAT_145fc6edc * fVar38);
  auVar13._8_4_ = _DAT_145fc6edc * fVar41;
  auVar13._12_4_ = _DAT_145fc6edc * fVar42;
  auVar12 = vshufps_avx(auVar21,auVar21,0xff);
  auStack_108 = vshufps_avx(auVar13,auVar13,0xe9);
  cVar7 = FUN_144e3bf50(auVar13._0_8_,auStack_108,auVar12._0_8_);
  auVar21 = auVar43._0_16_;
  auVar24 = auVar45._0_16_;
  auVar13 = auVar39._0_16_;
  auVar12 = auVar37._0_16_;
  if (cVar7 != '\0') {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    auVar21 = auVar43._0_16_;
    auVar24 = auVar45._0_16_;
    auVar13 = auVar39._0_16_;
    auVar12 = auVar37._0_16_;
    auVar44 = in_ZMM14._0_16_;
    auStack_d8 = auVar47._0_16_;
    auStack_e8 = auVar46._0_16_;
    lVar9 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    uVar2 = *(uint *)(lVar9 + 0x12d8);
    if ((uVar2 & 6) == 0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        auVar21 = auVar43._0_16_;
        auVar24 = auVar45._0_16_;
        auVar13 = auVar39._0_16_;
        auVar12 = auVar37._0_16_;
        auVar44 = in_ZMM14._0_16_;
        auStack_d8 = auVar47._0_16_;
        auStack_e8 = auVar46._0_16_;
        uVar2 = *(uint *)(lVar9 + 0x12d8);
      }
      lVar9 = 0x58;
      if ((uVar2 & 0x20) != 0) goto LAB_140037310;
    }
    else {
LAB_140037310:
      lVar9 = 0x5c;
    }
    auVar25 = vshufps_avx(auStack_e8,auStack_d8,0);
    auVar29 = vshufps_avx(auStack_e8,auStack_d8,0x55);
    auVar16 = vpcmpeqd_avx(auVar44,auVar44);
    auVar44 = vshufps_avx(auVar25,auVar25,0xd8);
    auVar23 = vpermpd_avx2(ZEXT1632(auVar44),0x44);
    auVar44 = vshufps_avx(auStack_d8,auStack_d8,0xaa);
    auVar25 = vshufps_avx(_DAT_1492d7950,_DAT_1492d7950,0x50);
    auVar3 = vpermpd_avx2(ZEXT1632(auVar25),0x50);
    auVar25 = vshufps_avx(_DAT_1492d7960,_DAT_1492d7960,0x50);
    auVar4 = vpermpd_avx2(ZEXT1632(auVar25),0x50);
    auVar25 = vshufps_avx(_DAT_1492d7980,_DAT_1492d7980,0x50);
    auVar15 = vshufps_avx(_DAT_1492d7970,_DAT_1492d7970,0x50);
    auVar5 = vpermpd_avx2(ZEXT1632(auVar25),0x50);
    auVar25 = vshufps_avx(auStack_e8,auStack_e8,0xaa);
    auVar6 = vpermpd_avx2(ZEXT1632(auVar15),0x50);
    fVar11 = auVar25._0_4_;
    fVar18 = auVar25._4_4_;
    fVar19 = auVar44._0_4_;
    fVar20 = auVar44._4_4_;
    auVar33 = ZEXT816(0) << 0x20;
    fVar38 = auVar29._0_4_;
    fVar40 = auVar29._4_4_;
    fVar41 = auVar29._8_4_;
    fVar42 = auVar29._12_4_;
    fVar48 = auVar23._0_4_;
    auVar15._0_4_ =
         fVar48 * auVar3._0_4_ + fVar38 * auVar4._0_4_ + fVar19 * auVar6._0_4_ + auVar5._0_4_;
    fVar49 = auVar23._4_4_;
    auVar15._4_4_ =
         fVar49 * auVar3._4_4_ + fVar40 * auVar4._4_4_ + fVar20 * auVar6._4_4_ + auVar5._4_4_;
    fVar50 = auVar23._8_4_;
    auVar15._8_4_ =
         fVar50 * auVar3._8_4_ + fVar41 * auVar4._8_4_ + fVar19 * auVar6._8_4_ + auVar5._8_4_;
    fVar51 = auVar23._12_4_;
    auVar15._12_4_ =
         fVar51 * auVar3._12_4_ + fVar42 * auVar4._12_4_ + fVar20 * auVar6._12_4_ + auVar5._12_4_;
    fVar52 = auVar23._16_4_;
    auVar17._16_4_ =
         fVar52 * auVar3._16_4_ + fVar38 * auVar4._16_4_ + fVar19 * auVar6._16_4_ + auVar5._16_4_;
    auVar17._0_16_ = auVar15;
    fVar53 = auVar23._20_4_;
    auVar17._20_4_ =
         fVar53 * auVar3._20_4_ + fVar40 * auVar4._20_4_ + fVar20 * auVar6._20_4_ + auVar5._20_4_;
    fVar54 = auVar23._24_4_;
    auVar17._24_4_ =
         fVar54 * auVar3._24_4_ + fVar41 * auVar4._24_4_ + fVar19 * auVar6._24_4_ + auVar5._24_4_;
    fVar55 = auVar23._28_4_;
    auVar17._28_4_ =
         fVar55 * auVar3._28_4_ + fVar42 * auVar4._28_4_ + fVar20 * auVar6._28_4_ + auVar5._28_4_;
    auVar22._0_4_ =
         auVar3._0_4_ * fVar48 + auVar4._0_4_ * fVar38 + auVar6._0_4_ * fVar11 + auVar5._0_4_;
    auVar22._4_4_ =
         auVar3._4_4_ * fVar49 + auVar4._4_4_ * fVar40 + auVar6._4_4_ * fVar18 + auVar5._4_4_;
    auVar22._8_4_ =
         auVar3._8_4_ * fVar50 + auVar4._8_4_ * fVar41 + auVar6._8_4_ * fVar11 + auVar5._8_4_;
    auVar22._12_4_ =
         auVar3._12_4_ * fVar51 + auVar4._12_4_ * fVar42 + auVar6._12_4_ * fVar18 + auVar5._12_4_;
    auVar23._16_4_ =
         auVar3._16_4_ * fVar52 + auVar4._16_4_ * fVar38 + auVar6._16_4_ * fVar11 + auVar5._16_4_;
    auVar23._0_16_ = auVar22;
    auVar23._20_4_ =
         auVar3._20_4_ * fVar53 + auVar4._20_4_ * fVar40 + auVar6._20_4_ * fVar18 + auVar5._20_4_;
    auVar23._24_4_ =
         auVar3._24_4_ * fVar54 + auVar4._24_4_ * fVar41 + auVar6._24_4_ * fVar11 + auVar5._24_4_;
    auVar23._28_4_ =
         auVar3._28_4_ * fVar55 + auVar4._28_4_ * fVar42 + auVar6._28_4_ * fVar18 + auVar5._28_4_;
    auVar44 = vcmpps_avx(auVar22,auVar33,2);
    auVar25 = vcmpps_avx(auVar15,auVar33,2);
    auVar32._0_4_ = auVar44._0_4_ & auVar25._0_4_;
    auVar32._4_4_ = auVar44._4_4_ & auVar25._4_4_;
    auVar32._8_4_ = auVar44._8_4_ & auVar25._8_4_;
    auVar32._12_4_ = auVar44._12_4_ & auVar25._12_4_;
    if ((auVar16 & ~auVar32) != (undefined1  [16])0x0) {
      auVar44 = vcmpps_avx(auVar23._16_16_,auVar33,2);
      auVar25 = vcmpps_avx(auVar17._16_16_,auVar33,2);
      auVar33._0_4_ = auVar44._0_4_ & auVar25._0_4_;
      auVar33._4_4_ = auVar44._4_4_ & auVar25._4_4_;
      auVar33._8_4_ = auVar44._8_4_ & auVar25._8_4_;
      auVar33._12_4_ = auVar44._12_4_ & auVar25._12_4_;
      if ((auVar16 & ~auVar33) != (undefined1  [16])0x0) {
        auVar44 = vpermilps_avx(_DAT_1492d7970,0xfa);
        auVar25 = vpermilps_avx(_DAT_1492d7980,0xfa);
        auVar16 = vpermilps_avx(_DAT_1492d7960,0xfa);
        auVar32 = vpermilps_avx(_DAT_1492d7950,0xfa);
        auVar3 = vpermpd_avx2(ZEXT1632(auVar44),0x50);
        auVar4 = vpermpd_avx2(ZEXT1632(auVar25),0x50);
        auVar5 = vpermpd_avx2(ZEXT1632(auVar16),0x50);
        auVar6 = vpermpd_avx2(ZEXT1632(auVar32),0x50);
        auVar16 = vpcmpeqd_avx(auVar29,auVar29);
        auVar25._0_4_ =
             auVar6._0_4_ * fVar48 + auVar5._0_4_ * fVar38 + auVar3._0_4_ * fVar11 + auVar4._0_4_;
        auVar25._4_4_ =
             auVar6._4_4_ * fVar49 + auVar5._4_4_ * fVar40 + auVar3._4_4_ * fVar18 + auVar4._4_4_;
        auVar25._8_4_ =
             auVar6._8_4_ * fVar50 + auVar5._8_4_ * fVar41 + auVar3._8_4_ * fVar11 + auVar4._8_4_;
        auVar25._12_4_ =
             auVar6._12_4_ * fVar51 +
             auVar5._12_4_ * fVar42 + auVar3._12_4_ * fVar18 + auVar4._12_4_;
        fVar27 = auVar6._16_4_ * fVar52 +
                 auVar5._16_4_ * fVar38 + auVar3._16_4_ * fVar11 + auVar4._16_4_;
        fVar28 = auVar6._20_4_ * fVar53 +
                 auVar5._20_4_ * fVar40 + auVar3._20_4_ * fVar18 + auVar4._20_4_;
        fVar11 = auVar6._24_4_ * fVar54 +
                 auVar5._24_4_ * fVar41 + auVar3._24_4_ * fVar11 + auVar4._24_4_;
        fVar18 = auVar6._28_4_ * fVar55 +
                 auVar5._28_4_ * fVar42 + auVar3._28_4_ * fVar18 + auVar4._28_4_;
        auVar29._0_4_ =
             auVar6._0_4_ * fVar48 + auVar5._0_4_ * fVar38 + auVar3._0_4_ * fVar19 + auVar4._0_4_;
        auVar29._4_4_ =
             auVar6._4_4_ * fVar49 + auVar5._4_4_ * fVar40 + auVar3._4_4_ * fVar20 + auVar4._4_4_;
        auVar29._8_4_ =
             auVar6._8_4_ * fVar50 + auVar5._8_4_ * fVar41 + auVar3._8_4_ * fVar19 + auVar4._8_4_;
        auVar29._12_4_ =
             auVar6._12_4_ * fVar51 +
             auVar5._12_4_ * fVar42 + auVar3._12_4_ * fVar20 + auVar4._12_4_;
        fVar38 = auVar6._16_4_ * fVar52 +
                 auVar5._16_4_ * fVar38 + auVar3._16_4_ * fVar19 + auVar4._16_4_;
        fVar40 = auVar6._20_4_ * fVar53 +
                 auVar5._20_4_ * fVar40 + auVar3._20_4_ * fVar20 + auVar4._20_4_;
        fVar19 = auVar6._24_4_ * fVar54 +
                 auVar5._24_4_ * fVar41 + auVar3._24_4_ * fVar19 + auVar4._24_4_;
        fVar20 = auVar6._28_4_ * fVar55 +
                 auVar5._28_4_ * fVar42 + auVar3._28_4_ * fVar20 + auVar4._28_4_;
        auVar44 = vcmpps_avx(auVar25,ZEXT816(0) << 0x20,2);
        auVar25 = vcmpps_avx(auVar29,ZEXT816(0) << 0x20,2);
        auVar34._0_4_ = auVar44._0_4_ & auVar25._0_4_;
        auVar34._4_4_ = auVar44._4_4_ & auVar25._4_4_;
        auVar34._8_4_ = auVar44._8_4_ & auVar25._8_4_;
        auVar34._12_4_ = auVar44._12_4_ & auVar25._12_4_;
        if ((auVar16 & ~auVar34) != (undefined1  [16])0x0) {
          auVar35._0_4_ = fVar27 * _DAT_14615dd8c;
          auVar35._4_4_ = fVar28 * _DAT_14615dd8c;
          auVar35._8_4_ = fVar11 * _DAT_14615dd8c;
          auVar35._12_4_ = fVar18 * _DAT_14615dd8c;
          auVar30._0_4_ = fVar38 * _DAT_14615dd8c;
          auVar30._4_4_ = fVar40 * _DAT_14615dd8c;
          auVar30._8_4_ = fVar19 * _DAT_14615dd8c;
          auVar30._12_4_ = fVar20 * _DAT_14615dd8c;
          auVar44 = vcmpps_avx(auVar35,auVar23._16_16_,1);
          auVar25 = vcmpps_avx(auVar30,auVar17._16_16_,1);
          auVar31._0_4_ = auVar44._0_4_ & auVar25._0_4_;
          auVar31._4_4_ = auVar44._4_4_ & auVar25._4_4_;
          auVar31._8_4_ = auVar44._8_4_ & auVar25._8_4_;
          auVar31._12_4_ = auVar44._12_4_ & auVar25._12_4_;
          if ((auVar16 & ~auVar31) != (undefined1  [16])0x0) {
            auVar36._0_4_ = fVar27 * _DAT_14615a3d8;
            auVar36._4_4_ = fVar28 * _DAT_14615a3d8;
            auVar36._8_4_ = fVar11 * _DAT_14615a3d8;
            auVar36._12_4_ = fVar18 * _DAT_14615a3d8;
            auVar26._0_4_ = fVar38 * _DAT_14615a3d8;
            auVar26._4_4_ = fVar40 * _DAT_14615a3d8;
            auVar26._8_4_ = fVar19 * _DAT_14615a3d8;
            auVar26._12_4_ = fVar20 * _DAT_14615a3d8;
            auVar44 = vcmpps_avx(auVar36,auVar22,1);
            auVar25 = vcmpps_avx(auVar26,auVar15,1);
            auVar16._0_4_ = auVar44._0_4_ & auVar25._0_4_;
            auVar16._4_4_ = auVar44._4_4_ & auVar25._4_4_;
            auVar16._8_4_ = auVar44._8_4_ & auVar25._8_4_;
            auVar16._12_4_ = auVar44._12_4_ & auVar25._12_4_;
            auVar44 = vpcmpeqd_avx(auVar44,auVar44);
            if ((auVar44 & ~auVar16) != (undefined1  [16])0x0) {
              aauStack_c8[0] = ZEXT416(0) << 0x20;
              uVar1 = *(undefined4 *)((longlong)*(int *)(lVar9 + 0x14a210cb8) * 8 + 0x1492d7940);
              auVar37 = ZEXT1664(auVar12);
              auVar39 = ZEXT1664(auVar13);
              auVar43 = ZEXT1664(auVar21);
              auVar45 = ZEXT1664(auVar24);
              auVar46 = ZEXT1664(CONCAT412(uVar1,CONCAT48(uVar1,CONCAT44(uVar1,uVar1))));
              uVar10 = func_0x000144dd4320(0);
              auStack_f8 = auVar46._0_16_;
              bVar8 = FUN_1400375a0(auStack_f8,uVar10,auStack_e8,auStack_d8,aauStack_c8);
              auVar21 = auVar43._0_16_;
              auVar24 = auVar45._0_16_;
              auVar13 = auVar39._0_16_;
              auVar12 = auVar37._0_16_;
              bVar8 = bVar8 ^ 1;
              goto LAB_1400371f4;
            }
          }
        }
      }
    }
  }
  bVar8 = 0;
LAB_1400371f4:
  fVar11 = auVar13._0_4_ * auVar21._0_4_ - auVar12._0_4_;
  fVar18 = auVar13._4_4_ * auVar21._4_4_ - auVar12._4_4_;
  fVar19 = auVar13._8_4_ * auVar21._8_4_ - auVar12._8_4_;
  fVar20 = auVar13._12_4_ * auVar21._12_4_ - auVar12._12_4_;
  auVar14._0_4_ = fVar11 * fVar11;
  auVar14._4_4_ = fVar18 * fVar18;
  auVar14._8_4_ = fVar19 * fVar19;
  auVar14._12_4_ = fVar20 * fVar20;
  auVar12 = vblendps_avx(auVar14,auVar24,8);
  auVar12 = vhaddps_avx(auVar12,auVar12);
  auVar13 = vhaddps_avx(auVar12,auVar12);
  auVar12 = vrsqrtss_avx(auVar13,auVar13);
  fVar18 = auVar12._0_4_;
  auVar12 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar13,2);
  fVar11 = _UNK_146159ca0;
  if ((bVar8 == 0) &&
     (((cRam00000001498d781d != '\x01' || (fRam00000001498d7810 < fRam00000001498d7830)) ||
      ((fVar11 = _DAT_14615a2d0, cRam00000001498d781f == '\0' && (cRam00000001498d7820 == '\0'))))))
  {
    fVar11 = _DAT_145fc6ed8;
  }
  fVar18 = _DAT_145fc6ed8 /
           ((float)(auVar12._0_4_ &
                   (uint)(((fVar18 * fVar18 * auVar13._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) *
                           fVar18 + fVar18) * auVar13._0_4_)) + _DAT_145fc6f00);
  if (_DAT_14615a608 <= fVar18) {
    fVar18 = _DAT_14615a608;
  }
  return fVar18 + fVar11;
}

