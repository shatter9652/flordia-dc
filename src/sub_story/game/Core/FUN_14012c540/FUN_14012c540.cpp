// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012c540  size: 3091 bytes
// Name:    FUN_14012c540
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144faf320, FUN_144e258a0, FUN_14547cdc0, FUN_1453fe500, FUN_140554b30, FUN_144ec0a70, FUN_144d9fa40, FUN_1451cc460
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14012c540(undefined1 (*param_1) [32],longlong *param_2,int param_3,char param_4)

{
  uint uVar1;
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
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char cVar15;
  undefined4 uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 uVar21;
  byte bVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar30 [16];
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
  short sVar48;
  short sVar58;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [64];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [64];
  float fVar85;
  float fVar93;
  float fVar94;
  float fVar95;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [64];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [64];
  undefined1 auVar102 [16];
  undefined1 auVar103 [64];
  float fVar110;
  float fVar111;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar112;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  float fVar113;
  float fVar117;
  float fVar118;
  float fVar119;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  float fStack_188;
  float fStack_184;
  undefined8 uStack_180;
  float fStack_178;
  float fStack_174;
  longlong lStack_170;
  undefined8 uStack_168;
  float fStack_160;
  float fStack_15c;
  undefined8 uStack_158;
  float fStack_150;
  float fStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  undefined8 uStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  
  auVar70._4_4_ = _DAT_145fc6ed8;
  auVar70._0_4_ = _DAT_145fc6ed8;
  auVar70._8_4_ = _DAT_145fc6ed8;
  auVar70._12_4_ = _DAT_145fc6ed8;
  *param_1 = ZEXT1232(ZEXT812(0));
  *(undefined4 *)(*param_1 + 0xc) = 0x3f800000;
  *(undefined1 (*) [16])param_1[1] = auVar70;
  if (param_2 == (longlong *)0x0) goto LAB_14012d05b;
  auVar70 = *(undefined1 (*) [16])(param_2 + 0xc);
  auVar96._0_12_ = ZEXT812(0);
  auVar96._12_4_ = 0;
  auVar82._4_4_ = _DAT_145fc6f00;
  auVar82._0_4_ = _DAT_145fc6f00;
  auVar82._8_4_ = _DAT_145fc6f00;
  auVar82._12_4_ = _DAT_145fc6f00;
  auVar88 = *(undefined1 (*) [16])(param_2 + 10);
  auStack_138._4_4_ = _DAT_145fc6f10;
  auStack_138._0_4_ = _DAT_145fc6f10;
  auStack_138._8_4_ = _DAT_145fc6f10;
  auStack_138._12_4_ = _DAT_145fc6f10;
  fVar23 = auVar70._0_4_;
  auVar34._0_4_ = fVar23 * fVar23;
  fVar111 = auVar70._4_4_;
  auVar34._4_4_ = fVar111 * fVar111;
  fVar29 = auVar70._8_4_;
  auVar34._8_4_ = fVar29 * fVar29;
  fVar32 = auVar70._12_4_;
  auVar34._12_4_ = fVar32 * fVar32;
  auVar50 = vshufps_avx(auVar88,auVar88,0xc9);
  auVar49 = vshufps_avx(auVar88,auVar88,0xd2);
  auVar34 = vblendps_avx(auVar34,auVar96,8);
  auVar34 = vhaddps_avx(auVar34,auVar34);
  auVar41 = vhaddps_avx(auVar34,auVar34);
  auVar34 = vrsqrtps_avx(auVar41);
  fVar110 = auVar34._0_4_;
  fVar112 = auVar34._4_4_;
  fVar31 = auVar34._8_4_;
  fVar33 = auVar34._12_4_;
  auVar34 = vcmpps_avx(auVar82,auVar41,1);
  auVar39._0_4_ =
       ((_DAT_145fc6f08 * fVar110 * fVar110 * auVar41._0_4_ - _DAT_145fc6f08) * fVar110 + fVar110) *
       fVar23;
  auVar39._4_4_ =
       ((_DAT_145fc6f08 * fVar112 * fVar112 * auVar41._4_4_ - _DAT_145fc6f08) * fVar112 + fVar112) *
       fVar111;
  auVar39._8_4_ =
       ((_DAT_145fc6f08 * fVar31 * fVar31 * auVar41._8_4_ - _DAT_145fc6f08) * fVar31 + fVar31) *
       fVar29;
  auVar39._12_4_ =
       ((_DAT_145fc6f08 * fVar33 * fVar33 * auVar41._12_4_ - _DAT_145fc6f08) * fVar33 + fVar33) *
       fVar32;
  auVar41 = vblendvps_avx(_DAT_14614f7f0,auVar39,auVar34);
  auVar34 = vshufps_avx(auVar41,auVar41,0xd2);
  auVar39 = vshufps_avx(auVar41,auVar41,0xc9);
  fVar23 = auVar34._0_4_;
  fVar110 = auVar34._4_4_;
  fVar111 = auVar34._8_4_;
  fVar112 = auVar34._12_4_;
  fVar29 = auVar39._0_4_;
  fVar113 = -(fVar29 * auVar49._0_4_) + auVar50._0_4_ * fVar23;
  fVar31 = auVar39._4_4_;
  fVar117 = -(fVar31 * auVar49._4_4_) + auVar50._4_4_ * fVar110;
  fVar32 = auVar39._8_4_;
  fVar118 = -(fVar32 * auVar49._8_4_) + auVar50._8_4_ * fVar111;
  fVar33 = auVar39._12_4_;
  fVar119 = -(fVar33 * auVar49._12_4_) + auVar50._12_4_ * fVar112;
  auVar120._0_4_ = fVar113 * fVar113;
  auVar120._4_4_ = fVar117 * fVar117;
  auVar120._8_4_ = fVar118 * fVar118;
  auVar120._12_4_ = fVar119 * fVar119;
  auVar34 = vblendps_avx(auVar120,auVar96,8);
  auVar34 = vhaddps_avx(auVar34,auVar34);
  auVar39 = vhaddps_avx(auVar34,auVar34);
  auVar34 = vcmpps_avx(auVar82,auVar39,5);
  if ((((SUB161(auVar34 >> 0x1f,0) & 1) == 0 && (SUB161(auVar34 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar34 >> 0x5f,0) & 1) == 0) && -1 < auVar34[0xf]) {
    auVar34 = vrsqrtps_avx(auVar39);
    fVar85 = auVar34._0_4_ * auVar34._0_4_ * auVar39._0_4_;
    fVar93 = auVar34._4_4_ * auVar34._4_4_ * auVar39._4_4_;
    fVar94 = auVar34._8_4_ * auVar34._8_4_ * auVar39._8_4_;
    fVar95 = auVar34._12_4_ * auVar34._12_4_ * auVar39._12_4_;
LAB_14012c741:
    auVar50._0_4_ =
         fVar113 * ((fVar85 * _DAT_145fc6f08 - _DAT_145fc6f08) * auVar34._0_4_ + auVar34._0_4_);
    auVar50._4_4_ =
         fVar117 * ((fVar93 * _DAT_145fc6f08 - _DAT_145fc6f08) * auVar34._4_4_ + auVar34._4_4_);
    auVar50._8_4_ =
         fVar118 * ((fVar94 * _DAT_145fc6f08 - _DAT_145fc6f08) * auVar34._8_4_ + auVar34._8_4_);
    auVar50._12_4_ =
         fVar119 * ((fVar95 * _DAT_145fc6f08 - _DAT_145fc6f08) * auVar34._12_4_ + auVar34._12_4_);
  }
  else {
    auVar34 = vshufps_avx(_DAT_14614f7f0,_DAT_14614f7f0,0xd2);
    fVar113 = (float)DAT_14614f7f0 * (float)((uint)fVar29 ^ _DAT_145fc6f10) + auVar34._0_4_ * fVar23
    ;
    fVar117 = DAT_14614f7f0._4_4_ * (float)((uint)fVar31 ^ _DAT_145fc6f10) + auVar34._4_4_ * fVar110
    ;
    fVar118 = DAT_14614f7f0._8_4_ * (float)((uint)fVar32 ^ _DAT_145fc6f10) + auVar34._8_4_ * fVar111
    ;
    fVar119 = DAT_14614f7f0._12_4_ * (float)((uint)fVar33 ^ _DAT_145fc6f10) +
              auVar34._12_4_ * fVar112;
    auVar104._0_4_ = fVar113 * fVar113;
    auVar104._4_4_ = fVar117 * fVar117;
    auVar104._8_4_ = fVar118 * fVar118;
    auVar104._12_4_ = fVar119 * fVar119;
    auVar34 = vblendps_avx(auVar104,auVar96,8);
    auVar34 = vhaddps_avx(auVar34,auVar34);
    auVar39 = vhaddps_avx(auVar34,auVar34);
    auVar34 = vcmpps_avx(auVar82,auVar39,5);
    if ((((SUB161(auVar34 >> 0x1f,0) & 1) == 0 && (SUB161(auVar34 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar34 >> 0x5f,0) & 1) == 0) && -1 < auVar34[0xf]) {
      auVar34 = vrsqrtps_avx(auVar39);
      fVar85 = auVar34._0_4_ * auVar34._0_4_ * auVar39._0_4_;
      fVar93 = auVar34._4_4_ * auVar34._4_4_ * auVar39._4_4_;
      fVar94 = auVar34._8_4_ * auVar34._8_4_ * auVar39._8_4_;
      fVar95 = auVar34._12_4_ * auVar34._12_4_ * auVar39._12_4_;
      goto LAB_14012c741;
    }
    auVar97._8_8_ = 0;
    auVar97._0_8_ = _DAT_146159bc0;
    auVar34 = vshufps_avx(auVar97,auVar97,0xc9);
    fVar85 = -((float)_DAT_146159bc0 * auVar49._0_4_) + auVar50._0_4_ * auVar34._0_4_;
    fVar93 = -((float)(_DAT_146159bc0 >> 0x20) * auVar49._4_4_) + auVar50._4_4_ * auVar34._4_4_;
    fVar94 = -(auVar49._8_4_ * 0.0) + auVar50._8_4_ * auVar34._8_4_;
    fVar95 = -(auVar49._12_4_ * 0.0) + auVar50._12_4_ * auVar34._12_4_;
    auVar98._0_4_ = fVar85 * fVar85;
    auVar98._4_4_ = fVar93 * fVar93;
    auVar98._8_4_ = fVar94 * fVar94;
    auVar98._12_4_ = fVar95 * fVar95;
    auVar34 = vblendps_avx(auVar98,ZEXT416(0) << 0x20,8);
    auVar34 = vhaddps_avx(auVar34,auVar34);
    auVar39 = vhaddps_avx(auVar34,auVar34);
    auVar50 = vrsqrtps_avx(auVar39);
    auVar34 = vcmpps_avx(auVar82,auVar39,1);
    fVar113 = auVar50._0_4_;
    fVar117 = auVar50._4_4_;
    fVar118 = auVar50._8_4_;
    fVar119 = auVar50._12_4_;
    auVar49._0_4_ =
         fVar85 * ((fVar113 * fVar113 * auVar39._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar113 +
                  fVar113);
    auVar49._4_4_ =
         fVar93 * ((fVar117 * fVar117 * auVar39._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar117 +
                  fVar117);
    auVar49._8_4_ =
         fVar94 * ((fVar118 * fVar118 * auVar39._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar118 +
                  fVar118);
    auVar49._12_4_ =
         fVar95 * ((fVar119 * fVar119 * auVar39._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar119
                  + fVar119);
    auVar50 = vblendvps_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar49,auVar34);
  }
  auVar34 = vshufps_avx(auVar50,auVar50,0xd2);
  uVar1 = *(uint *)(param_2 + 6);
  auVar49 = vshufps_avx(auVar70,auVar88,0x33);
  auVar70 = vshufps_avx(auVar50,auVar50,0xc9);
  auVar40._0_4_ = -(auVar70._0_4_ * fVar23) + auVar34._0_4_ * fVar29;
  auVar40._4_4_ = -(auVar70._4_4_ * fVar110) + auVar34._4_4_ * fVar31;
  auVar40._8_4_ = -(auVar70._8_4_ * fVar111) + auVar34._8_4_ * fVar32;
  auVar40._12_4_ = -(auVar70._12_4_ * fVar112) + auVar34._12_4_ * fVar33;
  auVar70 = vblendps_avx(auVar50,auVar40,2);
  auVar34 = vblendps_avx(auVar50,auVar40,3);
  auVar70 = vblendps_avx(auVar41,auVar70,3);
  auVar34 = vblendps_avx(auVar34,auVar41,2);
  auVar39 = vshufps_avx(auVar70,auVar70,0x49);
  auVar82 = vshufps_avx(auVar70,auVar70,0x92);
  auVar96 = vshufps_avx(auVar70,auVar70,0x24);
  auVar34 = vshufps_avx(auVar34,auVar34,9);
  auVar86._0_4_ = auVar82._0_4_ + auVar39._0_4_;
  auVar86._4_4_ = auVar82._4_4_ + auVar39._4_4_;
  auVar86._8_4_ = auVar82._8_4_ + auVar39._8_4_;
  auVar86._12_4_ = auVar82._12_4_ + auVar39._12_4_;
  auVar59._0_4_ = auVar86._0_4_ + auVar96._0_4_;
  auVar59._4_4_ = auVar86._4_4_ + auVar96._4_4_;
  auVar59._8_4_ = auVar86._8_4_ + auVar96._8_4_;
  auVar59._12_4_ = auVar86._12_4_ + auVar96._12_4_;
  auVar70 = vsubps_avx(auVar70,auVar86);
  auVar70 = vblendps_avx(auVar70,auVar59,8);
  auVar83._4_4_ = _DAT_145fc6ed8;
  auVar83._0_4_ = _DAT_145fc6ed8;
  auVar83._8_4_ = _DAT_145fc6ed8;
  auVar83._12_4_ = _DAT_145fc6ed8;
  auVar99._0_4_ = auVar70._0_4_ + _DAT_145fc6ed8;
  auVar99._4_4_ = auVar70._4_4_ + _DAT_145fc6ed8;
  auVar99._8_4_ = auVar70._8_4_ + _DAT_145fc6ed8;
  auVar99._12_4_ = auVar70._12_4_ + _DAT_145fc6ed8;
  auVar70 = vrsqrtps_avx(auVar99);
  fVar23 = auVar70._0_4_;
  fVar110 = auVar70._4_4_;
  fVar111 = auVar70._8_4_;
  fVar112 = auVar70._12_4_;
  auVar87._4_4_ = _DAT_145fc6edc;
  auVar87._0_4_ = _DAT_145fc6edc;
  auVar87._8_4_ = _DAT_145fc6edc;
  auVar87._12_4_ = _DAT_145fc6edc;
  auVar70 = vblendps_avx(auVar40,auVar41,3);
  auVar82 = vshufps_avx(auVar40,auVar40,0x55);
  auVar96 = vshufps_avx(auVar41,auVar41,0xaa);
  auVar70 = vshufps_avx(auVar70,auVar50,0x12);
  auVar51._0_4_ = auVar50._0_4_;
  auVar51._4_4_ = auVar51._0_4_;
  auVar51._8_4_ = auVar51._0_4_;
  auVar51._12_4_ = auVar51._0_4_;
  auVar121._0_4_ = auVar70._0_4_ + auVar34._0_4_;
  auVar121._4_4_ = auVar70._4_4_ + auVar34._4_4_;
  auVar121._8_4_ = auVar70._8_4_ + auVar34._8_4_;
  auVar121._12_4_ = auVar70._12_4_ + auVar34._12_4_;
  auVar120 = vsubps_avx(auVar70,auVar34);
  auVar105._0_4_ =
       ((-(_DAT_145fc6edc * fVar23 * fVar23 * auVar99._0_4_) + _DAT_145fc6edc) * fVar23 + fVar23) *
       _DAT_145fc6edc;
  auVar105._4_4_ =
       ((-(_DAT_145fc6edc * fVar110 * fVar110 * auVar99._4_4_) + _DAT_145fc6edc) * fVar110 + fVar110
       ) * _DAT_145fc6edc;
  auVar105._8_4_ =
       ((-(_DAT_145fc6edc * fVar111 * fVar111 * auVar99._8_4_) + _DAT_145fc6edc) * fVar111 + fVar111
       ) * _DAT_145fc6edc;
  auVar105._12_4_ =
       ((-(_DAT_145fc6edc * fVar112 * fVar112 * auVar99._12_4_) + _DAT_145fc6edc) * fVar112 +
       fVar112) * _DAT_145fc6edc;
  auVar70 = vblendps_avx(auVar121,auVar120,1);
  auVar34 = vblendps_avx(auVar121,auVar120,2);
  auVar39 = vshufps_avx(auVar121,auVar120,0xa1);
  auVar50 = vshufps_avx(auVar70,auVar70,0x18);
  auVar41 = vshufpd_avx(auVar34,auVar34,1);
  auVar70 = vblendps_avx(auVar39,auVar99,4);
  auVar34 = vblendps_avx(auVar50,auVar99,1);
  auVar41 = vblendps_avx(auVar41,auVar99,2);
  auVar39 = vblendps_avx(auVar120,auVar99,8);
  auVar102._0_4_ = auVar105._0_4_ * auVar34._0_4_;
  auVar102._4_4_ = auVar105._0_4_ * auVar34._4_4_;
  auVar102._8_4_ = auVar105._0_4_ * auVar34._8_4_;
  auVar102._12_4_ = auVar105._0_4_ * auVar34._12_4_;
  auVar34 = vshufps_avx(auVar105,auVar105,0x55);
  auVar114._0_4_ = auVar34._0_4_ * auVar41._0_4_;
  auVar114._4_4_ = auVar34._4_4_ * auVar41._4_4_;
  auVar114._8_4_ = auVar34._8_4_ * auVar41._8_4_;
  auVar114._12_4_ = auVar34._12_4_ * auVar41._12_4_;
  auVar50 = vshufps_avx(auVar105,auVar105,0xaa);
  auVar34 = vshufps_avx(auVar105,auVar105,0xff);
  auVar100._0_4_ = auVar34._0_4_ * auVar39._0_4_;
  auVar100._4_4_ = auVar34._4_4_ * auVar39._4_4_;
  auVar100._8_4_ = auVar34._8_4_ * auVar39._8_4_;
  auVar100._12_4_ = auVar34._12_4_ * auVar39._12_4_;
  auVar34 = vcmpps_avx(auVar51,auVar82,1);
  auVar41 = vcmpps_avx(auVar82,auVar96,1);
  auVar39 = vcmpps_avx(auVar51,auVar96,1);
  auVar122._0_4_ = auVar50._0_4_ * auVar70._0_4_;
  auVar122._4_4_ = auVar50._4_4_ * auVar70._4_4_;
  auVar122._8_4_ = auVar50._8_4_ * auVar70._8_4_;
  auVar122._12_4_ = auVar50._12_4_ * auVar70._12_4_;
  auVar35._0_4_ = auVar41._0_4_ & auVar39._0_4_;
  auVar35._4_4_ = auVar41._4_4_ & auVar39._4_4_;
  auVar35._8_4_ = auVar41._8_4_ & auVar39._8_4_;
  auVar35._12_4_ = auVar41._12_4_ & auVar39._12_4_;
  auVar70 = vblendvps_avx(auVar102,auVar114,auVar34);
  lVar20 = param_2[0xe];
  lVar19 = param_2[0xf];
  auVar34 = vcmpps_avx(ZEXT816(0) << 0x20,auVar59,1);
  auVar70 = vblendvps_avx(auVar70,auVar122,auVar35);
  auVar41._0_4_ = auVar34._0_4_;
  auVar41._4_4_ = auVar41._0_4_;
  auVar41._8_4_ = auVar41._0_4_;
  auVar41._12_4_ = auVar41._0_4_;
  auVar34 = vshufps_avx(auVar88,auVar49,0x8f);
  auVar88 = vblendvps_avx(auVar70,auVar100,auVar41);
  uStack_148 = lVar20;
  uStack_140 = lVar19;
  if ((0x1cU >> (uVar1 & 0x1f) & 1) != 0) {
    auVar81 = ZEXT1664(auStack_138);
    auVar84 = ZEXT1664(auVar83);
    auVar92 = ZEXT1664(auVar87);
    auVar101 = ZEXT1664(auVar88);
    auVar103 = ZEXT1664(auVar34);
    lVar18 = func_0x000144faf160(*(undefined4 *)((longlong)param_2 + 0x9c));
    auVar88 = auVar101._0_16_;
    auVar87 = auVar92._0_16_;
    auStack_138 = auVar81._0_16_;
    auVar83 = auVar84._0_16_;
    auVar34 = auVar103._0_16_;
    uStack_148 = lVar20;
    uStack_140 = lVar19;
    if ((lVar18 != 0) && (*(char *)(lVar18 + 0xb0) == '\x01')) {
      func_0x0001440d5d50(lVar18,&fStack_188);
      cVar15 = func_0x0001408211d0(*(undefined4 *)(lVar18 + 400));
      auVar87 = auVar92._0_16_;
      auStack_138 = auVar81._0_16_;
      auVar83 = auVar84._0_16_;
      auVar34 = auVar103._0_16_;
      if (cVar15 != '\0') {
        auVar88._4_4_ = fStack_184;
        auVar88._0_4_ = fStack_188;
        auVar88._8_8_ = uStack_180;
        auVar24._0_12_ = ZEXT812(0);
        auVar24._12_4_ = 0;
        auVar70 = vcmpps_avx(auVar88,auVar24,4);
        if ((((SUB161(auVar70 >> 0x1f,0) & 1) == 0 && (SUB161(auVar70 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar70 >> 0x5f,0) & 1) == 0) && -1 < auVar70[0xf]) {
          auVar7._4_4_ = fStack_174;
          auVar7._0_4_ = fStack_178;
          auVar7._8_8_ = lStack_170;
          iVar17 = vextractps_avx(auVar7,3);
          if (iVar17 == 0) {
            auVar70 = vcmpps_avx(auVar7,auVar24,0);
            uVar16 = vmovmskps_avx(auVar70);
            if (((byte)uVar16 & 7) == 7) {
              auVar10._8_4_ = fStack_160;
              auVar10._0_8_ = uStack_168;
              auVar10._12_4_ = fStack_15c;
              auVar70 = vcmpps_avx(ZEXT816(0) << 0x20,auVar10,0);
              uVar16 = vmovmskps_avx(auVar70);
              if ((~(byte)uVar16 & 7) == 0) goto LAB_14012c911;
            }
          }
        }
        if (*(char *)(lVar18 + 0xb7) == '\0') {
          uStack_148 = CONCAT44(fStack_174,fStack_178);
          uStack_140 = lStack_170;
          goto LAB_14012c937;
        }
      }
LAB_14012c911:
      FUN_144faf320(lVar18,&uStack_108);
      auVar87 = auVar92._0_16_;
      auStack_138 = auVar81._0_16_;
      auVar83 = auVar84._0_16_;
      auVar34 = auVar103._0_16_;
      auVar88._8_8_ = lStack_100;
      auVar88._0_8_ = uStack_108;
      uStack_148 = lStack_f8;
      uStack_140 = lStack_f0;
    }
  }
LAB_14012c937:
  auVar70._0_4_ = auVar34._0_4_ + auVar83._0_4_;
  auVar70._4_4_ = auVar34._4_4_ + auVar83._4_4_;
  auVar70._8_4_ = auVar34._8_4_ + auVar83._8_4_;
  auVar70._12_4_ = auVar34._12_4_ + auVar83._12_4_;
  cVar15 = (char)uVar1;
  if (cVar15 == '\x03') {
    if (param_3 < 0) goto LAB_14012cacb;
    fStack_184 = 0.0;
    uStack_180 = 0;
    fStack_178 = 0.0;
    lStack_170 = 0;
    uStack_168 = 0;
    fStack_15c = 0.0;
    uStack_158 = 0;
    fStack_150 = 0.0;
    fStack_14c = 0.0;
    fStack_188 = 1.0;
    fStack_174 = 1.0;
    fStack_160 = 1.0;
    if (param_4 == '\0') {
      auVar81 = ZEXT1664(auVar83);
      auVar84 = ZEXT1664(auVar87);
      auVar92 = ZEXT1664(auVar88);
      auVar101 = ZEXT1664(auVar70);
      lVar20 = FUN_144e258a0(param_2);
      auVar41 = auVar101._0_16_;
      auVar88 = auVar84._0_16_;
      auVar70 = auVar81._0_16_;
      auVar34 = auVar92._0_16_;
      if ((lVar20 != 0) && (param_3 < *(int *)(lVar20 + 0x1d4))) {
        uVar21 = FUN_144e258a0(param_2);
        FUN_144ec0a70(uVar21,param_3,&fStack_188);
        auVar41 = auVar101._0_16_;
        auVar88 = auVar84._0_16_;
        auVar70 = auVar81._0_16_;
        auVar34 = auVar92._0_16_;
      }
    }
    else {
      auVar81 = ZEXT1664(auVar83);
      auVar84 = ZEXT1664(auVar87);
      auVar92 = ZEXT1664(auVar88);
      auVar101 = ZEXT1664(auVar70);
      lVar19 = FUN_144d9fa40(*(undefined4 *)((longlong)param_2 + 0x9c));
      auVar41 = auVar101._0_16_;
      auVar88 = auVar84._0_16_;
      auVar70 = auVar81._0_16_;
      auVar34 = auVar92._0_16_;
      lVar20 = (ulonglong)((uint)DAT_14abc3ad8 * 2) * 3;
      bVar22 = *(byte *)(lVar19 + 0x18 + lVar20);
      if (((((bVar22 != 0x1e) || (bVar22 = *(byte *)(lVar19 + 0x19 + lVar20), bVar22 != 0x1e)) ||
           (bVar22 = *(byte *)(lVar19 + 0x1a + lVar20), bVar22 != 0x1e)) ||
          (((bVar22 = *(byte *)(lVar19 + 0x1b + lVar20), bVar22 != 0x1e ||
            (bVar22 = *(byte *)(lVar19 + 0x1c + lVar20), bVar22 != 0x1e)) ||
           (bVar22 = *(byte *)(lVar19 + 0x1d + lVar20), bVar22 != 0x1e)))) &&
         (lVar20 = *(longlong *)(lVar19 + 0xa0 + (ulonglong)bVar22 * 8), lVar20 != 0)) {
        FUN_14547cdc0(lVar20,&uStack_108);
        if (param_3 < *(int *)(lStack_100 + 0x1d4)) {
          FUN_1453fe500(&uStack_108,param_3,&fStack_188);
        }
        lVar20 = FUN_1451cc460(*(undefined4 *)((longlong)param_2 + 0x9c));
        if (lVar20 != 0) {
          fVar23 = (float)func_0x0001400e2fa0(*(undefined8 *)(lVar20 + 0xd0),
                                              *(undefined4 *)(lVar20 + 0x5f0),0);
          fStack_150 = fVar23 + fStack_150;
        }
        func_0x000144e2aa90(&uStack_108);
        auVar41 = auVar101._0_16_;
        auVar88 = auVar84._0_16_;
        auVar70 = auVar81._0_16_;
        auVar34 = auVar92._0_16_;
      }
    }
    auVar3._4_4_ = fStack_184;
    auVar3._0_4_ = fStack_188;
    auVar3._8_8_ = uStack_180;
    auVar5._4_4_ = fStack_174;
    auVar5._0_4_ = fStack_178;
    auVar5._8_8_ = lStack_170;
    auVar8._8_4_ = fStack_160;
    auVar8._0_8_ = uStack_168;
    auVar8._12_4_ = fStack_15c;
    auVar39 = vblendps_avx(auVar3,auVar5,2);
    auVar50 = vblendps_avx(auVar3,auVar5,3);
    auVar39 = vblendps_avx(auVar8,auVar39,3);
    auVar50 = vblendps_avx(auVar50,auVar8,2);
    auVar49 = vshufps_avx(auVar39,auVar39,0x49);
    auVar82 = vshufps_avx(auVar39,auVar39,0x92);
    auVar96 = vshufps_avx(auVar39,auVar39,0x24);
    auVar50 = vshufps_avx(auVar50,auVar50,9);
    auVar60._0_4_ = auVar82._0_4_ + auVar49._0_4_;
    auVar60._4_4_ = auVar82._4_4_ + auVar49._4_4_;
    auVar60._8_4_ = auVar82._8_4_ + auVar49._8_4_;
    auVar60._12_4_ = auVar82._12_4_ + auVar49._12_4_;
    auVar42._0_4_ = auVar60._0_4_ + auVar96._0_4_;
    auVar42._4_4_ = auVar60._4_4_ + auVar96._4_4_;
    auVar42._8_4_ = auVar60._8_4_ + auVar96._8_4_;
    auVar42._12_4_ = auVar60._12_4_ + auVar96._12_4_;
    auVar39 = vsubps_avx(auVar39,auVar60);
    auVar39 = vblendps_avx(auVar39,auVar42,8);
    auVar52._0_4_ = auVar39._0_4_ + auVar70._0_4_;
    auVar52._4_4_ = auVar39._4_4_ + auVar70._4_4_;
    auVar52._8_4_ = auVar39._8_4_ + auVar70._8_4_;
    auVar52._12_4_ = auVar39._12_4_ + auVar70._12_4_;
    auVar39 = vrsqrtps_avx(auVar52);
    fVar23 = auVar39._0_4_;
    fVar110 = auVar39._4_4_;
    fVar111 = auVar39._8_4_;
    fVar112 = auVar39._12_4_;
    fVar29 = auVar88._0_4_;
    fVar31 = auVar88._4_4_;
    fVar32 = auVar88._8_4_;
    fVar33 = auVar88._12_4_;
    auVar88 = vblendps_avx(auVar5,auVar8,3);
    auVar88 = vshufps_avx(auVar88,auVar3,0x12);
    auVar125._0_4_ = auVar50._0_4_ + auVar88._0_4_;
    auVar125._4_4_ = auVar50._4_4_ + auVar88._4_4_;
    auVar125._8_4_ = auVar50._8_4_ + auVar88._8_4_;
    auVar125._12_4_ = auVar50._12_4_ + auVar88._12_4_;
    auVar49 = vsubps_avx(auVar88,auVar50);
    auVar115._0_4_ =
         ((-(fVar29 * fVar23 * fVar23 * auVar52._0_4_) + fVar29) * fVar23 + fVar23) * fVar29;
    auVar115._4_4_ =
         ((-(fVar31 * fVar110 * fVar110 * auVar52._4_4_) + fVar31) * fVar110 + fVar110) * fVar31;
    auVar115._8_4_ =
         ((-(fVar32 * fVar111 * fVar111 * auVar52._8_4_) + fVar32) * fVar111 + fVar111) * fVar32;
    auVar115._12_4_ =
         ((-(fVar33 * fVar112 * fVar112 * auVar52._12_4_) + fVar33) * fVar112 + fVar112) * fVar33;
    auVar88 = vblendps_avx(auVar125,auVar49,1);
    auVar39 = vblendps_avx(auVar125,auVar49,2);
    auVar89._4_4_ = fStack_174;
    auVar89._0_4_ = fStack_174;
    auVar89._8_4_ = fStack_174;
    auVar89._12_4_ = fStack_174;
    auVar88 = vshufps_avx(auVar88,auVar88,0x18);
    auVar39 = vshufpd_avx(auVar39,auVar39,1);
    auVar88 = vblendps_avx(auVar88,auVar52,1);
    auVar39 = vblendps_avx(auVar39,auVar52,2);
    auVar68._0_4_ = auVar88._0_4_ * auVar115._0_4_;
    auVar68._4_4_ = auVar88._4_4_ * auVar115._0_4_;
    auVar68._8_4_ = auVar88._8_4_ * auVar115._0_4_;
    auVar68._12_4_ = auVar88._12_4_ * auVar115._0_4_;
    auVar88 = vshufps_avx(auVar115,auVar115,0x55);
    auVar123._0_4_ = auVar88._0_4_ * auVar39._0_4_;
    auVar123._4_4_ = auVar88._4_4_ * auVar39._4_4_;
    auVar123._8_4_ = auVar88._8_4_ * auVar39._8_4_;
    auVar123._12_4_ = auVar88._12_4_ * auVar39._12_4_;
    auVar127._4_4_ = fStack_188;
    auVar127._0_4_ = fStack_188;
    auVar127._8_4_ = fStack_188;
    auVar127._12_4_ = fStack_188;
    auVar88 = vcmpps_avx(auVar127,auVar89,1);
    auVar50 = vblendvps_avx(auVar68,auVar123,auVar88);
    auVar88 = vshufps_avx(auVar125,auVar49,0xa1);
    auVar88 = vblendps_avx(auVar88,auVar52,4);
    auVar39 = vblendps_avx(auVar49,auVar52,8);
    auVar49 = vshufps_avx(auVar115,auVar115,0xaa);
    auVar61._0_4_ = auVar88._0_4_ * auVar49._0_4_;
    auVar61._4_4_ = auVar88._4_4_ * auVar49._4_4_;
    auVar61._8_4_ = auVar88._8_4_ * auVar49._8_4_;
    auVar61._12_4_ = auVar88._12_4_ * auVar49._12_4_;
    auVar88 = vshufps_avx(auVar115,auVar115,0xff);
    auVar11._8_4_ = fStack_150;
    auVar11._0_8_ = uStack_158;
    auVar11._12_4_ = fStack_14c;
    auVar53._0_4_ = auVar88._0_4_ * auVar39._0_4_;
    auVar53._4_4_ = auVar88._4_4_ * auVar39._4_4_;
    auVar53._8_4_ = auVar88._8_4_ * auVar39._8_4_;
    auVar53._12_4_ = auVar88._12_4_ * auVar39._12_4_;
    auVar106._4_4_ = fStack_160;
    auVar106._0_4_ = fStack_160;
    auVar106._8_4_ = fStack_160;
    auVar106._12_4_ = fStack_160;
    auVar88 = vcmpps_avx(auVar89,auVar106,1);
    auVar39 = vcmpps_avx(auVar127,auVar106,1);
    auVar90._0_4_ = auVar39._0_4_ & auVar88._0_4_;
    auVar90._4_4_ = auVar39._4_4_ & auVar88._4_4_;
    auVar90._8_4_ = auVar39._8_4_ & auVar88._8_4_;
    auVar90._12_4_ = auVar39._12_4_ & auVar88._12_4_;
    auVar88 = vblendvps_avx(auVar50,auVar61,auVar90);
    auVar50 = vshufps_avx(auVar34,auVar34,0xd2);
    auVar39 = vcmpps_avx(ZEXT816(0) << 0x20,auVar42,1);
    auVar43._0_4_ = auVar39._0_4_;
    auVar43._4_4_ = auVar43._0_4_;
    auVar43._8_4_ = auVar43._0_4_;
    auVar43._12_4_ = auVar43._0_4_;
    auVar39 = vblendvps_avx(auVar88,auVar53,auVar43);
    auVar44._4_4_ = _DAT_14615a290;
    auVar44._0_4_ = _DAT_14615a290;
    auVar44._8_4_ = _DAT_14615a290;
    auVar44._12_4_ = _DAT_14615a290;
    auVar88 = vrcpps_avx(auVar44);
    fVar113 = auVar88._0_4_;
    fVar117 = auVar88._4_4_;
    fVar118 = auVar88._8_4_;
    fVar119 = auVar88._12_4_;
    fVar113 = (-(fVar113 * _DAT_14615a290) + auVar70._0_4_) * fVar113 + fVar113;
    fVar117 = (-(fVar117 * _DAT_14615a290) + auVar70._4_4_) * fVar117 + fVar117;
    fVar118 = (-(fVar118 * _DAT_14615a290) + auVar70._8_4_) * fVar118 + fVar118;
    fVar119 = (-(fVar119 * _DAT_14615a290) + auVar70._12_4_) * fVar119 + fVar119;
    auVar62._0_4_ = (float)uStack_158 * fVar113;
    fVar23 = (float)((ulonglong)uStack_158 >> 0x20);
    auVar62._4_4_ = fVar23 * fVar117;
    auVar62._8_4_ = fStack_150 * fVar118;
    auVar62._12_4_ = fStack_14c * fVar119;
    auVar70 = vroundps_avx(auVar62,3);
    auVar69._0_4_ = -(auVar70._0_4_ * _DAT_14615a290) + (float)uStack_158;
    auVar69._4_4_ = -(auVar70._4_4_ * _DAT_14615a290) + fVar23;
    auVar69._8_4_ = -(auVar70._8_4_ * _DAT_14615a290) + fStack_150;
    auVar69._12_4_ = -(auVar70._12_4_ * _DAT_14615a290) + fStack_14c;
    auVar63._0_4_ = (int)auVar70._0_4_;
    auVar63._4_4_ = (int)auVar70._4_4_;
    auVar63._8_4_ = (int)auVar70._8_4_;
    auVar63._12_4_ = (int)auVar70._12_4_;
    auVar88 = vpackssdw_avx(auVar63,auVar63);
    auVar70 = vblendps_avx(auVar11,auVar69,3);
    auVar88 = vinsertps_avx(auVar70,auVar88,0x30);
    auVar70 = vpunpckhwd_avx(auVar88,auVar88);
    fVar23 = (float)((ulonglong)uStack_180 >> 0x20);
    auVar70 = vpsrad_avx(auVar70,0x10);
    auVar70 = vcvtdq2ps_avx(auVar70);
    fVar110 = (float)((ulonglong)lStack_170 >> 0x20);
    auVar70 = vshufpd_avx(auVar70,auVar70,3);
    auVar49 = vshufps_avx(auVar34,auVar34,0xc9);
    auVar25._0_4_ =
         (float)uStack_168 * (float)uStack_168 + fStack_178 * fStack_178 + fStack_188 * fStack_188;
    fVar111 = (float)((ulonglong)uStack_168 >> 0x20);
    auVar25._4_4_ = fVar111 * fVar111 + fStack_174 * fStack_174 + fStack_184 * fStack_184;
    auVar25._8_4_ =
         fStack_160 * fStack_160 +
         (float)lStack_170 * (float)lStack_170 + (float)uStack_180 * (float)uStack_180;
    auVar25._12_4_ = fStack_15c * fStack_15c + fVar110 * fVar110 + fVar23 * fVar23;
    auVar82 = vshufps_avx(auVar34,auVar34,0xaa);
    auVar71._0_4_ = auVar41._0_4_ * (auVar70._0_4_ * _DAT_146159c90 + auVar88._0_4_);
    auVar71._4_4_ = auVar41._4_4_ * (auVar70._4_4_ * _UNK_146159c94 + auVar88._4_4_);
    auVar71._8_4_ = auVar41._8_4_ * (auVar70._8_4_ * _UNK_146159c98 + auVar88._8_4_);
    auVar71._12_4_ = auVar41._12_4_ * (auVar70._12_4_ * _UNK_146159c9c + auVar88._12_4_);
    auVar70 = vshufps_avx(auVar71,auVar71,0xd2);
    auVar88 = vshufps_avx(auVar71,auVar71,0xc9);
    auVar72._0_4_ = (uint)auVar39._0_4_ ^ auStack_138._0_4_;
    auVar72._4_4_ = (uint)auVar39._4_4_ ^ auStack_138._4_4_;
    auVar72._8_4_ = (uint)auVar39._8_4_ ^ auStack_138._8_4_;
    auVar72._12_4_ = (uint)auVar39._12_4_ ^ auStack_138._12_4_;
    fVar23 = -(auVar50._0_4_ * auVar88._0_4_) + auVar70._0_4_ * auVar49._0_4_;
    fVar110 = -(auVar50._4_4_ * auVar88._4_4_) + auVar70._4_4_ * auVar49._4_4_;
    fVar111 = -(auVar50._8_4_ * auVar88._8_4_) + auVar70._8_4_ * auVar49._8_4_;
    fVar112 = -(auVar50._12_4_ * auVar88._12_4_) + auVar70._12_4_ * auVar49._12_4_;
    auVar70 = vblendps_avx(auVar72,auVar39,10);
    auVar88 = vblendps_avx(auVar72,auVar39,9);
    auVar107._0_4_ = fVar23 + fVar23;
    auVar107._4_4_ = fVar110 + fVar110;
    auVar107._8_4_ = fVar111 + fVar111;
    auVar107._12_4_ = fVar112 + fVar112;
    auVar96 = vshufps_avx(auVar70,auVar70,0x1b);
    auVar88 = vshufps_avx(auVar88,auVar88,0xb1);
    auVar120 = vshufps_avx(auVar107,auVar107,0xd2);
    auVar104 = vshufps_avx(auVar107,auVar107,0xc9);
    auVar97 = vshufps_avx(auVar34,auVar34,0xff);
    fVar23 = auVar34._0_4_;
    auVar70 = vshufpd_avx(auVar39,auVar72,1);
    auVar34 = vshufps_avx(auVar34,auVar34,0x55);
    fVar29 = auVar82._0_4_ * auVar88._0_4_ +
             auVar34._0_4_ * auVar70._0_4_ + fVar23 * auVar96._0_4_ + auVar97._0_4_ * auVar39._0_4_;
    fVar31 = auVar82._4_4_ * auVar88._4_4_ +
             auVar34._4_4_ * auVar70._4_4_ + fVar23 * auVar96._4_4_ + auVar97._4_4_ * auVar39._4_4_;
    fVar32 = auVar82._8_4_ * auVar88._8_4_ +
             auVar34._8_4_ * auVar70._8_4_ + fVar23 * auVar96._8_4_ + auVar97._8_4_ * auVar39._8_4_;
    fVar33 = auVar82._12_4_ * auVar88._12_4_ +
             auVar34._12_4_ * auVar70._12_4_ +
             fVar23 * auVar96._12_4_ + auVar97._12_4_ * auVar39._12_4_;
    auVar70 = vrsqrtps_avx(auVar25);
    fVar23 = auVar70._0_4_;
    fVar110 = auVar70._4_4_;
    fVar111 = auVar70._8_4_;
    fVar112 = auVar70._12_4_;
    auVar73._4_4_ = _DAT_146159bfc;
    auVar73._0_4_ = _DAT_146159bfc;
    auVar73._8_4_ = _DAT_146159bfc;
    auVar73._12_4_ = _DAT_146159bfc;
    auVar70 = vcmpps_avx(auVar73,auVar25,2);
    fVar23 = (float)(auVar70._0_4_ &
                    (uint)(((-(_DAT_145fc6edc * fVar23 * fVar23 * auVar25._0_4_) + _DAT_145fc6edc) *
                            fVar23 + fVar23) * auVar25._0_4_));
    fVar110 = (float)(auVar70._4_4_ &
                     (uint)(((-(_DAT_145fc6edc * fVar110 * fVar110 * auVar25._4_4_) + _DAT_145fc6edc
                             ) * fVar110 + fVar110) * auVar25._4_4_));
    fVar111 = (float)(auVar70._8_4_ &
                     (uint)(((-(_DAT_145fc6edc * fVar111 * fVar111 * auVar25._8_4_) + _DAT_145fc6edc
                             ) * fVar111 + fVar111) * auVar25._8_4_));
    fVar112 = (float)(auVar70._12_4_ &
                     (uint)(((-(_DAT_145fc6edc * fVar112 * fVar112 * auVar25._12_4_) +
                             _DAT_145fc6edc) * fVar112 + fVar112) * auVar25._12_4_));
    auVar36._0_4_ =
         auVar97._0_4_ * auVar107._0_4_ + (float)uStack_148 + auVar71._0_4_ +
         -(auVar50._0_4_ * auVar104._0_4_) + auVar120._0_4_ * auVar49._0_4_;
    auVar36._4_4_ =
         auVar97._4_4_ * auVar107._4_4_ + uStack_148._4_4_ + auVar71._4_4_ +
         -(auVar50._4_4_ * auVar104._4_4_) + auVar120._4_4_ * auVar49._4_4_;
    auVar36._8_4_ =
         auVar97._8_4_ * auVar107._8_4_ + (float)uStack_140 + auVar71._8_4_ +
         -(auVar50._8_4_ * auVar104._8_4_) + auVar120._8_4_ * auVar49._8_4_;
    auVar36._12_4_ =
         auVar97._12_4_ * auVar107._12_4_ + uStack_140._4_4_ + auVar71._12_4_ +
         -(auVar50._12_4_ * auVar104._12_4_) + auVar120._12_4_ * auVar49._12_4_;
    auVar13._8_4_ = (float)uStack_140;
    auVar13._0_8_ = uStack_148;
    auVar13._12_4_ = uStack_140._4_4_;
    auVar88 = vblendps_avx(auVar36,auVar13,8);
LAB_14012d01d:
    auVar56._0_4_ = auVar88._0_4_ * fVar113;
    auVar56._4_4_ = auVar88._4_4_ * fVar117;
    auVar56._8_4_ = auVar88._8_4_ * fVar118;
    auVar56._12_4_ = auVar88._12_4_ * fVar119;
    auVar70._0_4_ = auVar41._0_4_ * fVar23;
    auVar70._4_4_ = auVar41._4_4_ * fVar110;
    auVar70._8_4_ = auVar41._8_4_ * fVar111;
    auVar70._12_4_ = auVar41._12_4_ * fVar112;
    auVar34 = vroundps_avx(auVar56,3);
    auVar47._0_4_ = -(auVar34._0_4_ * auVar44._0_4_) + auVar88._0_4_;
    auVar47._4_4_ = -(auVar34._4_4_ * auVar44._4_4_) + auVar88._4_4_;
    auVar47._8_4_ = -(auVar34._8_4_ * auVar44._8_4_) + auVar88._8_4_;
    auVar47._12_4_ = -(auVar34._12_4_ * auVar44._12_4_) + auVar88._12_4_;
    auVar57._0_4_ = (int)auVar34._0_4_;
    auVar57._4_4_ = (int)auVar34._4_4_;
    auVar57._8_4_ = (int)auVar34._8_4_;
    auVar57._12_4_ = (int)auVar34._12_4_;
    auVar41 = vpackssdw_avx(auVar57,auVar57);
    auVar34 = vblendps_avx(auVar88,auVar47,3);
    sVar48 = auVar41._0_2_;
    auVar2._0_2_ = sVar48 + auVar88._0_2_;
    sVar58 = auVar41._2_2_;
    auVar2._2_2_ = sVar58 + auVar88._2_2_;
    auVar2._4_2_ = sVar48 + auVar88._4_2_;
    auVar2._6_2_ = sVar58 + auVar88._6_2_;
    auVar2._8_2_ = sVar48 + auVar88._8_2_;
    auVar2._10_2_ = sVar58 + auVar88._10_2_;
    auVar2._12_2_ = sVar48 + auVar88._12_2_;
    auVar2._14_2_ = sVar58 + auVar88._14_2_;
    auVar88 = vblendps_avx(auVar34,auVar2,8);
    *(undefined1 (*) [16])(*param_1 + 0x10) = auVar88;
    *(float *)*param_1 = fVar29;
    *(float *)(*param_1 + 4) = fVar31;
    *(float *)(*param_1 + 8) = fVar32;
    *(float *)(*param_1 + 0xc) = fVar33;
  }
  else {
    if (-1 < param_3) {
      fStack_184 = 0.0;
      uStack_180 = 0;
      fStack_178 = 0.0;
      lStack_170 = 0;
      uStack_168 = 0;
      fStack_15c = 0.0;
      uStack_158 = 0;
      fStack_150 = 0.0;
      fStack_14c = 0.0;
      fStack_188 = 1.0;
      fStack_174 = 1.0;
      fStack_160 = 1.0;
      if (param_4 == '\x01' && cVar15 == '\x02') {
        auVar81 = ZEXT1664(auVar83);
        auVar84 = ZEXT1664(auVar87);
        auVar92 = ZEXT1664(auVar88);
        auVar101 = ZEXT1664(auVar70);
        uVar21 = (**(code **)(*param_2 + 0x90))(param_2);
        FUN_140554b30(uVar21,param_3,&fStack_188);
        auVar41 = auVar101._0_16_;
        auVar70 = auVar81._0_16_;
        auVar34 = auVar92._0_16_;
        auVar88 = auVar84._0_16_;
      }
      else {
        auVar81 = ZEXT1664(auVar83);
        auVar84 = ZEXT1664(auVar87);
        auVar92 = ZEXT1664(auVar88);
        auVar101 = ZEXT1664(auVar70);
        (**(code **)(*param_2 + 0xd8))(param_2,param_3,&fStack_188);
        auVar41 = auVar101._0_16_;
        auVar70 = auVar81._0_16_;
        auVar34 = auVar92._0_16_;
        auVar88 = auVar84._0_16_;
      }
      auVar4._4_4_ = fStack_184;
      auVar4._0_4_ = fStack_188;
      auVar4._8_8_ = uStack_180;
      auVar6._4_4_ = fStack_174;
      auVar6._0_4_ = fStack_178;
      auVar6._8_8_ = lStack_170;
      auVar9._8_4_ = fStack_160;
      auVar9._0_8_ = uStack_168;
      auVar9._12_4_ = fStack_15c;
      auVar126._4_4_ = fStack_174;
      auVar126._0_4_ = fStack_174;
      auVar126._8_4_ = fStack_174;
      auVar126._12_4_ = fStack_174;
      auVar39 = vblendps_avx(auVar4,auVar6,2);
      auVar39 = vblendps_avx(auVar9,auVar39,3);
      auVar50 = vshufps_avx(auVar39,auVar39,0x49);
      auVar49 = vshufps_avx(auVar39,auVar39,0x92);
      auVar82 = vshufps_avx(auVar39,auVar39,0x24);
      auVar64._0_4_ = auVar49._0_4_ + auVar50._0_4_;
      auVar64._4_4_ = auVar49._4_4_ + auVar50._4_4_;
      auVar64._8_4_ = auVar49._8_4_ + auVar50._8_4_;
      auVar64._12_4_ = auVar49._12_4_ + auVar50._12_4_;
      auVar45._0_4_ = auVar64._0_4_ + auVar82._0_4_;
      auVar45._4_4_ = auVar64._4_4_ + auVar82._4_4_;
      auVar45._8_4_ = auVar64._8_4_ + auVar82._8_4_;
      auVar45._12_4_ = auVar64._12_4_ + auVar82._12_4_;
      auVar39 = vsubps_avx(auVar39,auVar64);
      auVar39 = vblendps_avx(auVar39,auVar45,8);
      auVar54._0_4_ = auVar39._0_4_ + auVar70._0_4_;
      auVar54._4_4_ = auVar39._4_4_ + auVar70._4_4_;
      auVar54._8_4_ = auVar39._8_4_ + auVar70._8_4_;
      auVar54._12_4_ = auVar39._12_4_ + auVar70._12_4_;
      auVar39 = vrsqrtps_avx(auVar54);
      fVar23 = auVar39._0_4_;
      fVar110 = auVar39._4_4_;
      fVar111 = auVar39._8_4_;
      fVar112 = auVar39._12_4_;
      fVar29 = auVar88._0_4_;
      fVar31 = auVar88._4_4_;
      fVar32 = auVar88._8_4_;
      fVar33 = auVar88._12_4_;
      auVar88 = vblendps_avx(auVar4,auVar6,3);
      auVar88 = vblendps_avx(auVar88,auVar9,2);
      auVar39 = vshufps_avx(auVar88,auVar88,9);
      auVar88 = vblendps_avx(auVar6,auVar9,3);
      auVar88 = vshufps_avx(auVar88,auVar4,0x12);
      auVar108._0_4_ = auVar39._0_4_ + auVar88._0_4_;
      auVar108._4_4_ = auVar39._4_4_ + auVar88._4_4_;
      auVar108._8_4_ = auVar39._8_4_ + auVar88._8_4_;
      auVar108._12_4_ = auVar39._12_4_ + auVar88._12_4_;
      auVar96 = vsubps_avx(auVar88,auVar39);
      auVar74._0_4_ =
           fVar29 * ((-(fVar29 * fVar23 * fVar23 * auVar54._0_4_) + fVar29) * fVar23 + fVar23);
      auVar74._4_4_ =
           fVar31 * ((-(fVar31 * fVar110 * fVar110 * auVar54._4_4_) + fVar31) * fVar110 + fVar110);
      auVar74._8_4_ =
           fVar32 * ((-(fVar32 * fVar111 * fVar111 * auVar54._8_4_) + fVar32) * fVar111 + fVar111);
      auVar74._12_4_ =
           fVar33 * ((-(fVar33 * fVar112 * fVar112 * auVar54._12_4_) + fVar33) * fVar112 + fVar112);
      auVar88 = vblendps_avx(auVar108,auVar96,1);
      auVar39 = vblendps_avx(auVar108,auVar96,2);
      auVar49 = vshufps_avx(auVar108,auVar96,0xa1);
      auVar82 = vshufps_avx(auVar88,auVar88,0x18);
      auVar50 = vshufpd_avx(auVar39,auVar39,1);
      auVar88 = vblendps_avx(auVar49,auVar54,4);
      auVar39 = vblendps_avx(auVar82,auVar54,1);
      auVar50 = vblendps_avx(auVar50,auVar54,2);
      auVar49 = vblendps_avx(auVar96,auVar54,8);
      auVar82 = vshufps_avx(auVar74,auVar74,0xaa);
      auVar91._0_4_ = auVar74._0_4_ * auVar39._0_4_;
      auVar91._4_4_ = auVar74._0_4_ * auVar39._4_4_;
      auVar91._8_4_ = auVar74._0_4_ * auVar39._8_4_;
      auVar91._12_4_ = auVar74._0_4_ * auVar39._12_4_;
      auVar39 = vshufps_avx(auVar74,auVar74,0x55);
      auVar96 = vshufps_avx(auVar74,auVar74,0xff);
      auVar65._0_4_ = auVar88._0_4_ * auVar82._0_4_;
      auVar65._4_4_ = auVar88._4_4_ * auVar82._4_4_;
      auVar65._8_4_ = auVar88._8_4_ * auVar82._8_4_;
      auVar65._12_4_ = auVar88._12_4_ * auVar82._12_4_;
      auVar116._0_4_ = auVar39._0_4_ * auVar50._0_4_;
      auVar116._4_4_ = auVar39._4_4_ * auVar50._4_4_;
      auVar116._8_4_ = auVar39._8_4_ * auVar50._8_4_;
      auVar116._12_4_ = auVar39._12_4_ * auVar50._12_4_;
      auVar124._4_4_ = fStack_188;
      auVar124._0_4_ = fStack_188;
      auVar124._8_4_ = fStack_188;
      auVar124._12_4_ = fStack_188;
      auVar55._0_4_ = auVar96._0_4_ * auVar49._0_4_;
      auVar55._4_4_ = auVar96._4_4_ * auVar49._4_4_;
      auVar55._8_4_ = auVar96._8_4_ * auVar49._8_4_;
      auVar55._12_4_ = auVar96._12_4_ * auVar49._12_4_;
      auVar75._4_4_ = fStack_160;
      auVar75._0_4_ = fStack_160;
      auVar75._8_4_ = fStack_160;
      auVar75._12_4_ = fStack_160;
      auVar88 = vcmpps_avx(auVar124,auVar126,1);
      auVar39 = vcmpps_avx(auVar126,auVar75,1);
      auVar50 = vcmpps_avx(auVar124,auVar75,1);
      auVar88 = vblendvps_avx(auVar91,auVar116,auVar88);
      auVar76._0_4_ = auVar39._0_4_ & auVar50._0_4_;
      auVar76._4_4_ = auVar39._4_4_ & auVar50._4_4_;
      auVar76._8_4_ = auVar39._8_4_ & auVar50._8_4_;
      auVar76._12_4_ = auVar39._12_4_ & auVar50._12_4_;
      auVar12._8_4_ = fStack_150;
      auVar12._0_8_ = uStack_158;
      auVar12._12_4_ = fStack_14c;
      auVar88 = vblendvps_avx(auVar88,auVar65,auVar76);
      auVar50 = vshufps_avx(auVar34,auVar34,0xd2);
      auVar39 = vcmpps_avx(ZEXT416(0) << 0x20,auVar45,1);
      auVar46._0_4_ = auVar39._0_4_;
      auVar46._4_4_ = auVar46._0_4_;
      auVar46._8_4_ = auVar46._0_4_;
      auVar46._12_4_ = auVar46._0_4_;
      auVar39 = vblendvps_avx(auVar88,auVar55,auVar46);
      auVar44._4_4_ = _DAT_14615a290;
      auVar44._0_4_ = _DAT_14615a290;
      auVar44._8_4_ = _DAT_14615a290;
      auVar44._12_4_ = _DAT_14615a290;
      auVar88 = vrcpps_avx(auVar44);
      fVar113 = auVar88._0_4_;
      fVar117 = auVar88._4_4_;
      fVar118 = auVar88._8_4_;
      fVar119 = auVar88._12_4_;
      fVar113 = (-(fVar113 * _DAT_14615a290) + auVar70._0_4_) * fVar113 + fVar113;
      fVar117 = (-(fVar117 * _DAT_14615a290) + auVar70._4_4_) * fVar117 + fVar117;
      fVar118 = (-(fVar118 * _DAT_14615a290) + auVar70._8_4_) * fVar118 + fVar118;
      fVar119 = (-(fVar119 * _DAT_14615a290) + auVar70._12_4_) * fVar119 + fVar119;
      auVar66._0_4_ = (float)uStack_158 * fVar113;
      fVar23 = (float)((ulonglong)uStack_158 >> 0x20);
      auVar66._4_4_ = fVar23 * fVar117;
      auVar66._8_4_ = fStack_150 * fVar118;
      auVar66._12_4_ = fStack_14c * fVar119;
      auVar70 = vroundps_avx(auVar66,3);
      auVar77._0_4_ = -(auVar70._0_4_ * _DAT_14615a290) + (float)uStack_158;
      auVar77._4_4_ = -(auVar70._4_4_ * _DAT_14615a290) + fVar23;
      auVar77._8_4_ = -(auVar70._8_4_ * _DAT_14615a290) + fStack_150;
      auVar77._12_4_ = -(auVar70._12_4_ * _DAT_14615a290) + fStack_14c;
      auVar67._0_4_ = (int)auVar70._0_4_;
      auVar67._4_4_ = (int)auVar70._4_4_;
      auVar67._8_4_ = (int)auVar70._8_4_;
      auVar67._12_4_ = (int)auVar70._12_4_;
      auVar88 = vpackssdw_avx(auVar67,auVar67);
      auVar70 = vblendps_avx(auVar12,auVar77,3);
      auVar88 = vinsertps_avx(auVar70,auVar88,0x30);
      auVar70 = vpunpckhwd_avx(auVar88,auVar88);
      fVar23 = (float)((ulonglong)uStack_180 >> 0x20);
      auVar70 = vpsrad_avx(auVar70,0x10);
      auVar70 = vcvtdq2ps_avx(auVar70);
      fVar110 = (float)((ulonglong)lStack_170 >> 0x20);
      auVar70 = vshufpd_avx(auVar70,auVar70,3);
      auVar49 = vshufps_avx(auVar34,auVar34,0xc9);
      auVar26._0_4_ =
           (float)uStack_168 * (float)uStack_168 + fStack_178 * fStack_178 + fStack_188 * fStack_188
      ;
      fVar111 = (float)((ulonglong)uStack_168 >> 0x20);
      auVar26._4_4_ = fVar111 * fVar111 + fStack_174 * fStack_174 + fStack_184 * fStack_184;
      auVar26._8_4_ =
           fStack_160 * fStack_160 +
           (float)lStack_170 * (float)lStack_170 + (float)uStack_180 * (float)uStack_180;
      auVar26._12_4_ = fStack_15c * fStack_15c + fVar110 * fVar110 + fVar23 * fVar23;
      auVar82 = vshufps_avx(auVar34,auVar34,0xaa);
      auVar78._0_4_ = auVar41._0_4_ * (auVar70._0_4_ * _DAT_146159c90 + auVar88._0_4_);
      auVar78._4_4_ = auVar41._4_4_ * (auVar70._4_4_ * _UNK_146159c94 + auVar88._4_4_);
      auVar78._8_4_ = auVar41._8_4_ * (auVar70._8_4_ * _UNK_146159c98 + auVar88._8_4_);
      auVar78._12_4_ = auVar41._12_4_ * (auVar70._12_4_ * _UNK_146159c9c + auVar88._12_4_);
      auVar70 = vshufps_avx(auVar78,auVar78,0xd2);
      auVar88 = vshufps_avx(auVar78,auVar78,0xc9);
      auVar79._0_4_ = (uint)auVar39._0_4_ ^ auStack_138._0_4_;
      auVar79._4_4_ = (uint)auVar39._4_4_ ^ auStack_138._4_4_;
      auVar79._8_4_ = (uint)auVar39._8_4_ ^ auStack_138._8_4_;
      auVar79._12_4_ = (uint)auVar39._12_4_ ^ auStack_138._12_4_;
      fVar23 = -(auVar50._0_4_ * auVar88._0_4_) + auVar70._0_4_ * auVar49._0_4_;
      fVar110 = -(auVar50._4_4_ * auVar88._4_4_) + auVar70._4_4_ * auVar49._4_4_;
      fVar111 = -(auVar50._8_4_ * auVar88._8_4_) + auVar70._8_4_ * auVar49._8_4_;
      fVar112 = -(auVar50._12_4_ * auVar88._12_4_) + auVar70._12_4_ * auVar49._12_4_;
      auVar70 = vblendps_avx(auVar79,auVar39,10);
      auVar88 = vblendps_avx(auVar79,auVar39,9);
      auVar109._0_4_ = fVar23 + fVar23;
      auVar109._4_4_ = fVar110 + fVar110;
      auVar109._8_4_ = fVar111 + fVar111;
      auVar109._12_4_ = fVar112 + fVar112;
      auVar96 = vshufps_avx(auVar70,auVar70,0x1b);
      auVar88 = vshufps_avx(auVar88,auVar88,0xb1);
      auVar120 = vshufps_avx(auVar109,auVar109,0xd2);
      auVar104 = vshufps_avx(auVar109,auVar109,0xc9);
      auVar97 = vshufps_avx(auVar34,auVar34,0xff);
      fVar23 = auVar34._0_4_;
      auVar70 = vshufpd_avx(auVar39,auVar79,1);
      auVar34 = vshufps_avx(auVar34,auVar34,0x55);
      fVar29 = auVar82._0_4_ * auVar88._0_4_ +
               auVar34._0_4_ * auVar70._0_4_ +
               fVar23 * auVar96._0_4_ + auVar97._0_4_ * auVar39._0_4_;
      fVar31 = auVar82._4_4_ * auVar88._4_4_ +
               auVar34._4_4_ * auVar70._4_4_ +
               fVar23 * auVar96._4_4_ + auVar97._4_4_ * auVar39._4_4_;
      fVar32 = auVar82._8_4_ * auVar88._8_4_ +
               auVar34._8_4_ * auVar70._8_4_ +
               fVar23 * auVar96._8_4_ + auVar97._8_4_ * auVar39._8_4_;
      fVar33 = auVar82._12_4_ * auVar88._12_4_ +
               auVar34._12_4_ * auVar70._12_4_ +
               fVar23 * auVar96._12_4_ + auVar97._12_4_ * auVar39._12_4_;
      auVar70 = vrsqrtps_avx(auVar26);
      fVar23 = auVar70._0_4_;
      fVar110 = auVar70._4_4_;
      fVar111 = auVar70._8_4_;
      fVar112 = auVar70._12_4_;
      auVar80._4_4_ = _DAT_146159bfc;
      auVar80._0_4_ = _DAT_146159bfc;
      auVar80._8_4_ = _DAT_146159bfc;
      auVar80._12_4_ = _DAT_146159bfc;
      auVar70 = vcmpps_avx(auVar80,auVar26,2);
      fVar23 = (float)(auVar70._0_4_ &
                      (uint)(((-(_DAT_145fc6edc * fVar23 * fVar23 * auVar26._0_4_) + _DAT_145fc6edc)
                              * fVar23 + fVar23) * auVar26._0_4_));
      fVar110 = (float)(auVar70._4_4_ &
                       (uint)(((-(_DAT_145fc6edc * fVar110 * fVar110 * auVar26._4_4_) +
                               _DAT_145fc6edc) * fVar110 + fVar110) * auVar26._4_4_));
      fVar111 = (float)(auVar70._8_4_ &
                       (uint)(((-(_DAT_145fc6edc * fVar111 * fVar111 * auVar26._8_4_) +
                               _DAT_145fc6edc) * fVar111 + fVar111) * auVar26._8_4_));
      fVar112 = (float)(auVar70._12_4_ &
                       (uint)(((-(_DAT_145fc6edc * fVar112 * fVar112 * auVar26._12_4_) +
                               _DAT_145fc6edc) * fVar112 + fVar112) * auVar26._12_4_));
      auVar37._0_4_ =
           auVar97._0_4_ * auVar109._0_4_ + (float)uStack_148 + auVar78._0_4_ +
           -(auVar50._0_4_ * auVar104._0_4_) + auVar120._0_4_ * auVar49._0_4_;
      auVar37._4_4_ =
           auVar97._4_4_ * auVar109._4_4_ + uStack_148._4_4_ + auVar78._4_4_ +
           -(auVar50._4_4_ * auVar104._4_4_) + auVar120._4_4_ * auVar49._4_4_;
      auVar37._8_4_ =
           auVar97._8_4_ * auVar109._8_4_ + (float)uStack_140 + auVar78._8_4_ +
           -(auVar50._8_4_ * auVar104._8_4_) + auVar120._8_4_ * auVar49._8_4_;
      auVar37._12_4_ =
           auVar97._12_4_ * auVar109._12_4_ + uStack_140._4_4_ + auVar78._12_4_ +
           -(auVar50._12_4_ * auVar104._12_4_) + auVar120._12_4_ * auVar49._12_4_;
      auVar14._8_4_ = (float)uStack_140;
      auVar14._0_8_ = uStack_148;
      auVar14._12_4_ = uStack_140._4_4_;
      auVar88 = vblendps_avx(auVar37,auVar14,8);
      goto LAB_14012d01d;
    }
LAB_14012cacb:
    *(undefined1 (*) [16])*param_1 = auVar88;
    *(longlong *)(*param_1 + 0x10) = uStack_148;
    *(longlong *)(*param_1 + 0x18) = uStack_140;
  }
  *(undefined1 (*) [16])param_1[1] = auVar70;
LAB_14012d05b:
  fVar23 = _DAT_145fc6ed8;
  auVar38._0_12_ = ZEXT812(0);
  auVar38._12_4_ = 0;
  auVar27._0_4_ = auVar70._0_4_ + _DAT_145fc6fb0;
  auVar27._4_4_ = auVar70._4_4_ + _DAT_145fc6fb0;
  auVar27._8_4_ = auVar70._8_4_ + _DAT_145fc6fb0;
  auVar27._12_4_ = auVar70._12_4_ + _DAT_145fc6fb0;
  auVar30._0_4_ = auVar70._0_4_ + _DAT_145fc6f14;
  auVar30._4_4_ = auVar70._4_4_ + _DAT_145fc6f14;
  auVar30._8_4_ = auVar70._8_4_ + _DAT_145fc6f14;
  auVar30._12_4_ = auVar70._12_4_ + _DAT_145fc6f14;
  auVar70 = vcmpps_avx(auVar27,auVar38,2);
  auVar88 = vcmpps_avx(auVar38,auVar30,2);
  auVar28._0_4_ = auVar70._0_4_ & auVar88._0_4_;
  auVar28._4_4_ = auVar70._4_4_ & auVar88._4_4_;
  auVar28._8_4_ = auVar70._8_4_ & auVar88._8_4_;
  auVar28._12_4_ = auVar70._12_4_ & auVar88._12_4_;
  uVar16 = vmovmskps_avx(auVar28);
  if ((~(byte)uVar16 & 7) == 0) {
    *(float *)param_1[1] = _DAT_145fc6ed8;
    *(float *)(param_1[1] + 4) = fVar23;
    *(float *)(param_1[1] + 8) = fVar23;
    *(float *)(param_1[1] + 0xc) = fVar23;
  }
  return;
}

