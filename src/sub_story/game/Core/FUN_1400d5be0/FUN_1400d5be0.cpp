// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d5be0  size: 2211 bytes
// Name:    FUN_1400d5be0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450128a0, FUN_145012860, FUN_144db6f00, FUN_1400e2b50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d5be0(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  short sVar10;
  short sVar18;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  float fVar34;
  float fVar38;
  float fVar39;
  undefined1 auVar35 [16];
  float fVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [64];
  float fVar46;
  float fVar47;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [64];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [64];
  float fVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [64];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [8];
  float fStack_120;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  
  iVar7 = func_0x000144e05fa0(param_2[1]);
  auVar45 = ZEXT1264(ZEXT812(0));
  if (iVar7 == 0) {
    fVar34 = 0.0;
    fVar38 = 0.0;
    fVar39 = 0.0;
    fVar40 = 0.0;
    auVar11 = _DAT_145fc6ee0;
  }
  else {
    uVar8 = (**(code **)(*param_2 + 0xf0))(param_2,0);
    (**(code **)(*param_2 + 0x108))(param_2,uVar8,&fStack_1a8);
    auVar11._4_4_ = fStack_1a4;
    auVar11._0_4_ = fStack_1a8;
    auVar11._8_4_ = fStack_1a0;
    auVar11._12_4_ = fStack_19c;
    fVar34 = fStack_198;
    fVar38 = fStack_194;
    fVar39 = fStack_190;
    fVar40 = fStack_18c;
  }
  auVar19._0_4_ = auVar11._0_4_ + auVar11._0_4_;
  auVar19._4_4_ = auVar11._4_4_ + auVar11._4_4_;
  auVar19._8_4_ = auVar11._8_4_ + auVar11._8_4_;
  auVar19._12_4_ = auVar11._12_4_ + auVar11._12_4_;
  auVar23 = vshufps_avx(auVar11,auVar11,0xff);
  auVar2 = vshufps_avx(auVar11,auVar11,0xc9);
  auVar11 = vshufps_avx(auVar11,auVar11,0xd2);
  auVar12 = vshufps_avx(auVar19,auVar19,0xc9);
  auVar13 = vshufps_avx(auVar19,auVar19,0xd2);
  auVar63._0_4_ = auVar11._0_4_ * auVar19._0_4_ + auVar12._0_4_ * auVar23._0_4_;
  auVar63._4_4_ = auVar11._4_4_ * auVar19._4_4_ + auVar12._4_4_ * auVar23._4_4_;
  auVar63._8_4_ = auVar11._8_4_ * auVar19._8_4_ + auVar12._8_4_ * auVar23._8_4_;
  auVar63._12_4_ = auVar11._12_4_ * auVar19._12_4_ + auVar12._12_4_ * auVar23._12_4_;
  auVar31._0_4_ = -(auVar23._0_4_ * auVar13._0_4_) + auVar2._0_4_ * auVar19._0_4_;
  auVar31._4_4_ = -(auVar23._4_4_ * auVar13._4_4_) + auVar2._4_4_ * auVar19._4_4_;
  auVar31._8_4_ = -(auVar23._8_4_ * auVar13._8_4_) + auVar2._8_4_ * auVar19._8_4_;
  auVar31._12_4_ = -(auVar23._12_4_ * auVar13._12_4_) + auVar2._12_4_ * auVar19._12_4_;
  auVar35._0_4_ = -(auVar13._0_4_ * auVar11._0_4_) - (auVar2._0_4_ * auVar12._0_4_ - _DAT_145fc6ed8)
  ;
  auVar35._4_4_ = -(auVar13._4_4_ * auVar11._4_4_) - (auVar2._4_4_ * auVar12._4_4_ - _DAT_145fc6ed8)
  ;
  auVar35._8_4_ = -(auVar13._8_4_ * auVar11._8_4_) - (auVar2._8_4_ * auVar12._8_4_ - _DAT_145fc6ed8)
  ;
  auVar35._12_4_ =
       -(auVar13._12_4_ * auVar11._12_4_) - (auVar2._12_4_ * auVar12._12_4_ - _DAT_145fc6ed8);
  auVar11 = vblendps_avx(auVar63,auVar31,2);
  auVar23 = vblendps_avx(auVar35,auVar63,2);
  auVar2 = vblendps_avx(auVar31,auVar35,2);
  auVar11 = vblendps_avx(auVar35,auVar11,3);
  auVar76 = ZEXT1664(auVar11);
  auVar11 = vblendps_avx(auVar31,auVar23,3);
  auVar62 = ZEXT1664(auVar11);
  auVar11 = vblendps_avx(auVar63,auVar2,3);
  auVar65 = ZEXT1664(auVar11);
  fVar46 = _DAT_145fc6ed8;
  fVar50 = _DAT_145fc6ed8;
  fVar52 = _DAT_145fc6ed8;
  fVar54 = _DAT_145fc6ed8;
  (**(code **)(*param_2 + 0x88))(param_2,&fStack_1a8);
  fVar5 = _DAT_14615a290;
  fVar66 = _DAT_145fc6ed8;
  auVar23._4_4_ = fStack_194;
  auVar23._0_4_ = fStack_198;
  auVar23._8_4_ = fStack_190;
  auVar23._12_4_ = fStack_18c;
  auVar11 = vshufps_avx(auStack_188,auVar23,0x33);
  auVar11 = vshufps_avx(auVar23,auVar11,0x8f);
  auVar68._0_4_ = fVar34 * (auVar11._0_4_ + fVar46);
  auVar68._4_4_ = fVar38 * (auVar11._4_4_ + fVar50);
  auVar68._8_4_ = fVar39 * (auVar11._8_4_ + fVar52);
  auVar68._12_4_ = fVar40 * (auVar11._12_4_ + fVar54);
  fVar34 = auVar62._0_4_;
  auVar12._0_4_ = fVar34 * fVar34;
  fVar39 = auVar62._4_4_;
  auVar12._4_4_ = fVar39 * fVar39;
  fVar47 = auVar62._8_4_;
  auVar12._8_4_ = fVar47 * fVar47;
  fVar53 = auVar62._12_4_;
  auVar12._12_4_ = fVar53 * fVar53;
  auVar11 = vblendps_avx(auVar12,auVar45._0_16_,8);
  auVar11 = vhaddps_avx(auVar11,auVar11);
  auVar23 = vhaddps_avx(auVar11,auVar11);
  auVar11 = vrsqrtps_avx(auVar23);
  fVar38 = auVar11._0_4_;
  fVar40 = auVar11._4_4_;
  fVar51 = auVar11._8_4_;
  fVar55 = auVar11._12_4_;
  auVar13._4_4_ = _DAT_146159bfc;
  auVar13._0_4_ = _DAT_146159bfc;
  auVar13._8_4_ = _DAT_146159bfc;
  auVar13._12_4_ = _DAT_146159bfc;
  auVar11 = vcmpps_avx(auVar13,auVar23,2);
  auVar72._0_4_ =
       (float)((uint)(((-(_DAT_145fc6edc * fVar38 * fVar38 * auVar23._0_4_) + _DAT_145fc6edc) *
                       fVar38 + fVar38) * auVar23._0_4_) & auVar11._0_4_);
  auVar72._4_4_ =
       (float)((uint)(((-(_DAT_145fc6edc * fVar40 * fVar40 * auVar23._4_4_) + _DAT_145fc6edc) *
                       fVar40 + fVar40) * auVar23._4_4_) & auVar11._4_4_);
  auVar72._8_4_ =
       (float)((uint)(((-(_DAT_145fc6edc * fVar51 * fVar51 * auVar23._8_4_) + _DAT_145fc6edc) *
                       fVar51 + fVar51) * auVar23._8_4_) & auVar11._8_4_);
  auVar72._12_4_ =
       (float)((uint)(((-(_DAT_145fc6edc * fVar55 * fVar55 * auVar23._12_4_) + _DAT_145fc6edc) *
                       fVar55 + fVar55) * auVar23._12_4_) & auVar11._12_4_);
  auVar11 = vrcpps_avx(auVar72);
  fVar40 = auVar11._0_4_;
  fVar51 = auVar11._4_4_;
  fVar55 = auVar11._8_4_;
  fVar38 = auVar11._12_4_;
  auVar56._0_4_ = (uint)auVar72._0_4_ ^ _DAT_145fc6f10;
  auVar56._4_4_ = (uint)auVar72._4_4_ ^ _DAT_145fc6f10;
  auVar56._8_4_ = (uint)auVar72._8_4_ ^ _DAT_145fc6f10;
  auVar56._12_4_ = (uint)auVar72._12_4_ ^ _DAT_145fc6f10;
  auVar77._0_4_ = -((auVar72._0_4_ * fVar40 - fVar46) * fVar40) + fVar40;
  auVar77._4_4_ = -((auVar72._4_4_ * fVar51 - fVar50) * fVar51) + fVar51;
  auVar77._8_4_ = -((auVar72._8_4_ * fVar55 - fVar52) * fVar55) + fVar55;
  auVar77._12_4_ = -((auVar72._12_4_ * fVar38 - fVar54) * fVar38) + fVar38;
  auVar11 = vcmpps_avx(auVar72,auVar56,0);
  auVar57._4_4_ = _DAT_14615b36c;
  auVar57._0_4_ = _DAT_14615b36c;
  auVar57._8_4_ = _DAT_14615b36c;
  auVar57._12_4_ = _DAT_14615b36c;
  auVar11 = vblendvps_avx(auVar77,auVar57,auVar11);
  fVar38 = auVar11._0_4_;
  auVar58._0_4_ = fVar34 * fVar38;
  fVar34 = auVar11._4_4_;
  auVar58._4_4_ = fVar39 * fVar34;
  fVar39 = auVar11._8_4_;
  auVar58._8_4_ = fVar47 * fVar39;
  fVar40 = auVar11._12_4_;
  auVar58._12_4_ = fVar53 * fVar40;
  auVar60._0_4_ = auVar65._0_4_ * fVar38;
  auVar60._4_4_ = auVar65._4_4_ * fVar34;
  auVar60._8_4_ = auVar65._8_4_ * fVar39;
  auVar60._12_4_ = auVar65._12_4_ * fVar40;
  auVar74._0_4_ = auVar76._0_4_ * fVar38;
  auVar74._4_4_ = auVar76._4_4_ * fVar34;
  auVar74._8_4_ = auVar76._8_4_ * fVar39;
  auVar74._12_4_ = auVar76._12_4_ * fVar40;
  auVar11 = vshufps_avx(auVar58,auVar58,0x55);
  auVar23 = vshufps_avx(auVar58,auVar58,0xaa);
  auVar2 = vshufps_avx(auVar60,auVar60,0x55);
  fVar34 = auStack_188._0_4_;
  auVar32._0_4_ = fVar34 * auVar23._0_4_ + fStack_198 * auVar11._0_4_ + fStack_1a8 * auVar58._0_4_;
  fVar38 = auStack_188._4_4_;
  auVar32._4_4_ = fVar38 * auVar23._4_4_ + fStack_194 * auVar11._4_4_ + fStack_1a4 * auVar58._0_4_;
  fVar39 = auStack_188._8_4_;
  auVar32._8_4_ = fVar39 * auVar23._8_4_ + fStack_190 * auVar11._8_4_ + fStack_1a0 * auVar58._0_4_;
  fVar40 = auStack_188._12_4_;
  auVar32._12_4_ =
       fVar40 * auVar23._12_4_ + fStack_18c * auVar11._12_4_ + fStack_19c * auVar58._0_4_;
  auVar11 = vshufps_avx(auVar60,auVar60,0xaa);
  auVar23 = vshufps_avx(auVar74,auVar74,0x55);
  auVar12 = vshufps_avx(auVar74,auVar74,0xaa);
  auVar64._0_4_ = fVar34 * auVar11._0_4_ + fStack_198 * auVar2._0_4_ + auVar60._0_4_ * fStack_1a8;
  auVar64._4_4_ = fVar38 * auVar11._4_4_ + fStack_194 * auVar2._4_4_ + auVar60._0_4_ * fStack_1a4;
  auVar64._8_4_ = fVar39 * auVar11._8_4_ + fStack_190 * auVar2._8_4_ + auVar60._0_4_ * fStack_1a0;
  auVar64._12_4_ = fVar40 * auVar11._12_4_ + fStack_18c * auVar2._12_4_ + auVar60._0_4_ * fStack_19c
  ;
  auVar11 = vblendps_avx(auVar32,auVar64,2);
  auVar61._0_4_ = fVar34 * auVar12._0_4_ + fStack_198 * auVar23._0_4_ + auVar74._0_4_ * fStack_1a8;
  auVar61._4_4_ = fVar38 * auVar12._4_4_ + fStack_194 * auVar23._4_4_ + auVar74._0_4_ * fStack_1a4;
  auVar61._8_4_ = fVar39 * auVar12._8_4_ + fStack_190 * auVar23._8_4_ + auVar74._0_4_ * fStack_1a0;
  auVar61._12_4_ =
       fVar40 * auVar12._12_4_ + fStack_18c * auVar23._12_4_ + auVar74._0_4_ * fStack_19c;
  auVar23 = vshufps_avx(auVar68,auVar68,0x55);
  auVar2 = vshufps_avx(auVar68,auVar68,0xaa);
  auVar59._0_4_ =
       fVar34 * auVar2._0_4_ +
       fStack_198 * auVar23._0_4_ + fStack_1a8 * auVar68._0_4_ + auStack_178._0_4_;
  auVar59._4_4_ =
       fVar38 * auVar2._4_4_ +
       fStack_194 * auVar23._4_4_ + fStack_1a4 * auVar68._0_4_ + auStack_178._4_4_;
  auVar59._8_4_ =
       fVar39 * auVar2._8_4_ +
       fStack_190 * auVar23._8_4_ + fStack_1a0 * auVar68._0_4_ + auStack_178._8_4_;
  auVar59._12_4_ =
       fVar40 * auVar2._12_4_ +
       fStack_18c * auVar23._12_4_ + fStack_19c * auVar68._0_4_ + auStack_178._12_4_;
  auVar36._0_4_ = auVar72._0_4_ + _DAT_145fc6f48;
  auVar36._4_4_ = auVar72._4_4_ + _DAT_145fc6f48;
  auVar36._8_4_ = auVar72._8_4_ + _DAT_145fc6f48;
  auVar36._12_4_ = auVar72._12_4_ + _DAT_145fc6f48;
  auVar12 = vinsertps_avx(auVar64,auVar36,0x30);
  auVar13 = vinsertps_avx(auVar61,auVar36,0xb0);
  auVar2 = vshufps_avx(auVar64,auVar64,0x55);
  auVar11 = vblendps_avx(auVar13,auVar11,3);
  auVar23 = vblendps_avx(auVar32,auVar12,3);
  auVar14 = vshufps_avx(auVar11,auVar11,0x49);
  auVar15 = vshufps_avx(auVar11,auVar11,0x92);
  auVar16 = vshufps_avx(auVar11,auVar11,0x24);
  auVar23 = vblendps_avx(auVar23,auVar61,2);
  auVar73._0_4_ = auVar15._0_4_ + auVar14._0_4_;
  auVar73._4_4_ = auVar15._4_4_ + auVar14._4_4_;
  auVar73._8_4_ = auVar15._8_4_ + auVar14._8_4_;
  auVar73._12_4_ = auVar15._12_4_ + auVar14._12_4_;
  auVar23 = vshufps_avx(auVar23,auVar23,9);
  auVar67._0_4_ = auVar73._0_4_ + auVar16._0_4_;
  auVar67._4_4_ = auVar73._4_4_ + auVar16._4_4_;
  auVar67._8_4_ = auVar73._8_4_ + auVar16._8_4_;
  auVar67._12_4_ = auVar73._12_4_ + auVar16._12_4_;
  auVar11 = vsubps_avx(auVar11,auVar73);
  auVar11 = vblendps_avx(auVar11,auVar67,8);
  auVar69._0_4_ = auVar11._0_4_ + fVar46;
  auVar69._4_4_ = auVar11._4_4_ + fVar50;
  auVar69._8_4_ = auVar11._8_4_ + fVar52;
  auVar69._12_4_ = auVar11._12_4_ + fVar54;
  auVar11 = vrsqrtps_avx(auVar69);
  fVar34 = auVar11._0_4_;
  fVar38 = auVar11._4_4_;
  fVar39 = auVar11._8_4_;
  fVar40 = auVar11._12_4_;
  auVar11 = vblendps_avx(auVar12,auVar61,3);
  auVar11 = vshufps_avx(auVar11,auVar32,0x12);
  auVar48._0_4_ = auVar11._0_4_ + auVar23._0_4_;
  auVar48._4_4_ = auVar11._4_4_ + auVar23._4_4_;
  auVar48._8_4_ = auVar11._8_4_ + auVar23._8_4_;
  auVar48._12_4_ = auVar11._12_4_ + auVar23._12_4_;
  auVar15 = vsubps_avx(auVar11,auVar23);
  auVar75._0_4_ =
       ((-(_DAT_145fc6edc * fVar34 * fVar34 * auVar69._0_4_) + _DAT_145fc6edc) * fVar34 + fVar34) *
       _DAT_145fc6edc;
  auVar75._4_4_ =
       ((-(_DAT_145fc6edc * fVar38 * fVar38 * auVar69._4_4_) + _DAT_145fc6edc) * fVar38 + fVar38) *
       _DAT_145fc6edc;
  auVar75._8_4_ =
       ((-(_DAT_145fc6edc * fVar39 * fVar39 * auVar69._8_4_) + _DAT_145fc6edc) * fVar39 + fVar39) *
       _DAT_145fc6edc;
  auVar75._12_4_ =
       ((-(_DAT_145fc6edc * fVar40 * fVar40 * auVar69._12_4_) + _DAT_145fc6edc) * fVar40 + fVar40) *
       _DAT_145fc6edc;
  auVar11 = vblendps_avx(auVar48,auVar15,1);
  auVar11 = vshufps_avx(auVar11,auVar11,0x18);
  auVar11 = vblendps_avx(auVar11,auVar69,1);
  auVar23 = vshufps_avx(auVar75,auVar75,0x55);
  auVar20._0_4_ = auVar11._0_4_ * auVar75._0_4_;
  auVar20._4_4_ = auVar11._4_4_ * auVar75._0_4_;
  auVar20._8_4_ = auVar11._8_4_ * auVar75._0_4_;
  auVar20._12_4_ = auVar11._12_4_ * auVar75._0_4_;
  auVar11 = vblendps_avx(auVar48,auVar15,2);
  auVar11 = vshufpd_avx(auVar11,auVar11,1);
  auVar11 = vblendps_avx(auVar11,auVar69,2);
  auVar41._0_4_ = auVar11._0_4_ * auVar23._0_4_;
  auVar41._4_4_ = auVar11._4_4_ * auVar23._4_4_;
  auVar41._8_4_ = auVar11._8_4_ * auVar23._8_4_;
  auVar41._12_4_ = auVar11._12_4_ * auVar23._12_4_;
  auVar78._4_4_ = auVar32._0_4_;
  auVar78._0_4_ = auVar32._0_4_;
  auVar78._8_4_ = auVar32._0_4_;
  auVar78._12_4_ = auVar32._0_4_;
  auVar11 = vcmpps_avx(auVar78,auVar2,1);
  auVar23 = vblendvps_avx(auVar20,auVar41,auVar11);
  auVar11 = vshufps_avx(auVar48,auVar15,0xa1);
  auVar14 = vshufps_avx(auVar75,auVar75,0xaa);
  auVar11 = vblendps_avx(auVar11,auVar69,4);
  auVar21._0_4_ = auVar14._0_4_ * auVar11._0_4_;
  auVar21._4_4_ = auVar14._4_4_ * auVar11._4_4_;
  auVar21._8_4_ = auVar14._8_4_ * auVar11._8_4_;
  auVar21._12_4_ = auVar14._12_4_ * auVar11._12_4_;
  auVar14 = vshufps_avx(auVar61,auVar61,0xaa);
  auVar11 = vcmpps_avx(auVar2,auVar14,1);
  auVar2 = vcmpps_avx(auVar78,auVar14,1);
  auVar42._0_4_ = auVar2._0_4_ & auVar11._0_4_;
  auVar42._4_4_ = auVar2._4_4_ & auVar11._4_4_;
  auVar42._8_4_ = auVar2._8_4_ & auVar11._8_4_;
  auVar42._12_4_ = auVar2._12_4_ & auVar11._12_4_;
  auVar23 = vblendvps_avx(auVar23,auVar21,auVar42);
  auVar11 = vblendps_avx(auVar15,auVar69,8);
  auVar70._4_4_ = _DAT_14615a290;
  auVar70._0_4_ = _DAT_14615a290;
  auVar70._8_4_ = _DAT_14615a290;
  auVar70._12_4_ = _DAT_14615a290;
  auVar14 = vshufps_avx(auVar75,auVar75,0xff);
  auVar2 = vcmpps_avx(ZEXT816(0) << 0x20,auVar67,1);
  auVar22._0_4_ = auVar14._0_4_ * auVar11._0_4_;
  auVar22._4_4_ = auVar14._4_4_ * auVar11._4_4_;
  auVar22._8_4_ = auVar14._8_4_ * auVar11._8_4_;
  auVar22._12_4_ = auVar14._12_4_ * auVar11._12_4_;
  auVar49._0_4_ = auVar2._0_4_;
  auVar49._4_4_ = auVar49._0_4_;
  auVar49._8_4_ = auVar49._0_4_;
  auVar49._12_4_ = auVar49._0_4_;
  auVar11 = vblendps_avx(auVar59,auStack_178,8);
  auVar23 = vblendvps_avx(auVar23,auVar22,auVar49);
  *(undefined1 (*) [16])(param_3 + 0x80) = auVar23;
  auVar23 = vrcpps_avx(auVar70);
  fVar47 = auVar23._0_4_;
  fVar51 = auVar23._4_4_;
  fVar53 = auVar23._8_4_;
  fVar55 = auVar23._12_4_;
  fVar47 = (-(fVar47 * fVar5) + fVar66) * fVar47 + fVar47;
  fVar51 = (-(fVar51 * fVar5) + fVar66) * fVar51 + fVar51;
  fVar53 = (-(fVar53 * fVar5) + fVar66) * fVar53 + fVar53;
  fVar55 = (-(fVar55 * fVar5) + fVar66) * fVar55 + fVar55;
  auVar14._0_4_ = auVar11._0_4_ * fVar47;
  auVar14._4_4_ = auVar11._4_4_ * fVar51;
  auVar14._8_4_ = auVar11._8_4_ * fVar53;
  auVar14._12_4_ = auVar11._12_4_ * fVar55;
  auVar23 = vroundps_avx(auVar14,3);
  auVar43._0_4_ = -(auVar23._0_4_ * fVar5) + auVar11._0_4_;
  auVar43._4_4_ = -(auVar23._4_4_ * fVar5) + auVar11._4_4_;
  auVar43._8_4_ = -(auVar23._8_4_ * fVar5) + auVar11._8_4_;
  auVar43._12_4_ = -(auVar23._12_4_ * fVar5) + auVar11._12_4_;
  auVar15._0_4_ = (int)auVar23._0_4_;
  auVar15._4_4_ = (int)auVar23._4_4_;
  auVar15._8_4_ = (int)auVar23._8_4_;
  auVar15._12_4_ = (int)auVar23._12_4_;
  auVar23 = vpackssdw_avx(auVar15,auVar15);
  auVar11 = vblendps_avx(auVar59,auVar43,3);
  sVar10 = auVar23._0_2_;
  auVar2._0_2_ = sVar10 + auStack_178._0_2_;
  sVar18 = auVar23._2_2_;
  auVar2._2_2_ = sVar18 + auStack_178._2_2_;
  auVar2._4_2_ = sVar10 + auStack_178._4_2_;
  auVar2._6_2_ = sVar18 + auStack_178._6_2_;
  auVar2._8_2_ = sVar10 + auStack_178._8_2_;
  auVar2._10_2_ = sVar18 + auStack_178._10_2_;
  auVar2._12_2_ = sVar10 + auStack_178._12_2_;
  auVar2._14_2_ = sVar18 + auStack_178._14_2_;
  auVar11 = vblendps_avx(auVar11,auVar2,8);
  auVar23 = vpunpckhwd_avx(auVar11,auVar11);
  auVar23 = vpsrad_avx(auVar23,0x10);
  auVar23 = vcvtdq2ps_avx(auVar23);
  auVar23 = vshufpd_avx(auVar23,auVar23,3);
  auVar24._0_4_ = auVar23._0_4_ * _DAT_146159c90 + auVar11._0_4_;
  auVar24._4_4_ = auVar23._4_4_ * _UNK_146159c94 + auVar11._4_4_;
  auVar24._8_4_ = auVar23._8_4_ * _UNK_146159c98 + auVar11._8_4_;
  auVar24._12_4_ = auVar23._12_4_ * _UNK_146159c9c + auVar11._12_4_;
  auVar16._0_4_ = auVar24._0_4_ * fVar47;
  auVar16._4_4_ = auVar24._4_4_ * fVar51;
  auVar16._8_4_ = auVar24._8_4_ * fVar53;
  auVar16._12_4_ = auVar24._12_4_ * fVar55;
  auVar11 = vroundps_avx(auVar16,3);
  auVar71._0_4_ = -(auVar11._0_4_ * fVar5) + auVar24._0_4_;
  auVar71._4_4_ = -(auVar11._4_4_ * fVar5) + auVar24._4_4_;
  auVar71._8_4_ = -(auVar11._8_4_ * fVar5) + auVar24._8_4_;
  auVar71._12_4_ = -(auVar11._12_4_ * fVar5) + auVar24._12_4_;
  auVar17._0_4_ = (int)auVar11._0_4_;
  auVar17._4_4_ = (int)auVar11._4_4_;
  auVar17._8_4_ = (int)auVar11._8_4_;
  auVar17._12_4_ = (int)auVar11._12_4_;
  auVar23 = vpackssdw_avx(auVar17,auVar17);
  auVar11 = vblendps_avx(auVar24,auVar71,3);
  auVar11 = vinsertps_avx(auVar11,auVar23,0x30);
  *(undefined1 (*) [16])(param_3 + 0x90) = auVar11;
  auVar25._0_4_ =
       auVar13._0_4_ * auVar13._0_4_ + auVar12._0_4_ * auVar12._0_4_ + auVar32._0_4_ * auVar32._0_4_
  ;
  auVar25._4_4_ =
       auVar13._4_4_ * auVar13._4_4_ + auVar12._4_4_ * auVar12._4_4_ + auVar32._4_4_ * auVar32._4_4_
  ;
  auVar25._8_4_ =
       auVar13._8_4_ * auVar13._8_4_ + auVar12._8_4_ * auVar12._8_4_ + auVar32._8_4_ * auVar32._8_4_
  ;
  auVar25._12_4_ =
       auVar13._12_4_ * auVar13._12_4_ +
       auVar12._12_4_ * auVar12._12_4_ + auVar32._12_4_ * auVar32._12_4_;
  auVar11 = vrsqrtps_avx(auVar25);
  fVar34 = auVar11._0_4_;
  fVar38 = auVar11._4_4_;
  fVar39 = auVar11._8_4_;
  fVar40 = auVar11._12_4_;
  auVar37._4_4_ = _DAT_146159bfc;
  auVar37._0_4_ = _DAT_146159bfc;
  auVar37._8_4_ = _DAT_146159bfc;
  auVar37._12_4_ = _DAT_146159bfc;
  auVar11 = vcmpps_avx(auVar37,auVar25,2);
  auVar26._0_4_ =
       auVar11._0_4_ &
       (uint)(((-(_DAT_145fc6edc * fVar34 * fVar34 * auVar25._0_4_) + _DAT_145fc6edc) * fVar34 +
              fVar34) * auVar25._0_4_);
  auVar26._4_4_ =
       auVar11._4_4_ &
       (uint)(((-(_DAT_145fc6edc * fVar38 * fVar38 * auVar25._4_4_) + _DAT_145fc6edc) * fVar38 +
              fVar38) * auVar25._4_4_);
  auVar26._8_4_ =
       auVar11._8_4_ &
       (uint)(((-(_DAT_145fc6edc * fVar39 * fVar39 * auVar25._8_4_) + _DAT_145fc6edc) * fVar39 +
              fVar39) * auVar25._8_4_);
  auVar26._12_4_ =
       auVar11._12_4_ &
       (uint)(((-(_DAT_145fc6edc * fVar40 * fVar40 * auVar25._12_4_) + _DAT_145fc6edc) * fVar40 +
              fVar40) * auVar25._12_4_);
  *(undefined1 (*) [16])(param_3 + 0xa0) = auVar26;
  fVar38 = fVar66;
  fVar39 = fVar66;
  fVar40 = fVar66;
  uVar8 = func_0x000140bda800(*(undefined4 *)(param_2[4] + 0x1c));
  *(undefined4 *)(param_3 + 0xe4) = uVar8;
  uVar8 = FUN_1450128a0(*(undefined8 *)param_2[0x766],4);
  FUN_145012860(&fStack_1a8,param_2,uVar8,0);
  fStack_1a8 = 14975.719;
  fStack_1a4 = 1.4013e-45;
  lVar9 = *(longlong *)(CONCAT44(fStack_19c,fStack_1a0) + 0x3b30);
  iVar7 = func_0x0001450141d0(&fStack_1a8);
  uVar8 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar9 + 0x10) + 0x80),
                              *(undefined4 *)(&UNK_14669fed0 + (longlong)iVar7 * 4));
  uVar8 = (**(code **)(*(longlong *)CONCAT44(fStack_19c,fStack_1a0) + 0xf0))
                    ((longlong *)CONCAT44(fStack_19c,fStack_1a0),uVar8);
  lVar9 = param_2[3];
  func_0x000144e1ecd0(lVar9,&fStack_118,uVar8);
  fVar34 = fStack_110;
  func_0x000144e1ecd0(lVar9,auStack_128,*(undefined4 *)(param_1 + 0x168));
  auVar27._0_12_ = ZEXT812(0);
  auVar27._12_4_ = 0;
  auVar11 = vmaxss_avx(ZEXT416((uint)((fStack_120 - fVar34) + *(float *)(param_1 + 0x350))),auVar27)
  ;
  *(int *)(param_3 + 0xe8) = auVar11._0_4_;
  cVar1 = *(char *)(param_1 + 0x60);
  if (cVar1 == '\x02') {
    auVar11 = *(undefined1 (*) [16])(param_3 + 0xb0);
    auVar23 = vpunpckhwd_avx(auVar11,auVar11);
    auVar23 = vpsrad_avx(auVar23,0x10);
    auVar23 = vcvtdq2ps_avx(auVar23);
    auVar23 = vshufpd_avx(auVar23,auVar23,3);
    fStack_1a8 = _DAT_146159c90 * auVar23._0_4_ + auVar11._0_4_;
    fStack_1a4 = _UNK_146159c94 * auVar23._4_4_ + auVar11._4_4_;
    fStack_1a0 = auVar23._8_4_ * 0.0 + auVar11._8_4_;
    fStack_19c = auVar23._12_4_ * 0.0 + auVar11._12_4_;
    auVar11 = *(undefined1 (*) [16])(param_3 + 0x90);
    uStack_148 = CONCAT44(fStack_1a4,fStack_1a8);
    uStack_140 = CONCAT44(fStack_19c,fStack_1a0);
    auVar23 = vpunpckhwd_avx(auVar11,auVar11);
    auVar23 = vpsrad_avx(auVar23,0x10);
    auVar23 = vcvtdq2ps_avx(auVar23);
    auVar23 = vshufpd_avx(auVar23,auVar23,3);
    auStack_138._0_4_ = _DAT_146159c90 * auVar23._0_4_ + auVar11._0_4_;
    auStack_138._4_4_ = _UNK_146159c94 * auVar23._4_4_ + auVar11._4_4_;
    auStack_138._8_4_ = auVar23._8_4_ * 0.0 + auVar11._8_4_;
    auStack_138._12_4_ = auVar23._12_4_ * 0.0 + auVar11._12_4_;
    uStack_158 = *(undefined8 *)(param_3 + 0xc0);
    uStack_150 = *(undefined8 *)(param_3 + 200);
    uStack_168 = _DAT_14614f7f0;
    uStack_160 = _UNK_14614f7f8;
    FUN_1400e2b50(&uStack_148,&uStack_158,auStack_138,&uStack_168,&fStack_1a8);
    auVar3._4_4_ = fStack_1a4;
    auVar3._0_4_ = fStack_1a8;
    auVar3._8_4_ = fStack_1a0;
    auVar3._12_4_ = fStack_19c;
    auVar28._0_4_ = fStack_1a8 * fVar47;
    auVar28._4_4_ = fStack_1a4 * fVar51;
    auVar28._8_4_ = fStack_1a0 * fVar53;
    auVar28._12_4_ = fStack_19c * fVar55;
    auVar11 = vroundps_avx(auVar28,3);
    auVar30._0_4_ = auVar11._0_4_ * _DAT_14615ad78 + fStack_1a8;
    auVar30._4_4_ = auVar11._4_4_ * _DAT_14615ad78 + fStack_1a4;
    auVar30._8_4_ = auVar11._8_4_ * _DAT_14615ad78 + fStack_1a0;
    auVar30._12_4_ = auVar11._12_4_ * _DAT_14615ad78 + fStack_19c;
    auVar29._0_4_ = (int)auVar11._0_4_;
    auVar29._4_4_ = (int)auVar11._4_4_;
    auVar29._8_4_ = (int)auVar11._8_4_;
    auVar29._12_4_ = (int)auVar11._12_4_;
    auVar11 = vblendps_avx(auVar3,auVar30,3);
    auVar23 = vpackssdw_avx(auVar29,auVar29);
    auVar11 = vinsertps_avx(auVar11,auVar23,0x30);
    *(undefined1 (*) [16])(param_3 + 0xb0) = auVar11;
  }
  if ((((*(byte *)(param_3 + 0xe1) & 0x40) == 0) && (*(longlong *)(param_3 + 8) != 0)) &&
     ((cVar1 == '\x02' || ((*(byte *)(param_3 + 0x140) & 8) == 0)))) {
    iVar7 = func_0x000144e05fa0(param_2[1]);
    if (iVar7 == 0) {
      auVar44._0_12_ = ZEXT812(0);
      auVar44._12_4_ = 0;
    }
    else {
      uVar8 = (**(code **)(*param_2 + 0xf0))(param_2,0);
      (**(code **)(*param_2 + 0x108))(param_2,uVar8,&fStack_1a8);
      auVar44._4_4_ = fStack_194;
      auVar44._0_4_ = fStack_198;
      auVar44._8_4_ = fStack_190;
      auVar44._12_4_ = fStack_18c;
    }
    auVar45 = ZEXT1664(auVar44);
    fVar34 = *(float *)(param_3 + 0xe4);
    FUN_144db6f00(param_2 + 2,&fStack_1a8,*(undefined4 *)(param_1 + 0x178));
    auVar11 = vshufpd_avx(auVar45._0_16_,auVar45._0_16_,1);
    fVar34 = (fVar34 * auVar11._0_4_ - fStack_1a0 * *(float *)(param_3 + 0xe4)) +
             *(float *)(*(longlong *)(*(longlong *)(param_3 + 8) + 0x928) + 0x28);
  }
  else {
    iVar7 = func_0x000144e05fa0(param_2[1]);
    if (iVar7 == 0) {
      fVar34 = 0.0;
      fVar47 = 0.0;
      fVar51 = 0.0;
      fVar53 = 0.0;
    }
    else {
      uVar8 = (**(code **)(*param_2 + 0xf0))(param_2,0);
      (**(code **)(*param_2 + 0x108))(param_2,uVar8,&fStack_1a8);
      fVar34 = fStack_198;
      fVar47 = fStack_194;
      fVar51 = fStack_190;
      fVar53 = fStack_18c;
    }
    (**(code **)(*param_2 + 0x88))(param_2,&fStack_1a8);
    auVar4._4_4_ = fStack_194;
    auVar4._0_4_ = fStack_198;
    auVar4._8_4_ = fStack_190;
    auVar4._12_4_ = fStack_18c;
    auVar11 = vshufps_avx(auVar4,auStack_188,0x33);
    auVar11 = vshufps_avx(auVar4,auVar11,0x2f);
    auVar45 = ZEXT1664(CONCAT412((fVar40 + auVar11._12_4_) * fVar53,
                                 CONCAT48((fVar39 + auVar11._8_4_) * fVar51,
                                          CONCAT44((fVar38 + auVar11._4_4_) * fVar47,
                                                   (fVar66 + auVar11._0_4_) * fVar34))));
    (**(code **)(*param_2 + 0x88))(param_2,&fStack_118);
    fVar34 = auVar45._0_4_;
    auVar23 = auVar45._0_16_;
    auVar11 = vshufps_avx(auVar23,auVar23,0x55);
    auVar23 = vshufps_avx(auVar23,auVar23,0xaa);
    auVar33._0_4_ =
         auVar23._0_4_ * fStack_f8 + auVar11._0_4_ * fStack_108 + fVar34 * fStack_118 + fStack_e8;
    auVar33._4_4_ =
         auVar23._4_4_ * fStack_f4 + auVar11._4_4_ * fStack_104 + fVar34 * fStack_114 + fStack_e4;
    auVar33._8_4_ =
         auVar23._8_4_ * fStack_f0 + auVar11._8_4_ * fStack_100 + fVar34 * fStack_110 + fStack_e0;
    auVar33._12_4_ =
         auVar23._12_4_ * fStack_ec + auVar11._12_4_ * fStack_fc + fVar34 * fStack_10c + fStack_dc;
    auVar11 = vshufpd_avx(auVar33,auVar33,1);
    fVar34 = auVar11._0_4_ - *(float *)(param_3 + 0xb8);
  }
  *(float *)(param_3 + 0xd0) = fVar34;
  if ((*(byte *)(param_3 + 0xf0) & 8) != 0) {
    lVar9 = func_0x0001450f21c0(*(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c));
    if (lVar9 != 0) {
      if (((*(byte *)(lVar9 + 0x16) & 1) == 0) || (*(longlong *)(param_3 + 8) == 0)) {
        bVar6 = 0;
      }
      else {
        bVar6 = (*(char *)(*(longlong *)(*(longlong *)(param_3 + 8) + 0x860) + 0x156) == '\x02') <<
                5;
      }
      *(byte *)(param_3 + 0x14c) = *(byte *)(param_3 + 0x14c) | bVar6;
    }
  }
  return;
}

