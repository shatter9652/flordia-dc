// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e5cb0  size: 4132 bytes
// Name:    FUN_1400e5cb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400e6ce0, FUN_142020f00, FUN_145012860, FUN_1450128a0, FUN_1400d4250, FUN_14526cbc0, FUN_1400deab0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400e5cb0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
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
  undefined8 uVar12;
  undefined8 uVar13;
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
  bool bVar34;
  longlong *plVar35;
  bool bVar36;
  char cVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  undefined4 uVar41;
  int iVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  longlong lVar45;
  ulonglong uVar46;
  undefined1 (*pauVar47) [16];
  longlong *plVar48;
  undefined1 (*pauVar49) [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
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
  undefined1 auVar62 [16];
  short sVar63;
  short sVar86;
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
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [64];
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  undefined1 auVar115 [64];
  undefined8 uVar116;
  float fVar117;
  float fVar119;
  float fVar120;
  float fVar121;
  undefined1 auVar118 [64];
  float fVar122;
  float fVar124;
  float fVar125;
  float fVar126;
  undefined1 auVar123 [16];
  undefined1 in_ZMM15 [64];
  undefined1 auVar127 [64];
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  longlong lStack_210;
  undefined *puStack_208;
  longlong *plStack_200;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined1 auStack_1c8 [16];
  uint uStack_19c;
  undefined *puStack_198;
  longlong *plStack_190;
  int iStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  longlong *plStack_160;
  longlong *plStack_158;
  ulonglong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_58 [16];
  
  auStack_58 = in_ZMM15._0_16_;
  lStack_210 = param_1;
  cVar37 = FUN_14526cbc0(param_2);
  if (cVar37 != '\0') {
    iVar40 = func_0x000144e05fa0(param_2[1]);
    fVar97 = 0.0;
    fVar98 = 0.0;
    fVar99 = 0.0;
    fVar100 = 0.0;
    fVar105 = 0.0;
    fVar101 = 0.0;
    fVar102 = 0.0;
    fVar103 = 0.0;
    if (iVar40 != 0) {
      uVar41 = (**(code **)(*param_2 + 0xf0))(param_2,0);
      (**(code **)(*param_2 + 0x108))(param_2,uVar41,&uStack_1e8);
      fVar105 = fStack_1d8;
      fVar101 = fStack_1d4;
      fVar102 = fStack_1d0;
      fVar103 = fStack_1cc;
    }
    plStack_160 = param_2 + 2;
    (**(code **)(*param_2 + 0x88))(param_2,&uStack_1e8);
    auVar75._4_4_ = fStack_1d4;
    auVar75._0_4_ = fStack_1d8;
    auVar75._8_4_ = fStack_1d0;
    auVar75._12_4_ = fStack_1cc;
    auVar50 = vshufps_avx(auVar75,auStack_1c8,0x33);
    auVar50 = vshufps_avx(auVar75,auVar50,0x2f);
    auVar108 = ZEXT1664(CONCAT412(fVar103 * (auVar50._12_4_ + _DAT_145fc6ed8),
                                  CONCAT48(fVar102 * (auVar50._8_4_ + _DAT_145fc6ed8),
                                           CONCAT44(fVar101 * (auVar50._4_4_ + _DAT_145fc6ed8),
                                                    fVar105 * (auVar50._0_4_ + _DAT_145fc6ed8)))));
    fVar101 = _DAT_145fc6ed8;
    fVar102 = _DAT_145fc6ed8;
    fVar103 = _DAT_145fc6ed8;
    fVar104 = _DAT_145fc6ed8;
    (**(code **)(*param_2 + 0x88))(param_2,&fStack_258);
    fVar105 = _DAT_14615ad78;
    fVar106 = auVar108._0_4_;
    auVar50 = auVar108._0_16_;
    auVar75 = vshufps_avx(auVar50,auVar50,0x55);
    auVar51 = vshufps_avx(auVar50,auVar50,0xaa);
    auVar107._4_4_ = _DAT_14615a290;
    auVar107._0_4_ = _DAT_14615a290;
    auVar107._8_4_ = _DAT_14615a290;
    auVar107._12_4_ = _DAT_14615a290;
    auVar108 = ZEXT1664(auVar107);
    auVar50 = vrcpps_avx(auVar107);
    auVar96._0_4_ =
         auVar51._0_4_ * fStack_238 + auVar75._0_4_ * fStack_248 + fVar106 * fStack_258 + fStack_228
    ;
    auVar96._4_4_ =
         auVar51._4_4_ * fStack_234 + auVar75._4_4_ * fStack_244 + fVar106 * fStack_254 + fStack_224
    ;
    auVar96._8_4_ =
         auVar51._8_4_ * fStack_230 + auVar75._8_4_ * fStack_240 + fVar106 * fStack_250 + fStack_220
    ;
    auVar96._12_4_ =
         auVar51._12_4_ * fStack_22c +
         auVar75._12_4_ * fStack_23c + fVar106 * fStack_24c + fStack_21c;
    fVar109 = auVar50._0_4_;
    fVar110 = auVar50._4_4_;
    fVar111 = auVar50._8_4_;
    fVar112 = auVar50._12_4_;
    fVar109 = (-(fVar109 * _DAT_14615a290) + fVar101) * fVar109 + fVar109;
    fVar110 = (-(fVar110 * _DAT_14615a290) + fVar102) * fVar110 + fVar110;
    fVar111 = (-(fVar111 * _DAT_14615a290) + fVar103) * fVar111 + fVar111;
    fVar112 = (-(fVar112 * _DAT_14615a290) + fVar104) * fVar112 + fVar112;
    auVar50._0_4_ = fVar109 * fVar97;
    auVar50._4_4_ = fVar110 * fVar98;
    auVar50._8_4_ = fVar111 * fVar99;
    auVar50._12_4_ = fVar112 * fVar100;
    uVar41 = vextractps_avx(auVar96,2);
    *(undefined4 *)(lStack_210 + 0x270) = uVar41;
    auVar50 = vroundps_avx(auVar50,3);
    auVar64._0_4_ = fVar105 * auVar50._0_4_;
    auVar64._4_4_ = fVar105 * auVar50._4_4_;
    auVar64._8_4_ = fVar105 * auVar50._8_4_;
    auVar64._12_4_ = fVar105 * auVar50._12_4_;
    auVar51._0_4_ = (int)auVar50._0_4_;
    auVar51._4_4_ = (int)auVar50._4_4_;
    auVar51._8_4_ = (int)auVar50._8_4_;
    auVar51._12_4_ = (int)auVar50._12_4_;
    auVar50 = vpackssdw_avx(auVar51,auVar51);
    auVar50 = vinsertps_avx(auVar64,auVar50,0x34);
    auVar115 = ZEXT1664(auVar50);
    *(undefined1 (*) [16])(lStack_210 + 0x1a0) = auVar50;
    *(undefined1 (*) [16])(lStack_210 + 0x1b0) = auVar50;
    *(float *)(lStack_210 + 0x1c0) = fVar97;
    *(float *)(lStack_210 + 0x1c4) = fVar98;
    *(float *)(lStack_210 + 0x1c8) = fVar99;
    *(float *)(lStack_210 + 0x1cc) = fVar100;
    *(byte *)(lStack_210 + 0x290) = *(byte *)(lStack_210 + 0x290) & 0xfe;
    *(undefined4 *)(lStack_210 + 0x36c) = 0xbf800000;
    fVar106 = fVar105;
    fVar113 = fVar105;
    fVar114 = fVar105;
    uVar43 = FUN_1400e6ce0(lStack_210,param_2);
    uVar44 = CONCAT71((int7)((ulonglong)uVar43 >> 8),1);
    uVar46 = 0;
    uVar43 = _DAT_14614f7f0;
    uVar116 = _UNK_14614f7f8;
    plStack_158 = param_2;
    do {
      lVar45 = lStack_210;
      uStack_19c = (uint)uVar44;
      pauVar49 = (undefined1 (*) [16])(uVar46 * 0x1b0 + *(longlong *)(lStack_210 + 0x188));
      uVar41 = FUN_1450128a0(*(undefined8 *)param_2[0x766],(uint)uVar46 | 4);
      FUN_145012860(&puStack_198,param_2,uVar41,uVar46);
      puStack_198 = &UNK_14669fee0;
      uStack_150 = uVar46;
      FUN_142020f00(lVar45,&uStack_178,plStack_160,uVar46);
      if (*(char *)(lVar45 + 0x38a) != '\0') {
        lVar45 = plStack_190[0x766];
        iVar40 = func_0x0001450141d0(&puStack_198);
        iVar40 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar45 + 0x10) + 0x80),
                                     *(undefined4 *)(&UNK_14669fed0 + (longlong)iVar40 * 4));
        plVar35 = plStack_190;
        iVar42 = func_0x000144e05fa0(plStack_190[1]);
        if (iVar40 == iVar42) {
          fVar117 = 0.0;
          fVar119 = 0.0;
          fVar120 = 0.0;
          fVar121 = 0.0;
        }
        else {
          uVar41 = (**(code **)(*plVar35 + 0xf0))(plVar35,iVar40);
          (**(code **)(*plVar35 + 0x108))(plVar35,uVar41,&uStack_1e8);
          fVar117 = fStack_1d8;
          fVar119 = fStack_1d4;
          fVar120 = fStack_1d0;
          fVar121 = fStack_1cc;
        }
        (**(code **)(*plVar35 + 0x88))(plVar35,&uStack_1e8);
        auVar22._4_4_ = fStack_1d4;
        auVar22._0_4_ = fStack_1d8;
        auVar22._8_4_ = fStack_1d0;
        auVar22._12_4_ = fStack_1cc;
        auVar50 = vshufps_avx(auVar22,auStack_1c8,0x33);
        auVar50 = vshufps_avx(auVar22,auVar50,0x2f);
        auVar118 = ZEXT1664(CONCAT412(fVar121 * (auVar50._12_4_ + fVar104),
                                      CONCAT48(fVar120 * (auVar50._8_4_ + fVar103),
                                               CONCAT44(fVar119 * (auVar50._4_4_ + fVar102),
                                                        fVar117 * (auVar50._0_4_ + fVar101)))));
        (**(code **)(*plVar35 + 0x88))(plVar35,&fStack_258);
        auVar14._4_4_ = fStack_224;
        auVar14._0_4_ = fStack_228;
        auVar14._8_4_ = fStack_220;
        auVar14._12_4_ = fStack_21c;
        fVar117 = auVar118._0_4_;
        auVar75 = auVar118._0_16_;
        auVar50 = vshufps_avx(auVar75,auVar75,0x55);
        auVar75 = vshufps_avx(auVar75,auVar75,0xaa);
        auVar52._0_4_ =
             auVar75._0_4_ * fStack_238 +
             auVar50._0_4_ * fStack_248 + fVar117 * fStack_258 + fStack_228;
        auVar52._4_4_ =
             auVar75._4_4_ * fStack_234 +
             auVar50._4_4_ * fStack_244 + fVar117 * fStack_254 + fStack_224;
        auVar52._8_4_ =
             auVar75._8_4_ * fStack_230 +
             auVar50._8_4_ * fStack_240 + fVar117 * fStack_250 + fStack_220;
        auVar52._12_4_ =
             auVar75._12_4_ * fStack_22c +
             auVar50._12_4_ * fStack_23c + fVar117 * fStack_24c + fStack_21c;
        auVar50 = vblendps_avx(auVar52,auVar14,8);
        auVar87._0_4_ = fVar109 * auVar50._0_4_;
        auVar87._4_4_ = fVar110 * auVar50._4_4_;
        auVar87._8_4_ = fVar111 * auVar50._8_4_;
        auVar87._12_4_ = fVar112 * auVar50._12_4_;
        auVar75 = vroundps_avx(auVar87,3);
        auVar65._0_4_ = auVar75._0_4_ * fVar105 + auVar50._0_4_;
        auVar65._4_4_ = auVar75._4_4_ * fVar106 + auVar50._4_4_;
        auVar65._8_4_ = auVar75._8_4_ * fVar113 + auVar50._8_4_;
        auVar65._12_4_ = auVar75._12_4_ * fVar114 + auVar50._12_4_;
        auVar50 = vblendps_avx(auVar52,auVar65,3);
        auVar66._0_4_ = (int)auVar75._0_4_;
        auVar66._4_4_ = (int)auVar75._4_4_;
        auVar66._8_4_ = (int)auVar75._8_4_;
        auVar66._12_4_ = (int)auVar75._12_4_;
        auVar75 = vpackssdw_avx(auVar66,auVar66);
        sVar63 = auVar75._0_2_;
        auVar2._0_2_ = sVar63 + SUB42(fStack_228,0);
        sVar86 = auVar75._2_2_;
        auVar2._2_2_ = sVar86 + (short)((uint)fStack_228 >> 0x10);
        auVar2._4_2_ = sVar63 + SUB42(fStack_224,0);
        auVar2._6_2_ = sVar86 + (short)((uint)fStack_224 >> 0x10);
        auVar2._8_2_ = sVar63 + SUB42(fStack_220,0);
        auVar2._10_2_ = sVar86 + (short)((uint)fStack_220 >> 0x10);
        auVar2._12_2_ = sVar63 + SUB42(fStack_21c,0);
        auVar2._14_2_ = sVar86 + (short)((uint)fStack_21c >> 0x10);
        auVar50 = vpblendd_avx2(auVar50,auVar2,8);
        pauVar49[0xb] = auVar50;
        uStack_f8 = uStack_178;
        uStack_f0 = uStack_170;
        auVar33._8_8_ = uStack_170;
        auVar33._0_8_ = uStack_178;
        auVar50 = vblendps_avx(auVar50,auVar33,4);
        pauVar49[0xb] = auVar50;
        *(undefined8 *)pauVar49[0xc] = uVar43;
        *(undefined8 *)(pauVar49[0xc] + 8) = uVar116;
      }
      lVar45 = 0;
      bVar36 = true;
      do {
        bVar34 = bVar36;
        plVar35 = plStack_190;
        if (bVar34) {
          lVar1 = plStack_190[0x766];
          iVar40 = (**(code **)(puStack_198 + 8))(&puStack_198);
          iVar40 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x80),
                                       *(undefined4 *)(&UNK_14669fed0 + (longlong)iVar40 * 4));
          plVar48 = plStack_190;
        }
        else {
          iVar40 = (**(code **)(*plStack_190 + 0x20))
                             (plStack_190,*(undefined4 *)(&UNK_14669f8e0 + (longlong)iStack_180 * 4)
                             );
          plVar48 = (longlong *)0x0;
          if (iVar40 != -1) {
            plVar48 = plVar35;
          }
        }
        iVar42 = func_0x000144e05fa0(plVar48[1]);
        fVar122 = 0.0;
        fVar124 = 0.0;
        fVar125 = 0.0;
        fVar126 = 0.0;
        fVar117 = 0.0;
        fVar119 = 0.0;
        fVar120 = 0.0;
        fVar121 = 0.0;
        if (iVar40 != iVar42) {
          uVar41 = (**(code **)(*plVar48 + 0xf0))(plVar48,iVar40);
          (**(code **)(*plVar48 + 0x108))(plVar48,uVar41,&uStack_1e8);
          fVar117 = fStack_1d8;
          fVar119 = fStack_1d4;
          fVar120 = fStack_1d0;
          fVar121 = fStack_1cc;
        }
        pauVar47 = pauVar49 + lVar45 * 3;
        (**(code **)(*plVar48 + 0x88))(plVar48,&uStack_1e8);
        auVar23._4_4_ = fStack_1d4;
        auVar23._0_4_ = fStack_1d8;
        auVar23._8_4_ = fStack_1d0;
        auVar23._12_4_ = fStack_1cc;
        auVar50 = vshufps_avx(auVar23,auStack_1c8,0x33);
        auVar50 = vshufps_avx(auVar23,auVar50,0x2f);
        auVar118 = ZEXT1664(CONCAT412(fVar121 * (auVar50._12_4_ + fVar104),
                                      CONCAT48(fVar120 * (auVar50._8_4_ + fVar103),
                                               CONCAT44(fVar119 * (auVar50._4_4_ + fVar102),
                                                        fVar117 * (auVar50._0_4_ + fVar101)))));
        (**(code **)(*plVar48 + 0x88))(plVar48,&fStack_258);
        auVar15._4_4_ = fStack_224;
        auVar15._0_4_ = fStack_228;
        auVar15._8_4_ = fStack_220;
        auVar15._12_4_ = fStack_21c;
        fVar117 = auVar118._0_4_;
        auVar75 = auVar118._0_16_;
        auVar50 = vshufps_avx(auVar75,auVar75,0x55);
        auVar75 = vshufps_avx(auVar75,auVar75,0xaa);
        auVar53._0_4_ =
             auVar75._0_4_ * fStack_238 +
             auVar50._0_4_ * fStack_248 + fVar117 * fStack_258 + fStack_228;
        auVar53._4_4_ =
             auVar75._4_4_ * fStack_234 +
             auVar50._4_4_ * fStack_244 + fVar117 * fStack_254 + fStack_224;
        auVar53._8_4_ =
             auVar75._8_4_ * fStack_230 +
             auVar50._8_4_ * fStack_240 + fVar117 * fStack_250 + fStack_220;
        auVar53._12_4_ =
             auVar75._12_4_ * fStack_22c +
             auVar50._12_4_ * fStack_23c + fVar117 * fStack_24c + fStack_21c;
        auVar50 = vblendps_avx(auVar53,auVar15,8);
        auVar88._0_4_ = fVar109 * auVar50._0_4_;
        auVar88._4_4_ = fVar110 * auVar50._4_4_;
        auVar88._8_4_ = fVar111 * auVar50._8_4_;
        auVar88._12_4_ = fVar112 * auVar50._12_4_;
        auVar75 = vroundps_avx(auVar88,3);
        auVar67._0_4_ = auVar75._0_4_ * fVar105 + auVar50._0_4_;
        auVar67._4_4_ = auVar75._4_4_ * fVar106 + auVar50._4_4_;
        auVar67._8_4_ = auVar75._8_4_ * fVar113 + auVar50._8_4_;
        auVar67._12_4_ = auVar75._12_4_ * fVar114 + auVar50._12_4_;
        auVar50 = vblendps_avx(auVar53,auVar67,3);
        auVar68._0_4_ = (int)auVar75._0_4_;
        auVar68._4_4_ = (int)auVar75._4_4_;
        auVar68._8_4_ = (int)auVar75._8_4_;
        auVar68._12_4_ = (int)auVar75._12_4_;
        auVar75 = vpackssdw_avx(auVar68,auVar68);
        sVar63 = auVar75._0_2_;
        auVar3._0_2_ = sVar63 + SUB42(fStack_228,0);
        sVar86 = auVar75._2_2_;
        auVar3._2_2_ = sVar86 + (short)((uint)fStack_228 >> 0x10);
        auVar3._4_2_ = sVar63 + SUB42(fStack_224,0);
        auVar3._6_2_ = sVar86 + (short)((uint)fStack_224 >> 0x10);
        auVar3._8_2_ = sVar63 + SUB42(fStack_220,0);
        auVar3._10_2_ = sVar86 + (short)((uint)fStack_220 >> 0x10);
        auVar3._12_2_ = sVar63 + SUB42(fStack_21c,0);
        auVar3._14_2_ = sVar86 + (short)((uint)fStack_21c >> 0x10);
        auVar50 = vpblendd_avx2(auVar50,auVar3,8);
        pauVar47[1] = auVar50;
        iVar42 = func_0x000144e05fa0(plVar48[1]);
        if (iVar40 != iVar42) {
          uVar41 = (**(code **)(*plVar48 + 0xf0))(plVar48,iVar40);
          (**(code **)(*plVar48 + 0x108))(plVar48,uVar41,&uStack_1e8);
          fVar122 = fStack_1d8;
          fVar124 = fStack_1d4;
          fVar125 = fStack_1d0;
          fVar126 = fStack_1cc;
        }
        (**(code **)(*plVar48 + 0x88))(plVar48,&uStack_1e8);
        auVar24._4_4_ = fStack_1d4;
        auVar24._0_4_ = fStack_1d8;
        auVar24._8_4_ = fStack_1d0;
        auVar24._12_4_ = fStack_1cc;
        auVar50 = vshufps_avx(auVar24,auStack_1c8,0x33);
        auVar50 = vshufps_avx(auVar24,auVar50,0x2f);
        auVar118 = ZEXT1664(CONCAT412(fVar126 * (auVar50._12_4_ + fVar104),
                                      CONCAT48(fVar125 * (auVar50._8_4_ + fVar103),
                                               CONCAT44(fVar124 * (auVar50._4_4_ + fVar102),
                                                        fVar122 * (auVar50._0_4_ + fVar101)))));
        (**(code **)(*plVar48 + 0x88))(plVar48,&fStack_258);
        auVar16._4_4_ = fStack_224;
        auVar16._0_4_ = fStack_228;
        auVar16._8_4_ = fStack_220;
        auVar16._12_4_ = fStack_21c;
        fVar117 = auVar118._0_4_;
        auVar75 = auVar118._0_16_;
        auVar50 = vshufps_avx(auVar75,auVar75,0x55);
        auVar75 = vshufps_avx(auVar75,auVar75,0xaa);
        lVar45 = 1;
        auVar54._0_4_ =
             auVar75._0_4_ * fStack_238 +
             auVar50._0_4_ * fStack_248 + fVar117 * fStack_258 + fStack_228;
        auVar54._4_4_ =
             auVar75._4_4_ * fStack_234 +
             auVar50._4_4_ * fStack_244 + fVar117 * fStack_254 + fStack_224;
        auVar54._8_4_ =
             auVar75._8_4_ * fStack_230 +
             auVar50._8_4_ * fStack_240 + fVar117 * fStack_250 + fStack_220;
        auVar54._12_4_ =
             auVar75._12_4_ * fStack_22c +
             auVar50._12_4_ * fStack_23c + fVar117 * fStack_24c + fStack_21c;
        auVar50 = vblendps_avx(auVar54,auVar16,8);
        auVar89._0_4_ = fVar109 * auVar50._0_4_;
        auVar89._4_4_ = fVar110 * auVar50._4_4_;
        auVar89._8_4_ = fVar111 * auVar50._8_4_;
        auVar89._12_4_ = fVar112 * auVar50._12_4_;
        auVar75 = vroundps_avx(auVar89,3);
        auVar69._0_4_ = auVar75._0_4_ * fVar105 + auVar50._0_4_;
        auVar69._4_4_ = auVar75._4_4_ * fVar106 + auVar50._4_4_;
        auVar69._8_4_ = auVar75._8_4_ * fVar113 + auVar50._8_4_;
        auVar69._12_4_ = auVar75._12_4_ * fVar114 + auVar50._12_4_;
        auVar50 = vblendps_avx(auVar54,auVar69,3);
        auVar70._0_4_ = (int)auVar75._0_4_;
        auVar70._4_4_ = (int)auVar75._4_4_;
        auVar70._8_4_ = (int)auVar75._8_4_;
        auVar70._12_4_ = (int)auVar75._12_4_;
        auVar75 = vpackssdw_avx(auVar70,auVar70);
        sVar63 = auVar75._0_2_;
        auVar4._0_2_ = sVar63 + SUB42(fStack_228,0);
        sVar86 = auVar75._2_2_;
        auVar4._2_2_ = sVar86 + (short)((uint)fStack_228 >> 0x10);
        auVar4._4_2_ = sVar63 + SUB42(fStack_224,0);
        auVar4._6_2_ = sVar86 + (short)((uint)fStack_224 >> 0x10);
        auVar4._8_2_ = sVar63 + SUB42(fStack_220,0);
        auVar4._10_2_ = sVar86 + (short)((uint)fStack_220 >> 0x10);
        auVar4._12_2_ = sVar63 + SUB42(fStack_21c,0);
        auVar4._14_2_ = sVar86 + (short)((uint)fStack_21c >> 0x10);
        auVar50 = vpblendd_avx2(auVar50,auVar4,8);
        *pauVar47 = auVar50;
        *(float *)pauVar47[2] = fVar97;
        *(float *)(pauVar47[2] + 4) = fVar98;
        *(float *)(pauVar47[2] + 8) = fVar99;
        *(float *)(pauVar47[2] + 0xc) = fVar100;
        bVar36 = false;
      } while (bVar34);
      auStack_108 = auVar115._0_16_;
      FUN_1400deab0(&uStack_1e8,pauVar49,auStack_108);
      param_2 = plStack_158;
      *(undefined8 *)pauVar49[7] = uStack_1e8;
      *(undefined8 *)(pauVar49[7] + 8) = uStack_1e0;
      iVar40 = func_0x000144e05fa0(plStack_158[1]);
      fVar122 = 0.0;
      fVar124 = 0.0;
      fVar125 = 0.0;
      fVar126 = 0.0;
      fVar117 = 0.0;
      fVar119 = 0.0;
      fVar120 = 0.0;
      fVar121 = 0.0;
      if (iVar40 != 0) {
        uVar41 = (**(code **)(*param_2 + 0xf0))(param_2,0);
        (**(code **)(*param_2 + 0x108))(param_2,uVar41,&uStack_1e8);
        fVar117 = fStack_1d8;
        fVar119 = fStack_1d4;
        fVar120 = fStack_1d0;
        fVar121 = fStack_1cc;
      }
      (**(code **)(*param_2 + 0x88))(param_2,&uStack_1e8);
      auVar25._4_4_ = fStack_1d4;
      auVar25._0_4_ = fStack_1d8;
      auVar25._8_4_ = fStack_1d0;
      auVar25._12_4_ = fStack_1cc;
      auVar50 = vshufps_avx(auVar25,auStack_1c8,0x33);
      auVar50 = vshufps_avx(auVar25,auVar50,0x2f);
      auVar118 = ZEXT1664(CONCAT412(fVar121 * (auVar50._12_4_ + fVar104),
                                    CONCAT48(fVar120 * (auVar50._8_4_ + fVar103),
                                             CONCAT44(fVar119 * (auVar50._4_4_ + fVar102),
                                                      fVar117 * (auVar50._0_4_ + fVar101)))));
      (**(code **)(*param_2 + 0x88))(param_2,&fStack_258);
      fVar117 = auVar118._0_4_;
      auVar75 = auVar118._0_16_;
      auVar50 = vshufps_avx(auVar75,auVar75,0x55);
      auVar75 = vshufps_avx(auVar75,auVar75,0xaa);
      auVar127 = ZEXT1664(CONCAT412(fStack_21c,CONCAT48(fStack_220,CONCAT44(fStack_224,fStack_228)))
                         );
      lVar45 = plStack_190[0x766];
      auVar118 = ZEXT1664(CONCAT412(auVar75._12_4_ * fStack_22c +
                                    auVar50._12_4_ * fStack_23c + fVar117 * fStack_24c + fStack_21c,
                                    CONCAT48(auVar75._8_4_ * fStack_230 +
                                             auVar50._8_4_ * fStack_240 +
                                             fVar117 * fStack_250 + fStack_220,
                                             CONCAT44(auVar75._4_4_ * fStack_234 +
                                                      auVar50._4_4_ * fStack_244 +
                                                      fVar117 * fStack_254 + fStack_224,
                                                      auVar75._0_4_ * fStack_238 +
                                                      auVar50._0_4_ * fStack_248 +
                                                      fVar117 * fStack_258 + fStack_228))));
      iVar40 = (**(code **)(puStack_198 + 8))(&puStack_198);
      iVar40 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar45 + 0x10) + 0x80),
                                   *(undefined4 *)(&UNK_14669fed0 + (longlong)iVar40 * 4));
      plVar35 = plStack_190;
      iVar42 = func_0x000144e05fa0(plStack_190[1]);
      auVar75 = auVar127._0_16_;
      auVar50 = auVar118._0_16_;
      if (iVar40 != iVar42) {
        uVar41 = (**(code **)(*plVar35 + 0xf0))(plVar35,iVar40);
        (**(code **)(*plVar35 + 0x108))(plVar35,uVar41,&uStack_1e8);
        auVar75 = auVar127._0_16_;
        auVar50 = auVar118._0_16_;
        fVar122 = fStack_1d8;
        fVar124 = fStack_1d4;
        fVar125 = fStack_1d0;
        fVar126 = fStack_1cc;
      }
      auVar51 = vblendps_avx(auVar50,auVar75,8);
      auVar71._0_4_ = fVar109 * auVar51._0_4_;
      auVar71._4_4_ = fVar110 * auVar51._4_4_;
      auVar71._8_4_ = fVar111 * auVar51._8_4_;
      auVar71._12_4_ = fVar112 * auVar51._12_4_;
      auVar64 = vroundps_avx(auVar71,3);
      auVar55._0_4_ = auVar64._0_4_ * fVar105 + auVar51._0_4_;
      auVar55._4_4_ = auVar64._4_4_ * fVar106 + auVar51._4_4_;
      auVar55._8_4_ = auVar64._8_4_ * fVar113 + auVar51._8_4_;
      auVar55._12_4_ = auVar64._12_4_ * fVar114 + auVar51._12_4_;
      auVar72._0_4_ = (int)auVar64._0_4_;
      auVar72._4_4_ = (int)auVar64._4_4_;
      auVar72._8_4_ = (int)auVar64._8_4_;
      auVar72._12_4_ = (int)auVar64._12_4_;
      auVar50 = vblendps_avx(auVar50,auVar55,3);
      auVar51 = vpackssdw_avx(auVar72,auVar72);
      sVar63 = auVar51._0_2_;
      auVar5._0_2_ = auVar75._0_2_ + sVar63;
      sVar86 = auVar51._2_2_;
      auVar5._2_2_ = auVar75._2_2_ + sVar86;
      auVar5._4_2_ = auVar75._4_2_ + sVar63;
      auVar5._6_2_ = auVar75._6_2_ + sVar86;
      auVar5._8_2_ = auVar75._8_2_ + sVar63;
      auVar5._10_2_ = auVar75._10_2_ + sVar86;
      auVar5._12_2_ = auVar75._12_2_ + sVar63;
      auVar5._14_2_ = auVar75._14_2_ + sVar86;
      auVar50 = vpblendd_avx2(auVar50,auVar5,8);
      auVar118 = ZEXT1664(auVar50);
      (**(code **)(*plVar35 + 0x88))(plVar35,&uStack_1e8);
      auVar26._4_4_ = fStack_1d4;
      auVar26._0_4_ = fStack_1d8;
      auVar26._8_4_ = fStack_1d0;
      auVar26._12_4_ = fStack_1cc;
      auVar50 = vshufps_avx(auVar26,auStack_1c8,0x33);
      auVar50 = vshufps_avx(auVar26,auVar50,0x2f);
      auVar127 = ZEXT1664(CONCAT412(fVar126 * (auVar50._12_4_ + fVar104),
                                    CONCAT48(fVar125 * (auVar50._8_4_ + fVar103),
                                             CONCAT44(fVar124 * (auVar50._4_4_ + fVar102),
                                                      fVar122 * (auVar50._0_4_ + fVar101)))));
      (**(code **)(*plVar35 + 0x88))(plVar35,&fStack_258);
      uVar46 = uStack_150;
      lVar45 = lStack_210;
      auVar17._4_4_ = fStack_224;
      auVar17._0_4_ = fStack_228;
      auVar17._8_4_ = fStack_220;
      auVar17._12_4_ = fStack_21c;
      fVar117 = auVar127._0_4_;
      auVar75 = auVar127._0_16_;
      auVar50 = vshufps_avx(auVar75,auVar75,0x55);
      auVar75 = vshufps_avx(auVar75,auVar75,0xaa);
      auVar56._0_4_ =
           auVar75._0_4_ * fStack_238 +
           auVar50._0_4_ * fStack_248 + fVar117 * fStack_258 + fStack_228;
      auVar56._4_4_ =
           auVar75._4_4_ * fStack_234 +
           auVar50._4_4_ * fStack_244 + fVar117 * fStack_254 + fStack_224;
      auVar56._8_4_ =
           auVar75._8_4_ * fStack_230 +
           auVar50._8_4_ * fStack_240 + fVar117 * fStack_250 + fStack_220;
      auVar56._12_4_ =
           auVar75._12_4_ * fStack_22c +
           auVar50._12_4_ * fStack_23c + fVar117 * fStack_24c + fStack_21c;
      auVar50 = vblendps_avx(auVar56,auVar17,8);
      auVar90._0_4_ = fVar109 * auVar50._0_4_;
      auVar90._4_4_ = fVar110 * auVar50._4_4_;
      auVar90._8_4_ = fVar111 * auVar50._8_4_;
      auVar90._12_4_ = fVar112 * auVar50._12_4_;
      auVar75 = vroundps_avx(auVar90,3);
      auVar73._0_4_ = -(auVar75._0_4_ * auVar108._0_4_) + auVar50._0_4_;
      auVar73._4_4_ = -(auVar75._4_4_ * auVar108._4_4_) + auVar50._4_4_;
      auVar73._8_4_ = -(auVar75._8_4_ * auVar108._8_4_) + auVar50._8_4_;
      auVar73._12_4_ = -(auVar75._12_4_ * auVar108._12_4_) + auVar50._12_4_;
      auVar50 = vblendps_avx(auVar56,auVar73,3);
      auVar74._0_4_ = (int)auVar75._0_4_;
      auVar74._4_4_ = (int)auVar75._4_4_;
      auVar74._8_4_ = (int)auVar75._8_4_;
      auVar74._12_4_ = (int)auVar75._12_4_;
      auVar75 = vpackssdw_avx(auVar74,auVar74);
      sVar63 = auVar75._0_2_;
      auVar6._0_2_ = sVar63 + SUB42(fStack_228,0);
      sVar86 = auVar75._2_2_;
      auVar6._2_2_ = sVar86 + (short)((uint)fStack_228 >> 0x10);
      auVar6._4_2_ = sVar63 + SUB42(fStack_224,0);
      auVar6._6_2_ = sVar86 + (short)((uint)fStack_224 >> 0x10);
      auVar6._8_2_ = sVar63 + SUB42(fStack_220,0);
      auVar6._10_2_ = sVar86 + (short)((uint)fStack_220 >> 0x10);
      auVar6._12_2_ = sVar63 + SUB42(fStack_21c,0);
      auVar6._14_2_ = sVar86 + (short)((uint)fStack_21c >> 0x10);
      auVar75 = vpblendd_avx2(auVar50,auVar6,8);
      auVar50 = vsubps_avx(auVar118._0_16_,auVar75);
      auStack_118 = vpsubw_avx(auVar118._0_16_,auVar75);
      auVar50 = vblendps_avx(auVar50,auStack_118,8);
      auVar75 = vpunpckhwd_avx(auVar50,auVar50);
      auVar75 = vpsrad_avx(auVar75,0x10);
      auVar75 = vcvtdq2ps_avx(auVar75);
      auVar75 = vshufpd_avx(auVar75,auVar75,3);
      fStack_128 = *(float *)*pauVar49;
      fStack_124 = *(float *)(*pauVar49 + 4);
      fStack_120 = *(float *)(*pauVar49 + 8);
      fStack_11c = *(float *)(*pauVar49 + 0xc);
      auVar57._0_4_ = auVar75._0_4_ * _DAT_146159c90 + auVar50._0_4_ + fStack_128;
      auVar57._4_4_ = auVar75._4_4_ * _UNK_146159c94 + auVar50._4_4_ + fStack_124;
      auVar57._8_4_ = fStack_120 + 0.0;
      auVar57._12_4_ = fStack_11c + 0.0;
      auVar50 = vblendps_avx(auVar57,*pauVar49,8);
      auVar76._0_4_ = fVar109 * auVar50._0_4_;
      auVar76._4_4_ = fVar110 * auVar50._4_4_;
      auVar76._8_4_ = fVar111 * auVar50._8_4_;
      auVar76._12_4_ = fVar112 * auVar50._12_4_;
      auVar75 = vroundps_avx(auVar76,3);
      auVar91._0_4_ = -(auVar75._0_4_ * auVar108._0_4_) + auVar50._0_4_;
      auVar91._4_4_ = -(auVar75._4_4_ * auVar108._4_4_) + auVar50._4_4_;
      auVar91._8_4_ = -(auVar75._8_4_ * auVar108._8_4_) + auVar50._8_4_;
      auVar91._12_4_ = -(auVar75._12_4_ * auVar108._12_4_) + auVar50._12_4_;
      auVar77._0_4_ = (int)auVar75._0_4_;
      auVar77._4_4_ = (int)auVar75._4_4_;
      auVar77._8_4_ = (int)auVar75._8_4_;
      auVar77._12_4_ = (int)auVar75._12_4_;
      auVar51 = vpackssdw_avx(auVar77,auVar77);
      auVar75 = vblendps_avx(auVar50,auVar91,3);
      sVar63 = auVar51._0_2_;
      auVar7._0_2_ = sVar63 + auVar50._0_2_;
      sVar86 = auVar51._2_2_;
      auVar7._2_2_ = sVar86 + auVar50._2_2_;
      auVar7._4_2_ = sVar63 + auVar50._4_2_;
      auVar7._6_2_ = sVar86 + auVar50._6_2_;
      auVar7._8_2_ = sVar63 + auVar50._8_2_;
      auVar7._10_2_ = sVar86 + auVar50._10_2_;
      auVar7._12_2_ = sVar63 + auVar50._12_2_;
      auVar7._14_2_ = sVar86 + auVar50._14_2_;
      auVar50 = vblendps_avx(auVar75,auVar7,8);
      pauVar49[6] = auVar50;
      uVar44 = *(undefined8 *)(*pauVar49 + 8);
      uVar12 = *(undefined8 *)pauVar49[3];
      uVar13 = *(undefined8 *)(pauVar49[3] + 8);
      *(undefined8 *)pauVar49[8] = *(undefined8 *)*pauVar49;
      *(undefined8 *)(pauVar49[8] + 8) = uVar44;
      *(undefined8 *)pauVar49[9] = uVar12;
      *(undefined8 *)(pauVar49[9] + 8) = uVar13;
      pauVar47 = (undefined1 (*) [16])(uStack_150 * 0xb0 + *(longlong *)(lStack_210 + 0x198));
      uVar41 = FUN_1450128a0(*(undefined8 *)param_2[0x766],(uint)uStack_150 | 2);
      FUN_145012860(&puStack_208,param_2,uVar41,uVar46 & 0xffffffff);
      puStack_208 = &UNK_14669bc60;
      if (*(char *)(lVar45 + 0x38a) != '\0') {
        lVar45 = plStack_200[0x766];
        iVar40 = func_0x0001450141d0(&puStack_208);
        iVar40 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar45 + 0x10) + 0x80),
                                     *(undefined4 *)(&UNK_14669f8d8 + (longlong)iVar40 * 4));
        plVar35 = plStack_200;
        iVar42 = func_0x000144e05fa0(plStack_200[1]);
        if (iVar40 == iVar42) {
          fVar117 = 0.0;
          fVar119 = 0.0;
          fVar120 = 0.0;
          fVar121 = 0.0;
        }
        else {
          uVar41 = (**(code **)(*plVar35 + 0xf0))(plVar35,iVar40);
          (**(code **)(*plVar35 + 0x108))(plVar35,uVar41,&uStack_1e8);
          fVar117 = fStack_1d8;
          fVar119 = fStack_1d4;
          fVar120 = fStack_1d0;
          fVar121 = fStack_1cc;
        }
        (**(code **)(*plVar35 + 0x88))(plVar35,&uStack_1e8);
        auVar27._4_4_ = fStack_1d4;
        auVar27._0_4_ = fStack_1d8;
        auVar27._8_4_ = fStack_1d0;
        auVar27._12_4_ = fStack_1cc;
        auVar50 = vshufps_avx(auVar27,auStack_1c8,0x33);
        auVar50 = vshufps_avx(auVar27,auVar50,0x2f);
        auVar118 = ZEXT1664(CONCAT412(fVar121 * (auVar50._12_4_ + fVar104),
                                      CONCAT48(fVar120 * (auVar50._8_4_ + fVar103),
                                               CONCAT44(fVar119 * (auVar50._4_4_ + fVar102),
                                                        fVar117 * (auVar50._0_4_ + fVar101)))));
        (**(code **)(*plVar35 + 0x88))(plVar35,&fStack_258);
        auVar18._4_4_ = fStack_224;
        auVar18._0_4_ = fStack_228;
        auVar18._8_4_ = fStack_220;
        auVar18._12_4_ = fStack_21c;
        fVar117 = auVar118._0_4_;
        auVar75 = auVar118._0_16_;
        auVar50 = vshufps_avx(auVar75,auVar75,0x55);
        auVar75 = vshufps_avx(auVar75,auVar75,0xaa);
        auVar58._0_4_ =
             auVar75._0_4_ * fStack_238 +
             auVar50._0_4_ * fStack_248 + fVar117 * fStack_258 + fStack_228;
        auVar58._4_4_ =
             auVar75._4_4_ * fStack_234 +
             auVar50._4_4_ * fStack_244 + fVar117 * fStack_254 + fStack_224;
        auVar58._8_4_ =
             auVar75._8_4_ * fStack_230 +
             auVar50._8_4_ * fStack_240 + fVar117 * fStack_250 + fStack_220;
        auVar58._12_4_ =
             auVar75._12_4_ * fStack_22c +
             auVar50._12_4_ * fStack_23c + fVar117 * fStack_24c + fStack_21c;
        auVar50 = vblendps_avx(auVar58,auVar18,8);
        auVar92._0_4_ = fVar109 * auVar50._0_4_;
        auVar92._4_4_ = fVar110 * auVar50._4_4_;
        auVar92._8_4_ = fVar111 * auVar50._8_4_;
        auVar92._12_4_ = fVar112 * auVar50._12_4_;
        auVar75 = vroundps_avx(auVar92,3);
        auVar78._0_4_ = auVar75._0_4_ * fVar105 + auVar50._0_4_;
        auVar78._4_4_ = auVar75._4_4_ * fVar106 + auVar50._4_4_;
        auVar78._8_4_ = auVar75._8_4_ * fVar113 + auVar50._8_4_;
        auVar78._12_4_ = auVar75._12_4_ * fVar114 + auVar50._12_4_;
        auVar50 = vblendps_avx(auVar58,auVar78,3);
        auVar79._0_4_ = (int)auVar75._0_4_;
        auVar79._4_4_ = (int)auVar75._4_4_;
        auVar79._8_4_ = (int)auVar75._8_4_;
        auVar79._12_4_ = (int)auVar75._12_4_;
        auVar75 = vpackssdw_avx(auVar79,auVar79);
        sVar63 = auVar75._0_2_;
        auVar8._0_2_ = sVar63 + SUB42(fStack_228,0);
        sVar86 = auVar75._2_2_;
        auVar8._2_2_ = sVar86 + (short)((uint)fStack_228 >> 0x10);
        auVar8._4_2_ = sVar63 + SUB42(fStack_224,0);
        auVar8._6_2_ = sVar86 + (short)((uint)fStack_224 >> 0x10);
        auVar8._8_2_ = sVar63 + SUB42(fStack_220,0);
        auVar8._10_2_ = sVar86 + (short)((uint)fStack_220 >> 0x10);
        auVar8._12_2_ = sVar63 + SUB42(fStack_21c,0);
        auVar8._14_2_ = sVar86 + (short)((uint)fStack_21c >> 0x10);
        auVar50 = vpblendd_avx2(auVar50,auVar8,8);
        pauVar47[3] = auVar50;
        uStack_138 = uStack_178;
        uStack_130 = uStack_170;
        auVar32._8_8_ = uStack_170;
        auVar32._0_8_ = uStack_178;
        auVar50 = vblendps_avx(auVar50,auVar32,4);
        pauVar47[3] = auVar50;
        *(undefined8 *)pauVar49[0xc] = uVar43;
        *(undefined8 *)(pauVar49[0xc] + 8) = uVar116;
      }
      lVar45 = plStack_200[0x766];
      iVar40 = (**(code **)(puStack_208 + 8))(&puStack_208);
      iVar40 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar45 + 0x10) + 0x80),
                                   *(undefined4 *)(&UNK_14669f8d8 + (longlong)iVar40 * 4));
      plVar35 = plStack_200;
      iVar42 = func_0x000144e05fa0(plStack_200[1]);
      auVar118 = ZEXT1264(ZEXT812(0));
      fVar117 = 0.0;
      fVar119 = 0.0;
      fVar120 = 0.0;
      fVar121 = 0.0;
      if (iVar40 != iVar42) {
        uVar41 = (**(code **)(*plVar35 + 0xf0))(plVar35,iVar40);
        (**(code **)(*plVar35 + 0x108))(plVar35,uVar41,&uStack_1e8);
        fVar117 = fStack_1d8;
        fVar119 = fStack_1d4;
        fVar120 = fStack_1d0;
        fVar121 = fStack_1cc;
      }
      (**(code **)(*plVar35 + 0x88))(plVar35,&uStack_1e8);
      auVar28._4_4_ = fStack_1d4;
      auVar28._0_4_ = fStack_1d8;
      auVar28._8_4_ = fStack_1d0;
      auVar28._12_4_ = fStack_1cc;
      auVar50 = vshufps_avx(auVar28,auStack_1c8,0x33);
      auVar50 = vshufps_avx(auVar28,auVar50,0x2f);
      auVar127 = ZEXT1664(CONCAT412(fVar121 * (auVar50._12_4_ + fVar104),
                                    CONCAT48(fVar120 * (auVar50._8_4_ + fVar103),
                                             CONCAT44(fVar119 * (auVar50._4_4_ + fVar102),
                                                      fVar117 * (auVar50._0_4_ + fVar101)))));
      (**(code **)(*plVar35 + 0x88))(plVar35,&fStack_258);
      auVar19._4_4_ = fStack_224;
      auVar19._0_4_ = fStack_228;
      auVar19._8_4_ = fStack_220;
      auVar19._12_4_ = fStack_21c;
      fVar117 = auVar127._0_4_;
      auVar75 = auVar127._0_16_;
      auVar50 = vshufps_avx(auVar75,auVar75,0x55);
      auVar75 = vshufps_avx(auVar75,auVar75,0xaa);
      auVar59._0_4_ =
           auVar75._0_4_ * fStack_238 +
           auVar50._0_4_ * fStack_248 + fVar117 * fStack_258 + fStack_228;
      auVar59._4_4_ =
           auVar75._4_4_ * fStack_234 +
           auVar50._4_4_ * fStack_244 + fVar117 * fStack_254 + fStack_224;
      auVar59._8_4_ =
           auVar75._8_4_ * fStack_230 +
           auVar50._8_4_ * fStack_240 + fVar117 * fStack_250 + fStack_220;
      auVar59._12_4_ =
           auVar75._12_4_ * fStack_22c +
           auVar50._12_4_ * fStack_23c + fVar117 * fStack_24c + fStack_21c;
      auVar50 = vblendps_avx(auVar59,auVar19,8);
      auVar93._0_4_ = fVar109 * auVar50._0_4_;
      auVar93._4_4_ = fVar110 * auVar50._4_4_;
      auVar93._8_4_ = fVar111 * auVar50._8_4_;
      auVar93._12_4_ = fVar112 * auVar50._12_4_;
      auVar75 = vroundps_avx(auVar93,3);
      auVar80._0_4_ = auVar75._0_4_ * fVar105 + auVar50._0_4_;
      auVar80._4_4_ = auVar75._4_4_ * fVar106 + auVar50._4_4_;
      auVar80._8_4_ = auVar75._8_4_ * fVar113 + auVar50._8_4_;
      auVar80._12_4_ = auVar75._12_4_ * fVar114 + auVar50._12_4_;
      auVar50 = vblendps_avx(auVar59,auVar80,3);
      auVar81._0_4_ = (int)auVar75._0_4_;
      auVar81._4_4_ = (int)auVar75._4_4_;
      auVar81._8_4_ = (int)auVar75._8_4_;
      auVar81._12_4_ = (int)auVar75._12_4_;
      auVar75 = vpackssdw_avx(auVar81,auVar81);
      sVar63 = auVar75._0_2_;
      auVar9._0_2_ = sVar63 + SUB42(fStack_228,0);
      sVar86 = auVar75._2_2_;
      auVar9._2_2_ = sVar86 + (short)((uint)fStack_228 >> 0x10);
      auVar9._4_2_ = sVar63 + SUB42(fStack_224,0);
      auVar9._6_2_ = sVar86 + (short)((uint)fStack_224 >> 0x10);
      auVar9._8_2_ = sVar63 + SUB42(fStack_220,0);
      auVar9._10_2_ = sVar86 + (short)((uint)fStack_220 >> 0x10);
      auVar9._12_2_ = sVar63 + SUB42(fStack_21c,0);
      auVar9._14_2_ = sVar86 + (short)((uint)fStack_21c >> 0x10);
      auVar50 = vpblendd_avx2(auVar50,auVar9,8);
      pauVar47[3] = auVar50;
      uStack_148 = uStack_178;
      uStack_140 = uStack_170;
      auVar31._8_8_ = uStack_170;
      auVar31._0_8_ = uStack_178;
      auVar50 = vblendps_avx(auVar50,auVar31,4);
      pauVar47[3] = auVar50;
      *(undefined8 *)pauVar47[4] = uVar43;
      *(undefined8 *)(pauVar47[4] + 8) = uVar116;
      lVar45 = plStack_200[0x766];
      iVar40 = (**(code **)(puStack_208 + 8))(&puStack_208);
      iVar40 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar45 + 0x10) + 0x80),
                                   *(undefined4 *)(&UNK_14669f8d8 + (longlong)iVar40 * 4));
      plVar35 = plStack_200;
      iVar42 = func_0x000144e05fa0(plStack_200[1]);
      auVar123 = auVar118._0_16_;
      if (iVar40 != iVar42) {
        uVar41 = (**(code **)(*plVar35 + 0xf0))(plVar35,iVar40);
        (**(code **)(*plVar35 + 0x108))(plVar35,uVar41,&uStack_1e8);
        auVar123._4_4_ = fStack_1d4;
        auVar123._0_4_ = fStack_1d8;
        auVar123._8_4_ = fStack_1d0;
        auVar123._12_4_ = fStack_1cc;
      }
      pauVar47[5] = auVar123;
      fVar117 = 0.0;
      fVar119 = 0.0;
      fVar120 = 0.0;
      fVar121 = 0.0;
      *(undefined4 *)pauVar47[7] = 0;
      *(undefined4 *)(pauVar47[7] + 4) = 0;
      *(undefined4 *)(pauVar47[7] + 8) = 0;
      *(undefined4 *)(pauVar47[7] + 0xc) = 0;
      lVar45 = plStack_200[0x766];
      iVar40 = (**(code **)(puStack_208 + 8))(&puStack_208);
      iVar40 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar45 + 0x10) + 0x80),
                                   *(undefined4 *)(&UNK_14669f8d0 + (longlong)iVar40 * 4));
      plVar35 = plStack_200;
      iVar42 = func_0x000144e05fa0(plStack_200[1]);
      auVar60._0_12_ = ZEXT812(0);
      auVar60._12_4_ = 0;
      if (iVar40 != iVar42) {
        uVar41 = (**(code **)(*plVar35 + 0xf0))(plVar35,iVar40);
        (**(code **)(*plVar35 + 0x108))(plVar35,uVar41,&uStack_1e8);
        auVar60._4_4_ = fStack_1d4;
        auVar60._0_4_ = fStack_1d8;
        auVar60._8_4_ = fStack_1d0;
        auVar60._12_4_ = fStack_1cc;
      }
      pauVar47[6] = auVar60;
      *(float *)pauVar47[8] = fVar117;
      *(float *)(pauVar47[8] + 4) = fVar119;
      *(float *)(pauVar47[8] + 8) = fVar120;
      *(float *)(pauVar47[8] + 0xc) = fVar121;
      lVar45 = plStack_200[0x766];
      iVar40 = (**(code **)(puStack_208 + 8))(&puStack_208);
      iVar40 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar45 + 0x10) + 0x80),
                                   *(undefined4 *)(&UNK_14669f8d8 + (longlong)iVar40 * 4));
      plVar35 = plStack_200;
      iVar42 = func_0x000144e05fa0(plStack_200[1]);
      if (iVar40 != iVar42) {
        uVar41 = (**(code **)(*plVar35 + 0xf0))(plVar35,iVar40);
        (**(code **)(*plVar35 + 0x108))(plVar35,uVar41,&uStack_1e8);
        fVar117 = fStack_1d8;
        fVar119 = fStack_1d4;
        fVar120 = fStack_1d0;
        fVar121 = fStack_1cc;
      }
      (**(code **)(*plVar35 + 0x88))(plVar35,&uStack_1e8);
      auVar29._4_4_ = fStack_1d4;
      auVar29._0_4_ = fStack_1d8;
      auVar29._8_4_ = fStack_1d0;
      auVar29._12_4_ = fStack_1cc;
      auVar50 = vshufps_avx(auVar29,auStack_1c8,0x33);
      auVar50 = vshufps_avx(auVar29,auVar50,0x2f);
      auVar118 = ZEXT1664(CONCAT412(fVar121 * (auVar50._12_4_ + fVar104),
                                    CONCAT48(fVar120 * (auVar50._8_4_ + fVar103),
                                             CONCAT44(fVar119 * (auVar50._4_4_ + fVar102),
                                                      fVar117 * (auVar50._0_4_ + fVar101)))));
      (**(code **)(*plVar35 + 0x88))(plVar35,&fStack_258);
      auVar20._4_4_ = fStack_224;
      auVar20._0_4_ = fStack_228;
      auVar20._8_4_ = fStack_220;
      auVar20._12_4_ = fStack_21c;
      fVar117 = auVar118._0_4_;
      auVar75 = auVar118._0_16_;
      auVar50 = vshufps_avx(auVar75,auVar75,0x55);
      auVar75 = vshufps_avx(auVar75,auVar75,0xaa);
      auVar61._0_4_ =
           auVar75._0_4_ * fStack_238 +
           auVar50._0_4_ * fStack_248 + fVar117 * fStack_258 + fStack_228;
      auVar61._4_4_ =
           auVar75._4_4_ * fStack_234 +
           auVar50._4_4_ * fStack_244 + fVar117 * fStack_254 + fStack_224;
      auVar61._8_4_ =
           auVar75._8_4_ * fStack_230 +
           auVar50._8_4_ * fStack_240 + fVar117 * fStack_250 + fStack_220;
      auVar61._12_4_ =
           auVar75._12_4_ * fStack_22c +
           auVar50._12_4_ * fStack_23c + fVar117 * fStack_24c + fStack_21c;
      auVar50 = vblendps_avx(auVar61,auVar20,8);
      auVar94._0_4_ = fVar109 * auVar50._0_4_;
      auVar94._4_4_ = fVar110 * auVar50._4_4_;
      auVar94._8_4_ = fVar111 * auVar50._8_4_;
      auVar94._12_4_ = fVar112 * auVar50._12_4_;
      auVar75 = vroundps_avx(auVar94,3);
      auVar82._0_4_ = auVar75._0_4_ * fVar105 + auVar50._0_4_;
      auVar82._4_4_ = auVar75._4_4_ * fVar106 + auVar50._4_4_;
      auVar82._8_4_ = auVar75._8_4_ * fVar113 + auVar50._8_4_;
      auVar82._12_4_ = auVar75._12_4_ * fVar114 + auVar50._12_4_;
      auVar50 = vblendps_avx(auVar61,auVar82,3);
      auVar83._0_4_ = (int)auVar75._0_4_;
      auVar83._4_4_ = (int)auVar75._4_4_;
      auVar83._8_4_ = (int)auVar75._8_4_;
      auVar83._12_4_ = (int)auVar75._12_4_;
      auVar75 = vpackssdw_avx(auVar83,auVar83);
      sVar63 = auVar75._0_2_;
      auVar10._0_2_ = sVar63 + SUB42(fStack_228,0);
      sVar86 = auVar75._2_2_;
      auVar10._2_2_ = sVar86 + (short)((uint)fStack_228 >> 0x10);
      auVar10._4_2_ = sVar63 + SUB42(fStack_224,0);
      auVar10._6_2_ = sVar86 + (short)((uint)fStack_224 >> 0x10);
      auVar10._8_2_ = sVar63 + SUB42(fStack_220,0);
      auVar10._10_2_ = sVar86 + (short)((uint)fStack_220 >> 0x10);
      auVar10._12_2_ = sVar63 + SUB42(fStack_21c,0);
      auVar10._14_2_ = sVar86 + (short)((uint)fStack_21c >> 0x10);
      auVar50 = vpblendd_avx2(auVar50,auVar10,8);
      pauVar47[1] = auVar50;
      iVar42 = func_0x000144e05fa0(plVar35[1]);
      if (iVar40 == iVar42) {
        fVar117 = 0.0;
        fVar119 = 0.0;
        fVar120 = 0.0;
        fVar121 = 0.0;
      }
      else {
        uVar41 = (**(code **)(*plVar35 + 0xf0))(plVar35,iVar40);
        (**(code **)(*plVar35 + 0x108))(plVar35,uVar41,&uStack_1e8);
        fVar117 = fStack_1d8;
        fVar119 = fStack_1d4;
        fVar120 = fStack_1d0;
        fVar121 = fStack_1cc;
      }
      (**(code **)(*plVar35 + 0x88))(plVar35,&uStack_1e8);
      auVar30._4_4_ = fStack_1d4;
      auVar30._0_4_ = fStack_1d8;
      auVar30._8_4_ = fStack_1d0;
      auVar30._12_4_ = fStack_1cc;
      auVar50 = vshufps_avx(auVar30,auStack_1c8,0x33);
      auVar50 = vshufps_avx(auVar30,auVar50,0x2f);
      auVar118 = ZEXT1664(CONCAT412(fVar121 * (auVar50._12_4_ + fVar104),
                                    CONCAT48(fVar120 * (auVar50._8_4_ + fVar103),
                                             CONCAT44(fVar119 * (auVar50._4_4_ + fVar102),
                                                      fVar117 * (auVar50._0_4_ + fVar101)))));
      (**(code **)(*plVar35 + 0x88))(plVar35,&fStack_258);
      auVar21._4_4_ = fStack_224;
      auVar21._0_4_ = fStack_228;
      auVar21._8_4_ = fStack_220;
      auVar21._12_4_ = fStack_21c;
      fVar117 = auVar118._0_4_;
      auVar75 = auVar118._0_16_;
      auVar50 = vshufps_avx(auVar75,auVar75,0x55);
      auVar75 = vshufps_avx(auVar75,auVar75,0xaa);
      uVar46 = 1;
      uVar44 = 0;
      auVar62._0_4_ =
           auVar75._0_4_ * fStack_238 +
           auVar50._0_4_ * fStack_248 + fVar117 * fStack_258 + fStack_228;
      auVar62._4_4_ =
           auVar75._4_4_ * fStack_234 +
           auVar50._4_4_ * fStack_244 + fVar117 * fStack_254 + fStack_224;
      auVar62._8_4_ =
           auVar75._8_4_ * fStack_230 +
           auVar50._8_4_ * fStack_240 + fVar117 * fStack_250 + fStack_220;
      auVar62._12_4_ =
           auVar75._12_4_ * fStack_22c +
           auVar50._12_4_ * fStack_23c + fVar117 * fStack_24c + fStack_21c;
      auVar50 = vblendps_avx(auVar62,auVar21,8);
      auVar95._0_4_ = fVar109 * auVar50._0_4_;
      auVar95._4_4_ = fVar110 * auVar50._4_4_;
      auVar95._8_4_ = fVar111 * auVar50._8_4_;
      auVar95._12_4_ = fVar112 * auVar50._12_4_;
      auVar75 = vroundps_avx(auVar95,3);
      auVar84._0_4_ = auVar75._0_4_ * fVar105 + auVar50._0_4_;
      auVar84._4_4_ = auVar75._4_4_ * fVar106 + auVar50._4_4_;
      auVar84._8_4_ = auVar75._8_4_ * fVar113 + auVar50._8_4_;
      auVar84._12_4_ = auVar75._12_4_ * fVar114 + auVar50._12_4_;
      auVar50 = vblendps_avx(auVar62,auVar84,3);
      auVar85._0_4_ = (int)auVar75._0_4_;
      auVar85._4_4_ = (int)auVar75._4_4_;
      auVar85._8_4_ = (int)auVar75._8_4_;
      auVar85._12_4_ = (int)auVar75._12_4_;
      auVar75 = vpackssdw_avx(auVar85,auVar85);
      sVar63 = auVar75._0_2_;
      auVar11._0_2_ = sVar63 + SUB42(fStack_228,0);
      sVar86 = auVar75._2_2_;
      auVar11._2_2_ = sVar86 + (short)((uint)fStack_228 >> 0x10);
      auVar11._4_2_ = sVar63 + SUB42(fStack_224,0);
      auVar11._6_2_ = sVar86 + (short)((uint)fStack_224 >> 0x10);
      auVar11._8_2_ = sVar63 + SUB42(fStack_220,0);
      auVar11._10_2_ = sVar86 + (short)((uint)fStack_220 >> 0x10);
      auVar11._12_2_ = sVar63 + SUB42(fStack_21c,0);
      auVar11._14_2_ = sVar86 + (short)((uint)fStack_21c >> 0x10);
      auVar50 = vpblendd_avx2(auVar50,auVar11,8);
      *pauVar47 = auVar50;
      *(float *)pauVar47[2] = fVar97;
      *(float *)(pauVar47[2] + 4) = fVar98;
      *(float *)(pauVar47[2] + 8) = fVar99;
      *(float *)(pauVar47[2] + 0xc) = fVar100;
    } while ((uStack_19c & 1) != 0);
    uVar46 = (**(code **)(*param_2 + 8))(param_2);
    if ((int)uVar46 == 2) {
      uVar46 = FUN_1400d4250(lStack_210,param_2);
    }
    return uVar46;
  }
  uVar38 = (**(code **)(*param_2 + 8))();
  uVar39 = 0x588 >> (uVar38 & 0x1f);
  return (ulonglong)CONCAT31((int3)(uVar39 >> 8),(byte)uVar39 & uVar38 < 0xb);
}

