// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140166af0  size: 4370 bytes
// Name:    FUN_140166af0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145022f60, FUN_1406a2ab0, FUN_1402d2730, FUN_1405e9f40, FUN_144e277c0, FUN_1406a2840, FUN_14098cf70, FUN_1456cc770, FUN_145022ec0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140166af0(longlong param_1,float param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  byte bVar9;
  short sVar10;
  undefined2 uVar11;
  ushort uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 extraout_var [56];
  undefined1 auVar28 [64];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar59;
  float fVar60;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar61;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
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
  float fVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar87;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar85;
  float fVar86;
  undefined1 auVar84 [64];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 in_ZMM7 [64];
  float fVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [64];
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  undefined1 auVar100 [16];
  undefined1 auVar101 [64];
  undefined1 auVar102 [16];
  undefined1 auVar103 [64];
  undefined1 auVar104 [16];
  undefined1 in_ZMM13 [64];
  undefined1 auVar105 [16];
  undefined1 auVar107 [64];
  undefined1 auVar108 [64];
  longlong lStack_1d8;
  byte bStack_1d0;
  float fStack_1bc;
  longlong lStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined1 auStack_1a4 [12];
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  longlong *plStack_168;
  ushort uStack_160;
  short sStack_15e;
  longlong lStack_158;
  longlong alStack_150 [3];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_78 [16];
  undefined1 auVar106 [64];
  
  auStack_78 = in_ZMM13._0_16_;
  auStack_d8 = in_ZMM7._0_16_;
  if (((char)param_3 != '\0') && ((*(byte *)(*(longlong *)(param_1 + 0x100) + 0x1c) & 4) != 0)) {
    fStack_1bc = param_2;
    lStack_1b8 = param_1;
    auVar28._0_8_ = FUN_1456cc770(&plStack_168);
    auVar28._8_56_ = extraout_var;
    uVar20 = (uint)uStack_160;
    if ((short)uStack_160 < sStack_15e) {
      auVar95 = ZEXT1664(CONCAT412(_DAT_145fc6ed8,
                                   CONCAT48(_DAT_145fc6ed8,CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8)))
                        );
      fVar93 = 0.0;
      auVar101 = ZEXT1264(ZEXT812(0));
      lVar13 = plStack_168[0x2e];
      plVar18 = plStack_168;
      fVar96 = _DAT_145fc6edc;
      fVar97 = _DAT_145fc6edc;
      fVar98 = _DAT_145fc6edc;
      fVar99 = _DAT_145fc6edc;
      sVar10 = sStack_15e;
      do {
        uVar16 = uVar20;
        if (lVar13 != 0) {
          uVar16 = (uint)*(ushort *)
                          (*(longlong *)(lVar13 + 0x158) + 8 +
                          ((longlong)(short)uVar20 & 0xffffffffU) * 0x18);
        }
        lVar17 = (longlong)(short)uVar16 * 0x70;
        lVar14 = *(longlong *)(plVar18[0x35] + 0x20);
        auVar25 = vpinsrw_avx(auVar28._0_16_,(uint)*(ushort *)(lVar14 + 0x48 + lVar17),0);
        auVar84 = ZEXT1664(auVar25);
        auVar25 = vcvtph2ps_f16c(ZEXT216(auVar25._0_2_));
        auVar28 = ZEXT1664(auVar25);
        if (fVar93 < auVar25._0_4_) {
          if (lVar13 != 0) {
            uVar20 = (uint)*(ushort *)
                            (*(longlong *)(lVar13 + 0x158) + 8 +
                            ((longlong)(short)uVar20 & 0xffffffffU) * 0x18);
          }
          auVar25 = vpinsrw_avx(auVar25,(uint)*(ushort *)(lVar17 + lVar14 + 0x46),0);
          auVar28 = ZEXT1664(auVar25);
          iVar19 = func_0x0001454e3ba0(plVar18[0x2e],uVar20);
          lVar14 = (longlong)(short)uVar20 * 0x70 + lVar14;
          uVar12 = *(ushort *)
                    (lVar14 + 0x1a + (longlong)*(int *)(&UNK_1466c7130 + (uint)(iVar19 << 2)) * 2);
          uVar16 = (uint)uVar12;
          uVar4 = *(ushort *)
                   (lVar14 + 0x1a + (longlong)*(int *)(&UNK_146161460 + (uint)(iVar19 << 2)) * 2);
          uVar20 = (uint)uVar12;
          if (uVar12 < uVar4) {
            do {
              uVar16 = uVar20;
              sVar10 = (**(code **)(*plVar18 + 0x408))(plVar18,uVar16);
              if (sVar10 != -1) goto LAB_140166d23;
              uVar20 = uVar16 + 1;
            } while (uVar4 != (ushort)(uVar16 + 1));
            uVar16 = (uint)uVar4;
          }
LAB_140166d23:
          func_0x00014032bdc0((int)plVar18[2],&uStack_1b0,uVar16);
          FUN_1406a2ab0(&lStack_1d8,uStack_1b0);
          uVar12 = auVar84._0_2_;
          if (lStack_1d8 == 0) goto LAB_140166f2f;
          lVar13 = *(longlong *)(lStack_1d8 + 0x20);
          if ((lVar13 == 0) || ((*(byte *)(lVar13 + 0x26e) & 2) == 0)) {
LAB_140166d5b:
            lVar13 = (ulonglong)bStack_1d0 * 0x1b0 +
                     *(longlong *)(*(longlong *)(lStack_1d8 + 0x30) + 0x18);
          }
          else {
            uVar12 = func_0x0001401c0010(lStack_1d8,
                                         *(undefined2 *)
                                          (*(longlong *)(*(longlong *)(lStack_1d8 + 0x30) + 0x18) +
                                           0x182 + (ulonglong)bStack_1d0 * 0x1b0));
            if (lStack_1d8 == 0) {
              uVar15 = 0;
            }
            else {
              uVar15 = (ulonglong)
                       (*(int *)(lStack_1d8 + 0x10) + (uint)(*(int *)(lStack_1d8 + 0x10) == 0));
            }
            bVar9 = FUN_145022f60(lVar13,(ulonglong)uVar12 << 0x20 | uVar15 | 0xffff000000000000);
            uVar12 = auVar84._0_2_;
            if ((bVar9 == 0xff) ||
               (lVar13 = *(longlong *)(lVar13 + 0x418 + (ulonglong)bVar9 * 8), lVar13 == 0))
            goto LAB_140166d5b;
            lVar13 = lVar13 + 0x10;
          }
          cVar2 = *(char *)(lVar13 + 0x8c);
          auVar25 = vcvtph2ps_f16c(ZEXT216(uVar12));
          auVar84 = ZEXT1664(auVar25);
          auVar25 = vcvtph2ps_f16c(ZEXT216(auVar28._0_2_));
          auVar108 = ZEXT1664(auVar25);
          if (cVar2 == '\0') {
            FUN_144e277c0(&lStack_1d8,&uStack_1a8);
            auVar5._4_12_ = auStack_1a4;
            auVar5._0_4_ = uStack_1a8;
            auVar6._4_4_ = uStack_194;
            auVar6._0_4_ = uStack_198;
            auVar6._8_8_ = uStack_190;
            auVar7._8_4_ = uStack_180;
            auVar7._0_8_ = uStack_188;
            auVar7._12_4_ = uStack_17c;
            auVar88._4_4_ = uStack_180;
            auVar88._0_4_ = uStack_180;
            auVar88._8_4_ = uStack_180;
            auVar88._12_4_ = uStack_180;
            auVar25 = vblendps_avx(auVar5,auVar6,2);
            auVar25 = vblendps_avx(auVar7,auVar25,3);
            auVar23 = vshufps_avx(auVar25,auVar25,0x49);
            auVar34 = vshufps_avx(auVar25,auVar25,0x92);
            auVar57 = vshufps_avx(auVar25,auVar25,0x24);
            auVar69._0_4_ = auVar34._0_4_ + auVar23._0_4_;
            auVar69._4_4_ = auVar34._4_4_ + auVar23._4_4_;
            auVar69._8_4_ = auVar34._8_4_ + auVar23._8_4_;
            auVar69._12_4_ = auVar34._12_4_ + auVar23._12_4_;
            auVar21._0_4_ = auVar69._0_4_ + auVar57._0_4_;
            auVar21._4_4_ = auVar69._4_4_ + auVar57._4_4_;
            auVar21._8_4_ = auVar69._8_4_ + auVar57._8_4_;
            auVar21._12_4_ = auVar69._12_4_ + auVar57._12_4_;
            auVar25 = vsubps_avx(auVar25,auVar69);
            auVar25 = vblendps_avx(auVar25,auVar21,8);
            auVar23 = vcmpps_avx(auVar101._0_16_,auVar21,1);
            auVar62._0_4_ = auVar95._0_4_ + auVar25._0_4_;
            auVar62._4_4_ = auVar95._4_4_ + auVar25._4_4_;
            auVar62._8_4_ = auVar95._8_4_ + auVar25._8_4_;
            auVar62._12_4_ = auVar95._12_4_ + auVar25._12_4_;
            auVar22._0_4_ = auVar23._0_4_;
            auVar22._4_4_ = auVar22._0_4_;
            auVar22._8_4_ = auVar22._0_4_;
            auVar22._12_4_ = auVar22._0_4_;
            auVar25 = vrsqrtps_avx(auVar62);
            fVar36 = auVar25._0_4_;
            fVar35 = auVar25._4_4_;
            fVar59 = auVar25._8_4_;
            fVar60 = auVar25._12_4_;
            auVar25 = vblendps_avx(auVar6,auVar7,3);
            auVar23 = vshufps_avx(auVar25,auVar5,0x12);
            auVar25 = vblendps_avx(auVar5,auVar6,3);
            auVar25 = vblendps_avx(auVar25,auVar7,2);
            auVar25 = vshufps_avx(auVar25,auVar25,9);
            auVar37._0_4_ = auVar23._0_4_ + auVar25._0_4_;
            auVar37._4_4_ = auVar23._4_4_ + auVar25._4_4_;
            auVar37._8_4_ = auVar23._8_4_ + auVar25._8_4_;
            auVar37._12_4_ = auVar23._12_4_ + auVar25._12_4_;
            auVar34 = vsubps_avx(auVar23,auVar25);
            auVar45._0_4_ =
                 fVar96 * ((-(fVar96 * fVar36 * fVar36 * auVar62._0_4_) + fVar96) * fVar36 + fVar36)
            ;
            auVar45._4_4_ =
                 fVar97 * ((-(fVar97 * fVar35 * fVar35 * auVar62._4_4_) + fVar97) * fVar35 + fVar35)
            ;
            auVar45._8_4_ =
                 fVar98 * ((-(fVar98 * fVar59 * fVar59 * auVar62._8_4_) + fVar98) * fVar59 + fVar59)
            ;
            auVar45._12_4_ =
                 fVar99 * ((-(fVar99 * fVar60 * fVar60 * auVar62._12_4_) + fVar99) * fVar60 + fVar60
                          );
            auVar25 = vblendps_avx(auVar37,auVar34,1);
            auVar23 = vblendps_avx(auVar37,auVar34,2);
            auVar94 = vshufps_avx(auVar37,auVar34,0xa1);
            auVar34 = vblendps_avx(auVar34,auVar62,8);
            auVar100 = vshufps_avx(auVar25,auVar25,0x18);
            auVar57 = vshufpd_avx(auVar23,auVar23,1);
            auVar25 = vblendps_avx(auVar94,auVar62,4);
            auVar23 = vblendps_avx(auVar100,auVar62,1);
            auVar57 = vblendps_avx(auVar57,auVar62,2);
            auVar63._0_4_ = auVar45._0_4_ * auVar23._0_4_;
            auVar63._4_4_ = auVar45._0_4_ * auVar23._4_4_;
            auVar63._8_4_ = auVar45._0_4_ * auVar23._8_4_;
            auVar63._12_4_ = auVar45._0_4_ * auVar23._12_4_;
            auVar23 = vshufps_avx(auVar45,auVar45,0x55);
            auVar70._0_4_ = auVar23._0_4_ * auVar57._0_4_;
            auVar70._4_4_ = auVar23._4_4_ * auVar57._4_4_;
            auVar70._8_4_ = auVar23._8_4_ * auVar57._8_4_;
            auVar70._12_4_ = auVar23._12_4_ * auVar57._12_4_;
            auVar23 = vshufps_avx(auVar45,auVar45,0xaa);
            auVar57 = vshufps_avx(auVar45,auVar45,0xff);
            auVar38._0_4_ = auVar23._0_4_ * auVar25._0_4_;
            auVar38._4_4_ = auVar23._4_4_ * auVar25._4_4_;
            auVar38._8_4_ = auVar23._8_4_ * auVar25._8_4_;
            auVar38._12_4_ = auVar23._12_4_ * auVar25._12_4_;
            auVar29._0_4_ = auVar57._0_4_ * auVar34._0_4_;
            auVar29._4_4_ = auVar57._4_4_ * auVar34._4_4_;
            auVar29._8_4_ = auVar57._8_4_ * auVar34._8_4_;
            auVar29._12_4_ = auVar57._12_4_ * auVar34._12_4_;
            auVar46._4_4_ = uStack_1a8;
            auVar46._0_4_ = uStack_1a8;
            auVar46._8_4_ = uStack_1a8;
            auVar46._12_4_ = uStack_1a8;
            auVar78._4_4_ = uStack_194;
            auVar78._0_4_ = uStack_194;
            auVar78._8_4_ = uStack_194;
            auVar78._12_4_ = uStack_194;
            auVar25 = vcmpps_avx(auVar46,auVar78,1);
            auVar23 = vcmpps_avx(auVar78,auVar88,1);
            auVar34 = vcmpps_avx(auVar46,auVar88,1);
            auVar25 = vblendvps_avx(auVar63,auVar70,auVar25);
            auVar47._0_4_ = auVar34._0_4_ & auVar23._0_4_;
            auVar47._4_4_ = auVar34._4_4_ & auVar23._4_4_;
            auVar47._8_4_ = auVar34._8_4_ & auVar23._8_4_;
            auVar47._12_4_ = auVar34._12_4_ & auVar23._12_4_;
            auVar25 = vblendvps_avx(auVar25,auVar38,auVar47);
            auStack_108 = vblendvps_avx(auVar25,auVar29,auVar22);
            auVar107._0_8_ = FUN_1402d2730(auStack_108);
            fVar36 = auVar84._0_4_;
            uVar12 = auVar28._0_2_;
            auVar107._8_56_ = extraout_var_00;
            auVar25 = auVar107._0_16_;
            lVar13 = *(longlong *)(lStack_1d8 + 0x20);
            if ((lVar13 == 0) || ((*(byte *)(lVar13 + 0x26e) & 2) == 0)) {
LAB_140166ef1:
              lVar13 = (ulonglong)bStack_1d0 * 0x1b0 +
                       *(longlong *)(*(longlong *)(lStack_1d8 + 0x30) + 0x18);
            }
            else {
              auVar103 = ZEXT1664(auVar25);
              uVar11 = func_0x0001401c0010(lStack_1d8,
                                           *(undefined2 *)
                                            (*(longlong *)(*(longlong *)(lStack_1d8 + 0x30) + 0x18)
                                             + 0x182 + (ulonglong)bStack_1d0 * 0x1b0));
              if (lStack_1d8 == 0) {
                iVar19 = 0;
              }
              else {
                iVar19 = *(int *)(lStack_1d8 + 0x10) + (uint)(*(int *)(lStack_1d8 + 0x10) == 0);
              }
              bVar9 = FUN_145022f60(lVar13,(ulonglong)CONCAT24(uVar11,iVar19) | 0xffff000000000000);
              fVar36 = auVar84._0_4_;
              uVar12 = auVar28._0_2_;
              auVar25 = auVar103._0_16_;
              if ((bVar9 == 0xff) ||
                 (lVar13 = *(longlong *)(lVar13 + 0x418 + (ulonglong)bVar9 * 8), lVar13 == 0))
              goto LAB_140166ef1;
              lVar13 = lVar13 + 0x10;
            }
            auVar84 = ZEXT464((uint)*(float *)(lVar13 + 0x160));
            fVar35 = auVar25._0_4_ - *(float *)(lVar13 + 0x160);
            auVar28 = ZEXT464((uint)fVar35);
            if (fVar36 < (float)((uint)fVar35 & _DAT_145fc6f4c)) {
              auVar103 = ZEXT1664(auVar25);
              auVar107 = ZEXT1664((undefined1  [16])0x0);
              *(byte *)(lStack_1b8 + 0x51b) = *(byte *)(lStack_1b8 + 0x51b) | 2;
              auVar25 = vcvtph2ps_f16c(ZEXT216(uVar12));
              if (0.0 <= auVar25._0_4_) {
                lVar13 = FUN_145022ec0(&lStack_1d8);
                if (lVar13 == 0) {
                  lVar13 = *(longlong *)(*(longlong *)(lStack_1d8 + 0x30) + 0x18);
                  if (lVar13 == 0) goto LAB_140166f2f;
                  lVar13 = lVar13 + (ulonglong)bStack_1d0 * 0x1b0;
                }
                else {
                  lVar13 = lVar13 + 0x10;
                }
                auVar58._4_4_ = _DAT_145fc6f48;
                auVar58._0_4_ = _DAT_145fc6f48;
                auVar58._8_4_ = _DAT_145fc6f48;
                auVar58._12_4_ = _DAT_145fc6f48;
                auVar25 = vcmpss_avx(auVar107._0_16_,auVar28._0_16_,0);
                auVar23 = vcmpss_avx(auVar28._0_16_,auVar107._0_16_,1);
                auVar25 = vblendvps_avx(ZEXT416(~auVar25._0_4_ & (uint)_DAT_145fc6ed8),auVar58,
                                        auVar23);
                auVar23 = vmaxss_avx(auVar103._0_16_,auVar84._0_16_);
                auVar34._4_12_ = auVar25._4_12_;
                auVar34._0_4_ = auVar108._0_4_ * fStack_1bc * auVar25._0_4_ + auVar84._0_4_;
                auVar25 = vminss_avx(auVar84._0_16_,auVar103._0_16_);
LAB_140167ac6:
                auVar57 = vminss_avx(auVar23,auVar34);
                auVar23 = vcmpss_avx(auVar34,auVar25,1);
                auVar25 = vblendvps_avx(auVar57,auVar25,auVar23);
                *(int *)(lVar13 + 0x160) = auVar25._0_4_;
              }
              else {
                lVar13 = FUN_145022ec0(&lStack_1d8);
                if (lVar13 == 0) {
                  lVar13 = *(longlong *)(*(longlong *)(lStack_1d8 + 0x30) + 0x18);
                  if (lVar13 == 0) goto LAB_140166f2f;
                  lVar13 = lVar13 + (ulonglong)bStack_1d0 * 0x1b0;
                }
                else {
                  lVar13 = lVar13 + 0x10;
                }
                *(int *)(lVar13 + 0x160) = auVar103._0_4_;
              }
            }
          }
          else if (cVar2 == '\x01') {
            FUN_144e277c0(&lStack_1d8,&uStack_1a8);
            uVar12 = auVar28._0_2_;
            fVar61 = auVar84._0_4_;
            auVar94._4_12_ = auStack_1a4;
            auVar94._0_4_ = uStack_1a8;
            auVar100._4_4_ = uStack_194;
            auVar100._0_4_ = uStack_198;
            auVar100._8_8_ = uStack_190;
            auVar8._8_4_ = uStack_180;
            auVar8._0_8_ = uStack_188;
            auVar8._12_4_ = uStack_17c;
            auVar104._4_4_ = uStack_180;
            auVar104._0_4_ = uStack_180;
            auVar104._8_4_ = uStack_180;
            auVar104._12_4_ = uStack_180;
            lVar13 = *(longlong *)(lStack_1d8 + 0x20);
            auVar25 = vblendps_avx(auVar94,auVar100,2);
            auVar25 = vblendps_avx(auVar8,auVar25,3);
            auVar23 = vshufps_avx(auVar25,auVar25,0x49);
            auVar34 = vshufps_avx(auVar25,auVar25,0x92);
            auVar57 = vshufps_avx(auVar25,auVar25,0x24);
            auVar71._0_4_ = auVar34._0_4_ + auVar23._0_4_;
            auVar71._4_4_ = auVar34._4_4_ + auVar23._4_4_;
            auVar71._8_4_ = auVar34._8_4_ + auVar23._8_4_;
            auVar71._12_4_ = auVar34._12_4_ + auVar23._12_4_;
            auVar23._0_4_ = auVar71._0_4_ + auVar57._0_4_;
            auVar23._4_4_ = auVar71._4_4_ + auVar57._4_4_;
            auVar23._8_4_ = auVar71._8_4_ + auVar57._8_4_;
            auVar23._12_4_ = auVar71._12_4_ + auVar57._12_4_;
            auVar25 = vsubps_avx(auVar25,auVar71);
            auVar25 = vblendps_avx(auVar25,auVar23,8);
            auVar23 = vcmpps_avx(auVar101._0_16_,auVar23,1);
            auVar64._0_4_ = auVar95._0_4_ + auVar25._0_4_;
            auVar64._4_4_ = auVar95._4_4_ + auVar25._4_4_;
            auVar64._8_4_ = auVar95._8_4_ + auVar25._8_4_;
            auVar64._12_4_ = auVar95._12_4_ + auVar25._12_4_;
            auVar24._0_4_ = auVar23._0_4_;
            auVar24._4_4_ = auVar24._0_4_;
            auVar24._8_4_ = auVar24._0_4_;
            auVar24._12_4_ = auVar24._0_4_;
            auVar25 = vrsqrtps_avx(auVar64);
            fVar36 = auVar25._0_4_;
            fVar35 = auVar25._4_4_;
            fVar59 = auVar25._8_4_;
            fVar60 = auVar25._12_4_;
            auVar25 = vblendps_avx(auVar100,auVar8,3);
            auVar23 = vshufps_avx(auVar25,auVar94,0x12);
            auVar25 = vblendps_avx(auVar94,auVar100,3);
            auVar25 = vblendps_avx(auVar25,auVar8,2);
            auVar25 = vshufps_avx(auVar25,auVar25,9);
            auVar39._0_4_ = auVar23._0_4_ + auVar25._0_4_;
            auVar39._4_4_ = auVar23._4_4_ + auVar25._4_4_;
            auVar39._8_4_ = auVar23._8_4_ + auVar25._8_4_;
            auVar39._12_4_ = auVar23._12_4_ + auVar25._12_4_;
            auVar34 = vsubps_avx(auVar23,auVar25);
            auVar48._0_4_ =
                 fVar96 * ((-(fVar96 * fVar36 * fVar36 * auVar64._0_4_) + fVar96) * fVar36 + fVar36)
            ;
            auVar48._4_4_ =
                 fVar97 * ((-(fVar97 * fVar35 * fVar35 * auVar64._4_4_) + fVar97) * fVar35 + fVar35)
            ;
            auVar48._8_4_ =
                 fVar98 * ((-(fVar98 * fVar59 * fVar59 * auVar64._8_4_) + fVar98) * fVar59 + fVar59)
            ;
            auVar48._12_4_ =
                 fVar99 * ((-(fVar99 * fVar60 * fVar60 * auVar64._12_4_) + fVar99) * fVar60 + fVar60
                          );
            auVar25 = vblendps_avx(auVar39,auVar34,1);
            auVar23 = vblendps_avx(auVar39,auVar34,2);
            auVar94 = vshufps_avx(auVar39,auVar34,0xa1);
            auVar34 = vblendps_avx(auVar34,auVar64,8);
            auVar100 = vshufps_avx(auVar25,auVar25,0x18);
            auVar57 = vshufpd_avx(auVar23,auVar23,1);
            auVar25 = vblendps_avx(auVar94,auVar64,4);
            auVar23 = vblendps_avx(auVar100,auVar64,1);
            auVar57 = vblendps_avx(auVar57,auVar64,2);
            auVar65._0_4_ = auVar48._0_4_ * auVar23._0_4_;
            auVar65._4_4_ = auVar48._0_4_ * auVar23._4_4_;
            auVar65._8_4_ = auVar48._0_4_ * auVar23._8_4_;
            auVar65._12_4_ = auVar48._0_4_ * auVar23._12_4_;
            auVar23 = vshufps_avx(auVar48,auVar48,0x55);
            auVar72._0_4_ = auVar23._0_4_ * auVar57._0_4_;
            auVar72._4_4_ = auVar23._4_4_ * auVar57._4_4_;
            auVar72._8_4_ = auVar23._8_4_ * auVar57._8_4_;
            auVar72._12_4_ = auVar23._12_4_ * auVar57._12_4_;
            auVar23 = vshufps_avx(auVar48,auVar48,0xaa);
            auVar57 = vshufps_avx(auVar48,auVar48,0xff);
            auVar40._0_4_ = auVar23._0_4_ * auVar25._0_4_;
            auVar40._4_4_ = auVar23._4_4_ * auVar25._4_4_;
            auVar40._8_4_ = auVar23._8_4_ * auVar25._8_4_;
            auVar40._12_4_ = auVar23._12_4_ * auVar25._12_4_;
            auVar30._0_4_ = auVar57._0_4_ * auVar34._0_4_;
            auVar30._4_4_ = auVar57._4_4_ * auVar34._4_4_;
            auVar30._8_4_ = auVar57._8_4_ * auVar34._8_4_;
            auVar30._12_4_ = auVar57._12_4_ * auVar34._12_4_;
            auVar49._4_4_ = uStack_1a8;
            auVar49._0_4_ = uStack_1a8;
            auVar49._8_4_ = uStack_1a8;
            auVar49._12_4_ = uStack_1a8;
            auVar79._4_4_ = uStack_194;
            auVar79._0_4_ = uStack_194;
            auVar79._8_4_ = uStack_194;
            auVar79._12_4_ = uStack_194;
            auVar25 = vcmpps_avx(auVar49,auVar79,1);
            auVar23 = vcmpps_avx(auVar49,auVar104,1);
            auVar25 = vblendvps_avx(auVar65,auVar72,auVar25);
            auVar34 = vcmpps_avx(auVar79,auVar104,1);
            auVar50._0_4_ = auVar23._0_4_ & auVar34._0_4_;
            auVar50._4_4_ = auVar23._4_4_ & auVar34._4_4_;
            auVar50._8_4_ = auVar23._8_4_ & auVar34._8_4_;
            auVar50._12_4_ = auVar23._12_4_ & auVar34._12_4_;
            auVar25 = vblendvps_avx(auVar25,auVar40,auVar50);
            auVar25 = vblendvps_avx(auVar25,auVar30,auVar24);
            auVar103 = ZEXT1664(auVar25);
            if ((lVar13 == 0) || ((*(byte *)(lVar13 + 0x26e) & 2) == 0)) {
LAB_140167175:
              lVar13 = (ulonglong)bStack_1d0 * 0x1b0 +
                       *(longlong *)(*(longlong *)(lStack_1d8 + 0x30) + 0x18);
            }
            else {
              uVar12 = func_0x0001401c0010(lStack_1d8,
                                           *(undefined2 *)
                                            (*(longlong *)(*(longlong *)(lStack_1d8 + 0x30) + 0x18)
                                             + 0x182 + (ulonglong)bStack_1d0 * 0x1b0));
              if (lStack_1d8 == 0) {
                uVar15 = 0;
              }
              else {
                uVar15 = (ulonglong)
                         (*(int *)(lStack_1d8 + 0x10) + (uint)(*(int *)(lStack_1d8 + 0x10) == 0));
              }
              bVar9 = FUN_145022f60(lVar13,(ulonglong)uVar12 << 0x20 | uVar15 | 0xffff000000000000);
              uVar12 = auVar28._0_2_;
              fVar61 = auVar84._0_4_;
              if ((bVar9 == 0xff) ||
                 (lVar13 = *(longlong *)(lVar13 + 0x418 + (ulonglong)bVar9 * 8), lVar13 == 0))
              goto LAB_140167175;
              lVar13 = lVar13 + 0x10;
            }
            auVar25._0_4_ = auVar103._0_4_ * *(float *)(lVar13 + 0x160);
            auVar25._4_4_ = auVar103._4_4_ * *(float *)(lVar13 + 0x164);
            auVar25._8_4_ = auVar103._8_4_ * *(float *)(lVar13 + 0x168);
            auVar25._12_4_ = auVar103._12_4_ * *(float *)(lVar13 + 0x16c);
            auVar28 = ZEXT1664(CONCAT412(_DAT_145fc6f4c,
                                         CONCAT48(_DAT_145fc6f4c,
                                                  CONCAT44(_DAT_145fc6f4c,_DAT_145fc6f4c))));
            auVar25 = vhaddps_avx(auVar25,auVar25);
            auVar25 = vhaddps_avx(auVar25,auVar25);
            fVar36 = auVar25._0_4_;
            auVar31._0_4_ = (float)(_DAT_145fc6f4c & (uint)fVar36);
            auVar31._4_4_ = _DAT_145fc6f4c & auVar25._4_4_;
            auVar31._8_4_ = _DAT_145fc6f4c & auVar25._8_4_;
            auVar31._12_4_ = _DAT_145fc6f4c & auVar25._12_4_;
            fVar35 = _DAT_145fc6ed8 - auVar31._0_4_;
            auVar25 = vcmpss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar31,1);
            auVar23 = vrsqrtss_avx(ZEXT416((uint)fVar35),ZEXT416((uint)fVar35));
            fVar59 = auVar23._0_4_;
            auVar23 = vcmpss_avx(ZEXT416(_DAT_146159bfc),ZEXT416((uint)fVar35),2);
            fVar35 = (float)(auVar23._0_4_ &
                            (uint)(((fVar59 * fVar59 * fVar35 * _DAT_145fc6f08 + _DAT_145fc6edc) *
                                    fVar59 + fVar59) * fVar35));
            if (fVar61 < (float)(_DAT_145fc6f4c &
                                ~auVar25._0_4_ &
                                (uint)(((auVar31._0_4_ *
                                         (auVar31._0_4_ *
                                          (auVar31._0_4_ * _DAT_146159c04 + _DAT_146159c00) +
                                         _DAT_146159c08) + _DAT_146159c0c) *
                                        fVar36 * fVar36 * fVar36 * fVar36 +
                                       auVar31._0_4_ *
                                       (auVar31._0_4_ *
                                        (auVar31._0_4_ * _DAT_146159c14 + _DAT_146159c10) +
                                       _DAT_146159c18) + _DAT_146159c1c) * (fVar35 + fVar35)))) {
              *(byte *)(lStack_1b8 + 0x51b) = *(byte *)(lStack_1b8 + 0x51b) | 2;
              auVar25 = vcvtph2ps_f16c(ZEXT216(uVar12));
              if (auVar25._0_4_ < fVar93) {
                lVar13 = FUN_145022ec0(&lStack_1d8);
                if (lVar13 == 0) {
                  lVar13 = *(longlong *)(*(longlong *)(lStack_1d8 + 0x30) + 0x18);
                  if (lVar13 == 0) goto LAB_140166f2f;
                  lVar13 = lVar13 + (ulonglong)bStack_1d0 * 0x1b0;
                }
                else {
                  lVar13 = lVar13 + 0x10;
                }
                *(undefined1 (*) [16])(lVar13 + 0x160) = auVar103._0_16_;
              }
              else {
                lVar13 = *(longlong *)(lStack_1d8 + 0x20);
                if ((lVar13 == 0) || ((*(byte *)(lVar13 + 0x26e) & 2) == 0)) {
LAB_140167389:
                  lVar13 = (ulonglong)bStack_1d0 * 0x1b0 +
                           *(longlong *)(*(longlong *)(lStack_1d8 + 0x30) + 0x18);
                }
                else {
                  uVar12 = func_0x0001401c0010(lStack_1d8,
                                               *(undefined2 *)
                                                (*(longlong *)
                                                  (*(longlong *)(lStack_1d8 + 0x30) + 0x18) + 0x182
                                                + (ulonglong)bStack_1d0 * 0x1b0));
                  if (lStack_1d8 == 0) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = (ulonglong)
                             (*(int *)(lStack_1d8 + 0x10) + (uint)(*(int *)(lStack_1d8 + 0x10) == 0)
                             );
                  }
                  bVar9 = FUN_145022f60(lVar13,(ulonglong)uVar12 << 0x20 | uVar15 |
                                               0xffff000000000000);
                  if ((bVar9 == 0xff) ||
                     (lVar13 = *(longlong *)(lVar13 + 0x418 + (ulonglong)bVar9 * 8), lVar13 == 0))
                  goto LAB_140167389;
                  lVar13 = lVar13 + 0x10;
                }
                fVar36 = auVar108._0_4_;
                auVar23 = auVar28._0_16_;
                auVar25 = auVar103._0_16_;
                uVar1 = *(undefined4 *)(lVar13 + 0x16c);
                auStack_138._4_4_ = uVar1;
                auStack_138._0_4_ = uVar1;
                auStack_138._8_4_ = uVar1;
                auStack_138._12_4_ = uVar1;
                uVar1 = *(undefined4 *)(lVar13 + 0x160);
                auVar102._4_4_ = uVar1;
                auVar102._0_4_ = uVar1;
                auVar102._8_4_ = uVar1;
                auVar102._12_4_ = uVar1;
                auVar107 = ZEXT1664(auVar102);
                uVar1 = *(undefined4 *)(lVar13 + 0x164);
                auVar89._4_4_ = uVar1;
                auVar89._0_4_ = uVar1;
                auVar89._8_4_ = uVar1;
                auVar89._12_4_ = uVar1;
                auVar84 = ZEXT1664(auVar89);
                uVar1 = *(undefined4 *)(lVar13 + 0x168);
                auVar105._4_4_ = uVar1;
                auVar105._0_4_ = uVar1;
                auVar105._8_4_ = uVar1;
                auVar105._12_4_ = uVar1;
                auVar106 = ZEXT1664(auVar105);
                lVar13 = *(longlong *)(lStack_1d8 + 0x20);
                if ((lVar13 == 0) || ((*(byte *)(lVar13 + 0x26e) & 2) == 0)) {
LAB_1401673e1:
                  lVar13 = *(longlong *)(*(longlong *)(lStack_1d8 + 0x30) + 0x18);
                  if (lVar13 == 0) goto LAB_140166f2f;
                  lVar13 = lVar13 + (ulonglong)bStack_1d0 * 0x1b0;
                }
                else {
                  uVar12 = func_0x0001401c0010(lStack_1d8,
                                               *(undefined2 *)
                                                (*(longlong *)
                                                  (*(longlong *)(lStack_1d8 + 0x30) + 0x18) + 0x182
                                                + (ulonglong)bStack_1d0 * 0x1b0));
                  if (lStack_1d8 == 0) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = (ulonglong)
                             (*(int *)(lStack_1d8 + 0x10) + (uint)(*(int *)(lStack_1d8 + 0x10) == 0)
                             );
                  }
                  bVar9 = FUN_145022f60(lVar13,(ulonglong)uVar12 << 0x20 | uVar15 |
                                               0xffff000000000000);
                  fVar36 = auVar108._0_4_;
                  auVar23 = auVar28._0_16_;
                  auVar102 = auVar107._0_16_;
                  auVar89 = auVar84._0_16_;
                  auVar25 = auVar103._0_16_;
                  auVar105 = auVar106._0_16_;
                  if ((bVar9 == 0xff) ||
                     (lVar13 = *(longlong *)(lVar13 + 0x418 + (ulonglong)bVar9 * 8), lVar13 == 0))
                  goto LAB_1401673e1;
                  lVar13 = lVar13 + 0x10;
                }
                auVar26._4_4_ = _DAT_145fc6f10;
                auVar26._0_4_ = _DAT_145fc6f10;
                auVar26._8_4_ = _DAT_145fc6f10;
                auVar26._12_4_ = _DAT_145fc6f10;
                auVar41._0_4_ = (uint)auVar25._0_4_ ^ _DAT_145fc6f10;
                auVar41._4_4_ = (uint)auVar25._4_4_ ^ _DAT_145fc6f10;
                auVar41._8_4_ = (uint)auVar25._8_4_ ^ _DAT_145fc6f10;
                auVar41._12_4_ = (uint)auVar25._12_4_ ^ _DAT_145fc6f10;
                auVar34 = vblendps_avx(auVar41,auVar25,10);
                auVar94 = vshufpd_avx(auVar25,auVar41,1);
                auVar57 = vblendps_avx(auVar41,auVar25,9);
                auVar34 = vshufps_avx(auVar34,auVar34,0x1b);
                auVar57 = vshufps_avx(auVar57,auVar57,0xb1);
                auVar90._4_4_ = _DAT_145fc6f48;
                auVar90._0_4_ = _DAT_145fc6f48;
                auVar90._8_4_ = _DAT_145fc6f48;
                auVar90._12_4_ = _DAT_145fc6f48;
                auVar32._0_4_ =
                     -(auVar105._0_4_ * auVar57._0_4_) -
                     (auVar89._0_4_ * auVar94._0_4_ +
                     (auVar102._0_4_ * auVar34._0_4_ - auStack_138._0_4_ * auVar25._0_4_));
                auVar32._4_4_ =
                     -(auVar105._4_4_ * auVar57._4_4_) -
                     (auVar89._4_4_ * auVar94._4_4_ +
                     (auVar102._4_4_ * auVar34._4_4_ - auStack_138._4_4_ * auVar25._4_4_));
                auVar32._8_4_ =
                     -(auVar105._8_4_ * auVar57._8_4_) -
                     (auVar89._8_4_ * auVar94._8_4_ +
                     (auVar102._8_4_ * auVar34._8_4_ - auStack_138._8_4_ * auVar25._8_4_));
                auVar32._12_4_ =
                     -(auVar105._12_4_ * auVar57._12_4_) -
                     (auVar89._12_4_ * auVar94._12_4_ +
                     (auVar102._12_4_ * auVar34._12_4_ - auStack_138._12_4_ * auVar25._12_4_));
                auVar25 = vshufps_avx(auVar32,auVar32,0xff);
                auVar25 = vmaxps_avx(auVar25,auVar90);
                auVar94 = auVar95._0_16_;
                auVar34 = vminps_avx(auVar25,auVar94);
                fVar35 = auVar34._0_4_;
                auVar66._0_4_ = (float)(auVar23._0_4_ & (uint)fVar35);
                fVar59 = auVar34._4_4_;
                auVar66._4_4_ = (float)(auVar23._4_4_ & (uint)fVar59);
                fVar60 = auVar34._8_4_;
                auVar66._8_4_ = (float)(auVar23._8_4_ & (uint)fVar60);
                fVar61 = auVar34._12_4_;
                auVar66._12_4_ = (float)(auVar23._12_4_ & (uint)fVar61);
                auVar57 = vsubps_avx(auVar94,auVar66);
                fVar77 = fVar35 * fVar35 * fVar35 * fVar35 *
                         (auVar66._0_4_ *
                          (auVar66._0_4_ * (auVar66._0_4_ * _DAT_146159c04 + _DAT_146159c00) +
                          _DAT_146159c08) + _DAT_146159c0c) +
                         (auVar66._0_4_ *
                          (auVar66._0_4_ * (auVar66._0_4_ * _DAT_146159c14 + _DAT_146159c10) +
                          _DAT_146159c18) - _DAT_146159b4c);
                fVar85 = fVar59 * fVar59 * fVar59 * fVar59 *
                         (auVar66._4_4_ *
                          (auVar66._4_4_ * (auVar66._4_4_ * _DAT_146159c04 + _DAT_146159c00) +
                          _DAT_146159c08) + _DAT_146159c0c) +
                         (auVar66._4_4_ *
                          (auVar66._4_4_ * (auVar66._4_4_ * _DAT_146159c14 + _DAT_146159c10) +
                          _DAT_146159c18) - _DAT_146159b4c);
                fVar86 = fVar60 * fVar60 * fVar60 * fVar60 *
                         (auVar66._8_4_ *
                          (auVar66._8_4_ * (auVar66._8_4_ * _DAT_146159c04 + _DAT_146159c00) +
                          _DAT_146159c08) + _DAT_146159c0c) +
                         (auVar66._8_4_ *
                          (auVar66._8_4_ * (auVar66._8_4_ * _DAT_146159c14 + _DAT_146159c10) +
                          _DAT_146159c18) - _DAT_146159b4c);
                fVar87 = fVar61 * fVar61 * fVar61 * fVar61 *
                         (auVar66._12_4_ *
                          (auVar66._12_4_ * (auVar66._12_4_ * _DAT_146159c04 + _DAT_146159c00) +
                          _DAT_146159c08) + _DAT_146159c0c) +
                         (auVar66._12_4_ *
                          (auVar66._12_4_ * (auVar66._12_4_ * _DAT_146159c14 + _DAT_146159c10) +
                          _DAT_146159c18) - _DAT_146159b4c);
                auVar25 = vrsqrtps_avx(auVar57);
                fVar35 = auVar25._0_4_;
                fVar59 = auVar25._4_4_;
                fVar60 = auVar25._8_4_;
                fVar61 = auVar25._12_4_;
                auVar73._4_4_ = _DAT_146159bfc;
                auVar73._0_4_ = _DAT_146159bfc;
                auVar73._8_4_ = _DAT_146159bfc;
                auVar73._12_4_ = _DAT_146159bfc;
                auVar25 = vcmpps_avx(auVar73,auVar57,2);
                auVar74._4_4_ = _DAT_145fc6f80;
                auVar74._0_4_ = _DAT_145fc6f80;
                auVar74._8_4_ = _DAT_145fc6f80;
                auVar74._12_4_ = _DAT_145fc6f80;
                fVar35 = (float)(auVar25._0_4_ &
                                (uint)(((-(fVar96 * fVar35 * fVar35 * auVar57._0_4_) + fVar96) *
                                        fVar35 + fVar35) * auVar57._0_4_));
                fVar59 = (float)(auVar25._4_4_ &
                                (uint)(((-(fVar97 * fVar59 * fVar59 * auVar57._4_4_) + fVar97) *
                                        fVar59 + fVar59) * auVar57._4_4_));
                fVar60 = (float)(auVar25._8_4_ &
                                (uint)(((-(fVar98 * fVar60 * fVar60 * auVar57._8_4_) + fVar98) *
                                        fVar60 + fVar60) * auVar57._8_4_));
                fVar61 = (float)(auVar25._12_4_ &
                                (uint)(((-(fVar99 * fVar61 * fVar61 * auVar57._12_4_) + fVar99) *
                                        fVar61 + fVar61) * auVar57._12_4_));
                auVar67._0_4_ = fVar35 * fVar77;
                auVar67._4_4_ = fVar59 * fVar85;
                auVar67._8_4_ = fVar60 * fVar86;
                auVar67._12_4_ = fVar61 * fVar87;
                auVar51._0_4_ = -(fVar77 * fVar35) + _DAT_145fc6f80;
                auVar51._4_4_ = -(fVar85 * fVar59) + _DAT_145fc6f80;
                auVar51._8_4_ = -(fVar86 * fVar60) + _DAT_145fc6f80;
                auVar51._12_4_ = -(fVar87 * fVar61) + _DAT_145fc6f80;
                auVar80._4_4_ = _DAT_146159be0;
                auVar80._0_4_ = _DAT_146159be0;
                auVar80._8_4_ = _DAT_146159be0;
                auVar80._12_4_ = _DAT_146159be0;
                auVar25 = vblendvps_avx(auVar67,auVar51,auVar34);
                auVar42._0_4_ = auVar25._0_4_ + auVar25._0_4_;
                auVar42._4_4_ = auVar25._4_4_ + auVar25._4_4_;
                auVar42._8_4_ = auVar25._8_4_ + auVar25._8_4_;
                auVar42._12_4_ = auVar25._12_4_ + auVar25._12_4_;
                auVar100 = auVar101._0_16_;
                auVar34 = vcmpps_avx(auVar42,auVar100,1);
                auVar25 = vblendvps_avx(auVar94,auVar90,auVar34);
                auVar34 = vblendvps_avx(auVar74,auVar80,auVar34);
                auVar34 = vsubps_avx(auVar42,auVar34);
                auVar52._0_4_ = _DAT_145fc6f94 * auVar34._0_4_ + auVar25._0_4_;
                auVar52._4_4_ = _DAT_145fc6f94 * auVar34._4_4_ + auVar25._4_4_;
                auVar52._8_4_ = _DAT_145fc6f94 * auVar34._8_4_ + auVar25._8_4_;
                auVar52._12_4_ = _DAT_145fc6f94 * auVar34._12_4_ + auVar25._12_4_;
                auVar25 = vroundps_avx(auVar52,3);
                auVar53._0_4_ = _DAT_14615a920 * auVar25._0_4_ + auVar42._0_4_;
                auVar53._4_4_ = _DAT_14615a920 * auVar25._4_4_ + auVar42._4_4_;
                auVar53._8_4_ = _DAT_14615a920 * auVar25._8_4_ + auVar42._8_4_;
                auVar53._12_4_ = _DAT_14615a920 * auVar25._12_4_ + auVar42._12_4_;
                fVar36 = fVar36 * fStack_1bc;
                auVar25 = vcmpps_avx(auVar100,auVar53,4);
                auVar43._0_4_ =
                     (float)(auVar25._0_4_ &
                            ((uint)auVar53._0_4_ & _DAT_145fc6f10 | (uint)_DAT_145fc6ed8)) * fVar36;
                auVar43._4_4_ =
                     (float)(auVar25._4_4_ &
                            ((uint)auVar53._4_4_ & _DAT_145fc6f10 | (uint)_DAT_145fc6ed8)) * fVar36;
                auVar43._8_4_ =
                     (float)(auVar25._8_4_ &
                            ((uint)auVar53._8_4_ & _DAT_145fc6f10 | (uint)_DAT_145fc6ed8)) * fVar36;
                auVar43._12_4_ =
                     (float)(auVar25._12_4_ &
                            ((uint)auVar53._12_4_ & _DAT_145fc6f10 | (uint)_DAT_145fc6ed8)) * fVar36
                ;
                auVar68._0_4_ = auVar23._0_4_ & (uint)auVar53._0_4_;
                auVar68._4_4_ = auVar23._4_4_ & (uint)auVar53._4_4_;
                auVar68._8_4_ = auVar23._8_4_ & (uint)auVar53._8_4_;
                auVar68._12_4_ = auVar23._12_4_ & (uint)auVar53._12_4_;
                auVar25 = vmaxps_avx(auVar43,auVar53 | auVar26);
                auVar23 = vminps_avx(auVar25,auVar68);
                fVar36 = auVar23._0_4_ * _DAT_146159b48;
                fVar35 = auVar23._4_4_ * _DAT_146159b48;
                fVar59 = auVar23._8_4_ * _DAT_146159b48;
                fVar60 = auVar23._12_4_ * _DAT_146159b48;
                auVar44._0_4_ =
                     (uint)(fVar36 + (float)((uint)fVar36 & _DAT_145fc6f10 | (uint)_DAT_145fc6edc));
                auVar44._4_4_ =
                     (uint)(fVar35 + (float)((uint)fVar35 & _DAT_145fc6f10 | (uint)_DAT_145fc6edc));
                auVar44._8_4_ =
                     (uint)(fVar59 + (float)((uint)fVar59 & _DAT_145fc6f10 | (uint)_DAT_145fc6edc));
                auVar44._12_4_ =
                     (uint)(fVar60 + (float)((uint)fVar60 & _DAT_145fc6f10 | (uint)_DAT_145fc6edc));
                auVar25 = vcvtdq2ps_avx(auVar44);
                fVar36 = _DAT_146159b50 * auVar25._0_4_ +
                         auVar25._0_4_ * _DAT_146159b4c + fVar96 * auVar23._0_4_;
                fVar35 = _DAT_146159b50 * auVar25._4_4_ +
                         auVar25._4_4_ * _DAT_146159b4c + fVar97 * auVar23._4_4_;
                fVar59 = _DAT_146159b50 * auVar25._8_4_ +
                         auVar25._8_4_ * _DAT_146159b4c + fVar98 * auVar23._8_4_;
                fVar60 = _DAT_146159b50 * auVar25._12_4_ +
                         auVar25._12_4_ * _DAT_146159b4c + fVar99 * auVar23._12_4_;
                fVar61 = fVar36 * fVar36;
                fVar77 = fVar35 * fVar35;
                fVar85 = fVar59 * fVar59;
                fVar86 = fVar60 * fVar60;
                auVar81._0_4_ =
                     fVar61 * (fVar61 * (fVar61 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64)
                     + auVar95._0_4_;
                auVar81._4_4_ =
                     fVar77 * (fVar77 * (fVar77 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64)
                     + auVar95._4_4_;
                auVar81._8_4_ =
                     fVar85 * (fVar85 * (fVar85 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64)
                     + auVar95._8_4_;
                auVar81._12_4_ =
                     fVar86 * (fVar86 * (fVar86 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64)
                     + auVar95._12_4_;
                auVar91._0_4_ =
                     fVar61 * fVar36 *
                     (fVar61 * (fVar61 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar36
                ;
                auVar91._4_4_ =
                     fVar77 * fVar35 *
                     (fVar77 * (fVar77 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar35
                ;
                auVar91._8_4_ =
                     fVar85 * fVar59 *
                     (fVar85 * (fVar85 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar59
                ;
                auVar91._12_4_ =
                     fVar86 * fVar60 *
                     (fVar86 * (fVar86 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar60
                ;
                auVar75._4_4_ = _DAT_145f43774;
                auVar75._0_4_ = _DAT_145f43774;
                auVar75._8_4_ = _DAT_145f43774;
                auVar75._12_4_ = _DAT_145f43774;
                auVar54._0_4_ = auVar44._0_4_ & _DAT_145f43778;
                auVar54._4_4_ = auVar44._4_4_ & _DAT_145f43778;
                auVar54._8_4_ = auVar44._8_4_ & _DAT_145f43778;
                auVar54._12_4_ = auVar44._12_4_ & _DAT_145f43778;
                auVar25 = vpcmpeqd_avx(auVar100,auVar54);
                auVar23 = vpsubd_avx(auVar100,auVar54);
                auVar25 = vblendvps_avx(auVar81,auVar91,auVar25);
                auVar23 = vblendvps_avx(auVar81,auVar91,auVar23);
                auVar92._0_4_ = auVar25._0_4_ ^ _DAT_145fc6f10;
                auVar92._4_4_ = auVar25._4_4_ ^ _DAT_145fc6f10;
                auVar92._8_4_ = auVar25._8_4_ ^ _DAT_145fc6f10;
                auVar92._12_4_ = auVar25._12_4_ ^ _DAT_145fc6f10;
                auVar82._0_4_ = auVar44._0_4_ & _DAT_145f43774;
                auVar82._4_4_ = auVar44._4_4_ & _DAT_145f43774;
                auVar82._8_4_ = auVar44._8_4_ & _DAT_145f43774;
                auVar82._12_4_ = auVar44._12_4_ & _DAT_145f43774;
                auVar94 = vpsubd_avx(auVar44,_DAT_145f41010);
                auVar34 = vpcmpeqd_avx(auVar100,auVar82);
                auVar34 = vblendvps_avx(auVar92,auVar25,auVar34);
                auVar83._0_4_ = auVar32._0_4_ * auVar32._0_4_;
                auVar83._4_4_ = auVar32._4_4_ * auVar32._4_4_;
                auVar83._8_4_ = auVar32._8_4_ * auVar32._8_4_;
                auVar83._12_4_ = auVar32._12_4_ * auVar32._12_4_;
                auVar25 = vblendps_avx(auVar83,auVar100,8);
                auVar57 = vhaddps_avx(auVar25,auVar25);
                auVar25 = vpand_avx(auVar94,auVar75);
                auVar76._0_4_ = auVar23._0_4_ ^ _DAT_145fc6f10;
                auVar76._4_4_ = auVar23._4_4_ ^ _DAT_145fc6f10;
                auVar76._8_4_ = auVar23._8_4_ ^ _DAT_145fc6f10;
                auVar76._12_4_ = auVar23._12_4_ ^ _DAT_145fc6f10;
                auVar25 = vpcmpeqd_avx(auVar100,auVar25);
                auVar25 = vblendvps_avx(auVar76,auVar23,auVar25);
                auVar57 = vhaddps_avx(auVar57,auVar57);
                auVar23 = vrsqrtps_avx(auVar57);
                fVar36 = auVar23._0_4_;
                fVar35 = auVar23._4_4_;
                fVar59 = auVar23._8_4_;
                fVar60 = auVar23._12_4_;
                auVar55._4_4_ = _DAT_14615a034;
                auVar55._0_4_ = _DAT_14615a034;
                auVar55._8_4_ = _DAT_14615a034;
                auVar55._12_4_ = _DAT_14615a034;
                auVar23 = vcmpps_avx(auVar55,auVar57,1);
                auVar33._0_4_ =
                     auVar34._0_4_ *
                     (float)(auVar23._0_4_ &
                            (uint)(((-(fVar96 * fVar36 * fVar36 * auVar57._0_4_) + fVar96) * fVar36
                                   + fVar36) * auVar32._0_4_));
                auVar33._4_4_ =
                     auVar34._4_4_ *
                     (float)(auVar23._4_4_ &
                            (uint)(((-(fVar97 * fVar35 * fVar35 * auVar57._4_4_) + fVar97) * fVar35
                                   + fVar35) * auVar32._4_4_));
                auVar33._8_4_ =
                     auVar34._8_4_ *
                     (float)(auVar23._8_4_ &
                            (uint)(((-(fVar98 * fVar59 * fVar59 * auVar57._8_4_) + fVar98) * fVar59
                                   + fVar59) * auVar32._8_4_));
                auVar33._12_4_ =
                     auVar34._12_4_ *
                     (float)(auVar23._12_4_ &
                            (uint)(((-(fVar99 * fVar60 * fVar60 * auVar57._12_4_) + fVar99) * fVar60
                                   + fVar60) * auVar32._12_4_));
                auVar25 = vblendps_avx(auVar33,auVar25,8);
                auVar27._0_4_ = (uint)auVar25._0_4_ ^ _DAT_145fc6f10;
                auVar27._4_4_ = (uint)auVar25._4_4_ ^ _DAT_145fc6f10;
                auVar27._8_4_ = (uint)auVar25._8_4_ ^ _DAT_145fc6f10;
                auVar27._12_4_ = (uint)auVar25._12_4_ ^ _DAT_145fc6f10;
                auVar23 = vblendps_avx(auVar27,auVar25,10);
                auVar57 = vshufpd_avx(auVar25,auVar27,1);
                auVar34 = vblendps_avx(auVar27,auVar25,9);
                auVar23 = vshufps_avx(auVar23,auVar23,0x1b);
                auVar34 = vshufps_avx(auVar34,auVar34,0xb1);
                auVar56._0_4_ =
                     auVar34._0_4_ * auVar105._0_4_ +
                     auVar57._0_4_ * auVar89._0_4_ +
                     auVar102._0_4_ * auVar23._0_4_ + auVar25._0_4_ * auStack_138._0_4_;
                auVar56._4_4_ =
                     auVar34._4_4_ * auVar105._4_4_ +
                     auVar57._4_4_ * auVar89._4_4_ +
                     auVar102._4_4_ * auVar23._4_4_ + auVar25._4_4_ * auStack_138._4_4_;
                auVar56._8_4_ =
                     auVar34._8_4_ * auVar105._8_4_ +
                     auVar57._8_4_ * auVar89._8_4_ +
                     auVar102._8_4_ * auVar23._8_4_ + auVar25._8_4_ * auStack_138._8_4_;
                auVar56._12_4_ =
                     auVar34._12_4_ * auVar105._12_4_ +
                     auVar57._12_4_ * auVar89._12_4_ +
                     auVar102._12_4_ * auVar23._12_4_ + auVar25._12_4_ * auStack_138._12_4_;
                *(undefined1 (*) [16])(lVar13 + 0x160) = auVar56;
                auStack_128 = auVar89;
                auStack_118 = auVar105;
              }
            }
          }
          else if (cVar2 == '\x02') {
            FUN_144e277c0(&lStack_1d8,&uStack_1a8);
            uStack_f8 = uStack_178;
            uStack_f0 = uStack_170;
            auVar103._0_8_ = func_0x000144e27600();
            auVar103._8_56_ = extraout_var_02;
            auVar103 = ZEXT1664(auVar103._0_16_);
            lVar13 = FUN_145022ec0(&lStack_1d8);
            if (lVar13 == 0) {
              lVar13 = (ulonglong)bStack_1d0 * 0x1b0 +
                       *(longlong *)(*(longlong *)(lStack_1d8 + 0x30) + 0x18);
            }
            else {
              lVar13 = lVar13 + 0x10;
            }
            auVar107 = ZEXT464((uint)*(float *)(lVar13 + 0x160));
            fVar36 = auVar103._0_4_ - *(float *)(lVar13 + 0x160);
            auVar106 = ZEXT464((uint)fVar36);
            if ((float)((uint)fVar36 & _DAT_145fc6f4c) <= auVar84._0_4_) goto LAB_140166f2f;
            auVar84 = ZEXT1264(ZEXT812(0));
            *(byte *)(lStack_1b8 + 0x51b) = *(byte *)(lStack_1b8 + 0x51b) | 2;
            auVar25 = vcvtph2ps_f16c(ZEXT216(auVar28._0_2_));
            if (auVar25._0_4_ < 0.0) {
              lVar13 = FUN_145022ec0(&lStack_1d8);
              if (lVar13 == 0) {
                lVar13 = *(longlong *)(*(longlong *)(lStack_1d8 + 0x30) + 0x18);
                if (lVar13 == 0) goto LAB_140166f2f;
                lVar13 = lVar13 + (ulonglong)bStack_1d0 * 0x1b0;
              }
              else {
                lVar13 = lVar13 + 0x10;
              }
              *(int *)(lVar13 + 0x160) = auVar103._0_4_;
              goto LAB_140166f2f;
            }
            lVar13 = FUN_145022ec0(&lStack_1d8);
            if (lVar13 == 0) {
              lVar13 = *(longlong *)(*(longlong *)(lStack_1d8 + 0x30) + 0x18);
              if (lVar13 == 0) goto LAB_140166f2f;
              lVar13 = lVar13 + (ulonglong)bStack_1d0 * 0x1b0;
            }
            else {
              lVar13 = lVar13 + 0x10;
            }
            auVar57._4_4_ = _DAT_145fc6f48;
            auVar57._0_4_ = _DAT_145fc6f48;
            auVar57._8_4_ = _DAT_145fc6f48;
            auVar57._12_4_ = _DAT_145fc6f48;
            auVar25 = vcmpss_avx(auVar106._0_16_,auVar84._0_16_,0);
            auVar23 = vcmpss_avx(auVar106._0_16_,auVar84._0_16_,1);
            auVar25 = vblendvps_avx(ZEXT416(~auVar25._0_4_ & (uint)_DAT_145fc6ed8),auVar57,auVar23);
            auVar23 = vmaxss_avx(auVar103._0_16_,auVar107._0_16_);
            auVar34._4_12_ = auVar25._4_12_;
            auVar34._0_4_ = auVar108._0_4_ * fStack_1bc * auVar25._0_4_ + auVar107._0_4_;
            auVar25 = vminss_avx(auVar107._0_16_,auVar103._0_16_);
            goto LAB_140167ac6;
          }
LAB_140166f2f:
          auVar28._0_8_ = FUN_1406a2840(&lStack_1d8);
          auVar28._8_56_ = extraout_var_01;
          uVar20 = (uint)uStack_160;
          lVar13 = plStack_168[0x2e];
          plVar18 = plStack_168;
          sVar10 = sStack_15e;
        }
        uVar16 = uVar20 + 1;
        uStack_160 = (ushort)uVar16;
        if ((lVar13 != 0) && ((short)uStack_160 < sVar10)) {
          uVar16 = (uint)(short)uStack_160;
          iVar19 = uVar20 + 2;
          while ((sVar3 = *(short *)(*(longlong *)(lVar13 + 0x158) + 8 + (ulonglong)uVar16 * 0x18),
                 sVar3 == -1 ||
                 (*(short *)(*(longlong *)(lVar13 + 0x180) + (ulonglong)(uint)(int)sVar3 * 2) == -1)
                 )) {
            uVar16 = uVar16 + 1;
            uStack_160 = (ushort)iVar19;
            iVar19 = iVar19 + 1;
            if ((ushort)((2 - sVar10) + uStack_160) == 2) goto LAB_1401678fb;
          }
        }
        uVar20 = uVar16;
      } while ((short)uVar20 < sVar10);
    }
LAB_1401678fb:
    if (alStack_150[0] != 0) {
      FUN_1405e9f40(alStack_150);
    }
    if (lStack_158 != 0) {
      FUN_14098cf70(&lStack_158);
    }
  }
  return param_3;
}

