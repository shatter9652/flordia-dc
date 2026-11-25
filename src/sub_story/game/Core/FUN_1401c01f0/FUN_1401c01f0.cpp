// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401c01f0  size: 8959 bytes
// Name:    FUN_1401c01f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1407a07b0, FUN_1420ef810, FUN_14036bfa0, FUN_140299f30, FUN_145083e10, FUN_144431fa0, FUN_1451663a0, FUN_144431bf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401c01f0(longlong *param_1,ulonglong *param_2,longlong *param_3,char param_4)

{
  undefined8 *puVar1;
  float *pfVar2;
  ushort uVar3;
  undefined1 (*pauVar4) [16];
  float *pfVar5;
  float *pfVar6;
  undefined1 (*pauVar7) [16];
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined1 auVar23 [32];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar26;
  byte bVar27;
  undefined2 uVar28;
  undefined4 uVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong *plVar32;
  uint uVar33;
  ulonglong uVar34;
  longlong lVar35;
  longlong lVar36;
  longlong *plVar37;
  longlong lVar38;
  ushort uVar39;
  longlong lVar40;
  int iVar41;
  byte bVar42;
  uint uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  longlong *plVar46;
  longlong lVar47;
  uint uVar48;
  ulonglong uVar49;
  longlong unaff_GS_OFFSET;
  bool bVar50;
  bool bVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar108;
  float fVar110;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar109;
  float fVar111;
  float fVar112;
  float fVar113;
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
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
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
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  float fVar114;
  float fVar132;
  float fVar133;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  float fVar134;
  float fVar135;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  float fVar151;
  float fVar162;
  float fVar163;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  float fVar164;
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  float fVar165;
  float fVar176;
  float fVar177;
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  float fVar178;
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  float fVar192;
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  float fVar209;
  undefined1 auVar197 [16];
  float fVar193;
  float fVar194;
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  float fVar203;
  float fVar206;
  undefined1 in_ZMM6 [64];
  float fVar204;
  float fVar205;
  float fVar207;
  float fVar208;
  float fVar210;
  float fVar211;
  undefined1 auVar202 [64];
  float fVar212;
  undefined1 auVar213 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  float fVar221;
  undefined1 in_ZMM7 [64];
  undefined1 auVar220 [64];
  float fVar222;
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  float fVar230;
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  float fVar228;
  float fVar229;
  undefined1 in_ZMM8 [64];
  float fVar231;
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  float fVar236;
  undefined1 in_ZMM9 [64];
  float fVar237;
  float fVar240;
  undefined1 in_ZMM10 [64];
  undefined1 auVar239 [64];
  undefined1 auVar241 [16];
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar244 [64];
  undefined1 auVar245 [64];
  undefined1 auVar246 [16];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 in_ZMM12 [64];
  undefined1 auVar251 [64];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 in_ZMM13 [64];
  undefined1 auVar256 [64];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 in_ZMM14 [64];
  undefined1 auVar260 [64];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [64];
  undefined1 auVar264 [64];
  undefined1 auStack_608 [8];
  undefined8 uStack_600;
  longlong lStack_5f0;
  undefined1 auStack_5d8 [8];
  float fStack_5d0;
  float fStack_5cc;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  float fStack_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  undefined1 auStack_588 [8];
  undefined8 uStack_580;
  undefined1 auStack_578 [8];
  undefined8 uStack_570;
  longlong lStack_508;
  undefined1 auStack_4d8 [8];
  float fStack_4d0;
  float fStack_4cc;
  undefined1 auStack_4b8 [16];
  undefined8 uStack_470;
  undefined8 uStack_460;
  undefined8 uStack_450;
  undefined1 auStack_438 [16];
  undefined1 auStack_428 [8];
  float fStack_420;
  float fStack_41c;
  undefined1 auStack_418 [8];
  float fStack_410;
  float fStack_40c;
  undefined1 auStack_408 [8];
  float fStack_400;
  float fStack_3fc;
  undefined1 auStack_3f8 [8];
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  undefined8 uStack_288;
  undefined8 uStack_280;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auVar214 [16];
  undefined1 auVar232 [16];
  undefined1 auVar238 [16];
  
  auStack_68 = in_ZMM14._0_16_;
  auStack_78 = in_ZMM13._0_16_;
  auStack_88 = in_ZMM12._0_16_;
  auStack_a8 = in_ZMM10._0_16_;
  auStack_b8 = in_ZMM9._0_16_;
  auStack_c8 = in_ZMM8._0_16_;
  auStack_d8 = in_ZMM7._0_16_;
  auStack_e8 = in_ZMM6._0_16_;
  bVar27 = *(byte *)((longlong)param_1 + 0xb6);
  *(byte *)((longlong)param_1 + 0xb6) = bVar27 | 1;
  pauVar4 = (undefined1 (*) [16])param_1[1];
  lVar36 = *(longlong *)pauVar4[4];
  if ((bVar27 & 8) == 0 && *(char *)(lVar36 + 0x10) == '\x06') {
    lVar31 = *param_1;
    if ((*(longlong *)(lVar31 + 0x88) == 0) ||
       (lStack_5f0 = *(longlong *)(*(longlong *)(lVar31 + 0x88) + 0x20), lStack_5f0 == 0)) {
      lStack_5f0 = 0;
      bVar42 = 0;
    }
    else {
      bVar42 = (*(byte *)(lStack_5f0 + 0x26e) & 2) >> 1;
    }
    iVar41 = *(int *)(lVar31 + 0x80);
    lVar38 = param_1[2];
    pfVar5 = (float *)param_3[1];
    pfVar6 = (float *)param_3[2];
    uVar43 = (uint)*(ushort *)((longlong)param_1 + 0xb4);
    uVar30 = *(ulonglong *)(*param_3 + 0xa0);
    uVar34 = *(ulonglong *)(*param_3 + 0xa8);
    uVar3 = *(ushort *)(lVar36 + 0x9a);
    if ((bVar27 & 4) != 0) {
      uVar43 = 0;
    }
    uVar48 = 0x200;
    if ((int)(uVar43 + iVar41) < 0x200) {
      uVar48 = uVar43 + iVar41;
    }
    uVar45 = *param_2 + 7 & 0xfffffffffffffff8;
    uVar44 = (uVar48 << 4) + uVar45;
    uVar49 = 0;
    if (uVar44 <= param_2[2]) {
      *param_2 = uVar44;
      uVar49 = uVar45;
    }
    if (param_1[4] == 0) {
      param_1[4] = uVar49;
    }
    *(uint *)(param_1 + 3) = uVar48 & 0xffff;
    uVar43 = _DAT_145fc6f10;
    if ((*(byte *)((longlong)param_1 + 0xb6) & 4) == 0) {
      if (*(char *)(lVar31 + 0x98) == '\0') {
        lStack_508 = *(longlong *)(lVar36 + 0x88);
      }
      else {
        lStack_508 = 0;
      }
      auVar95 = *(undefined1 (*) [16])(lVar38 + 0x70);
      if (*(int *)(lVar38 + 0xc) == 0) {
        _auStack_3f8 = *pauVar4;
        _auStack_408 = pauVar4[1];
        _auStack_418 = pauVar4[2];
        _auStack_428 = pauVar4[3];
        auStack_438 = *(undefined1 (*) [16])(lVar38 + 0x50);
        auVar96 = *(undefined1 (*) [16])(lVar38 + 0x60);
      }
      else {
        auVar96 = *(undefined1 (*) [16])(lVar38 + 0x60);
        fVar52 = *(float *)(lVar38 + 0x6c);
        auVar97 = pauVar4[2];
        auStack_438 = *(undefined1 (*) [16])(lVar38 + 0x50);
        auVar115._0_4_ = auVar96._0_4_ + auVar96._0_4_;
        auVar115._4_4_ = auVar96._4_4_ + auVar96._4_4_;
        auVar115._8_4_ = auVar96._8_4_ + auVar96._8_4_;
        auVar115._12_4_ = auVar96._12_4_ + auVar96._12_4_;
        auVar55 = vshufps_avx(auVar96,auVar96,0xc9);
        auVar98 = vshufps_avx(auVar96,auVar96,0xd2);
        auVar56 = vshufps_avx(auVar115,auVar115,0xc9);
        auVar121 = vshufps_avx(auVar115,auVar115,0xd2);
        auVar116 = *pauVar4;
        auVar152._0_4_ = -(fVar52 * auVar121._0_4_) + auVar55._0_4_ * auVar115._0_4_;
        auVar152._4_4_ = -(fVar52 * auVar121._4_4_) + auVar55._4_4_ * auVar115._4_4_;
        auVar152._8_4_ = -(fVar52 * auVar121._8_4_) + auVar55._8_4_ * auVar115._8_4_;
        auVar152._12_4_ = -(fVar52 * auVar121._12_4_) + auVar55._12_4_ * auVar115._12_4_;
        auVar213._0_4_ = auVar98._0_4_ * auVar115._0_4_ + auVar56._0_4_ * fVar52;
        auVar213._4_4_ = auVar98._4_4_ * auVar115._4_4_ + auVar56._4_4_ * fVar52;
        auVar213._8_4_ = auVar98._8_4_ * auVar115._8_4_ + auVar56._8_4_ * fVar52;
        auVar213._12_4_ = auVar98._12_4_ * auVar115._12_4_ + auVar56._12_4_ * fVar52;
        auVar223._0_4_ =
             -(auVar121._0_4_ * auVar98._0_4_) - (auVar55._0_4_ * auVar56._0_4_ - _DAT_145fc6ed8);
        auVar223._4_4_ =
             -(auVar121._4_4_ * auVar98._4_4_) - (auVar55._4_4_ * auVar56._4_4_ - _DAT_145fc6ed8);
        auVar223._8_4_ =
             -(auVar121._8_4_ * auVar98._8_4_) - (auVar55._8_4_ * auVar56._8_4_ - _DAT_145fc6ed8);
        auVar223._12_4_ =
             -(auVar121._12_4_ * auVar98._12_4_) -
             (auVar55._12_4_ * auVar56._12_4_ - _DAT_145fc6ed8);
        auVar55 = pauVar4[1];
        auVar98 = vshufps_avx(auVar213,auVar213,0x55);
        auVar56 = vshufps_avx(auVar152,auVar152,0xaa);
        fVar52 = auVar116._0_4_;
        fVar53 = auVar116._4_4_;
        fVar54 = auVar116._8_4_;
        fVar108 = auVar116._12_4_;
        fVar109 = auVar55._0_4_;
        fVar110 = auVar55._4_4_;
        fVar111 = auVar55._8_4_;
        fVar112 = auVar55._12_4_;
        auVar121 = vshufps_avx(auVar223,auVar223,0x55);
        auVar115 = vshufps_avx(auVar152,auVar152,0x55);
        auVar257 = vshufps_avx(auVar223,auVar223,0xaa);
        fVar113 = auVar97._0_4_;
        auStack_3f8._0_4_ =
             fVar113 * auVar56._0_4_ + fVar109 * auVar98._0_4_ + auVar223._0_4_ * fVar52;
        fVar114 = auVar97._4_4_;
        auStack_3f8._4_4_ =
             fVar114 * auVar56._4_4_ + fVar110 * auVar98._4_4_ + auVar223._0_4_ * fVar53;
        fVar132 = auVar97._8_4_;
        fStack_3f0 = fVar132 * auVar56._8_4_ + fVar111 * auVar98._8_4_ + auVar223._0_4_ * fVar54;
        fVar133 = auVar97._12_4_;
        fStack_3ec = fVar133 * auVar56._12_4_ + fVar112 * auVar98._12_4_ + auVar223._0_4_ * fVar108;
        auVar98 = vshufps_avx(auVar213,auVar213,0xaa);
        auVar56 = vsubps_avx(pauVar4[3],auStack_438);
        auStack_408._0_4_ =
             fVar113 * auVar98._0_4_ + fVar109 * auVar121._0_4_ + auVar152._0_4_ * fVar52;
        auStack_408._4_4_ =
             fVar114 * auVar98._4_4_ + fVar110 * auVar121._4_4_ + auVar152._0_4_ * fVar53;
        fStack_400 = fVar132 * auVar98._8_4_ + fVar111 * auVar121._8_4_ + auVar152._0_4_ * fVar54;
        fStack_3fc = fVar133 * auVar98._12_4_ + fVar112 * auVar121._12_4_ + auVar152._0_4_ * fVar108
        ;
        fVar134 = auVar95._0_4_;
        auStack_418._0_4_ =
             fVar113 * auVar257._0_4_ + fVar109 * auVar115._0_4_ + auVar213._0_4_ * fVar52;
        auStack_418._4_4_ =
             fVar114 * auVar257._4_4_ + fVar110 * auVar115._4_4_ + auVar213._0_4_ * fVar53;
        fStack_410 = fVar132 * auVar257._8_4_ + fVar111 * auVar115._8_4_ + auVar213._0_4_ * fVar54;
        fStack_40c = fVar133 * auVar257._12_4_ +
                     fVar112 * auVar115._12_4_ + auVar213._0_4_ * fVar108;
        auVar98 = vsubps_avx(auVar116,_auStack_3f8);
        auVar116 = vshufps_avx(auVar95,auVar95,0x55);
        auVar121 = vsubps_avx(auVar55,_auStack_408);
        auVar55 = vshufps_avx(auVar95,auVar95,0xaa);
        auVar97 = vsubps_avx(auVar97,_auStack_418);
        auStack_428._0_4_ =
             auVar97._0_4_ * auVar55._0_4_ +
             auVar121._0_4_ * auVar116._0_4_ + auVar98._0_4_ * fVar134 + auVar56._0_4_;
        auStack_428._4_4_ =
             auVar97._4_4_ * auVar55._4_4_ +
             auVar121._4_4_ * auVar116._4_4_ + auVar98._4_4_ * fVar134 + auVar56._4_4_;
        fStack_420 = auVar97._8_4_ * auVar55._8_4_ +
                     auVar121._8_4_ * auVar116._8_4_ + auVar98._8_4_ * fVar134 + auVar56._8_4_;
        fStack_41c = auVar97._12_4_ * auVar55._12_4_ +
                     auVar121._12_4_ * auVar116._12_4_ + auVar98._12_4_ * fVar134 + auVar56._12_4_;
      }
      if ((ulonglong)uVar3 != 0) {
        uVar48 = *(uint *)(pauVar4[2] + 0xc);
        auVar97 = *(undefined1 (*) [16])(pauVar4[4] + 8);
        auVar263 = ZEXT1664(CONCAT412(_DAT_145fc6edc,
                                      CONCAT48(_DAT_145fc6edc,
                                               CONCAT44(_DAT_145fc6edc,_DAT_145fc6edc))));
        uVar49 = 0;
        uVar33 = uVar48 & 1;
        auVar116._0_4_ = auVar96._0_4_ ^ _DAT_145fc6f10;
        auVar116._4_4_ = auVar96._4_4_ ^ _DAT_145fc6f10;
        auVar116._8_4_ = auVar96._8_4_ ^ _DAT_145fc6f10;
        auVar116._12_4_ = auVar96._12_4_ ^ _DAT_145fc6f10;
        auVar96 = vblendps_avx(auVar116,auVar96,8);
        auVar55._0_4_ = (uint)auVar96._0_4_ ^ _DAT_145fc6f10;
        auVar55._4_4_ = (uint)auVar96._4_4_ ^ _DAT_145fc6f10;
        auVar55._8_4_ = (uint)auVar96._8_4_ ^ _DAT_145fc6f10;
        auVar55._12_4_ = (uint)auVar96._12_4_ ^ _DAT_145fc6f10;
        auVar116 = vblendps_avx(auVar55,auVar96,10);
        auVar98 = vshufpd_avx(auVar96,auVar55,1);
        auVar55 = vblendps_avx(auVar55,auVar96,9);
        auVar116 = vshufps_avx(auVar116,auVar116,0x1b);
        auVar55 = vshufps_avx(auVar55,auVar55,0xb1);
        lVar31 = **(longlong **)(unaff_GS_OFFSET + 0x58);
        auVar56._0_8_ = CONCAT44(uVar48,uVar48) & 0x100000001;
        auVar56._8_4_ = uVar33;
        auVar56._12_4_ = uVar33;
        do {
          auVar121 = auVar263._0_16_;
          uVar48 = (uint)uVar49;
          if (((*(uint *)((longlong)param_1 + (uVar49 >> 5 & 0x7ffffff) * 4 + 0x28) >>
                (uVar48 & 0x1f) & 1) == 0) &&
             (lVar38 = *(longlong *)(*(longlong *)(lVar36 + 0x70) + uVar49 * 8), lVar38 != 0)) {
            auStack_4b8 = auVar97;
            if (lStack_508 != 0) {
              auStack_4b8 = vpand_avx(auVar97,*(undefined1 (*) [16])(lStack_508 + uVar49 * 0x10));
            }
            fVar111 = *(float *)*pauVar4;
            fVar112 = *(float *)(*pauVar4 + 4);
            fVar113 = *(float *)(*pauVar4 + 8);
            fVar114 = *(float *)(*pauVar4 + 0xc);
            fVar132 = *(float *)pauVar4[1];
            fVar133 = *(float *)(pauVar4[1] + 4);
            fVar134 = *(float *)(pauVar4[1] + 8);
            fVar208 = *(float *)(pauVar4[1] + 0xc);
            fVar211 = *(float *)pauVar4[2];
            fVar192 = *(float *)(pauVar4[2] + 4);
            fVar203 = *(float *)(pauVar4[2] + 8);
            fVar206 = *(float *)(pauVar4[2] + 0xc);
            lVar40 = uVar49 * 0x40;
            lVar47 = *(longlong *)(lVar36 + 0x78 + (ulonglong)*(byte *)(*param_1 + 0x99) * 8);
            fVar52 = *(float *)(lVar47 + lVar40);
            auVar179._4_4_ = fVar52;
            auVar179._0_4_ = fVar52;
            auVar179._8_4_ = fVar52;
            auVar179._12_4_ = fVar52;
            fVar53 = *(float *)(lVar47 + 4 + lVar40);
            fVar54 = *(float *)(lVar47 + 8 + lVar40);
            fVar108 = *(float *)(lVar47 + 0x28 + lVar40);
            auVar250._4_4_ = fVar108;
            auVar250._0_4_ = fVar108;
            auVar250._8_4_ = fVar108;
            auVar250._12_4_ = fVar108;
            auVar115 = *(undefined1 (*) [16])(lVar47 + 0x30 + lVar40);
            auVar257 = *(undefined1 (*) [16])(lVar47 + lVar40);
            auVar152 = *(undefined1 (*) [16])(lVar47 + 0x10 + lVar40);
            auVar213 = *(undefined1 (*) [16])(lVar47 + 0x20 + lVar40);
            auStack_608._4_4_ = *(float *)(lVar47 + 0x14 + lVar40);
            fVar109 = *(float *)(lVar47 + 0x10 + lVar40);
            fVar231 = fVar211 * fVar54 + fVar132 * fVar53 + fVar111 * fVar52;
            fVar236 = fVar192 * fVar54 + fVar133 * fVar53 + fVar112 * fVar52;
            auVar232._0_8_ = CONCAT44(fVar236,fVar231);
            auVar232._8_4_ = fVar203 * fVar54 + fVar134 * fVar53 + fVar113 * fVar52;
            auVar232._12_4_ = fVar206 * fVar54 + fVar208 * fVar53 + fVar114 * fVar52;
            fVar52 = *(float *)(lVar47 + 0x18 + lVar40);
            auStack_608._0_4_ = auStack_608._4_4_;
            uStack_600._0_4_ = (float)auStack_608._4_4_;
            uStack_600._4_4_ = (float)auStack_608._4_4_;
            fVar53 = *(float *)(lVar47 + 0x20 + lVar40);
            fVar54 = *(float *)(lVar47 + 0x30 + lVar40);
            fVar237 = fVar211 * fVar52 + (float)auStack_608._4_4_ * fVar132 + fVar111 * fVar109;
            fVar240 = fVar192 * fVar52 + (float)auStack_608._4_4_ * fVar133 + fVar112 * fVar109;
            auVar238._0_8_ = CONCAT44(fVar240,fVar237);
            auVar238._8_4_ =
                 fVar203 * fVar52 + (float)auStack_608._4_4_ * fVar134 + fVar113 * fVar109;
            auVar238._12_4_ =
                 fVar206 * fVar52 + (float)auStack_608._4_4_ * fVar208 + fVar114 * fVar109;
            fVar52 = *(float *)(lVar47 + 0x24 + lVar40);
            fVar109 = *(float *)(lVar47 + 0x34 + lVar40);
            auVar117 = vunpcklps_avx(auVar257,auVar213);
            fVar110 = *(float *)(lVar47 + 0x38 + lVar40);
            auVar223 = vunpckhps_avx(auVar257,auVar213);
            fVar212 = fVar108 * fVar211 + fVar132 * fVar52 + fVar111 * fVar53;
            fVar221 = fVar108 * fVar192 + fVar133 * fVar52 + fVar112 * fVar53;
            auVar214._0_8_ = CONCAT44(fVar221,fVar212);
            auVar214._8_4_ = fVar108 * fVar203 + fVar134 * fVar52 + fVar113 * fVar53;
            auVar214._12_4_ = fVar108 * fVar206 + fVar208 * fVar52 + fVar114 * fVar53;
            auStack_5d8._0_4_ =
                 fVar211 * fVar110 + fVar132 * fVar109 + fVar111 * fVar54 + *(float *)pauVar4[3];
            auStack_5d8._4_4_ =
                 fVar192 * fVar110 +
                 fVar133 * fVar109 + fVar112 * fVar54 + *(float *)(pauVar4[3] + 4);
            fStack_5d0 = fVar203 * fVar110 +
                         fVar134 * fVar109 + fVar113 * fVar54 + *(float *)(pauVar4[3] + 8);
            fStack_5cc = fVar206 * fVar110 +
                         fVar208 * fVar109 + fVar114 * fVar54 + *(float *)(pauVar4[3] + 0xc);
            uStack_450 = auVar214._8_8_;
            auVar180._12_4_ = 0;
            auVar180._0_12_ = ZEXT412(0);
            auVar180 = auVar180 << 0x20;
            auVar122 = vunpckhps_avx(auVar152,auVar180);
            auVar199 = vunpcklps_avx(auVar152,auVar180);
            auVar123 = vunpcklps_avx(auVar223,auVar122);
            auVar167 = vunpcklps_avx(auVar117,auVar199);
            auVar117 = vunpckhps_avx(auVar117,auVar199);
            auVar122 = vsubps_avx(auVar95,auVar115);
            fVar52 = auVar122._0_4_;
            auVar223 = vshufps_avx(auVar122,auVar122,0x55);
            auVar122 = vshufps_avx(auVar122,auVar122,0xaa);
            auVar11 = vunpcklps_avx(auVar232,auVar214);
            auVar12 = vunpcklps_avx(auVar238,auVar180);
            auVar199 = vunpckhps_avx(auVar232,auVar214);
            auVar180 = vunpckhps_avx(auVar238,auVar180);
            auStack_578._4_4_ =
                 auVar123._4_4_ * auVar122._4_4_ +
                 auVar117._4_4_ * auVar223._4_4_ + fVar52 * auVar167._4_4_;
            auStack_578._0_4_ =
                 auVar123._0_4_ * auVar122._0_4_ +
                 auVar117._0_4_ * auVar223._0_4_ + fVar52 * auVar167._0_4_;
            uStack_570._0_4_ =
                 auVar123._8_4_ * auVar122._8_4_ +
                 auVar117._8_4_ * auVar223._8_4_ + fVar52 * auVar167._8_4_;
            uStack_570._4_4_ =
                 auVar123._12_4_ * auVar122._12_4_ +
                 auVar117._12_4_ * auVar223._12_4_ + fVar52 * auVar167._12_4_;
            if (bVar42 == 0) {
              bVar27 = 0xff;
              bVar50 = true;
              auVar223 = auVar232;
              auVar122 = auVar238;
              if ((*(byte *)((longlong)param_1 + 0xb6) & 2) != 0) goto LAB_1401c0901;
            }
            else {
              auVar263 = ZEXT1664(auVar213);
              auVar202 = ZEXT1664(auVar199);
              auVar220 = ZEXT1664(auVar179);
              auVar245 = ZEXT1664(auVar232);
              auVar239 = ZEXT1664(auVar238);
              auVar244 = ZEXT1664(auVar152);
              auVar251 = ZEXT1664(auVar115);
              auVar256 = ZEXT1664(auVar250);
              auVar260 = ZEXT1664(auVar257);
              auVar264 = ZEXT1664(auVar121);
              uVar29 = FUN_1407a07b0(*(undefined8 *)(*param_1 + 0x88));
              bVar27 = func_0x000145317940(*(undefined8 *)(lStack_5f0 + 0x528),
                                           *(undefined8 *)(lStack_5f0 + 0x538),uVar49 & 0xffffffff,
                                           uVar29);
              auVar122 = auVar239._0_16_;
              auVar223 = auVar245._0_16_;
              auVar250 = auVar256._0_16_;
              auVar179 = auVar220._0_16_;
              auVar199 = auVar202._0_16_;
              auVar213 = auVar263._0_16_;
              auVar115 = auVar251._0_16_;
              auVar121 = auVar264._0_16_;
              auVar257 = auVar260._0_16_;
              auVar152 = auVar244._0_16_;
              bVar50 = (*(byte *)((longlong)param_1 + 0xb6) & 2) == 0;
              if (bVar27 == 0 && !bVar50) {
                bVar27 = 0;
LAB_1401c0901:
                lVar47 = *(longlong *)(lVar36 + 0x80);
                auVar115 = vcmpps_avx(auVar115,*(undefined1 (*) [16])(lVar47 + 0x30 + lVar40),0);
                auVar117 = vcmpps_avx(auVar213,*(undefined1 (*) [16])(lVar47 + 0x20 + lVar40),0);
                auVar123 = vcmpps_avx(auVar257,*(undefined1 (*) [16])(lVar47 + lVar40),0);
                auVar167 = vcmpps_avx(auVar152,*(undefined1 (*) [16])(lVar47 + 0x10 + lVar40),0);
                auVar57._0_4_ = auVar117._0_4_ & auVar115._0_4_ & auVar167._0_4_ & auVar123._0_4_;
                auVar57._4_4_ = auVar117._4_4_ & auVar115._4_4_ & auVar167._4_4_ & auVar123._4_4_;
                auVar57._8_4_ = auVar117._8_4_ & auVar115._8_4_ & auVar167._8_4_ & auVar123._8_4_;
                auVar57._12_4_ =
                     auVar117._12_4_ & auVar115._12_4_ & auVar167._12_4_ & auVar123._12_4_;
                uVar29 = vmovmskps_avx(auVar57);
                bVar51 = (~(byte)uVar29 & 7) == 0;
                if (!bVar51) {
                  _auStack_578 = ZEXT416(0) << 0x20;
                }
                bVar50 = false;
                if ((bVar51 & bVar42) != 1) goto LAB_1401c09e1;
              }
              auVar115 = *(undefined1 (*) [16])(lStack_5f0 + 0xc0);
              auVar117 = vpunpckhwd_avx(auVar115,auVar115);
              auVar117 = vpsrad_avx(auVar117,0x10);
              auVar117 = vcvtdq2ps_avx(auVar117);
              auVar117 = vshufpd_avx(auVar117,auVar117,3);
              auVar123 = vsubps_avx(*(undefined1 (*) [16])
                                     (*(longlong *)(lStack_5f0 + 0x310 + (ulonglong)bVar27 * 8) +
                                     0x30),_auStack_5d8);
              auVar58._0_4_ = auVar123._0_4_ + auVar117._0_4_ * _DAT_146159c90 + auVar115._0_4_;
              auVar58._4_4_ = auVar123._4_4_ + auVar117._4_4_ * _UNK_146159c94 + auVar115._4_4_;
              auVar58._8_4_ = auVar123._8_4_ + auVar117._8_4_ * _UNK_146159c98 + auVar115._8_4_;
              auVar58._12_4_ = auVar123._12_4_ + auVar117._12_4_ * _UNK_146159c9c + auVar115._12_4_;
              auVar167 = vunpcklps_avx(auVar11,auVar12);
              auVar123 = vunpckhps_avx(auVar11,auVar12);
              auVar57 = vunpcklps_avx(auVar199,auVar180);
              auVar115 = vshufps_avx(auVar58,auVar58,0x55);
              auVar117 = vshufps_avx(auVar58,auVar58,0xaa);
              auStack_578._4_4_ =
                   auVar57._4_4_ * auVar117._4_4_ +
                   auVar123._4_4_ * auVar115._4_4_ + auVar58._0_4_ * auVar167._4_4_;
              auStack_578._0_4_ =
                   auVar57._0_4_ * auVar117._0_4_ +
                   auVar123._0_4_ * auVar115._0_4_ + auVar58._0_4_ * auVar167._0_4_;
              uStack_570._0_4_ =
                   auVar57._8_4_ * auVar117._8_4_ +
                   auVar123._8_4_ * auVar115._8_4_ + auVar58._0_4_ * auVar167._8_4_;
              uStack_570._4_4_ =
                   auVar57._12_4_ * auVar117._12_4_ +
                   auVar123._12_4_ * auVar115._12_4_ + auVar58._0_4_ * auVar167._12_4_;
            }
LAB_1401c09e1:
            bVar27 = *(byte *)(lVar38 + 0x10);
            fVar52 = auStack_578._0_4_;
            auVar115 = vshufps_avx(_auStack_578,_auStack_578,0x55);
            auVar117 = vshufps_avx(_auStack_578,_auStack_578,0xaa);
            uStack_5b8._0_4_ = auVar117._0_4_;
            uStack_5b8._4_4_ = auVar117._4_4_;
            uStack_5b0._0_4_ = auVar117._8_4_;
            uStack_5b0._4_4_ = auVar117._12_4_;
            fStack_598 = auVar115._0_4_;
            fStack_594 = auVar115._4_4_;
            fStack_590 = auVar115._8_4_;
            fStack_58c = auVar115._12_4_;
            if (((bVar27 < 0xf) && ((0x4207U >> (bVar27 & 0x1f) & 1) != 0)) ||
               ((byte)(bVar50 ^ 1U | bVar42) == 1)) {
              puVar1 = (undefined8 *)(*(longlong *)(lVar36 + 0x80) + lVar40);
              uStack_218 = *puVar1;
              uStack_210 = puVar1[1];
              uStack_208 = puVar1[2];
              uStack_200 = puVar1[3];
              puVar1 = (undefined8 *)(*(longlong *)(lVar36 + 0x80) + 0x20 + lVar40);
              fStack_1f8 = (float)*puVar1;
              fStack_1f4 = (float)((ulonglong)*puVar1 >> 0x20);
              fStack_1f0 = (float)puVar1[1];
              fStack_1ec = (float)((ulonglong)puVar1[1] >> 0x20);
              fStack_1e8 = (float)puVar1[2];
              fStack_1e4 = (float)((ulonglong)puVar1[2] >> 0x20);
              fStack_1e0 = (float)puVar1[3];
              fStack_1dc = (float)((ulonglong)puVar1[3] >> 0x20);
              if (bVar42 != 0) {
                if (((*(byte *)(lStack_5f0 + 0x560) & 1) != 0) &&
                   (*(char *)(lVar31 + 0x138a) == '\0')) {
                  auVar263 = ZEXT1664(auVar223);
                  auVar202 = ZEXT1664(auVar122);
                  FUN_1420ef810(_DAT_14a95dee0);
                  auVar122 = auVar202._0_16_;
                  auVar223 = auVar263._0_16_;
                }
                if ((*(int *)(lStack_5f0 + 0x540) != 0) || (*(int *)(lStack_5f0 + 0x544) != 0)) {
                  iVar41 = 0;
                  if (*(longlong *)(*param_1 + 0x88) == 0) {
                    uVar28 = 0xffff;
                  }
                  else {
                    auVar263 = ZEXT1664(auVar223);
                    auVar202 = ZEXT1664(auVar122);
                    uVar28 = func_0x0001401c0010(*(longlong *)(*param_1 + 0x88),uVar49 & 0xffffffff)
                    ;
                    auVar122 = auVar202._0_16_;
                    auVar223 = auVar263._0_16_;
                    iVar41 = 0;
                    if (*(longlong *)(*param_1 + 0x88) != 0) {
                      iVar41 = *(int *)(*(longlong *)(*param_1 + 0x88) + 0x10);
                      iVar41 = iVar41 + (uint)(iVar41 == 0);
                    }
                  }
                  uStack_288 = *(undefined8 *)(lStack_5f0 + 0x550);
                  uStack_280 = *(undefined8 *)(lStack_5f0 + 0x558);
                  auVar263 = ZEXT1664(auVar223);
                  auVar202 = ZEXT1664(auVar122);
                  FUN_144431bf0((ulonglong)CONCAT24(uVar28,iVar41) | 0xffff000000000000,
                                *(undefined4 *)(lStack_5f0 + 0x540),
                                *(undefined4 *)(lStack_5f0 + 0x544),&uStack_288,&uStack_218);
                  auVar122 = auVar202._0_16_;
                  auVar223 = auVar263._0_16_;
                }
              }
              fStack_278 = (float)auStack_418._0_4_ * (float)uStack_210 +
                           (float)auStack_408._0_4_ * uStack_218._4_4_ +
                           (float)uStack_218 * (float)auStack_3f8._0_4_;
              fStack_274 = (float)auStack_418._4_4_ * (float)uStack_210 +
                           (float)auStack_408._4_4_ * uStack_218._4_4_ +
                           (float)uStack_218 * (float)auStack_3f8._4_4_;
              fStack_270 = fStack_410 * (float)uStack_210 +
                           fStack_400 * uStack_218._4_4_ + (float)uStack_218 * fStack_3f0;
              fStack_26c = fStack_40c * (float)uStack_210 +
                           fStack_3fc * uStack_218._4_4_ + (float)uStack_218 * fStack_3ec;
              fStack_268 = (float)auStack_418._0_4_ * (float)uStack_200 +
                           (float)auStack_408._0_4_ * uStack_208._4_4_ +
                           (float)uStack_208 * (float)auStack_3f8._0_4_;
              fStack_264 = (float)auStack_418._4_4_ * (float)uStack_200 +
                           (float)auStack_408._4_4_ * uStack_208._4_4_ +
                           (float)uStack_208 * (float)auStack_3f8._4_4_;
              fStack_260 = fStack_410 * (float)uStack_200 +
                           fStack_400 * uStack_208._4_4_ + (float)uStack_208 * fStack_3f0;
              fStack_25c = fStack_40c * (float)uStack_200 +
                           fStack_3fc * uStack_208._4_4_ + (float)uStack_208 * fStack_3ec;
              fStack_258 = (float)auStack_418._0_4_ * fStack_1f0 +
                           (float)auStack_408._0_4_ * fStack_1f4 +
                           fStack_1f8 * (float)auStack_3f8._0_4_;
              fStack_254 = (float)auStack_418._4_4_ * fStack_1f0 +
                           (float)auStack_408._4_4_ * fStack_1f4 +
                           fStack_1f8 * (float)auStack_3f8._4_4_;
              fStack_250 = fStack_410 * fStack_1f0 +
                           fStack_400 * fStack_1f4 + fStack_1f8 * fStack_3f0;
              fStack_24c = fStack_40c * fStack_1f0 +
                           fStack_3fc * fStack_1f4 + fStack_1f8 * fStack_3ec;
              fStack_248 = (float)auStack_418._0_4_ * fStack_1e0 +
                           (float)auStack_408._0_4_ * fStack_1e4 +
                           (float)auStack_3f8._0_4_ * fStack_1e8 + (float)auStack_428._0_4_;
              fStack_244 = (float)auStack_418._4_4_ * fStack_1e0 +
                           (float)auStack_408._4_4_ * fStack_1e4 +
                           (float)auStack_3f8._4_4_ * fStack_1e8 + (float)auStack_428._4_4_;
              fStack_240 = fStack_410 * fStack_1e0 +
                           fStack_400 * fStack_1e4 + fStack_3f0 * fStack_1e8 + fStack_420;
              fStack_23c = fStack_40c * fStack_1e0 +
                           fStack_3fc * fStack_1e4 + fStack_3ec * fStack_1e8 + fStack_41c;
              auVar263 = ZEXT1664(auVar223);
              auVar202 = ZEXT1664(auVar122);
              FUN_145083e10();
              auVar223 = auVar263._0_16_;
              auVar10._4_4_ = fStack_274;
              auVar10._0_4_ = fStack_278;
              auVar10._8_4_ = fStack_270;
              auVar10._12_4_ = fStack_26c;
              bVar27 = *(byte *)(lVar38 + 0x10);
              auStack_608._0_4_ = auVar263._0_4_;
              auStack_608._4_4_ = auVar263._4_4_;
              uStack_600._0_4_ = auVar263._8_4_;
              uStack_600._4_4_ = auVar263._12_4_;
              auVar117._0_4_ = fStack_268 * (float)auStack_608._0_4_;
              auVar117._4_4_ = fStack_264 * (float)auStack_608._4_4_;
              auVar117._8_4_ = fStack_260 * (float)uStack_600;
              auVar117._12_4_ = fStack_25c * uStack_600._4_4_;
              auVar122._0_4_ = (float)auStack_608._0_4_ * fStack_278;
              auVar122._4_4_ = (float)auStack_608._4_4_ * fStack_274;
              auVar122._8_4_ = (float)uStack_600 * fStack_270;
              auVar122._12_4_ = uStack_600._4_4_ * fStack_26c;
              auVar233._0_12_ = ZEXT812(0);
              auVar233._12_4_ = 0;
              auStack_588._4_4_ = fStack_264;
              auStack_588._0_4_ = fStack_268;
              uStack_580._0_4_ = fStack_260;
              uStack_580._4_4_ = fStack_25c;
              auStack_4d8._4_4_ = fStack_254;
              auStack_4d8._0_4_ = fStack_258;
              fStack_4d0 = fStack_250;
              fStack_4cc = fStack_24c;
              auVar121 = vblendps_avx(auVar117,auVar233,8);
              auVar167._0_4_ = fStack_258 * (float)auStack_608._0_4_;
              auVar167._4_4_ = fStack_254 * (float)auStack_608._4_4_;
              auVar167._8_4_ = fStack_250 * (float)uStack_600;
              auVar167._12_4_ = fStack_24c * uStack_600._4_4_;
              auVar115 = vblendps_avx(auVar122,auVar233,8);
              auVar257 = vhaddps_avx(auVar115,auVar115);
              auVar152 = vhaddps_avx(auVar115,auVar121);
              auVar213 = vhaddps_avx(auVar257,auVar257);
              auVar121 = vblendps_avx(auVar167,auVar233,8);
              fVar110 = auVar202._0_4_;
              auVar168._0_4_ = fVar110 * fStack_278;
              fVar111 = auVar202._4_4_;
              auVar168._4_4_ = fVar111 * fStack_274;
              fVar112 = auVar202._8_4_;
              auVar168._8_4_ = fVar112 * fStack_270;
              fVar113 = auVar202._12_4_;
              auVar168._12_4_ = fVar113 * fStack_26c;
              auVar257 = vblendps_avx(auVar168,auVar233,8);
              auVar169._0_4_ = fVar110 * fStack_268;
              auVar169._4_4_ = fVar111 * fStack_264;
              auVar169._8_4_ = fVar112 * fStack_260;
              auVar169._12_4_ = fVar113 * fStack_25c;
              auVar117 = vhaddps_avx(auVar257,auVar257);
              auVar257 = vblendps_avx(auVar169,auVar233,8);
              auVar123 = vhaddps_avx(auVar115,auVar257);
              auVar257 = vhaddps_avx(auVar257,auVar257);
              auVar246._0_4_ = fStack_278 * fVar212;
              auVar246._4_4_ = fStack_274 * fVar221;
              auVar246._8_4_ = fStack_270 * auVar214._8_4_;
              auVar246._12_4_ = fStack_26c * auVar214._12_4_;
              auVar115 = vblendps_avx(auVar246,auVar233,8);
              auVar247._0_4_ = fStack_268 * fVar212;
              auVar247._4_4_ = fStack_264 * fVar221;
              auVar247._8_4_ = fStack_260 * auVar214._8_4_;
              auVar247._12_4_ = fStack_25c * auVar214._12_4_;
              auVar167 = vhaddps_avx(auVar257,auVar257);
              auVar257 = vblendps_avx(auVar247,auVar233,8);
              auVar257 = vhaddps_avx(auVar257,auVar121);
              auVar182._0_4_ = fStack_258 * fVar212;
              auVar182._4_4_ = fStack_254 * fVar221;
              auVar182._8_4_ = fStack_250 * auVar214._8_4_;
              auVar182._12_4_ = fStack_24c * auVar214._12_4_;
              auVar122 = auVar202._0_16_;
              auVar179 = vhaddps_avx(auVar152,auVar122);
              auVar121 = vblendps_avx(auVar182,auVar233,8);
              auVar115 = vhaddps_avx(auVar115,auVar121);
              auVar121 = vhaddps_avx(auVar121,auVar121);
              auVar257 = vhaddps_avx(auVar257,auVar117);
              auVar152 = vhaddps_avx(auVar123,auVar115);
              auVar117 = vhaddps_avx(auVar115,auVar123);
              auVar123 = vhaddps_avx(auVar121,auVar121);
              auVar121 = vshufps_avx(auVar152,auVar152,0x34);
              auVar152 = vshufps_avx(auVar152,auVar152,0x4d);
              auVar117 = vshufps_avx(auVar117,auVar117,0x79);
              auVar215._0_4_ = auVar117._0_4_ + auVar152._0_4_;
              auVar215._4_4_ = auVar117._4_4_ + auVar152._4_4_;
              auVar215._8_4_ = auVar117._8_4_ + auVar152._8_4_;
              auVar215._12_4_ = auVar117._12_4_ + auVar152._12_4_;
              auVar196._0_4_ = auVar121._0_4_ + auVar215._0_4_;
              auVar196._4_4_ = auVar121._4_4_ + auVar215._4_4_;
              auVar196._8_4_ = auVar121._8_4_ + auVar215._8_4_;
              auVar196._12_4_ = auVar121._12_4_ + auVar215._12_4_;
              auVar121 = vsubps_avx(auVar121,auVar215);
              auVar121 = vblendps_avx(auVar121,auVar196,8);
              auVar216._0_4_ = _DAT_145fc6ed8 + auVar121._0_4_;
              auVar216._4_4_ = _DAT_145fc6ed8 + auVar121._4_4_;
              auVar216._8_4_ = _DAT_145fc6ed8 + auVar121._8_4_;
              auVar216._12_4_ = _DAT_145fc6ed8 + auVar121._12_4_;
              auVar121 = vrsqrtps_avx(auVar216);
              fVar53 = auVar121._0_4_;
              fVar54 = auVar121._4_4_;
              fVar108 = auVar121._8_4_;
              fVar109 = auVar121._12_4_;
              auVar252._0_4_ = fStack_258 * fVar110;
              auVar252._4_4_ = fStack_254 * fVar111;
              auVar252._8_4_ = fStack_250 * fVar112;
              auVar252._12_4_ = fStack_24c * fVar113;
              auVar121 = vblendps_avx(auVar252,auVar233,8);
              auVar121 = vhaddps_avx(auVar121,auVar122);
              auVar224._0_4_ =
                   ((-(_DAT_145fc6edc * fVar53 * fVar53 * auVar216._0_4_) + _DAT_145fc6edc) * fVar53
                   + fVar53) * _DAT_145fc6edc;
              auVar224._4_4_ =
                   ((-(_DAT_145fc6edc * fVar54 * fVar54 * auVar216._4_4_) + _DAT_145fc6edc) * fVar54
                   + fVar54) * _DAT_145fc6edc;
              auVar224._8_4_ =
                   ((-(_DAT_145fc6edc * fVar108 * fVar108 * auVar216._8_4_) + _DAT_145fc6edc) *
                    fVar108 + fVar108) * _DAT_145fc6edc;
              auVar224._12_4_ =
                   ((-(_DAT_145fc6edc * fVar109 * fVar109 * auVar216._12_4_) + _DAT_145fc6edc) *
                    fVar109 + fVar109) * _DAT_145fc6edc;
              auVar121 = vhaddps_avx(auVar115,auVar121);
              auVar152 = vcmpps_avx(auVar213,auVar123,1);
              auVar121 = vshufps_avx(auVar121,auVar179,0x12);
              auVar248._0_4_ = auVar121._0_4_ + auVar257._0_4_;
              auVar248._4_4_ = auVar121._4_4_ + auVar257._4_4_;
              auVar248._8_4_ = auVar121._8_4_ + auVar257._8_4_;
              auVar248._12_4_ = auVar121._12_4_ + auVar257._12_4_;
              auVar250 = vsubps_avx(auVar121,auVar257);
              auVar121 = vblendps_avx(auVar248,auVar250,1);
              auVar115 = vblendps_avx(auVar248,auVar250,2);
              auVar117 = vshufps_avx(auVar248,auVar250,0xa1);
              auVar179 = vshufps_avx(auVar121,auVar121,0x18);
              auVar257 = vshufpd_avx(auVar115,auVar115,1);
              auVar121 = vblendps_avx(auVar117,auVar216,4);
              auVar115 = vblendps_avx(auVar179,auVar216,1);
              auVar257 = vblendps_avx(auVar257,auVar216,2);
              auVar253._0_4_ = auVar224._0_4_ * auVar115._0_4_;
              auVar253._4_4_ = auVar224._0_4_ * auVar115._4_4_;
              auVar253._8_4_ = auVar224._0_4_ * auVar115._8_4_;
              auVar253._12_4_ = auVar224._0_4_ * auVar115._12_4_;
              auVar115 = vshufps_avx(auVar224,auVar224,0x55);
              auVar258._0_4_ = auVar115._0_4_ * auVar257._0_4_;
              auVar258._4_4_ = auVar115._4_4_ * auVar257._4_4_;
              auVar258._8_4_ = auVar115._8_4_ * auVar257._8_4_;
              auVar258._12_4_ = auVar115._12_4_ * auVar257._12_4_;
              auVar257 = vcmpps_avx(auVar213,auVar167,1);
              auVar115 = vcmpps_avx(auVar167,auVar123,1);
              auVar213 = vshufps_avx(auVar224,auVar224,0xff);
              auVar123._0_4_ = auVar152._0_4_ & auVar115._0_4_;
              auVar123._4_4_ = auVar152._4_4_ & auVar115._4_4_;
              auVar123._8_4_ = auVar152._8_4_ & auVar115._8_4_;
              auVar123._12_4_ = auVar152._12_4_ & auVar115._12_4_;
              auVar115 = vblendps_avx(auVar250,auVar216,8);
              auVar117 = vsubps_avx(auVar122,_auStack_588);
              auVar170._0_4_ = auVar213._0_4_ * auVar115._0_4_;
              auVar170._4_4_ = auVar213._4_4_ * auVar115._4_4_;
              auVar170._8_4_ = auVar213._8_4_ * auVar115._8_4_;
              auVar170._12_4_ = auVar213._12_4_ * auVar115._12_4_;
              auVar152 = vcmpps_avx(auVar233,auVar196,1);
              auVar115 = vblendvps_avx(auVar253,auVar258,auVar257);
              auVar257 = vshufps_avx(auVar224,auVar224,0xaa);
              auVar183._0_4_ = auVar152._0_4_;
              auVar183._4_4_ = auVar183._0_4_;
              auVar183._8_4_ = auVar183._0_4_;
              auVar183._12_4_ = auVar183._0_4_;
              auVar249._0_4_ = auVar257._0_4_ * auVar121._0_4_;
              auVar249._4_4_ = auVar257._4_4_ * auVar121._4_4_;
              auVar249._8_4_ = auVar257._8_4_ * auVar121._8_4_;
              auVar249._12_4_ = auVar257._12_4_ * auVar121._12_4_;
              auVar121 = vblendvps_avx(auVar115,auVar249,auVar123);
              auVar257._4_4_ = fStack_244;
              auVar257._0_4_ = fStack_248;
              auVar257._8_4_ = fStack_240;
              auVar257._12_4_ = fStack_23c;
              auVar115 = vsubps_avx(_auStack_5d8,auVar257);
              auVar121 = vblendvps_avx(auVar121,auVar170,auVar183);
              auVar257 = vsubps_avx(auVar223,auVar10);
              auVar152 = vsubps_avx(auVar214,_auStack_4d8);
              auStack_588._0_4_ =
                   (float)uStack_5b8 * auVar152._0_4_ +
                   auVar117._0_4_ * fStack_598 + auVar257._0_4_ * fVar52 + auVar115._0_4_;
              auStack_588._4_4_ =
                   uStack_5b8._4_4_ * auVar152._4_4_ +
                   auVar117._4_4_ * fStack_594 + auVar257._4_4_ * fVar52 + auVar115._4_4_;
              uStack_580._0_4_ =
                   (float)uStack_5b0 * auVar152._8_4_ +
                   auVar117._8_4_ * fStack_590 + auVar257._8_4_ * fVar52 + auVar115._8_4_;
              uStack_580._4_4_ =
                   uStack_5b0._4_4_ * auVar152._12_4_ +
                   auVar117._12_4_ * fStack_58c + auVar257._12_4_ * fVar52 + auVar115._12_4_;
            }
            else {
              auVar115 = vblendps_avx(auVar257,auVar152,2);
              auVar117 = vblendps_avx(auVar257,auVar152,3);
              auVar115 = vblendps_avx(auVar213,auVar115,3);
              auVar117 = vblendps_avx(auVar117,auVar213,2);
              auVar123 = vshufps_avx(auVar115,auVar115,0x49);
              auVar167 = vshufps_avx(auVar115,auVar115,0x92);
              auVar57 = vshufps_avx(auVar115,auVar115,0x24);
              auVar117 = vshufps_avx(auVar117,auVar117,9);
              auVar136._0_4_ = auVar167._0_4_ + auVar123._0_4_;
              auVar136._4_4_ = auVar167._4_4_ + auVar123._4_4_;
              auVar136._8_4_ = auVar167._8_4_ + auVar123._8_4_;
              auVar136._12_4_ = auVar167._12_4_ + auVar123._12_4_;
              auVar59._0_4_ = auVar136._0_4_ + auVar57._0_4_;
              auVar59._4_4_ = auVar136._4_4_ + auVar57._4_4_;
              auVar59._8_4_ = auVar136._8_4_ + auVar57._8_4_;
              auVar59._12_4_ = auVar136._12_4_ + auVar57._12_4_;
              auVar115 = vsubps_avx(auVar115,auVar136);
              auVar115 = vblendps_avx(auVar115,auVar59,8);
              auVar118._0_4_ = auVar115._0_4_ + _DAT_145fc6ed8;
              auVar118._4_4_ = auVar115._4_4_ + _DAT_145fc6ed8;
              auVar118._8_4_ = auVar115._8_4_ + _DAT_145fc6ed8;
              auVar118._12_4_ = auVar115._12_4_ + _DAT_145fc6ed8;
              auVar115 = vrsqrtps_avx(auVar118);
              fVar53 = auVar115._0_4_;
              fVar54 = auVar115._4_4_;
              fVar108 = auVar115._8_4_;
              fVar109 = auVar115._12_4_;
              fVar110 = auVar121._0_4_;
              fVar111 = auVar121._4_4_;
              fVar112 = auVar121._8_4_;
              fVar113 = auVar121._12_4_;
              auVar121 = vblendps_avx(auVar152,auVar213,3);
              auVar121 = vshufps_avx(auVar121,auVar257,0x12);
              auVar181._0_4_ = auVar121._0_4_ + auVar117._0_4_;
              auVar181._4_4_ = auVar121._4_4_ + auVar117._4_4_;
              auVar181._8_4_ = auVar121._8_4_ + auVar117._8_4_;
              auVar181._12_4_ = auVar121._12_4_ + auVar117._12_4_;
              auVar117 = vsubps_avx(auVar121,auVar117);
              auVar153._0_4_ =
                   fVar110 * ((-(fVar110 * fVar53 * fVar53 * auVar118._0_4_) + fVar110) * fVar53 +
                             fVar53);
              auVar153._4_4_ =
                   fVar111 * ((-(fVar111 * fVar54 * fVar54 * auVar118._4_4_) + fVar111) * fVar54 +
                             fVar54);
              auVar153._8_4_ =
                   fVar112 * ((-(fVar112 * fVar108 * fVar108 * auVar118._8_4_) + fVar112) * fVar108
                             + fVar108);
              auVar153._12_4_ =
                   fVar113 * ((-(fVar113 * fVar109 * fVar109 * auVar118._12_4_) + fVar113) * fVar109
                             + fVar109);
              auVar121 = vblendps_avx(auVar181,auVar117,1);
              auVar115 = vblendps_avx(auVar181,auVar117,2);
              auVar152 = vshufps_avx(auVar181,auVar117,0xa1);
              auVar213 = vshufps_avx(auVar121,auVar121,0x18);
              auVar257 = vshufpd_avx(auVar115,auVar115,1);
              auVar121 = vblendps_avx(auVar152,auVar118,4);
              auVar115 = vblendps_avx(auVar213,auVar118,1);
              auVar257 = vblendps_avx(auVar257,auVar118,2);
              auVar152 = vblendps_avx(auVar117,auVar118,8);
              auVar213 = vshufps_avx(auVar153,auVar153,0xaa);
              auVar166._0_4_ = auVar153._0_4_ * auVar115._0_4_;
              auVar166._4_4_ = auVar153._0_4_ * auVar115._4_4_;
              auVar166._8_4_ = auVar153._0_4_ * auVar115._8_4_;
              auVar166._12_4_ = auVar153._0_4_ * auVar115._12_4_;
              auVar115 = vshufps_avx(auVar153,auVar153,0x55);
              auVar137._0_4_ = auVar213._0_4_ * auVar121._0_4_;
              auVar137._4_4_ = auVar213._4_4_ * auVar121._4_4_;
              auVar137._8_4_ = auVar213._8_4_ * auVar121._8_4_;
              auVar137._12_4_ = auVar213._12_4_ * auVar121._12_4_;
              auVar213 = vshufps_avx(auVar153,auVar153,0xff);
              auVar121 = vcmpps_avx(auVar179,auVar250,1);
              auVar195._0_4_ = auVar115._0_4_ * auVar257._0_4_;
              auVar195._4_4_ = auVar115._4_4_ * auVar257._4_4_;
              auVar195._8_4_ = auVar115._8_4_ * auVar257._8_4_;
              auVar195._12_4_ = auVar115._12_4_ * auVar257._12_4_;
              auVar115 = vcmpps_avx(auVar179,_auStack_608,1);
              auVar119._0_4_ = auVar213._0_4_ * auVar152._0_4_;
              auVar119._4_4_ = auVar213._4_4_ * auVar152._4_4_;
              auVar119._8_4_ = auVar213._8_4_ * auVar152._8_4_;
              auVar119._12_4_ = auVar213._12_4_ * auVar152._12_4_;
              auVar257 = vcmpps_avx(_auStack_608,auVar250,1);
              auVar154._0_4_ = auVar121._0_4_ & auVar257._0_4_;
              auVar154._4_4_ = auVar121._4_4_ & auVar257._4_4_;
              auVar154._8_4_ = auVar121._8_4_ & auVar257._8_4_;
              auVar154._12_4_ = auVar121._12_4_ & auVar257._12_4_;
              auVar121 = vblendvps_avx(auVar166,auVar195,auVar115);
              auVar121 = vblendvps_avx(auVar121,auVar137,auVar154);
              auVar115 = vcmpps_avx(ZEXT416(0) << 0x20,auVar59,1);
              auVar60._0_4_ = auVar115._0_4_;
              auVar60._4_4_ = auVar60._0_4_;
              auVar60._8_4_ = auVar60._0_4_;
              auVar60._12_4_ = auVar60._0_4_;
              auVar115 = vblendvps_avx(auVar121,auVar119,auVar60);
              fVar53 = auVar115._0_4_;
              auVar120._0_4_ = (uint)fVar53 ^ uVar43;
              auVar120._4_4_ = (uint)auVar115._4_4_ ^ uVar43;
              auVar120._8_4_ = (uint)auVar115._8_4_ ^ uVar43;
              auVar120._12_4_ = (uint)auVar115._12_4_ ^ uVar43;
              auVar121 = vshufps_avx(auVar115,auVar115,0xff);
              auVar257 = vshufps_avx(auVar115,auVar115,0x55);
              auVar152 = vshufps_avx(auVar115,auVar115,0xaa);
              fStack_3a8 = auVar116._0_4_;
              fStack_3a4 = auVar116._4_4_;
              fStack_3a0 = auVar116._8_4_;
              fStack_39c = auVar116._12_4_;
              fStack_3b8 = auVar98._0_4_;
              fStack_3b4 = auVar98._4_4_;
              fStack_3b0 = auVar98._8_4_;
              fStack_3ac = auVar98._12_4_;
              fStack_3c8 = auVar55._0_4_;
              auVar138._0_4_ =
                   -(auVar152._0_4_ * fStack_3c8) -
                   (auVar257._0_4_ * fStack_3b8 +
                   (fVar53 * fStack_3a8 - auVar121._0_4_ * auVar96._0_4_));
              fStack_3c4 = auVar55._4_4_;
              auVar138._4_4_ =
                   -(auVar152._4_4_ * fStack_3c4) -
                   (auVar257._4_4_ * fStack_3b4 +
                   (fVar53 * fStack_3a4 - auVar121._4_4_ * auVar96._4_4_));
              fStack_3c0 = auVar55._8_4_;
              auVar138._8_4_ =
                   -(auVar152._8_4_ * fStack_3c0) -
                   (auVar257._8_4_ * fStack_3b0 +
                   (fVar53 * fStack_3a0 - auVar121._8_4_ * auVar96._8_4_));
              fStack_3bc = auVar55._12_4_;
              auVar138._12_4_ =
                   -(auVar152._12_4_ * fStack_3bc) -
                   (auVar257._12_4_ * fStack_3ac +
                   (fVar53 * fStack_39c - auVar121._12_4_ * auVar96._12_4_));
              auVar121 = vblendps_avx(auVar120,auVar115,10);
              auVar152 = vshufps_avx(auVar121,auVar121,0x1b);
              auVar213 = vshufps_avx(auVar138,auVar138,0xff);
              auVar257 = vshufpd_avx(auVar115,auVar120,1);
              auVar121 = vblendps_avx(auVar120,auVar115,9);
              auVar117 = vshufps_avx(auVar138,auVar138,0x55);
              auVar123 = vshufps_avx(auVar138,auVar138,0xaa);
              auVar167 = vshufps_avx(auVar121,auVar121,0xb1);
              _auStack_588 = auStack_438;
              auVar121._0_4_ =
                   auVar123._0_4_ * auVar167._0_4_ +
                   auVar117._0_4_ * auVar257._0_4_ +
                   auVar138._0_4_ * auVar152._0_4_ + auVar213._0_4_ * fVar53;
              auVar121._4_4_ =
                   auVar123._4_4_ * auVar167._4_4_ +
                   auVar117._4_4_ * auVar257._4_4_ +
                   auVar138._0_4_ * auVar152._4_4_ + auVar213._4_4_ * auVar115._4_4_;
              auVar121._8_4_ =
                   auVar123._8_4_ * auVar167._8_4_ +
                   auVar117._8_4_ * auVar257._8_4_ +
                   auVar138._0_4_ * auVar152._8_4_ + auVar213._8_4_ * auVar115._8_4_;
              auVar121._12_4_ =
                   auVar123._12_4_ * auVar167._12_4_ +
                   auVar117._12_4_ * auVar257._12_4_ +
                   auVar138._0_4_ * auVar152._12_4_ + auVar213._12_4_ * auVar115._12_4_;
            }
            uVar26 = _DAT_145fc6f4c;
            auVar61._0_4_ = auVar121._0_4_ ^ uVar43;
            auVar61._4_4_ = auVar121._4_4_ ^ uVar43;
            auVar61._8_4_ = auVar121._8_4_ ^ uVar43;
            auVar61._12_4_ = auVar121._12_4_ ^ uVar43;
            fVar53 = (float)_DAT_146159bc0;
            fVar54 = (float)((ulonglong)_DAT_146159bc0 >> 0x20);
            uStack_470 = auVar232._8_8_;
            uStack_460 = auVar238._8_8_;
            if ((bVar27 == 4) && (*(longlong *)(lVar38 + 0xf8) != 0)) {
              auVar263 = ZEXT1664(CONCAT412(_DAT_145fc6edc,
                                            CONCAT48(_DAT_145fc6edc,
                                                     CONCAT44(_DAT_145fc6edc,_DAT_145fc6edc))));
              plVar8 = *(longlong **)(*(longlong *)(lVar38 + 0xf8) + 0x20);
              do {
                plVar32 = plVar8;
                plVar8 = (longlong *)plVar32[0xc];
              } while ((longlong *)plVar32[0xc] != (longlong *)0x0);
              auVar115 = vblendps_avx(auVar61,auVar121,8);
              auVar257 = vshufps_avx(auVar121,auVar121,0xff);
              uVar39 = 0;
              lVar47 = 0;
              auVar184._0_4_ = auVar115._0_4_ + auVar115._0_4_;
              auVar184._4_4_ = auVar115._4_4_ + auVar115._4_4_;
              auVar184._8_4_ = auVar115._8_4_ + auVar115._8_4_;
              auVar184._12_4_ = auVar115._12_4_ + auVar115._12_4_;
              auVar152 = vshufps_avx(auVar115,auVar115,0xc9);
              auVar213 = vshufps_avx(auVar115,auVar115,0xd2);
              auVar223 = vshufps_avx(auVar184,auVar184,0xc9);
              auVar122 = vshufps_avx(auVar184,auVar184,0xd2);
              fVar108 = auVar257._0_4_;
              fVar110 = auVar257._4_4_;
              fVar112 = auVar257._8_4_;
              fVar114 = auVar257._12_4_;
              auVar139._0_4_ = auVar213._0_4_ * auVar184._0_4_ + auVar223._0_4_ * fVar108;
              auVar139._4_4_ = auVar213._4_4_ * auVar184._4_4_ + auVar223._4_4_ * fVar110;
              auVar139._8_4_ = auVar213._8_4_ * auVar184._8_4_ + auVar223._8_4_ * fVar112;
              auVar139._12_4_ = auVar213._12_4_ * auVar184._12_4_ + auVar223._12_4_ * fVar114;
              auVar155._0_4_ = -(fVar108 * auVar122._0_4_) + auVar152._0_4_ * auVar184._0_4_;
              auVar155._4_4_ = -(fVar110 * auVar122._4_4_) + auVar152._4_4_ * auVar184._4_4_;
              auVar155._8_4_ = -(fVar112 * auVar122._8_4_) + auVar152._8_4_ * auVar184._8_4_;
              auVar155._12_4_ = -(fVar114 * auVar122._12_4_) + auVar152._12_4_ * auVar184._12_4_;
              auVar62._0_4_ =
                   -(auVar122._0_4_ * auVar213._0_4_) -
                   (auVar152._0_4_ * auVar223._0_4_ - _DAT_145fc6ed8);
              auVar62._4_4_ =
                   -(auVar122._4_4_ * auVar213._4_4_) -
                   (auVar152._4_4_ * auVar223._4_4_ - _DAT_145fc6ed8);
              auVar62._8_4_ =
                   -(auVar122._8_4_ * auVar213._8_4_) -
                   (auVar152._8_4_ * auVar223._8_4_ - _DAT_145fc6ed8);
              auVar62._12_4_ =
                   -(auVar122._12_4_ * auVar213._12_4_) -
                   (auVar152._12_4_ * auVar223._12_4_ - _DAT_145fc6ed8);
              auVar257 = vshufps_avx(auVar121,auVar121,0xc9);
              auVar121 = vshufps_avx(auVar121,auVar121,0xd2);
              fVar109 = auVar257._0_4_;
              fVar111 = auVar257._4_4_;
              fVar113 = auVar257._8_4_;
              fVar132 = auVar257._12_4_;
              fVar133 = auVar121._0_4_;
              fVar192 = -(fVar133 * _DAT_14614f7f0) + fVar53 * fVar109;
              fVar134 = auVar121._4_4_;
              fVar203 = -(fVar134 * _UNK_14614f7f4) + fVar54 * fVar111;
              fVar208 = auVar121._8_4_;
              fVar206 = -(fVar208 * _UNK_14614f7f8) + fVar113 * 0.0;
              fVar211 = auVar121._12_4_;
              fVar209 = -(fVar211 * _UNK_14614f7fc) + fVar132 * 0.0;
              auVar197._0_4_ = fVar192 + fVar192;
              auVar197._4_4_ = fVar203 + fVar203;
              auVar197._8_4_ = fVar206 + fVar206;
              auVar197._12_4_ = fVar209 + fVar209;
              auVar121 = vshufps_avx(auVar197,auVar197,0xd2);
              auVar257 = vshufps_avx(auVar197,auVar197,0xc9);
              fVar192 = -(fVar133 * _DAT_145fc6ed8) + _DAT_14614f7f0 * fVar109;
              fVar203 = -(fVar134 * 0.0) + _UNK_14614f7f4 * fVar111;
              fVar206 = -(fVar208 * 0.0) + _UNK_14614f7f8 * fVar113;
              fVar209 = -(fVar211 * 0.0) + _UNK_14614f7fc * fVar132;
              auVar234._0_4_ = fVar192 + fVar192;
              auVar234._4_4_ = fVar203 + fVar203;
              auVar234._8_4_ = fVar206 + fVar206;
              auVar234._12_4_ = fVar209 + fVar209;
              auVar152 = vshufps_avx(auVar234,auVar234,0xd2);
              auVar213 = vshufps_avx(auVar234,auVar234,0xc9);
              fVar192 = -(fVar133 * fVar53) + fVar109 * _DAT_145fc6ed8;
              fVar203 = -(fVar134 * fVar54) + fVar111 * 0.0;
              fVar206 = -(fVar208 * 0.0) + fVar113 * 0.0;
              fVar209 = -(fVar211 * 0.0) + fVar132 * 0.0;
              auVar12._8_8_ = uStack_450;
              auVar12._0_8_ = auVar214._0_8_;
              auVar223 = vshufps_avx(auVar62,auVar62,0x55);
              auVar122 = vshufps_avx(auVar62,auVar62,0xaa);
              auVar241._0_4_ = fVar192 + fVar192;
              auVar241._4_4_ = fVar203 + fVar203;
              auVar241._8_4_ = fVar206 + fVar206;
              auVar241._12_4_ = fVar209 + fVar209;
              auVar117 = vshufps_avx(auVar241,auVar241,0xd2);
              auVar199 = vshufps_avx(auVar241,auVar241,0xc9);
              auVar245 = ZEXT1664(auVar238);
              auVar180 = vshufps_avx(auVar139,auVar139,0x55);
              auVar123 = vshufps_avx(auVar155,auVar155,0xaa);
              auVar167 = vshufps_avx(auVar155,auVar155,0x55);
              auVar220 = ZEXT1664(auVar232);
              auVar11 = vshufps_avx(auVar139,auVar139,0xaa);
              auVar185._0_4_ =
                   fVar212 * auVar123._0_4_ + fVar237 * auVar180._0_4_ + fVar231 * auVar62._0_4_;
              auVar185._4_4_ =
                   fVar221 * auVar123._4_4_ + fVar240 * auVar180._4_4_ + fVar236 * auVar62._0_4_;
              auVar185._8_4_ =
                   auVar214._8_4_ * auVar123._8_4_ +
                   auVar238._8_4_ * auVar180._8_4_ + auVar232._8_4_ * auVar62._0_4_;
              auVar185._12_4_ =
                   auVar214._12_4_ * auVar123._12_4_ +
                   auVar238._12_4_ * auVar180._12_4_ + auVar232._12_4_ * auVar62._0_4_;
              auVar225._0_4_ =
                   fVar212 * auVar11._0_4_ + fVar237 * auVar223._0_4_ + auVar155._0_4_ * fVar231;
              auVar225._4_4_ =
                   fVar221 * auVar11._4_4_ + fVar240 * auVar223._4_4_ + auVar155._0_4_ * fVar236;
              auVar225._8_4_ =
                   auVar214._8_4_ * auVar11._8_4_ +
                   auVar238._8_4_ * auVar223._8_4_ + auVar155._0_4_ * auVar232._8_4_;
              auVar225._12_4_ =
                   auVar214._12_4_ * auVar11._12_4_ +
                   auVar238._12_4_ * auVar223._12_4_ + auVar155._0_4_ * auVar232._12_4_;
              fVar193 = (float)(_DAT_145fc6f4c &
                               (uint)(-(fVar133 * auVar257._0_4_) + auVar121._0_4_ * fVar109 +
                                     fVar108 * auVar197._0_4_ + _DAT_145fc6ed8));
              fVar204 = (float)(_DAT_145fc6f4c &
                               (uint)(-(fVar134 * auVar257._4_4_) + auVar121._4_4_ * fVar111 +
                                     fVar110 * auVar197._4_4_ + 0.0));
              fVar207 = (float)(_DAT_145fc6f4c &
                               (uint)(-(fVar208 * auVar257._8_4_) + auVar121._8_4_ * fVar113 +
                                     fVar112 * auVar197._8_4_ + 0.0));
              fVar210 = (float)(_DAT_145fc6f4c &
                               (uint)(-(fVar211 * auVar257._12_4_) + auVar121._12_4_ * fVar132 +
                                     fVar114 * auVar197._12_4_ + 0.0));
              fVar192 = (float)(_DAT_145fc6f4c &
                               (uint)(auVar241._0_4_ * fVar108 + _DAT_14614f7f0 +
                                     -(fVar133 * auVar199._0_4_) + auVar117._0_4_ * fVar109));
              fVar203 = (float)(_DAT_145fc6f4c &
                               (uint)(auVar241._4_4_ * fVar110 + _UNK_14614f7f4 +
                                     -(fVar134 * auVar199._4_4_) + auVar117._4_4_ * fVar111));
              fVar206 = (float)(_DAT_145fc6f4c &
                               (uint)(auVar241._8_4_ * fVar112 + _UNK_14614f7f8 +
                                     -(fVar208 * auVar199._8_4_) + auVar117._8_4_ * fVar113));
              fVar209 = (float)(_DAT_145fc6f4c &
                               (uint)(auVar241._12_4_ * fVar114 + _UNK_14614f7fc +
                                     -(fVar211 * auVar199._12_4_) + auVar117._12_4_ * fVar132));
              fVar194 = (float)((uint)(fVar108 * auVar234._0_4_ + fVar53 +
                                      -(fVar133 * auVar213._0_4_) + auVar152._0_4_ * fVar109) &
                               _DAT_145fc6f4c);
              fVar205 = (float)((uint)(fVar110 * auVar234._4_4_ + fVar54 +
                                      -(fVar134 * auVar213._4_4_) + auVar152._4_4_ * fVar111) &
                               _DAT_145fc6f4c);
              fVar208 = (float)((uint)(fVar112 * auVar234._8_4_ + 0.0 +
                                      -(fVar208 * auVar213._8_4_) + auVar152._8_4_ * fVar113) &
                               _DAT_145fc6f4c);
              fVar211 = (float)((uint)(fVar114 * auVar234._12_4_ + 0.0 +
                                      -(fVar211 * auVar213._12_4_) + auVar152._12_4_ * fVar132) &
                               _DAT_145fc6f4c);
              auVar11._4_4_ = auStack_5d8._4_4_;
              auVar11._0_4_ = auStack_5d8._0_4_;
              auVar11._8_4_ = fStack_5d0;
              auVar11._12_4_ = fStack_5cc;
              auVar202 = ZEXT1664(auVar11);
              auVar121 = vsubps_avx(auVar11,_auStack_588);
              auVar171._0_4_ =
                   fVar212 * auVar122._0_4_ + fVar237 * auVar167._0_4_ + fVar231 * auVar139._0_4_;
              auVar171._4_4_ =
                   fVar221 * auVar122._4_4_ + fVar240 * auVar167._4_4_ + fVar236 * auVar139._0_4_;
              auVar171._8_4_ =
                   auVar214._8_4_ * auVar122._8_4_ +
                   auVar238._8_4_ * auVar167._8_4_ + auVar232._8_4_ * auVar139._0_4_;
              auVar171._12_4_ =
                   auVar214._12_4_ * auVar122._12_4_ +
                   auVar238._12_4_ * auVar167._12_4_ + auVar232._12_4_ * auVar139._0_4_;
              auVar257 = vsubps_avx(auVar232,auVar185);
              auVar152 = vsubps_avx(auVar238,auVar225);
              auVar213 = vsubps_avx(auVar12,auVar171);
              auVar199._12_4_ = 0;
              auVar199._0_12_ = ZEXT412(0);
              auVar117 = vunpcklps_avx(auVar238,auVar199 << 0x20);
              auVar223 = vunpckhps_avx(auVar238,auVar199 << 0x20);
              auVar199 = vunpcklps_avx(auVar232,auVar12);
              auVar122 = vunpckhps_avx(auVar232,auVar12);
              auVar122 = vunpcklps_avx(auVar122,auVar223);
              auVar180 = vunpcklps_avx(auVar199,auVar117);
              auVar223 = vunpckhps_avx(auVar199,auVar117);
              fVar53 = fVar212 * 0.0 + fVar237 * 0.0 + fVar231;
              fVar108 = fVar221 * 0.0 + fVar240 * 0.0 + fVar236;
              fVar110 = auVar214._8_4_ * 0.0 + auVar238._8_4_ * 0.0 + auVar232._8_4_;
              fVar112 = auVar214._12_4_ * 0.0 + auVar238._12_4_ * 0.0 + auVar232._12_4_;
              fVar114 = fVar212 * 0.0 + fVar237 + fVar231 * 0.0;
              fVar132 = fVar221 * 0.0 + fVar240 + fVar236 * 0.0;
              fVar133 = auVar214._8_4_ * 0.0 + auVar238._8_4_ + auVar232._8_4_ * 0.0;
              fVar134 = auVar214._12_4_ * 0.0 + auVar238._12_4_ + auVar232._12_4_ * 0.0;
              fVar54 = fVar212 + fVar237 * 0.0 + fVar231 * 0.0;
              fVar109 = fVar221 + fVar240 * 0.0 + fVar236 * 0.0;
              fVar111 = auVar214._8_4_ + auVar238._8_4_ * 0.0 + auVar232._8_4_ * 0.0;
              fVar113 = auVar214._12_4_ + auVar238._12_4_ * 0.0 + auVar232._12_4_ * 0.0;
              do {
                if (*(int *)((longlong)param_1 + 0x1c) != (int)param_1[3]) {
                  auVar202 = ZEXT1664(auVar202._0_16_);
                  auVar220 = ZEXT1664(auVar220._0_16_);
                  auVar245 = ZEXT1664(auVar245._0_16_);
                  auVar263 = ZEXT1664(auVar263._0_16_);
                  FUN_140299f30(&uStack_218);
                  FUN_1451663a0(plVar32 + lVar47 * 0xc + 2,&uStack_218,&fStack_278,lVar38);
                  fVar231 = _DAT_145fc6ed8;
                  auVar261 = auVar263._0_16_;
                  auVar24._4_4_ = fStack_1f4;
                  auVar24._0_4_ = fStack_1f8;
                  auVar24._8_4_ = fStack_1f0;
                  auVar24._12_4_ = fStack_1ec;
                  auVar25._4_4_ = fStack_1e4;
                  auVar25._0_4_ = fStack_1e8;
                  auVar25._8_4_ = fStack_1e0;
                  auVar25._12_4_ = fStack_1dc;
                  auVar117 = vsubps_avx(auVar24,auVar25);
                  fVar236 = fStack_1f8 + fStack_1e8;
                  fVar237 = fStack_1f4 + fStack_1e4;
                  fVar240 = fStack_1f0 + fStack_1e0;
                  fVar135 = fStack_1ec + fStack_1dc;
                  fVar178 = auVar263._0_4_;
                  fVar164 = auVar263._4_4_;
                  fVar165 = auVar263._8_4_;
                  fVar176 = auVar263._12_4_;
                  if (uVar33 != 0) {
                    auVar124._0_4_ = fVar178 * fVar236;
                    auVar124._4_4_ = fVar164 * fVar237;
                    auVar124._8_4_ = fVar165 * fVar240;
                    auVar124._12_4_ = fVar176 * fVar135;
                    auVar63._0_4_ = fVar178 * auVar117._0_4_;
                    auVar63._4_4_ = fVar164 * auVar117._4_4_;
                    auVar63._8_4_ = fVar165 * auVar117._8_4_;
                    auVar63._12_4_ = fVar176 * auVar117._12_4_;
                    auVar117 = vshufps_avx(auVar124,auVar124,0x55);
                    auVar199 = vshufps_avx(auVar124,auVar124,0xaa);
                    auVar123 = vsubps_avx(auVar124,auVar63);
                    auVar140._0_4_ =
                         auVar199._0_4_ * auVar171._0_4_ +
                         auVar117._0_4_ * auVar225._0_4_ +
                         auVar185._0_4_ * auVar124._0_4_ +
                         auVar213._0_4_ * (float)uStack_5b8 +
                         auVar152._0_4_ * fStack_598 + auVar257._0_4_ * fVar52 + auVar121._0_4_;
                    auVar140._4_4_ =
                         auVar199._4_4_ * auVar171._4_4_ +
                         auVar117._4_4_ * auVar225._4_4_ +
                         auVar185._4_4_ * auVar124._0_4_ +
                         auVar213._4_4_ * uStack_5b8._4_4_ +
                         auVar152._4_4_ * fStack_594 + auVar257._4_4_ * fVar52 + auVar121._4_4_;
                    auVar140._8_4_ =
                         auVar199._8_4_ * auVar171._8_4_ +
                         auVar117._8_4_ * auVar225._8_4_ +
                         auVar185._8_4_ * auVar124._0_4_ +
                         auVar213._8_4_ * (float)uStack_5b0 +
                         auVar152._8_4_ * fStack_590 + auVar257._8_4_ * fVar52 + auVar121._8_4_;
                    auVar140._12_4_ =
                         auVar199._12_4_ * auVar171._12_4_ +
                         auVar117._12_4_ * auVar225._12_4_ +
                         auVar185._12_4_ * auVar124._0_4_ +
                         auVar213._12_4_ * uStack_5b0._4_4_ +
                         auVar152._12_4_ * fStack_58c + auVar257._12_4_ * fVar52 + auVar121._12_4_;
                    auVar199 = vsubps_avx(auVar140,auVar202._0_16_);
                    fVar236 = auVar199._0_4_;
                    fStack_2d8 = auVar180._0_4_;
                    fStack_2d4 = auVar180._4_4_;
                    fStack_2d0 = auVar180._8_4_;
                    fStack_2cc = auVar180._12_4_;
                    auVar117 = vshufps_avx(auVar199,auVar199,0x55);
                    auVar199 = vshufps_avx(auVar199,auVar199,0xaa);
                    fStack_2e8 = auVar223._0_4_;
                    fStack_2e4 = auVar223._4_4_;
                    fStack_2e0 = auVar223._8_4_;
                    fStack_2dc = auVar223._12_4_;
                    fStack_2c8 = auVar122._0_4_;
                    auVar141._0_4_ =
                         auVar199._0_4_ * fStack_2c8 +
                         auVar117._0_4_ * fStack_2e8 + fVar236 * fStack_2d8;
                    fStack_2c4 = auVar122._4_4_;
                    auVar141._4_4_ =
                         auVar199._4_4_ * fStack_2c4 +
                         auVar117._4_4_ * fStack_2e4 + fVar236 * fStack_2d4;
                    fStack_2c0 = auVar122._8_4_;
                    auVar141._8_4_ =
                         auVar199._8_4_ * fStack_2c0 +
                         auVar117._8_4_ * fStack_2e0 + fVar236 * fStack_2d0;
                    fStack_2bc = auVar122._12_4_;
                    auVar141._12_4_ =
                         auVar199._12_4_ * fStack_2bc +
                         auVar117._12_4_ * fStack_2dc + fVar236 * fStack_2cc;
                    auVar117 = vshufps_avx(auVar63,auVar63,0x55);
                    auVar199 = vshufps_avx(auVar63,auVar63,0xaa);
                    auVar64._0_4_ = auVar124._0_4_ + auVar63._0_4_;
                    auVar64._4_4_ = auVar124._4_4_ + auVar63._4_4_;
                    auVar64._8_4_ = auVar124._8_4_ + auVar63._8_4_;
                    auVar64._12_4_ = auVar124._12_4_ + auVar63._12_4_;
                    auVar156._0_4_ =
                         auVar199._0_4_ * fVar192 +
                         auVar63._0_4_ * fVar193 + auVar117._0_4_ * fVar194;
                    auVar156._4_4_ =
                         auVar199._4_4_ * fVar203 +
                         auVar63._0_4_ * fVar204 + auVar117._4_4_ * fVar205;
                    auVar156._8_4_ =
                         auVar199._8_4_ * fVar206 +
                         auVar63._0_4_ * fVar207 + auVar117._8_4_ * fVar208;
                    auVar156._12_4_ =
                         auVar199._12_4_ * fVar209 +
                         auVar63._0_4_ * fVar210 + auVar117._12_4_ * fVar211;
                    auVar117 = vsubps_avx(auVar141,auVar156);
                    auVar142._0_4_ = auVar141._0_4_ + auVar156._0_4_;
                    auVar142._4_4_ = auVar141._4_4_ + auVar156._4_4_;
                    auVar142._8_4_ = auVar141._8_4_ + auVar156._8_4_;
                    auVar142._12_4_ = auVar141._12_4_ + auVar156._12_4_;
                    auVar123 = vminps_avx(auVar123,auVar117);
                    auVar199 = vmaxps_avx(auVar64,auVar142);
                    auVar117 = vsubps_avx(auVar199,auVar123);
                    fVar236 = auVar199._0_4_ + auVar123._0_4_;
                    fVar237 = auVar199._4_4_ + auVar123._4_4_;
                    fVar240 = auVar199._8_4_ + auVar123._8_4_;
                    fVar135 = auVar199._12_4_ + auVar123._12_4_;
                  }
                  auVar143._0_4_ = fVar178 * fVar236;
                  auVar143._4_4_ = fVar164 * fVar237;
                  auVar143._8_4_ = fVar165 * fVar240;
                  auVar143._12_4_ = fVar176 * fVar135;
                  auVar65._0_4_ = fVar178 * auVar117._0_4_;
                  auVar65._4_4_ = fVar164 * auVar117._4_4_;
                  auVar65._8_4_ = fVar165 * auVar117._8_4_;
                  auVar65._12_4_ = fVar176 * auVar117._12_4_;
                  auVar117 = vblendps_avx(auVar65,auVar56,8);
                  auVar199 = vshufps_avx(auVar143,auVar143,0x55);
                  auVar123 = vshufps_avx(auVar143,auVar143,0xaa);
                  auVar125._0_4_ =
                       auVar123._0_4_ * fVar212 +
                       auVar245._0_4_ * auVar199._0_4_ +
                       auVar220._0_4_ * auVar143._0_4_ + auVar202._0_4_;
                  auVar125._4_4_ =
                       auVar123._4_4_ * fVar221 +
                       auVar245._4_4_ * auVar199._4_4_ +
                       auVar220._4_4_ * auVar143._0_4_ + auVar202._4_4_;
                  auVar125._8_4_ =
                       auVar123._8_4_ * auVar214._8_4_ +
                       auVar245._8_4_ * auVar199._8_4_ +
                       auVar220._8_4_ * auVar143._0_4_ + auVar202._8_4_;
                  auVar125._12_4_ =
                       auVar123._12_4_ * auVar214._12_4_ +
                       auVar245._12_4_ * auVar199._12_4_ +
                       auVar220._12_4_ * auVar143._0_4_ + auVar202._12_4_;
                  auVar199 = auVar202._0_16_;
                  auVar123 = auVar220._0_16_;
                  auVar167 = auVar245._0_16_;
                  if (param_4 == '\0') {
                    fVar236 = pfVar6[8];
                    fVar237 = pfVar6[9];
                    fVar240 = pfVar6[10];
                    fVar135 = pfVar6[0xe];
                    auVar235._0_12_ = ZEXT812(0);
                    auVar235._12_4_ = 0;
                    fVar165 = *pfVar5;
                    fVar176 = pfVar5[1];
                    fVar177 = pfVar5[2];
                    fVar13 = pfVar5[3];
                    fVar14 = pfVar5[4];
                    fVar15 = pfVar5[5];
                    fVar16 = pfVar5[6];
                    fVar17 = pfVar5[7];
                    fVar18 = pfVar5[8];
                    fVar19 = pfVar5[9];
                    fVar20 = pfVar5[10];
                    fVar21 = pfVar5[0xb];
                    fVar178 = pfVar6[0x12];
                    fVar164 = pfVar6[0xc];
                    fVar222 = fVar18 * fVar240 + fVar14 * fVar237 + fVar165 * fVar236;
                    fVar228 = fVar19 * fVar240 + fVar15 * fVar237 + fVar176 * fVar236;
                    fVar229 = fVar20 * fVar240 + fVar16 * fVar237 + fVar177 * fVar236;
                    fVar230 = fVar21 * fVar240 + fVar17 * fVar237 + fVar13 * fVar236;
                    fVar236 = pfVar6[0xd];
                    fVar237 = pfVar6[0x10];
                    fVar151 = fVar18 * fVar135 + fVar14 * fVar236 + fVar165 * fVar164;
                    fVar162 = fVar19 * fVar135 + fVar15 * fVar236 + fVar176 * fVar164;
                    fVar163 = fVar20 * fVar135 + fVar16 * fVar236 + fVar177 * fVar164;
                    fVar164 = fVar21 * fVar135 + fVar17 * fVar236 + fVar13 * fVar164;
                    fVar236 = pfVar6[0x11];
                    fVar165 = fVar18 * fVar178 + fVar14 * fVar236 + fVar165 * fVar237;
                    fVar176 = fVar19 * fVar178 + fVar15 * fVar236 + fVar176 * fVar237;
                    fVar177 = fVar20 * fVar178 + fVar16 * fVar236 + fVar177 * fVar237;
                    fVar178 = fVar21 * fVar178 + fVar17 * fVar236 + fVar13 * fVar237;
                    auVar66._0_4_ = fVar222 * fVar53;
                    auVar66._4_4_ = fVar228 * fVar108;
                    auVar66._8_4_ = fVar229 * fVar110;
                    auVar66._12_4_ = fVar230 * fVar112;
                    auVar199 = vblendps_avx(auVar66,auVar235,8);
                    auVar67._0_4_ = fVar151 * fVar53;
                    auVar67._4_4_ = fVar162 * fVar108;
                    auVar67._8_4_ = fVar163 * fVar110;
                    auVar67._12_4_ = fVar164 * fVar112;
                    auVar123 = vblendps_avx(auVar67,auVar235,8);
                    auVar68._0_4_ = fVar165 * fVar53;
                    auVar68._4_4_ = fVar176 * fVar108;
                    auVar68._8_4_ = fVar177 * fVar110;
                    auVar68._12_4_ = fVar178 * fVar112;
                    auVar167 = vblendps_avx(auVar68,auVar235,8);
                    auVar69._0_4_ = fVar222 * fVar114;
                    auVar69._4_4_ = fVar228 * fVar132;
                    auVar69._8_4_ = fVar229 * fVar133;
                    auVar69._12_4_ = fVar230 * fVar134;
                    auVar12 = vblendps_avx(auVar69,auVar235,8);
                    auVar70._0_4_ = fVar151 * fVar114;
                    auVar70._4_4_ = fVar162 * fVar132;
                    auVar70._8_4_ = fVar163 * fVar133;
                    auVar70._12_4_ = fVar164 * fVar134;
                    auVar179 = vblendps_avx(auVar70,auVar235,8);
                    auVar71._0_4_ = fVar165 * fVar114;
                    auVar71._4_4_ = fVar176 * fVar132;
                    auVar71._8_4_ = fVar177 * fVar133;
                    auVar71._12_4_ = fVar178 * fVar134;
                    auVar250 = vblendps_avx(auVar71,auVar235,8);
                    auVar72._0_4_ = fVar222 * fVar54;
                    auVar72._4_4_ = fVar228 * fVar109;
                    auVar72._8_4_ = fVar229 * fVar111;
                    auVar72._12_4_ = fVar230 * fVar113;
                    auVar57 = vblendps_avx(auVar72,auVar235,8);
                    auVar73._0_4_ = fVar151 * fVar54;
                    auVar73._4_4_ = fVar162 * fVar109;
                    auVar73._8_4_ = fVar163 * fVar111;
                    auVar73._12_4_ = fVar164 * fVar113;
                    auVar58 = vblendps_avx(auVar73,auVar235,8);
                    auVar74._0_4_ = fVar165 * fVar54;
                    auVar74._4_4_ = fVar176 * fVar109;
                    auVar74._8_4_ = fVar177 * fVar111;
                    auVar74._12_4_ = fVar178 * fVar113;
                    auVar168 = vhaddps_avx(auVar57,auVar58);
                    auVar10 = vblendps_avx(auVar74,auVar235,8);
                    auVar169 = vhaddps_avx(auVar167,auVar123);
                    auVar170 = vhaddps_avx(auVar199,auVar123);
                    auVar169 = vhaddps_avx(auVar170,auVar169);
                    auVar170 = vhaddps_avx(auVar250,auVar179);
                    auVar182 = vhaddps_avx(auVar12,auVar179);
                    auVar170 = vhaddps_avx(auVar182,auVar170);
                    auVar182 = vhaddps_avx(auVar10,auVar58);
                    auVar144._0_4_ = (float)(uVar26 & auVar169._0_4_);
                    auVar144._4_4_ = (float)(uVar26 & auVar169._4_4_);
                    auVar144._8_4_ = (float)(uVar26 & auVar169._8_4_);
                    auVar144._12_4_ = (float)(uVar26 & auVar169._12_4_);
                    auStack_608._0_4_ = auVar117._0_4_;
                    auStack_608._4_4_ = auVar117._4_4_;
                    uStack_600._0_4_ = auVar117._8_4_;
                    uStack_600._4_4_ = auVar117._12_4_;
                    auVar75._0_4_ = _DAT_146174864 + (float)auStack_608._0_4_;
                    auVar75._4_4_ = _DAT_146174864 + (float)auStack_608._4_4_;
                    auVar75._8_4_ = _DAT_146174864 + (float)uStack_600;
                    auVar75._12_4_ = _DAT_146174864 + uStack_600._4_4_;
                    auVar168 = vhaddps_avx(auVar168,auVar182);
                    auVar186._0_4_ = (float)(uVar26 & auVar170._0_4_);
                    auVar186._4_4_ = (float)(uVar26 & auVar170._4_4_);
                    auVar186._8_4_ = (float)(uVar26 & auVar170._8_4_);
                    auVar186._12_4_ = (float)(uVar26 & auVar170._12_4_);
                    auVar169 = vpmovzxdq_avx(auVar186);
                    auVar198._0_4_ = (float)(uVar26 & auVar168._0_4_);
                    auVar198._4_4_ = (float)(uVar26 & auVar168._4_4_);
                    auVar198._8_4_ = (float)(uVar26 & auVar168._8_4_);
                    auVar198._12_4_ = (float)(uVar26 & auVar168._12_4_);
                    auVar168 = vunpcklps_avx(auVar144,auVar198);
                    auVar182 = vunpcklps_avx(auVar168,auVar169);
                    auVar170 = vunpckhps_avx(auVar168,auVar169);
                    fVar236 = *pfVar6;
                    fVar237 = pfVar6[1];
                    auVar168 = vshufps_avx(auVar75,auVar75,0x55);
                    auVar169 = vshufps_avx(auVar75,auVar75,0xaa);
                    auVar58 = vhaddps_avx(auVar58,auVar235);
                    auVar254._0_4_ =
                         auVar198._0_4_ * auVar169._0_4_ +
                         auVar186._0_4_ * auVar168._0_4_ + auVar144._0_4_ * auVar75._0_4_ + *pfVar6;
                    auVar254._4_4_ =
                         auVar198._4_4_ * auVar169._4_4_ +
                         auVar186._4_4_ * auVar168._4_4_ +
                         auVar144._4_4_ * auVar75._0_4_ + pfVar6[1];
                    auVar254._8_4_ =
                         auVar198._8_4_ * auVar169._8_4_ +
                         auVar186._8_4_ * auVar168._8_4_ +
                         auVar144._8_4_ * auVar75._0_4_ + pfVar6[2];
                    auVar254._12_4_ =
                         auVar198._12_4_ * auVar169._12_4_ +
                         auVar186._12_4_ * auVar168._12_4_ +
                         auVar144._12_4_ * auVar75._0_4_ + pfVar6[3];
                    auVar168 = vunpckhps_avx(auVar144,auVar198);
                    auVar169 = vunpckhps_avx(auVar186,auVar235);
                    auVar168 = vunpcklps_avx(auVar168,auVar169);
                    fVar240 = pfVar6[2];
                    auVar57 = vhaddps_avx(auVar57,auVar235);
                    auVar242._0_4_ =
                         auVar168._0_4_ * fVar240 +
                         auVar170._0_4_ * fVar237 + auVar182._0_4_ * fVar236 + auVar75._0_4_;
                    auVar242._4_4_ =
                         auVar168._4_4_ * fVar240 +
                         auVar170._4_4_ * fVar237 + auVar182._4_4_ * fVar236 + auVar75._4_4_;
                    auVar242._8_4_ =
                         auVar168._8_4_ * fVar240 +
                         auVar170._8_4_ * fVar237 + auVar182._8_4_ * fVar236 + auVar75._8_4_;
                    auVar242._12_4_ =
                         auVar168._12_4_ * fVar240 +
                         auVar170._12_4_ * fVar237 + auVar182._12_4_ * fVar236 + auVar75._12_4_;
                    auVar169 = vsubps_avx(auVar125,*(undefined1 (*) [16])(pfVar6 + 4));
                    auVar168 = vhaddps_avx(auVar199,auVar12);
                    fVar236 = auVar169._0_4_;
                    auVar187._0_4_ = fVar222 * fVar236;
                    fVar237 = auVar169._4_4_;
                    auVar187._4_4_ = fVar228 * fVar237;
                    fVar240 = auVar169._8_4_;
                    auVar187._8_4_ = fVar229 * fVar240;
                    fVar135 = auVar169._12_4_;
                    auVar187._12_4_ = fVar230 * fVar135;
                    auVar157._0_4_ = fVar151 * fVar236;
                    auVar157._4_4_ = fVar162 * fVar237;
                    auVar157._8_4_ = fVar163 * fVar240;
                    auVar157._12_4_ = fVar164 * fVar135;
                    auVar199 = vblendps_avx(auVar187,auVar235,8);
                    auVar12 = vblendps_avx(auVar157,auVar235,8);
                    auVar57 = vhaddps_avx(auVar168,auVar57);
                    auVar168 = vhaddps_avx(auVar199,auVar199);
                    auVar168 = vhaddps_avx(auVar168,auVar168);
                    auVar123 = vhaddps_avx(auVar123,auVar179);
                    auVar261._4_4_ = _DAT_145fc6edc;
                    auVar261._0_4_ = _DAT_145fc6edc;
                    auVar261._8_4_ = _DAT_145fc6edc;
                    auVar261._12_4_ = _DAT_145fc6edc;
                    auVar179 = vhaddps_avx(auVar123,auVar58);
                    auVar123 = vhaddps_avx(auVar12,auVar12);
                    auVar58 = vhaddps_avx(auVar123,auVar123);
                    auVar76._0_4_ = fVar165 * fVar236;
                    auVar76._4_4_ = fVar176 * fVar237;
                    auVar76._8_4_ = fVar177 * fVar240;
                    auVar76._12_4_ = fVar178 * fVar135;
                    auVar167 = vhaddps_avx(auVar167,auVar250);
                    auVar123 = vblendps_avx(auVar76,auVar235,8);
                    auVar250 = vhaddps_avx(auVar10,auVar235);
                    auVar167 = vhaddps_avx(auVar167,auVar250);
                    auVar250 = vhaddps_avx(auVar123,auVar123);
                    auVar123 = vhaddps_avx(auVar123,auVar12);
                    auVar199 = vhaddps_avx(auVar199,auVar12);
                    auVar12 = vhaddps_avx(auVar250,auVar250);
                    auVar199 = vhaddps_avx(auVar199,auVar123);
                    auVar77._0_4_ = uVar26 & auVar199._0_4_;
                    auVar77._4_4_ = uVar26 & auVar199._4_4_;
                    auVar77._8_4_ = uVar26 & auVar199._8_4_;
                    auVar77._12_4_ = uVar26 & auVar199._12_4_;
                    auVar199 = vcmpps_avx(auVar77,auVar254,2);
                    auVar145._0_4_ =
                         uVar26 & (uint)(auVar12._0_4_ * auVar167._0_4_ +
                                        auVar58._0_4_ * auVar179._0_4_ +
                                        auVar57._0_4_ * auVar168._0_4_);
                    auVar145._4_4_ =
                         uVar26 & (uint)(auVar12._4_4_ * auVar167._4_4_ +
                                        auVar58._4_4_ * auVar179._4_4_ +
                                        auVar57._4_4_ * auVar168._4_4_);
                    auVar145._8_4_ =
                         uVar26 & (uint)(auVar12._8_4_ * auVar167._8_4_ +
                                        auVar58._8_4_ * auVar179._8_4_ +
                                        auVar57._8_4_ * auVar168._8_4_);
                    auVar145._12_4_ =
                         uVar26 & (uint)(auVar12._12_4_ * auVar167._12_4_ +
                                        auVar58._12_4_ * auVar179._12_4_ +
                                        auVar57._12_4_ * auVar168._12_4_);
                    auVar123 = vcmpps_avx(auVar145,auVar242,2);
                    auVar78._0_4_ = auVar123._0_4_ & auVar199._0_4_;
                    auVar78._4_4_ = auVar123._4_4_ & auVar199._4_4_;
                    auVar78._8_4_ = auVar123._8_4_ & auVar199._8_4_;
                    auVar78._12_4_ = auVar123._12_4_ & auVar199._12_4_;
                    uVar29 = vmovmskps_avx(auVar78);
                    auVar199 = auVar11;
                    auVar123 = auVar232;
                    auVar167 = auVar238;
                    if ((~(byte)uVar29 & 7) == 0) goto LAB_1401c17a3;
                  }
                  else {
LAB_1401c17a3:
                    pauVar7 = (undefined1 (*) [16])*param_2;
                    *param_2 = (ulonglong)(pauVar7 + 8);
                    *pauVar7 = auVar117;
                    pauVar7[1] = auVar125;
                    pauVar7[2] = ZEXT416((uint)fVar231);
                    *(undefined8 *)pauVar7[3] = _DAT_146159bc0;
                    *(undefined8 *)(pauVar7[3] + 8) = 0;
                    uVar22 = CONCAT44(_UNK_14614f7fc,_UNK_14614f7f8);
                    *(ulonglong *)pauVar7[4] = CONCAT44(_UNK_14614f7f4,_DAT_14614f7f0);
                    *(undefined8 *)(pauVar7[4] + 8) = uVar22;
                    *(undefined1 (*) [8])pauVar7[5] = auStack_588;
                    *(undefined8 *)(pauVar7[5] + 8) = uStack_580;
                    uStack_2f8 = auVar115._0_8_;
                    uStack_2f0 = auVar115._8_8_;
                    *(undefined8 *)pauVar7[6] = uStack_2f8;
                    *(undefined8 *)(pauVar7[6] + 8) = uStack_2f0;
                    *(undefined1 (*) [8])pauVar7[7] = auStack_578;
                    *(undefined8 *)(pauVar7[7] + 8) = uStack_570;
                    puVar1 = (undefined8 *)*param_2;
                    *param_2 = (ulonglong)(puVar1 + 0xc);
                    auVar23._8_8_ = uStack_450;
                    auVar23._0_8_ = auVar214._0_8_;
                    auVar23._16_4_ = auStack_5d8._0_4_;
                    auVar23._20_4_ = auStack_5d8._4_4_;
                    auVar23._24_4_ = fStack_5d0;
                    auVar23._28_4_ = fStack_5cc;
                    *puVar1 = auVar232._0_8_;
                    puVar1[1] = uStack_470;
                    puVar1[2] = auVar238._0_8_;
                    puVar1[3] = uStack_460;
                    *(undefined1 (*) [32])(puVar1 + 4) = auVar23;
                    puVar1[8] = 0;
                    *(uint *)((longlong)puVar1 + 0xc) = uVar48;
                    *(uint *)((longlong)puVar1 + 0x1c) = (uint)uVar39;
                    *(uint *)((longlong)puVar1 + 0x2c) = uVar33 + 8;
                    puVar1[9] = auStack_4b8._0_8_;
                    puVar1[10] = auStack_4b8._8_8_;
                    puVar1[0xb] = lVar38;
                    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0xbf800000;
                    lVar40 = *param_1;
                    if (*(char *)(lVar40 + 0x97) == '\x01') {
                      *(undefined4 *)((longlong)puVar1 + 0x3c) = *(undefined4 *)(lVar40 + 0x3c);
                    }
                    else {
                      auVar263 = ZEXT1664(auVar199);
                      auVar202 = ZEXT1664(auVar123);
                      auVar220 = ZEXT1664(auVar167);
                      auVar245 = ZEXT1664(auVar261);
                      FUN_144431fa0(*(undefined8 *)(lVar40 + 0x88),puVar1);
                      auVar261 = auVar245._0_16_;
                      auVar167 = auVar220._0_16_;
                      auVar123 = auVar202._0_16_;
                      auVar199 = auVar263._0_16_;
                    }
                    lVar40 = param_1[4];
                    lVar35 = (ulonglong)*(uint *)((longlong)param_1 + 0x1c) * 0x10;
                    *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) + 1;
                    *(undefined8 **)(lVar40 + lVar35) = puVar1;
                    *(undefined1 (**) [16])(lVar40 + 8 + lVar35) = pauVar7;
                  }
                  auVar202 = ZEXT1664(auVar199);
                  auVar220 = ZEXT1664(auVar123);
                  auVar245 = ZEXT1664(auVar167);
                  auVar263 = ZEXT1664(auVar261);
                  FUN_14036bfa0();
                }
                if ((int)lVar47 == 1) {
                  plVar8 = (longlong *)*plVar32;
                  plVar46 = plVar32;
                  if ((longlong *)*plVar32 == (longlong *)0x0) {
                    plVar32 = (longlong *)0x0;
                    bVar50 = false;
                    lVar47 = 0;
                  }
                  else {
                    while (plVar37 = plVar8, plVar8 = (longlong *)plVar37[0x18], plVar46 == plVar8)
                    {
                      plVar32 = (longlong *)0x0;
                      bVar50 = false;
                      lVar47 = 0;
                      plVar8 = (longlong *)*plVar37;
                      plVar46 = plVar37;
                      if ((longlong *)*plVar37 == (longlong *)0x0) goto LAB_1401c195d;
                    }
                    plVar32 = plVar37;
                    if (plVar8 == (longlong *)0x0) goto LAB_1401c1952;
                    do {
                      plVar32 = plVar8;
                      bVar50 = false;
                      lVar47 = 0;
                      plVar8 = (longlong *)plVar32[0xc];
                    } while ((longlong *)plVar32[0xc] != (longlong *)0x0);
                  }
                }
                else {
                  plVar8 = (longlong *)plVar32[0x18];
                  if ((longlong *)plVar32[0x18] == (longlong *)0x0) {
LAB_1401c1952:
                    lVar47 = 1;
                    bVar50 = true;
                  }
                  else {
                    do {
                      plVar32 = plVar8;
                      bVar50 = false;
                      lVar47 = 0;
                      plVar8 = (longlong *)plVar32[0xc];
                    } while ((longlong *)plVar32[0xc] != (longlong *)0x0);
                  }
                }
LAB_1401c195d:
                uVar39 = uVar39 + 1;
              } while (plVar32 != (longlong *)0x0 || bVar50);
            }
            else {
              auVar263 = ZEXT1664(CONCAT412(_DAT_145fc6edc,
                                            CONCAT48(_DAT_145fc6edc,
                                                     CONCAT44(_DAT_145fc6edc,_DAT_145fc6edc))));
              auVar115 = vblendps_avx(auVar61,auVar121,8);
              lVar47 = *(longlong *)(*(longlong *)(lVar36 + 0x70) + uVar49 * 8);
              fVar108 = auVar223._0_4_;
              fVar109 = auVar223._4_4_;
              fVar110 = auVar223._8_4_;
              fVar111 = auVar223._12_4_;
              fVar112 = auVar122._0_4_;
              fVar113 = auVar122._4_4_;
              fVar114 = auVar122._8_4_;
              fVar132 = auVar122._12_4_;
              if (uVar33 == 0) {
                auVar121 = *(undefined1 (*) [16])(lVar47 + 0x20);
                auVar257 = *(undefined1 (*) [16])(lVar47 + 0x30);
              }
              else {
                auVar79._0_4_ = auVar115._0_4_ + auVar115._0_4_;
                auVar79._4_4_ = auVar115._4_4_ + auVar115._4_4_;
                auVar79._8_4_ = auVar115._8_4_ + auVar115._8_4_;
                auVar79._12_4_ = auVar115._12_4_ + auVar115._12_4_;
                auVar257 = vshufps_avx(auVar115,auVar115,0xc9);
                auVar152 = vshufps_avx(auVar121,auVar121,0xff);
                auVar213 = vshufps_avx(auVar115,auVar115,0xd2);
                auVar117 = vshufps_avx(auVar79,auVar79,0xc9);
                auVar123 = vshufps_avx(auVar79,auVar79,0xd2);
                fVar133 = auVar152._0_4_;
                fVar134 = auVar152._4_4_;
                fVar211 = auVar152._8_4_;
                fVar203 = auVar152._12_4_;
                auVar217._0_4_ = auVar213._0_4_ * auVar79._0_4_ + auVar117._0_4_ * fVar133;
                auVar217._4_4_ = auVar213._4_4_ * auVar79._4_4_ + auVar117._4_4_ * fVar134;
                auVar217._8_4_ = auVar213._8_4_ * auVar79._8_4_ + auVar117._8_4_ * fVar211;
                auVar217._12_4_ = auVar213._12_4_ * auVar79._12_4_ + auVar117._12_4_ * fVar203;
                auVar158._0_4_ = -(fVar133 * auVar123._0_4_) + auVar257._0_4_ * auVar79._0_4_;
                auVar158._4_4_ = -(fVar134 * auVar123._4_4_) + auVar257._4_4_ * auVar79._4_4_;
                auVar158._8_4_ = -(fVar211 * auVar123._8_4_) + auVar257._8_4_ * auVar79._8_4_;
                auVar158._12_4_ = -(fVar203 * auVar123._12_4_) + auVar257._12_4_ * auVar79._12_4_;
                auVar188._0_4_ =
                     -(auVar123._0_4_ * auVar213._0_4_) -
                     (auVar257._0_4_ * auVar117._0_4_ - _DAT_145fc6ed8);
                auVar188._4_4_ =
                     -(auVar123._4_4_ * auVar213._4_4_) -
                     (auVar257._4_4_ * auVar117._4_4_ - _DAT_145fc6ed8);
                auVar188._8_4_ =
                     -(auVar123._8_4_ * auVar213._8_4_) -
                     (auVar257._8_4_ * auVar117._8_4_ - _DAT_145fc6ed8);
                auVar188._12_4_ =
                     -(auVar123._12_4_ * auVar213._12_4_) -
                     (auVar257._12_4_ * auVar117._12_4_ - _DAT_145fc6ed8);
                auVar257 = vshufps_avx(auVar217,auVar217,0x55);
                auVar152 = vshufps_avx(auVar158,auVar158,0xaa);
                auVar213 = vshufps_avx(auVar158,auVar158,0x55);
                auVar117 = vshufps_avx(auVar188,auVar188,0x55);
                auVar123 = vshufps_avx(auVar217,auVar217,0xaa);
                auVar172._0_4_ =
                     fVar212 * auVar152._0_4_ + fVar112 * auVar257._0_4_ + fVar108 * auVar188._0_4_;
                auVar172._4_4_ =
                     fVar221 * auVar152._4_4_ + fVar113 * auVar257._4_4_ + fVar109 * auVar188._0_4_;
                auVar172._8_4_ =
                     auVar214._8_4_ * auVar152._8_4_ +
                     fVar114 * auVar257._8_4_ + fVar110 * auVar188._0_4_;
                auVar172._12_4_ =
                     auVar214._12_4_ * auVar152._12_4_ +
                     fVar132 * auVar257._12_4_ + fVar111 * auVar188._0_4_;
                auVar80._0_4_ =
                     fVar212 * auVar123._0_4_ + fVar112 * auVar117._0_4_ + fVar108 * auVar158._0_4_;
                auVar80._4_4_ =
                     fVar221 * auVar123._4_4_ + fVar113 * auVar117._4_4_ + fVar109 * auVar158._0_4_;
                auVar80._8_4_ =
                     auVar214._8_4_ * auVar123._8_4_ +
                     fVar114 * auVar117._8_4_ + fVar110 * auVar158._0_4_;
                auVar80._12_4_ =
                     auVar214._12_4_ * auVar123._12_4_ +
                     fVar132 * auVar117._12_4_ + fVar111 * auVar158._0_4_;
                auVar257 = vshufps_avx(auVar188,auVar188,0xaa);
                auVar117 = vsubps_avx(_auStack_5d8,_auStack_588);
                auVar123 = vsubps_avx(auVar223,auVar172);
                auVar189._0_4_ =
                     fVar212 * auVar257._0_4_ + fVar112 * auVar213._0_4_ + fVar108 * auVar217._0_4_;
                auVar189._4_4_ =
                     fVar221 * auVar257._4_4_ + fVar113 * auVar213._4_4_ + fVar109 * auVar217._0_4_;
                auVar189._8_4_ =
                     auVar214._8_4_ * auVar257._8_4_ +
                     fVar114 * auVar213._8_4_ + fVar110 * auVar217._0_4_;
                auVar189._12_4_ =
                     auVar214._12_4_ * auVar257._12_4_ +
                     fVar132 * auVar213._12_4_ + fVar111 * auVar217._0_4_;
                auVar257 = *(undefined1 (*) [16])(lVar47 + 0x30);
                auVar122 = vsubps_avx(auVar122,auVar80);
                auVar152 = *(undefined1 (*) [16])(lVar47 + 0x20);
                auVar167 = vsubps_avx(auVar214,auVar189);
                auVar159._0_4_ = _DAT_145fc6edc * (auVar152._0_4_ + auVar257._0_4_);
                auVar159._4_4_ = _DAT_145fc6edc * (auVar152._4_4_ + auVar257._4_4_);
                auVar159._8_4_ = _DAT_145fc6edc * (auVar152._8_4_ + auVar257._8_4_);
                auVar159._12_4_ = _DAT_145fc6edc * (auVar152._12_4_ + auVar257._12_4_);
                auVar213 = vshufps_avx(auVar159,auVar159,0x55);
                auVar223 = vshufps_avx(auVar159,auVar159,0xaa);
                auVar226._0_4_ =
                     auVar189._0_4_ * auVar223._0_4_ +
                     auVar80._0_4_ * auVar213._0_4_ +
                     auVar172._0_4_ * auVar159._0_4_ +
                     (float)uStack_5b8 * auVar167._0_4_ +
                     auVar122._0_4_ * fStack_598 + auVar123._0_4_ * fVar52 + auVar117._0_4_;
                auVar226._4_4_ =
                     auVar189._4_4_ * auVar223._4_4_ +
                     auVar80._4_4_ * auVar213._4_4_ +
                     auVar172._4_4_ * auVar159._0_4_ +
                     uStack_5b8._4_4_ * auVar167._4_4_ +
                     auVar122._4_4_ * fStack_594 + auVar123._4_4_ * fVar52 + auVar117._4_4_;
                auVar226._8_4_ =
                     auVar189._8_4_ * auVar223._8_4_ +
                     auVar80._8_4_ * auVar213._8_4_ +
                     auVar172._8_4_ * auVar159._0_4_ +
                     (float)uStack_5b0 * auVar167._8_4_ +
                     auVar122._8_4_ * fStack_590 + auVar123._8_4_ * fVar52 + auVar117._8_4_;
                auVar226._12_4_ =
                     auVar189._12_4_ * auVar223._12_4_ +
                     auVar80._12_4_ * auVar213._12_4_ +
                     auVar172._12_4_ * auVar159._0_4_ +
                     uStack_5b0._4_4_ * auVar167._12_4_ +
                     auVar122._12_4_ * fStack_58c + auVar123._12_4_ * fVar52 + auVar117._12_4_;
                auVar257 = vsubps_avx(auVar152,auVar257);
                auVar173._0_4_ = _DAT_145fc6edc * auVar257._0_4_;
                auVar173._4_4_ = _DAT_145fc6edc * auVar257._4_4_;
                auVar173._8_4_ = _DAT_145fc6edc * auVar257._8_4_;
                auVar173._12_4_ = _DAT_145fc6edc * auVar257._12_4_;
                auVar213 = vsubps_avx(auVar226,_auStack_5d8);
                auVar122 = vunpcklps_avx(auVar11,auVar12);
                fVar231 = auVar213._0_4_;
                auVar223 = vunpckhps_avx(auVar11,auVar12);
                auVar257 = vshufps_avx(auVar213,auVar213,0x55);
                auVar117 = vunpcklps_avx(auVar199,auVar180);
                auVar152 = vshufps_avx(auVar121,auVar121,0xc9);
                auVar213 = vshufps_avx(auVar213,auVar213,0xaa);
                auVar121 = vshufps_avx(auVar121,auVar121,0xd2);
                fVar52 = auVar152._0_4_;
                fVar208 = auVar152._4_4_;
                fVar192 = auVar152._8_4_;
                fVar206 = auVar152._12_4_;
                fVar193 = auVar121._0_4_;
                fVar236 = -(fVar193 * _DAT_14614f7f0) + fVar53 * fVar52;
                fVar194 = auVar121._4_4_;
                fVar237 = -(fVar194 * _UNK_14614f7f4) + fVar54 * fVar208;
                fVar204 = auVar121._8_4_;
                fVar240 = -(fVar204 * _UNK_14614f7f8) + fVar192 * 0.0;
                fVar205 = auVar121._12_4_;
                fVar209 = -(fVar205 * _UNK_14614f7fc) + fVar206 * 0.0;
                auVar190._0_4_ =
                     auVar117._0_4_ * auVar213._0_4_ +
                     auVar223._0_4_ * auVar257._0_4_ + fVar231 * auVar122._0_4_;
                auVar190._4_4_ =
                     auVar117._4_4_ * auVar213._4_4_ +
                     auVar223._4_4_ * auVar257._4_4_ + fVar231 * auVar122._4_4_;
                auVar190._8_4_ =
                     auVar117._8_4_ * auVar213._8_4_ +
                     auVar223._8_4_ * auVar257._8_4_ + fVar231 * auVar122._8_4_;
                auVar190._12_4_ =
                     auVar117._12_4_ * auVar213._12_4_ +
                     auVar223._12_4_ * auVar257._12_4_ + fVar231 * auVar122._12_4_;
                auVar81._0_4_ = fVar236 + fVar236;
                auVar81._4_4_ = fVar237 + fVar237;
                auVar81._8_4_ = fVar240 + fVar240;
                auVar81._12_4_ = fVar209 + fVar209;
                auVar121 = vshufps_avx(auVar81,auVar81,0xd2);
                auVar257 = vshufps_avx(auVar81,auVar81,0xc9);
                fVar231 = -(fVar193 * _DAT_145fc6ed8) + _DAT_14614f7f0 * fVar52;
                fVar236 = -(fVar194 * 0.0) + _UNK_14614f7f4 * fVar208;
                fVar237 = -(fVar204 * 0.0) + _UNK_14614f7f8 * fVar192;
                fVar240 = -(fVar205 * 0.0) + _UNK_14614f7fc * fVar206;
                auVar218._0_4_ = fVar231 + fVar231;
                auVar218._4_4_ = fVar236 + fVar236;
                auVar218._8_4_ = fVar237 + fVar237;
                auVar218._12_4_ = fVar240 + fVar240;
                auVar152 = vshufps_avx(auVar218,auVar218,0xd2);
                auVar213 = vshufps_avx(auVar218,auVar218,0xc9);
                auVar223 = vshufps_avx(auVar173,auVar173,0x55);
                fVar231 = -(fVar193 * fVar53) + _DAT_145fc6ed8 * fVar52;
                fVar236 = -(fVar194 * fVar54) + fVar208 * 0.0;
                fVar237 = -(fVar204 * 0.0) + fVar192 * 0.0;
                fVar240 = -(fVar205 * 0.0) + fVar206 * 0.0;
                auVar82._0_4_ = fVar231 + fVar231;
                auVar82._4_4_ = fVar236 + fVar236;
                auVar82._8_4_ = fVar237 + fVar237;
                auVar82._12_4_ = fVar240 + fVar240;
                auVar122 = vshufps_avx(auVar82,auVar82,0xd2);
                auVar117 = vshufps_avx(auVar82,auVar82,0xc9);
                auVar199 = vshufps_avx(auVar173,auVar173,0xaa);
                auVar180 = vsubps_avx(auVar159,auVar173);
                auVar126._0_4_ =
                     (float)(_DAT_145fc6f4c &
                            (uint)(auVar82._0_4_ * fVar133 + _DAT_14614f7f0 +
                                  -(fVar193 * auVar117._0_4_) + auVar122._0_4_ * fVar52)) *
                     auVar199._0_4_ +
                     (float)(_DAT_145fc6f4c &
                            (uint)(fVar133 * auVar81._0_4_ + _DAT_145fc6ed8 +
                                  -(fVar193 * auVar257._0_4_) + auVar121._0_4_ * fVar52)) *
                     auVar173._0_4_ +
                     auVar223._0_4_ *
                     (float)(_DAT_145fc6f4c &
                            (uint)(-(fVar193 * auVar213._0_4_) + auVar152._0_4_ * fVar52 +
                                  fVar133 * auVar218._0_4_ + fVar53));
                auVar126._4_4_ =
                     (float)(_DAT_145fc6f4c &
                            (uint)(auVar82._4_4_ * fVar134 + _UNK_14614f7f4 +
                                  -(fVar194 * auVar117._4_4_) + auVar122._4_4_ * fVar208)) *
                     auVar199._4_4_ +
                     (float)(_DAT_145fc6f4c &
                            (uint)(fVar134 * auVar81._4_4_ + 0.0 +
                                  -(fVar194 * auVar257._4_4_) + auVar121._4_4_ * fVar208)) *
                     auVar173._0_4_ +
                     auVar223._4_4_ *
                     (float)(_DAT_145fc6f4c &
                            (uint)(-(fVar194 * auVar213._4_4_) + auVar152._4_4_ * fVar208 +
                                  fVar134 * auVar218._4_4_ + fVar54));
                auVar126._8_4_ =
                     (float)(_DAT_145fc6f4c &
                            (uint)(auVar82._8_4_ * fVar211 + _UNK_14614f7f8 +
                                  -(fVar204 * auVar117._8_4_) + auVar122._8_4_ * fVar192)) *
                     auVar199._8_4_ +
                     (float)(_DAT_145fc6f4c &
                            (uint)(fVar211 * auVar81._8_4_ + 0.0 +
                                  -(fVar204 * auVar257._8_4_) + auVar121._8_4_ * fVar192)) *
                     auVar173._0_4_ +
                     auVar223._8_4_ *
                     (float)(_DAT_145fc6f4c &
                            (uint)(-(fVar204 * auVar213._8_4_) + auVar152._8_4_ * fVar192 +
                                  fVar211 * auVar218._8_4_ + 0.0));
                auVar126._12_4_ =
                     (float)(_DAT_145fc6f4c &
                            (uint)(auVar82._12_4_ * fVar203 + _UNK_14614f7fc +
                                  -(fVar205 * auVar117._12_4_) + auVar122._12_4_ * fVar206)) *
                     auVar199._12_4_ +
                     (float)(_DAT_145fc6f4c &
                            (uint)(fVar203 * auVar81._12_4_ + 0.0 +
                                  -(fVar205 * auVar257._12_4_) + auVar121._12_4_ * fVar206)) *
                     auVar173._0_4_ +
                     auVar223._12_4_ *
                     (float)(_DAT_145fc6f4c &
                            (uint)(-(fVar205 * auVar213._12_4_) + auVar152._12_4_ * fVar206 +
                                  fVar203 * auVar218._12_4_ + 0.0));
                auVar121 = vsubps_avx(auVar190,auVar126);
                auVar191._0_4_ = auVar190._0_4_ + auVar126._0_4_;
                auVar191._4_4_ = auVar190._4_4_ + auVar126._4_4_;
                auVar191._8_4_ = auVar190._8_4_ + auVar126._8_4_;
                auVar191._12_4_ = auVar190._12_4_ + auVar126._12_4_;
                auVar127._0_4_ = auVar159._0_4_ + auVar173._0_4_;
                auVar127._4_4_ = auVar159._4_4_ + auVar173._4_4_;
                auVar127._8_4_ = auVar159._8_4_ + auVar173._8_4_;
                auVar127._12_4_ = auVar159._12_4_ + auVar173._12_4_;
                auVar257 = vminps_avx(auVar180,auVar121);
                auVar121 = vmaxps_avx(auVar127,auVar191);
              }
              auVar152 = vsubps_avx(auVar121,auVar257);
              auVar83._0_4_ = _DAT_145fc6edc * auVar152._0_4_;
              auVar83._4_4_ = _DAT_145fc6edc * auVar152._4_4_;
              auVar83._8_4_ = _DAT_145fc6edc * auVar152._8_4_;
              auVar83._12_4_ = _DAT_145fc6edc * auVar152._12_4_;
              auVar128._0_4_ = _DAT_145fc6edc * (auVar121._0_4_ + auVar257._0_4_);
              auVar128._4_4_ = _DAT_145fc6edc * (auVar121._4_4_ + auVar257._4_4_);
              auVar128._8_4_ = _DAT_145fc6edc * (auVar121._8_4_ + auVar257._8_4_);
              auVar128._12_4_ = _DAT_145fc6edc * (auVar121._12_4_ + auVar257._12_4_);
              auVar121 = vblendps_avx(auVar83,auVar56,8);
              auVar257 = vshufps_avx(auVar128,auVar128,0x55);
              auVar152 = vshufps_avx(auVar128,auVar128,0xaa);
              auVar259._0_4_ =
                   fVar212 * auVar152._0_4_ +
                   fVar112 * auVar257._0_4_ + fVar108 * auVar128._0_4_ + (float)auStack_5d8._0_4_;
              auVar259._4_4_ =
                   fVar221 * auVar152._4_4_ +
                   fVar113 * auVar257._4_4_ + fVar109 * auVar128._0_4_ + (float)auStack_5d8._4_4_;
              auVar259._8_4_ =
                   auVar214._8_4_ * auVar152._8_4_ +
                   fVar114 * auVar257._8_4_ + fVar110 * auVar128._0_4_ + fStack_5d0;
              auVar259._12_4_ =
                   auVar214._12_4_ * auVar152._12_4_ +
                   fVar132 * auVar257._12_4_ + fVar111 * auVar128._0_4_ + fStack_5cc;
              if (param_4 == '\0') {
                auVar250 = ZEXT816(0) << 0x20;
                fVar52 = pfVar6[8];
                fVar53 = pfVar6[9];
                fVar133 = *pfVar5;
                fVar134 = pfVar5[1];
                fVar208 = pfVar5[2];
                fVar211 = pfVar5[3];
                fVar192 = pfVar5[4];
                fVar203 = pfVar5[5];
                fVar206 = pfVar5[6];
                fVar231 = pfVar5[7];
                fVar236 = pfVar5[8];
                fVar237 = pfVar5[9];
                fVar240 = pfVar5[10];
                fVar209 = pfVar5[0xb];
                fVar193 = fVar212 * 0.0 + fVar112 * 0.0 + fVar108;
                fVar194 = fVar221 * 0.0 + fVar113 * 0.0 + fVar109;
                fVar204 = auVar214._8_4_ * 0.0 + fVar114 * 0.0 + fVar110;
                fVar205 = auVar214._12_4_ * 0.0 + fVar132 * 0.0 + fVar111;
                fVar207 = fVar212 * 0.0 + fVar112 + fVar108 * 0.0;
                fVar210 = fVar221 * 0.0 + fVar113 + fVar109 * 0.0;
                fVar135 = auVar214._8_4_ * 0.0 + fVar114 + fVar110 * 0.0;
                fVar178 = auVar214._12_4_ * 0.0 + fVar132 + fVar111 * 0.0;
                fVar212 = fVar112 * 0.0 + fVar108 * 0.0 + fVar212;
                fVar221 = fVar113 * 0.0 + fVar109 * 0.0 + fVar221;
                fVar112 = fVar114 * 0.0 + fVar110 * 0.0 + auVar214._8_4_;
                fVar111 = fVar132 * 0.0 + fVar111 * 0.0 + auVar214._12_4_;
                fVar54 = pfVar6[10];
                fVar108 = pfVar6[0x12];
                fVar109 = pfVar6[0xc];
                fVar110 = pfVar6[0xd];
                fVar164 = fVar236 * fVar54 + fVar192 * fVar53 + fVar133 * fVar52;
                fVar165 = fVar237 * fVar54 + fVar203 * fVar53 + fVar134 * fVar52;
                fVar176 = fVar240 * fVar54 + fVar206 * fVar53 + fVar208 * fVar52;
                fVar177 = fVar209 * fVar54 + fVar231 * fVar53 + fVar211 * fVar52;
                fVar52 = pfVar6[0xe];
                fVar53 = pfVar6[0x10];
                fVar113 = fVar236 * fVar52 + fVar192 * fVar110 + fVar133 * fVar109;
                fVar114 = fVar237 * fVar52 + fVar203 * fVar110 + fVar134 * fVar109;
                fVar132 = fVar240 * fVar52 + fVar206 * fVar110 + fVar208 * fVar109;
                fVar109 = fVar209 * fVar52 + fVar231 * fVar110 + fVar211 * fVar109;
                fVar52 = pfVar6[0x11];
                auVar84._0_4_ = fVar164 * fVar193;
                auVar84._4_4_ = fVar165 * fVar194;
                auVar84._8_4_ = fVar176 * fVar204;
                auVar84._12_4_ = fVar177 * fVar205;
                fVar110 = fVar236 * fVar108 + fVar192 * fVar52 + fVar133 * fVar53;
                fVar133 = fVar237 * fVar108 + fVar203 * fVar52 + fVar134 * fVar53;
                fVar134 = fVar240 * fVar108 + fVar206 * fVar52 + fVar208 * fVar53;
                fVar208 = fVar209 * fVar108 + fVar231 * fVar52 + fVar211 * fVar53;
                auVar257 = vblendps_avx(auVar84,auVar250,8);
                auVar85._0_4_ = fVar113 * fVar193;
                auVar85._4_4_ = fVar114 * fVar194;
                auVar85._8_4_ = fVar132 * fVar204;
                auVar85._12_4_ = fVar109 * fVar205;
                auVar152 = vblendps_avx(auVar85,auVar250,8);
                auVar86._0_4_ = fVar110 * fVar193;
                auVar86._4_4_ = fVar133 * fVar194;
                auVar86._8_4_ = fVar134 * fVar204;
                auVar86._12_4_ = fVar208 * fVar205;
                auVar213 = vblendps_avx(auVar86,auVar250,8);
                auVar87._0_4_ = fVar164 * fVar207;
                auVar87._4_4_ = fVar165 * fVar210;
                auVar87._8_4_ = fVar176 * fVar135;
                auVar87._12_4_ = fVar177 * fVar178;
                auVar223 = vblendps_avx(auVar87,auVar250,8);
                auVar88._0_4_ = fVar113 * fVar207;
                auVar88._4_4_ = fVar114 * fVar210;
                auVar88._8_4_ = fVar132 * fVar135;
                auVar88._12_4_ = fVar109 * fVar178;
                auVar122 = vblendps_avx(auVar88,auVar250,8);
                auVar89._0_4_ = fVar110 * fVar207;
                auVar89._4_4_ = fVar133 * fVar210;
                auVar89._8_4_ = fVar134 * fVar135;
                auVar89._12_4_ = fVar208 * fVar178;
                auVar117 = vblendps_avx(auVar89,auVar250,8);
                auVar90._0_4_ = fVar164 * fVar212;
                auVar90._4_4_ = fVar165 * fVar221;
                auVar90._8_4_ = fVar176 * fVar112;
                auVar90._12_4_ = fVar177 * fVar111;
                auVar199 = vblendps_avx(auVar90,auVar250,8);
                auVar91._0_4_ = fVar113 * fVar212;
                auVar91._4_4_ = fVar114 * fVar221;
                auVar91._8_4_ = fVar132 * fVar112;
                auVar91._12_4_ = fVar109 * fVar111;
                auVar180 = vblendps_avx(auVar91,auVar250,8);
                auVar92._0_4_ = fVar110 * fVar212;
                auVar92._4_4_ = fVar133 * fVar221;
                auVar92._8_4_ = fVar134 * fVar112;
                auVar92._12_4_ = fVar208 * fVar111;
                auVar167 = vhaddps_avx(auVar257,auVar152);
                auVar123 = vblendps_avx(auVar92,auVar250,8);
                auVar11 = vhaddps_avx(auVar213,auVar152);
                auVar12 = vhaddps_avx(auVar223,auVar122);
                auVar167 = vhaddps_avx(auVar167,auVar11);
                auVar11 = vhaddps_avx(auVar117,auVar122);
                auVar179 = vhaddps_avx(auVar199,auVar180);
                auVar11 = vhaddps_avx(auVar12,auVar11);
                auVar12 = vhaddps_avx(auVar123,auVar180);
                auVar12 = vhaddps_avx(auVar179,auVar12);
                auVar219._0_4_ = (float)(_DAT_145fc6f4c & auVar11._0_4_);
                auVar219._4_4_ = (float)(_DAT_145fc6f4c & auVar11._4_4_);
                auVar219._8_4_ = (float)(_DAT_145fc6f4c & auVar11._8_4_);
                auVar219._12_4_ = (float)(_DAT_145fc6f4c & auVar11._12_4_);
                auVar11 = vpmovzxdq_avx(auVar219);
                auVar200._0_4_ = (float)(_DAT_145fc6f4c & auVar12._0_4_);
                auVar200._4_4_ = (float)(_DAT_145fc6f4c & auVar12._4_4_);
                auVar200._8_4_ = (float)(_DAT_145fc6f4c & auVar12._8_4_);
                auVar200._12_4_ = (float)(_DAT_145fc6f4c & auVar12._12_4_);
                auVar160._0_4_ = (float)(_DAT_145fc6f4c & auVar167._0_4_);
                auVar160._4_4_ = (float)(_DAT_145fc6f4c & auVar167._4_4_);
                auVar160._8_4_ = (float)(_DAT_145fc6f4c & auVar167._8_4_);
                auVar160._12_4_ = (float)(_DAT_145fc6f4c & auVar167._12_4_);
                auVar167 = vunpcklps_avx(auVar160,auVar200);
                auVar179 = vunpcklps_avx(auVar167,auVar11);
                auVar12 = vunpckhps_avx(auVar167,auVar11);
                auStack_608._0_4_ = auVar121._0_4_;
                auStack_608._4_4_ = auVar121._4_4_;
                uStack_600._0_4_ = auVar121._8_4_;
                uStack_600._4_4_ = auVar121._12_4_;
                auVar146._0_4_ = _DAT_146174864 + (float)auStack_608._0_4_;
                auVar146._4_4_ = _DAT_146174864 + (float)auStack_608._4_4_;
                auVar146._8_4_ = _DAT_146174864 + (float)uStack_600;
                auVar146._12_4_ = _DAT_146174864 + uStack_600._4_4_;
                fVar52 = *pfVar6;
                fVar53 = pfVar6[1];
                auVar167 = vshufps_avx(auVar146,auVar146,0x55);
                auVar11 = vshufps_avx(auVar146,auVar146,0xaa);
                auVar93._0_4_ =
                     auVar200._0_4_ * auVar11._0_4_ +
                     auVar219._0_4_ * auVar167._0_4_ + auVar160._0_4_ * auVar146._0_4_ + *pfVar6;
                auVar93._4_4_ =
                     auVar200._4_4_ * auVar11._4_4_ +
                     auVar219._4_4_ * auVar167._4_4_ + auVar160._4_4_ * auVar146._0_4_ + pfVar6[1];
                auVar93._8_4_ =
                     auVar200._8_4_ * auVar11._8_4_ +
                     auVar219._8_4_ * auVar167._8_4_ + auVar160._8_4_ * auVar146._0_4_ + pfVar6[2];
                auVar93._12_4_ =
                     auVar200._12_4_ * auVar11._12_4_ +
                     auVar219._12_4_ * auVar167._12_4_ +
                     auVar160._12_4_ * auVar146._0_4_ + pfVar6[3];
                auVar167 = vunpckhps_avx(auVar160,auVar200);
                auVar11 = vunpckhps_avx(auVar219,auVar250);
                auVar167 = vunpcklps_avx(auVar167,auVar11);
                fVar54 = pfVar6[2];
                auVar199 = vhaddps_avx(auVar199,auVar250);
                auVar129._0_4_ =
                     auVar167._0_4_ * fVar54 +
                     auVar12._0_4_ * fVar53 + auVar179._0_4_ * fVar52 + auVar146._0_4_;
                auVar129._4_4_ =
                     auVar167._4_4_ * fVar54 +
                     auVar12._4_4_ * fVar53 + auVar179._4_4_ * fVar52 + auVar146._4_4_;
                auVar129._8_4_ =
                     auVar167._8_4_ * fVar54 +
                     auVar12._8_4_ * fVar53 + auVar179._8_4_ * fVar52 + auVar146._8_4_;
                auVar129._12_4_ =
                     auVar167._12_4_ * fVar54 +
                     auVar12._12_4_ * fVar53 + auVar179._12_4_ * fVar52 + auVar146._12_4_;
                auVar11 = vsubps_avx(auVar259,*(undefined1 (*) [16])(pfVar6 + 4));
                auVar167 = vhaddps_avx(auVar257,auVar223);
                fVar52 = auVar11._0_4_;
                auVar201._0_4_ = fVar164 * fVar52;
                fVar53 = auVar11._4_4_;
                auVar201._4_4_ = fVar165 * fVar53;
                fVar54 = auVar11._8_4_;
                auVar201._8_4_ = fVar176 * fVar54;
                fVar108 = auVar11._12_4_;
                auVar201._12_4_ = fVar177 * fVar108;
                auVar180 = vhaddps_avx(auVar180,auVar250);
                auVar174._0_4_ = fVar113 * fVar52;
                auVar174._4_4_ = fVar114 * fVar53;
                auVar174._8_4_ = fVar132 * fVar54;
                auVar174._12_4_ = fVar109 * fVar108;
                auVar257 = vblendps_avx(auVar201,auVar250,8);
                auVar223 = vblendps_avx(auVar174,auVar250,8);
                auVar199 = vhaddps_avx(auVar167,auVar199);
                auVar167 = vhaddps_avx(auVar257,auVar257);
                auVar167 = vhaddps_avx(auVar167,auVar167);
                auVar152 = vhaddps_avx(auVar152,auVar122);
                auVar122 = vhaddps_avx(auVar152,auVar180);
                auVar152 = vhaddps_avx(auVar223,auVar223);
                auVar180 = vhaddps_avx(auVar152,auVar152);
                auVar147._0_4_ = fVar110 * fVar52;
                auVar147._4_4_ = fVar133 * fVar53;
                auVar147._8_4_ = fVar134 * fVar54;
                auVar147._12_4_ = fVar208 * fVar108;
                auVar213 = vhaddps_avx(auVar213,auVar117);
                auVar152 = vblendps_avx(auVar147,auVar250,8);
                auVar117 = vhaddps_avx(auVar123,auVar250);
                auVar213 = vhaddps_avx(auVar213,auVar117);
                auVar117 = vhaddps_avx(auVar152,auVar152);
                auVar152 = vhaddps_avx(auVar152,auVar223);
                auVar257 = vhaddps_avx(auVar257,auVar223);
                auVar223 = vhaddps_avx(auVar117,auVar117);
                auVar257 = vhaddps_avx(auVar257,auVar152);
                auVar148._0_4_ = _DAT_145fc6f4c & auVar257._0_4_;
                auVar148._4_4_ = _DAT_145fc6f4c & auVar257._4_4_;
                auVar148._8_4_ = _DAT_145fc6f4c & auVar257._8_4_;
                auVar148._12_4_ = _DAT_145fc6f4c & auVar257._12_4_;
                auVar257 = vcmpps_avx(auVar148,auVar93,2);
                auVar149._0_4_ =
                     _DAT_145fc6f4c &
                     (uint)(auVar223._0_4_ * auVar213._0_4_ +
                           auVar180._0_4_ * auVar122._0_4_ + auVar199._0_4_ * auVar167._0_4_);
                auVar149._4_4_ =
                     _DAT_145fc6f4c &
                     (uint)(auVar223._4_4_ * auVar213._4_4_ +
                           auVar180._4_4_ * auVar122._4_4_ + auVar199._4_4_ * auVar167._4_4_);
                auVar149._8_4_ =
                     _DAT_145fc6f4c &
                     (uint)(auVar223._8_4_ * auVar213._8_4_ +
                           auVar180._8_4_ * auVar122._8_4_ + auVar199._8_4_ * auVar167._8_4_);
                auVar149._12_4_ =
                     _DAT_145fc6f4c &
                     (uint)(auVar223._12_4_ * auVar213._12_4_ +
                           auVar180._12_4_ * auVar122._12_4_ + auVar199._12_4_ * auVar167._12_4_);
                auVar263 = ZEXT1664(CONCAT412(_DAT_145fc6edc,
                                              CONCAT48(_DAT_145fc6edc,
                                                       CONCAT44(_DAT_145fc6edc,_DAT_145fc6edc))));
                auVar152 = vcmpps_avx(auVar149,auVar129,2);
                auVar94._0_4_ = auVar152._0_4_ & auVar257._0_4_;
                auVar94._4_4_ = auVar152._4_4_ & auVar257._4_4_;
                auVar94._8_4_ = auVar152._8_4_ & auVar257._8_4_;
                auVar94._12_4_ = auVar152._12_4_ & auVar257._12_4_;
                uVar29 = vmovmskps_avx(auVar94);
                if ((~(byte)uVar29 & 7) != 0) goto LAB_1401c2065;
              }
              if (*(int *)((longlong)param_1 + 0x1c) != (int)param_1[3]) {
                auStack_608 = auVar121._0_8_;
                uStack_600 = auVar121._8_8_;
                puVar1 = (undefined8 *)*param_2;
                *param_2 = (ulonglong)(puVar1 + 0x10);
                *puVar1 = auStack_608;
                puVar1[1] = uStack_600;
                fVar52 = _DAT_145fc6ed8;
                *(undefined1 (*) [16])(puVar1 + 2) = auVar259;
                *(undefined1 (*) [16])(puVar1 + 4) = ZEXT416((uint)fVar52);
                puVar1[6] = _DAT_146159bc0;
                puVar1[7] = 0;
                uVar22 = CONCAT44(_UNK_14614f7fc,_UNK_14614f7f8);
                puVar1[8] = CONCAT44(_UNK_14614f7f4,_DAT_14614f7f0);
                puVar1[9] = uVar22;
                puVar1[10] = auStack_588;
                puVar1[0xb] = uStack_580;
                uStack_5b8 = auVar115._0_8_;
                uStack_5b0 = auVar115._8_8_;
                puVar1[0xc] = uStack_5b8;
                puVar1[0xd] = uStack_5b0;
                puVar1[0xe] = auStack_578;
                puVar1[0xf] = uStack_570;
                puVar9 = (undefined8 *)*param_2;
                *param_2 = (ulonglong)(puVar9 + 0xc);
                puVar9[4] = auVar214._0_8_;
                puVar9[5] = uStack_450;
                puVar9[6] = CONCAT44(auStack_5d8._4_4_,auStack_5d8._0_4_);
                puVar9[7] = CONCAT44(fStack_5cc,fStack_5d0);
                *puVar9 = auVar232._0_8_;
                puVar9[1] = uStack_470;
                puVar9[2] = auVar238._0_8_;
                puVar9[3] = uStack_460;
                puVar9[8] = lVar38;
                *(uint *)((longlong)puVar9 + 0xc) = uVar48;
                *(undefined4 *)((longlong)puVar9 + 0x1c) = 0xffff;
                *(uint *)((longlong)puVar9 + 0x2c) = uVar33;
                *(undefined1 (*) [16])(puVar9 + 9) = auStack_4b8;
                puVar9[0xb] = lVar38;
                *(undefined4 *)((longlong)puVar9 + 0x3c) = 0xbf800000;
                lVar38 = *param_1;
                if (*(char *)(lVar38 + 0x97) == '\x01') {
                  *(undefined4 *)((longlong)puVar9 + 0x3c) = *(undefined4 *)(lVar38 + 0x3c);
                }
                else {
                  auVar263 = ZEXT1664(auVar263._0_16_);
                  FUN_144431fa0(*(undefined8 *)(lVar38 + 0x88),puVar9);
                }
                lVar38 = param_1[4];
                lVar47 = (ulonglong)*(uint *)((longlong)param_1 + 0x1c) * 0x10;
                *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) + 1;
                *(undefined8 **)(lVar38 + lVar47) = puVar9;
                *(undefined8 **)(lVar38 + 8 + lVar47) = puVar1;
              }
            }
          }
LAB_1401c2065:
          uVar49 = uVar49 + 1;
        } while (uVar49 != uVar3);
        lVar31 = *param_1;
        iVar41 = *(int *)(lVar31 + 0x80);
      }
    }
    uVar43 = _DAT_145fc6f4c;
    if (0 < iVar41) {
      if (param_4 == '\0') {
        lVar36 = 0;
        lVar38 = 0;
        lVar47 = 0;
        do {
          lVar40 = *(longlong *)(lVar31 + 0x68);
          if (((*(ulonglong *)(lVar40 + 0x50 + lVar38) & uVar30) != 0) &&
             ((*(ulonglong *)(lVar40 + 0x48 + lVar38) & uVar34) != 0)) {
            lVar31 = *(longlong *)(lVar31 + 0x70);
            pfVar2 = (float *)(lVar40 + lVar38);
            fVar112 = *pfVar2;
            fVar113 = pfVar2[1];
            fVar114 = pfVar2[2];
            fVar132 = pfVar2[3];
            pfVar2 = (float *)(lVar40 + 0x10 + lVar38);
            fVar133 = *pfVar2;
            fVar134 = pfVar2[1];
            fVar208 = pfVar2[2];
            fVar211 = pfVar2[3];
            pfVar2 = (float *)(lVar40 + 0x20 + lVar38);
            fVar192 = *pfVar2;
            fVar203 = pfVar2[1];
            fVar206 = pfVar2[2];
            fVar212 = pfVar2[3];
            fVar52 = pfVar6[0xe];
            fVar53 = pfVar6[0x12];
            fVar54 = *(float *)(lVar31 + 0x20 + lVar36);
            fVar108 = *(float *)(lVar31 + 0x24 + lVar36);
            fVar109 = *(float *)(lVar31 + 0x28 + lVar36);
            fVar110 = *(float *)(lVar31 + 0x30 + lVar36);
            fVar111 = *(float *)(lVar31 + 0x34 + lVar36);
            fVar204 = fVar192 * fVar109 + fVar133 * fVar108 + fVar112 * fVar54;
            fVar205 = fVar203 * fVar109 + fVar134 * fVar108 + fVar113 * fVar54;
            fVar207 = fVar206 * fVar109 + fVar208 * fVar108 + fVar114 * fVar54;
            fVar210 = fVar212 * fVar109 + fVar211 * fVar108 + fVar132 * fVar54;
            fVar54 = *(float *)(lVar31 + 0x40 + lVar36);
            fVar108 = *(float *)(lVar31 + 0x38 + lVar36);
            fVar109 = *(float *)(lVar31 + 0x44 + lVar36);
            fVar135 = fVar192 * fVar108 + fVar133 * fVar111 + fVar112 * fVar110;
            fVar178 = fVar203 * fVar108 + fVar134 * fVar111 + fVar113 * fVar110;
            fVar164 = fVar206 * fVar108 + fVar208 * fVar111 + fVar114 * fVar110;
            fVar165 = fVar212 * fVar108 + fVar211 * fVar111 + fVar132 * fVar110;
            fVar108 = *(float *)(lVar31 + 0x48 + lVar36);
            fVar221 = *pfVar5;
            fVar231 = pfVar5[1];
            fVar236 = pfVar5[2];
            fVar237 = pfVar5[3];
            fVar110 = pfVar6[8];
            fVar240 = pfVar5[4];
            fVar209 = pfVar5[5];
            fVar193 = pfVar5[6];
            fVar194 = pfVar5[7];
            fVar111 = pfVar6[9];
            fVar176 = fVar192 * fVar108 + fVar133 * fVar109 + fVar112 * fVar54;
            fVar177 = fVar203 * fVar108 + fVar134 * fVar109 + fVar113 * fVar54;
            fVar206 = fVar206 * fVar108 + fVar208 * fVar109 + fVar114 * fVar54;
            fVar212 = fVar212 * fVar108 + fVar211 * fVar109 + fVar132 * fVar54;
            fVar112 = pfVar5[8];
            fVar113 = pfVar5[9];
            fVar114 = pfVar5[10];
            fVar132 = pfVar5[0xb];
            fVar54 = pfVar6[10];
            fVar108 = pfVar6[0xc];
            fVar133 = fVar112 * fVar54 + fVar240 * fVar111 + fVar221 * fVar110;
            fVar134 = fVar113 * fVar54 + fVar209 * fVar111 + fVar231 * fVar110;
            fVar208 = fVar114 * fVar54 + fVar193 * fVar111 + fVar236 * fVar110;
            fVar110 = fVar132 * fVar54 + fVar194 * fVar111 + fVar237 * fVar110;
            fVar54 = pfVar6[0xd];
            fVar109 = pfVar6[0x10];
            fVar111 = fVar112 * fVar52 + fVar240 * fVar54 + fVar221 * fVar108;
            fVar211 = fVar113 * fVar52 + fVar209 * fVar54 + fVar231 * fVar108;
            fVar192 = fVar114 * fVar52 + fVar193 * fVar54 + fVar236 * fVar108;
            fVar203 = fVar132 * fVar52 + fVar194 * fVar54 + fVar237 * fVar108;
            fVar52 = pfVar6[0x11];
            auVar95._0_4_ = fVar133 * fVar204;
            auVar95._4_4_ = fVar134 * fVar205;
            auVar95._8_4_ = fVar208 * fVar207;
            auVar95._12_4_ = fVar110 * fVar210;
            auVar227._12_4_ = 0;
            auVar227._0_12_ = ZEXT412(0);
            auVar227 = auVar227 << 0x20;
            auVar95 = vblendps_avx(auVar95,auVar227,8);
            auVar96._0_4_ = fVar111 * fVar204;
            auVar96._4_4_ = fVar211 * fVar205;
            auVar96._8_4_ = fVar192 * fVar207;
            auVar96._12_4_ = fVar203 * fVar210;
            auVar96 = vblendps_avx(auVar96,auVar227,8);
            fVar112 = fVar112 * fVar53 + fVar240 * fVar52 + fVar221 * fVar109;
            fVar113 = fVar113 * fVar53 + fVar209 * fVar52 + fVar231 * fVar109;
            fVar114 = fVar114 * fVar53 + fVar193 * fVar52 + fVar236 * fVar109;
            fVar109 = fVar132 * fVar53 + fVar194 * fVar52 + fVar237 * fVar109;
            auVar97._0_4_ = fVar112 * fVar204;
            auVar97._4_4_ = fVar113 * fVar205;
            auVar97._8_4_ = fVar114 * fVar207;
            auVar97._12_4_ = fVar109 * fVar210;
            auVar97 = vblendps_avx(auVar97,auVar227,8);
            auVar98._0_4_ = fVar133 * fVar135;
            auVar98._4_4_ = fVar134 * fVar178;
            auVar98._8_4_ = fVar208 * fVar164;
            auVar98._12_4_ = fVar110 * fVar165;
            auVar116 = vblendps_avx(auVar98,auVar227,8);
            auVar99._0_4_ = fVar111 * fVar135;
            auVar99._4_4_ = fVar211 * fVar178;
            auVar99._8_4_ = fVar192 * fVar164;
            auVar99._12_4_ = fVar203 * fVar165;
            auVar55 = vblendps_avx(auVar99,auVar227,8);
            auVar100._0_4_ = fVar112 * fVar135;
            auVar100._4_4_ = fVar113 * fVar178;
            auVar100._8_4_ = fVar114 * fVar164;
            auVar100._12_4_ = fVar109 * fVar165;
            auVar98 = vblendps_avx(auVar100,auVar227,8);
            auVar101._0_4_ = fVar176 * fVar133;
            auVar101._4_4_ = fVar177 * fVar134;
            auVar101._8_4_ = fVar206 * fVar208;
            auVar101._12_4_ = fVar212 * fVar110;
            auVar56 = vblendps_avx(auVar101,auVar227,8);
            auVar102._0_4_ = fVar176 * fVar111;
            auVar102._4_4_ = fVar177 * fVar211;
            auVar102._8_4_ = fVar206 * fVar192;
            auVar102._12_4_ = fVar212 * fVar203;
            auVar121 = vblendps_avx(auVar102,auVar227,8);
            auVar103._0_4_ = fVar176 * fVar112;
            auVar103._4_4_ = fVar177 * fVar113;
            auVar103._8_4_ = fVar206 * fVar114;
            auVar103._12_4_ = fVar212 * fVar109;
            auVar115 = vblendps_avx(auVar103,auVar227,8);
            auVar257 = vhaddps_avx(auVar97,auVar96);
            auVar152 = vhaddps_avx(auVar95,auVar96);
            auVar213 = vhaddps_avx(auVar56,auVar121);
            pfVar2 = (float *)(lVar31 + lVar36);
            auVar255._0_4_ = _DAT_146174864 + *pfVar2;
            auVar255._4_4_ = _DAT_146174864 + pfVar2[1];
            auVar255._8_4_ = _DAT_146174864 + pfVar2[2];
            auVar255._12_4_ = _DAT_146174864 + pfVar2[3];
            auVar257 = vhaddps_avx(auVar152,auVar257);
            auVar152 = vhaddps_avx(auVar98,auVar55);
            auVar223 = vhaddps_avx(auVar116,auVar55);
            auVar152 = vhaddps_avx(auVar223,auVar152);
            auVar223 = vhaddps_avx(auVar115,auVar121);
            auVar213 = vhaddps_avx(auVar213,auVar223);
            auVar104._0_4_ = (float)(uVar43 & auVar152._0_4_);
            auVar104._4_4_ = (float)(uVar43 & auVar152._4_4_);
            auVar104._8_4_ = (float)(uVar43 & auVar152._8_4_);
            auVar104._12_4_ = (float)(uVar43 & auVar152._12_4_);
            auVar243._0_4_ = (float)(uVar43 & auVar257._0_4_);
            auVar243._4_4_ = (float)(uVar43 & auVar257._4_4_);
            auVar243._8_4_ = (float)(uVar43 & auVar257._8_4_);
            auVar243._12_4_ = (float)(uVar43 & auVar257._12_4_);
            auVar257 = vpmovzxdq_avx(auVar104);
            auVar150._0_4_ = (float)(uVar43 & auVar213._0_4_);
            auVar150._4_4_ = (float)(uVar43 & auVar213._4_4_);
            auVar150._8_4_ = (float)(uVar43 & auVar213._8_4_);
            auVar150._12_4_ = (float)(uVar43 & auVar213._12_4_);
            auVar152 = vunpcklps_avx(auVar243,auVar150);
            auVar122 = vunpcklps_avx(auVar152,auVar257);
            auVar213 = vunpckhps_avx(auVar152,auVar257);
            fVar52 = *pfVar6;
            fVar53 = pfVar6[1];
            auVar257 = vshufps_avx(auVar255,auVar255,0x55);
            auVar152 = vshufps_avx(auVar255,auVar255,0xaa);
            auVar223 = vunpckhps_avx(auVar104,auVar227);
            auVar130._0_4_ =
                 auVar150._0_4_ * auVar152._0_4_ +
                 auVar104._0_4_ * auVar257._0_4_ + auVar243._0_4_ * auVar255._0_4_ + *pfVar6;
            auVar130._4_4_ =
                 auVar150._4_4_ * auVar152._4_4_ +
                 auVar104._4_4_ * auVar257._4_4_ + auVar243._4_4_ * auVar255._0_4_ + pfVar6[1];
            auVar130._8_4_ =
                 auVar150._8_4_ * auVar152._8_4_ +
                 auVar104._8_4_ * auVar257._8_4_ + auVar243._8_4_ * auVar255._0_4_ + pfVar6[2];
            auVar130._12_4_ =
                 auVar150._12_4_ * auVar152._12_4_ +
                 auVar104._12_4_ * auVar257._12_4_ + auVar243._12_4_ * auVar255._0_4_ + pfVar6[3];
            auVar257 = vunpckhps_avx(auVar243,auVar150);
            auVar56 = vhaddps_avx(auVar56,auVar227);
            auVar121 = vhaddps_avx(auVar121,auVar227);
            auVar257 = vunpcklps_avx(auVar257,auVar223);
            fVar54 = pfVar6[2];
            auVar262._0_4_ =
                 auVar257._0_4_ * fVar54 +
                 auVar213._0_4_ * fVar53 + auVar122._0_4_ * fVar52 + auVar255._0_4_;
            auVar262._4_4_ =
                 auVar257._4_4_ * fVar54 +
                 auVar213._4_4_ * fVar53 + auVar122._4_4_ * fVar52 + auVar255._4_4_;
            auVar262._8_4_ =
                 auVar257._8_4_ * fVar54 +
                 auVar213._8_4_ * fVar53 + auVar122._8_4_ * fVar52 + auVar255._8_4_;
            auVar262._12_4_ =
                 auVar257._12_4_ * fVar54 +
                 auVar213._12_4_ * fVar53 + auVar122._12_4_ * fVar52 + auVar255._12_4_;
            auVar152 = vsubps_avx(*(undefined1 (*) [16])(lVar31 + 0x10 + lVar36),
                                  *(undefined1 (*) [16])(pfVar6 + 4));
            auVar257 = vhaddps_avx(auVar95,auVar116);
            fVar52 = auVar152._0_4_;
            auVar161._0_4_ = fVar133 * fVar52;
            fVar53 = auVar152._4_4_;
            auVar161._4_4_ = fVar134 * fVar53;
            fVar54 = auVar152._8_4_;
            auVar161._8_4_ = fVar208 * fVar54;
            fVar108 = auVar152._12_4_;
            auVar161._12_4_ = fVar110 * fVar108;
            auVar175._0_4_ = fVar111 * fVar52;
            auVar175._4_4_ = fVar211 * fVar53;
            auVar175._8_4_ = fVar192 * fVar54;
            auVar175._12_4_ = fVar203 * fVar108;
            auVar95 = vblendps_avx(auVar161,auVar227,8);
            auVar116 = vblendps_avx(auVar175,auVar227,8);
            auVar56 = vhaddps_avx(auVar257,auVar56);
            auVar257 = vhaddps_avx(auVar95,auVar95);
            auVar152 = vhaddps_avx(auVar95,auVar116);
            auVar257 = vhaddps_avx(auVar257,auVar257);
            auVar95 = vhaddps_avx(auVar96,auVar55);
            auVar96 = vhaddps_avx(auVar95,auVar121);
            auVar95 = vhaddps_avx(auVar116,auVar116);
            auVar55 = vhaddps_avx(auVar95,auVar95);
            auVar105._0_4_ = fVar112 * fVar52;
            auVar105._4_4_ = fVar113 * fVar53;
            auVar105._8_4_ = fVar114 * fVar54;
            auVar105._12_4_ = fVar109 * fVar108;
            auVar97 = vhaddps_avx(auVar97,auVar98);
            auVar95 = vblendps_avx(auVar105,auVar227,8);
            auVar98 = vhaddps_avx(auVar115,auVar227);
            auVar97 = vhaddps_avx(auVar97,auVar98);
            auVar98 = vhaddps_avx(auVar95,auVar95);
            auVar95 = vhaddps_avx(auVar95,auVar116);
            auVar116 = vhaddps_avx(auVar98,auVar98);
            auVar95 = vhaddps_avx(auVar152,auVar95);
            auVar106._0_4_ = uVar43 & auVar95._0_4_;
            auVar106._4_4_ = uVar43 & auVar95._4_4_;
            auVar106._8_4_ = uVar43 & auVar95._8_4_;
            auVar106._12_4_ = uVar43 & auVar95._12_4_;
            auVar95 = vcmpps_avx(auVar106,auVar130,2);
            auVar131._0_4_ =
                 uVar43 & (uint)(auVar116._0_4_ * auVar97._0_4_ +
                                auVar55._0_4_ * auVar96._0_4_ + auVar56._0_4_ * auVar257._0_4_);
            auVar131._4_4_ =
                 uVar43 & (uint)(auVar116._4_4_ * auVar97._4_4_ +
                                auVar55._4_4_ * auVar96._4_4_ + auVar56._4_4_ * auVar257._4_4_);
            auVar131._8_4_ =
                 uVar43 & (uint)(auVar116._8_4_ * auVar97._8_4_ +
                                auVar55._8_4_ * auVar96._8_4_ + auVar56._8_4_ * auVar257._8_4_);
            auVar131._12_4_ =
                 uVar43 & (uint)(auVar116._12_4_ * auVar97._12_4_ +
                                auVar55._12_4_ * auVar96._12_4_ + auVar56._12_4_ * auVar257._12_4_);
            auVar96 = vcmpps_avx(auVar131,auVar262,2);
            auVar107._0_4_ = auVar95._0_4_ & auVar96._0_4_;
            auVar107._4_4_ = auVar95._4_4_ & auVar96._4_4_;
            auVar107._8_4_ = auVar95._8_4_ & auVar96._8_4_;
            auVar107._12_4_ = auVar95._12_4_ & auVar96._12_4_;
            uVar29 = vmovmskps_avx(auVar107);
            if ((~(byte)uVar29 & 7) == 0) {
              uVar48 = *(uint *)((longlong)param_1 + 0x1c);
              if (uVar48 != *(uint *)(param_1 + 3)) {
                lVar35 = param_1[4];
                *(uint *)((longlong)param_1 + 0x1c) = uVar48 + 1;
                *(longlong *)(lVar35 + (ulonglong)uVar48 * 0x10) = lVar40 + lVar38;
                *(longlong *)(lVar35 + 8 + (ulonglong)uVar48 * 0x10) = lVar31 + lVar36;
              }
            }
          }
          lVar31 = *param_1;
          lVar47 = lVar47 + 1;
          lVar38 = lVar38 + 0x60;
          lVar36 = lVar36 + 0x80;
        } while (lVar47 < *(int *)(lVar31 + 0x80));
      }
      else {
        lVar36 = 0;
        lVar38 = 0;
        lVar47 = 0;
        do {
          lVar40 = *(longlong *)(lVar31 + 0x68);
          if (((*(ulonglong *)(lVar40 + 0x50 + lVar38) & uVar30) != 0) &&
             ((*(ulonglong *)(lVar40 + 0x48 + lVar38) & uVar34) != 0)) {
            uVar43 = *(uint *)((longlong)param_1 + 0x1c);
            if (uVar43 != *(uint *)(param_1 + 3)) {
              lVar31 = *(longlong *)(lVar31 + 0x70);
              lVar35 = param_1[4];
              *(uint *)((longlong)param_1 + 0x1c) = uVar43 + 1;
              *(longlong *)(lVar35 + (ulonglong)uVar43 * 0x10) = lVar40 + lVar38;
              *(longlong *)(lVar35 + 8 + (ulonglong)uVar43 * 0x10) = lVar31 + lVar36;
              lVar31 = *param_1;
            }
          }
          lVar47 = lVar47 + 1;
          lVar38 = lVar38 + 0x60;
          lVar36 = lVar36 + 0x80;
        } while (lVar47 < *(int *)(lVar31 + 0x80));
      }
    }
  }
  else {
    uVar30 = *param_2 + 7 & 0xfffffffffffffff8;
    if (param_2[2] < uVar30 + 0x10) {
      uVar30 = 0;
    }
    else {
      *param_2 = uVar30 + 0x10;
    }
    uVar34 = param_1[4];
    if (param_1[4] == 0) {
      param_1[4] = uVar30;
      uVar34 = uVar30;
    }
    *(undefined4 *)(param_1 + 3) = 1;
    uVar43 = *(uint *)((longlong)param_1 + 0x1c);
    lVar31 = 0;
    if ((ulonglong)uVar43 != 1) {
      lVar31 = (ulonglong)uVar43 * 0x10;
      *(uint *)((longlong)param_1 + 0x1c) = uVar43 + 1;
      lVar36 = param_1[2];
      *(longlong *)(uVar34 + lVar31) = param_1[1];
      ((longlong *)(uVar34 + lVar31))[1] = lVar36;
    }
  }
  return CONCAT71((int7)((ulonglong)lVar31 >> 8),*(int *)((longlong)param_1 + 0x1c) != 0);
}

