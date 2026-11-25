// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400df830  size: 2608 bytes
// Name:    FUN_1400df830
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140658fc0, FUN_1454060d0, FUN_145358920
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400df830(longlong *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  float fVar9;
  float fVar10;
  undefined1 auVar4 [16];
  float fVar11;
  undefined1 auVar5 [16];
  float fVar12;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar13 [16];
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
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  float fVar59;
  float fVar67;
  float fVar69;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar71;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar68;
  float fVar70;
  float fVar72;
  undefined1 auVar66 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [64];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [64];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [64];
  undefined1 auVar93 [64];
  float fVar94;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar106 [64];
  uint uVar107;
  uint uVar108;
  uint uVar109;
  uint uVar110;
  undefined1 auVar111 [16];
  float fVar114;
  undefined1 auVar112 [64];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auVar78 [64];
  undefined1 auVar98 [64];
  undefined1 auVar105 [64];
  undefined1 auVar113 [64];
  
  (**(code **)(**(longlong **)(*param_1 + 0x18) + 0x128))
            (*(longlong **)(*param_1 + 0x18),auStack_108);
  uVar2 = _DAT_145fc6f10;
  auVar79._0_12_ = ZEXT812(0);
  auVar79._12_4_ = 0;
  auVar48._4_4_ = _DAT_145fc6f00;
  auVar48._0_4_ = _DAT_145fc6f00;
  auVar48._8_4_ = _DAT_145fc6f00;
  auVar48._12_4_ = _DAT_145fc6f00;
  fVar58 = auStack_e8._0_4_;
  auVar14._0_4_ = fVar58 * fVar58;
  fVar69 = auStack_e8._4_4_;
  auVar14._4_4_ = fVar69 * fVar69;
  fVar11 = auStack_e8._8_4_;
  auVar14._8_4_ = fVar11 * fVar11;
  fVar10 = auStack_e8._12_4_;
  auVar14._12_4_ = fVar10 * fVar10;
  auVar24 = vshufps_avx(auStack_f8,auStack_f8,0xc9);
  auVar66 = vshufps_avx(auStack_f8,auStack_f8,0xd2);
  auVar14 = vblendps_avx(auVar14,auVar79,8);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar51 = vhaddps_avx(auVar14,auVar14);
  auVar14 = vrsqrtps_avx(auVar51);
  fVar67 = auVar14._0_4_;
  fVar71 = auVar14._4_4_;
  fVar9 = auVar14._8_4_;
  fVar12 = auVar14._12_4_;
  auVar14 = vcmpps_avx(auVar48,auVar51,1);
  auVar33._0_4_ =
       ((_DAT_145fc6f08 * fVar67 * fVar67 * auVar51._0_4_ - _DAT_145fc6f08) * fVar67 + fVar67) *
       fVar58;
  auVar33._4_4_ =
       ((_DAT_145fc6f08 * fVar71 * fVar71 * auVar51._4_4_ - _DAT_145fc6f08) * fVar71 + fVar71) *
       fVar69;
  auVar33._8_4_ =
       ((_DAT_145fc6f08 * fVar9 * fVar9 * auVar51._8_4_ - _DAT_145fc6f08) * fVar9 + fVar9) * fVar11;
  auVar33._12_4_ =
       ((_DAT_145fc6f08 * fVar12 * fVar12 * auVar51._12_4_ - _DAT_145fc6f08) * fVar12 + fVar12) *
       fVar10;
  auVar51 = vblendvps_avx(_DAT_14614f7f0,auVar33,auVar14);
  auVar14 = vshufps_avx(auVar51,auVar51,0xd2);
  auVar33 = vshufps_avx(auVar51,auVar51,0xc9);
  fVar58 = auVar14._0_4_;
  fVar67 = auVar14._4_4_;
  fVar69 = auVar14._8_4_;
  fVar71 = auVar14._12_4_;
  fVar11 = auVar33._0_4_;
  fVar94 = -(fVar11 * auVar66._0_4_) + auVar24._0_4_ * fVar58;
  fVar9 = auVar33._4_4_;
  fVar99 = -(fVar9 * auVar66._4_4_) + auVar24._4_4_ * fVar67;
  fVar10 = auVar33._8_4_;
  fVar100 = -(fVar10 * auVar66._8_4_) + auVar24._8_4_ * fVar69;
  fVar12 = auVar33._12_4_;
  fVar101 = -(fVar12 * auVar66._12_4_) + auVar24._12_4_ * fVar71;
  auVar102._0_4_ = fVar94 * fVar94;
  auVar102._4_4_ = fVar99 * fVar99;
  auVar102._8_4_ = fVar100 * fVar100;
  auVar102._12_4_ = fVar101 * fVar101;
  auVar14 = vblendps_avx(auVar102,auVar79,8);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar33 = vhaddps_avx(auVar14,auVar14);
  auVar14 = vcmpps_avx(auVar48,auVar33,5);
  if ((((SUB161(auVar14 >> 0x1f,0) & 1) == 0 && (SUB161(auVar14 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar14 >> 0x5f,0) & 1) == 0) && -1 < auVar14[0xf]) {
    auVar14 = vrsqrtps_avx(auVar33);
    fVar59 = auVar14._0_4_;
    fVar68 = auVar14._4_4_;
    fVar70 = auVar14._8_4_;
    fVar72 = auVar14._12_4_;
    auVar24._0_4_ =
         fVar94 * ((_DAT_145fc6f08 * auVar33._0_4_ * fVar59 * fVar59 - _DAT_145fc6f08) * fVar59 +
                  fVar59);
    auVar24._4_4_ =
         fVar99 * ((_DAT_145fc6f08 * auVar33._4_4_ * fVar68 * fVar68 - _DAT_145fc6f08) * fVar68 +
                  fVar68);
    auVar24._8_4_ =
         fVar100 * ((_DAT_145fc6f08 * auVar33._8_4_ * fVar70 * fVar70 - _DAT_145fc6f08) * fVar70 +
                   fVar70);
    auVar24._12_4_ =
         fVar101 * ((_DAT_145fc6f08 * auVar33._12_4_ * fVar72 * fVar72 - _DAT_145fc6f08) * fVar72 +
                   fVar72);
  }
  else {
    auVar14 = vshufps_avx(_DAT_14614f7f0,_DAT_14614f7f0,0xd2);
    fVar94 = (float)DAT_14614f7f0 * (float)(_DAT_145fc6f10 ^ (uint)fVar11) + auVar14._0_4_ * fVar58;
    fVar99 = DAT_14614f7f0._4_4_ * (float)(_DAT_145fc6f10 ^ (uint)fVar9) + auVar14._4_4_ * fVar67;
    fVar100 = DAT_14614f7f0._8_4_ * (float)(_DAT_145fc6f10 ^ (uint)fVar10) + auVar14._8_4_ * fVar69;
    fVar101 = DAT_14614f7f0._12_4_ * (float)(_DAT_145fc6f10 ^ (uint)fVar12) +
              auVar14._12_4_ * fVar71;
    auVar91._0_4_ = fVar94 * fVar94;
    auVar91._4_4_ = fVar99 * fVar99;
    auVar91._8_4_ = fVar100 * fVar100;
    auVar91._12_4_ = fVar101 * fVar101;
    auVar14 = vblendps_avx(auVar91,auVar79,8);
    auVar14 = vhaddps_avx(auVar14,auVar14);
    auVar33 = vhaddps_avx(auVar14,auVar14);
    auVar14 = vcmpps_avx(auVar48,auVar33,5);
    if ((((SUB161(auVar14 >> 0x1f,0) & 1) == 0 && (SUB161(auVar14 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar14 >> 0x5f,0) & 1) == 0) && -1 < auVar14[0xf]) {
      auVar14 = vrsqrtps_avx(auVar33);
      fVar59 = auVar14._0_4_;
      fVar68 = auVar14._4_4_;
      fVar70 = auVar14._8_4_;
      fVar72 = auVar14._12_4_;
      auVar24._0_4_ =
           fVar94 * ((_DAT_145fc6f08 * auVar33._0_4_ * fVar59 * fVar59 - _DAT_145fc6f08) * fVar59 +
                    fVar59);
      auVar24._4_4_ =
           fVar99 * ((_DAT_145fc6f08 * auVar33._4_4_ * fVar68 * fVar68 - _DAT_145fc6f08) * fVar68 +
                    fVar68);
      auVar24._8_4_ =
           fVar100 * ((_DAT_145fc6f08 * auVar33._8_4_ * fVar70 * fVar70 - _DAT_145fc6f08) * fVar70 +
                     fVar70);
      auVar24._12_4_ =
           fVar101 * ((_DAT_145fc6f08 * auVar33._12_4_ * fVar72 * fVar72 - _DAT_145fc6f08) * fVar72
                     + fVar72);
    }
    else {
      auVar83._8_8_ = 0;
      auVar83._0_8_ = _DAT_146159bc0;
      auVar14 = vshufps_avx(auVar83,auVar83,0xc9);
      fVar59 = -((float)_DAT_146159bc0 * auVar66._0_4_) + auVar24._0_4_ * auVar14._0_4_;
      fVar68 = -((float)(_DAT_146159bc0 >> 0x20) * auVar66._4_4_) + auVar24._4_4_ * auVar14._4_4_;
      fVar70 = -(auVar66._8_4_ * 0.0) + auVar24._8_4_ * auVar14._8_4_;
      fVar72 = -(auVar66._12_4_ * 0.0) + auVar24._12_4_ * auVar14._12_4_;
      auVar84._0_4_ = fVar59 * fVar59;
      auVar84._4_4_ = fVar68 * fVar68;
      auVar84._8_4_ = fVar70 * fVar70;
      auVar84._12_4_ = fVar72 * fVar72;
      auVar14 = vblendps_avx(auVar84,ZEXT416(0) << 0x20,8);
      auVar14 = vhaddps_avx(auVar14,auVar14);
      auVar33 = vhaddps_avx(auVar14,auVar14);
      auVar24 = vrsqrtps_avx(auVar33);
      auVar14 = vcmpps_avx(auVar48,auVar33,1);
      fVar94 = auVar24._0_4_;
      fVar99 = auVar24._4_4_;
      fVar100 = auVar24._8_4_;
      fVar101 = auVar24._12_4_;
      auVar66._0_4_ =
           ((_DAT_145fc6f08 * fVar94 * fVar94 * auVar33._0_4_ - _DAT_145fc6f08) * fVar94 + fVar94) *
           fVar59;
      auVar66._4_4_ =
           ((_DAT_145fc6f08 * fVar99 * fVar99 * auVar33._4_4_ - _DAT_145fc6f08) * fVar99 + fVar99) *
           fVar68;
      auVar66._8_4_ =
           ((_DAT_145fc6f08 * fVar100 * fVar100 * auVar33._8_4_ - _DAT_145fc6f08) * fVar100 +
           fVar100) * fVar70;
      auVar66._12_4_ =
           ((_DAT_145fc6f08 * fVar101 * fVar101 * auVar33._12_4_ - _DAT_145fc6f08) * fVar101 +
           fVar101) * fVar72;
      auVar24 = vblendvps_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar66,auVar14);
    }
  }
  auVar14 = vshufps_avx(auVar24,auVar24,0xd2);
  auVar112 = ZEXT1664(CONCAT412(_DAT_145fc6ed8,
                                CONCAT48(_DAT_145fc6ed8,CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8))));
  lVar1 = *param_1;
  auVar106 = ZEXT864(0) << 0x20;
  auVar33 = vshufps_avx(auStack_e8,auStack_f8,0x33);
  auVar66 = vshufps_avx(auVar24,auVar24,0xc9);
  auVar48 = vshufps_avx(auStack_f8,auVar33,0x8f);
  auVar34._0_4_ = -(auVar66._0_4_ * fVar58) + auVar14._0_4_ * fVar11;
  auVar34._4_4_ = -(auVar66._4_4_ * fVar67) + auVar14._4_4_ * fVar9;
  auVar34._8_4_ = -(auVar66._8_4_ * fVar69) + auVar14._8_4_ * fVar10;
  auVar34._12_4_ = -(auVar66._12_4_ * fVar71) + auVar14._12_4_ * fVar12;
  auVar14 = vblendps_avx(auVar24,auVar34,2);
  auVar33 = vblendps_avx(auVar24,auVar34,3);
  auVar14 = vblendps_avx(auVar51,auVar14,3);
  auVar33 = vblendps_avx(auVar33,auVar51,2);
  auVar66 = vshufps_avx(auVar14,auVar14,0x49);
  auVar79 = vshufps_avx(auVar14,auVar14,0x92);
  auVar102 = vshufps_avx(auVar14,auVar14,0x24);
  auVar33 = vshufps_avx(auVar33,auVar33,9);
  auVar80._0_4_ = auVar79._0_4_ + auVar66._0_4_;
  auVar80._4_4_ = auVar79._4_4_ + auVar66._4_4_;
  auVar80._8_4_ = auVar79._8_4_ + auVar66._8_4_;
  auVar80._12_4_ = auVar79._12_4_ + auVar66._12_4_;
  auVar41._0_4_ = auVar80._0_4_ + auVar102._0_4_;
  auVar41._4_4_ = auVar80._4_4_ + auVar102._4_4_;
  auVar41._8_4_ = auVar80._8_4_ + auVar102._8_4_;
  auVar41._12_4_ = auVar80._12_4_ + auVar102._12_4_;
  auVar14 = vsubps_avx(auVar14,auVar80);
  auVar14 = vblendps_avx(auVar14,auVar41,8);
  auVar60._0_4_ = _DAT_145fc6ed8 + auVar14._0_4_;
  auVar60._4_4_ = _DAT_145fc6ed8 + auVar14._4_4_;
  auVar60._8_4_ = _DAT_145fc6ed8 + auVar14._8_4_;
  auVar60._12_4_ = _DAT_145fc6ed8 + auVar14._12_4_;
  auVar14 = vrsqrtps_avx(auVar60);
  fVar58 = auVar14._0_4_;
  fVar67 = auVar14._4_4_;
  fVar69 = auVar14._8_4_;
  fVar71 = auVar14._12_4_;
  auVar14 = vblendps_avx(auVar34,auVar51,3);
  auVar66 = vshufps_avx(auVar34,auVar34,0x55);
  auVar79 = vshufps_avx(auVar51,auVar51,0xaa);
  auVar14 = vshufps_avx(auVar14,auVar24,0x12);
  auVar49._0_4_ = auVar24._0_4_;
  auVar49._4_4_ = auVar49._0_4_;
  auVar49._8_4_ = auVar49._0_4_;
  auVar49._12_4_ = auVar49._0_4_;
  auVar103._0_4_ = auVar14._0_4_ + auVar33._0_4_;
  auVar103._4_4_ = auVar14._4_4_ + auVar33._4_4_;
  auVar103._8_4_ = auVar14._8_4_ + auVar33._8_4_;
  auVar103._12_4_ = auVar14._12_4_ + auVar33._12_4_;
  auVar91 = vsubps_avx(auVar14,auVar33);
  auVar86._0_4_ =
       ((-(_DAT_145fc6edc * fVar58 * fVar58 * auVar60._0_4_) + _DAT_145fc6edc) * fVar58 + fVar58) *
       _DAT_145fc6edc;
  auVar86._4_4_ =
       ((-(_DAT_145fc6edc * fVar67 * fVar67 * auVar60._4_4_) + _DAT_145fc6edc) * fVar67 + fVar67) *
       _DAT_145fc6edc;
  auVar86._8_4_ =
       ((-(_DAT_145fc6edc * fVar69 * fVar69 * auVar60._8_4_) + _DAT_145fc6edc) * fVar69 + fVar69) *
       _DAT_145fc6edc;
  auVar86._12_4_ =
       ((-(_DAT_145fc6edc * fVar71 * fVar71 * auVar60._12_4_) + _DAT_145fc6edc) * fVar71 + fVar71) *
       _DAT_145fc6edc;
  auVar14 = vblendps_avx(auVar103,auVar91,1);
  auVar51 = vblendps_avx(auVar103,auVar91,2);
  auVar24 = vshufps_avx(auVar103,auVar91,0xa1);
  auVar102 = vshufps_avx(auVar14,auVar14,0x18);
  auVar33 = vshufpd_avx(auVar51,auVar51,1);
  auVar14 = vblendps_avx(auVar24,auVar60,4);
  auVar51 = vblendps_avx(auVar102,auVar60,1);
  auVar33 = vblendps_avx(auVar33,auVar60,2);
  auVar24 = vblendps_avx(auVar91,auVar60,8);
  auVar81._0_4_ = auVar86._0_4_ * auVar51._0_4_;
  auVar81._4_4_ = auVar86._0_4_ * auVar51._4_4_;
  auVar81._8_4_ = auVar86._0_4_ * auVar51._8_4_;
  auVar81._12_4_ = auVar86._0_4_ * auVar51._12_4_;
  auVar51 = vshufps_avx(auVar86,auVar86,0x55);
  auVar89._0_4_ = auVar51._0_4_ * auVar33._0_4_;
  auVar89._4_4_ = auVar51._4_4_ * auVar33._4_4_;
  auVar89._8_4_ = auVar51._8_4_ * auVar33._8_4_;
  auVar89._12_4_ = auVar51._12_4_ * auVar33._12_4_;
  auVar51 = vshufps_avx(auVar86,auVar86,0xaa);
  auVar33 = vshufps_avx(auVar86,auVar86,0xff);
  auVar95._0_4_ = auVar51._0_4_ * auVar14._0_4_;
  auVar95._4_4_ = auVar51._4_4_ * auVar14._4_4_;
  auVar95._8_4_ = auVar51._8_4_ * auVar14._8_4_;
  auVar95._12_4_ = auVar51._12_4_ * auVar14._12_4_;
  auVar61._0_4_ = auVar33._0_4_ * auVar24._0_4_;
  auVar61._4_4_ = auVar33._4_4_ * auVar24._4_4_;
  auVar61._8_4_ = auVar33._8_4_ * auVar24._8_4_;
  auVar61._12_4_ = auVar33._12_4_ * auVar24._12_4_;
  auVar14 = vcmpps_avx(auVar49,auVar66,1);
  auVar51 = vcmpps_avx(auVar66,auVar79,1);
  auVar33 = vcmpps_avx(auVar49,auVar79,1);
  auVar25._0_4_ = auVar51._0_4_ & auVar33._0_4_;
  auVar25._4_4_ = auVar51._4_4_ & auVar33._4_4_;
  auVar25._8_4_ = auVar51._8_4_ & auVar33._8_4_;
  auVar25._12_4_ = auVar51._12_4_ & auVar33._12_4_;
  auVar51 = vcmpps_avx(ZEXT816(0) << 0x20,auVar41,1);
  auVar14 = vblendvps_avx(auVar81,auVar89,auVar14);
  auVar35._0_4_ = auVar51._0_4_;
  auVar35._4_4_ = auVar35._0_4_;
  auVar35._8_4_ = auVar35._0_4_;
  auVar35._12_4_ = auVar35._0_4_;
  auVar14 = vblendvps_avx(auVar14,auVar95,auVar25);
  auVar85 = ZEXT1664(auStack_d8);
  auVar14 = vblendvps_avx(auVar14,auVar61,auVar35);
  auVar92 = ZEXT1664(auVar14);
  fVar58 = _DAT_145fc6ed8 + auVar48._0_4_;
  fVar67 = _DAT_145fc6ed8 + auVar48._4_4_;
  fVar69 = _DAT_145fc6ed8 + auVar48._8_4_;
  fVar71 = _DAT_145fc6ed8 + auVar48._12_4_;
  uVar107 = _DAT_145fc6f10;
  uVar108 = _DAT_145fc6f10;
  uVar109 = _DAT_145fc6f10;
  uVar110 = _DAT_145fc6f10;
  lVar3 = func_0x0001400e0260(lVar1);
  uStack_138 = *(undefined8 *)(lVar3 + 0x10);
  uStack_130 = *(undefined8 *)(lVar3 + 0x18);
  FUN_140658fc0(&uStack_138,*(undefined4 *)(lVar3 + 0x40),auStack_108);
  auVar88 = ZEXT1664(auStack_108);
  lVar3 = func_0x0001400e0260(lVar1);
  auVar91 = *(undefined1 (*) [16])(lVar3 + 0x20);
  auVar33 = auVar92._0_16_;
  auVar14 = vshufps_avx(auVar33,auVar33,0xff);
  auVar51 = vshufps_avx(auVar33,auVar33,0xc9);
  auVar33 = vshufps_avx(auVar33,auVar33,0xd2);
  auVar4._0_4_ = auVar92._0_4_ + auVar92._0_4_;
  auVar4._4_4_ = auVar92._4_4_ + auVar92._4_4_;
  auVar4._8_4_ = auVar92._8_4_ + auVar92._8_4_;
  auVar4._12_4_ = auVar92._12_4_ + auVar92._12_4_;
  auVar24 = vshufps_avx(auVar4,auVar4,0xc9);
  auVar66 = vshufps_avx(auVar4,auVar4,0xd2);
  fVar9 = auVar112._0_4_;
  fVar10 = auVar112._4_4_;
  fVar12 = auVar112._8_4_;
  fVar94 = auVar112._12_4_;
  auVar90._0_4_ = auVar33._0_4_ * auVar4._0_4_ + auVar24._0_4_ * auVar14._0_4_;
  auVar90._4_4_ = auVar33._4_4_ * auVar4._4_4_ + auVar24._4_4_ * auVar14._4_4_;
  auVar90._8_4_ = auVar33._8_4_ * auVar4._8_4_ + auVar24._8_4_ * auVar14._8_4_;
  auVar90._12_4_ = auVar33._12_4_ * auVar4._12_4_ + auVar24._12_4_ * auVar14._12_4_;
  auVar26._0_4_ = -(auVar14._0_4_ * auVar66._0_4_) + auVar51._0_4_ * auVar4._0_4_;
  auVar26._4_4_ = -(auVar14._4_4_ * auVar66._4_4_) + auVar51._4_4_ * auVar4._4_4_;
  auVar26._8_4_ = -(auVar14._8_4_ * auVar66._8_4_) + auVar51._8_4_ * auVar4._8_4_;
  auVar26._12_4_ = -(auVar14._12_4_ * auVar66._12_4_) + auVar51._12_4_ * auVar4._12_4_;
  auVar42._0_4_ = -(auVar66._0_4_ * auVar33._0_4_) - (auVar51._0_4_ * auVar24._0_4_ - fVar9);
  auVar42._4_4_ = -(auVar66._4_4_ * auVar33._4_4_) - (auVar51._4_4_ * auVar24._4_4_ - fVar10);
  auVar42._8_4_ = -(auVar66._8_4_ * auVar33._8_4_) - (auVar51._8_4_ * auVar24._8_4_ - fVar12);
  auVar42._12_4_ = -(auVar66._12_4_ * auVar33._12_4_) - (auVar51._12_4_ * auVar24._12_4_ - fVar94);
  auVar14 = vblendps_avx(auVar90,auVar26,2);
  auVar51 = vblendps_avx(auVar42,auVar90,2);
  auVar33 = vblendps_avx(auVar26,auVar42,2);
  auVar51 = vblendps_avx(auVar26,auVar51,3);
  auVar33 = vblendps_avx(auVar90,auVar33,3);
  auVar24 = vblendps_avx(auVar42,auVar14,3);
  auVar14 = *param_3;
  auVar93 = ZEXT1664(auVar14);
  auVar73._0_4_ = auVar51._0_4_ * fVar58;
  auVar73._4_4_ = auVar51._4_4_ * fVar67;
  auVar73._8_4_ = auVar51._8_4_ * fVar69;
  auVar73._12_4_ = auVar51._12_4_ * fVar71;
  auVar78 = ZEXT1664(auVar73);
  auVar104._0_4_ = auVar33._0_4_ * fVar58;
  auVar104._4_4_ = auVar33._4_4_ * fVar67;
  auVar104._8_4_ = auVar33._8_4_ * fVar69;
  auVar104._12_4_ = auVar33._12_4_ * fVar71;
  auVar105 = ZEXT1664(auVar104);
  auVar96._0_4_ = auVar24._0_4_ * fVar58;
  auVar96._4_4_ = auVar24._4_4_ * fVar67;
  auVar96._8_4_ = auVar24._8_4_ * fVar69;
  auVar96._12_4_ = auVar24._12_4_ * fVar71;
  auVar98 = ZEXT1664(auVar96);
  auVar51 = vshufps_avx(auVar73,auVar73,0xc9);
  auVar33 = vshufps_avx(auVar104,auVar104,0xd2);
  auVar24 = vshufps_avx(auVar73,auVar73,0xd2);
  auVar66 = vshufps_avx(auVar104,auVar104,0xc9);
  auVar48 = vshufps_avx(auVar96,auVar96,0xd2);
  auVar79 = vshufps_avx(auVar96,auVar96,0xc9);
  auVar27._0_4_ = -(auVar66._0_4_ * auVar24._0_4_) + auVar51._0_4_ * auVar33._0_4_;
  auVar27._4_4_ = -(auVar66._4_4_ * auVar24._4_4_) + auVar51._4_4_ * auVar33._4_4_;
  auVar27._8_4_ = -(auVar66._8_4_ * auVar24._8_4_) + auVar51._8_4_ * auVar33._8_4_;
  auVar27._12_4_ = -(auVar66._12_4_ * auVar24._12_4_) + auVar51._12_4_ * auVar33._12_4_;
  auVar43._0_4_ = -(auVar79._0_4_ * auVar33._0_4_) + auVar66._0_4_ * auVar48._0_4_;
  auVar43._4_4_ = -(auVar79._4_4_ * auVar33._4_4_) + auVar66._4_4_ * auVar48._4_4_;
  auVar43._8_4_ = -(auVar79._8_4_ * auVar33._8_4_) + auVar66._8_4_ * auVar48._8_4_;
  auVar43._12_4_ = -(auVar79._12_4_ * auVar33._12_4_) + auVar66._12_4_ * auVar48._12_4_;
  auVar13._0_4_ = -(auVar51._0_4_ * auVar48._0_4_) + auVar79._0_4_ * auVar24._0_4_;
  auVar13._4_4_ = -(auVar51._4_4_ * auVar48._4_4_) + auVar79._4_4_ * auVar24._4_4_;
  auVar13._8_4_ = -(auVar51._8_4_ * auVar48._8_4_) + auVar79._8_4_ * auVar24._8_4_;
  auVar13._12_4_ = -(auVar51._12_4_ * auVar48._12_4_) + auVar79._12_4_ * auVar24._12_4_;
  auVar51._0_4_ = auVar96._0_4_ * auVar27._0_4_;
  auVar51._4_4_ = auVar96._4_4_ * auVar27._4_4_;
  auVar51._8_4_ = auVar96._8_4_ * auVar27._8_4_;
  auVar51._12_4_ = auVar96._12_4_ * auVar27._12_4_;
  auVar83 = auVar106._0_16_;
  auVar51 = vblendps_avx(auVar51,auVar83,8);
  auVar51 = vhaddps_avx(auVar51,auVar51);
  auVar33 = vhaddps_avx(auVar51,auVar51);
  auVar51 = vrcpps_avx(auVar33);
  auVar50._0_4_ = uVar107 ^ (uint)auVar33._0_4_;
  auVar50._4_4_ = uVar108 ^ (uint)auVar33._4_4_;
  auVar50._8_4_ = uVar109 ^ (uint)auVar33._8_4_;
  auVar50._12_4_ = uVar110 ^ (uint)auVar33._12_4_;
  auVar84 = auVar112._0_16_;
  auVar112 = ZEXT1664(auVar84);
  fVar67 = auVar51._0_4_;
  fVar69 = auVar51._4_4_;
  fVar71 = auVar51._8_4_;
  fVar58 = auVar51._12_4_;
  auVar51 = vcmpps_avx(auVar33,auVar50,4);
  auVar48 = vunpcklps_avx(auVar13,auVar83);
  auVar24 = vunpckhps_avx(auVar13,auVar83);
  auVar79 = vunpcklps_avx(auVar43,auVar27);
  auVar66 = vunpckhps_avx(auVar43,auVar27);
  auVar66 = vunpcklps_avx(auVar66,auVar24);
  auVar102 = vunpcklps_avx(auVar79,auVar48);
  auVar24 = vunpckhps_avx(auVar79,auVar48);
  fVar67 = (float)(auVar51._0_4_ & (uint)(-((auVar33._0_4_ * fVar67 - fVar9) * fVar67) + fVar67));
  fVar69 = (float)(auVar51._4_4_ & (uint)(-((auVar33._4_4_ * fVar69 - fVar10) * fVar69) + fVar69));
  fVar71 = (float)(auVar51._8_4_ & (uint)(-((auVar33._8_4_ * fVar71 - fVar12) * fVar71) + fVar71));
  fVar11 = (float)(auVar51._12_4_ & (uint)(-((auVar33._12_4_ * fVar58 - fVar94) * fVar58) + fVar58))
  ;
  auVar62._0_4_ = auVar102._0_4_ * fVar67;
  auVar62._4_4_ = auVar102._4_4_ * fVar69;
  auVar62._8_4_ = auVar102._8_4_ * fVar71;
  auVar62._12_4_ = auVar102._12_4_ * fVar11;
  auVar92 = ZEXT1664(auVar62);
  auVar111._0_4_ = auVar24._0_4_ * fVar67;
  auVar111._4_4_ = auVar24._4_4_ * fVar69;
  auVar111._8_4_ = auVar24._8_4_ * fVar71;
  auVar111._12_4_ = auVar24._12_4_ * fVar11;
  auVar113 = ZEXT1664(auVar111);
  fVar67 = auVar66._0_4_ * fVar67;
  fVar69 = auVar66._4_4_ * fVar69;
  fVar71 = auVar66._8_4_ * fVar71;
  fVar11 = auVar66._12_4_ * fVar11;
  fVar58 = SUB164(*param_2,0);
  if ((fVar58 != _DAT_145fc6f50) || (NAN(fVar58) || NAN(_DAT_145fc6f50))) {
    auVar14 = vpunpckhwd_avx(auVar88._0_16_,auVar88._0_16_);
    auVar51 = vpunpckhwd_avx(auVar85._0_16_,auVar85._0_16_);
    auVar14 = vpsrad_avx(auVar14,0x10);
    auVar51 = vpsrad_avx(auVar51,0x10);
    auVar14 = vcvtdq2ps_avx(auVar14);
    auVar51 = vcvtdq2ps_avx(auVar51);
    auVar14 = vshufpd_avx(auVar14,auVar14,3);
    auVar51 = vshufpd_avx(auVar51,auVar51,3);
    auVar15._0_4_ = (float)_DAT_146159c90 * auVar14._0_4_ + auVar88._0_4_;
    fVar58 = (float)((ulonglong)_DAT_146159c90 >> 0x20);
    auVar15._4_4_ = fVar58 * auVar14._4_4_ + auVar88._4_4_;
    auVar15._8_4_ = auVar14._8_4_ * 0.0 + auVar88._8_4_;
    auVar15._12_4_ = auVar14._12_4_ * 0.0 + auVar88._12_4_;
    auVar52._0_4_ = (float)_DAT_146159c90 * auVar51._0_4_ + auVar85._0_4_;
    auVar52._4_4_ = fVar58 * auVar51._4_4_ + auVar85._4_4_;
    auVar52._8_4_ = auVar51._8_4_ * 0.0 + auVar85._8_4_;
    auVar52._12_4_ = auVar51._12_4_ * 0.0 + auVar85._12_4_;
    auVar14 = vshufps_avx(auVar15,auVar15,0xaa);
    auVar51 = vshufps_avx(auVar15,auVar15,0x55);
    auVar16._0_4_ =
         auVar96._0_4_ * auVar14._0_4_ +
         auVar104._0_4_ * auVar51._0_4_ + auVar73._0_4_ * auVar15._0_4_ + auVar52._0_4_;
    auVar16._4_4_ =
         auVar96._4_4_ * auVar14._4_4_ +
         auVar104._4_4_ * auVar51._4_4_ + auVar73._4_4_ * auVar15._0_4_ + auVar52._4_4_;
    auVar16._8_4_ =
         auVar96._8_4_ * auVar14._8_4_ +
         auVar104._8_4_ * auVar51._8_4_ + auVar73._8_4_ * auVar15._0_4_ + auVar52._8_4_;
    auVar16._12_4_ =
         auVar96._12_4_ * auVar14._12_4_ +
         auVar104._12_4_ * auVar51._12_4_ + auVar73._12_4_ * auVar15._0_4_ + auVar52._12_4_;
    auVar14 = vblendps_avx(auVar16,*param_2,4);
    auVar33 = vsubps_avx(auVar14,auVar52);
    auVar14 = vshufps_avx(auVar33,auVar33,0xaa);
    auVar51 = vshufps_avx(auVar33,auVar33,0x55);
    fVar58 = auVar33._0_4_;
    auVar5._0_4_ = auVar14._0_4_ * fVar67 + auVar111._0_4_ * auVar51._0_4_ + fVar58 * auVar62._0_4_;
    auVar5._4_4_ = auVar14._4_4_ * fVar69 + auVar111._4_4_ * auVar51._4_4_ + fVar58 * auVar62._4_4_;
    auVar5._8_4_ = auVar14._8_4_ * fVar71 + auVar111._8_4_ * auVar51._8_4_ + fVar58 * auVar62._8_4_;
    auVar5._12_4_ =
         auVar14._12_4_ * fVar11 + auVar111._12_4_ * auVar51._12_4_ + fVar58 * auVar62._12_4_;
    auVar17._4_4_ = _DAT_14615a290;
    auVar17._0_4_ = _DAT_14615a290;
    auVar17._8_4_ = _DAT_14615a290;
    auVar17._12_4_ = _DAT_14615a290;
    auVar14 = vrcpps_avx(auVar17);
    fVar58 = auVar14._0_4_;
    fVar99 = auVar14._4_4_;
    fVar100 = auVar14._8_4_;
    fVar101 = auVar14._12_4_;
    auVar28._0_4_ = ((-(fVar58 * _DAT_14615a290) + fVar9) * fVar58 + fVar58) * auVar5._0_4_;
    auVar28._4_4_ = ((-(fVar99 * _DAT_14615a290) + fVar10) * fVar99 + fVar99) * auVar5._4_4_;
    auVar28._8_4_ = ((-(fVar100 * _DAT_14615a290) + fVar12) * fVar100 + fVar100) * auVar5._8_4_;
    auVar28._12_4_ = ((-(fVar101 * _DAT_14615a290) + fVar94) * fVar101 + fVar101) * auVar5._12_4_;
    auVar51 = vroundps_avx(auVar28,3);
    auVar18._0_4_ = -(auVar51._0_4_ * _DAT_14615a290) + auVar5._0_4_;
    auVar18._4_4_ = -(auVar51._4_4_ * _DAT_14615a290) + auVar5._4_4_;
    auVar18._8_4_ = -(auVar51._8_4_ * _DAT_14615a290) + auVar5._8_4_;
    auVar18._12_4_ = -(auVar51._12_4_ * _DAT_14615a290) + auVar5._12_4_;
    auVar14 = vblendps_avx(auVar5,auVar18,3);
    auVar19._0_4_ = (int)auVar51._0_4_;
    auVar19._4_4_ = (int)auVar51._4_4_;
    auVar19._8_4_ = (int)auVar51._8_4_;
    auVar19._12_4_ = (int)auVar51._12_4_;
    auVar51 = vpackssdw_avx(auVar19,auVar19);
    auStack_118 = vinsertps_avx(auVar14,auVar51,0x30);
    FUN_1454060d0(lVar1);
    auVar96 = auVar98._0_16_;
    auVar62 = auVar92._0_16_;
    auVar104 = auVar105._0_16_;
    auVar73 = auVar78._0_16_;
    auVar83 = auVar106._0_16_;
    auVar111 = auVar113._0_16_;
    auVar14 = auVar93._0_16_;
    auVar84 = auVar112._0_16_;
  }
  auVar51 = vblendps_avx(auVar83,auVar91,7);
  fVar58 = auVar51._0_4_ * _DAT_146159c48;
  fVar9 = auVar51._4_4_ * _DAT_146159c48;
  fVar10 = auVar51._8_4_ * _DAT_146159c48;
  fVar12 = auVar51._12_4_ * _DAT_146159c48;
  auVar6._0_4_ = (uint)(fVar58 + (float)(uVar2 & (uint)fVar58 | (uint)_DAT_145fc6edc));
  auVar6._4_4_ = (uint)(fVar9 + (float)(uVar2 & (uint)fVar9 | (uint)_DAT_145fc6edc));
  auVar6._8_4_ = (uint)(fVar10 + (float)(uVar2 & (uint)fVar10 | (uint)_DAT_145fc6edc));
  auVar6._12_4_ = (uint)(fVar12 + (float)(uVar2 & (uint)fVar12 | (uint)_DAT_145fc6edc));
  auVar33 = vcvtdq2ps_avx(auVar6);
  auVar53._0_4_ = auVar6._0_4_ & _DAT_145f43778;
  auVar53._4_4_ = auVar6._4_4_ & _DAT_145f43778;
  auVar53._8_4_ = auVar6._8_4_ & _DAT_145f43778;
  auVar53._12_4_ = auVar6._12_4_ & _DAT_145f43778;
  fVar58 = auVar33._0_4_ * _DAT_146159b50 + auVar33._0_4_ * _DAT_146159b4c + auVar51._0_4_;
  fVar9 = auVar33._4_4_ * _DAT_146159b50 + auVar33._4_4_ * _DAT_146159b4c + auVar51._4_4_;
  fVar10 = auVar33._8_4_ * _DAT_146159b50 + auVar33._8_4_ * _DAT_146159b4c + auVar51._8_4_;
  fVar12 = auVar33._12_4_ * _DAT_146159b50 + auVar33._12_4_ * _DAT_146159b4c + auVar51._12_4_;
  fVar94 = fVar58 * fVar58;
  fVar99 = fVar9 * fVar9;
  fVar100 = fVar10 * fVar10;
  fVar101 = fVar12 * fVar12;
  auVar44._0_4_ =
       (fVar94 * (fVar94 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) * fVar94 * fVar58 +
       fVar58;
  auVar44._4_4_ =
       (fVar99 * (fVar99 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) * fVar99 * fVar9 +
       fVar9;
  auVar44._8_4_ =
       (fVar100 * (fVar100 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) * fVar100 * fVar10 +
       fVar10;
  auVar44._12_4_ =
       (fVar101 * (fVar101 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) * fVar101 * fVar12 +
       fVar12;
  auVar36._4_4_ = _DAT_145f43774;
  auVar36._0_4_ = _DAT_145f43774;
  auVar36._8_4_ = _DAT_145f43774;
  auVar36._12_4_ = _DAT_145f43774;
  fVar59 = auVar84._0_4_;
  auVar20._0_4_ =
       fVar94 * (fVar94 * (fVar94 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) + fVar59;
  fVar68 = auVar84._4_4_;
  auVar20._4_4_ =
       fVar99 * (fVar99 * (fVar99 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) + fVar68;
  fVar99 = auVar84._8_4_;
  auVar20._8_4_ =
       fVar100 * (fVar100 * (fVar100 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) + fVar99;
  fVar100 = auVar84._12_4_;
  auVar20._12_4_ =
       fVar101 * (fVar101 * (fVar101 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) + fVar100;
  auVar29._0_4_ = auVar6._0_4_ & _DAT_145f43774;
  auVar29._4_4_ = auVar6._4_4_ & _DAT_145f43774;
  auVar29._8_4_ = auVar6._8_4_ & _DAT_145f43774;
  auVar29._12_4_ = auVar6._12_4_ & _DAT_145f43774;
  auVar33 = vpcmpeqd_avx((undefined1  [16])0x0,auVar29);
  auVar51 = vpcmpeqd_avx((undefined1  [16])0x0,auVar53);
  auVar51 = vblendvps_avx(auVar20,auVar44,auVar51);
  auVar87._0_4_ = auVar51._0_4_ ^ uVar2;
  auVar87._4_4_ = auVar51._4_4_ ^ uVar2;
  auVar87._8_4_ = auVar51._8_4_ ^ uVar2;
  auVar87._12_4_ = auVar51._12_4_ ^ uVar2;
  auVar51 = vblendvps_avx(auVar87,auVar51,auVar33);
  auVar33 = vpsubd_avx(ZEXT816(0) << 0x20,auVar53);
  auVar33 = vblendvps_avx(auVar20,auVar44,auVar33);
  auVar24 = vpcmpeqd_avx(auVar44,auVar44);
  auVar24 = vpsubd_avx(auVar6,auVar24);
  auVar24 = vpand_avx(auVar24,auVar36);
  auVar37._0_4_ = uVar2 ^ auVar33._0_4_;
  auVar37._4_4_ = uVar2 ^ auVar33._4_4_;
  auVar37._8_4_ = uVar2 ^ auVar33._8_4_;
  auVar37._12_4_ = uVar2 ^ auVar33._12_4_;
  auVar24 = vpcmpeqd_avx(ZEXT816(0) << 0x20,auVar24);
  auVar33 = vblendvps_avx(auVar37,auVar33,auVar24);
  auVar66 = vunpckhps_avx(auVar33,auVar51);
  auVar24 = vshufps_avx(auVar51,auVar33,0x15);
  fVar9 = auVar51._0_4_;
  auVar21._0_4_ = uVar2 ^ (uint)fVar9;
  auVar21._4_4_ = uVar2 ^ auVar51._4_4_;
  auVar21._8_4_ = uVar2 ^ auVar51._8_4_;
  auVar21._12_4_ = uVar2 ^ auVar51._12_4_;
  auVar51 = vunpckhps_avx(auVar21,auVar33);
  fVar58 = auVar33._0_4_;
  auVar51 = vblendps_avx(auVar51,(undefined1  [16])0x0,8);
  auVar33 = vshufps_avx(auVar14,auVar14,0xd2);
  auVar38._0_4_ = auVar51._0_4_ * fVar58 + auVar66._0_4_ * auVar24._0_4_ * fVar9;
  auVar38._4_4_ = auVar51._4_4_ * fVar58 + auVar66._4_4_ * auVar24._4_4_ * fVar9;
  auVar38._8_4_ = auVar51._8_4_ * fVar58 + auVar66._8_4_ * auVar24._8_4_ * fVar9;
  auVar38._12_4_ = auVar51._12_4_ * fVar58 + auVar66._12_4_ * auVar24._12_4_ * fVar9;
  auVar51 = vshufps_avx(auVar38,auVar38,0x55);
  auVar24 = vshufps_avx(auVar38,auVar38,0xaa);
  fVar94 = auVar14._0_4_;
  auVar66 = vshufps_avx(auVar14,auVar14,0x55);
  fVar58 = auVar62._0_4_;
  fVar9 = auVar62._4_4_;
  fVar10 = auVar62._8_4_;
  fVar12 = auVar62._12_4_;
  fVar101 = auVar111._0_4_;
  fVar70 = auVar111._4_4_;
  fVar72 = auVar111._8_4_;
  fVar114 = auVar111._12_4_;
  auVar48 = vshufps_avx(auVar14,auVar14,0xaa);
  auVar97._0_4_ =
       auVar24._0_4_ * auVar96._0_4_ +
       auVar51._0_4_ * auVar104._0_4_ + auVar38._0_4_ * auVar73._0_4_;
  auVar97._4_4_ =
       auVar24._4_4_ * auVar96._4_4_ +
       auVar51._4_4_ * auVar104._4_4_ + auVar38._0_4_ * auVar73._4_4_;
  auVar97._8_4_ =
       auVar24._8_4_ * auVar96._8_4_ +
       auVar51._8_4_ * auVar104._8_4_ + auVar38._0_4_ * auVar73._8_4_;
  auVar97._12_4_ =
       auVar24._12_4_ * auVar96._12_4_ +
       auVar51._12_4_ * auVar104._12_4_ + auVar38._0_4_ * auVar73._12_4_;
  auVar22._0_4_ = fVar67 * auVar48._0_4_ + fVar101 * auVar66._0_4_ + fVar58 * fVar94;
  auVar22._4_4_ = fVar69 * auVar48._4_4_ + fVar70 * auVar66._4_4_ + fVar9 * fVar94;
  auVar22._8_4_ = fVar71 * auVar48._8_4_ + fVar72 * auVar66._8_4_ + fVar10 * fVar94;
  auVar22._12_4_ = fVar11 * auVar48._12_4_ + fVar114 * auVar66._12_4_ + fVar12 * fVar94;
  auVar14 = vshufps_avx(auVar14,auVar14,0xc9);
  auVar51 = vshufps_avx(auVar97,auVar97,0xc9);
  auVar24 = vshufps_avx(auVar97,auVar97,0xd2);
  auVar39._0_4_ = -(auVar14._0_4_ * auVar24._0_4_) + auVar51._0_4_ * auVar33._0_4_;
  auVar39._4_4_ = -(auVar14._4_4_ * auVar24._4_4_) + auVar51._4_4_ * auVar33._4_4_;
  auVar39._8_4_ = -(auVar14._8_4_ * auVar24._8_4_) + auVar51._8_4_ * auVar33._8_4_;
  auVar39._12_4_ = -(auVar14._12_4_ * auVar24._12_4_) + auVar51._12_4_ * auVar33._12_4_;
  auVar51 = vshufps_avx(auVar39,auVar39,0xd2);
  auVar24 = vshufps_avx(auVar39,auVar39,0xc9);
  auVar7._0_4_ = -(auVar33._0_4_ * auVar24._0_4_) + auVar51._0_4_ * auVar14._0_4_;
  auVar7._4_4_ = -(auVar33._4_4_ * auVar24._4_4_) + auVar51._4_4_ * auVar14._4_4_;
  auVar7._8_4_ = -(auVar33._8_4_ * auVar24._8_4_) + auVar51._8_4_ * auVar14._8_4_;
  auVar7._12_4_ = -(auVar33._12_4_ * auVar24._12_4_) + auVar51._12_4_ * auVar14._12_4_;
  auVar14 = vshufps_avx(auVar7,auVar7,0xaa);
  auVar51 = vshufps_avx(auVar7,auVar7,0x55);
  auVar33 = vshufps_avx(auVar39,auVar39,0xaa);
  auVar24 = vshufps_avx(auVar39,auVar39,0x55);
  auVar54._0_4_ = fVar67 * auVar14._0_4_ + fVar101 * auVar51._0_4_ + auVar7._0_4_ * fVar58;
  auVar54._4_4_ = fVar69 * auVar14._4_4_ + fVar70 * auVar51._4_4_ + auVar7._0_4_ * fVar9;
  auVar54._8_4_ = fVar71 * auVar14._8_4_ + fVar72 * auVar51._8_4_ + auVar7._0_4_ * fVar10;
  auVar54._12_4_ = fVar11 * auVar14._12_4_ + fVar114 * auVar51._12_4_ + auVar7._0_4_ * fVar12;
  auVar30._0_4_ = fVar67 * auVar33._0_4_ + fVar101 * auVar24._0_4_ + auVar39._0_4_ * fVar58;
  auVar30._4_4_ = fVar69 * auVar33._4_4_ + fVar70 * auVar24._4_4_ + auVar39._0_4_ * fVar9;
  auVar30._8_4_ = fVar71 * auVar33._8_4_ + fVar72 * auVar24._8_4_ + auVar39._0_4_ * fVar10;
  auVar30._12_4_ = fVar11 * auVar33._12_4_ + fVar114 * auVar24._12_4_ + auVar39._0_4_ * fVar12;
  auVar33 = vshufps_avx(auVar30,auVar30,0xaa);
  auVar14 = vrcpps_avx(auVar33);
  fVar11 = auVar33._0_4_;
  fVar67 = auVar14._0_4_;
  fVar9 = auVar33._4_4_;
  fVar69 = auVar14._4_4_;
  fVar71 = auVar14._8_4_;
  fVar58 = auVar14._12_4_;
  fVar67 = (fVar11 * fVar67 - fVar59) * fVar67 - fVar67;
  fVar69 = (fVar9 * fVar69 - fVar68) * fVar69 - fVar69;
  fVar71 = (auVar33._8_4_ * fVar71 - fVar99) * fVar71 - fVar71;
  fVar58 = (auVar33._12_4_ * fVar58 - fVar100) * fVar58 - fVar58;
  auVar14 = vunpckhpd_avx(auVar54,auVar30);
  auVar14 = vshufps_avx(auVar14,auVar30,0x18);
  auVar55._0_4_ = auVar14._0_4_ * _DAT_14615d110;
  auVar55._4_4_ = auVar14._4_4_ * _UNK_14615d114;
  auVar55._8_4_ = auVar14._8_4_ * _UNK_14615d118;
  auVar55._12_4_ = auVar14._12_4_ * _UNK_14615d11c;
  auVar40._0_4_ = auVar54._0_4_ * fVar67;
  auVar40._4_4_ = auVar54._0_4_ * fVar69;
  auVar40._8_4_ = auVar54._0_4_ * fVar71;
  auVar40._12_4_ = auVar54._0_4_ * fVar58;
  auVar45._0_4_ = fVar67 * auVar22._0_4_;
  auVar45._4_4_ = fVar69 * auVar22._0_4_;
  auVar45._8_4_ = fVar71 * auVar22._0_4_;
  auVar45._12_4_ = fVar58 * auVar22._0_4_;
  auVar51 = vshufpd_avx(auVar22,auVar30,1);
  auVar31._0_4_ = -(auVar30._0_4_ * auVar30._0_4_) + fVar59;
  auVar31._4_4_ = -(auVar30._4_4_ * auVar30._4_4_) + fVar68;
  auVar31._8_4_ = -(auVar30._8_4_ * auVar30._8_4_) + fVar99;
  auVar31._12_4_ = -(auVar30._12_4_ * auVar30._12_4_) + fVar100;
  auVar14 = vrsqrtps_avx(auVar31);
  fVar58 = auVar14._0_4_;
  fVar67 = auVar14._4_4_;
  fVar69 = auVar14._8_4_;
  fVar71 = auVar14._12_4_;
  auVar82._4_4_ = _DAT_146159bfc;
  auVar82._0_4_ = _DAT_146159bfc;
  auVar82._8_4_ = _DAT_146159bfc;
  auVar82._12_4_ = _DAT_146159bfc;
  auVar14 = vcmpps_avx(auVar82,auVar31,2);
  auVar32._0_4_ =
       auVar14._0_4_ &
       (uint)(((fVar58 * fVar58 * auVar31._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar58 + fVar58
              ) * auVar31._0_4_);
  auVar32._4_4_ =
       auVar14._4_4_ &
       (uint)(((fVar67 * fVar67 * auVar31._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar67 + fVar67
              ) * auVar31._4_4_);
  auVar32._8_4_ =
       auVar14._8_4_ &
       (uint)(((fVar69 * fVar69 * auVar31._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar69 + fVar69
              ) * auVar31._8_4_);
  auVar32._12_4_ =
       auVar14._12_4_ &
       (uint)(((fVar71 * fVar71 * auVar31._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar71 +
              fVar71) * auVar31._12_4_);
  auVar14 = vunpckhpd_avx(auVar32,auVar22);
  auVar51 = vshufps_avx(auVar14,auVar51,0x22);
  fVar58 = (float)((uint)auVar33._8_4_ & _DAT_145fc6f4c);
  fVar67 = (float)((uint)auVar33._12_4_ & _DAT_145fc6f4c);
  auVar74._0_4_ = (float)((uint)fVar11 & _DAT_145fc6f4c) + _DAT_14615a160;
  auVar74._4_4_ = (float)((uint)fVar9 & _DAT_145fc6f4c) + _DAT_14615a160;
  auVar74._8_4_ = fVar58 + _DAT_14615a160;
  auVar74._12_4_ = fVar67 + _DAT_14615a160;
  auVar23._0_4_ = _DAT_146159ec4 + (float)((uint)fVar11 & _DAT_145fc6f4c);
  auVar23._4_4_ = _DAT_146159ec4 + (float)((uint)fVar9 & _DAT_145fc6f4c);
  auVar23._8_4_ = _DAT_146159ec4 + fVar58;
  auVar23._12_4_ = _DAT_146159ec4 + fVar67;
  auVar24 = vcmpps_avx(auVar74,auVar84,6);
  auVar14 = vcmpps_avx(auVar84,auVar23,6);
  auVar24 = auVar24 | auVar14;
  auVar14 = vblendvps_avx(auVar45,auVar51,auVar24);
  auVar51 = vblendvps_avx(auVar40,auVar55,auVar24);
  auVar33 = vrcpps_avx(auVar14);
  fVar67 = auVar33._0_4_;
  fVar69 = auVar33._4_4_;
  fVar71 = auVar33._8_4_;
  fVar58 = auVar33._12_4_;
  auVar46._0_4_ = (-((auVar14._0_4_ * fVar67 - fVar59) * fVar67) + fVar67) * auVar51._0_4_;
  auVar46._4_4_ = (-((auVar14._4_4_ * fVar69 - fVar68) * fVar69) + fVar69) * auVar51._4_4_;
  auVar46._8_4_ = (-((auVar14._8_4_ * fVar71 - fVar99) * fVar71) + fVar71) * auVar51._8_4_;
  auVar46._12_4_ = (-((auVar14._12_4_ * fVar58 - fVar100) * fVar58) + fVar58) * auVar51._12_4_;
  auVar33 = vrcpps_avx(auVar46);
  auVar63._0_4_ = (uint)auVar46._0_4_ & _DAT_145fc6f4c;
  auVar63._4_4_ = (uint)auVar46._4_4_ & _DAT_145fc6f4c;
  auVar63._8_4_ = (uint)auVar46._8_4_ & _DAT_145fc6f4c;
  auVar63._12_4_ = (uint)auVar46._12_4_ & _DAT_145fc6f4c;
  auVar66 = vcmpps_avx(auVar84,auVar63,1);
  fVar67 = auVar33._0_4_;
  fVar69 = auVar33._4_4_;
  fVar71 = auVar33._8_4_;
  fVar58 = auVar33._12_4_;
  auVar75._0_4_ = (auVar46._0_4_ * fVar67 - fVar59) * fVar67 - fVar67;
  auVar75._4_4_ = (auVar46._4_4_ * fVar69 - fVar68) * fVar69 - fVar69;
  auVar75._8_4_ = (auVar46._8_4_ * fVar71 - fVar99) * fVar71 - fVar71;
  auVar75._12_4_ = (auVar46._12_4_ * fVar58 - fVar100) * fVar58 - fVar58;
  auVar33 = vblendvps_avx(auVar46,auVar75,auVar66);
  fVar58 = auVar33._0_4_;
  fVar67 = auVar33._4_4_;
  fVar69 = auVar33._8_4_;
  fVar71 = auVar33._12_4_;
  fVar10 = fVar58 * fVar58;
  fVar12 = fVar67 * fVar67;
  fVar94 = fVar69 * fVar69;
  fVar99 = fVar71 * fVar71;
  auVar56._4_4_ = _DAT_146159be0;
  auVar56._0_4_ = _DAT_146159be0;
  auVar56._8_4_ = _DAT_146159be0;
  auVar56._12_4_ = _DAT_146159be0;
  auVar76._0_4_ =
       fVar10 * fVar10 * fVar10 * fVar10 * fVar58 *
       (fVar10 * (fVar10 * (fVar10 * (fVar10 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188) +
                 _DAT_14615a18c) + _DAT_14615a190) +
       fVar10 * fVar58 * (fVar10 * (fVar10 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
       (float)(auVar66._0_4_ & (_DAT_146159bdc | uVar2 & (uint)auVar46._0_4_)) + fVar58;
  auVar76._4_4_ =
       fVar12 * fVar12 * fVar12 * fVar12 * fVar67 *
       (fVar12 * (fVar12 * (fVar12 * (fVar12 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188) +
                 _DAT_14615a18c) + _DAT_14615a190) +
       fVar12 * fVar67 * (fVar12 * (fVar12 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
       (float)(auVar66._4_4_ & (_DAT_146159bdc | uVar2 & (uint)auVar46._4_4_)) + fVar67;
  auVar76._8_4_ =
       fVar94 * fVar94 * fVar94 * fVar94 * fVar69 *
       (fVar94 * (fVar94 * (fVar94 * (fVar94 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188) +
                 _DAT_14615a18c) + _DAT_14615a190) +
       fVar94 * fVar69 * (fVar94 * (fVar94 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
       (float)(auVar66._8_4_ & (_DAT_146159bdc | uVar2 & (uint)auVar46._8_4_)) + fVar69;
  auVar76._12_4_ =
       fVar99 * fVar99 * fVar99 * fVar99 * fVar71 *
       (fVar99 * (fVar99 * (fVar99 * (fVar99 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188) +
                 _DAT_14615a18c) + _DAT_14615a190) +
       fVar99 * fVar71 * (fVar99 * (fVar99 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
       (float)(auVar66._12_4_ & (_DAT_146159bdc | uVar2 & (uint)auVar46._12_4_)) + fVar71;
  auVar64._4_4_ = _DAT_145fc6f80;
  auVar64._0_4_ = _DAT_145fc6f80;
  auVar64._8_4_ = _DAT_145fc6f80;
  auVar64._12_4_ = _DAT_145fc6f80;
  auVar33 = vcmpps_avx(auVar51,ZEXT416(0) << 0x20,1);
  auVar66 = vcmpps_avx(ZEXT416(0) << 0x20,auVar51,1);
  auVar51 = vblendvps_avx(auVar64,auVar56,auVar33);
  auVar57._0_4_ = uVar2 ^ (uint)auVar14._0_4_;
  auVar57._4_4_ = uVar2 ^ (uint)auVar14._4_4_;
  auVar57._8_4_ = uVar2 ^ (uint)auVar14._8_4_;
  auVar57._12_4_ = uVar2 ^ (uint)auVar14._12_4_;
  auVar47._0_4_ = auVar76._0_4_ + auVar51._0_4_;
  auVar47._4_4_ = auVar76._4_4_ + auVar51._4_4_;
  auVar47._8_4_ = auVar76._8_4_ + auVar51._8_4_;
  auVar47._12_4_ = auVar76._12_4_ + auVar51._12_4_;
  auVar51 = vcmpps_avx(auVar14,auVar57,1);
  auVar33 = vcmpps_avx(auVar14,auVar57,0);
  auVar14 = vblendvps_avx(auVar76,auVar47,auVar51);
  auVar65._4_4_ = _DAT_14615a1a0;
  auVar65._0_4_ = _DAT_14615a1a0;
  auVar65._8_4_ = _DAT_14615a1a0;
  auVar65._12_4_ = _DAT_14615a1a0;
  auVar77._4_4_ = _DAT_146159bdc;
  auVar77._0_4_ = _DAT_146159bdc;
  auVar77._8_4_ = _DAT_146159bdc;
  auVar77._12_4_ = _DAT_146159bdc;
  auVar8._0_4_ = fVar11 * _DAT_14615a1a0;
  auVar8._4_4_ = fVar9 * _DAT_14615a1a0;
  auVar51 = vblendvps_avx(auVar65,auVar77,auVar66);
  auVar14 = vblendvps_avx(auVar14,auVar51,auVar33);
  auVar8._8_8_ = 0;
  auVar51 = vblendvps_avx(auVar8,auVar14,auVar24);
  auStack_128 = vblendps_avx(auVar51,auVar14,1);
  FUN_145358920(*param_1);
  return;
}

