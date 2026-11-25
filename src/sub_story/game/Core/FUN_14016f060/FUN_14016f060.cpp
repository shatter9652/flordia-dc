// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016f060  size: 2993 bytes
// Name:    FUN_14016f060
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14016fc20, FUN_144e258a0, FUN_144ec0a70, FUN_1453fe500, FUN_144e3c9c0, FUN_144eaac60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14016f060(longlong param_1,longlong param_2)

{
  undefined1 (*pauVar1) [16];
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar27;
  float fVar28;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar29;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar30;
  float fVar35;
  float fVar36;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar37;
  undefined1 auVar34 [16];
  undefined1 auVar38 [16];
  float fVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  short sVar50;
  short sVar62;
  float fVar51;
  float fVar63;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [64];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [64];
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [64];
  float fVar119;
  float fVar123;
  float fVar124;
  float fVar125;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auStack_168 [12];
  float fStack_15c;
  undefined1 auStack_158 [16];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auVar107 [64];
  undefined1 auVar122 [64];
  
  lVar17 = *(longlong *)(param_1 + 0x408);
  cVar13 = func_0x000144da4370(*(undefined4 *)(lVar17 + 0x154));
  if (cVar13 == '\0') {
LAB_14016f0f7:
    FUN_144eaac60(param_2,auStack_158,*(undefined2 *)(param_1 + 0x444));
    auVar56 = auStack_158;
  }
  else {
    auVar56 = *(undefined1 (*) [16])(lVar17 + 0x70);
    auVar45 = vcmpps_avx(auVar56,_DAT_145fc6ee0,4);
    if ((((SUB161(auVar45 >> 0x1f,0) & 1) == 0 && (SUB161(auVar45 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar45 >> 0x5f,0) & 1) == 0) && -1 < auVar45[0xf]) goto LAB_14016f0f7;
  }
  uVar9 = _DAT_145fc6f10;
  fVar101 = _DAT_145fc6f08;
  fVar51 = _DAT_145fc6ed8;
  auVar21._0_4_ = auVar56._0_4_ + auVar56._0_4_;
  auVar21._4_4_ = auVar56._4_4_ + auVar56._4_4_;
  auVar21._8_4_ = auVar56._8_4_ + auVar56._8_4_;
  auVar21._12_4_ = auVar56._12_4_ + auVar56._12_4_;
  auVar45 = vshufps_avx(auVar56,auVar56,0xff);
  auVar117 = vshufps_avx(auVar56,auVar56,0xc9);
  auVar56 = vshufps_avx(auVar56,auVar56,0xd2);
  pauVar1 = *(undefined1 (**) [16])(param_1 + 0x310);
  auVar100 = ZEXT1664(CONCAT412(_DAT_145fc6f10,
                                CONCAT48(_DAT_145fc6f10,CONCAT44(_DAT_145fc6f10,_DAT_145fc6f10))));
  auVar105._4_4_ = _DAT_14615b36c;
  auVar105._0_4_ = _DAT_14615b36c;
  auVar105._8_4_ = _DAT_14615b36c;
  auVar105._12_4_ = _DAT_14615b36c;
  auVar107 = ZEXT1664(auVar105);
  auVar121 = vshufps_avx(auVar21,auVar21,0xc9);
  auVar85 = vshufps_avx(auVar21,auVar21,0xd2);
  auVar18._0_4_ = auVar56._0_4_ * auVar21._0_4_ + auVar121._0_4_ * auVar45._0_4_;
  auVar18._4_4_ = auVar56._4_4_ * auVar21._4_4_ + auVar121._4_4_ * auVar45._4_4_;
  auVar18._8_4_ = auVar56._8_4_ * auVar21._8_4_ + auVar121._8_4_ * auVar45._8_4_;
  auVar18._12_4_ = auVar56._12_4_ * auVar21._12_4_ + auVar121._12_4_ * auVar45._12_4_;
  auVar38._0_4_ = -(auVar45._0_4_ * auVar85._0_4_) + auVar117._0_4_ * auVar21._0_4_;
  auVar38._4_4_ = -(auVar45._4_4_ * auVar85._4_4_) + auVar117._4_4_ * auVar21._4_4_;
  auVar38._8_4_ = -(auVar45._8_4_ * auVar85._8_4_) + auVar117._8_4_ * auVar21._8_4_;
  auVar38._12_4_ = -(auVar45._12_4_ * auVar85._12_4_) + auVar117._12_4_ * auVar21._12_4_;
  auVar44._0_4_ =
       -(auVar85._0_4_ * auVar56._0_4_) - (auVar117._0_4_ * auVar121._0_4_ - _DAT_145fc6ed8);
  auVar44._4_4_ =
       -(auVar85._4_4_ * auVar56._4_4_) - (auVar117._4_4_ * auVar121._4_4_ - _DAT_145fc6ed8);
  auVar44._8_4_ =
       -(auVar85._8_4_ * auVar56._8_4_) - (auVar117._8_4_ * auVar121._8_4_ - _DAT_145fc6ed8);
  auVar44._12_4_ =
       -(auVar85._12_4_ * auVar56._12_4_) - (auVar117._12_4_ * auVar121._12_4_ - _DAT_145fc6ed8);
  auVar56 = vblendps_avx(auVar18,auVar38,2);
  auVar45 = vblendps_avx(auVar44,auVar18,2);
  auVar117 = vblendps_avx(auVar38,auVar44,2);
  auVar45 = vblendps_avx(auVar38,auVar45,3);
  *pauVar1 = auVar45;
  auVar45 = vblendps_avx(auVar18,auVar117,3);
  pauVar1[1] = auVar45;
  auVar56 = vblendps_avx(auVar44,auVar56,3);
  pauVar1[2] = auVar56;
  auVar18 = ZEXT816(0) << 0x20;
  pauVar1[3] = auVar18;
  pfVar2 = *(float **)(param_1 + 0x310);
  pfVar3 = *(float **)(param_2 + 0x10);
  fVar125 = *pfVar2;
  fVar27 = pfVar2[1];
  fVar28 = pfVar2[2];
  fVar29 = pfVar2[3];
  fVar30 = *pfVar3;
  fVar35 = pfVar3[1];
  fVar36 = pfVar3[2];
  fVar37 = pfVar3[3];
  auVar56 = *(undefined1 (*) [16])(pfVar3 + 4);
  auVar45 = *(undefined1 (*) [16])(pfVar3 + 8);
  auVar117 = *(undefined1 (*) [16])(pfVar3 + 0xc);
  auVar72._0_4_ = fVar125 * fVar125;
  auVar72._4_4_ = fVar27 * fVar27;
  auVar72._8_4_ = fVar28 * fVar28;
  auVar72._12_4_ = fVar29 * fVar29;
  auVar121 = vblendps_avx(auVar72,auVar18,8);
  auVar121 = vhaddps_avx(auVar121,auVar121);
  auVar85 = vhaddps_avx(auVar121,auVar121);
  auVar121 = vrsqrtps_avx(auVar85);
  fVar63 = auVar121._0_4_;
  fVar119 = auVar121._4_4_;
  fVar123 = auVar121._8_4_;
  fVar124 = auVar121._12_4_;
  auVar90._4_4_ = _DAT_146159bfc;
  auVar90._0_4_ = _DAT_146159bfc;
  auVar90._8_4_ = _DAT_146159bfc;
  auVar90._12_4_ = _DAT_146159bfc;
  auVar121 = vcmpps_avx(auVar90,auVar85,2);
  auVar73._0_4_ =
       (float)((uint)(((fVar101 * fVar63 * fVar63 * auVar85._0_4_ - fVar101) * fVar63 + fVar63) *
                     auVar85._0_4_) & auVar121._0_4_);
  auVar73._4_4_ =
       (float)((uint)(((fVar101 * fVar119 * fVar119 * auVar85._4_4_ - fVar101) * fVar119 + fVar119)
                     * auVar85._4_4_) & auVar121._4_4_);
  auVar73._8_4_ =
       (float)((uint)(((fVar101 * fVar123 * fVar123 * auVar85._8_4_ - fVar101) * fVar123 + fVar123)
                     * auVar85._8_4_) & auVar121._8_4_);
  auVar73._12_4_ =
       (float)((uint)(((fVar101 * fVar124 * fVar124 * auVar85._12_4_ - fVar101) * fVar124 + fVar124)
                     * auVar85._12_4_) & auVar121._12_4_);
  auVar121 = vrcpps_avx(auVar73);
  auVar91._0_4_ = uVar9 ^ (uint)auVar73._0_4_;
  auVar91._4_4_ = uVar9 ^ (uint)auVar73._4_4_;
  auVar91._8_4_ = uVar9 ^ (uint)auVar73._8_4_;
  auVar91._12_4_ = uVar9 ^ (uint)auVar73._12_4_;
  fVar119 = auVar121._0_4_;
  fVar123 = auVar121._4_4_;
  fVar124 = auVar121._8_4_;
  fVar63 = auVar121._12_4_;
  auVar108._0_4_ = -((auVar73._0_4_ * fVar119 - fVar51) * fVar119) + fVar119;
  auVar108._4_4_ = -((auVar73._4_4_ * fVar123 - fVar51) * fVar123) + fVar123;
  auVar108._8_4_ = -((auVar73._8_4_ * fVar124 - fVar51) * fVar124) + fVar124;
  auVar108._12_4_ = -((auVar73._12_4_ * fVar63 - fVar51) * fVar63) + fVar63;
  auVar121 = vcmpps_avx(auVar91,auVar73,0);
  auVar121 = vblendvps_avx(auVar108,auVar105,auVar121);
  fVar63 = auVar121._0_4_;
  auVar109._0_4_ = fVar63 * pfVar2[4];
  fVar119 = auVar121._4_4_;
  auVar109._4_4_ = fVar119 * pfVar2[5];
  fVar123 = auVar121._8_4_;
  auVar109._8_4_ = fVar123 * pfVar2[6];
  fVar124 = auVar121._12_4_;
  auVar109._12_4_ = fVar124 * pfVar2[7];
  auVar52._0_4_ = fVar63 * fVar125;
  auVar52._4_4_ = fVar119 * fVar27;
  auVar52._8_4_ = fVar123 * fVar28;
  auVar52._12_4_ = fVar124 * fVar29;
  auVar79._0_4_ = fVar63 * pfVar2[8];
  auVar79._4_4_ = fVar119 * pfVar2[9];
  auVar79._8_4_ = fVar123 * pfVar2[10];
  auVar79._12_4_ = fVar124 * pfVar2[0xb];
  auVar121 = vshufps_avx(auVar52,auVar52,0x55);
  auVar85 = vshufps_avx(auVar52,auVar52,0xaa);
  fVar27 = auVar56._0_4_;
  fVar28 = auVar56._4_4_;
  fVar29 = auVar56._8_4_;
  fVar43 = auVar56._12_4_;
  auVar21 = vshufps_avx(auVar109,auVar109,0x55);
  fVar119 = auVar45._0_4_;
  fVar123 = auVar45._4_4_;
  fVar124 = auVar45._8_4_;
  fVar125 = auVar45._12_4_;
  auVar38 = vshufps_avx(auVar109,auVar109,0xaa);
  auVar44 = vshufps_avx(auVar79,auVar79,0x55);
  auVar92._0_4_ = fVar119 * auVar38._0_4_ + fVar27 * auVar21._0_4_ + auVar109._0_4_ * fVar30;
  auVar92._4_4_ = fVar123 * auVar38._4_4_ + fVar28 * auVar21._4_4_ + auVar109._0_4_ * fVar35;
  auVar92._8_4_ = fVar124 * auVar38._8_4_ + fVar29 * auVar21._8_4_ + auVar109._0_4_ * fVar36;
  auVar92._12_4_ = fVar125 * auVar38._12_4_ + fVar43 * auVar21._12_4_ + auVar109._0_4_ * fVar37;
  auVar21 = vshufps_avx(auVar79,auVar79,0xaa);
  auVar45 = vshufps_avx(auVar45,auVar56,0x33);
  auVar56 = vshufps_avx(auVar56,auVar45,0x8f);
  auVar113._0_4_ = (auVar56._0_4_ + fVar51) * pfVar2[0xc];
  auVar113._4_4_ = (auVar56._4_4_ + fVar51) * pfVar2[0xd];
  auVar113._8_4_ = (auVar56._8_4_ + fVar51) * pfVar2[0xe];
  auVar113._12_4_ = (auVar56._12_4_ + fVar51) * pfVar2[0xf];
  *pfVar2 = fVar119 * auVar85._0_4_ + fVar27 * auVar121._0_4_ + auVar52._0_4_ * fVar30;
  pfVar2[1] = fVar123 * auVar85._4_4_ + fVar28 * auVar121._4_4_ + auVar52._0_4_ * fVar35;
  pfVar2[2] = fVar124 * auVar85._8_4_ + fVar29 * auVar121._8_4_ + auVar52._0_4_ * fVar36;
  pfVar2[3] = fVar125 * auVar85._12_4_ + fVar43 * auVar121._12_4_ + auVar52._0_4_ * fVar37;
  fVar63 = _DAT_14615a290;
  auVar110._0_4_ = fVar119 * auVar21._0_4_ + fVar27 * auVar44._0_4_ + auVar79._0_4_ * fVar30;
  auVar110._4_4_ = fVar123 * auVar21._4_4_ + fVar28 * auVar44._4_4_ + auVar79._0_4_ * fVar35;
  auVar110._8_4_ = fVar124 * auVar21._8_4_ + fVar29 * auVar44._8_4_ + auVar79._0_4_ * fVar36;
  auVar110._12_4_ = fVar125 * auVar21._12_4_ + fVar43 * auVar44._12_4_ + auVar79._0_4_ * fVar37;
  auVar56 = vshufps_avx(auVar113,auVar113,0x55);
  auVar45 = vshufps_avx(auVar113,auVar113,0xaa);
  auVar80._0_4_ =
       fVar119 * auVar45._0_4_ + fVar27 * auVar56._0_4_ + fVar30 * auVar113._0_4_ + auVar117._0_4_;
  auVar80._4_4_ =
       fVar123 * auVar45._4_4_ + fVar28 * auVar56._4_4_ + fVar35 * auVar113._0_4_ + auVar117._4_4_;
  auVar80._8_4_ =
       fVar124 * auVar45._8_4_ + fVar29 * auVar56._8_4_ + fVar36 * auVar113._0_4_ + auVar117._8_4_;
  auVar80._12_4_ =
       fVar125 * auVar45._12_4_ +
       fVar43 * auVar56._12_4_ + fVar37 * auVar113._0_4_ + auVar117._12_4_;
  auVar114._4_4_ = _DAT_145fc6f48;
  auVar114._0_4_ = _DAT_145fc6f48;
  auVar114._8_4_ = _DAT_145fc6f48;
  auVar114._12_4_ = _DAT_145fc6f48;
  auVar56 = vblendps_avx(auVar80,auVar117,8);
  auVar85._0_4_ = _DAT_145fc6f48 + auVar73._0_4_;
  auVar85._4_4_ = _DAT_145fc6f48 + auVar73._4_4_;
  auVar85._8_4_ = _DAT_145fc6f48 + auVar73._8_4_;
  auVar85._12_4_ = _DAT_145fc6f48 + auVar73._12_4_;
  auVar74._4_4_ = _DAT_14615a290;
  auVar74._0_4_ = _DAT_14615a290;
  auVar74._8_4_ = _DAT_14615a290;
  auVar74._12_4_ = _DAT_14615a290;
  auVar45 = vinsertps_avx(auVar92,auVar85,0x30);
  auVar121 = vinsertps_avx(auVar110,auVar85,0xb0);
  *(undefined1 (*) [16])(pfVar2 + 4) = auVar45;
  *(undefined1 (*) [16])(pfVar2 + 8) = auVar121;
  auVar45 = vrcpps_avx(auVar74);
  fVar119 = auVar45._0_4_;
  fVar123 = auVar45._4_4_;
  fVar124 = auVar45._8_4_;
  fVar125 = auVar45._12_4_;
  fVar119 = (-(fVar119 * fVar63) + fVar51) * fVar119 + fVar119;
  fVar123 = (-(fVar123 * fVar63) + fVar51) * fVar123 + fVar123;
  fVar124 = (-(fVar124 * fVar63) + fVar51) * fVar124 + fVar124;
  fVar125 = (-(fVar125 * fVar63) + fVar51) * fVar125 + fVar125;
  auVar122 = ZEXT1664(CONCAT412(fVar125,CONCAT48(fVar124,CONCAT44(fVar123,fVar119))));
  auVar45._0_4_ = fVar119 * auVar56._0_4_;
  auVar45._4_4_ = fVar123 * auVar56._4_4_;
  auVar45._8_4_ = fVar124 * auVar56._8_4_;
  auVar45._12_4_ = fVar125 * auVar56._12_4_;
  auVar45 = vroundps_avx(auVar45,3);
  auVar75._0_4_ = -(auVar45._0_4_ * fVar63) + auVar56._0_4_;
  auVar75._4_4_ = -(auVar45._4_4_ * fVar63) + auVar56._4_4_;
  auVar75._8_4_ = -(auVar45._8_4_ * fVar63) + auVar56._8_4_;
  auVar75._12_4_ = -(auVar45._12_4_ * fVar63) + auVar56._12_4_;
  auVar56 = vblendps_avx(auVar80,auVar75,3);
  auVar81._0_4_ = (int)auVar45._0_4_;
  auVar81._4_4_ = (int)auVar45._4_4_;
  auVar81._8_4_ = (int)auVar45._8_4_;
  auVar81._12_4_ = (int)auVar45._12_4_;
  auVar45 = vpackssdw_avx(auVar81,auVar81);
  sVar50 = auVar45._0_2_;
  auVar121._0_2_ = sVar50 + auVar117._0_2_;
  sVar62 = auVar45._2_2_;
  auVar121._2_2_ = sVar62 + auVar117._2_2_;
  auVar121._4_2_ = sVar50 + auVar117._4_2_;
  auVar121._6_2_ = sVar62 + auVar117._6_2_;
  auVar121._8_2_ = sVar50 + auVar117._8_2_;
  auVar121._10_2_ = sVar62 + auVar117._10_2_;
  auVar121._12_2_ = sVar50 + auVar117._12_2_;
  auVar121._14_2_ = sVar62 + auVar117._14_2_;
  auVar56 = vblendps_avx(auVar56,auVar121,8);
  auVar45 = vpunpckhwd_avx(auVar56,auVar56);
  auVar45 = vpsrad_avx(auVar45,0x10);
  auVar45 = vcvtdq2ps_avx(auVar45);
  auVar45 = vshufpd_avx(auVar45,auVar45,3);
  fVar119 = auVar45._4_4_ * _UNK_146159c94;
  fVar63 = auVar45._8_4_ * _UNK_146159c98;
  fVar123 = auVar45._12_4_ * _UNK_146159c9c;
  pfVar2[0xc] = auVar45._0_4_ * _DAT_146159c90 + auVar56._0_4_;
  pfVar2[0xd] = fVar119 + auVar56._4_4_;
  pfVar2[0xe] = fVar63 + auVar56._8_4_;
  pfVar2[0xf] = fVar123 + auVar56._12_4_;
  uVar12 = _DAT_146159bc0;
  uVar11 = _UNK_14614f7f8;
  uVar10 = _DAT_14614f7f0;
  if (((*(char *)(param_1 + 0x302) < '\0') && (*(short *)(param_1 + 0x446) != -1)) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x408) + 0x14c) & 0x10) == 0)) {
    fVar69 = fVar51;
    fVar70 = fVar51;
    fVar71 = fVar51;
    fVar102 = fVar101;
    fVar103 = fVar101;
    fVar104 = fVar101;
    func_0x000144eaada0(param_2,&fStack_148);
    auVar117._4_4_ = fStack_144;
    auVar117._0_4_ = fStack_148;
    auVar117._8_4_ = fStack_140;
    auVar117._12_4_ = fStack_13c;
    lVar17 = *(longlong *)(param_1 + 0x310);
    auVar76._4_4_ = _DAT_146159bfc;
    auVar76._0_4_ = _DAT_146159bfc;
    auVar76._8_4_ = _DAT_146159bfc;
    auVar76._12_4_ = _DAT_146159bfc;
    auVar22._0_4_ = fStack_148 + fStack_148;
    auVar22._4_4_ = fStack_144 + fStack_144;
    auVar22._8_4_ = fStack_140 + fStack_140;
    auVar22._12_4_ = fStack_13c + fStack_13c;
    auVar56 = vshufps_avx(auVar117,auVar117,0xc9);
    auVar45 = vshufps_avx(auVar117,auVar117,0xd2);
    auVar117 = vshufps_avx(auVar22,auVar22,0xc9);
    auVar121 = vshufps_avx(auVar22,auVar22,0xd2);
    auVar82._0_4_ = auVar45._0_4_ * auVar22._0_4_ + auVar117._0_4_ * fStack_13c;
    auVar82._4_4_ = auVar45._4_4_ * auVar22._4_4_ + auVar117._4_4_ * fStack_13c;
    auVar82._8_4_ = auVar45._8_4_ * auVar22._8_4_ + auVar117._8_4_ * fStack_13c;
    auVar82._12_4_ = auVar45._12_4_ * auVar22._12_4_ + auVar117._12_4_ * fStack_13c;
    auVar39._0_4_ = -(fStack_13c * auVar121._0_4_) + auVar56._0_4_ * auVar22._0_4_;
    auVar39._4_4_ = -(fStack_13c * auVar121._4_4_) + auVar56._4_4_ * auVar22._4_4_;
    auVar39._8_4_ = -(fStack_13c * auVar121._8_4_) + auVar56._8_4_ * auVar22._8_4_;
    auVar39._12_4_ = -(fStack_13c * auVar121._12_4_) + auVar56._12_4_ * auVar22._12_4_;
    auVar46._0_4_ = -(auVar121._0_4_ * auVar45._0_4_) - (auVar56._0_4_ * auVar117._0_4_ - fVar51);
    auVar46._4_4_ = -(auVar121._4_4_ * auVar45._4_4_) - (auVar56._4_4_ * auVar117._4_4_ - fVar69);
    auVar46._8_4_ = -(auVar121._8_4_ * auVar45._8_4_) - (auVar56._8_4_ * auVar117._8_4_ - fVar70);
    auVar46._12_4_ =
         -(auVar121._12_4_ * auVar45._12_4_) - (auVar56._12_4_ * auVar117._12_4_ - fVar71);
    auVar56 = vblendps_avx(auVar82,auVar39,2);
    auVar45 = vblendps_avx(auVar46,auVar82,2);
    auVar117 = vblendps_avx(auVar39,auVar46,2);
    auVar45 = vblendps_avx(auVar39,auVar45,3);
    *(undefined1 (*) [16])(lVar17 + 0x80) = auVar45;
    auVar45 = vblendps_avx(auVar82,auVar117,3);
    *(undefined1 (*) [16])(lVar17 + 0x90) = auVar45;
    auVar56 = vblendps_avx(auVar46,auVar56,3);
    *(undefined1 (*) [16])(lVar17 + 0xa0) = auVar56;
    *(undefined1 (*) [16])(lVar17 + 0xb0) = ZEXT416(0) << 0x20;
    fVar7 = _DAT_14615ad78;
    fVar6 = _DAT_145fc6f48;
    fVar43 = _DAT_145fc6ed8;
    pfVar2 = *(float **)(param_2 + 0x10);
    lVar17 = *(longlong *)(param_1 + 0x310);
    auVar56 = *(undefined1 (*) [16])(pfVar2 + 4);
    auVar45 = *(undefined1 (*) [16])(pfVar2 + 8);
    fVar125 = *(float *)(lVar17 + 0x80);
    fVar27 = *(float *)(lVar17 + 0x84);
    fVar28 = *(float *)(lVar17 + 0x88);
    fVar29 = *(float *)(lVar17 + 0x8c);
    fVar30 = *pfVar2;
    fVar35 = pfVar2[1];
    fVar36 = pfVar2[2];
    fVar37 = pfVar2[3];
    auVar117 = *(undefined1 (*) [16])(pfVar2 + 0xc);
    auVar121 = vshufps_avx(auVar45,auVar56,0x33);
    auVar21 = vshufps_avx(auVar56,auVar121,0x8f);
    auVar53._0_4_ = fVar125 * fVar125;
    auVar53._4_4_ = fVar27 * fVar27;
    auVar53._8_4_ = fVar28 * fVar28;
    auVar53._12_4_ = fVar29 * fVar29;
    auVar121 = vblendps_avx(auVar53,ZEXT416(0) << 0x20,8);
    auVar121 = vhaddps_avx(auVar121,auVar121);
    auVar85 = vhaddps_avx(auVar121,auVar121);
    auVar121 = vrsqrtps_avx(auVar85);
    fVar63 = auVar121._0_4_;
    fVar119 = auVar121._4_4_;
    fVar123 = auVar121._8_4_;
    fVar124 = auVar121._12_4_;
    auVar121 = vcmpps_avx(auVar76,auVar85,2);
    auVar54._0_4_ =
         (float)(auVar121._0_4_ &
                (uint)(((fVar101 * fVar63 * fVar63 * auVar85._0_4_ - fVar101) * fVar63 + fVar63) *
                      auVar85._0_4_));
    auVar54._4_4_ =
         (float)(auVar121._4_4_ &
                (uint)(((fVar102 * fVar119 * fVar119 * auVar85._4_4_ - fVar102) * fVar119 + fVar119)
                      * auVar85._4_4_));
    auVar54._8_4_ =
         (float)(auVar121._8_4_ &
                (uint)(((fVar103 * fVar123 * fVar123 * auVar85._8_4_ - fVar103) * fVar123 + fVar123)
                      * auVar85._8_4_));
    auVar54._12_4_ =
         (float)(auVar121._12_4_ &
                (uint)(((fVar104 * fVar124 * fVar124 * auVar85._12_4_ - fVar104) * fVar124 + fVar124
                       ) * auVar85._12_4_));
    auVar121 = vrcpps_avx(auVar54);
    auVar111._0_4_ = auVar100._0_4_ ^ (uint)auVar54._0_4_;
    auVar111._4_4_ = auVar100._4_4_ ^ (uint)auVar54._4_4_;
    auVar111._8_4_ = auVar100._8_4_ ^ (uint)auVar54._8_4_;
    auVar111._12_4_ = auVar100._12_4_ ^ (uint)auVar54._12_4_;
    fVar119 = auVar121._0_4_;
    fVar123 = auVar121._4_4_;
    fVar124 = auVar121._8_4_;
    fVar63 = auVar121._12_4_;
    auVar115._0_4_ = -((auVar54._0_4_ * fVar119 - fVar51) * fVar119) + fVar119;
    auVar115._4_4_ = -((auVar54._4_4_ * fVar123 - fVar69) * fVar123) + fVar123;
    auVar115._8_4_ = -((auVar54._8_4_ * fVar124 - fVar70) * fVar124) + fVar124;
    auVar115._12_4_ = -((auVar54._12_4_ * fVar63 - fVar71) * fVar63) + fVar63;
    auVar121 = vcmpps_avx(auVar111,auVar54,0);
    auVar112._0_4_ = (auVar21._0_4_ + fVar51) * *(float *)(lVar17 + 0xb0);
    auVar112._4_4_ = (auVar21._4_4_ + fVar69) * *(float *)(lVar17 + 0xb4);
    auVar112._8_4_ = (auVar21._8_4_ + fVar70) * *(float *)(lVar17 + 0xb8);
    auVar112._12_4_ = (auVar21._12_4_ + fVar71) * *(float *)(lVar17 + 0xbc);
    auVar121 = vblendvps_avx(auVar115,auVar107._0_16_,auVar121);
    fVar63 = auVar121._0_4_;
    auVar120._0_4_ = fVar63 * *(float *)(lVar17 + 0x90);
    fVar119 = auVar121._4_4_;
    auVar120._4_4_ = fVar119 * *(float *)(lVar17 + 0x94);
    fVar123 = auVar121._8_4_;
    auVar120._8_4_ = fVar123 * *(float *)(lVar17 + 0x98);
    fVar124 = auVar121._12_4_;
    auVar120._12_4_ = fVar124 * *(float *)(lVar17 + 0x9c);
    auVar116._0_4_ = fVar63 * *(float *)(lVar17 + 0xa0);
    auVar116._4_4_ = fVar119 * *(float *)(lVar17 + 0xa4);
    auVar116._8_4_ = fVar123 * *(float *)(lVar17 + 0xa8);
    auVar116._12_4_ = fVar124 * *(float *)(lVar17 + 0xac);
    auVar83._0_4_ = fVar125 * fVar63;
    auVar83._4_4_ = fVar27 * fVar119;
    auVar83._8_4_ = fVar28 * fVar123;
    auVar83._12_4_ = fVar29 * fVar124;
    auVar121 = vshufps_avx(auVar83,auVar83,0x55);
    fVar125 = auVar56._0_4_;
    fVar27 = auVar56._4_4_;
    fVar28 = auVar56._8_4_;
    fVar29 = auVar56._12_4_;
    auVar56 = vshufps_avx(auVar120,auVar120,0x55);
    auVar85 = vshufps_avx(auVar116,auVar116,0x55);
    auVar21 = vshufps_avx(auVar112,auVar112,0x55);
    auVar38 = vshufps_avx(auVar83,auVar83,0xaa);
    fVar63 = auVar45._0_4_;
    fVar119 = auVar45._4_4_;
    fVar123 = auVar45._8_4_;
    fVar124 = auVar45._12_4_;
    auVar45 = vshufps_avx(auVar120,auVar120,0xaa);
    auVar93._0_4_ = fVar63 * auVar45._0_4_ + fVar125 * auVar56._0_4_ + auVar120._0_4_ * fVar30;
    auVar93._4_4_ = fVar119 * auVar45._4_4_ + fVar27 * auVar56._4_4_ + auVar120._0_4_ * fVar35;
    auVar93._8_4_ = fVar123 * auVar45._8_4_ + fVar28 * auVar56._8_4_ + auVar120._0_4_ * fVar36;
    auVar93._12_4_ = fVar124 * auVar45._12_4_ + fVar29 * auVar56._12_4_ + auVar120._0_4_ * fVar37;
    auVar56 = vshufps_avx(auVar116,auVar116,0xaa);
    auVar114._4_4_ = _DAT_145fc6f48;
    auVar114._0_4_ = _DAT_145fc6f48;
    auVar114._8_4_ = _DAT_145fc6f48;
    auVar114._12_4_ = _DAT_145fc6f48;
    auVar106._0_4_ = fVar63 * auVar56._0_4_ + fVar125 * auVar85._0_4_ + auVar116._0_4_ * fVar30;
    auVar106._4_4_ = fVar119 * auVar56._4_4_ + fVar27 * auVar85._4_4_ + auVar116._0_4_ * fVar35;
    auVar106._8_4_ = fVar123 * auVar56._8_4_ + fVar28 * auVar85._8_4_ + auVar116._0_4_ * fVar36;
    auVar106._12_4_ = fVar124 * auVar56._12_4_ + fVar29 * auVar85._12_4_ + auVar116._0_4_ * fVar37;
    auVar56 = vshufps_avx(auVar112,auVar112,0xaa);
    auVar96._0_4_ =
         fVar63 * auVar56._0_4_ + fVar125 * auVar21._0_4_ + fVar30 * auVar112._0_4_ + auVar117._0_4_
    ;
    auVar96._4_4_ =
         fVar119 * auVar56._4_4_ + fVar27 * auVar21._4_4_ + fVar35 * auVar112._0_4_ + auVar117._4_4_
    ;
    auVar96._8_4_ =
         fVar123 * auVar56._8_4_ + fVar28 * auVar21._8_4_ + fVar36 * auVar112._0_4_ + auVar117._8_4_
    ;
    auVar96._12_4_ =
         fVar124 * auVar56._12_4_ +
         fVar29 * auVar21._12_4_ + fVar37 * auVar112._0_4_ + auVar117._12_4_;
    *(float *)(lVar17 + 0x80) =
         fVar63 * auVar38._0_4_ + fVar125 * auVar121._0_4_ + auVar83._0_4_ * fVar30;
    *(float *)(lVar17 + 0x84) =
         fVar119 * auVar38._4_4_ + fVar27 * auVar121._4_4_ + auVar83._0_4_ * fVar35;
    *(float *)(lVar17 + 0x88) =
         fVar123 * auVar38._8_4_ + fVar28 * auVar121._8_4_ + auVar83._0_4_ * fVar36;
    *(float *)(lVar17 + 0x8c) =
         fVar124 * auVar38._12_4_ + fVar29 * auVar121._12_4_ + auVar83._0_4_ * fVar37;
    fVar101 = _DAT_145fc6f08;
    auVar56 = vblendps_avx(auVar96,auVar117,8);
    auVar23._0_4_ = fVar6 + auVar54._0_4_;
    auVar23._4_4_ = fVar6 + auVar54._4_4_;
    auVar23._8_4_ = fVar6 + auVar54._8_4_;
    auVar23._12_4_ = fVar6 + auVar54._12_4_;
    auVar55._0_4_ = auVar122._0_4_ * auVar56._0_4_;
    auVar55._4_4_ = auVar122._4_4_ * auVar56._4_4_;
    auVar55._8_4_ = auVar122._8_4_ * auVar56._8_4_;
    auVar55._12_4_ = auVar122._12_4_ * auVar56._12_4_;
    auVar45 = vinsertps_avx(auVar93,auVar23,0x30);
    auVar121 = vinsertps_avx(auVar106,auVar23,0xb0);
    auVar107 = ZEXT1664(auVar107._0_16_);
    auVar85 = vroundps_avx(auVar55,3);
    *(undefined1 (*) [16])(lVar17 + 0x90) = auVar45;
    *(undefined1 (*) [16])(lVar17 + 0xa0) = auVar121;
    auVar84._0_4_ = auVar85._0_4_ * fVar7 + auVar56._0_4_;
    auVar84._4_4_ = auVar85._4_4_ * fVar7 + auVar56._4_4_;
    auVar84._8_4_ = auVar85._8_4_ * fVar7 + auVar56._8_4_;
    auVar84._12_4_ = auVar85._12_4_ * fVar7 + auVar56._12_4_;
    auVar56._0_4_ = (int)auVar85._0_4_;
    auVar56._4_4_ = (int)auVar85._4_4_;
    auVar56._8_4_ = (int)auVar85._8_4_;
    auVar56._12_4_ = (int)auVar85._12_4_;
    auVar45 = vpackssdw_avx(auVar56,auVar56);
    auVar56 = vblendps_avx(auVar96,auVar84,3);
    sVar50 = auVar45._0_2_;
    auVar4._0_2_ = sVar50 + auVar117._0_2_;
    sVar62 = auVar45._2_2_;
    auVar4._2_2_ = sVar62 + auVar117._2_2_;
    auVar4._4_2_ = sVar50 + auVar117._4_2_;
    auVar4._6_2_ = sVar62 + auVar117._6_2_;
    auVar4._8_2_ = sVar50 + auVar117._8_2_;
    auVar4._10_2_ = sVar62 + auVar117._10_2_;
    auVar4._12_2_ = sVar50 + auVar117._12_2_;
    auVar4._14_2_ = sVar62 + auVar117._14_2_;
    auVar100 = ZEXT1664(auVar100._0_16_);
    auVar56 = vblendps_avx(auVar56,auVar4,8);
    auVar45 = vpunpckhwd_avx(auVar56,auVar56);
    auVar45 = vpsrad_avx(auVar45,0x10);
    auVar45 = vcvtdq2ps_avx(auVar45);
    auVar45 = vshufpd_avx(auVar45,auVar45,3);
    auVar40._0_4_ = auVar45._0_4_ * _DAT_146159c90 + auVar56._0_4_;
    auVar40._4_4_ = auVar45._4_4_ * _UNK_146159c94 + auVar56._4_4_;
    auVar40._8_4_ = auVar45._8_4_ * _UNK_146159c98 + auVar56._8_4_;
    auVar40._12_4_ = auVar45._12_4_ * _UNK_146159c9c + auVar56._12_4_;
    *(undefined1 (*) [16])(lVar17 + 0xb0) = auVar40;
    *(undefined1 *)(*(longlong *)(param_1 + 0x310) + 0x2a9) = 1;
    auVar122 = ZEXT1664(auVar122._0_16_);
    fVar51 = fVar43;
  }
  else {
    lVar17 = *(longlong *)(param_1 + 0x310);
    *(undefined1 (*) [16])(lVar17 + 0x80) = ZEXT416((uint)_DAT_145fc6ed8);
    *(undefined8 *)(lVar17 + 0x90) = uVar12;
    *(undefined8 *)(lVar17 + 0x98) = 0;
    *(undefined8 *)(lVar17 + 0xa0) = uVar10;
    *(undefined8 *)(lVar17 + 0xa8) = uVar11;
    *(undefined1 (*) [16])(lVar17 + 0xb0) = auVar18;
    *(undefined1 *)(*(longlong *)(param_1 + 0x310) + 0x2a9) = 0;
  }
  auVar118 = ZEXT1664(auVar114);
  auVar24._4_4_ = _DAT_145fc6f70;
  auVar24._0_4_ = _DAT_145fc6f70;
  auVar24._8_4_ = _DAT_145fc6f70;
  auVar24._12_4_ = _DAT_145fc6f70;
  auVar31._0_4_ = _DAT_145fc6f4c & *(uint *)(param_1 + 0x90);
  auVar31._4_4_ = _DAT_145fc6f4c & *(uint *)(param_1 + 0x94);
  auVar31._8_4_ = _DAT_145fc6f4c & *(uint *)(param_1 + 0x98);
  auVar31._12_4_ = _DAT_145fc6f4c & *(uint *)(param_1 + 0x9c);
  auVar56 = vcmpps_avx(auVar31,auVar24,0x11);
  uVar14 = vmovmskps_avx(auVar56);
  fVar63 = fVar51;
  fVar119 = fVar51;
  fVar123 = fVar51;
  fVar124 = fVar101;
  fVar125 = fVar101;
  fVar27 = fVar101;
  if ((~(byte)uVar14 & 7) == 0) {
    auVar32._0_4_ = _DAT_145fc6f4c & *(uint *)(param_1 + 0xa0);
    auVar32._4_4_ = _DAT_145fc6f4c & *(uint *)(param_1 + 0xa4);
    auVar32._8_4_ = _DAT_145fc6f4c & *(uint *)(param_1 + 0xa8);
    auVar32._12_4_ = _DAT_145fc6f4c & *(uint *)(param_1 + 0xac);
    auVar56 = vcmpps_avx(auVar32,auVar24,0x11);
    uVar14 = vmovmskps_avx(auVar56);
    if ((~(byte)uVar14 & 7) != 0) goto LAB_14016f8fc;
    auVar33._0_4_ = _DAT_145fc6f4c & *(uint *)(param_1 + 0xb0);
    auVar33._4_4_ = _DAT_145fc6f4c & *(uint *)(param_1 + 0xb4);
    auVar33._8_4_ = _DAT_145fc6f4c & *(uint *)(param_1 + 0xb8);
    auVar33._12_4_ = _DAT_145fc6f4c & *(uint *)(param_1 + 0xbc);
    auVar56 = vcmpps_avx(auVar33,auVar24,0x11);
    uVar14 = vmovmskps_avx(auVar56);
    if ((~(byte)uVar14 & 7) != 0) goto LAB_14016f8fc;
    auVar19._0_4_ = _DAT_145fc6f4c & *(uint *)(param_1 + 0xc0);
    auVar19._4_4_ = _DAT_145fc6f4c & *(uint *)(param_1 + 0xc4);
    auVar19._8_4_ = _DAT_145fc6f4c & *(uint *)(param_1 + 200);
    auVar19._12_4_ = _DAT_145fc6f4c & *(uint *)(param_1 + 0xcc);
    auVar56 = vcmpps_avx(auVar19,auVar24,0x11);
    uVar14 = vmovmskps_avx(auVar56);
    if ((~(byte)uVar14 & 7) != 0) goto LAB_14016f8fc;
  }
  else {
LAB_14016f8fc:
    lVar17 = FUN_144e258a0(*(undefined8 *)(param_1 + 0x410));
    if (lVar17 == 0) {
      FUN_1453fe500(param_2,*(undefined2 *)(param_1 + 0x43c),param_1 + 0x90);
    }
    else {
      FUN_144ec0a70(lVar17,*(undefined2 *)(param_1 + 0x43c),param_1 + 0x90);
      FUN_144e3c9c0(param_2,&fStack_148,*(undefined2 *)(param_1 + 0x43c));
      *(ulonglong *)(param_1 + 0xc0) = CONCAT44(fStack_144,fStack_148);
      *(ulonglong *)(param_1 + 200) = CONCAT44(fStack_13c,fStack_140);
    }
  }
  lVar17 = *(longlong *)(param_1 + 0x408);
  auVar89 = ZEXT1664(*(undefined1 (*) [16])(lVar17 + 0xe0));
  uVar14 = *(undefined4 *)(lVar17 + 0x154);
  cVar13 = func_0x000145090400(uVar14);
  auVar56 = auVar100._0_16_;
  auVar121 = auVar122._0_16_;
  auVar117 = auVar118._0_16_;
  auVar45 = auVar107._0_16_;
  if (cVar13 == '\0') {
LAB_14016f735:
    if ((*(byte *)(lVar17 + 0x14c) & 0x10) == 0) {
      pauVar1 = *(undefined1 (**) [16])(param_2 + 0x10);
      auVar56 = pauVar1[1];
      auVar45 = pauVar1[2];
      auVar117 = pauVar1[3];
      auVar121 = *pauVar1;
      auVar21 = vshufps_avx(auVar45,auVar56,0x33);
      auVar85 = vpunpckhwd_avx(auVar117,auVar117);
      auVar21 = vshufps_avx(auVar56,auVar21,0x8f);
      auVar85 = vpsrad_avx(auVar85,0x10);
      fVar51 = auVar21._0_4_ + fVar51;
      fVar63 = auVar21._4_4_ + fVar63;
      fVar119 = auVar21._8_4_ + fVar119;
      fVar123 = auVar21._12_4_ + fVar123;
      auVar41._0_4_ = fVar51 * *(float *)(param_1 + 0xc0);
      auVar41._4_4_ = fVar63 * *(float *)(param_1 + 0xc4);
      auVar41._8_4_ = fVar119 * *(float *)(param_1 + 200);
      auVar41._12_4_ = fVar123 * *(float *)(param_1 + 0xcc);
      auVar64._0_4_ = fVar51 * *(float *)(param_1 + 0xb0);
      auVar64._4_4_ = fVar63 * *(float *)(param_1 + 0xb4);
      auVar64._8_4_ = fVar119 * *(float *)(param_1 + 0xb8);
      auVar64._12_4_ = fVar123 * *(float *)(param_1 + 0xbc);
      auVar77._0_4_ = fVar51 * *(float *)(param_1 + 0xa0);
      auVar77._4_4_ = fVar63 * *(float *)(param_1 + 0xa4);
      auVar77._8_4_ = fVar119 * *(float *)(param_1 + 0xa8);
      auVar77._12_4_ = fVar123 * *(float *)(param_1 + 0xac);
      auVar57._0_4_ = fVar51 * *(float *)(param_1 + 0x90);
      auVar57._4_4_ = fVar63 * *(float *)(param_1 + 0x94);
      auVar57._8_4_ = fVar119 * *(float *)(param_1 + 0x98);
      auVar57._12_4_ = fVar123 * *(float *)(param_1 + 0x9c);
      auVar85 = vcvtdq2ps_avx(auVar85);
      auVar85 = vshufpd_avx(auVar85,auVar85,3);
      auVar21 = vshufps_avx(auVar57,auVar57,0x55);
      auVar38 = vshufps_avx(auVar57,auVar57,0xaa);
      fVar30 = auVar121._0_4_;
      fVar35 = auVar121._4_4_;
      fVar36 = auVar121._8_4_;
      fVar37 = auVar121._12_4_;
      fVar125 = auVar56._0_4_;
      fVar27 = auVar56._4_4_;
      fVar28 = auVar56._8_4_;
      fVar29 = auVar56._12_4_;
      auVar56 = vshufps_avx(auVar77,auVar77,0x55);
      fVar63 = auVar45._0_4_;
      fStack_148 = fVar63 * auVar38._0_4_ + fVar125 * auVar21._0_4_ + fVar30 * auVar57._0_4_;
      fVar119 = auVar45._4_4_;
      fStack_144 = fVar119 * auVar38._4_4_ + fVar27 * auVar21._4_4_ + fVar35 * auVar57._0_4_;
      fVar123 = auVar45._8_4_;
      fStack_140 = fVar123 * auVar38._8_4_ + fVar28 * auVar21._8_4_ + fVar36 * auVar57._0_4_;
      fVar124 = auVar45._12_4_;
      fStack_13c = fVar124 * auVar38._12_4_ + fVar29 * auVar21._12_4_ + fVar37 * auVar57._0_4_;
      auVar45 = vshufps_avx(auVar77,auVar77,0xaa);
      auVar121 = vshufps_avx(auVar64,auVar64,0x55);
      fStack_138 = fVar63 * auVar45._0_4_ + fVar125 * auVar56._0_4_ + fVar30 * auVar77._0_4_;
      fStack_134 = fVar119 * auVar45._4_4_ + fVar27 * auVar56._4_4_ + fVar35 * auVar77._0_4_;
      fStack_130 = fVar123 * auVar45._8_4_ + fVar28 * auVar56._8_4_ + fVar36 * auVar77._0_4_;
      fStack_12c = fVar124 * auVar45._12_4_ + fVar29 * auVar56._12_4_ + fVar37 * auVar77._0_4_;
      auVar56 = vshufps_avx(auVar64,auVar64,0xaa);
      auVar45 = vshufps_avx(auVar41,auVar41,0x55);
      auVar21 = vshufps_avx(auVar41,auVar41,0xaa);
      fStack_128 = fVar63 * auVar56._0_4_ + fVar125 * auVar121._0_4_ + fVar30 * auVar64._0_4_;
      fStack_124 = fVar119 * auVar56._4_4_ + fVar27 * auVar121._4_4_ + fVar35 * auVar64._0_4_;
      fStack_120 = fVar123 * auVar56._8_4_ + fVar28 * auVar121._8_4_ + fVar36 * auVar64._0_4_;
      fStack_11c = fVar124 * auVar56._12_4_ + fVar29 * auVar121._12_4_ + fVar37 * auVar64._0_4_;
      fStack_118 = fVar63 * auVar21._0_4_ +
                   fVar125 * auVar45._0_4_ +
                   fVar30 * auVar41._0_4_ + auVar85._0_4_ * _DAT_146159c90 + auVar117._0_4_;
      fStack_114 = fVar119 * auVar21._4_4_ +
                   fVar27 * auVar45._4_4_ +
                   fVar35 * auVar41._0_4_ + auVar85._4_4_ * _UNK_146159c94 + auVar117._4_4_;
      fStack_110 = fVar123 * auVar21._8_4_ +
                   fVar28 * auVar45._8_4_ +
                   fVar36 * auVar41._0_4_ + auVar85._8_4_ * _UNK_146159c98 + auVar117._8_4_;
      fStack_10c = fVar124 * auVar21._12_4_ +
                   fVar29 * auVar45._12_4_ +
                   fVar37 * auVar41._0_4_ + auVar85._12_4_ * _UNK_146159c9c + auVar117._12_4_;
      uVar14 = func_0x000145281cb0(*(undefined1 *)(param_1 + 0x482));
      FUN_14016fc20(&uStack_108,&fStack_148,uVar14);
      puVar16 = *(undefined8 **)(param_1 + 0x310);
    }
    else {
      cVar13 = func_0x000144da4370(uVar14);
      if (cVar13 == '\0') {
        FUN_144eaac60(param_2,auStack_168,*(undefined2 *)(param_1 + 0x444));
        auVar56 = auVar100._0_16_;
        auVar121 = auVar122._0_16_;
        auVar117 = auVar118._0_16_;
        auVar45 = auVar107._0_16_;
        auVar8._12_4_ = fStack_15c;
        auVar8._0_12_ = auStack_168;
        lVar17 = *(longlong *)(param_1 + 0x310);
        auVar26._0_4_ = auStack_168._0_4_ + auStack_168._0_4_;
        auVar26._4_4_ = auStack_168._4_4_ + auStack_168._4_4_;
        auVar26._8_4_ = auStack_168._8_4_ + auStack_168._8_4_;
        auVar26._12_4_ = fStack_15c + fStack_15c;
        auVar85 = vshufps_avx(auVar8,auVar8,0xc9);
        auVar21 = vshufps_avx(auVar8,auVar8,0xd2);
        auVar38 = vshufps_avx(auVar26,auVar26,0xc9);
        auVar44 = vshufps_avx(auVar26,auVar26,0xd2);
        auVar88._0_4_ = auVar21._0_4_ * auVar26._0_4_ + auVar38._0_4_ * fStack_15c;
        auVar88._4_4_ = auVar21._4_4_ * auVar26._4_4_ + auVar38._4_4_ * fStack_15c;
        auVar88._8_4_ = auVar21._8_4_ * auVar26._8_4_ + auVar38._8_4_ * fStack_15c;
        auVar88._12_4_ = auVar21._12_4_ * auVar26._12_4_ + auVar38._12_4_ * fStack_15c;
        auVar42._0_4_ = -(fStack_15c * auVar44._0_4_) + auVar85._0_4_ * auVar26._0_4_;
        auVar42._4_4_ = -(fStack_15c * auVar44._4_4_) + auVar85._4_4_ * auVar26._4_4_;
        auVar42._8_4_ = -(fStack_15c * auVar44._8_4_) + auVar85._8_4_ * auVar26._8_4_;
        auVar42._12_4_ = -(fStack_15c * auVar44._12_4_) + auVar85._12_4_ * auVar26._12_4_;
        auVar49._0_4_ = -(auVar44._0_4_ * auVar21._0_4_) - (auVar85._0_4_ * auVar38._0_4_ - fVar51);
        auVar49._4_4_ = -(auVar44._4_4_ * auVar21._4_4_) - (auVar85._4_4_ * auVar38._4_4_ - fVar63);
        auVar49._8_4_ = -(auVar44._8_4_ * auVar21._8_4_) - (auVar85._8_4_ * auVar38._8_4_ - fVar119)
        ;
        auVar49._12_4_ =
             -(auVar44._12_4_ * auVar21._12_4_) - (auVar85._12_4_ * auVar38._12_4_ - fVar123);
        auVar85 = vblendps_avx(auVar88,auVar42,2);
        auVar21 = vblendps_avx(auVar49,auVar88,2);
        auVar38 = vblendps_avx(auVar42,auVar49,2);
        auVar21 = vblendps_avx(auVar42,auVar21,3);
        *(undefined1 (*) [16])(lVar17 + 0x40) = auVar21;
        auVar21 = vblendps_avx(auVar88,auVar38,3);
        *(undefined1 (*) [16])(lVar17 + 0x50) = auVar21;
        auVar85 = vblendps_avx(auVar49,auVar85,3);
        goto LAB_14016f9c5;
      }
      puVar16 = *(undefined8 **)(param_1 + 0x310);
      uStack_108 = *puVar16;
      uStack_100 = puVar16[1];
      uStack_f8 = puVar16[2];
      uStack_f0 = puVar16[3];
      uStack_e8 = puVar16[4];
      uStack_e0 = puVar16[5];
      uStack_d8 = puVar16[6];
      uStack_d0 = puVar16[7];
    }
    puVar16[0xc] = uStack_e8;
    puVar16[0xd] = uStack_e0;
    puVar16[0xe] = uStack_d8;
    puVar16[0xf] = uStack_d0;
    puVar16[8] = uStack_108;
    puVar16[9] = uStack_100;
    puVar16[10] = uStack_f8;
    puVar16[0xb] = uStack_f0;
  }
  else {
    auVar21 = auVar89._0_16_;
    auVar85 = vcmpps_avx(auVar21,_DAT_145fc6ee0,4);
    uVar15 = vmovmskps_avx(auVar85);
    if ((char)uVar15 == '\0') goto LAB_14016f735;
    auVar20._0_4_ = auVar89._0_4_ + auVar89._0_4_;
    auVar20._4_4_ = auVar89._4_4_ + auVar89._4_4_;
    auVar20._8_4_ = auVar89._8_4_ + auVar89._8_4_;
    auVar20._12_4_ = auVar89._12_4_ + auVar89._12_4_;
    auVar85 = vshufps_avx(auVar21,auVar21,0xff);
    auVar38 = vshufps_avx(auVar21,auVar21,0xc9);
    auVar21 = vshufps_avx(auVar21,auVar21,0xd2);
    lVar17 = *(longlong *)(param_1 + 0x310);
    auVar44 = vshufps_avx(auVar20,auVar20,0xc9);
    auVar18 = vshufps_avx(auVar20,auVar20,0xd2);
    auVar86._0_4_ = auVar21._0_4_ * auVar20._0_4_ + auVar44._0_4_ * auVar85._0_4_;
    auVar86._4_4_ = auVar21._4_4_ * auVar20._4_4_ + auVar44._4_4_ * auVar85._4_4_;
    auVar86._8_4_ = auVar21._8_4_ * auVar20._8_4_ + auVar44._8_4_ * auVar85._8_4_;
    auVar86._12_4_ = auVar21._12_4_ * auVar20._12_4_ + auVar44._12_4_ * auVar85._12_4_;
    auVar34._0_4_ = -(auVar85._0_4_ * auVar18._0_4_) + auVar38._0_4_ * auVar20._0_4_;
    auVar34._4_4_ = -(auVar85._4_4_ * auVar18._4_4_) + auVar38._4_4_ * auVar20._4_4_;
    auVar34._8_4_ = -(auVar85._8_4_ * auVar18._8_4_) + auVar38._8_4_ * auVar20._8_4_;
    auVar34._12_4_ = -(auVar85._12_4_ * auVar18._12_4_) + auVar38._12_4_ * auVar20._12_4_;
    auVar47._0_4_ = -(auVar18._0_4_ * auVar21._0_4_) - (auVar38._0_4_ * auVar44._0_4_ - fVar51);
    auVar47._4_4_ = -(auVar18._4_4_ * auVar21._4_4_) - (auVar38._4_4_ * auVar44._4_4_ - fVar63);
    auVar47._8_4_ = -(auVar18._8_4_ * auVar21._8_4_) - (auVar38._8_4_ * auVar44._8_4_ - fVar119);
    auVar47._12_4_ =
         -(auVar18._12_4_ * auVar21._12_4_) - (auVar38._12_4_ * auVar44._12_4_ - fVar123);
    auVar85 = vblendps_avx(auVar86,auVar34,2);
    auVar21 = vblendps_avx(auVar47,auVar86,2);
    auVar38 = vblendps_avx(auVar34,auVar47,2);
    auVar21 = vblendps_avx(auVar34,auVar21,3);
    *(undefined1 (*) [16])(lVar17 + 0x40) = auVar21;
    auVar21 = vblendps_avx(auVar86,auVar38,3);
    *(undefined1 (*) [16])(lVar17 + 0x50) = auVar21;
    auVar85 = vblendps_avx(auVar47,auVar85,3);
LAB_14016f9c5:
    auVar48._0_12_ = ZEXT812(0);
    auVar48._12_4_ = 0;
    *(undefined1 (*) [16])(lVar17 + 0x60) = auVar85;
    *(undefined1 (*) [16])(lVar17 + 0x70) = auVar48;
    pfVar2 = *(float **)(param_2 + 0x10);
    lVar17 = *(longlong *)(param_1 + 0x310);
    auVar85 = *(undefined1 (*) [16])(pfVar2 + 4);
    auVar21 = *(undefined1 (*) [16])(pfVar2 + 8);
    fVar36 = *(float *)(lVar17 + 0x40);
    fVar37 = *(float *)(lVar17 + 0x44);
    fVar43 = *(float *)(lVar17 + 0x48);
    fVar6 = *(float *)(lVar17 + 0x4c);
    fVar7 = *pfVar2;
    fVar69 = pfVar2[1];
    fVar70 = pfVar2[2];
    fVar71 = pfVar2[3];
    auVar38 = *(undefined1 (*) [16])(pfVar2 + 0xc);
    auVar44 = vshufps_avx(auVar21,auVar85,0x33);
    auVar44 = vshufps_avx(auVar85,auVar44,0x8f);
    auVar58._0_4_ = fVar36 * fVar36;
    auVar58._4_4_ = fVar37 * fVar37;
    auVar58._8_4_ = fVar43 * fVar43;
    auVar58._12_4_ = fVar6 * fVar6;
    auVar87._0_4_ = (auVar44._0_4_ + fVar51) * *(float *)(lVar17 + 0x70);
    auVar87._4_4_ = (auVar44._4_4_ + fVar63) * *(float *)(lVar17 + 0x74);
    auVar87._8_4_ = (auVar44._8_4_ + fVar119) * *(float *)(lVar17 + 0x78);
    auVar87._12_4_ = (auVar44._12_4_ + fVar123) * *(float *)(lVar17 + 0x7c);
    auVar44 = vblendps_avx(auVar58,auVar48,8);
    auVar44 = vhaddps_avx(auVar44,auVar44);
    auVar18 = vhaddps_avx(auVar44,auVar44);
    auVar44 = vrsqrtps_avx(auVar18);
    fVar28 = auVar44._0_4_;
    fVar29 = auVar44._4_4_;
    fVar30 = auVar44._8_4_;
    fVar35 = auVar44._12_4_;
    auVar97._4_4_ = _DAT_146159bfc;
    auVar97._0_4_ = _DAT_146159bfc;
    auVar97._8_4_ = _DAT_146159bfc;
    auVar97._12_4_ = _DAT_146159bfc;
    auVar44 = vcmpps_avx(auVar97,auVar18,2);
    auVar59._0_4_ =
         (float)(auVar44._0_4_ &
                (uint)(((fVar28 * fVar28 * auVar18._0_4_ * fVar101 - fVar101) * fVar28 + fVar28) *
                      auVar18._0_4_));
    auVar59._4_4_ =
         (float)(auVar44._4_4_ &
                (uint)(((fVar29 * fVar29 * auVar18._4_4_ * fVar124 - fVar124) * fVar29 + fVar29) *
                      auVar18._4_4_));
    auVar59._8_4_ =
         (float)(auVar44._8_4_ &
                (uint)(((fVar30 * fVar30 * auVar18._8_4_ * fVar125 - fVar125) * fVar30 + fVar30) *
                      auVar18._8_4_));
    auVar59._12_4_ =
         (float)(auVar44._12_4_ &
                (uint)(((fVar35 * fVar35 * auVar18._12_4_ * fVar27 - fVar27) * fVar35 + fVar35) *
                      auVar18._12_4_));
    auVar44 = vrcpps_avx(auVar59);
    auVar98._0_4_ = (uint)auVar59._0_4_ ^ auVar56._0_4_;
    auVar98._4_4_ = (uint)auVar59._4_4_ ^ auVar56._4_4_;
    auVar98._8_4_ = (uint)auVar59._8_4_ ^ auVar56._8_4_;
    auVar98._12_4_ = (uint)auVar59._12_4_ ^ auVar56._12_4_;
    fVar124 = auVar44._0_4_;
    fVar125 = auVar44._4_4_;
    fVar27 = auVar44._8_4_;
    fVar28 = auVar44._12_4_;
    auVar65._0_4_ = -((auVar59._0_4_ * fVar124 - fVar51) * fVar124) + fVar124;
    auVar65._4_4_ = -((auVar59._4_4_ * fVar125 - fVar63) * fVar125) + fVar125;
    auVar65._8_4_ = -((auVar59._8_4_ * fVar27 - fVar119) * fVar27) + fVar27;
    auVar65._12_4_ = -((auVar59._12_4_ * fVar28 - fVar123) * fVar28) + fVar28;
    auVar56 = vcmpps_avx(auVar98,auVar59,0);
    auVar56 = vblendvps_avx(auVar65,auVar45,auVar56);
    fVar63 = auVar56._0_4_;
    auVar99._0_4_ = fVar63 * *(float *)(lVar17 + 0x60);
    fVar119 = auVar56._4_4_;
    auVar99._4_4_ = fVar119 * *(float *)(lVar17 + 100);
    fVar123 = auVar56._8_4_;
    auVar99._8_4_ = fVar123 * *(float *)(lVar17 + 0x68);
    fVar124 = auVar56._12_4_;
    auVar99._12_4_ = fVar124 * *(float *)(lVar17 + 0x6c);
    auVar66._0_4_ = fVar36 * fVar63;
    auVar66._4_4_ = fVar37 * fVar119;
    auVar66._8_4_ = fVar43 * fVar123;
    auVar66._12_4_ = fVar6 * fVar124;
    auVar94._0_4_ = fVar63 * *(float *)(lVar17 + 0x50);
    auVar94._4_4_ = fVar119 * *(float *)(lVar17 + 0x54);
    auVar94._8_4_ = fVar123 * *(float *)(lVar17 + 0x58);
    auVar94._12_4_ = fVar124 * *(float *)(lVar17 + 0x5c);
    auVar56 = vshufps_avx(auVar66,auVar66,0x55);
    auVar45 = vshufps_avx(auVar66,auVar66,0xaa);
    fVar27 = auVar85._0_4_;
    fVar28 = auVar85._4_4_;
    fVar29 = auVar85._8_4_;
    fVar30 = auVar85._12_4_;
    auVar85 = vshufps_avx(auVar94,auVar94,0x55);
    fVar119 = auVar21._0_4_;
    fVar123 = auVar21._4_4_;
    fVar124 = auVar21._8_4_;
    fVar125 = auVar21._12_4_;
    auVar21 = vshufps_avx(auVar94,auVar94,0xaa);
    auVar44 = vshufps_avx(auVar99,auVar99,0x55);
    *(float *)(lVar17 + 0x40) =
         fVar119 * auVar45._0_4_ + fVar27 * auVar56._0_4_ + auVar66._0_4_ * fVar7;
    *(float *)(lVar17 + 0x44) =
         fVar123 * auVar45._4_4_ + fVar28 * auVar56._4_4_ + auVar66._0_4_ * fVar69;
    *(float *)(lVar17 + 0x48) =
         fVar124 * auVar45._8_4_ + fVar29 * auVar56._8_4_ + auVar66._0_4_ * fVar70;
    *(float *)(lVar17 + 0x4c) =
         fVar125 * auVar45._12_4_ + fVar30 * auVar56._12_4_ + auVar66._0_4_ * fVar71;
    fVar63 = _DAT_14615ad78;
    auVar67._0_4_ = fVar119 * auVar21._0_4_ + fVar27 * auVar85._0_4_ + auVar94._0_4_ * fVar7;
    auVar67._4_4_ = fVar123 * auVar21._4_4_ + fVar28 * auVar85._4_4_ + auVar94._0_4_ * fVar69;
    auVar67._8_4_ = fVar124 * auVar21._8_4_ + fVar29 * auVar85._8_4_ + auVar94._0_4_ * fVar70;
    auVar67._12_4_ = fVar125 * auVar21._12_4_ + fVar30 * auVar85._12_4_ + auVar94._0_4_ * fVar71;
    auVar56 = vshufps_avx(auVar99,auVar99,0xaa);
    auVar45 = vshufps_avx(auVar87,auVar87,0x55);
    auVar85 = vshufps_avx(auVar87,auVar87,0xaa);
    auVar95._0_4_ = fVar119 * auVar56._0_4_ + fVar27 * auVar44._0_4_ + auVar99._0_4_ * fVar7;
    auVar95._4_4_ = fVar123 * auVar56._4_4_ + fVar28 * auVar44._4_4_ + auVar99._0_4_ * fVar69;
    auVar95._8_4_ = fVar124 * auVar56._8_4_ + fVar29 * auVar44._8_4_ + auVar99._0_4_ * fVar70;
    auVar95._12_4_ = fVar125 * auVar56._12_4_ + fVar30 * auVar44._12_4_ + auVar99._0_4_ * fVar71;
    auVar78._0_4_ =
         fVar119 * auVar85._0_4_ + fVar27 * auVar45._0_4_ + fVar7 * auVar87._0_4_ + auVar38._0_4_;
    auVar78._4_4_ =
         fVar123 * auVar85._4_4_ + fVar28 * auVar45._4_4_ + fVar69 * auVar87._0_4_ + auVar38._4_4_;
    auVar78._8_4_ =
         fVar124 * auVar85._8_4_ + fVar29 * auVar45._8_4_ + fVar70 * auVar87._0_4_ + auVar38._8_4_;
    auVar78._12_4_ =
         fVar125 * auVar85._12_4_ +
         fVar30 * auVar45._12_4_ + fVar71 * auVar87._0_4_ + auVar38._12_4_;
    auVar25._0_4_ = auVar117._0_4_ + auVar59._0_4_;
    auVar25._4_4_ = auVar117._4_4_ + auVar59._4_4_;
    auVar25._8_4_ = auVar117._8_4_ + auVar59._8_4_;
    auVar25._12_4_ = auVar117._12_4_ + auVar59._12_4_;
    auVar56 = vinsertps_avx(auVar67,auVar25,0x30);
    auVar45 = vinsertps_avx(auVar95,auVar25,0xb0);
    *(undefined1 (*) [16])(lVar17 + 0x50) = auVar56;
    auVar56 = vblendps_avx(auVar78,auVar38,8);
    *(undefined1 (*) [16])(lVar17 + 0x60) = auVar45;
    auVar60._0_4_ = auVar121._0_4_ * auVar56._0_4_;
    auVar60._4_4_ = auVar121._4_4_ * auVar56._4_4_;
    auVar60._8_4_ = auVar121._8_4_ * auVar56._8_4_;
    auVar60._12_4_ = auVar121._12_4_ * auVar56._12_4_;
    auVar45 = vroundps_avx(auVar60,3);
    auVar68._0_4_ = auVar45._0_4_ * fVar63 + auVar56._0_4_;
    auVar68._4_4_ = auVar45._4_4_ * fVar63 + auVar56._4_4_;
    auVar68._8_4_ = auVar45._8_4_ * fVar63 + auVar56._8_4_;
    auVar68._12_4_ = auVar45._12_4_ * fVar63 + auVar56._12_4_;
    auVar61._0_4_ = (int)auVar45._0_4_;
    auVar61._4_4_ = (int)auVar45._4_4_;
    auVar61._8_4_ = (int)auVar45._8_4_;
    auVar61._12_4_ = (int)auVar45._12_4_;
    auVar45 = vpackssdw_avx(auVar61,auVar61);
    auVar56 = vblendps_avx(auVar78,auVar68,3);
    sVar50 = auVar45._0_2_;
    auVar5._0_2_ = sVar50 + auVar38._0_2_;
    sVar62 = auVar45._2_2_;
    auVar5._2_2_ = sVar62 + auVar38._2_2_;
    auVar5._4_2_ = sVar50 + auVar38._4_2_;
    auVar5._6_2_ = sVar62 + auVar38._6_2_;
    auVar5._8_2_ = sVar50 + auVar38._8_2_;
    auVar5._10_2_ = sVar62 + auVar38._10_2_;
    auVar5._12_2_ = sVar50 + auVar38._12_2_;
    auVar5._14_2_ = sVar62 + auVar38._14_2_;
    auVar56 = vblendps_avx(auVar56,auVar5,8);
    auVar45 = vpunpckhwd_avx(auVar56,auVar56);
    auVar45 = vpsrad_avx(auVar45,0x10);
    auVar45 = vcvtdq2ps_avx(auVar45);
    auVar45 = vshufpd_avx(auVar45,auVar45,3);
    fVar119 = auVar45._4_4_ * _UNK_146159c94;
    fVar63 = auVar45._8_4_ * _UNK_146159c98;
    fVar123 = auVar45._12_4_ * _UNK_146159c9c;
    *(float *)(lVar17 + 0x70) = auVar45._0_4_ * _DAT_146159c90 + auVar56._0_4_;
    *(float *)(lVar17 + 0x74) = fVar119 + auVar56._4_4_;
    *(float *)(lVar17 + 0x78) = fVar63 + auVar56._8_4_;
    *(float *)(lVar17 + 0x7c) = fVar123 + auVar56._12_4_;
  }
  return;
}

