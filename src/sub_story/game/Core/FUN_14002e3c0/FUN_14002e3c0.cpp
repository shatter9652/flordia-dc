// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002e3c0  size: 1920 bytes
// Name:    FUN_14002e3c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142095ed0, FUN_144e2aa00, FUN_1440a9660, FUN_143d01df0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14002e3c0(longlong param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong *plVar24;
  undefined1 (*pauVar25) [16];
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar49;
  float fVar50;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar51;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
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
  float fVar74;
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
  float fVar89;
  float fVar105;
  float fVar106;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar107;
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
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [64];
  undefined1 auVar118 [64];
  float fVar125;
  float fVar126;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined8 unaff_XMM8_Qa;
  float fVar143;
  undefined8 unaff_XMM8_Qb;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  float fVar142;
  float fVar144;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  float fVar145;
  float fVar156;
  float fVar157;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  float fVar158;
  undefined1 auVar155 [64];
  undefined8 unaff_XMM10_Qa;
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined8 unaff_XMM10_Qb;
  undefined1 auVar166 [64];
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [64];
  undefined1 auVar173 [64];
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [64];
  undefined8 unaff_XMM13_Qa;
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined8 unaff_XMM13_Qb;
  undefined1 auVar181 [64];
  undefined1 auVar182 [16];
  undefined1 in_ZMM14 [64];
  undefined1 auVar183 [16];
  undefined1 auVar184 [64];
  undefined1 auStack_2a8 [8];
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_268;
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
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [12];
  undefined4 uStack_12c;
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [8];
  float fStack_f0;
  float fStack_ec;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [8];
  float fStack_d0;
  float fStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  auStack_68._8_8_ = unaff_XMM12_Qb;
  auStack_68._0_8_ = unaff_XMM12_Qa;
  plVar24 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0);
  if ((byte)(*(char *)((longlong)plVar24 + 0xfa) - 7U) < 2) {
    auStack_168._8_8_ = 0x14002e446;
    uStack_a8 = unaff_XMM8_Qa;
    uStack_a0 = unaff_XMM8_Qb;
    uStack_88 = unaff_XMM10_Qa;
    uStack_80 = unaff_XMM10_Qb;
    uStack_78 = unaff_XMM11_Qa;
    uStack_70 = unaff_XMM11_Qb;
    uStack_58 = unaff_XMM13_Qa;
    uStack_50 = unaff_XMM13_Qb;
    lVar11 = func_0x00014515d910(*(undefined4 *)((longlong)plVar24 + 0x9c));
    if (lVar11 != 0) {
      auVar117 = ZEXT464((uint)*(float *)(lVar11 + 0x110));
      auVar37._0_12_ = ZEXT812(0);
      auVar37._12_4_ = 0;
      if (*(float *)(lVar11 + 0x110) < 0.0) {
        if (*(char *)(lVar11 + 0x114) == '\0') {
          auVar37 = ZEXT416((uint)_DAT_145fc6ed8);
        }
        auVar117 = ZEXT1664(auVar37);
      }
      auStack_168._8_8_ = 0x14002e483;
      cVar7 = FUN_143d01df0(lVar11);
      if ((cVar7 == '\0') && (DAT_14abbe2e0 == '\0')) {
        auStack_168._8_8_ = 0x14002e49d;
        cVar7 = func_0x000144f7b6a0();
        if ((cVar7 == '\0') && ((DAT_14abbe2e1 == '\0' && ((*(byte *)(plVar24 + 0x1d) & 1) == 0))))
        {
          auStack_168._8_8_ = 0x14002e4cc;
          puVar12 = (undefined8 *)(**(code **)(*plVar24 + 0x98))(plVar24);
          if (puVar12 != (undefined8 *)0x0) {
            auStack_168._8_8_ = 0x14002e4e5;
            lVar13 = func_0x0001452eb880(lVar11,0x1e);
            auStack_168._8_8_ = 0x14002e4f5;
            lVar11 = func_0x0001452eb880(lVar11,0x20);
            lVar19 = lVar13 + 0xc00;
            auStack_168._8_8_ = 0x14002e50c;
            iVar8 = func_0x000144f53320(lVar19,1);
            auStack_118._0_8_ = lVar11;
            auStack_128._8_8_ = lVar11 + 0xc00;
            auStack_168._8_8_ = 0x14002e527;
            iVar9 = func_0x000144f53320(lVar11 + 0xc00,1);
            if (iVar8 == -1) {
              bVar26 = false;
            }
            else {
              auStack_168._8_8_ = 0x14002e543;
              iVar10 = func_0x000144f85470(*(undefined8 *)(lVar13 + 0x1160),
                                           *(undefined4 *)(lVar13 + 0x11a0));
              bVar26 = iVar8 != iVar10;
            }
            if (iVar9 == -1) {
              uStack_12c = 0;
            }
            else {
              uVar16 = *(undefined8 *)(auStack_118._0_8_ + 0x1160);
              auStack_168._8_8_ = 0x14002e56c;
              iVar8 = func_0x000144f85470(uVar16,*(undefined4 *)(auStack_118._0_8_ + 0x11a0));
              uStack_12c = (undefined4)CONCAT71((int7)((ulonglong)uVar16 >> 8),iVar9 != iVar8);
            }
            auStack_128._0_8_ = lVar13;
            if (bVar26) {
              bVar29 = false;
            }
            else {
              bVar29 = *(short *)(**(longlong **)(plVar24[4] + 0xf8) + 0x7a) != -1;
            }
            auStack_118._8_8_ = puVar12;
            if ((char)uStack_12c == '\0') {
              auStack_168._8_8_ = 0x14002e5b8;
              lVar11 = func_0x000144f64c10(*puVar12,0);
              lVar11 = *(longlong *)(lVar11 + 0x28);
              lVar13 = (longlong)*(short *)(**(longlong **)(plVar24[4] + 0xf8) + 0x40) * 0x50;
              lVar17 = (longlong)*(short *)(lVar11 + 0x46 + lVar13);
              bVar27 = *(short *)((~(lVar17 >> 0x3f) &
                                  (lVar17 - (ulonglong)*(ushort *)(lVar11 + 0x48 + lVar13)) * 0x50 +
                                  lVar11 + lVar13) + 0x48) != 0;
            }
            else {
              bVar27 = false;
            }
            bVar28 = true;
            if (!bVar29) {
              auStack_168._8_8_ = 0x14002e61b;
              iVar8 = func_0x000144f53320(lVar19,1);
              bVar28 = iVar8 != -1;
            }
            bVar29 = true;
            if (!bVar27) {
              auStack_168._8_8_ = 0x14002e636;
              iVar8 = func_0x000144f53320(auStack_128._8_8_,1);
              uStack_90 = uStack_70;
              uStack_98 = uStack_78;
              uVar5 = uStack_80;
              uVar16 = uStack_88;
              uStack_c0 = uStack_a0;
              uStack_c8 = uStack_a8;
              bVar29 = iVar8 != -1;
              if (!(bool)(bVar28 | bVar29)) {
                uStack_78 = uStack_58;
                uStack_70 = uStack_50;
                uStack_88 = auStack_68._0_8_;
                uStack_80 = auStack_68._8_8_;
                uStack_a8 = uVar16;
                uStack_a0 = uVar5;
                auVar117 = ZEXT1664(auVar117._0_16_);
                uVar23 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
                uVar4 = *(undefined4 *)(uVar23 + 0x9c);
                auStack_68 = in_ZMM14._0_16_;
                lVar11 = func_0x000144e25990(uVar4);
                lVar11 = *(longlong *)(lVar11 + 0x18);
                lVar13 = *(longlong *)(lVar11 + 0x170);
                if (lVar13 != 0) {
                  pauVar25 = (undefined1 (*) [16])func_0x000140951b40(lVar13);
                  if ((pauVar25 == (undefined1 (*) [16])0x0) || (pauVar25[1][0xd] != '\0')) {
                    lVar13 = func_0x000144e25940(lVar13,*(undefined8 *)(lVar11 + 0x1a0));
                    pauVar25 = *(undefined1 (**) [16])(*(longlong *)(lVar13 + 0x18) + 0x28);
                    auVar37 = *pauVar25;
                    fVar31 = *(float *)(*pauVar25 + 0xc);
                    auVar53._0_4_ = auVar37._0_4_ + auVar37._0_4_;
                    auVar53._4_4_ = auVar37._4_4_ + auVar37._4_4_;
                    auVar53._8_4_ = auVar37._8_4_ + auVar37._8_4_;
                    auVar53._12_4_ = auVar37._12_4_ + auVar37._12_4_;
                    auVar48 = vshufps_avx(auVar37,auVar37,0xc9);
                    auVar37 = vshufps_avx(auVar37,auVar37,0xd2);
                    auVar38 = vshufps_avx(auVar53,auVar53,0xc9);
                    auVar130 = vshufps_avx(auVar53,auVar53,0xd2);
                    fStack_28c = *(float *)pauVar25[2];
                    auVar109._0_4_ = auVar37._0_4_ * auVar53._0_4_ + auVar38._0_4_ * fVar31;
                    auVar109._4_4_ = auVar37._4_4_ * auVar53._4_4_ + auVar38._4_4_ * fVar31;
                    auVar109._8_4_ = auVar37._8_4_ * auVar53._8_4_ + auVar38._8_4_ * fVar31;
                    auVar109._12_4_ = auVar37._12_4_ * auVar53._12_4_ + auVar38._12_4_ * fVar31;
                    auVar76._0_4_ = -(fVar31 * auVar130._0_4_) + auVar48._0_4_ * auVar53._0_4_;
                    auVar76._4_4_ = -(fVar31 * auVar130._4_4_) + auVar48._4_4_ * auVar53._4_4_;
                    auVar76._8_4_ = -(fVar31 * auVar130._8_4_) + auVar48._8_4_ * auVar53._8_4_;
                    auVar76._12_4_ = -(fVar31 * auVar130._12_4_) + auVar48._12_4_ * auVar53._12_4_;
                    auVar120._0_4_ =
                         -(auVar130._0_4_ * auVar37._0_4_) -
                         (auVar48._0_4_ * auVar38._0_4_ - _DAT_145fc6ed8);
                    auVar120._4_4_ =
                         -(auVar130._4_4_ * auVar37._4_4_) -
                         (auVar48._4_4_ * auVar38._4_4_ - _DAT_145fc6ed8);
                    auVar120._8_4_ =
                         -(auVar130._8_4_ * auVar37._8_4_) -
                         (auVar48._8_4_ * auVar38._8_4_ - _DAT_145fc6ed8);
                    auVar120._12_4_ =
                         -(auVar130._12_4_ * auVar37._12_4_) -
                         (auVar48._12_4_ * auVar38._12_4_ - _DAT_145fc6ed8);
                    auVar37 = vblendps_avx(auVar109,auVar76,2);
                    auVar48 = vblendps_avx(auVar120,auVar109,2);
                    auVar38 = vblendps_avx(auVar76,auVar120,2);
                    auVar37 = vblendps_avx(auVar120,auVar37,3);
                    auVar48 = vblendps_avx(auVar76,auVar48,3);
                    auVar38 = vblendps_avx(auVar109,auVar38,3);
                    fStack_298 = auVar48._0_4_ * fStack_28c;
                    fStack_294 = auVar48._4_4_ * fStack_28c;
                    fStack_290 = auVar48._8_4_ * fStack_28c;
                    fStack_28c = auVar48._12_4_ * fStack_28c;
                    fVar31 = *(float *)(pauVar25[2] + 4);
                    fVar125 = auVar38._0_4_ * fVar31;
                    fVar126 = auVar38._4_4_ * fVar31;
                    fVar145 = auVar38._8_4_ * fVar31;
                    fVar31 = auVar38._12_4_ * fVar31;
                    fVar30 = *(float *)(pauVar25[2] + 8);
                    auStack_2a8._4_4_ = auVar37._4_4_ * fVar30;
                    auStack_2a8._0_4_ = auVar37._0_4_ * fVar30;
                    fStack_2a0 = auVar37._8_4_ * fVar30;
                    fStack_29c = auVar37._12_4_ * fVar30;
                  }
                  else {
                    auVar37 = *pauVar25;
                    fVar31 = *(float *)(*pauVar25 + 0xc);
                    auVar63._0_4_ = auVar37._0_4_ + auVar37._0_4_;
                    auVar63._4_4_ = auVar37._4_4_ + auVar37._4_4_;
                    auVar63._8_4_ = auVar37._8_4_ + auVar37._8_4_;
                    auVar63._12_4_ = auVar37._12_4_ + auVar37._12_4_;
                    auVar48 = vshufps_avx(auVar37,auVar37,0xc9);
                    auVar37 = vshufps_avx(auVar37,auVar37,0xd2);
                    auVar38 = vshufps_avx(auVar63,auVar63,0xc9);
                    auVar130 = vshufps_avx(auVar63,auVar63,0xd2);
                    fStack_28c = *(float *)pauVar25[2];
                    auVar116._0_4_ = auVar37._0_4_ * auVar63._0_4_ + auVar38._0_4_ * fVar31;
                    auVar116._4_4_ = auVar37._4_4_ * auVar63._4_4_ + auVar38._4_4_ * fVar31;
                    auVar116._8_4_ = auVar37._8_4_ * auVar63._8_4_ + auVar38._8_4_ * fVar31;
                    auVar116._12_4_ = auVar37._12_4_ * auVar63._12_4_ + auVar38._12_4_ * fVar31;
                    auVar79._0_4_ = -(fVar31 * auVar130._0_4_) + auVar48._0_4_ * auVar63._0_4_;
                    auVar79._4_4_ = -(fVar31 * auVar130._4_4_) + auVar48._4_4_ * auVar63._4_4_;
                    auVar79._8_4_ = -(fVar31 * auVar130._8_4_) + auVar48._8_4_ * auVar63._8_4_;
                    auVar79._12_4_ = -(fVar31 * auVar130._12_4_) + auVar48._12_4_ * auVar63._12_4_;
                    auVar124._0_4_ =
                         -(auVar130._0_4_ * auVar37._0_4_) -
                         (auVar48._0_4_ * auVar38._0_4_ - _DAT_145fc6ed8);
                    auVar124._4_4_ =
                         -(auVar130._4_4_ * auVar37._4_4_) -
                         (auVar48._4_4_ * auVar38._4_4_ - _DAT_145fc6ed8);
                    auVar124._8_4_ =
                         -(auVar130._8_4_ * auVar37._8_4_) -
                         (auVar48._8_4_ * auVar38._8_4_ - _DAT_145fc6ed8);
                    auVar124._12_4_ =
                         -(auVar130._12_4_ * auVar37._12_4_) -
                         (auVar48._12_4_ * auVar38._12_4_ - _DAT_145fc6ed8);
                    auVar37 = vblendps_avx(auVar116,auVar79,2);
                    auVar48 = vblendps_avx(auVar124,auVar116,2);
                    auVar38 = vblendps_avx(auVar79,auVar124,2);
                    auVar37 = vblendps_avx(auVar124,auVar37,3);
                    auVar48 = vblendps_avx(auVar79,auVar48,3);
                    auVar38 = vblendps_avx(auVar116,auVar38,3);
                    fStack_298 = auVar48._0_4_ * fStack_28c;
                    fStack_294 = auVar48._4_4_ * fStack_28c;
                    fStack_290 = auVar48._8_4_ * fStack_28c;
                    fStack_28c = auVar48._12_4_ * fStack_28c;
                    fVar31 = *(float *)(pauVar25[2] + 4);
                    fVar125 = auVar38._0_4_ * fVar31;
                    fVar126 = auVar38._4_4_ * fVar31;
                    fVar145 = auVar38._8_4_ * fVar31;
                    fVar31 = auVar38._12_4_ * fVar31;
                    fVar30 = *(float *)(pauVar25[2] + 8);
                    auStack_2a8._0_4_ = auVar37._0_4_ * fVar30;
                    auStack_2a8._4_4_ = auVar37._4_4_ * fVar30;
                    fStack_2a0 = auVar37._8_4_ * fVar30;
                    fStack_29c = auVar37._12_4_ * fVar30;
                    lVar13 = func_0x000144e25940(lVar13,*(undefined8 *)(lVar11 + 0x1a0));
                  }
                  uVar16 = *(undefined8 *)pauVar25[1];
                  uVar5 = *(undefined8 *)(pauVar25[1] + 8);
                  auVar37 = *(undefined1 (*) [16])(uVar23 + 0x70);
                  auVar172 = ZEXT1664(auVar37);
                  auVar166 = ZEXT1664(*(undefined1 (*) [16])(uVar23 + 0x40));
                  auVar177 = ZEXT1664(*(undefined1 (*) [16])(uVar23 + 0x50));
                  auVar181 = ZEXT1664(*(undefined1 (*) [16])(uVar23 + 0x60));
                  lVar19 = *(longlong *)(uVar23 + 0x20);
                  auVar37 = vpunpckhwd_avx(auVar37,auVar37);
                  auVar37 = vpsrad_avx(auVar37,0x10);
                  auVar37 = vcvtdq2ps_avx(auVar37);
                  auVar37 = vshufpd_avx(auVar37,auVar37,3);
                  auVar118 = ZEXT1664(auVar37);
                  uVar14 = func_0x00014515d910(uVar4);
                  lVar15 = func_0x0001452eb880(uVar14,0x1e);
                  plVar24 = *(longlong **)(lVar19 + 0xf8);
                  lVar17 = *plVar24;
                  lVar11 = *(longlong *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar11 + 0x1a8) + 0x18) + 0x18) + 0x28);
                  lVar18 = (longlong)*(short *)(lVar17 + 0x3c) * 0x50;
                  lVar17 = (longlong)*(short *)(lVar17 + 0x40) * 0x50;
                  lVar22 = (longlong)*(short *)(lVar11 + 0x46 + lVar18);
                  lVar21 = (longlong)*(short *)(lVar11 + 0x46 + lVar17);
                  uVar3 = *(ushort *)(lVar11 + 0x48 + lVar17);
                  uVar20 = ~(lVar22 >> 0x3f) &
                           (lVar22 - (ulonglong)*(ushort *)(lVar11 + 0x48 + lVar18)) * 0x50 +
                           lVar11 + lVar18;
                  FUN_14542b8d0(lVar13,*(undefined2 *)(uVar20 + 0x48),auStack_128);
                  auVar48 = auVar172._0_16_;
                  auVar37 = auVar118._0_16_;
                  auVar184 = ZEXT1664(auStack_128);
                  if ((-1 < (longlong)*(short *)(uVar20 + 0x46)) && (uVar20 != 0)) {
                    lVar18 = ((longlong)*(short *)(uVar20 + 0x46) -
                             (ulonglong)*(ushort *)(uVar20 + 0x48)) * 0x50 + uVar20;
                    while( true ) {
                      auVar48 = auVar172._0_16_;
                      auVar37 = auVar118._0_16_;
                      if (*(short *)(lVar18 + 0x48) == 0) break;
                      FUN_14542b8d0(lVar13,*(short *)(lVar18 + 0x48),&fStack_258);
                      auVar48 = auVar172._0_16_;
                      auVar37 = auVar118._0_16_;
                      fVar30 = auVar184._0_4_;
                      auVar130 = auVar184._0_16_;
                      auVar38 = vshufps_avx(auVar130,auVar130,0x55);
                      auVar130 = vshufps_avx(auVar130,auVar130,0xaa);
                      auVar184 = ZEXT1664(CONCAT412(auVar130._12_4_ * fStack_22c +
                                                    auVar38._12_4_ * fStack_23c +
                                                    fVar30 * fStack_24c,
                                                    CONCAT48(auVar130._8_4_ * fStack_230 +
                                                             auVar38._8_4_ * fStack_240 +
                                                             fVar30 * fStack_250,
                                                             CONCAT44(auVar130._4_4_ * fStack_234 +
                                                                      auVar38._4_4_ * fStack_244 +
                                                                      fVar30 * fStack_254,
                                                                      auVar130._0_4_ * fStack_238 +
                                                                      auVar38._0_4_ * fStack_248 +
                                                                      fVar30 * fStack_258))));
                      if (((longlong)*(short *)(lVar18 + 0x46) < 0) ||
                         (bVar26 = lVar18 == 0,
                         lVar18 = ((longlong)*(short *)(lVar18 + 0x46) -
                                  (ulonglong)*(ushort *)(lVar18 + 0x48)) * 0x50 + lVar18, bVar26))
                      break;
                    }
                  }
                  auVar173 = ZEXT1664(CONCAT412(auVar37._12_4_ * _UNK_146159c9c + auVar48._12_4_,
                                                CONCAT48(auVar37._8_4_ * _UNK_146159c98 +
                                                         auVar48._8_4_,
                                                         CONCAT44(auVar37._4_4_ * _UNK_146159c94 +
                                                                  auVar48._4_4_,
                                                                  auVar37._0_4_ * _DAT_146159c90 +
                                                                  auVar48._0_4_))));
                  uVar20 = ~(lVar21 >> 0x3f) & (lVar21 - (ulonglong)uVar3) * 0x50 + lVar11 + lVar17;
                  func_0x000140453350(auStack_138,plVar24,0x1e);
                  auVar172 = ZEXT1664(CONCAT412(uStack_12c,auStack_138));
                  cVar7 = FUN_144fbcfc0(*(undefined4 *)(lVar15 + 0xa0),
                                        *(undefined8 *)(lVar15 + 0x110),0);
                  auVar48 = vunpcklps_avx(auVar166._0_16_,auVar181._0_16_);
                  auVar118 = ZEXT1664(auVar48);
                  auVar37 = vunpckhps_avx(auVar166._0_16_,auVar181._0_16_);
                  auVar166 = ZEXT1664(auVar37);
                  fVar30 = auStack_2a8._0_4_;
                  fVar156 = auStack_2a8._4_4_;
                  fVar157 = auStack_2a8._8_4_;
                  fVar158 = auStack_2a8._12_4_;
                  fStack_288 = (float)uVar16;
                  fStack_284 = (float)((ulonglong)uVar16 >> 0x20);
                  fStack_280 = (float)uVar5;
                  fStack_27c = (float)((ulonglong)uVar5 >> 0x20);
                  if (cVar7 != '\0') {
                    fVar32 = *(float *)(lVar15 + 0xf0);
                    auVar38._0_12_ = ZEXT812(0);
                    auVar38._12_4_ = 0;
                    fVar33 = *(float *)(lVar15 + 0xf4);
                    fVar50 = auVar172._0_4_;
                    auVar130 = vunpcklps_avx(auVar177._0_16_,auVar38);
                    auVar38 = vunpckhps_avx(auVar177._0_16_,auVar38);
                    auVar53 = vunpcklps_avx(auVar48,auVar130);
                    auVar130 = vunpckhps_avx(auVar48,auVar130);
                    auVar76 = vunpcklps_avx(auVar37,auVar38);
                    auVar48 = vsubps_avx(*(undefined1 (*) [16])(lVar15 + 0xb0),auVar173._0_16_);
                    fVar49 = auVar48._0_4_;
                    auVar37 = vshufps_avx(auVar48,auVar48,0xaa);
                    auVar48 = vshufps_avx(auVar48,auVar48,0x55);
                    fVar51 = auVar184._0_4_;
                    auVar109 = auVar172._0_16_;
                    auVar38 = vshufps_avx(auVar109,auVar109,0x55);
                    in_ZMM14 = ZEXT1664(CONCAT412(auVar76._12_4_ * auVar37._12_4_ +
                                                  auVar130._12_4_ * auVar48._12_4_ +
                                                  fVar49 * auVar53._12_4_,
                                                  CONCAT48(auVar76._8_4_ * auVar37._8_4_ +
                                                           auVar130._8_4_ * auVar48._8_4_ +
                                                           fVar49 * auVar53._8_4_,
                                                           CONCAT44(auVar76._4_4_ * auVar37._4_4_ +
                                                                    auVar130._4_4_ * auVar48._4_4_ +
                                                                    fVar49 * auVar53._4_4_,
                                                                    auVar76._0_4_ * auVar37._0_4_ +
                                                                    auVar130._0_4_ * auVar48._0_4_ +
                                                                    fVar49 * auVar53._0_4_))));
                    auVar37 = vshufps_avx(auVar109,auVar109,0xaa);
                    fVar49 = *(float *)(lVar15 + 0xf8);
                    auVar155 = ZEXT1664(CONCAT412(fVar158 * auVar37._12_4_ +
                                                  fVar31 * auVar38._12_4_ +
                                                  fStack_28c * fVar50 + fStack_27c,
                                                  CONCAT48(fVar157 * auVar37._8_4_ +
                                                           fVar145 * auVar38._8_4_ +
                                                           fStack_290 * fVar50 + fStack_280,
                                                           CONCAT44(fVar156 * auVar37._4_4_ +
                                                                    fVar126 * auVar38._4_4_ +
                                                                    fStack_294 * fVar50 + fStack_284
                                                                    ,fVar30 * auVar37._0_4_ +
                                                                     fVar125 * auVar38._0_4_ +
                                                                     fStack_298 * fVar50 +
                                                                     fStack_288))));
                    auVar181 = ZEXT1664(CONCAT412(auVar76._12_4_ * fVar49 +
                                                  auVar130._12_4_ * fVar33 + fVar32 * auVar53._12_4_
                                                  ,CONCAT48(auVar76._8_4_ * fVar49 +
                                                            auVar130._8_4_ * fVar33 +
                                                            fVar32 * auVar53._8_4_,
                                                            CONCAT44(auVar76._4_4_ * fVar49 +
                                                                     auVar130._4_4_ * fVar33 +
                                                                     fVar32 * auVar53._4_4_,
                                                                     auVar76._0_4_ * fVar49 +
                                                                     auVar130._0_4_ * fVar33 +
                                                                     fVar32 * auVar53._0_4_))));
                    auVar48 = auVar184._0_16_;
                    auVar37 = vshufps_avx(auVar48,auVar48,0x55);
                    auVar48 = vshufps_avx(auVar48,auVar48,0xaa);
                    auVar172 = ZEXT1664(CONCAT412(fVar158 * auVar48._12_4_ +
                                                  fVar31 * auVar37._12_4_ + fVar51 * fStack_28c,
                                                  CONCAT48(fVar157 * auVar48._8_4_ +
                                                           fVar145 * auVar37._8_4_ +
                                                           fVar51 * fStack_290,
                                                           CONCAT44(fVar156 * auVar48._4_4_ +
                                                                    fVar126 * auVar37._4_4_ +
                                                                    fVar51 * fStack_294,
                                                                    fVar30 * auVar48._0_4_ +
                                                                    fVar125 * auVar37._0_4_ +
                                                                    fVar51 * fStack_298))));
                    fVar32 = (float)func_0x000145194230(*(undefined8 *)(lVar15 + 0x1180));
                    auStack_178 = auVar155._0_16_;
                    auStack_168 = auVar172._0_16_;
                    auStack_188 = in_ZMM14._0_16_;
                    auStack_198 = auVar181._0_16_;
                    FUN_140951ba0(&fStack_258,lVar15,fVar32 * *(float *)(lVar15 + 0x12d0),
                                  auStack_168,auStack_178,auStack_188,auStack_198);
                    auVar184 = ZEXT1664(CONCAT412(fStack_24c,
                                                  CONCAT48(fStack_250,
                                                           CONCAT44(fStack_254,fStack_258))));
                  }
                  lVar11 = func_0x0001452eb880(uVar14,0x20);
                  FUN_14542b8d0(lVar13,*(undefined2 *)(uVar20 + 0x48),&fStack_258);
                  auVar172 = ZEXT1664(CONCAT412(fStack_24c,
                                                CONCAT48(fStack_250,CONCAT44(fStack_254,fStack_258))
                                               ));
                  if (-1 < (longlong)*(short *)(uVar20 + 0x46)) {
                    lVar17 = ((longlong)*(short *)(uVar20 + 0x46) -
                             (ulonglong)*(ushort *)(uVar20 + 0x48)) * 0x50 + uVar20;
                    do {
                      if (*(short *)(lVar17 + 0x48) == 0) break;
                      FUN_14542b8d0(lVar13,*(short *)(lVar17 + 0x48),&fStack_218);
                      fVar32 = auVar172._0_4_;
                      auVar48 = auVar172._0_16_;
                      auVar37 = vshufps_avx(auVar48,auVar48,0x55);
                      auVar48 = vshufps_avx(auVar48,auVar48,0xaa);
                      psVar1 = (short *)(lVar17 + 0x46);
                      auVar172 = ZEXT1664(CONCAT412(auVar48._12_4_ * fStack_1ec +
                                                    auVar37._12_4_ * fStack_1fc +
                                                    fVar32 * fStack_20c,
                                                    CONCAT48(auVar48._8_4_ * fStack_1f0 +
                                                             auVar37._8_4_ * fStack_200 +
                                                             fVar32 * fStack_210,
                                                             CONCAT44(auVar48._4_4_ * fStack_1f4 +
                                                                      auVar37._4_4_ * fStack_204 +
                                                                      fVar32 * fStack_214,
                                                                      auVar48._0_4_ * fStack_1f8 +
                                                                      auVar37._0_4_ * fStack_208 +
                                                                      fVar32 * fStack_218))));
                      lVar17 = lVar17 + ((longlong)*psVar1 - (ulonglong)*(ushort *)(lVar17 + 0x48))
                                        * 0x50;
                    } while (-1 < (longlong)*psVar1);
                  }
                  func_0x000140453350(auStack_148,*(undefined8 *)(lVar19 + 0xf8),0x20);
                  auVar155 = ZEXT1664(auStack_148);
                  cVar7 = FUN_144fbcfc0(*(undefined4 *)(lVar11 + 0xa0),
                                        *(undefined8 *)(lVar11 + 0x110),0);
                  if (cVar7 != '\0') {
                    auVar48 = auVar155._0_16_;
                    auVar37 = vshufps_avx(auVar48,auVar48,0xaa);
                    auVar48 = vshufps_avx(auVar48,auVar48,0x55);
                    fVar33 = auVar155._0_4_;
                    fVar49 = auVar172._0_4_;
                    fVar32 = *(float *)(lVar11 + 0xf8);
                    auVar130 = auVar172._0_16_;
                    auVar38 = vshufps_avx(auVar130,auVar130,0x55);
                    auVar155 = ZEXT1664(CONCAT412(fVar158 * auVar37._12_4_ +
                                                  fVar31 * auVar48._12_4_ +
                                                  fStack_28c * fVar33 + fStack_27c,
                                                  CONCAT48(fVar157 * auVar37._8_4_ +
                                                           fVar145 * auVar48._8_4_ +
                                                           fStack_290 * fVar33 + fStack_280,
                                                           CONCAT44(fVar156 * auVar37._4_4_ +
                                                                    fVar126 * auVar48._4_4_ +
                                                                    fStack_294 * fVar33 + fStack_284
                                                                    ,fVar30 * auVar37._0_4_ +
                                                                     fVar125 * auVar48._0_4_ +
                                                                     fStack_298 * fVar33 +
                                                                     fStack_288))));
                    auVar37 = vshufps_avx(auVar130,auVar130,0xaa);
                    fVar33 = *(float *)(lVar11 + 0xf0);
                    auVar172 = ZEXT1664(CONCAT412(fVar158 * auVar37._12_4_ +
                                                  fVar31 * auVar38._12_4_ + fVar49 * fStack_28c,
                                                  CONCAT48(fVar157 * auVar37._8_4_ +
                                                           fVar145 * auVar38._8_4_ +
                                                           fVar49 * fStack_290,
                                                           CONCAT44(fVar156 * auVar37._4_4_ +
                                                                    fVar126 * auVar38._4_4_ +
                                                                    fVar49 * fStack_294,
                                                                    fVar30 * auVar37._0_4_ +
                                                                    fVar125 * auVar38._0_4_ +
                                                                    fVar49 * fStack_298))));
                    fVar49 = *(float *)(lVar11 + 0xf4);
                    auVar48 = vunpcklps_avx(auVar177._0_16_,ZEXT816(0) << 0x20);
                    auVar37 = vunpckhps_avx(auVar177._0_16_,ZEXT816(0) << 0x20);
                    auVar130 = vunpcklps_avx(auVar118._0_16_,auVar48);
                    auVar38 = vunpckhps_avx(auVar118._0_16_,auVar48);
                    auVar53 = vunpcklps_avx(auVar166._0_16_,auVar37);
                    auVar48 = vsubps_avx(*(undefined1 (*) [16])(lVar11 + 0xb0),auVar173._0_16_);
                    auVar177 = ZEXT1664(CONCAT412(auVar53._12_4_ * fVar32 +
                                                  auVar38._12_4_ * fVar49 + fVar33 * auVar130._12_4_
                                                  ,CONCAT48(auVar53._8_4_ * fVar32 +
                                                            auVar38._8_4_ * fVar49 +
                                                            fVar33 * auVar130._8_4_,
                                                            CONCAT44(auVar53._4_4_ * fVar32 +
                                                                     auVar38._4_4_ * fVar49 +
                                                                     fVar33 * auVar130._4_4_,
                                                                     auVar53._0_4_ * fVar32 +
                                                                     auVar38._0_4_ * fVar49 +
                                                                     fVar33 * auVar130._0_4_))));
                    fVar32 = auVar48._0_4_;
                    auVar37 = vshufps_avx(auVar48,auVar48,0x55);
                    auVar48 = vshufps_avx(auVar48,auVar48,0xaa);
                    auVar173 = ZEXT1664(CONCAT412(auVar53._12_4_ * auVar48._12_4_ +
                                                  auVar38._12_4_ * auVar37._12_4_ +
                                                  fVar32 * auVar130._12_4_,
                                                  CONCAT48(auVar53._8_4_ * auVar48._8_4_ +
                                                           auVar38._8_4_ * auVar37._8_4_ +
                                                           fVar32 * auVar130._8_4_,
                                                           CONCAT44(auVar53._4_4_ * auVar48._4_4_ +
                                                                    auVar38._4_4_ * auVar37._4_4_ +
                                                                    fVar32 * auVar130._4_4_,
                                                                    auVar53._0_4_ * auVar48._0_4_ +
                                                                    auVar38._0_4_ * auVar37._0_4_ +
                                                                    fVar32 * auVar130._0_4_))));
                    fVar32 = (float)func_0x000145194230(*(undefined8 *)(lVar11 + 0x1180));
                    auStack_1b8 = auVar155._0_16_;
                    auStack_1a8 = auVar172._0_16_;
                    auStack_1c8 = auVar173._0_16_;
                    auStack_1d8 = auVar177._0_16_;
                    FUN_140951ba0(&fStack_218,lVar11,fVar32 * *(float *)(lVar15 + 0x12d0),
                                  auStack_1a8,auStack_1b8,auStack_1c8,auStack_1d8);
                    auVar118 = ZEXT1664(CONCAT412(fStack_20c,
                                                  CONCAT48(fStack_210,
                                                           CONCAT44(fStack_214,fStack_218))));
                  }
                  cVar7 = FUN_144fbcfc0(*(undefined4 *)(lVar15 + 0xa0),
                                        *(undefined8 *)(lVar15 + 0x110),0);
                  if ((cVar7 == '\0') ||
                     (cVar7 = FUN_144fbcfc0(*(undefined4 *)(lVar11 + 0xa0),
                                            *(undefined8 *)(lVar11 + 0x110),0), cVar7 == '\0')) {
                    cVar7 = FUN_144fbcfc0(*(undefined4 *)(lVar15 + 0xa0),
                                          *(undefined8 *)(lVar15 + 0x110),0);
                    if (cVar7 == '\0') {
                      cVar7 = FUN_144fbcfc0(*(undefined4 *)(lVar11 + 0xa0),
                                            *(undefined8 *)(lVar11 + 0x110),0);
                      auVar165._0_12_ = ZEXT812(0);
                      auVar165._12_4_ = 0;
                      auVar172 = ZEXT1664(auVar165);
                      auVar166 = ZEXT1264(ZEXT812(0));
                      if (cVar7 != '\0') {
                        auVar37 = vsubps_avx(auVar173._0_16_,auVar118._0_16_);
                        auVar47._0_4_ = auVar177._0_4_ * auVar37._0_4_;
                        auVar47._4_4_ = auVar177._4_4_ * auVar37._4_4_;
                        auVar47._8_4_ = auVar177._8_4_ * auVar37._8_4_;
                        auVar47._12_4_ = auVar177._12_4_ * auVar37._12_4_;
                        auVar37 = vblendps_avx(auVar47,auVar165,8);
                        auVar37 = vhaddps_avx(auVar37,auVar37);
                        auVar37 = vhaddps_avx(auVar37,auVar37);
                        auVar166 = ZEXT1664(CONCAT412(auVar177._12_4_ * auVar37._12_4_,
                                                      CONCAT48(auVar177._8_4_ * auVar37._8_4_,
                                                               CONCAT44(auVar177._4_4_ *
                                                                        auVar37._4_4_,
                                                                        auVar177._0_4_ *
                                                                        auVar37._0_4_))));
                      }
                    }
                    else {
                      auVar37 = vsubps_avx(in_ZMM14._0_16_,auVar184._0_16_);
                      auVar130._0_12_ = ZEXT812(0);
                      auVar130._12_4_ = 0;
                      auVar172 = ZEXT1664(auVar130);
                      auVar48._0_4_ = auVar181._0_4_ * auVar37._0_4_;
                      auVar48._4_4_ = auVar181._4_4_ * auVar37._4_4_;
                      auVar48._8_4_ = auVar181._8_4_ * auVar37._8_4_;
                      auVar48._12_4_ = auVar181._12_4_ * auVar37._12_4_;
                      auVar37 = vblendps_avx(auVar48,auVar130,8);
                      auVar37 = vhaddps_avx(auVar37,auVar37);
                      auVar37 = vhaddps_avx(auVar37,auVar37);
                      auVar166 = ZEXT1664(CONCAT412(auVar181._12_4_ * auVar37._12_4_,
                                                    CONCAT48(auVar181._8_4_ * auVar37._8_4_,
                                                             CONCAT44(auVar181._4_4_ * auVar37._4_4_
                                                                      ,auVar181._0_4_ *
                                                                       auVar37._0_4_))));
                    }
                  }
                  else {
                    auVar6._4_4_ = _UNK_14614f7f4;
                    auVar6._0_4_ = _DAT_14614f7f0;
                    auVar6._8_4_ = _UNK_14614f7f8;
                    auVar6._12_4_ = _UNK_14614f7fc;
                    auVar109 = auVar118._0_16_;
                    auVar37 = vsubps_avx(auVar173._0_16_,auVar109);
                    auVar48 = vsubps_avx(auVar184._0_16_,auVar109);
                    auVar54._0_12_ = ZEXT812(0);
                    auVar54._12_4_ = 0;
                    auVar39._0_4_ = auVar177._0_4_ * auVar37._0_4_;
                    auVar39._4_4_ = auVar177._4_4_ * auVar37._4_4_;
                    auVar39._8_4_ = auVar177._8_4_ * auVar37._8_4_;
                    auVar39._12_4_ = auVar177._12_4_ * auVar37._12_4_;
                    auVar38 = vshufps_avx(auVar48,auVar48,0xc9);
                    auVar130 = vshufps_avx(auVar48,auVar48,0xd2);
                    auVar131._0_4_ = auVar48._0_4_ * auVar48._0_4_;
                    auVar131._4_4_ = auVar48._4_4_ * auVar48._4_4_;
                    auVar131._8_4_ = auVar48._8_4_ * auVar48._8_4_;
                    auVar131._12_4_ = auVar48._12_4_ * auVar48._12_4_;
                    auVar37 = vblendps_avx(auVar39,auVar54,8);
                    auVar48 = vblendps_avx(auVar131,auVar54,8);
                    auVar37 = vhaddps_avx(auVar37,auVar37);
                    auVar48 = vhaddps_avx(auVar48,auVar48);
                    auVar53 = vshufps_avx(auVar6,auVar6,0xc9);
                    fVar89 = -(_DAT_14614f7f0 * auVar130._0_4_) + auVar38._0_4_ * auVar53._0_4_;
                    fVar105 = -(_UNK_14614f7f4 * auVar130._4_4_) + auVar38._4_4_ * auVar53._4_4_;
                    fVar106 = -(_UNK_14614f7f8 * auVar130._8_4_) + auVar38._8_4_ * auVar53._8_4_;
                    fVar107 = -(_UNK_14614f7fc * auVar130._12_4_) + auVar38._12_4_ * auVar53._12_4_;
                    auVar38 = vhaddps_avx(auVar37,auVar37);
                    auVar130 = vhaddps_avx(auVar48,auVar48);
                    auVar66._0_4_ = auVar181._0_4_ * fVar89;
                    auVar66._4_4_ = auVar181._4_4_ * fVar105;
                    auVar66._8_4_ = auVar181._8_4_ * fVar106;
                    auVar66._12_4_ = auVar181._12_4_ * fVar107;
                    auVar37 = vblendps_avx(auVar66,auVar54,8);
                    auVar37 = vhaddps_avx(auVar37,auVar37);
                    fVar33 = auVar177._0_4_ * auVar38._0_4_;
                    fVar49 = auVar177._4_4_ * auVar38._4_4_;
                    fVar50 = auVar177._8_4_ * auVar38._8_4_;
                    fVar51 = auVar177._12_4_ * auVar38._12_4_;
                    auVar48 = vhaddps_avx(auVar37,auVar37);
                    auVar67._0_4_ = auVar184._0_4_ + fVar33;
                    auVar67._4_4_ = auVar184._4_4_ + fVar49;
                    auVar67._8_4_ = auVar184._8_4_ + fVar50;
                    auVar67._12_4_ = auVar184._12_4_ + fVar51;
                    fVar32 = auVar118._0_4_;
                    auVar40._0_4_ = fVar33 + fVar32;
                    fVar33 = auVar118._4_4_;
                    auVar40._4_4_ = fVar49 + fVar33;
                    fVar49 = auVar118._8_4_;
                    auVar40._8_4_ = fVar50 + fVar49;
                    fVar50 = auVar118._12_4_;
                    auVar40._12_4_ = fVar51 + fVar50;
                    auVar37 = vsubps_avx(in_ZMM14._0_16_,auVar67);
                    auVar68._0_4_ = auVar181._0_4_ * auVar37._0_4_;
                    auVar68._4_4_ = auVar181._4_4_ * auVar37._4_4_;
                    auVar68._8_4_ = auVar181._8_4_ * auVar37._8_4_;
                    auVar68._12_4_ = auVar181._12_4_ * auVar37._12_4_;
                    auVar38 = vrcpps_avx(auVar48);
                    auVar37 = vblendps_avx(auVar68,auVar54,8);
                    auVar37 = vhaddps_avx(auVar37,auVar37);
                    fVar142 = auVar38._0_4_;
                    fVar143 = auVar38._4_4_;
                    fVar144 = auVar38._8_4_;
                    fVar51 = auVar38._12_4_;
                    auVar38 = vhaddps_avx(auVar37,auVar37);
                    auVar168._0_4_ = (uint)auVar48._0_4_ ^ _DAT_145fc6f10;
                    auVar168._4_4_ = (uint)auVar48._4_4_ ^ _DAT_145fc6f10;
                    auVar168._8_4_ = (uint)auVar48._8_4_ ^ _DAT_145fc6f10;
                    auVar168._12_4_ = (uint)auVar48._12_4_ ^ _DAT_145fc6f10;
                    auVar37 = vcmpps_avx(auVar168,auVar48,4);
                    auVar81._0_4_ =
                         (float)((uint)((-((auVar48._0_4_ * fVar142 - _DAT_145fc6ed8) * fVar142) +
                                        fVar142) * auVar38._0_4_) & auVar37._0_4_);
                    auVar81._4_4_ =
                         (float)((uint)((-((auVar48._4_4_ * fVar143 - _DAT_145fc6ed8) * fVar143) +
                                        fVar143) * auVar38._4_4_) & auVar37._4_4_);
                    auVar81._8_4_ =
                         (float)((uint)((-((auVar48._8_4_ * fVar144 - _DAT_145fc6ed8) * fVar144) +
                                        fVar144) * auVar38._8_4_) & auVar37._8_4_);
                    auVar81._12_4_ =
                         (float)((uint)((-((auVar48._12_4_ * fVar51 - _DAT_145fc6ed8) * fVar51) +
                                        fVar51) * auVar38._12_4_) & auVar37._12_4_);
                    auVar37 = vrsqrtps_avx(auVar130);
                    auVar93._0_4_ = auVar81._0_4_ * fVar89 + auVar184._0_4_;
                    auVar93._4_4_ = auVar81._4_4_ * fVar105 + auVar184._4_4_;
                    auVar93._8_4_ = auVar81._8_4_ * fVar106 + auVar184._8_4_;
                    auVar93._12_4_ = auVar81._12_4_ * fVar107 + auVar184._12_4_;
                    auVar48 = vcmpps_avx(auVar54,auVar81,1);
                    fVar51 = auVar37._0_4_;
                    fVar89 = auVar37._4_4_;
                    fVar105 = auVar37._8_4_;
                    fVar106 = auVar37._12_4_;
                    auVar37 = vsubps_avx(auVar93,auVar184._0_16_);
                    auVar94._0_4_ = auVar37._0_4_ * auVar37._0_4_;
                    auVar94._4_4_ = auVar37._4_4_ * auVar37._4_4_;
                    auVar94._8_4_ = auVar37._8_4_ * auVar37._8_4_;
                    auVar94._12_4_ = auVar37._12_4_ * auVar37._12_4_;
                    auVar37 = vblendps_avx(auVar94,auVar54,8);
                    auVar37 = vhaddps_avx(auVar37,auVar37);
                    auVar38 = vhaddps_avx(auVar37,auVar37);
                    auVar159._4_4_ = _DAT_146159bfc;
                    auVar159._0_4_ = _DAT_146159bfc;
                    auVar159._8_4_ = _DAT_146159bfc;
                    auVar159._12_4_ = _DAT_146159bfc;
                    auVar37 = vcmpps_avx(auVar159,auVar130,2);
                    auVar132._0_4_ =
                         (float)(auVar37._0_4_ &
                                (uint)(((_DAT_145fc6f08 * fVar51 * fVar51 * auVar130._0_4_ -
                                        _DAT_145fc6f08) * fVar51 + fVar51) * auVar130._0_4_));
                    auVar132._4_4_ =
                         (float)(auVar37._4_4_ &
                                (uint)(((_DAT_145fc6f08 * fVar89 * fVar89 * auVar130._4_4_ -
                                        _DAT_145fc6f08) * fVar89 + fVar89) * auVar130._4_4_));
                    auVar132._8_4_ =
                         (float)(auVar37._8_4_ &
                                (uint)(((_DAT_145fc6f08 * fVar105 * fVar105 * auVar130._8_4_ -
                                        _DAT_145fc6f08) * fVar105 + fVar105) * auVar130._8_4_));
                    auVar132._12_4_ =
                         (float)(auVar37._12_4_ &
                                (uint)(((_DAT_145fc6f08 * fVar106 * fVar106 * auVar130._12_4_ -
                                        _DAT_145fc6f08) * fVar106 + fVar106) * auVar130._12_4_));
                    auVar37 = vrsqrtps_avx(auVar38);
                    fVar51 = auVar37._0_4_;
                    fVar89 = auVar37._4_4_;
                    fVar105 = auVar37._8_4_;
                    fVar106 = auVar37._12_4_;
                    auVar37 = vcmpps_avx(auVar159,auVar38,2);
                    fVar51 = (float)((uint)(((_DAT_145fc6f08 * fVar51 * fVar51 * auVar38._0_4_ -
                                             _DAT_145fc6f08) * fVar51 + fVar51) * auVar38._0_4_) &
                                    auVar37._0_4_);
                    fVar89 = (float)((uint)(((_DAT_145fc6f08 * fVar89 * fVar89 * auVar38._4_4_ -
                                             _DAT_145fc6f08) * fVar89 + fVar89) * auVar38._4_4_) &
                                    auVar37._4_4_);
                    fVar105 = (float)((uint)(((_DAT_145fc6f08 * fVar105 * fVar105 * auVar38._8_4_ -
                                              _DAT_145fc6f08) * fVar105 + fVar105) * auVar38._8_4_)
                                     & auVar37._8_4_);
                    fVar106 = (float)((uint)(((_DAT_145fc6f08 * fVar106 * fVar106 * auVar38._12_4_ -
                                              _DAT_145fc6f08) * fVar106 + fVar106) * auVar38._12_4_)
                                     & auVar37._12_4_);
                    auVar37 = vrcpps_avx(auVar132);
                    fVar107 = auVar37._0_4_;
                    fVar142 = auVar37._4_4_;
                    fVar143 = auVar37._8_4_;
                    fVar144 = auVar37._12_4_;
                    fVar107 = -((fVar107 * auVar132._0_4_ - _DAT_145fc6ed8) * fVar107) + fVar107;
                    fVar142 = -((fVar142 * auVar132._4_4_ - _DAT_145fc6ed8) * fVar142) + fVar142;
                    fVar143 = -((fVar143 * auVar132._8_4_ - _DAT_145fc6ed8) * fVar143) + fVar143;
                    fVar144 = -((fVar144 * auVar132._12_4_ - _DAT_145fc6ed8) * fVar144) + fVar144;
                    auVar148._0_4_ = fVar107 * fVar51;
                    auVar148._4_4_ = fVar142 * fVar89;
                    auVar148._8_4_ = fVar143 * fVar105;
                    auVar148._12_4_ = fVar144 * fVar106;
                    auVar133._0_4_ = -(fVar51 * fVar107) - 0.0;
                    auVar133._4_4_ = -(fVar89 * fVar142) - 0.0;
                    auVar133._8_4_ = -(fVar105 * fVar143) - 0.0;
                    auVar133._12_4_ = -(fVar106 * fVar144) - 0.0;
                    auVar37 = vblendvps_avx(auVar148,auVar133,auVar48);
                    auVar172 = ZEXT1664(auVar37);
                    auVar96._4_4_ = _DAT_145fc6edc;
                    auVar96._0_4_ = _DAT_145fc6edc;
                    auVar96._8_4_ = _DAT_145fc6edc;
                    auVar96._12_4_ = _DAT_145fc6edc;
                    fVar51 = auVar37._0_4_ * _DAT_146159c48;
                    fVar89 = auVar37._4_4_ * _DAT_146159c48;
                    fVar105 = auVar37._8_4_ * _DAT_146159c48;
                    fVar106 = auVar37._12_4_ * _DAT_146159c48;
                    auVar95._0_4_ = (uint)fVar51 & _DAT_145fc6f10;
                    auVar95._4_4_ = (uint)fVar89 & _DAT_145fc6f10;
                    auVar95._8_4_ = (uint)fVar105 & _DAT_145fc6f10;
                    auVar95._12_4_ = (uint)fVar106 & _DAT_145fc6f10;
                    auVar96 = auVar96 | auVar95;
                    auVar134._4_4_ = _DAT_145f43778;
                    auVar134._0_4_ = _DAT_145f43778;
                    auVar134._8_4_ = _DAT_145f43778;
                    auVar134._12_4_ = _DAT_145f43778;
                    auVar38 = vpcmpeqd_avx(auVar96,auVar96);
                    auVar82._0_4_ = (int)(fVar51 + auVar96._0_4_);
                    auVar82._4_4_ = (int)(fVar89 + auVar96._4_4_);
                    auVar82._8_4_ = (int)(fVar105 + auVar96._8_4_);
                    auVar82._12_4_ = (int)(fVar106 + auVar96._12_4_);
                    auVar48 = vcvtdq2ps_avx(auVar82);
                    auVar130 = vpsubd_avx(auVar82,auVar38);
                    fVar107 = auVar48._0_4_ * _DAT_146159b50 +
                              auVar48._0_4_ * _DAT_146159b4c + auVar37._0_4_;
                    fVar142 = auVar48._4_4_ * _DAT_146159b50 +
                              auVar48._4_4_ * _DAT_146159b4c + auVar37._4_4_;
                    fVar143 = auVar48._8_4_ * _DAT_146159b50 +
                              auVar48._8_4_ * _DAT_146159b4c + auVar37._8_4_;
                    fVar144 = auVar48._12_4_ * _DAT_146159b50 +
                              auVar48._12_4_ * _DAT_146159b4c + auVar37._12_4_;
                    fVar51 = fVar107 * fVar107;
                    fVar89 = fVar142 * fVar142;
                    fVar105 = fVar143 * fVar143;
                    fVar106 = fVar144 * fVar144;
                    auVar178._0_4_ =
                         fVar51 * (fVar51 * (fVar51 * _DAT_146159b58 + _DAT_146159b54) +
                                  _DAT_146159b64) + _DAT_145fc6ed8;
                    auVar178._4_4_ =
                         fVar89 * (fVar89 * (fVar89 * _DAT_146159b58 + _DAT_146159b54) +
                                  _DAT_146159b64) + _DAT_145fc6ed8;
                    auVar178._8_4_ =
                         fVar105 * (fVar105 * (fVar105 * _DAT_146159b58 + _DAT_146159b54) +
                                   _DAT_146159b64) + _DAT_145fc6ed8;
                    auVar178._12_4_ =
                         fVar106 * (fVar106 * (fVar106 * _DAT_146159b58 + _DAT_146159b54) +
                                   _DAT_146159b64) + _DAT_145fc6ed8;
                    auVar37 = vpand_avx(auVar134,auVar82);
                    auVar38 = vpcmpeqd_avx(auVar37,auVar54);
                    auVar76 = vpsubd_avx(auVar54,auVar37);
                    auVar149._4_4_ = _DAT_145f43774;
                    auVar149._0_4_ = _DAT_145f43774;
                    auVar149._8_4_ = _DAT_145f43774;
                    auVar149._12_4_ = _DAT_145f43774;
                    auVar182._0_4_ =
                         fVar51 * fVar107 *
                         (fVar51 * (fVar51 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
                         fVar107;
                    auVar182._4_4_ =
                         fVar89 * fVar142 *
                         (fVar89 * (fVar89 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
                         fVar142;
                    auVar182._8_4_ =
                         fVar105 * fVar143 *
                         (fVar105 * (fVar105 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
                         fVar143;
                    auVar182._12_4_ =
                         fVar106 * fVar144 *
                         (fVar106 * (fVar106 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
                         fVar144;
                    auVar37 = vpand_avx(auVar149,auVar82);
                    auVar48 = vpand_avx(auVar149,auVar130);
                    auVar130 = vpcmpeqd_avx(auVar37,auVar54);
                    auVar53 = vpcmpeqd_avx(auVar48,auVar54);
                    auVar37 = vblendvps_avx(auVar178,auVar182,auVar38);
                    auVar48 = vblendvps_avx(auVar178,auVar182,auVar76);
                    auVar97._0_4_ = auVar37._0_4_ ^ _DAT_145fc6f10;
                    auVar97._4_4_ = auVar37._4_4_ ^ _DAT_145fc6f10;
                    auVar97._8_4_ = auVar37._8_4_ ^ _DAT_145fc6f10;
                    auVar97._12_4_ = auVar37._12_4_ ^ _DAT_145fc6f10;
                    auVar69._0_4_ = auVar48._0_4_ ^ _DAT_145fc6f10;
                    auVar69._4_4_ = auVar48._4_4_ ^ _DAT_145fc6f10;
                    auVar69._8_4_ = auVar48._8_4_ ^ _DAT_145fc6f10;
                    auVar69._12_4_ = auVar48._12_4_ ^ _DAT_145fc6f10;
                    auVar48 = vblendvps_avx(auVar69,auVar48,auVar53);
                    auVar37 = vblendvps_avx(auVar97,auVar37,auVar130);
                    auVar55._0_4_ = auVar48._0_4_ * fVar32;
                    auVar55._4_4_ = auVar48._4_4_ * fVar33;
                    auVar55._8_4_ = auVar48._8_4_ * fVar49;
                    auVar55._12_4_ = auVar48._12_4_ * fVar50;
                    auVar70._0_4_ = auVar37._0_4_ * fVar32;
                    auVar70._4_4_ = auVar37._4_4_ * fVar33;
                    auVar70._8_4_ = auVar37._8_4_ * fVar49;
                    auVar70._12_4_ = auVar37._12_4_ * fVar50;
                    auVar37 = vshufps_avx(auVar55,auVar55,0xdb);
                    auVar48 = vsubps_avx(auVar37,auVar70);
                    auVar56._0_4_ = auVar70._0_4_ + auVar37._0_4_;
                    auVar56._4_4_ = auVar70._4_4_ + auVar37._4_4_;
                    auVar56._8_4_ = auVar70._8_4_ + auVar37._8_4_;
                    auVar56._12_4_ = auVar70._12_4_ + auVar37._12_4_;
                    auVar37 = vmovlhps_avx(auVar109,auVar56);
                    auVar37 = vblendps_avx(auVar37,auVar48,4);
                    auVar37 = vshufps_avx(auVar37,auVar37,0xf8);
                    auVar37 = vsubps_avx(auVar40,auVar37);
                    auVar166 = ZEXT1664(auVar37);
                  }
                  uVar16 = func_0x000144db7a10(*(undefined4 *)(uVar23 + 0x9c));
                  FUN_144e40a00(uVar16,&fStack_158);
                  fVar144 = _DAT_146159fa0;
                  fVar142 = _DAT_146159b64;
                  fVar89 = _DAT_145fc6edc;
                  fVar51 = _DAT_145fc6ed8;
                  auVar71._0_12_ = ZEXT812(0);
                  auVar71._12_4_ = 0;
                  auVar41._0_4_ = fStack_158 * fStack_158;
                  auVar41._4_4_ = fStack_154 * fStack_154;
                  auVar41._8_4_ = fStack_150 * fStack_150;
                  auVar41._12_4_ = fStack_14c * fStack_14c;
                  auVar37 = vblendps_avx(auVar41,auVar71,8);
                  auVar37 = vhaddps_avx(auVar37,auVar37);
                  auVar48 = vhaddps_avx(auVar37,auVar37);
                  auVar37 = vrsqrtps_avx(auVar48);
                  fVar32 = auVar37._0_4_;
                  fVar33 = auVar37._4_4_;
                  fVar49 = auVar37._8_4_;
                  fVar50 = auVar37._12_4_;
                  auVar83._4_4_ = _DAT_146159bfc;
                  auVar83._0_4_ = _DAT_146159bfc;
                  auVar83._8_4_ = _DAT_146159bfc;
                  auVar83._12_4_ = _DAT_146159bfc;
                  auVar37 = vcmpps_avx(auVar83,auVar48,2);
                  auVar42._0_4_ =
                       auVar37._0_4_ &
                       (uint)(((-(_DAT_145fc6edc * fVar32 * fVar32 * auVar48._0_4_) + _DAT_145fc6edc
                               ) * fVar32 + fVar32) * auVar48._0_4_);
                  auVar42._4_4_ =
                       auVar37._4_4_ &
                       (uint)(((-(_DAT_145fc6edc * fVar33 * fVar33 * auVar48._4_4_) + _DAT_145fc6edc
                               ) * fVar33 + fVar33) * auVar48._4_4_);
                  auVar42._8_4_ =
                       auVar37._8_4_ &
                       (uint)(((-(_DAT_145fc6edc * fVar49 * fVar49 * auVar48._8_4_) + _DAT_145fc6edc
                               ) * fVar49 + fVar49) * auVar48._8_4_);
                  auVar42._12_4_ =
                       auVar37._12_4_ &
                       (uint)(((-(_DAT_145fc6edc * fVar50 * fVar50 * auVar48._12_4_) +
                               _DAT_145fc6edc) * fVar50 + fVar50) * auVar48._12_4_);
                  auVar37 = vmaxps_avx(auVar42,auVar71);
                  auVar43._4_4_ = _DAT_145fc6ed8;
                  auVar43._0_4_ = _DAT_145fc6ed8;
                  auVar43._8_4_ = _DAT_145fc6ed8;
                  auVar43._12_4_ = _DAT_145fc6ed8;
                  auVar48 = vrcpps_avx(auVar43);
                  auVar37 = vminps_avx(auVar37,auVar43);
                  fVar32 = auVar48._0_4_;
                  fVar33 = auVar48._4_4_;
                  fVar49 = auVar48._8_4_;
                  fVar50 = auVar48._12_4_;
                  auVar77._0_4_ =
                       ((-(fVar32 * _DAT_145fc6ed8) + _DAT_145fc6ed8) * fVar32 + fVar32) *
                       auVar37._0_4_;
                  auVar77._4_4_ =
                       ((-(fVar33 * _DAT_145fc6ed8) + _DAT_145fc6ed8) * fVar33 + fVar33) *
                       auVar37._4_4_;
                  auVar77._8_4_ =
                       ((-(fVar49 * _DAT_145fc6ed8) + _DAT_145fc6ed8) * fVar49 + fVar49) *
                       auVar37._8_4_;
                  auVar77._12_4_ =
                       ((-(fVar50 * _DAT_145fc6ed8) + _DAT_145fc6ed8) * fVar50 + fVar50) *
                       auVar37._12_4_;
                  auVar37 = vmaxps_avx(auVar77,auVar71);
                  auVar37 = vminps_avx(auVar37,auVar43);
                  fVar33 = auVar37._0_4_ * _DAT_145fc6f04 + _DAT_145fc6f88;
                  fVar49 = auVar37._4_4_ * _DAT_145fc6f04 + _DAT_145fc6f88;
                  fVar50 = auVar37._8_4_ * _DAT_145fc6f04 + _DAT_145fc6f88;
                  fVar105 = auVar37._12_4_ * _DAT_145fc6f04 + _DAT_145fc6f88;
                  fVar32 = *(float *)(param_1 + 0x50);
                  auVar84._4_4_ = fVar32;
                  auVar84._0_4_ = fVar32;
                  auVar84._8_4_ = fVar32;
                  auVar84._12_4_ = fVar32;
                  auVar37 = vsubps_avx(auVar172._0_16_,auVar84);
                  fStack_268 = auVar117._0_4_;
                  auVar98._0_4_ = fVar33 * _DAT_146159ef4;
                  auVar98._4_4_ = fVar49 * _DAT_146159ef4;
                  auVar98._8_4_ = fVar50 * _DAT_146159ef4;
                  auVar98._12_4_ = fVar105 * _DAT_146159ef4;
                  auVar111._0_4_ = -(_DAT_146159ef4 * fVar33) - 0.0;
                  auVar111._4_4_ = -(_DAT_146159ef4 * fVar49) - 0.0;
                  auVar111._8_4_ = -(_DAT_146159ef4 * fVar50) - 0.0;
                  auVar111._12_4_ = -(_DAT_146159ef4 * fVar105) - 0.0;
                  auVar150._0_4_ = auVar37._0_4_ * fStack_268;
                  auVar150._4_4_ = auVar37._4_4_ * fStack_268;
                  auVar150._8_4_ = auVar37._8_4_ * fStack_268;
                  auVar150._12_4_ = auVar37._12_4_ * fStack_268;
                  auVar37 = vmaxps_avx(auVar150,auVar111);
                  auVar151._0_4_ = auVar98._0_4_ * auVar98._0_4_;
                  auVar151._4_4_ = auVar98._4_4_ * auVar98._4_4_;
                  auVar151._8_4_ = auVar98._8_4_ * auVar98._8_4_;
                  auVar151._12_4_ = auVar98._12_4_ * auVar98._12_4_;
                  auVar37 = vminps_avx(auVar37,auVar98);
                  auVar78._0_4_ = fVar32 + auVar37._0_4_;
                  auVar78._4_4_ = fVar32 + auVar37._4_4_;
                  auVar78._8_4_ = fVar32 + auVar37._8_4_;
                  auVar78._12_4_ = fVar32 + auVar37._12_4_;
                  auVar85._4_4_ = _DAT_14615bcb4;
                  auVar85._0_4_ = _DAT_14615bcb4;
                  auVar85._8_4_ = _DAT_14615bcb4;
                  auVar85._12_4_ = _DAT_14615bcb4;
                  auVar37 = vmaxps_avx(auVar78,auVar85);
                  auVar86._4_4_ = _DAT_146159fa0;
                  auVar86._0_4_ = _DAT_146159fa0;
                  auVar86._8_4_ = _DAT_146159fa0;
                  auVar86._12_4_ = _DAT_146159fa0;
                  auVar53 = vminps_avx(auVar37,auVar86);
                  fVar74 = auVar53._0_4_;
                  *(float *)(param_1 + 0x50) = fVar74;
                  fVar143 = _DAT_146159c48;
                  fVar107 = _DAT_146159b60;
                  fVar106 = _DAT_146159b4c;
                  fVar105 = _DAT_145fc6edc;
                  auVar37 = *(undefined1 (*) [16])(param_1 + 0x40);
                  auVar48 = vsubps_avx(auVar166._0_16_,auVar37);
                  auVar135._0_4_ = auVar48._0_4_ * fStack_268;
                  auVar135._4_4_ = auVar48._4_4_ * fStack_268;
                  auVar135._8_4_ = auVar48._8_4_ * fStack_268;
                  auVar135._12_4_ = auVar48._12_4_ * fStack_268;
                  auVar160._0_4_ = auVar135._0_4_ * auVar135._0_4_;
                  auVar160._4_4_ = auVar135._4_4_ * auVar135._4_4_;
                  auVar160._8_4_ = auVar135._8_4_ * auVar135._8_4_;
                  auVar160._12_4_ = auVar135._12_4_ * auVar135._12_4_;
                  auVar48 = vblendps_avx(auVar160,auVar71,8);
                  auVar48 = vhaddps_avx(auVar48,auVar48);
                  auVar130 = vhaddps_avx(auVar48,auVar48);
                  auVar48 = vrsqrtps_avx(auVar130);
                  auVar38 = vcmpps_avx(auVar151,auVar130,1);
                  fVar32 = auVar48._0_4_;
                  fVar33 = auVar48._4_4_;
                  fVar49 = auVar48._8_4_;
                  fVar50 = auVar48._12_4_;
                  auVar48 = vcmpps_avx(auVar130,auVar71,1);
                  fVar32 = ((-(fVar89 * fVar32 * fVar32 * auVar130._0_4_) + fVar89) * fVar32 +
                           fVar32) * auVar135._0_4_;
                  fVar33 = ((-(fVar89 * fVar33 * fVar33 * auVar130._4_4_) + fVar89) * fVar33 +
                           fVar33) * auVar135._4_4_;
                  fVar49 = ((-(fVar89 * fVar49 * fVar49 * auVar130._8_4_) + fVar89) * fVar49 +
                           fVar49) * auVar135._8_4_;
                  fVar50 = ((-(fVar89 * fVar50 * fVar50 * auVar130._12_4_) + fVar89) * fVar50 +
                           fVar50) * auVar135._12_4_;
                  auVar99._0_4_ = fVar32 * auVar98._0_4_;
                  auVar99._4_4_ = fVar33 * auVar98._4_4_;
                  auVar99._8_4_ = fVar49 * auVar98._8_4_;
                  auVar99._12_4_ = fVar50 * auVar98._12_4_;
                  auVar169._0_4_ = fVar32 * 0.0;
                  auVar169._4_4_ = fVar33 * 0.0;
                  auVar169._8_4_ = fVar49 * 0.0;
                  auVar169._12_4_ = fVar50 * 0.0;
                  auVar48 = vblendvps_avx(auVar135,auVar169,auVar48);
                  auVar48 = vblendvps_avx(auVar48,auVar99,auVar38);
                  auVar100._0_4_ = auVar48._0_4_ + auVar37._0_4_;
                  auVar100._4_4_ = auVar48._4_4_ + auVar37._4_4_;
                  auVar100._8_4_ = auVar48._8_4_ + auVar37._8_4_;
                  auVar100._12_4_ = auVar48._12_4_ + auVar37._12_4_;
                  auVar112._0_4_ = auVar100._0_4_ * auVar100._0_4_;
                  auVar112._4_4_ = auVar100._4_4_ * auVar100._4_4_;
                  auVar112._8_4_ = auVar100._8_4_ * auVar100._8_4_;
                  auVar112._12_4_ = auVar100._12_4_ * auVar100._12_4_;
                  auVar37 = vblendps_avx(auVar112,auVar71,8);
                  auVar37 = vhaddps_avx(auVar37,auVar37);
                  auVar37 = vhaddps_avx(auVar37,auVar37);
                  auVar48 = vrsqrtps_avx(auVar37);
                  fVar32 = auVar48._0_4_;
                  fVar33 = auVar48._4_4_;
                  fVar49 = auVar48._8_4_;
                  fVar50 = auVar48._12_4_;
                  auVar136._4_4_ = _UNK_14615d250;
                  auVar136._0_4_ = _UNK_14615d250;
                  auVar136._8_4_ = _UNK_14615d250;
                  auVar136._12_4_ = _UNK_14615d250;
                  fVar32 = ((-(fVar89 * fVar32 * fVar32 * auVar37._0_4_) + fVar89) * fVar32 + fVar32
                           ) * auVar100._0_4_;
                  fVar33 = ((-(fVar89 * fVar33 * fVar33 * auVar37._4_4_) + fVar89) * fVar33 + fVar33
                           ) * auVar100._4_4_;
                  fVar49 = ((-(fVar89 * fVar49 * fVar49 * auVar37._8_4_) + fVar89) * fVar49 + fVar49
                           ) * auVar100._8_4_;
                  fVar50 = ((-(fVar89 * fVar50 * fVar50 * auVar37._12_4_) + fVar89) * fVar50 +
                           fVar50) * auVar100._12_4_;
                  auVar87._0_4_ = fVar32 * fVar144;
                  auVar87._4_4_ = fVar33 * fVar144;
                  auVar87._8_4_ = fVar49 * fVar144;
                  auVar87._12_4_ = fVar50 * fVar144;
                  auVar152._0_4_ = fVar32 * 0.0;
                  auVar152._4_4_ = fVar33 * 0.0;
                  auVar152._8_4_ = fVar49 * 0.0;
                  auVar152._12_4_ = fVar50 * 0.0;
                  auVar48 = vcmpps_avx(auVar136,auVar37,1);
                  auVar37 = vcmpps_avx(auVar37,auVar71,1);
                  auVar37 = vblendvps_avx(auVar100,auVar152,auVar37);
                  auVar37 = vblendvps_avx(auVar37,auVar87,auVar48);
                  *(undefined1 (*) [16])(param_1 + 0x40) = auVar37;
                  fVar32 = auVar53._4_4_ * fVar143;
                  fVar33 = auVar53._8_4_ * fVar143;
                  fVar49 = auVar53._12_4_ * fVar143;
                  auVar137._4_4_ = _DAT_145f43774;
                  auVar137._0_4_ = _DAT_145f43774;
                  auVar137._8_4_ = _DAT_145f43774;
                  auVar137._12_4_ = _DAT_145f43774;
                  auVar113._0_4_ =
                       (uint)((float)((uint)(fVar74 * fVar143) & _DAT_145fc6f10 | (uint)fVar105) +
                             fVar74 * fVar143);
                  auVar113._4_4_ =
                       (uint)((float)((uint)fVar32 & _DAT_145fc6f10 | (uint)fVar105) + fVar32);
                  auVar113._8_4_ =
                       (uint)((float)((uint)fVar33 & _DAT_145fc6f10 | (uint)fVar105) + fVar33);
                  auVar113._12_4_ =
                       (uint)((float)((uint)fVar49 & _DAT_145fc6f10 | (uint)fVar105) + fVar49);
                  auVar48 = vcvtdq2ps_avx(auVar113);
                  auVar153._0_4_ = _DAT_145f43774 & auVar113._0_4_;
                  auVar153._4_4_ = _DAT_145f43774 & auVar113._4_4_;
                  auVar153._8_4_ = _DAT_145f43774 & auVar113._8_4_;
                  auVar153._12_4_ = _DAT_145f43774 & auVar113._12_4_;
                  auVar38 = vpcmpeqd_avx(auVar153,auVar71);
                  fVar32 = auVar48._0_4_ * _DAT_146159b50 + auVar48._0_4_ * fVar106 + fVar74;
                  fVar33 = auVar48._4_4_ * _DAT_146159b50 + auVar48._4_4_ * fVar106 + auVar53._4_4_;
                  fVar49 = auVar48._8_4_ * _DAT_146159b50 + auVar48._8_4_ * fVar106 + auVar53._8_4_;
                  fVar50 = auVar48._12_4_ * _DAT_146159b50 +
                           auVar48._12_4_ * fVar106 + auVar53._12_4_;
                  fVar105 = fVar32 * fVar32;
                  fVar106 = fVar33 * fVar33;
                  fVar143 = fVar49 * fVar49;
                  fVar144 = fVar50 * fVar50;
                  auVar175._0_4_ =
                       (fVar105 * (fVar105 * fVar107 + _DAT_146159b5c) + _DAT_146159b68) *
                       fVar105 * fVar32 + fVar32;
                  auVar175._4_4_ =
                       (fVar106 * (fVar106 * fVar107 + _DAT_146159b5c) + _DAT_146159b68) *
                       fVar106 * fVar33 + fVar33;
                  auVar175._8_4_ =
                       (fVar143 * (fVar143 * fVar107 + _DAT_146159b5c) + _DAT_146159b68) *
                       fVar143 * fVar49 + fVar49;
                  auVar175._12_4_ =
                       (fVar144 * (fVar144 * fVar107 + _DAT_146159b5c) + _DAT_146159b68) *
                       fVar144 * fVar50 + fVar50;
                  auVar170._0_4_ = auVar113._0_4_ & _DAT_145f43778;
                  auVar170._4_4_ = auVar113._4_4_ & _DAT_145f43778;
                  auVar170._8_4_ = auVar113._8_4_ & _DAT_145f43778;
                  auVar170._12_4_ = auVar113._12_4_ & _DAT_145f43778;
                  auVar48 = vpcmpeqd_avx(auVar170,auVar71);
                  auVar179._0_4_ =
                       fVar105 * (fVar105 * (fVar105 * _DAT_146159b58 + _DAT_146159b54) + fVar142) +
                       fVar51;
                  auVar179._4_4_ =
                       fVar106 * (fVar106 * (fVar106 * _DAT_146159b58 + _DAT_146159b54) + fVar142) +
                       fVar51;
                  auVar179._8_4_ =
                       fVar143 * (fVar143 * (fVar143 * _DAT_146159b58 + _DAT_146159b54) + fVar142) +
                       fVar51;
                  auVar179._12_4_ =
                       fVar144 * (fVar144 * (fVar144 * _DAT_146159b58 + _DAT_146159b54) + fVar142) +
                       fVar51;
                  auVar48 = vblendvps_avx(auVar179,auVar175,auVar48);
                  auVar161._0_4_ = auVar48._0_4_ ^ _DAT_145fc6f10;
                  auVar161._4_4_ = auVar48._4_4_ ^ _DAT_145fc6f10;
                  auVar161._8_4_ = auVar48._8_4_ ^ _DAT_145fc6f10;
                  auVar161._12_4_ = auVar48._12_4_ ^ _DAT_145fc6f10;
                  auVar48 = vblendvps_avx(auVar161,auVar48,auVar38);
                  fVar32 = auVar37._0_4_;
                  auVar130 = vshufps_avx(auVar37,auVar37,0x55);
                  auVar53 = vshufps_avx(auVar37,auVar37,0xaa);
                  auVar37 = vpcmpeqd_avx(auVar53,auVar53);
                  auVar37 = vpsubd_avx(auVar113,auVar37);
                  auVar38 = vpand_avx(auVar137,auVar37);
                  auVar37 = vpsubd_avx(auVar71,auVar170);
                  auVar37 = vblendvps_avx(auVar179,auVar175,auVar37);
                  auVar38 = vpcmpeqd_avx(auVar38,auVar71);
                  auVar101._0_4_ = auVar37._0_4_ ^ _DAT_145fc6f10;
                  auVar101._4_4_ = auVar37._4_4_ ^ _DAT_145fc6f10;
                  auVar101._8_4_ = auVar37._8_4_ ^ _DAT_145fc6f10;
                  auVar101._12_4_ = auVar37._12_4_ ^ _DAT_145fc6f10;
                  auVar37 = vblendvps_avx(auVar101,auVar37,auVar38);
                  auStack_f8._4_4_ =
                       fVar156 * auVar53._4_4_ +
                       fVar126 * auVar130._4_4_ + fStack_294 * fVar32 + fStack_284;
                  auStack_f8._0_4_ =
                       fVar30 * auVar53._0_4_ +
                       fVar125 * auVar130._0_4_ + fStack_298 * fVar32 + fStack_288;
                  fStack_f0 = fVar157 * auVar53._8_4_ +
                              fVar145 * auVar130._8_4_ + fStack_290 * fVar32 + fStack_280;
                  fStack_ec = fVar158 * auVar53._12_4_ +
                              fVar31 * auVar130._12_4_ + fStack_28c * fVar32 + fStack_27c;
                  fVar32 = (float)((ulonglong)_DAT_146159bc0 >> 0x20);
                  auVar138._0_4_ =
                       -(auVar48._0_4_ * (float)_DAT_146159bc0) + auVar37._0_4_ * _DAT_14614f7f0;
                  auVar138._4_4_ = -(auVar48._4_4_ * fVar32) + auVar37._4_4_ * _UNK_14614f7f4;
                  auVar138._8_4_ = -(auVar48._8_4_ * 0.0) + auVar37._8_4_ * _UNK_14614f7f8;
                  auVar138._12_4_ = -(auVar48._12_4_ * 0.0) + auVar37._12_4_ * _UNK_14614f7fc;
                  auVar102._0_4_ =
                       auVar48._0_4_ * _DAT_14614f7f0 + (float)_DAT_146159bc0 * auVar37._0_4_;
                  auVar102._4_4_ = auVar48._4_4_ * _UNK_14614f7f4 + fVar32 * auVar37._4_4_;
                  auVar102._8_4_ = auVar48._8_4_ * _UNK_14614f7f8 + auVar37._8_4_ * 0.0;
                  auVar102._12_4_ = auVar48._12_4_ * _UNK_14614f7fc + auVar37._12_4_ * 0.0;
                  auVar37 = vshufps_avx(auVar138,auVar138,0xaa);
                  auVar48 = vshufps_avx(auVar138,auVar138,0x55);
                  auVar38 = vshufps_avx(auVar102,auVar102,0xaa);
                  auVar130 = vshufps_avx(auVar102,auVar102,0x55);
                  auVar162._0_4_ =
                       fVar30 * auVar38._0_4_ +
                       fVar125 * auVar130._0_4_ + auVar102._0_4_ * fStack_298;
                  auVar162._4_4_ =
                       fVar156 * auVar38._4_4_ +
                       fVar126 * auVar130._4_4_ + auVar102._0_4_ * fStack_294;
                  auVar162._8_4_ =
                       fVar157 * auVar38._8_4_ +
                       fVar145 * auVar130._8_4_ + auVar102._0_4_ * fStack_290;
                  auVar162._12_4_ =
                       fVar158 * auVar38._12_4_ +
                       fVar31 * auVar130._12_4_ + auVar102._0_4_ * fStack_28c;
                  auVar139._0_4_ =
                       fVar30 * auVar37._0_4_ +
                       fVar125 * auVar48._0_4_ + auVar138._0_4_ * fStack_298;
                  auVar139._4_4_ =
                       fVar156 * auVar37._4_4_ +
                       fVar126 * auVar48._4_4_ + auVar138._0_4_ * fStack_294;
                  auVar139._8_4_ =
                       fVar157 * auVar37._8_4_ +
                       fVar145 * auVar48._8_4_ + auVar138._0_4_ * fStack_290;
                  auVar139._12_4_ =
                       fVar158 * auVar37._12_4_ +
                       fVar31 * auVar48._12_4_ + auVar138._0_4_ * fStack_28c;
                  auVar121._0_4_ = fVar30 * 0.0 + fVar125 * 0.0 + fStack_298;
                  auVar121._4_4_ = fVar156 * 0.0 + fVar126 * 0.0 + fStack_294;
                  auVar121._8_4_ = fVar157 * 0.0 + fVar145 * 0.0 + fStack_290;
                  auVar121._12_4_ = fVar158 * 0.0 + fVar31 * 0.0 + fStack_28c;
                  auVar38 = vunpcklps_avx(auVar121,auVar139);
                  auVar130 = vunpcklps_avx(auVar162,auVar71);
                  auVar37 = vunpckhps_avx(auVar121,auVar139);
                  auVar48 = vunpckhps_avx(auVar162,auVar71);
                  auVar48 = vunpcklps_avx(auVar37,auVar48);
                  auVar53 = vunpcklps_avx(auVar38,auVar130);
                  auVar37 = vunpckhps_avx(auVar38,auVar130);
                  auVar114._0_4_ =
                       auVar48._0_4_ * auVar48._0_4_ +
                       auVar37._0_4_ * auVar37._0_4_ + auVar53._0_4_ * auVar53._0_4_;
                  auVar114._4_4_ =
                       auVar48._4_4_ * auVar48._4_4_ +
                       auVar37._4_4_ * auVar37._4_4_ + auVar53._4_4_ * auVar53._4_4_;
                  auVar114._8_4_ =
                       auVar48._8_4_ * auVar48._8_4_ +
                       auVar37._8_4_ * auVar37._8_4_ + auVar53._8_4_ * auVar53._8_4_;
                  auVar114._12_4_ =
                       auVar48._12_4_ * auVar48._12_4_ +
                       auVar37._12_4_ * auVar37._12_4_ + auVar53._12_4_ * auVar53._12_4_;
                  auVar37 = vrsqrtps_avx(auVar114);
                  fVar31 = auVar37._0_4_;
                  fVar30 = auVar37._4_4_;
                  fVar125 = auVar37._8_4_;
                  fVar126 = auVar37._12_4_;
                  auVar103._0_4_ =
                       (-(fVar89 * fVar31 * fVar31 * auVar114._0_4_) + fVar89) * fVar31 + fVar31;
                  auVar103._4_4_ =
                       (-(fVar89 * fVar30 * fVar30 * auVar114._4_4_) + fVar89) * fVar30 + fVar30;
                  auVar103._8_4_ =
                       (-(fVar89 * fVar125 * fVar125 * auVar114._8_4_) + fVar89) * fVar125 + fVar125
                  ;
                  auVar103._12_4_ =
                       (-(fVar89 * fVar126 * fVar126 * auVar114._12_4_) + fVar89) * fVar126 +
                       fVar126;
                  auVar37 = vshufps_avx(auVar103,auVar103,0x55);
                  auVar48 = vshufps_avx(auVar103,auVar103,0xaa);
                  auVar154._0_4_ = auVar37._0_4_ * auVar162._0_4_;
                  auVar154._4_4_ = auVar37._4_4_ * auVar162._4_4_;
                  auVar154._8_4_ = auVar37._8_4_ * auVar162._8_4_;
                  auVar154._12_4_ = auVar37._12_4_ * auVar162._12_4_;
                  auVar163._0_4_ = auVar103._0_4_ * auVar121._0_4_;
                  auVar163._4_4_ = auVar103._0_4_ * auVar121._4_4_;
                  auVar163._8_4_ = auVar103._0_4_ * auVar121._8_4_;
                  auVar163._12_4_ = auVar103._0_4_ * auVar121._12_4_;
                  auVar140._0_4_ = auVar48._0_4_ * auVar139._0_4_;
                  auVar140._4_4_ = auVar48._4_4_ * auVar139._4_4_;
                  auVar140._8_4_ = auVar48._8_4_ * auVar139._8_4_;
                  auVar140._12_4_ = auVar48._12_4_ * auVar139._12_4_;
                  auVar37 = vblendps_avx(auVar163,auVar154,2);
                  auVar37 = vblendps_avx(auVar140,auVar37,3);
                  auVar48 = vshufps_avx(auVar37,auVar37,0x49);
                  auVar38 = vshufps_avx(auVar37,auVar37,0x92);
                  auVar130 = vshufps_avx(auVar37,auVar37,0x24);
                  auVar176._0_4_ = auVar38._0_4_ + auVar48._0_4_;
                  auVar176._4_4_ = auVar38._4_4_ + auVar48._4_4_;
                  auVar176._8_4_ = auVar38._8_4_ + auVar48._8_4_;
                  auVar176._12_4_ = auVar38._12_4_ + auVar48._12_4_;
                  auVar122._0_4_ = auVar176._0_4_ + auVar130._0_4_;
                  auVar122._4_4_ = auVar176._4_4_ + auVar130._4_4_;
                  auVar122._8_4_ = auVar176._8_4_ + auVar130._8_4_;
                  auVar122._12_4_ = auVar176._12_4_ + auVar130._12_4_;
                  auVar37 = vsubps_avx(auVar37,auVar176);
                  auVar37 = vblendps_avx(auVar37,auVar122,8);
                  auVar171._0_4_ = auVar37._0_4_ + fVar51;
                  auVar171._4_4_ = auVar37._4_4_ + fVar51;
                  auVar171._8_4_ = auVar37._8_4_ + fVar51;
                  auVar171._12_4_ = auVar37._12_4_ + fVar51;
                  auVar37 = vrsqrtps_avx(auVar171);
                  fVar31 = auVar37._0_4_;
                  fVar30 = auVar37._4_4_;
                  fVar125 = auVar37._8_4_;
                  fVar126 = auVar37._12_4_;
                  auVar37 = vblendps_avx(auVar163,auVar154,3);
                  auVar37 = vblendps_avx(auVar37,auVar140,2);
                  auVar48 = vshufps_avx(auVar37,auVar37,9);
                  auVar37 = vblendps_avx(auVar154,auVar140,3);
                  auVar38 = vshufps_avx(auVar154,auVar154,0x55);
                  auVar130 = vshufps_avx(auVar140,auVar140,0xaa);
                  auVar37 = vshufps_avx(auVar37,auVar163,0x12);
                  auVar164._4_4_ = auVar163._0_4_;
                  auVar164._0_4_ = auVar163._0_4_;
                  auVar164._8_4_ = auVar163._0_4_;
                  auVar164._12_4_ = auVar163._0_4_;
                  auVar183._0_4_ = auVar37._0_4_ + auVar48._0_4_;
                  auVar183._4_4_ = auVar37._4_4_ + auVar48._4_4_;
                  auVar183._8_4_ = auVar37._8_4_ + auVar48._8_4_;
                  auVar183._12_4_ = auVar37._12_4_ + auVar48._12_4_;
                  auVar76 = vsubps_avx(auVar37,auVar48);
                  auVar180._0_4_ =
                       ((-(fVar89 * fVar31 * fVar31 * auVar171._0_4_) + fVar89) * fVar31 + fVar31) *
                       fVar89;
                  auVar180._4_4_ =
                       ((-(fVar89 * fVar30 * fVar30 * auVar171._4_4_) + fVar89) * fVar30 + fVar30) *
                       fVar89;
                  auVar180._8_4_ =
                       ((-(fVar89 * fVar125 * fVar125 * auVar171._8_4_) + fVar89) * fVar125 +
                       fVar125) * fVar89;
                  auVar180._12_4_ =
                       ((-(fVar89 * fVar126 * fVar126 * auVar171._12_4_) + fVar89) * fVar126 +
                       fVar126) * fVar89;
                  auVar37 = vblendps_avx(auVar183,auVar76,1);
                  auVar37 = vshufps_avx(auVar37,auVar37,0x18);
                  auVar37 = vblendps_avx(auVar37,auVar171,1);
                  auVar48 = vshufps_avx(auVar180,auVar180,0x55);
                  auVar53 = vshufps_avx(auVar180,auVar180,0xff);
                  auVar57._0_4_ = auVar37._0_4_ * auVar180._0_4_;
                  auVar57._4_4_ = auVar37._4_4_ * auVar180._0_4_;
                  auVar57._8_4_ = auVar37._8_4_ * auVar180._0_4_;
                  auVar57._12_4_ = auVar37._12_4_ * auVar180._0_4_;
                  auVar37 = vblendps_avx(auVar183,auVar76,2);
                  auVar37 = vshufpd_avx(auVar37,auVar37,1);
                  auVar37 = vblendps_avx(auVar37,auVar171,2);
                  auVar44._0_4_ = auVar37._0_4_ * auVar48._0_4_;
                  auVar44._4_4_ = auVar37._4_4_ * auVar48._4_4_;
                  auVar44._8_4_ = auVar37._8_4_ * auVar48._8_4_;
                  auVar44._12_4_ = auVar37._12_4_ * auVar48._12_4_;
                  auVar37 = vcmpps_avx(auVar164,auVar38,1);
                  auVar48 = vcmpps_avx(auVar38,auVar130,1);
                  auVar38 = vcmpps_avx(auVar164,auVar130,1);
                  auVar141._0_4_ = auVar38._0_4_ & auVar48._0_4_;
                  auVar141._4_4_ = auVar38._4_4_ & auVar48._4_4_;
                  auVar141._8_4_ = auVar38._8_4_ & auVar48._8_4_;
                  auVar141._12_4_ = auVar38._12_4_ & auVar48._12_4_;
                  auVar48 = vblendvps_avx(auVar57,auVar44,auVar37);
                  auVar37 = vshufps_avx(auVar183,auVar76,0xa1);
                  auVar38 = vshufps_avx(auVar180,auVar180,0xaa);
                  auVar37 = vblendps_avx(auVar37,auVar171,4);
                  auVar58._0_4_ = auVar38._0_4_ * auVar37._0_4_;
                  auVar58._4_4_ = auVar38._4_4_ * auVar37._4_4_;
                  auVar58._8_4_ = auVar38._8_4_ * auVar37._8_4_;
                  auVar58._12_4_ = auVar38._12_4_ * auVar37._12_4_;
                  auVar48 = vblendvps_avx(auVar48,auVar58,auVar141);
                  auVar37 = vblendps_avx(auVar76,auVar171,8);
                  auVar59._0_4_ = auVar53._0_4_ * auVar37._0_4_;
                  auVar59._4_4_ = auVar53._4_4_ * auVar37._4_4_;
                  auVar59._8_4_ = auVar53._8_4_ * auVar37._8_4_;
                  auVar59._12_4_ = auVar53._12_4_ * auVar37._12_4_;
                  auVar88._0_4_ = auVar114._0_4_ * auVar114._0_4_;
                  auVar88._4_4_ = auVar114._4_4_ * auVar114._4_4_;
                  auVar88._8_4_ = auVar114._8_4_ * auVar114._8_4_;
                  auVar88._12_4_ = auVar114._12_4_ * auVar114._12_4_;
                  auVar37 = vblendps_avx(auVar88,auVar71,8);
                  auVar37 = vhaddps_avx(auVar37,auVar37);
                  auVar37 = vhaddps_avx(auVar37,auVar37);
                  auVar38 = vcmpps_avx(auVar37,auVar71,4);
                  auVar37 = vcmpps_avx(auVar71,auVar122,1);
                  auVar72._0_4_ = auVar37._0_4_;
                  auVar72._4_4_ = auVar72._0_4_;
                  auVar72._8_4_ = auVar72._0_4_;
                  auVar72._12_4_ = auVar72._0_4_;
                  auVar37 = vblendvps_avx(auVar48,auVar59,auVar72);
                  fVar31 = auVar37._0_4_;
                  auVar60._0_4_ = fVar31 * fVar31;
                  fVar125 = auVar37._4_4_;
                  auVar60._4_4_ = fVar125 * fVar125;
                  fVar145 = auVar37._8_4_;
                  auVar60._8_4_ = fVar145 * fVar145;
                  fVar157 = auVar37._12_4_;
                  auVar60._12_4_ = fVar157 * fVar157;
                  auVar37 = vhaddps_avx(auVar60,auVar60);
                  auVar37 = vhaddps_avx(auVar37,auVar37);
                  auVar48 = vrsqrtps_avx(auVar37);
                  fVar30 = auVar48._0_4_;
                  fVar126 = auVar48._4_4_;
                  fVar156 = auVar48._8_4_;
                  fVar158 = auVar48._12_4_;
                  auVar45._0_4_ =
                       fVar31 * ((-(_DAT_145fc6edc * fVar30 * fVar30 * auVar37._0_4_) +
                                 _DAT_145fc6edc) * fVar30 + fVar30);
                  auVar45._4_4_ =
                       fVar125 * ((-(_DAT_145fc6edc * fVar126 * fVar126 * auVar37._4_4_) +
                                  _DAT_145fc6edc) * fVar126 + fVar126);
                  auVar45._8_4_ =
                       fVar145 * ((-(_DAT_145fc6edc * fVar156 * fVar156 * auVar37._8_4_) +
                                  _DAT_145fc6edc) * fVar156 + fVar156);
                  auVar45._12_4_ =
                       fVar157 * ((-(_DAT_145fc6edc * fVar158 * fVar158 * auVar37._12_4_) +
                                  _DAT_145fc6edc) * fVar158 + fVar158);
                  auVar37 = vblendvps_avx(_DAT_145fc6ee0,auVar45,auVar38);
                  auVar48 = vrcpps_avx(auVar103);
                  fVar30 = auVar48._0_4_;
                  fVar126 = auVar48._4_4_;
                  fVar156 = auVar48._8_4_;
                  fVar158 = auVar48._12_4_;
                  fVar31 = auVar37._0_4_;
                  auVar61._0_4_ = fVar31 * fVar31;
                  fVar125 = auVar37._4_4_;
                  auVar61._4_4_ = fVar125 * fVar125;
                  fVar145 = auVar37._8_4_;
                  auVar61._8_4_ = fVar145 * fVar145;
                  fVar157 = auVar37._12_4_;
                  auVar61._12_4_ = fVar157 * fVar157;
                  auVar37 = vhaddps_avx(auVar61,auVar61);
                  auVar73._0_4_ =
                       (float)(auVar38._0_4_ &
                              (uint)(-((fVar30 * auVar103._0_4_ - _DAT_145fc6ed8) * fVar30) + fVar30
                                    ));
                  auVar73._4_4_ =
                       auVar38._4_4_ &
                       (uint)(-((fVar126 * auVar103._4_4_ - _DAT_145fc6ed8) * fVar126) + fVar126);
                  auVar73._8_4_ =
                       auVar38._8_4_ &
                       (uint)(-((fVar156 * auVar103._8_4_ - _DAT_145fc6ed8) * fVar156) + fVar156);
                  auVar73._12_4_ =
                       auVar38._12_4_ &
                       (uint)(-((fVar158 * auVar103._12_4_ - _DAT_145fc6ed8) * fVar158) + fVar158);
                  auVar37 = vhaddps_avx(auVar37,auVar37);
                  auVar48 = vrsqrtps_avx(auVar37);
                  fVar30 = auVar48._0_4_;
                  fVar126 = auVar48._4_4_;
                  fVar156 = auVar48._8_4_;
                  fVar158 = auVar48._12_4_;
                  auVar46._0_4_ =
                       fVar31 * ((-(_DAT_145fc6edc * fVar30 * fVar30 * auVar37._0_4_) +
                                 _DAT_145fc6edc) * fVar30 + fVar30);
                  auVar46._4_4_ =
                       fVar125 * ((-(_DAT_145fc6edc * fVar126 * fVar126 * auVar37._4_4_) +
                                  _DAT_145fc6edc) * fVar126 + fVar126);
                  auVar46._8_4_ =
                       fVar145 * ((-(_DAT_145fc6edc * fVar156 * fVar156 * auVar37._8_4_) +
                                  _DAT_145fc6edc) * fVar156 + fVar156);
                  auVar46._12_4_ =
                       fVar157 * ((-(_DAT_145fc6edc * fVar158 * fVar158 * auVar37._12_4_) +
                                  _DAT_145fc6edc) * fVar158 + fVar158);
                  auVar62._0_4_ = auVar46._0_4_ + auVar46._0_4_;
                  auVar62._4_4_ = auVar46._4_4_ + auVar46._4_4_;
                  auVar62._8_4_ = auVar46._8_4_ + auVar46._8_4_;
                  auVar62._12_4_ = auVar46._12_4_ + auVar46._12_4_;
                  auVar37 = vshufps_avx(auVar46,auVar46,0xff);
                  auVar48 = vshufps_avx(auVar46,auVar46,0xc9);
                  auVar38 = vshufps_avx(auVar46,auVar46,0xd2);
                  auVar130 = vshufps_avx(auVar62,auVar62,0xc9);
                  auVar123._0_4_ = auVar38._0_4_ * auVar62._0_4_ + auVar130._0_4_ * auVar37._0_4_;
                  auVar123._4_4_ = auVar38._4_4_ * auVar62._4_4_ + auVar130._4_4_ * auVar37._4_4_;
                  auVar123._8_4_ = auVar38._8_4_ * auVar62._8_4_ + auVar130._8_4_ * auVar37._8_4_;
                  auVar123._12_4_ =
                       auVar38._12_4_ * auVar62._12_4_ + auVar130._12_4_ * auVar37._12_4_;
                  auVar53 = vshufps_avx(auVar62,auVar62,0xd2);
                  auVar104._0_4_ = -(auVar37._0_4_ * auVar53._0_4_) + auVar48._0_4_ * auVar62._0_4_;
                  auVar104._4_4_ = -(auVar37._4_4_ * auVar53._4_4_) + auVar48._4_4_ * auVar62._4_4_;
                  auVar104._8_4_ = -(auVar37._8_4_ * auVar53._8_4_) + auVar48._8_4_ * auVar62._8_4_;
                  auVar104._12_4_ =
                       -(auVar37._12_4_ * auVar53._12_4_) + auVar48._12_4_ * auVar62._12_4_;
                  auVar115._0_4_ =
                       -(auVar53._0_4_ * auVar38._0_4_) -
                       (auVar48._0_4_ * auVar130._0_4_ - _DAT_145fc6ed8);
                  auVar115._4_4_ =
                       -(auVar53._4_4_ * auVar38._4_4_) -
                       (auVar48._4_4_ * auVar130._4_4_ - _DAT_145fc6ed8);
                  auVar115._8_4_ =
                       -(auVar53._8_4_ * auVar38._8_4_) -
                       (auVar48._8_4_ * auVar130._8_4_ - _DAT_145fc6ed8);
                  auVar115._12_4_ =
                       -(auVar53._12_4_ * auVar38._12_4_) -
                       (auVar48._12_4_ * auVar130._12_4_ - _DAT_145fc6ed8);
                  auVar37 = vblendps_avx(auVar123,auVar104,2);
                  auVar48 = vblendps_avx(auVar115,auVar123,2);
                  auVar38 = vblendps_avx(auVar104,auVar115,2);
                  auVar37 = vblendps_avx(auVar115,auVar37,3);
                  auVar48 = vblendps_avx(auVar104,auVar48,3);
                  auVar130 = vshufps_avx(auVar73,auVar73,0x55);
                  auVar38 = vblendps_avx(auVar123,auVar38,3);
                  auVar53 = vshufps_avx(auVar73,auVar73,0xaa);
                  auStack_128._0_4_ = auVar48._0_4_ * auVar73._0_4_;
                  auStack_128._4_4_ = auVar48._4_4_ * auVar73._0_4_;
                  auStack_128._8_4_ = auVar48._8_4_ * auVar73._0_4_;
                  auStack_128._12_4_ = auVar48._12_4_ * auVar73._0_4_;
                  auStack_118._0_4_ = auVar38._0_4_ * auVar130._0_4_;
                  auStack_118._4_4_ = auVar38._4_4_ * auVar130._4_4_;
                  auStack_118._8_4_ = auVar38._8_4_ * auVar130._8_4_;
                  auStack_118._12_4_ = auVar38._12_4_ * auVar130._12_4_;
                  auStack_108._0_4_ = auVar37._0_4_ * auVar53._0_4_;
                  auStack_108._4_4_ = auVar37._4_4_ * auVar53._4_4_;
                  auStack_108._8_4_ = auVar37._8_4_ * auVar53._8_4_;
                  auStack_108._12_4_ = auVar37._12_4_ * auVar53._12_4_;
                  func_0x000144e2a510(param_2,0);
                  FUN_144e2a630(param_2,0,auStack_128);
                }
                return;
              }
            }
            if (!bVar26 && bVar28) {
              sVar2 = *(short *)(**(longlong **)(plVar24[4] + 0xf8) + 0x7a);
              lVar11 = *(longlong *)(auStack_128._0_8_ + 0x1180);
              fVar31 = *(float *)(lVar11 + 100) - *(float *)(lVar11 + 0x3c);
              auStack_168._8_8_ = 0x14002e68e;
              iVar8 = func_0x000144e2b880(lVar19,1);
              if (iVar8 == -1) {
                auStack_168._8_8_ = 0x14002e69b;
                fVar30 = (float)func_0x000145194230(lVar11);
                fVar31 = fVar31 - fVar30;
              }
              if (sVar2 != -1) {
                uVar14 = auStack_118._8_8_;
                auStack_168._8_8_ = 0x14002e6b9;
                lVar11 = func_0x000144f64c10(*(undefined8 *)auStack_118._8_8_,0);
                lVar11 = *(longlong *)(lVar11 + 0x28);
                lVar13 = (longlong)sVar2 * 0x50;
                auVar37 = *(undefined1 (*) [16])(lVar11 + lVar13);
                fVar30 = *(float *)(lVar11 + 0xc + lVar13);
                auVar52._0_4_ = auVar37._0_4_ + auVar37._0_4_;
                auVar52._4_4_ = auVar37._4_4_ + auVar37._4_4_;
                auVar52._8_4_ = auVar37._8_4_ + auVar37._8_4_;
                auVar52._12_4_ = auVar37._12_4_ + auVar37._12_4_;
                auVar48 = vshufps_avx(auVar37,auVar37,0xc9);
                auVar37 = vshufps_avx(auVar37,auVar37,0xd2);
                auVar38 = vshufps_avx(auVar52,auVar52,0xc9);
                auVar130 = vshufps_avx(auVar52,auVar52,0xd2);
                auVar127._0_4_ = auVar37._0_4_ * auVar52._0_4_ + auVar38._0_4_ * fVar30;
                auVar127._4_4_ = auVar37._4_4_ * auVar52._4_4_ + auVar38._4_4_ * fVar30;
                auVar127._8_4_ = auVar37._8_4_ * auVar52._8_4_ + auVar38._8_4_ * fVar30;
                auVar127._12_4_ = auVar37._12_4_ * auVar52._12_4_ + auVar38._12_4_ * fVar30;
                auVar75._0_4_ = -(fVar30 * auVar130._0_4_) + auVar48._0_4_ * auVar52._0_4_;
                auVar75._4_4_ = -(fVar30 * auVar130._4_4_) + auVar48._4_4_ * auVar52._4_4_;
                auVar75._8_4_ = -(fVar30 * auVar130._8_4_) + auVar48._8_4_ * auVar52._8_4_;
                auVar75._12_4_ = -(fVar30 * auVar130._12_4_) + auVar48._12_4_ * auVar52._12_4_;
                auVar146._0_4_ =
                     -(auVar130._0_4_ * auVar37._0_4_) -
                     (auVar48._0_4_ * auVar38._0_4_ - _DAT_145fc6ed8);
                auVar146._4_4_ =
                     -(auVar130._4_4_ * auVar37._4_4_) -
                     (auVar48._4_4_ * auVar38._4_4_ - _DAT_145fc6ed8);
                auVar146._8_4_ =
                     -(auVar130._8_4_ * auVar37._8_4_) -
                     (auVar48._8_4_ * auVar38._8_4_ - _DAT_145fc6ed8);
                auVar146._12_4_ =
                     -(auVar130._12_4_ * auVar37._12_4_) -
                     (auVar48._12_4_ * auVar38._12_4_ - _DAT_145fc6ed8);
                auVar37 = vblendps_avx(auVar127,auVar75,2);
                auVar48 = vblendps_avx(auVar146,auVar127,2);
                auVar38 = vblendps_avx(auVar75,auVar146,2);
                auStack_108 = vblendps_avx(auVar75,auVar48,3);
                _auStack_f8 = vblendps_avx(auVar127,auVar38,3);
                auStack_e8 = vblendps_avx(auVar146,auVar37,3);
                puVar12 = (undefined8 *)(lVar11 + 0x10 + lVar13);
                uVar16 = *puVar12;
                uVar5 = puVar12[1];
                auStack_d8._0_4_ = (undefined4)uVar16;
                auStack_d8._0_4_ = fVar31 * _DAT_14614f7f0 + (float)auStack_d8._0_4_;
                auStack_d8._4_4_ = (undefined4)((ulonglong)uVar16 >> 0x20);
                auStack_d8._4_4_ = fVar31 * _UNK_14614f7f4 + (float)auStack_d8._4_4_;
                fStack_d0 = (float)uVar5;
                fStack_d0 = fVar31 * _UNK_14614f7f8 + fStack_d0;
                fStack_cc = (float)((ulonglong)uVar5 >> 0x20);
                fStack_cc = fVar31 * _UNK_14614f7fc + fStack_cc;
                auStack_168._8_8_ = 0x14002e77a;
                FUN_1440a9660(uVar14,*(undefined2 *)(lVar11 + 0x48 + lVar13));
              }
            }
            uVar16 = auStack_118._8_8_;
            sVar2 = *(short *)(**(longlong **)(plVar24[4] + 0xf8) + 0x40);
            auStack_168._8_8_ = 0x14002e79c;
            lVar11 = func_0x000144f64c10(*(undefined8 *)auStack_118._8_8_,0);
            lVar13 = *(longlong *)(lVar11 + 0x28);
            lVar19 = (longlong)sVar2 * 0x50;
            lVar17 = (longlong)*(short *)(lVar13 + 0x46 + lVar19);
            lVar11 = lVar13 + lVar19;
            pauVar25 = (undefined1 (*) [16])
                       (~(lVar17 >> 0x3f) &
                       (lVar17 - (ulonglong)*(ushort *)(lVar13 + 0x48 + lVar19)) * 0x50 + lVar11);
            auStack_168._8_8_ = 0x14002e7e6;
            FUN_144e2aa00(uVar16,*(undefined2 *)(pauVar25[4] + 8),auStack_108);
            if (bVar29) {
              if (((char)uStack_12c == '\0') && (sVar2 = *(short *)(pauVar25[4] + 8), sVar2 != 0)) {
                fVar31 = *(float *)(*(longlong *)(auStack_118._0_8_ + 0x1180) + 100);
                auVar117 = ZEXT464((uint)(fVar31 - *(float *)(*(longlong *)
                                                               (auStack_118._0_8_ + 0x1180) + 0x3c))
                                  );
                auStack_168._8_8_ = 0x14002e829;
                iVar8 = func_0x000144e2b880(fVar31,1);
                auVar37 = auVar117._0_16_;
                if (iVar8 == -1) {
                  auStack_168._8_8_ = 0x14002e83f;
                  fVar31 = (float)func_0x000145194230(*(undefined8 *)(auStack_128._0_8_ + 0x1180));
                  auVar37 = ZEXT416((uint)(auVar117._0_4_ - fVar31));
                }
                auVar108._0_12_ = ZEXT812(0);
                auVar108._12_4_ = 0;
                auVar117 = ZEXT1664(auVar108);
                auVar34._0_4_ = *(float *)(lVar11 + 0x10) * *(float *)(lVar11 + 0x10);
                auVar34._4_4_ = *(float *)(lVar11 + 0x14) * *(float *)(lVar11 + 0x14);
                auVar34._8_4_ = *(float *)(lVar11 + 0x18) * *(float *)(lVar11 + 0x18);
                auVar34._12_4_ = *(float *)(lVar11 + 0x1c) * *(float *)(lVar11 + 0x1c);
                auVar48 = vblendps_avx(auVar34,auVar108,8);
                auVar48 = vhaddps_avx(auVar48,auVar48);
                auVar38 = vhaddps_avx(auVar48,auVar48);
                auVar48 = vrsqrtss_avx(auVar38,auVar38);
                fVar31 = auVar48._0_4_;
                auVar48 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar38,2);
                auVar64._4_4_ = _DAT_145fc6f48;
                auVar64._0_4_ = _DAT_145fc6f48;
                auVar64._8_4_ = _DAT_145fc6f48;
                auVar64._12_4_ = _DAT_145fc6f48;
                auVar35._0_4_ =
                     auVar37._0_4_ /
                     (float)(auVar48._0_4_ &
                            (uint)(((fVar31 * fVar31 * auVar38._0_4_ * _DAT_145fc6f08 +
                                    _DAT_145fc6edc) * fVar31 + fVar31) * auVar38._0_4_));
                auVar35._4_12_ = auVar37._4_12_;
                auVar48 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar35);
                auVar37 = vcmpss_avx(auVar35,ZEXT416(_DAT_145fc6f48),1);
                auVar37 = vblendvps_avx(auVar48,auVar64,auVar37);
                auStack_168._8_8_ = 0x14002e8c4;
                fVar30 = (float)func_0x000145f40890(auVar37._0_8_);
                auVar37 = *pauVar25;
                fVar31 = *(float *)(*pauVar25 + 0xc);
                auVar65._0_4_ = auVar37._0_4_ + auVar37._0_4_;
                auVar65._4_4_ = auVar37._4_4_ + auVar37._4_4_;
                auVar65._8_4_ = auVar37._8_4_ + auVar37._8_4_;
                auVar65._12_4_ = auVar37._12_4_ + auVar37._12_4_;
                auVar48 = vshufps_avx(auVar37,auVar37,0xc9);
                auVar37 = vshufps_avx(auVar37,auVar37,0xd2);
                auVar38 = vshufps_avx(auVar65,auVar65,0xc9);
                auVar130 = vshufps_avx(auVar65,auVar65,0xd2);
                auVar147._0_4_ = auVar37._0_4_ * auVar65._0_4_ + auVar38._0_4_ * fVar31;
                auVar147._4_4_ = auVar37._4_4_ * auVar65._4_4_ + auVar38._4_4_ * fVar31;
                auVar147._8_4_ = auVar37._8_4_ * auVar65._8_4_ + auVar38._8_4_ * fVar31;
                auVar147._12_4_ = auVar37._12_4_ * auVar65._12_4_ + auVar38._12_4_ * fVar31;
                auVar90._0_4_ = -(fVar31 * auVar130._0_4_) + auVar48._0_4_ * auVar65._0_4_;
                auVar90._4_4_ = -(fVar31 * auVar130._4_4_) + auVar48._4_4_ * auVar65._4_4_;
                auVar90._8_4_ = -(fVar31 * auVar130._8_4_) + auVar48._8_4_ * auVar65._8_4_;
                auVar90._12_4_ = -(fVar31 * auVar130._12_4_) + auVar48._12_4_ * auVar65._12_4_;
                auVar119._0_4_ =
                     -(auVar130._0_4_ * auVar37._0_4_) -
                     (auVar48._0_4_ * auVar38._0_4_ - _DAT_145fc6ed8);
                auVar119._4_4_ =
                     -(auVar130._4_4_ * auVar37._4_4_) -
                     (auVar48._4_4_ * auVar38._4_4_ - _DAT_145fc6ed8);
                auVar119._8_4_ =
                     -(auVar130._8_4_ * auVar37._8_4_) -
                     (auVar48._8_4_ * auVar38._8_4_ - _DAT_145fc6ed8);
                auVar119._12_4_ =
                     -(auVar130._12_4_ * auVar37._12_4_) -
                     (auVar48._12_4_ * auVar38._12_4_ - _DAT_145fc6ed8);
                auVar92._4_4_ = _DAT_145fc6edc;
                auVar92._0_4_ = _DAT_145fc6edc;
                auVar92._8_4_ = _DAT_145fc6edc;
                auVar92._12_4_ = _DAT_145fc6edc;
                auVar37 = vblendps_avx(auVar147,auVar90,2);
                auVar48 = vblendps_avx(auVar119,auVar147,2);
                auVar38 = vblendps_avx(auVar90,auVar119,2);
                auStack_108 = vblendps_avx(auVar90,auVar48,3);
                auVar48 = vblendps_avx(auVar147,auVar38,3);
                auVar37 = vblendps_avx(auVar119,auVar37,3);
                fVar31 = fVar30 * _DAT_146159cc8;
                auVar91._0_4_ = (uint)fVar31 & _DAT_145fc6f10;
                auVar91._4_4_ = (uint)fVar31 & _DAT_145fc6f10;
                auVar91._8_4_ = (uint)fVar31 & _DAT_145fc6f10;
                auVar91._12_4_ = (uint)fVar31 & _DAT_145fc6f10;
                auVar92 = auVar92 | auVar91;
                auVar128._4_4_ = _DAT_145f43778;
                auVar128._0_4_ = _DAT_145f43778;
                auVar128._8_4_ = _DAT_145f43778;
                auVar128._12_4_ = _DAT_145f43778;
                auVar130 = vpcmpeqd_avx(auVar92,auVar92);
                auVar80._0_4_ = (int)(fVar31 + auVar92._0_4_);
                auVar80._4_4_ = (int)(fVar31 + auVar92._4_4_);
                auVar80._8_4_ = (int)(fVar31 + auVar92._8_4_);
                auVar80._12_4_ = (int)(fVar31 + auVar92._12_4_);
                auVar38 = vcvtdq2ps_avx(auVar80);
                auVar130 = vpsubd_avx(auVar80,auVar130);
                fVar31 = auVar38._0_4_ * _DAT_146159b50 -
                         (-(auVar38._0_4_ * _DAT_146159b4c) + fVar30);
                fVar125 = auVar38._4_4_ * _DAT_146159b50 -
                          (-(auVar38._4_4_ * _DAT_146159b4c) + fVar30);
                fVar126 = auVar38._8_4_ * _DAT_146159b50 -
                          (-(auVar38._8_4_ * _DAT_146159b4c) + fVar30);
                fVar30 = auVar38._12_4_ * _DAT_146159b50 -
                         (-(auVar38._12_4_ * _DAT_146159b4c) + fVar30);
                fVar145 = fVar31 * fVar31;
                fVar156 = fVar125 * fVar125;
                fVar157 = fVar126 * fVar126;
                fVar158 = fVar30 * fVar30;
                auVar167._0_4_ =
                     fVar145 * (fVar145 * (fVar145 * _DAT_146159b58 + _DAT_146159b54) +
                               _DAT_146159b64) + _DAT_145fc6ed8;
                auVar167._4_4_ =
                     fVar156 * (fVar156 * (fVar156 * _DAT_146159b58 + _DAT_146159b54) +
                               _DAT_146159b64) + _DAT_145fc6ed8;
                auVar167._8_4_ =
                     fVar157 * (fVar157 * (fVar157 * _DAT_146159b58 + _DAT_146159b54) +
                               _DAT_146159b64) + _DAT_145fc6ed8;
                auVar167._12_4_ =
                     fVar158 * (fVar158 * (fVar158 * _DAT_146159b58 + _DAT_146159b54) +
                               _DAT_146159b64) + _DAT_145fc6ed8;
                auVar38 = vpand_avx(auVar128,auVar80);
                auVar129._4_4_ = _DAT_145f43774;
                auVar129._0_4_ = _DAT_145f43774;
                auVar129._8_4_ = _DAT_145f43774;
                auVar129._12_4_ = _DAT_145f43774;
                auVar174._0_4_ =
                     fVar145 * fVar31 *
                     (fVar145 * (fVar145 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
                     fVar31;
                auVar174._4_4_ =
                     fVar156 * fVar125 *
                     (fVar156 * (fVar156 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
                     fVar125;
                auVar174._8_4_ =
                     fVar157 * fVar126 *
                     (fVar157 * (fVar157 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
                     fVar126;
                auVar174._12_4_ =
                     fVar158 * fVar30 *
                     (fVar158 * (fVar158 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
                     fVar30;
                auVar109 = auVar117._0_16_;
                auVar53 = vpcmpeqd_avx(auVar38,auVar109);
                auVar120 = vpsubd_avx(auVar109,auVar38);
                auVar38 = vpand_avx(auVar129,auVar80);
                auVar130 = vpand_avx(auVar129,auVar130);
                auVar76 = vpcmpeqd_avx(auVar38,auVar109);
                auVar109 = vpcmpeqd_avx(auVar130,auVar109);
                auVar38 = vblendvps_avx(auVar167,auVar174,auVar53);
                auVar130 = vblendvps_avx(auVar167,auVar174,auVar120);
                auVar110._0_4_ = auVar38._0_4_ ^ _DAT_145fc6f10;
                auVar110._4_4_ = auVar38._4_4_ ^ _DAT_145fc6f10;
                auVar110._8_4_ = auVar38._8_4_ ^ _DAT_145fc6f10;
                auVar110._12_4_ = auVar38._12_4_ ^ _DAT_145fc6f10;
                auVar36._0_4_ = auVar130._0_4_ ^ _DAT_145fc6f10;
                auVar36._4_4_ = auVar130._4_4_ ^ _DAT_145fc6f10;
                auVar36._8_4_ = auVar130._8_4_ ^ _DAT_145fc6f10;
                auVar36._12_4_ = auVar130._12_4_ ^ _DAT_145fc6f10;
                auVar130 = vblendvps_avx(auVar36,auVar130,auVar109);
                auVar38 = vblendvps_avx(auVar110,auVar38,auVar76);
                auStack_f8._0_4_ = auVar37._0_4_ * auVar38._0_4_ + auVar130._0_4_ * auVar48._0_4_;
                auStack_f8._4_4_ = auVar37._4_4_ * auVar38._4_4_ + auVar130._4_4_ * auVar48._4_4_;
                fStack_f0 = auVar37._8_4_ * auVar38._8_4_ + auVar130._8_4_ * auVar48._8_4_;
                fStack_ec = auVar37._12_4_ * auVar38._12_4_ + auVar130._12_4_ * auVar48._12_4_;
                auStack_e8._0_4_ = -(auVar48._0_4_ * auVar38._0_4_) + auVar130._0_4_ * auVar37._0_4_
                ;
                auStack_e8._4_4_ = -(auVar48._4_4_ * auVar38._4_4_) + auVar130._4_4_ * auVar37._4_4_
                ;
                auStack_e8._8_4_ = -(auVar48._8_4_ * auVar38._8_4_) + auVar130._8_4_ * auVar37._8_4_
                ;
                auStack_e8._12_4_ =
                     -(auVar48._12_4_ * auVar38._12_4_) + auVar130._12_4_ * auVar37._12_4_;
                auStack_168._8_8_ = 0x14002ea68;
                FUN_1440a9660(uVar16,sVar2);
              }
            }
            else {
              auStack_168._8_8_ = 0x14002ea7a;
              FUN_142095ed0(*(undefined8 *)(param_1 + 8),param_2,auVar117._0_8_);
            }
          }
        }
      }
    }
  }
  return;
}

