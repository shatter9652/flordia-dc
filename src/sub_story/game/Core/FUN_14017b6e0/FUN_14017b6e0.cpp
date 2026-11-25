// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017b6e0  size: 2226 bytes
// Name:    FUN_14017b6e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1447c0110, FUN_144ece020, FUN_140038aa0, FUN_145f17c90, FUN_145336810, FUN_145f179e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14017b6e0(undefined8 param_1,longlong param_2,float *param_3,char param_4,float *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  ushort uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  short sVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 uVar16;
  short sVar17;
  float fVar18;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 unaff_XMM6_Qa;
  float fVar53;
  undefined1 auVar48 [16];
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar49 [16];
  float fVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [64];
  float fVar55;
  undefined8 unaff_XMM7_Qa;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar65;
  undefined1 auVar58 [16];
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined8 unaff_XMM8_Qa;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined8 unaff_XMM8_Qb;
  undefined1 auVar74 [64];
  float fVar75;
  undefined8 unaff_XMM9_Qa;
  float fVar87;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined8 unaff_XMM9_Qb;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar86;
  float fVar88;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined8 unaff_XMM10_Qa;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined8 unaff_XMM10_Qb;
  undefined1 auVar93 [64];
  undefined8 unaff_XMM11_Qa;
  float fVar100;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined8 unaff_XMM11_Qb;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar101;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined8 unaff_XMM12_Qa;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  float fStack_158;
  float fStack_154;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 auStack_118 [8];
  float fStack_110;
  float fStack_10c;
  undefined1 auStack_108 [8];
  float fStack_100;
  float fStack_fc;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auVar64 [64];
  undefined1 auVar85 [64];
  
  auStack_d8._8_8_ = unaff_XMM7_Qb;
  auStack_d8._0_8_ = unaff_XMM7_Qa;
  auStack_e8._8_8_ = unaff_XMM6_Qb;
  auStack_e8._0_8_ = unaff_XMM6_Qa;
  uStack_c8 = unaff_XMM8_Qa;
  uStack_c0 = unaff_XMM8_Qb;
  uStack_b8 = unaff_XMM9_Qa;
  uStack_b0 = unaff_XMM9_Qb;
  uStack_a8 = unaff_XMM10_Qa;
  uStack_a0 = unaff_XMM10_Qb;
  uStack_98 = unaff_XMM11_Qa;
  uStack_90 = unaff_XMM11_Qb;
  uStack_88 = unaff_XMM12_Qa;
  puVar11 = (undefined8 *)FUN_144ece020();
  if ((*(byte *)(param_2 + 0x26e) & 2) != 0) {
    FUN_145336810(param_2 + 0x300);
  }
  if (param_4 == '\0') {
    uVar1 = *puVar11;
    uStack_48 = uStack_88;
    uStack_58 = uStack_98;
    uStack_50 = uStack_90;
    uStack_68 = uStack_a8;
    uStack_60 = uStack_a0;
    uStack_78 = uStack_b8;
    uStack_70 = uStack_b0;
    uStack_88 = uStack_c8;
    uStack_80 = uStack_c0;
    uStack_98 = auStack_d8._0_8_;
    uStack_90 = auStack_d8._8_8_;
    uStack_a8 = auStack_e8._0_8_;
    uStack_a0 = auStack_e8._8_8_;
    uVar12 = (ulonglong)(((uint)uVar1 & 0xffff) << 4);
    if ((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar12) ==
         (short)((ulonglong)uVar1 >> 0x10)) &&
       (lVar15 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar12), lVar15 != 0)) {
      uStack_150 = 0x140039516;
      FUN_1450f6d40(auStack_118,lVar15,*param_5);
      auVar52 = ZEXT464((uint)_DAT_145fc6ed8);
      auVar32 = ZEXT416((uint)_DAT_145fc6ed8);
      auVar64 = ZEXT864(_DAT_146159bc0);
      auVar56._8_8_ = 0;
      auVar56._0_8_ = _DAT_146159bc0;
      auVar74 = ZEXT1664(_DAT_14614f7f0);
      auVar40._0_12_ = ZEXT812(0);
      auVar85 = ZEXT1264(auVar40._0_12_);
      auVar40._12_4_ = 0;
      lVar2 = *(longlong *)(*(longlong *)(lVar15 + 8) + 0x20);
      auVar62 = _DAT_14614f7f0;
      if (((lVar2 != 0) && ((short)((ulonglong)uVar1 >> 0x20) != -2)) &&
         (*(char *)(lVar2 + 0x10) == '\x06')) {
        uStack_150 = 0x140039560;
        uVar9 = func_0x0001403dc2f0(lVar15);
        auVar56 = auVar64._0_16_;
        auVar32 = auVar52._0_16_;
        auVar40 = auVar85._0_16_;
        auVar62 = auVar74._0_16_;
        if ((uVar9 != 0xffff) && (uVar9 < *(ushort *)(lVar2 + 0x9a))) {
          lVar2 = *(longlong *)(lVar2 + 0x78);
          lVar10 = (ulonglong)uVar9 * 0x40;
          auVar32 = *(undefined1 (*) [16])(lVar2 + lVar10);
          auVar56 = *(undefined1 (*) [16])(lVar2 + 0x10 + lVar10);
          auVar40 = *(undefined1 (*) [16])(lVar2 + 0x30 + lVar10);
          auVar62 = *(undefined1 (*) [16])(lVar2 + 0x20 + lVar10);
        }
      }
    }
    else {
      auVar56._8_8_ = 0;
      auVar56._0_8_ = _DAT_146159bc0;
      auStack_e8 = ZEXT816(0) << 0x20;
      auVar40 = SUB6416(ZEXT864(0),0) << 0x20;
      lVar15 = 0;
      auVar32 = ZEXT416((uint)_DAT_145fc6ed8);
      auStack_f8 = _DAT_14614f7f0;
      auVar62 = _DAT_14614f7f0;
      _auStack_118 = auVar32;
      _auStack_108 = auVar56;
    }
    auVar89._0_12_ = ZEXT812(0);
    auVar89._12_4_ = 0;
    uVar6 = auStack_118._0_4_;
    uVar7 = auStack_118._4_4_;
    fVar53 = fStack_110;
    fVar54 = fStack_10c;
    auVar28 = vshufps_avx(auStack_f8,_auStack_108,0x33);
    auVar28 = vshufps_avx(_auStack_108,auVar28,0x8f);
    auVar43._0_4_ = auVar40._0_4_ * (auVar28._0_4_ + _DAT_145fc6ed8);
    auVar43._4_4_ = auVar40._4_4_ * (auVar28._4_4_ + _DAT_145fc6ed8);
    auVar43._8_4_ = auVar40._8_4_ * (auVar28._8_4_ + _DAT_145fc6ed8);
    auVar43._12_4_ = auVar40._12_4_ * (auVar28._12_4_ + _DAT_145fc6ed8);
    fVar18 = auVar32._0_4_;
    auVar76._0_4_ = fVar18 * fVar18;
    fVar23 = auVar32._4_4_;
    auVar76._4_4_ = fVar23 * fVar23;
    fVar75 = auVar32._8_4_;
    auVar76._8_4_ = fVar75 * fVar75;
    fVar87 = auVar32._12_4_;
    auVar76._12_4_ = fVar87 * fVar87;
    auVar32 = vblendps_avx(auVar76,auVar89,8);
    auVar32 = vhaddps_avx(auVar32,auVar32);
    auVar40 = vhaddps_avx(auVar32,auVar32);
    auVar32 = vrsqrtps_avx(auVar40);
    fVar22 = auVar32._0_4_;
    fVar24 = auVar32._4_4_;
    fVar86 = auVar32._8_4_;
    fVar88 = auVar32._12_4_;
    auVar94._4_4_ = _DAT_146159bfc;
    auVar94._0_4_ = _DAT_146159bfc;
    auVar94._8_4_ = _DAT_146159bfc;
    auVar94._12_4_ = _DAT_146159bfc;
    auVar32 = vcmpps_avx(auVar94,auVar40,2);
    auVar77._0_4_ =
         (float)(auVar32._0_4_ &
                (uint)(((fVar22 * fVar22 * auVar40._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar22
                       + fVar22) * auVar40._0_4_));
    auVar77._4_4_ =
         (float)(auVar32._4_4_ &
                (uint)(((fVar24 * fVar24 * auVar40._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar24
                       + fVar24) * auVar40._4_4_));
    auVar77._8_4_ =
         (float)(auVar32._8_4_ &
                (uint)(((fVar86 * fVar86 * auVar40._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar86
                       + fVar86) * auVar40._8_4_));
    auVar77._12_4_ =
         (float)(auVar32._12_4_ &
                (uint)(((fVar88 * fVar88 * auVar40._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                        fVar88 + fVar88) * auVar40._12_4_));
    auVar32 = vrcpps_avx(auVar77);
    auVar95._0_4_ = (uint)auVar77._0_4_ ^ _DAT_145fc6f10;
    auVar95._4_4_ = (uint)auVar77._4_4_ ^ _DAT_145fc6f10;
    auVar95._8_4_ = (uint)auVar77._8_4_ ^ _DAT_145fc6f10;
    auVar95._12_4_ = (uint)auVar77._12_4_ ^ _DAT_145fc6f10;
    fVar24 = auVar32._0_4_;
    fVar86 = auVar32._4_4_;
    fVar88 = auVar32._8_4_;
    fVar22 = auVar32._12_4_;
    auVar32 = vcmpps_avx(auVar77,auVar95,0);
    auVar102._0_4_ = -((auVar77._0_4_ * fVar24 - _DAT_145fc6ed8) * fVar24) + fVar24;
    auVar102._4_4_ = -((auVar77._4_4_ * fVar86 - _DAT_145fc6ed8) * fVar86) + fVar86;
    auVar102._8_4_ = -((auVar77._8_4_ * fVar88 - _DAT_145fc6ed8) * fVar88) + fVar88;
    auVar102._12_4_ = -((auVar77._12_4_ * fVar22 - _DAT_145fc6ed8) * fVar22) + fVar22;
    auVar90._4_4_ = _DAT_14615b36c;
    auVar90._0_4_ = _DAT_14615b36c;
    auVar90._8_4_ = _DAT_14615b36c;
    auVar90._12_4_ = _DAT_14615b36c;
    auVar32 = vblendvps_avx(auVar102,auVar90,auVar32);
    fVar22 = auVar32._0_4_;
    auVar48._0_4_ = fVar22 * fVar18;
    fVar18 = auVar32._4_4_;
    auVar48._4_4_ = fVar18 * fVar23;
    fVar23 = auVar32._8_4_;
    auVar48._8_4_ = fVar23 * fVar75;
    fVar24 = auVar32._12_4_;
    auVar48._12_4_ = fVar24 * fVar87;
    auVar57._0_4_ = fVar22 * auVar56._0_4_;
    auVar57._4_4_ = fVar18 * auVar56._4_4_;
    auVar57._8_4_ = fVar23 * auVar56._8_4_;
    auVar57._12_4_ = fVar24 * auVar56._12_4_;
    auVar66._0_4_ = fVar22 * auVar62._0_4_;
    auVar66._4_4_ = fVar18 * auVar62._4_4_;
    auVar66._8_4_ = fVar23 * auVar62._8_4_;
    auVar66._12_4_ = fVar24 * auVar62._12_4_;
    auVar32 = vshufps_avx(auVar48,auVar48,0x55);
    auVar56 = vshufps_avx(auVar48,auVar48,0xaa);
    fVar75 = auStack_108._0_4_;
    fVar86 = auStack_108._4_4_;
    fVar87 = auStack_108._8_4_;
    fVar88 = auStack_108._12_4_;
    auVar40 = vshufps_avx(auVar57,auVar57,0x55);
    fVar18 = auStack_f8._0_4_;
    fVar22 = auStack_f8._4_4_;
    fVar23 = auStack_f8._8_4_;
    fVar24 = auStack_f8._12_4_;
    auVar62 = vshufps_avx(auVar57,auVar57,0xaa);
    fVar55 = auVar57._0_4_ * (float)auStack_118._0_4_;
    fVar65 = auVar57._0_4_ * (float)auStack_118._4_4_;
    fVar33 = auVar57._0_4_ * fStack_110;
    fVar36 = auVar57._0_4_ * fStack_10c;
    auVar28 = vshufps_avx(auVar66,auVar66,0x55);
    auStack_118._4_4_ =
         fVar22 * auVar56._4_4_ + fVar86 * auVar32._4_4_ + auVar48._0_4_ * (float)auStack_118._4_4_;
    auStack_118._0_4_ =
         fVar18 * auVar56._0_4_ + fVar75 * auVar32._0_4_ + auVar48._0_4_ * (float)auStack_118._0_4_;
    fStack_110 = fVar23 * auVar56._8_4_ + fVar87 * auVar32._8_4_ + auVar48._0_4_ * fStack_110;
    fStack_10c = fVar24 * auVar56._12_4_ + fVar88 * auVar32._12_4_ + auVar48._0_4_ * fStack_10c;
    auVar58._0_4_ = fVar18 * auVar62._0_4_ + fVar75 * auVar40._0_4_ + fVar55;
    auVar58._4_4_ = fVar22 * auVar62._4_4_ + fVar86 * auVar40._4_4_ + fVar65;
    auVar58._8_4_ = fVar23 * auVar62._8_4_ + fVar87 * auVar40._8_4_ + fVar33;
    auVar58._12_4_ = fVar24 * auVar62._12_4_ + fVar88 * auVar40._12_4_ + fVar36;
    auVar32 = vshufps_avx(auVar66,auVar66,0xaa);
    auVar56 = vshufps_avx(auVar43,auVar43,0x55);
    auVar40 = vshufps_avx(auVar43,auVar43,0xaa);
    _auStack_108 = vblendps_avx(auVar58,_auStack_108,8);
    auVar67._0_4_ = fVar18 * auVar32._0_4_ + fVar75 * auVar28._0_4_ + auVar66._0_4_ * (float)uVar6;
    auVar67._4_4_ = fVar22 * auVar32._4_4_ + fVar86 * auVar28._4_4_ + auVar66._0_4_ * (float)uVar7;
    auVar67._8_4_ = fVar23 * auVar32._8_4_ + fVar87 * auVar28._8_4_ + auVar66._0_4_ * fVar53;
    auVar67._12_4_ = fVar24 * auVar32._12_4_ + fVar88 * auVar28._12_4_ + auVar66._0_4_ * fVar54;
    auVar78._0_4_ =
         fVar18 * auVar40._0_4_ +
         fVar75 * auVar56._0_4_ + (float)uVar6 * auVar43._0_4_ + auStack_e8._0_4_;
    auVar78._4_4_ =
         fVar22 * auVar40._4_4_ +
         fVar86 * auVar56._4_4_ + (float)uVar7 * auVar43._0_4_ + auStack_e8._4_4_;
    auVar78._8_4_ =
         fVar23 * auVar40._8_4_ + fVar87 * auVar56._8_4_ + fVar53 * auVar43._0_4_ + auStack_e8._8_4_
    ;
    auVar78._12_4_ =
         fVar24 * auVar40._12_4_ +
         fVar88 * auVar56._12_4_ + fVar54 * auVar43._0_4_ + auStack_e8._12_4_;
    auVar44._4_4_ = _DAT_14615a290;
    auVar44._0_4_ = _DAT_14615a290;
    auVar44._8_4_ = _DAT_14615a290;
    auVar44._12_4_ = _DAT_14615a290;
    auVar32 = vblendps_avx(auVar78,auStack_e8,8);
    auVar56 = vrcpps_avx(auVar44);
    fVar18 = auVar56._0_4_;
    fVar22 = auVar56._4_4_;
    fVar23 = auVar56._8_4_;
    fVar24 = auVar56._12_4_;
    auVar28._0_4_ =
         auVar32._0_4_ * ((-(fVar18 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar18 + fVar18);
    auVar28._4_4_ =
         auVar32._4_4_ * ((-(fVar22 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar22 + fVar22);
    auVar28._8_4_ =
         auVar32._8_4_ * ((-(fVar23 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar23 + fVar23);
    auVar28._12_4_ =
         auVar32._12_4_ * ((-(fVar24 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar24 + fVar24);
    auVar56 = vroundps_avx(auVar28,3);
    auVar45._0_4_ = -(auVar56._0_4_ * _DAT_14615a290) + auVar32._0_4_;
    auVar45._4_4_ = -(auVar56._4_4_ * _DAT_14615a290) + auVar32._4_4_;
    auVar45._8_4_ = -(auVar56._8_4_ * _DAT_14615a290) + auVar32._8_4_;
    auVar45._12_4_ = -(auVar56._12_4_ * _DAT_14615a290) + auVar32._12_4_;
    auVar32._0_4_ = (int)auVar56._0_4_;
    auVar32._4_4_ = (int)auVar56._4_4_;
    auVar32._8_4_ = (int)auVar56._8_4_;
    auVar32._12_4_ = (int)auVar56._12_4_;
    auVar56 = vpackssdw_avx(auVar32,auVar32);
    auStack_f8 = vblendps_avx(auVar67,auStack_f8,8);
    auVar32 = vblendps_avx(auVar78,auVar45,3);
    sVar17 = auVar56._0_2_;
    auVar62._0_2_ = sVar17 + auStack_e8._0_2_;
    sVar13 = auVar56._2_2_;
    auVar62._2_2_ = sVar13 + auStack_e8._2_2_;
    auVar62._4_2_ = sVar17 + auStack_e8._4_2_;
    auVar62._6_2_ = sVar13 + auStack_e8._6_2_;
    auVar62._8_2_ = sVar17 + auStack_e8._8_2_;
    auVar62._10_2_ = sVar13 + auStack_e8._10_2_;
    auVar62._12_2_ = sVar17 + auStack_e8._12_2_;
    auVar62._14_2_ = sVar13 + auStack_e8._14_2_;
    auStack_e8 = vblendps_avx(auVar32,auVar62,8);
    auVar52 = ZEXT1664(auStack_e8);
    uStack_150 = 0x140039796;
    FUN_14026fee0(&uStack_b8,lVar15,uVar1,*param_5);
    auVar32 = vpunpckhwd_avx(auVar52._0_16_,auVar52._0_16_);
    fStack_128 = *param_5;
    auVar32 = vpsrad_avx(auVar32,0x10);
    auVar32 = vcvtdq2ps_avx(auVar32);
    auVar32 = vshufpd_avx(auVar32,auVar32,3);
    auStack_d8._0_4_ = auVar32._0_4_ * _DAT_146159c90 + auVar52._0_4_;
    auStack_d8._4_4_ = auVar32._4_4_ * _UNK_146159c94 + auVar52._4_4_;
    auStack_d8._8_4_ = auVar32._8_4_ * _UNK_146159c98 + auVar52._8_4_;
    auStack_d8._12_4_ = auVar32._12_4_ * _UNK_146159c9c + auVar52._12_4_;
    uStack_150 = 0x1400397d8;
    FUN_14026e850(&uStack_c8,lVar15,uVar1);
    uStack_150 = 0x1400397e9;
    func_0x000145431f90(puVar11 + 2,auStack_118,&uStack_c8,&uStack_b8);
    return;
  }
  uVar1 = *puVar11;
  uVar14 = (uint)uVar1 & 0xffff;
  lVar15 = *(longlong *)(_DAT_14abbf348 + 0x28);
  sVar17 = *(short *)(lVar15 + 8 + (ulonglong)(uVar14 << 4));
  sVar13 = (short)((ulonglong)uVar1 >> 0x10);
  if (sVar17 == sVar13) {
    uVar16 = *(undefined8 *)((ulonglong)(uVar14 << 4) + lVar15);
  }
  else {
    uVar16 = 0;
  }
  if ((*(byte *)(param_2 + 0x26e) & 2) != 0) {
    cVar8 = FUN_140038aa0(uVar1);
    if (cVar8 != '\0') {
      FUN_1447c0110(param_2,&fStack_128,uVar1);
      auVar25._4_4_ = _DAT_14615a290;
      auVar25._0_4_ = _DAT_14615a290;
      auVar25._8_4_ = _DAT_14615a290;
      auVar25._12_4_ = _DAT_14615a290;
      auVar32 = vrcpps_avx(auVar25);
      fVar18 = auVar32._0_4_;
      fVar22 = auVar32._4_4_;
      fVar23 = auVar32._8_4_;
      fVar24 = auVar32._12_4_;
      fVar18 = (-(fVar18 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar18 + fVar18;
      fVar22 = (-(fVar22 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar22 + fVar22;
      fVar23 = (-(fVar23 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar23 + fVar23;
      fVar24 = (-(fVar24 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar24 + fVar24;
      goto LAB_14017bca2;
    }
    lVar15 = *(longlong *)(_DAT_14abbf348 + 0x28);
    sVar17 = *(short *)(lVar15 + 8 + (ulonglong)(uVar14 << 4));
  }
  auVar27 = ZEXT416((uint)_DAT_145fc6ed8);
  auVar34._8_8_ = 0;
  auVar34._0_8_ = _DAT_146159bc0;
  auVar49._0_12_ = ZEXT812(0);
  auVar49._12_4_ = 0;
  auVar52 = ZEXT1664(auVar49);
  auVar32 = _DAT_14614f7f0;
  if (sVar17 == sVar13) {
    auVar56 = (undefined1  [16])0x0;
    auVar40 = (undefined1  [16])0x0;
    lVar15 = *(longlong *)(lVar15 + (ulonglong)(uVar14 << 4));
    if (lVar15 != 0) {
      auVar74 = ZEXT1664(_DAT_14614f7f0);
      auVar85 = ZEXT864(_DAT_146159bc0);
      auVar79._8_8_ = 0;
      auVar79._0_8_ = _DAT_146159bc0;
      auVar93 = ZEXT464((uint)_DAT_145fc6ed8);
      auVar32 = ZEXT416((uint)_DAT_145fc6ed8);
      auVar59._0_12_ = ZEXT812(0);
      auVar64 = ZEXT1264(auVar59._0_12_);
      auVar59._12_4_ = 0;
      lVar2 = *(longlong *)(*(longlong *)(lVar15 + 8) + 0x20);
      auVar56 = _DAT_14614f7f0;
      if (((lVar2 != 0) && ((short)((ulonglong)uVar1 >> 0x20) != -2)) &&
         (*(char *)(lVar2 + 0x10) == '\x06')) {
        uVar9 = func_0x0001403dc2f0(lVar15);
        auVar59 = auVar64._0_16_;
        auVar79 = auVar85._0_16_;
        auVar32 = auVar93._0_16_;
        auVar49 = auVar52._0_16_;
        auVar56 = auVar74._0_16_;
        auVar40 = (undefined1  [16])0x0;
        if ((uVar9 != 0xffff) && (uVar9 < *(ushort *)(lVar2 + 0x9a))) {
          lVar2 = *(longlong *)(lVar2 + 0x78);
          lVar10 = (ulonglong)uVar9 * 0x40;
          auVar32 = *(undefined1 (*) [16])(lVar2 + lVar10);
          auVar79 = *(undefined1 (*) [16])(lVar2 + 0x10 + lVar10);
          auVar56 = *(undefined1 (*) [16])(lVar2 + 0x20 + lVar10);
          auVar40 = *(undefined1 (*) [16])(lVar2 + 0x30 + lVar10);
        }
      }
      auVar62 = *(undefined1 (*) [16])(lVar15 + 0x80);
      fVar53 = *(float *)(lVar15 + 0x50);
      fVar54 = *(float *)(lVar15 + 0x54);
      fVar55 = *(float *)(lVar15 + 0x58);
      fVar65 = *(float *)(lVar15 + 0x5c);
      auVar28 = vpunpckhwd_avx(auVar62,auVar62);
      auVar28 = vpsrad_avx(auVar28,0x10);
      auVar28 = vcvtdq2ps_avx(auVar28);
      auVar28 = vshufpd_avx(auVar28,auVar28,3);
      auVar29._4_4_ = _DAT_14615a290;
      auVar29._0_4_ = _DAT_14615a290;
      auVar29._8_4_ = _DAT_14615a290;
      auVar29._12_4_ = _DAT_14615a290;
      auVar39._0_4_ = auVar28._0_4_ * _DAT_146159c90 + auVar62._0_4_;
      auVar39._4_4_ = auVar28._4_4_ * _UNK_146159c94 + auVar62._4_4_;
      auVar39._8_4_ = auVar28._8_4_ * _UNK_146159c98 + auVar62._8_4_;
      auVar39._12_4_ = auVar28._12_4_ * _UNK_146159c9c + auVar62._12_4_;
      auVar62 = vrcpps_avx(auVar29);
      fVar33 = auVar62._0_4_;
      fVar36 = auVar62._4_4_;
      fVar37 = auVar62._8_4_;
      fVar38 = auVar62._12_4_;
      fVar33 = (-(fVar33 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar33 + fVar33;
      fVar36 = (-(fVar36 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar36 + fVar36;
      fVar37 = (-(fVar37 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar37 + fVar37;
      fVar38 = (-(fVar38 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar38 + fVar38;
      auVar96._0_4_ = auVar39._0_4_ * fVar33;
      auVar96._4_4_ = auVar39._4_4_ * fVar36;
      auVar96._8_4_ = auVar39._8_4_ * fVar37;
      auVar96._12_4_ = auVar39._12_4_ * fVar38;
      auVar62 = vroundps_avx(auVar96,3);
      auVar103._0_4_ = -(auVar62._0_4_ * _DAT_14615a290) + auVar39._0_4_;
      auVar103._4_4_ = -(auVar62._4_4_ * _DAT_14615a290) + auVar39._4_4_;
      auVar103._8_4_ = -(auVar62._8_4_ * _DAT_14615a290) + auVar39._8_4_;
      auVar103._12_4_ = -(auVar62._12_4_ * _DAT_14615a290) + auVar39._12_4_;
      auVar97._0_4_ = (int)auVar62._0_4_;
      auVar97._4_4_ = (int)auVar62._4_4_;
      auVar97._8_4_ = (int)auVar62._8_4_;
      auVar97._12_4_ = (int)auVar62._12_4_;
      auVar44 = vpackssdw_avx(auVar97,auVar97);
      auVar62 = vblendps_avx(auVar39,auVar103,3);
      fVar18 = auVar32._0_4_;
      auVar104._0_4_ = fVar18 * fVar18;
      fVar23 = auVar32._4_4_;
      auVar104._4_4_ = fVar23 * fVar23;
      fVar75 = auVar32._8_4_;
      auVar104._8_4_ = fVar75 * fVar75;
      fVar87 = auVar32._12_4_;
      auVar104._12_4_ = fVar87 * fVar87;
      auVar43 = vinsertps_avx(auVar62,auVar44,0x30);
      auVar32 = vblendps_avx(auVar104,auVar59,8);
      auVar32 = vhaddps_avx(auVar32,auVar32);
      auVar28 = vhaddps_avx(auVar32,auVar32);
      auVar32 = vrsqrtps_avx(auVar28);
      fVar22 = auVar32._0_4_;
      fVar24 = auVar32._4_4_;
      fVar86 = auVar32._8_4_;
      fVar88 = auVar32._12_4_;
      auVar32 = vblendps_avx(auVar59,*(undefined1 (*) [16])(lVar15 + 0x60),7);
      auVar111._4_4_ = _DAT_146159bfc;
      auVar111._0_4_ = _DAT_146159bfc;
      auVar111._8_4_ = _DAT_146159bfc;
      auVar111._12_4_ = _DAT_146159bfc;
      auVar62 = vcmpps_avx(auVar111,auVar28,2);
      auVar107._0_4_ =
           (float)(auVar62._0_4_ &
                  (uint)(((fVar22 * fVar22 * auVar28._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                          fVar22 + fVar22) * auVar28._0_4_));
      auVar107._4_4_ =
           (float)(auVar62._4_4_ &
                  (uint)(((fVar24 * fVar24 * auVar28._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                          fVar24 + fVar24) * auVar28._4_4_));
      auVar107._8_4_ =
           (float)(auVar62._8_4_ &
                  (uint)(((fVar86 * fVar86 * auVar28._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                          fVar86 + fVar86) * auVar28._8_4_));
      auVar107._12_4_ =
           (float)(auVar62._12_4_ &
                  (uint)(((fVar88 * fVar88 * auVar28._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                          fVar88 + fVar88) * auVar28._12_4_));
      auVar62 = vrcpps_avx(auVar107);
      fVar22 = auVar62._0_4_;
      fVar24 = auVar62._4_4_;
      fVar86 = auVar62._8_4_;
      fVar88 = auVar62._12_4_;
      auVar112._0_4_ = (uint)auVar107._0_4_ ^ _DAT_145fc6f10;
      auVar112._4_4_ = (uint)auVar107._4_4_ ^ _DAT_145fc6f10;
      auVar112._8_4_ = (uint)auVar107._8_4_ ^ _DAT_145fc6f10;
      auVar112._12_4_ = (uint)auVar107._12_4_ ^ _DAT_145fc6f10;
      auVar62 = vcmpps_avx(auVar107,auVar112,0);
      auVar26._0_4_ = -((auVar107._0_4_ * fVar22 - _DAT_145fc6ed8) * fVar22) + fVar22;
      auVar26._4_4_ = -((auVar107._4_4_ * fVar24 - _DAT_145fc6ed8) * fVar24) + fVar24;
      auVar26._8_4_ = -((auVar107._8_4_ * fVar86 - _DAT_145fc6ed8) * fVar86) + fVar86;
      auVar26._12_4_ = -((auVar107._12_4_ * fVar88 - _DAT_145fc6ed8) * fVar88) + fVar88;
      auVar109._4_4_ = _DAT_14615b36c;
      auVar109._0_4_ = _DAT_14615b36c;
      auVar109._8_4_ = _DAT_14615b36c;
      auVar109._12_4_ = _DAT_14615b36c;
      auVar62 = vblendvps_avx(auVar26,auVar109,auVar62);
      fVar22 = auVar62._0_4_;
      auVar108._0_4_ = fVar18 * fVar22;
      fVar18 = auVar62._4_4_;
      auVar108._4_4_ = fVar23 * fVar18;
      fVar23 = auVar62._8_4_;
      auVar108._8_4_ = fVar75 * fVar23;
      fVar24 = auVar62._12_4_;
      auVar108._12_4_ = fVar87 * fVar24;
      auVar91._0_4_ = auVar79._0_4_ * fVar22;
      auVar91._4_4_ = auVar79._4_4_ * fVar18;
      auVar91._8_4_ = auVar79._8_4_ * fVar23;
      auVar91._12_4_ = auVar79._12_4_ * fVar24;
      auVar80._0_4_ = auVar56._0_4_ * fVar22;
      auVar80._4_4_ = auVar56._4_4_ * fVar18;
      auVar80._8_4_ = auVar56._8_4_ * fVar23;
      auVar80._12_4_ = auVar56._12_4_ * fVar24;
      auVar62 = vshufps_avx(auVar108,auVar108,0x55);
      auVar28 = vshufps_avx(auVar91,auVar91,0x55);
      auVar45 = vshufps_avx(auVar80,auVar80,0x55);
      fVar86 = auVar32._0_4_;
      fVar87 = auVar32._4_4_;
      fVar88 = auVar32._8_4_;
      fVar100 = auVar32._12_4_;
      auVar48 = vshufps_avx(auVar91,auVar91,0xaa);
      auVar57 = vshufps_avx(auVar80,auVar80,0xaa);
      fVar18 = auVar40._0_4_;
      auVar56 = vpshufd_avx(auVar40,0x55);
      auVar40 = vpshufd_avx(auVar40,0xaa);
      auVar32 = vblendps_avx(auVar59,*(undefined1 (*) [16])(lVar15 + 0x70),7);
      auVar58 = vshufps_avx(auVar108,auVar108,0xaa);
      fVar22 = auVar32._0_4_;
      auVar113._0_4_ =
           fVar22 * auVar40._0_4_ + fVar86 * auVar56._0_4_ + fVar53 * fVar18 + auVar43._0_4_;
      fVar23 = auVar32._4_4_;
      auVar113._4_4_ =
           fVar23 * auVar40._4_4_ + fVar87 * auVar56._4_4_ + fVar54 * fVar18 + auVar43._4_4_;
      fVar24 = auVar32._8_4_;
      auVar113._8_4_ =
           fVar24 * auVar40._8_4_ + fVar88 * auVar56._8_4_ + fVar55 * fVar18 + auVar43._8_4_;
      fVar75 = auVar32._12_4_;
      auVar113._12_4_ =
           fVar75 * auVar40._12_4_ + fVar100 * auVar56._12_4_ + fVar65 * fVar18 + auVar43._12_4_;
      auVar68._0_4_ = fVar22 * auVar48._0_4_ + fVar86 * auVar28._0_4_ + auVar91._0_4_ * fVar53;
      auVar68._4_4_ = fVar23 * auVar48._4_4_ + fVar87 * auVar28._4_4_ + auVar91._0_4_ * fVar54;
      auVar68._8_4_ = fVar24 * auVar48._8_4_ + fVar88 * auVar28._8_4_ + auVar91._0_4_ * fVar55;
      auVar68._12_4_ = fVar75 * auVar48._12_4_ + fVar100 * auVar28._12_4_ + auVar91._0_4_ * fVar65;
      auVar110._0_4_ = fVar22 * auVar57._0_4_ + fVar86 * auVar45._0_4_ + auVar80._0_4_ * fVar53;
      auVar110._4_4_ = fVar23 * auVar57._4_4_ + fVar87 * auVar45._4_4_ + auVar80._0_4_ * fVar54;
      auVar110._8_4_ = fVar24 * auVar57._8_4_ + fVar88 * auVar45._8_4_ + auVar80._0_4_ * fVar55;
      auVar110._12_4_ = fVar75 * auVar57._12_4_ + fVar100 * auVar45._12_4_ + auVar80._0_4_ * fVar65;
      auVar27._0_4_ = fVar22 * auVar58._0_4_ + fVar86 * auVar62._0_4_ + auVar108._0_4_ * fVar53;
      auVar27._4_4_ = fVar23 * auVar58._4_4_ + fVar87 * auVar62._4_4_ + auVar108._0_4_ * fVar54;
      auVar27._8_4_ = fVar24 * auVar58._8_4_ + fVar88 * auVar62._8_4_ + auVar108._0_4_ * fVar55;
      auVar27._12_4_ = fVar75 * auVar58._12_4_ + fVar100 * auVar62._12_4_ + auVar108._0_4_ * fVar65;
      auVar32 = vinsertps_avx(auVar113,auVar44,0x30);
      auVar35._0_4_ = auVar32._0_4_ * fVar33;
      auVar35._4_4_ = auVar32._4_4_ * fVar36;
      auVar35._8_4_ = auVar32._8_4_ * fVar37;
      auVar35._12_4_ = auVar32._12_4_ * fVar38;
      auVar56 = vroundps_avx(auVar35,3);
      auVar30._0_4_ = -(auVar56._0_4_ * _DAT_14615a290) + auVar32._0_4_;
      auVar30._4_4_ = -(auVar56._4_4_ * _DAT_14615a290) + auVar32._4_4_;
      auVar30._8_4_ = -(auVar56._8_4_ * _DAT_14615a290) + auVar32._8_4_;
      auVar30._12_4_ = -(auVar56._12_4_ * _DAT_14615a290) + auVar32._12_4_;
      auVar32 = vblendps_avx(auVar113,auVar30,3);
      auVar31._0_4_ = (int)auVar56._0_4_;
      auVar31._4_4_ = (int)auVar56._4_4_;
      auVar31._8_4_ = (int)auVar56._8_4_;
      auVar31._12_4_ = (int)auVar56._12_4_;
      auVar34 = vblendps_avx(auVar68,auVar59,8);
      auVar56 = vpackssdw_avx(auVar31,auVar31);
      sVar17 = auVar56._0_2_;
      auVar3._0_2_ = sVar17 + auVar43._0_2_;
      sVar13 = auVar56._2_2_;
      auVar3._2_2_ = sVar13 + auVar43._2_2_;
      auVar3._4_2_ = sVar17 + auVar43._4_2_;
      auVar3._6_2_ = sVar13 + auVar43._6_2_;
      auVar3._8_2_ = sVar17 + auVar43._8_2_;
      auVar3._10_2_ = sVar13 + auVar43._10_2_;
      auVar3._12_2_ = sVar17 + auVar43._12_2_;
      auVar3._14_2_ = sVar13 + auVar43._14_2_;
      auVar56 = vpblendd_avx2(auVar32,auVar3,8);
      auVar32 = vblendps_avx(auVar110,auVar59,8);
    }
  }
  else {
    auVar56 = (undefined1  [16])0x0;
  }
  auVar40 = vpunpckhwd_avx(auVar56,auVar56);
  auVar60._4_4_ = _DAT_14615a290;
  auVar60._0_4_ = _DAT_14615a290;
  auVar60._8_4_ = _DAT_14615a290;
  auVar60._12_4_ = _DAT_14615a290;
  auVar40 = vpsrad_avx(auVar40,0x10);
  auVar40 = vcvtdq2ps_avx(auVar40);
  auVar40 = vshufpd_avx(auVar40,auVar40,3);
  auVar62 = vrcpps_avx(auVar60);
  auVar41._0_4_ =
       *(float *)*(undefined1 (*) [16])(param_2 + 0xc0) +
       (-(_DAT_146159c90 * auVar40._0_4_) - auVar56._0_4_);
  auVar41._4_4_ = *(float *)(param_2 + 0xc4) + (-(_UNK_146159c94 * auVar40._4_4_) - auVar56._4_4_);
  auVar41._8_4_ = *(float *)(param_2 + 200) + (-(auVar40._8_4_ * 0.0) - auVar56._8_4_);
  auVar41._12_4_ = *(float *)(param_2 + 0xcc) + (-(auVar40._12_4_ * 0.0) - auVar56._12_4_);
  auVar40 = vblendps_avx(auVar41,*(undefined1 (*) [16])(param_2 + 0xc0),8);
  auVar56 = *(undefined1 (*) [16])(param_2 + 0xb0);
  fVar18 = auVar62._0_4_;
  fVar22 = auVar62._4_4_;
  fVar23 = auVar62._8_4_;
  fVar24 = auVar62._12_4_;
  fVar18 = (-(fVar18 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar18 + fVar18;
  fVar22 = (-(fVar22 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar22 + fVar22;
  fVar23 = (-(fVar23 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar23 + fVar23;
  fVar24 = (-(fVar24 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar24 + fVar24;
  auVar69._0_4_ = fVar18 * auVar40._0_4_;
  auVar69._4_4_ = fVar22 * auVar40._4_4_;
  auVar69._8_4_ = fVar23 * auVar40._8_4_;
  auVar69._12_4_ = fVar24 * auVar40._12_4_;
  auVar62 = vroundps_avx(auVar69,3);
  auVar61._0_4_ = -(auVar62._0_4_ * _DAT_14615a290) + auVar40._0_4_;
  auVar61._4_4_ = -(auVar62._4_4_ * _DAT_14615a290) + auVar40._4_4_;
  auVar61._8_4_ = -(auVar62._8_4_ * _DAT_14615a290) + auVar40._8_4_;
  auVar61._12_4_ = -(auVar62._12_4_ * _DAT_14615a290) + auVar40._12_4_;
  auVar70._0_4_ = (int)auVar62._0_4_;
  auVar70._4_4_ = (int)auVar62._4_4_;
  auVar70._8_4_ = (int)auVar62._8_4_;
  auVar70._12_4_ = (int)auVar62._12_4_;
  auVar28 = vpackssdw_avx(auVar70,auVar70);
  auVar62 = vblendps_avx(auVar40,auVar61,3);
  sVar17 = auVar28._0_2_;
  auVar4._0_2_ = sVar17 + auVar40._0_2_;
  sVar13 = auVar28._2_2_;
  auVar4._2_2_ = sVar13 + auVar40._2_2_;
  auVar4._4_2_ = sVar17 + auVar40._4_2_;
  auVar4._6_2_ = sVar13 + auVar40._6_2_;
  auVar4._8_2_ = sVar17 + auVar40._8_2_;
  auVar4._10_2_ = sVar13 + auVar40._10_2_;
  auVar4._12_2_ = sVar17 + auVar40._12_2_;
  auVar4._14_2_ = sVar13 + auVar40._14_2_;
  auVar40 = vblendps_avx(auVar62,auVar4,8);
  auVar62 = vpunpckhwd_avx(auVar40,auVar40);
  auVar62 = vpsrad_avx(auVar62,0x10);
  auVar62 = vcvtdq2ps_avx(auVar62);
  auVar62 = vshufpd_avx(auVar62,auVar62,3);
  fVar75 = -(_DAT_146159c90 * auVar62._0_4_) - auVar40._0_4_;
  fVar86 = -(_UNK_146159c94 * auVar62._4_4_) - auVar40._4_4_;
  fVar87 = -(auVar62._8_4_ * 0.0) - auVar40._8_4_;
  fVar88 = -(auVar62._12_4_ * 0.0) - auVar40._12_4_;
  auVar40 = *(undefined1 (*) [16])(param_2 + 0x90);
  auVar62 = *(undefined1 (*) [16])(param_2 + 0xa0);
  auVar63._0_4_ = fVar75 * auVar40._0_4_;
  auVar63._4_4_ = fVar86 * auVar40._4_4_;
  auVar63._8_4_ = fVar87 * auVar40._8_4_;
  auVar63._12_4_ = fVar88 * auVar40._12_4_;
  auVar71._0_4_ = fVar75 * auVar62._0_4_;
  auVar71._4_4_ = fVar86 * auVar62._4_4_;
  auVar71._8_4_ = fVar87 * auVar62._8_4_;
  auVar71._12_4_ = fVar88 * auVar62._12_4_;
  auVar81._0_4_ = auVar56._0_4_ * fVar75;
  auVar81._4_4_ = auVar56._4_4_ * fVar86;
  auVar81._8_4_ = auVar56._8_4_ * fVar87;
  auVar81._12_4_ = auVar56._12_4_ * fVar88;
  auVar44 = vunpcklps_avx(auVar40,auVar56);
  auVar45 = vunpcklps_avx(auVar62,auVar49);
  auVar56 = vunpckhps_avx(auVar40,auVar56);
  auVar40 = vunpckhps_avx(auVar62,auVar49);
  auVar48 = vunpcklps_avx(auVar56,auVar40);
  fVar75 = auVar27._0_4_;
  auVar28 = vshufps_avx(auVar27,auVar27,0x55);
  auVar43 = vshufps_avx(auVar27,auVar27,0xaa);
  auVar56 = vblendps_avx(auVar63,auVar49,8);
  auVar40 = vblendps_avx(auVar71,auVar49,8);
  auVar62 = vblendps_avx(auVar81,auVar49,8);
  auVar57 = vunpcklps_avx(auVar44,auVar45);
  auVar45 = vunpckhps_avx(auVar44,auVar45);
  auVar44 = vshufps_avx(auVar34,auVar34,0x55);
  fVar87 = auVar57._0_4_;
  fVar88 = auVar57._4_4_;
  fVar53 = auVar57._8_4_;
  fVar54 = auVar57._12_4_;
  fVar37 = auVar45._0_4_;
  fVar38 = auVar45._4_4_;
  fVar100 = auVar45._8_4_;
  fVar101 = auVar45._12_4_;
  fVar55 = auVar48._0_4_;
  fStack_128 = fVar55 * auVar43._0_4_ + fVar37 * auVar28._0_4_ + fVar87 * fVar75;
  fVar65 = auVar48._4_4_;
  fStack_124 = fVar65 * auVar43._4_4_ + fVar38 * auVar28._4_4_ + fVar88 * fVar75;
  fVar33 = auVar48._8_4_;
  fStack_120 = fVar33 * auVar43._8_4_ + fVar100 * auVar28._8_4_ + fVar53 * fVar75;
  fVar36 = auVar48._12_4_;
  fStack_11c = fVar36 * auVar43._12_4_ + fVar101 * auVar28._12_4_ + fVar54 * fVar75;
  fVar86 = auVar34._0_4_;
  auVar28 = vshufps_avx(auVar34,auVar34,0xaa);
  fVar75 = auVar32._0_4_;
  auVar62 = vhaddps_avx(auVar62,auVar40);
  auStack_118._0_4_ = fVar55 * auVar28._0_4_ + fVar37 * auVar44._0_4_ + fVar87 * fVar86;
  auStack_118._4_4_ = fVar65 * auVar28._4_4_ + fVar38 * auVar44._4_4_ + fVar88 * fVar86;
  fStack_110 = fVar33 * auVar28._8_4_ + fVar100 * auVar44._8_4_ + fVar53 * fVar86;
  fStack_10c = fVar36 * auVar28._12_4_ + fVar101 * auVar44._12_4_ + fVar54 * fVar86;
  auVar28 = vshufps_avx(auVar32,auVar32,0x55);
  auVar43 = vshufps_avx(auVar32,auVar32,0xaa);
  auVar32 = vhaddps_avx(auVar56,auVar40);
  auStack_108._0_4_ = fVar55 * auVar43._0_4_ + fVar37 * auVar28._0_4_ + fVar87 * fVar75;
  auStack_108._4_4_ = fVar65 * auVar43._4_4_ + fVar38 * auVar28._4_4_ + fVar88 * fVar75;
  fStack_100 = fVar33 * auVar43._8_4_ + fVar100 * auVar28._8_4_ + fVar53 * fVar75;
  fStack_fc = fVar36 * auVar43._12_4_ + fVar101 * auVar28._12_4_ + fVar54 * fVar75;
  auStack_f8 = vhaddps_avx(auVar32,auVar62);
LAB_14017bca2:
  auVar32 = *(undefined1 (*) [16])(param_3 + 4);
  auVar56 = *(undefined1 (*) [16])(param_3 + 8);
  auVar98._0_12_ = ZEXT812(0);
  auVar98._12_4_ = 0;
  fVar53 = *param_3;
  fVar54 = param_3[1];
  fVar55 = param_3[2];
  fVar65 = param_3[3];
  auVar40 = *(undefined1 (*) [16])(param_3 + 0xc);
  auVar62 = vshufps_avx(auVar56,auVar32,0x33);
  auVar62 = vshufps_avx(auVar32,auVar62,0x8f);
  auVar72._0_4_ = (auVar62._0_4_ + _DAT_145fc6ed8) * auStack_f8._0_4_;
  auVar72._4_4_ = (auVar62._4_4_ + _DAT_145fc6ed8) * auStack_f8._4_4_;
  auVar72._8_4_ = (auVar62._8_4_ + _DAT_145fc6ed8) * auStack_f8._8_4_;
  auVar72._12_4_ = (auVar62._12_4_ + _DAT_145fc6ed8) * auStack_f8._12_4_;
  auVar82._0_4_ = fStack_128 * fStack_128;
  auVar82._4_4_ = fStack_124 * fStack_124;
  auVar82._8_4_ = fStack_120 * fStack_120;
  auVar82._12_4_ = fStack_11c * fStack_11c;
  auVar62 = vblendps_avx(auVar82,auVar98,8);
  auVar62 = vhaddps_avx(auVar62,auVar62);
  auVar28 = vhaddps_avx(auVar62,auVar62);
  auVar62 = vrsqrtps_avx(auVar28);
  fVar75 = auVar62._0_4_;
  fVar86 = auVar62._4_4_;
  fVar87 = auVar62._8_4_;
  fVar88 = auVar62._12_4_;
  auVar105._4_4_ = _DAT_146159bfc;
  auVar105._0_4_ = _DAT_146159bfc;
  auVar105._8_4_ = _DAT_146159bfc;
  auVar105._12_4_ = _DAT_146159bfc;
  auVar62 = vcmpps_avx(auVar105,auVar28,2);
  auVar83._0_4_ =
       (float)(auVar62._0_4_ &
              (uint)(((fVar75 * fVar75 * auVar28._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar75 +
                     fVar75) * auVar28._0_4_));
  auVar83._4_4_ =
       (float)(auVar62._4_4_ &
              (uint)(((fVar86 * fVar86 * auVar28._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar86 +
                     fVar86) * auVar28._4_4_));
  auVar83._8_4_ =
       (float)(auVar62._8_4_ &
              (uint)(((fVar87 * fVar87 * auVar28._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar87 +
                     fVar87) * auVar28._8_4_));
  auVar83._12_4_ =
       (float)(auVar62._12_4_ &
              (uint)(((fVar88 * fVar88 * auVar28._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar88
                     + fVar88) * auVar28._12_4_));
  auVar62 = vrcpps_avx(auVar83);
  auVar106._0_4_ = (uint)auVar83._0_4_ ^ _DAT_145fc6f10;
  auVar106._4_4_ = (uint)auVar83._4_4_ ^ _DAT_145fc6f10;
  auVar106._8_4_ = (uint)auVar83._8_4_ ^ _DAT_145fc6f10;
  auVar106._12_4_ = (uint)auVar83._12_4_ ^ _DAT_145fc6f10;
  fVar75 = auVar62._0_4_;
  fVar86 = auVar62._4_4_;
  fVar87 = auVar62._8_4_;
  fVar88 = auVar62._12_4_;
  auVar62 = vcmpps_avx(auVar83,auVar106,0);
  auVar92._0_4_ = -((auVar83._0_4_ * fVar75 - _DAT_145fc6ed8) * fVar75) + fVar75;
  auVar92._4_4_ = -((auVar83._4_4_ * fVar86 - _DAT_145fc6ed8) * fVar86) + fVar86;
  auVar92._8_4_ = -((auVar83._8_4_ * fVar87 - _DAT_145fc6ed8) * fVar87) + fVar87;
  auVar92._12_4_ = -((auVar83._12_4_ * fVar88 - _DAT_145fc6ed8) * fVar88) + fVar88;
  auVar99._4_4_ = _DAT_14615b36c;
  auVar99._0_4_ = _DAT_14615b36c;
  auVar99._8_4_ = _DAT_14615b36c;
  auVar99._12_4_ = _DAT_14615b36c;
  auVar62 = vblendvps_avx(auVar92,auVar99,auVar62);
  fVar75 = auVar62._0_4_;
  auVar42._0_4_ = fVar75 * fStack_128;
  fVar86 = auVar62._4_4_;
  auVar42._4_4_ = fVar86 * fStack_124;
  fVar87 = auVar62._8_4_;
  auVar42._8_4_ = fVar87 * fStack_120;
  fVar88 = auVar62._12_4_;
  auVar42._12_4_ = fVar88 * fStack_11c;
  auVar46._0_4_ = fVar75 * (float)auStack_118._0_4_;
  auVar46._4_4_ = fVar86 * (float)auStack_118._4_4_;
  auVar46._8_4_ = fVar87 * fStack_110;
  auVar46._12_4_ = fVar88 * fStack_10c;
  auVar50._0_4_ = fVar75 * (float)auStack_108._0_4_;
  auVar50._4_4_ = fVar86 * (float)auStack_108._4_4_;
  auVar50._8_4_ = fVar87 * fStack_100;
  auVar50._12_4_ = fVar88 * fStack_fc;
  auVar62 = vshufps_avx(auVar42,auVar42,0x55);
  auVar28 = vshufps_avx(auVar42,auVar42,0xaa);
  fVar33 = auVar32._0_4_;
  fVar36 = auVar32._4_4_;
  fVar37 = auVar32._8_4_;
  fVar38 = auVar32._12_4_;
  auVar43 = vshufps_avx(auVar46,auVar46,0x55);
  fVar75 = auVar56._0_4_;
  fStack_128 = fVar75 * auVar28._0_4_ + fVar33 * auVar62._0_4_ + auVar42._0_4_ * fVar53;
  fVar86 = auVar56._4_4_;
  fStack_124 = fVar86 * auVar28._4_4_ + fVar36 * auVar62._4_4_ + auVar42._0_4_ * fVar54;
  fVar87 = auVar56._8_4_;
  fStack_120 = fVar87 * auVar28._8_4_ + fVar37 * auVar62._8_4_ + auVar42._0_4_ * fVar55;
  fVar88 = auVar56._12_4_;
  fStack_11c = fVar88 * auVar28._12_4_ + fVar38 * auVar62._12_4_ + auVar42._0_4_ * fVar65;
  auVar62 = vshufps_avx(auVar46,auVar46,0xaa);
  auVar28 = vshufps_avx(auVar50,auVar50,0x55);
  auVar44 = vshufps_avx(auVar50,auVar50,0xaa);
  auVar45 = vshufps_avx(auVar72,auVar72,0x55);
  auVar47._0_4_ = fVar75 * auVar62._0_4_ + fVar33 * auVar43._0_4_ + auVar46._0_4_ * fVar53;
  auVar47._4_4_ = fVar86 * auVar62._4_4_ + fVar36 * auVar43._4_4_ + auVar46._0_4_ * fVar54;
  auVar47._8_4_ = fVar87 * auVar62._8_4_ + fVar37 * auVar43._8_4_ + auVar46._0_4_ * fVar55;
  auVar47._12_4_ = fVar88 * auVar62._12_4_ + fVar38 * auVar43._12_4_ + auVar46._0_4_ * fVar65;
  auVar84._0_4_ = fVar75 * auVar44._0_4_ + fVar33 * auVar28._0_4_ + auVar50._0_4_ * fVar53;
  auVar84._4_4_ = fVar86 * auVar44._4_4_ + fVar36 * auVar28._4_4_ + auVar50._0_4_ * fVar54;
  auVar84._8_4_ = fVar87 * auVar44._8_4_ + fVar37 * auVar28._8_4_ + auVar50._0_4_ * fVar55;
  auVar84._12_4_ = fVar88 * auVar44._12_4_ + fVar38 * auVar28._12_4_ + auVar50._0_4_ * fVar65;
  auVar62 = vshufps_avx(auVar72,auVar72,0xaa);
  _auStack_118 = vblendps_avx(auVar47,auVar32,8);
  auVar51._0_4_ =
       fVar75 * auVar62._0_4_ + fVar33 * auVar45._0_4_ + fVar53 * auVar72._0_4_ + auVar40._0_4_;
  auVar51._4_4_ =
       fVar86 * auVar62._4_4_ + fVar36 * auVar45._4_4_ + fVar54 * auVar72._0_4_ + auVar40._4_4_;
  auVar51._8_4_ =
       fVar87 * auVar62._8_4_ + fVar37 * auVar45._8_4_ + fVar55 * auVar72._0_4_ + auVar40._8_4_;
  auVar51._12_4_ =
       fVar88 * auVar62._12_4_ + fVar38 * auVar45._12_4_ + fVar65 * auVar72._0_4_ + auVar40._12_4_;
  _auStack_108 = vblendps_avx(auVar84,auVar56,8);
  auVar32 = vblendps_avx(auVar51,auVar40,8);
  auVar19._0_4_ = auVar32._0_4_ * fVar18;
  auVar19._4_4_ = auVar32._4_4_ * fVar22;
  auVar19._8_4_ = auVar32._8_4_ * fVar23;
  auVar19._12_4_ = auVar32._12_4_ * fVar24;
  auVar56 = vroundps_avx(auVar19,3);
  auVar73._0_4_ = auVar56._0_4_ * _DAT_14615ad78 + auVar32._0_4_;
  auVar73._4_4_ = auVar56._4_4_ * _DAT_14615ad78 + auVar32._4_4_;
  auVar73._8_4_ = auVar56._8_4_ * _DAT_14615ad78 + auVar32._8_4_;
  auVar73._12_4_ = auVar56._12_4_ * _DAT_14615ad78 + auVar32._12_4_;
  auVar20._0_4_ = (int)auVar56._0_4_;
  auVar20._4_4_ = (int)auVar56._4_4_;
  auVar20._8_4_ = (int)auVar56._8_4_;
  auVar20._12_4_ = (int)auVar56._12_4_;
  auVar56 = vpackssdw_avx(auVar20,auVar20);
  auVar32 = vblendps_avx(auVar51,auVar73,3);
  sVar17 = auVar56._0_2_;
  auVar5._0_2_ = sVar17 + auVar40._0_2_;
  sVar13 = auVar56._2_2_;
  auVar5._2_2_ = sVar13 + auVar40._2_2_;
  auVar5._4_2_ = sVar17 + auVar40._4_2_;
  auVar5._6_2_ = sVar13 + auVar40._6_2_;
  auVar5._8_2_ = sVar17 + auVar40._8_2_;
  auVar5._10_2_ = sVar13 + auVar40._10_2_;
  auVar5._12_2_ = sVar17 + auVar40._12_2_;
  auVar5._14_2_ = sVar13 + auVar40._14_2_;
  auStack_f8 = vblendps_avx(auVar32,auVar5,8);
  auVar32 = vpunpckhwd_avx(auStack_f8,auStack_f8);
  auVar32 = vpsrad_avx(auVar32,0x10);
  auVar32 = vcvtdq2ps_avx(auVar32);
  auVar32 = vshufpd_avx(auVar32,auVar32,3);
  auStack_148._0_4_ = _DAT_146159c90 * auVar32._0_4_ + auStack_f8._0_4_;
  auStack_148._4_4_ = _UNK_146159c94 * auVar32._4_4_ + auStack_f8._4_4_;
  auStack_148._8_4_ = auVar32._8_4_ * 0.0 + auStack_f8._8_4_;
  auStack_148._12_4_ = auVar32._12_4_ * 0.0 + auStack_f8._12_4_;
  auVar32 = vpunpckhwd_avx(auVar40,auVar40);
  auVar32 = vpsrad_avx(auVar32,0x10);
  auVar32 = vcvtdq2ps_avx(auVar32);
  auVar56 = vshufpd_avx(auVar32,auVar32,3);
  auVar32 = *(undefined1 (*) [16])(param_3 + 0x14);
  auVar21._0_4_ = auStack_148._0_4_ + (-(_DAT_146159c90 * auVar56._0_4_) - auVar40._0_4_);
  auVar21._4_4_ = auStack_148._4_4_ + (-(_UNK_146159c94 * auVar56._4_4_) - auVar40._4_4_);
  auVar21._8_4_ = auStack_148._8_4_ + (-(auVar56._8_4_ * 0.0) - auVar40._8_4_);
  auVar21._12_4_ = auStack_148._12_4_ + (-(auVar56._12_4_ * 0.0) - auVar40._12_4_);
  auVar56 = vshufps_avx(auVar32,auVar32,0xc9);
  auVar40 = vshufps_avx(auVar21,auVar21,0xd2);
  auVar32 = vshufps_avx(auVar32,auVar32,0xd2);
  auVar62 = vshufps_avx(auVar21,auVar21,0xc9);
  fVar18 = -(auVar32._0_4_ * auVar62._0_4_) + auVar56._0_4_ * auVar40._0_4_ + param_3[0x10];
  fVar22 = -(auVar32._4_4_ * auVar62._4_4_) + auVar56._4_4_ * auVar40._4_4_ + param_3[0x11];
  fVar23 = -(auVar32._8_4_ * auVar62._8_4_) + auVar56._8_4_ * auVar40._8_4_ + param_3[0x12];
  fVar24 = -(auVar32._12_4_ * auVar62._12_4_) + auVar56._12_4_ * auVar40._12_4_ + param_3[0x13];
  FUN_145f179e0(&fStack_138,uVar16,uVar1,auStack_148,auStack_180,*param_5);
  auVar52 = ZEXT1664(CONCAT412(fVar24 + fStack_12c,
                               CONCAT48(fVar23 + fStack_130,
                                        CONCAT44(fVar22 + fStack_134,fVar18 + fStack_138))));
  fVar18 = param_3[0x14];
  fVar22 = param_3[0x15];
  fVar23 = param_3[0x16];
  fVar24 = param_3[0x17];
  FUN_145f17c90(&fStack_158,uVar16,uVar1,auStack_180,*param_5);
  auStack_168._0_4_ = fVar18 + fStack_158;
  auStack_168._4_4_ = fVar22 + fStack_154;
  auStack_168._8_4_ = fVar23 + (float)uStack_150;
  auStack_168._12_4_ = fVar24 + uStack_150._4_4_;
  auStack_178 = auVar52._0_16_;
  func_0x000145431f90(puVar11 + 2,&fStack_128);
  return;
}

