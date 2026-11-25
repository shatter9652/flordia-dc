// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140039480  size: 953 bytes
// Name:    FUN_140039480
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14026e850, FUN_1450f6d40, FUN_14026fee0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140039480(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  short sVar19;
  short sVar21;
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [64];
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar34;
  undefined1 auVar30 [16];
  float fVar32;
  float fVar33;
  undefined1 auVar31 [64];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [64];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [64];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auStack_118 [8];
  float fStack_110;
  float fStack_10c;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [136];
  
  uVar8 = (ulonglong)(((uint)param_2 & 0xffff) << 4);
  if ((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar8) ==
       (short)((ulonglong)param_2 >> 0x10)) &&
     (lVar9 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar8), lVar9 != 0)) {
    FUN_1450f6d40(auStack_118,lVar9,*param_3);
    auVar26 = ZEXT464((uint)_DAT_145fc6ed8);
    auVar11 = ZEXT416((uint)_DAT_145fc6ed8);
    auVar31 = ZEXT864(_DAT_146159bc0);
    auVar28._8_8_ = 0;
    auVar28._0_8_ = _DAT_146159bc0;
    auVar38 = ZEXT1664(_DAT_14614f7f0);
    auVar39._0_12_ = ZEXT812(0);
    auVar43 = ZEXT1264(auVar39._0_12_);
    auVar39._12_4_ = 0;
    lVar1 = *(longlong *)(*(longlong *)(lVar9 + 8) + 0x20);
    auVar35 = _DAT_14614f7f0;
    if (((lVar1 != 0) && ((short)((ulonglong)param_2 >> 0x20) != -2)) &&
       (*(char *)(lVar1 + 0x10) == '\x06')) {
      uVar6 = func_0x0001403dc2f0(lVar9);
      auVar28 = auVar31._0_16_;
      auVar11 = auVar26._0_16_;
      auVar39 = auVar43._0_16_;
      auVar35 = auVar38._0_16_;
      if ((uVar6 != 0xffff) && (uVar6 < *(ushort *)(lVar1 + 0x9a))) {
        lVar1 = *(longlong *)(lVar1 + 0x78);
        lVar7 = (ulonglong)uVar6 * 0x40;
        auVar11 = *(undefined1 (*) [16])(lVar1 + lVar7);
        auVar28 = *(undefined1 (*) [16])(lVar1 + 0x10 + lVar7);
        auVar39 = *(undefined1 (*) [16])(lVar1 + 0x30 + lVar7);
        auVar35 = *(undefined1 (*) [16])(lVar1 + 0x20 + lVar7);
      }
    }
  }
  else {
    auVar28._8_8_ = 0;
    auVar28._0_8_ = _DAT_146159bc0;
    auVar39._0_12_ = ZEXT812(0);
    auVar39._12_4_ = 0;
    lVar9 = 0;
    auVar11 = ZEXT416((uint)_DAT_145fc6ed8);
    auStack_f8 = _DAT_14614f7f0;
    auVar35 = _DAT_14614f7f0;
    _auStack_118 = auVar11;
    auStack_108 = auVar28;
    auStack_e8 = auVar39;
  }
  auVar44._0_12_ = ZEXT812(0);
  auVar44._12_4_ = 0;
  uVar2 = auStack_118._0_4_;
  uVar3 = auStack_118._4_4_;
  fVar4 = fStack_110;
  fVar5 = fStack_10c;
  auVar20 = vshufps_avx(auStack_f8,auStack_108,0x33);
  auVar20 = vshufps_avx(auStack_108,auVar20,0x8f);
  auVar22._0_4_ = auVar39._0_4_ * (auVar20._0_4_ + _DAT_145fc6ed8);
  auVar22._4_4_ = auVar39._4_4_ * (auVar20._4_4_ + _DAT_145fc6ed8);
  auVar22._8_4_ = auVar39._8_4_ * (auVar20._8_4_ + _DAT_145fc6ed8);
  auVar22._12_4_ = auVar39._12_4_ * (auVar20._12_4_ + _DAT_145fc6ed8);
  fVar10 = auVar11._0_4_;
  auVar40._0_4_ = fVar10 * fVar10;
  fVar13 = auVar11._4_4_;
  auVar40._4_4_ = fVar13 * fVar13;
  fVar15 = auVar11._8_4_;
  auVar40._8_4_ = fVar15 * fVar15;
  fVar17 = auVar11._12_4_;
  auVar40._12_4_ = fVar17 * fVar17;
  auVar11 = vblendps_avx(auVar40,auVar44,8);
  auVar11 = vhaddps_avx(auVar11,auVar11);
  auVar39 = vhaddps_avx(auVar11,auVar11);
  auVar11 = vrsqrtps_avx(auVar39);
  fVar12 = auVar11._0_4_;
  fVar14 = auVar11._4_4_;
  fVar16 = auVar11._8_4_;
  fVar18 = auVar11._12_4_;
  auVar46._4_4_ = _DAT_146159bfc;
  auVar46._0_4_ = _DAT_146159bfc;
  auVar46._8_4_ = _DAT_146159bfc;
  auVar46._12_4_ = _DAT_146159bfc;
  auVar11 = vcmpps_avx(auVar46,auVar39,2);
  auVar41._0_4_ =
       (float)(auVar11._0_4_ &
              (uint)(((fVar12 * fVar12 * auVar39._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar12 +
                     fVar12) * auVar39._0_4_));
  auVar41._4_4_ =
       (float)(auVar11._4_4_ &
              (uint)(((fVar14 * fVar14 * auVar39._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar14 +
                     fVar14) * auVar39._4_4_));
  auVar41._8_4_ =
       (float)(auVar11._8_4_ &
              (uint)(((fVar16 * fVar16 * auVar39._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar16 +
                     fVar16) * auVar39._8_4_));
  auVar41._12_4_ =
       (float)(auVar11._12_4_ &
              (uint)(((fVar18 * fVar18 * auVar39._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar18
                     + fVar18) * auVar39._12_4_));
  auVar11 = vrcpps_avx(auVar41);
  auVar47._0_4_ = (uint)auVar41._0_4_ ^ _DAT_145fc6f10;
  auVar47._4_4_ = (uint)auVar41._4_4_ ^ _DAT_145fc6f10;
  auVar47._8_4_ = (uint)auVar41._8_4_ ^ _DAT_145fc6f10;
  auVar47._12_4_ = (uint)auVar41._12_4_ ^ _DAT_145fc6f10;
  fVar14 = auVar11._0_4_;
  fVar16 = auVar11._4_4_;
  fVar18 = auVar11._8_4_;
  fVar12 = auVar11._12_4_;
  auVar11 = vcmpps_avx(auVar41,auVar47,0);
  auVar48._0_4_ = -((auVar41._0_4_ * fVar14 - _DAT_145fc6ed8) * fVar14) + fVar14;
  auVar48._4_4_ = -((auVar41._4_4_ * fVar16 - _DAT_145fc6ed8) * fVar16) + fVar16;
  auVar48._8_4_ = -((auVar41._8_4_ * fVar18 - _DAT_145fc6ed8) * fVar18) + fVar18;
  auVar48._12_4_ = -((auVar41._12_4_ * fVar12 - _DAT_145fc6ed8) * fVar12) + fVar12;
  auVar45._4_4_ = _DAT_14615b36c;
  auVar45._0_4_ = _DAT_14615b36c;
  auVar45._8_4_ = _DAT_14615b36c;
  auVar45._12_4_ = _DAT_14615b36c;
  auVar11 = vblendvps_avx(auVar48,auVar45,auVar11);
  fVar12 = auVar11._0_4_;
  auVar25._0_4_ = fVar12 * fVar10;
  fVar10 = auVar11._4_4_;
  auVar25._4_4_ = fVar10 * fVar13;
  fVar13 = auVar11._8_4_;
  auVar25._8_4_ = fVar13 * fVar15;
  fVar14 = auVar11._12_4_;
  auVar25._12_4_ = fVar14 * fVar17;
  auVar29._0_4_ = fVar12 * auVar28._0_4_;
  auVar29._4_4_ = fVar10 * auVar28._4_4_;
  auVar29._8_4_ = fVar13 * auVar28._8_4_;
  auVar29._12_4_ = fVar14 * auVar28._12_4_;
  auVar36._0_4_ = fVar12 * auVar35._0_4_;
  auVar36._4_4_ = fVar10 * auVar35._4_4_;
  auVar36._8_4_ = fVar13 * auVar35._8_4_;
  auVar36._12_4_ = fVar14 * auVar35._12_4_;
  auVar11 = vshufps_avx(auVar25,auVar25,0x55);
  auVar28 = vshufps_avx(auVar25,auVar25,0xaa);
  fVar15 = auStack_108._0_4_;
  fVar16 = auStack_108._4_4_;
  fVar17 = auStack_108._8_4_;
  fVar18 = auStack_108._12_4_;
  auVar39 = vshufps_avx(auVar29,auVar29,0x55);
  fVar10 = auStack_f8._0_4_;
  fVar12 = auStack_f8._4_4_;
  fVar13 = auStack_f8._8_4_;
  fVar14 = auStack_f8._12_4_;
  auVar35 = vshufps_avx(auVar29,auVar29,0xaa);
  fVar27 = auVar29._0_4_ * (float)auStack_118._0_4_;
  fVar32 = auVar29._0_4_ * (float)auStack_118._4_4_;
  fVar33 = auVar29._0_4_ * fStack_110;
  fVar34 = auVar29._0_4_ * fStack_10c;
  auVar20 = vshufps_avx(auVar36,auVar36,0x55);
  auStack_118._4_4_ =
       fVar12 * auVar28._4_4_ + fVar16 * auVar11._4_4_ + auVar25._0_4_ * (float)auStack_118._4_4_;
  auStack_118._0_4_ =
       fVar10 * auVar28._0_4_ + fVar15 * auVar11._0_4_ + auVar25._0_4_ * (float)auStack_118._0_4_;
  fStack_110 = fVar13 * auVar28._8_4_ + fVar17 * auVar11._8_4_ + auVar25._0_4_ * fStack_110;
  fStack_10c = fVar14 * auVar28._12_4_ + fVar18 * auVar11._12_4_ + auVar25._0_4_ * fStack_10c;
  auVar30._0_4_ = fVar10 * auVar35._0_4_ + fVar15 * auVar39._0_4_ + fVar27;
  auVar30._4_4_ = fVar12 * auVar35._4_4_ + fVar16 * auVar39._4_4_ + fVar32;
  auVar30._8_4_ = fVar13 * auVar35._8_4_ + fVar17 * auVar39._8_4_ + fVar33;
  auVar30._12_4_ = fVar14 * auVar35._12_4_ + fVar18 * auVar39._12_4_ + fVar34;
  auVar11 = vshufps_avx(auVar36,auVar36,0xaa);
  auVar28 = vshufps_avx(auVar22,auVar22,0x55);
  auVar39 = vshufps_avx(auVar22,auVar22,0xaa);
  auStack_108 = vblendps_avx(auVar30,auStack_108,8);
  auVar37._0_4_ = fVar10 * auVar11._0_4_ + fVar15 * auVar20._0_4_ + auVar36._0_4_ * (float)uVar2;
  auVar37._4_4_ = fVar12 * auVar11._4_4_ + fVar16 * auVar20._4_4_ + auVar36._0_4_ * (float)uVar3;
  auVar37._8_4_ = fVar13 * auVar11._8_4_ + fVar17 * auVar20._8_4_ + auVar36._0_4_ * fVar4;
  auVar37._12_4_ = fVar14 * auVar11._12_4_ + fVar18 * auVar20._12_4_ + auVar36._0_4_ * fVar5;
  auVar42._0_4_ =
       fVar10 * auVar39._0_4_ +
       fVar15 * auVar28._0_4_ + (float)uVar2 * auVar22._0_4_ + auStack_e8._0_4_;
  auVar42._4_4_ =
       fVar12 * auVar39._4_4_ +
       fVar16 * auVar28._4_4_ + (float)uVar3 * auVar22._0_4_ + auStack_e8._4_4_;
  auVar42._8_4_ =
       fVar13 * auVar39._8_4_ + fVar17 * auVar28._8_4_ + fVar4 * auVar22._0_4_ + auStack_e8._8_4_;
  auVar42._12_4_ =
       fVar14 * auVar39._12_4_ + fVar18 * auVar28._12_4_ + fVar5 * auVar22._0_4_ + auStack_e8._12_4_
  ;
  auVar23._4_4_ = _DAT_14615a290;
  auVar23._0_4_ = _DAT_14615a290;
  auVar23._8_4_ = _DAT_14615a290;
  auVar23._12_4_ = _DAT_14615a290;
  auVar11 = vblendps_avx(auVar42,auStack_e8,8);
  auVar28 = vrcpps_avx(auVar23);
  fVar10 = auVar28._0_4_;
  fVar12 = auVar28._4_4_;
  fVar13 = auVar28._8_4_;
  fVar14 = auVar28._12_4_;
  auVar20._0_4_ = auVar11._0_4_ * ((-(fVar10 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar10 + fVar10);
  auVar20._4_4_ = auVar11._4_4_ * ((-(fVar12 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar12 + fVar12);
  auVar20._8_4_ = auVar11._8_4_ * ((-(fVar13 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar13 + fVar13);
  auVar20._12_4_ =
       auVar11._12_4_ * ((-(fVar14 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar14 + fVar14);
  auVar28 = vroundps_avx(auVar20,3);
  auVar24._0_4_ = -(auVar28._0_4_ * _DAT_14615a290) + auVar11._0_4_;
  auVar24._4_4_ = -(auVar28._4_4_ * _DAT_14615a290) + auVar11._4_4_;
  auVar24._8_4_ = -(auVar28._8_4_ * _DAT_14615a290) + auVar11._8_4_;
  auVar24._12_4_ = -(auVar28._12_4_ * _DAT_14615a290) + auVar11._12_4_;
  auVar11._0_4_ = (int)auVar28._0_4_;
  auVar11._4_4_ = (int)auVar28._4_4_;
  auVar11._8_4_ = (int)auVar28._8_4_;
  auVar11._12_4_ = (int)auVar28._12_4_;
  auVar28 = vpackssdw_avx(auVar11,auVar11);
  auStack_f8 = vblendps_avx(auVar37,auStack_f8,8);
  auVar11 = vblendps_avx(auVar42,auVar24,3);
  sVar19 = auVar28._0_2_;
  auVar35._0_2_ = sVar19 + auStack_e8._0_2_;
  sVar21 = auVar28._2_2_;
  auVar35._2_2_ = sVar21 + auStack_e8._2_2_;
  auVar35._4_2_ = sVar19 + auStack_e8._4_2_;
  auVar35._6_2_ = sVar21 + auStack_e8._6_2_;
  auVar35._8_2_ = sVar19 + auStack_e8._8_2_;
  auVar35._10_2_ = sVar21 + auStack_e8._10_2_;
  auVar35._12_2_ = sVar19 + auStack_e8._12_2_;
  auVar35._14_2_ = sVar21 + auStack_e8._14_2_;
  auStack_e8 = vblendps_avx(auVar11,auVar35,8);
  auVar26 = ZEXT1664(auStack_e8);
  FUN_14026fee0(auStack_b8,lVar9,param_2,*param_3);
  auVar11 = vpunpckhwd_avx(auVar26._0_16_,auVar26._0_16_);
  auVar11 = vpsrad_avx(auVar11,0x10);
  auVar11 = vcvtdq2ps_avx(auVar11);
  auVar11 = vshufpd_avx(auVar11,auVar11,3);
  auStack_d8._0_4_ = auVar11._0_4_ * _DAT_146159c90 + auVar26._0_4_;
  auStack_d8._4_4_ = auVar11._4_4_ * _UNK_146159c94 + auVar26._4_4_;
  auStack_d8._8_4_ = auVar11._8_4_ * _UNK_146159c98 + auVar26._8_4_;
  auStack_d8._12_4_ = auVar11._12_4_ * _UNK_146159c9c + auVar26._12_4_;
  FUN_14026e850(auStack_c8,lVar9,param_2,auStack_d8,*param_3);
  func_0x000145431f90(param_1,auStack_118,auStack_c8,auStack_b8);
  return;
}

