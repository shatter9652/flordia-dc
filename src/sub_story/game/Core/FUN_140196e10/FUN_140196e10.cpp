// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140196e10  size: 5735 bytes
// Name:    FUN_140196e10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455c9ca0, FUN_145ba7050, FUN_1455c9dc0, FUN_14571fe80, FUN_145647140, FUN_1454061e0, FUN_145791040, FUN_1455c9b90, FUN_1455ca010
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140196e10(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  float fVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  undefined8 uVar22;
  longlong lVar23;
  undefined1 (*pauVar24) [32];
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  uint *puVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  ulonglong uVar34;
  int iVar35;
  longlong lVar36;
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
  undefined1 auVar37 [16];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
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
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
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
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 in_ZMM4 [64];
  undefined1 auVar124 [64];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar129 [16];
  undefined1 auVar131 [32];
  undefined1 auVar130 [16];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined8 unaff_XMM8_Qa;
  undefined1 auVar134 [16];
  undefined8 unaff_XMM8_Qb;
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 in_ZMM10 [64];
  undefined1 auVar151 [64];
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined1 in_ZMM13 [64];
  undefined1 in_ZMM14 [64];
  undefined1 in_ZMM15 [64];
  ulonglong auStackX_8 [4];
  undefined8 uStack_48;
  
  uStack_48 = 0x140196e26;
  lVar21 = FUN_145647140();
  auVar122 = in_ZMM4._0_32_;
  auVar109 = in_ZMM10._0_32_;
  auVar38 = in_ZMM4._0_16_;
  lVar21 = -lVar21;
  *(undefined1 (*) [16])(&stack0x00028160 + lVar21) = in_ZMM15._0_16_;
  *(undefined1 (*) [16])(&stack0x00028150 + lVar21) = in_ZMM14._0_16_;
  *(undefined1 (*) [16])(&stack0x00028140 + lVar21) = in_ZMM13._0_16_;
  *(undefined8 *)(&stack0x00028130 + lVar21) = unaff_XMM12_Qa;
  *(undefined8 *)(&stack0x00028138 + lVar21) = unaff_XMM12_Qb;
  *(undefined8 *)(&stack0x00028120 + lVar21) = unaff_XMM11_Qa;
  *(undefined8 *)(&stack0x00028128 + lVar21) = unaff_XMM11_Qb;
  auVar129 = in_ZMM10._0_16_;
  *(undefined1 (*) [16])(&stack0x00028110 + lVar21) = auVar129;
  *(undefined8 *)(&stack0x00028100 + lVar21) = unaff_XMM9_Qa;
  *(undefined8 *)(&stack0x00028108 + lVar21) = unaff_XMM9_Qb;
  *(undefined8 *)(&stack0x000280f0 + lVar21) = unaff_XMM8_Qa;
  *(undefined8 *)(&stack0x000280f8 + lVar21) = unaff_XMM8_Qb;
  *(undefined8 *)(&stack0x000280e0 + lVar21) = unaff_XMM7_Qa;
  *(undefined8 *)(&stack0x000280e8 + lVar21) = unaff_XMM7_Qb;
  *(undefined8 *)(&stack0x000280d0 + lVar21) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x000280d8 + lVar21) = unaff_XMM6_Qb;
  uVar20 = *(uint *)(param_1 + 0x54);
  if (1 < (int)uVar20) {
    iVar14 = *(int *)(param_1 + 0xb8);
    lVar23 = *(longlong *)(param_1 + 0x58);
    auVar37 = ZEXT416((uint)((*(float *)(param_1 + 8) * (float)iVar14) /
                             (_DAT_145fc6ed8 - *(float *)(param_1 + 8)) + _DAT_145fc6edc));
    auVar37 = vroundss_avx(auVar37,auVar37,9);
    iVar31 = 1;
    if (1 < (int)auVar37._0_4_) {
      iVar31 = (int)auVar37._0_4_;
    }
    lVar28 = *(longlong *)(param_1 + 0x48);
    uVar34 = 0;
    uVar33 = 0;
    iVar35 = 0;
    do {
      if ((~*(uint *)(lVar28 + uVar34 * 4) & 0x1ffff) == 0) {
        if (iVar35 < iVar31) {
          iVar35 = iVar35 + 1;
          goto LAB_140196efc;
        }
      }
      else {
LAB_140196efc:
        lVar36 = (longlong)(int)uVar33;
        uVar33 = uVar33 + 1;
        *(undefined4 *)(&stack0x000080d0 + lVar36 * 8 + lVar21) =
             *(undefined4 *)(lVar23 + uVar34 * 4);
        *(short *)(&stack0x000080d4 + lVar36 * 8 + lVar21) = (short)uVar34;
      }
      uVar34 = uVar34 + 1;
    } while (uVar20 != uVar34);
    uVar19 = *(uint *)(param_1 + 0x40);
    uVar32 = iVar31 + iVar14;
    puVar30 = (uint *)(param_1 + 0x40);
    if ((int)uVar19 <= (int)uVar32) {
      uVar32 = uVar19;
    }
    if ((int)uVar33 < (int)uVar32) {
      uVar25 = *(uint *)(param_1 + 0x44);
      *(uint **)(&stack0xfffffffffffffff0 + lVar21) = puVar30;
      if (uVar25 < uVar32) {
        if (uVar19 < uVar32) {
          *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x14019842f;
          FUN_14571fe80(*(undefined8 *)(&stack0xfffffffffffffff0 + lVar21));
          auVar122 = in_ZMM4._0_32_;
          auVar109 = in_ZMM10._0_32_;
          uVar25 = *(uint *)(param_1 + 0x44);
          lVar28 = *(longlong *)(param_1 + 0x48);
        }
        auVar38 = auVar122._0_16_;
        if (uVar25 != uVar32) {
          auVar133._8_8_ = _DAT_145f437c0;
          auVar133._0_8_ = _DAT_145f437c0;
          auVar133._16_8_ = _DAT_145f437c0;
          auVar133._24_8_ = _DAT_145f437c0;
          auVar48 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
          auVar127._4_4_ = _DAT_146159fe0;
          auVar127._0_4_ = _DAT_146159fe0;
          auVar127._8_4_ = _DAT_146159fe0;
          auVar127._12_4_ = _DAT_146159fe0;
          auVar127._16_4_ = _DAT_146159fe0;
          auVar127._20_4_ = _DAT_146159fe0;
          auVar127._24_4_ = _DAT_146159fe0;
          auVar127._28_4_ = _DAT_146159fe0;
          auVar122 = vpcmpeqd_avx2(auVar122,auVar122);
          auVar38 = auVar122._0_16_;
          pauVar24 = (undefined1 (*) [32])(lVar28 + (ulonglong)uVar25 * 4);
          uVar26 = ((ulonglong)uVar32 * 4 + (ulonglong)uVar25 * -4) - 4;
          auVar109._8_8_ = uVar26;
          auVar109._0_8_ = uVar26;
          auVar109._16_8_ = uVar26;
          auVar109._24_8_ = uVar26;
          auVar109 = vpsrlq_avx2(auVar109,2);
          auVar136 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
          auVar49 = vpor_avx2(auVar109,auVar133);
          uVar34 = 0;
          do {
            auVar129._8_8_ = 0;
            auVar129._0_8_ = *pauVar24 + 0xc;
            auVar37._8_8_ = 0;
            auVar37._0_8_ = *pauVar24 + 8;
            auVar129 = vpunpcklqdq_avx(auVar37,auVar129);
            auVar139._8_8_ = 0;
            auVar139._0_8_ = pauVar24;
            auVar145._8_8_ = 0;
            auVar145._0_8_ = *pauVar24 + 4;
            auVar37 = vpunpcklqdq_avx(auVar139,auVar145);
            auVar139 = ZEXT116(0) * auVar129 | ZEXT116(1) * auVar37;
            auVar140._8_8_ = 0;
            auVar140._0_8_ = *pauVar24 + 0x1c;
            auVar146._8_8_ = 0;
            auVar146._0_8_ = *pauVar24 + 0x18;
            auVar37 = vpunpcklqdq_avx(auVar146,auVar140);
            auVar131._0_8_ = -(ulonglong)(auVar139._0_8_ == 0);
            auVar131._8_8_ = -(ulonglong)(auVar139._8_8_ == 0);
            auVar131._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar129,0) == 0);
            auVar131._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar129,8) == 0);
            auVar147._8_8_ = 0;
            auVar147._0_8_ = *pauVar24 + 0x14;
            auVar152._8_8_ = 0;
            auVar152._0_8_ = *pauVar24 + 0x10;
            auVar129 = vpunpcklqdq_avx(auVar152,auVar147);
            auVar129 = ZEXT116(0) * auVar37 | ZEXT116(1) * auVar129;
            uVar27 = uVar34 + 8;
            auVar135._0_8_ = -(ulonglong)(auVar129._0_8_ == 0);
            auVar135._8_8_ = -(ulonglong)(auVar129._8_8_ == 0);
            auVar135._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar37,0) == 0);
            auVar135._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar37,8) == 0);
            auVar143._8_8_ = uVar34;
            auVar143._0_8_ = uVar34;
            auVar143._16_8_ = uVar34;
            auVar143._24_8_ = uVar34;
            auVar131 = vpackssdw_avx2(auVar131,auVar135);
            auVar135 = vpor_avx2(auVar143,auVar136);
            auVar109 = vpor_avx2(auVar143,auVar48);
            auVar109 = vpcmpgtq_avx2(auVar109 ^ auVar133,auVar49);
            auVar135 = vpcmpgtq_avx2(auVar135 ^ auVar133,auVar49);
            auVar109 = vpackssdw_avx2(auVar135,auVar109);
            auVar129 = vpackssdw_avx(SUB3216(auVar109 ^ auVar122,0),
                                     SUB3216(auVar109 ^ auVar122,0x10));
            auVar37 = SUB3216(auVar131 ^ auVar122,0x10);
            auVar109 = ZEXT1632(auVar37);
            auVar37 = vpackssdw_avx(SUB3216(auVar131 ^ auVar122,0),auVar37);
            auVar129 = vpand_avx(auVar129,auVar37);
            auVar129 = vpshufd_avx(auVar129,0xd8);
            auVar131 = vpmovzxwd_avx2(auVar129);
            auVar131 = vpslld_avx2(auVar131,0x1f);
            auVar131 = vpmaskmovd_avx2(auVar131,auVar127);
            *pauVar24 = auVar131;
            pauVar24 = pauVar24 + 1;
            uVar34 = uVar27;
          } while (((uVar26 >> 2) + 8 & 0xfffffffffffffff8) != uVar27);
        }
      }
      *(uint *)(param_1 + 0x44) = uVar32;
      if ((*(uint *)(param_1 + 0x54) < uVar32) && (*(uint *)(param_1 + 0x50) < uVar32)) {
        auVar124 = ZEXT1664(auVar38);
        auVar151 = ZEXT1664(auVar109._0_16_);
        *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x1401970c4;
        uVar22 = func_0x000144d9c140(4);
        uVar19 = *(uint *)(param_1 + 0x54);
        if ((ulonglong)uVar19 != 0) {
          uVar15 = *(undefined8 *)(param_1 + 0x58);
          *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x1401970e0;
          func_0x000145f40560(uVar22,uVar15,(ulonglong)uVar19 << 2);
        }
        auVar38 = auVar124._0_16_;
        auVar109 = auVar151._0_32_;
        if (*(longlong *)(param_1 + 0x58) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x1401970ee;
          func_0x000144d9c130();
          auVar38 = auVar124._0_16_;
          auVar109 = auVar151._0_32_;
        }
        *(undefined8 *)(param_1 + 0x58) = uVar22;
        *(uint *)(param_1 + 0x50) = uVar32;
      }
      *(uint *)(param_1 + 0x54) = uVar32;
      if ((*(uint *)(param_1 + 100) < uVar32) && (*(uint *)(param_1 + 0x60) < uVar32)) {
        auVar124 = ZEXT1664(auVar38);
        auVar151 = ZEXT1664(auVar109._0_16_);
        *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x140197117;
        uVar22 = func_0x000144d9c140(4);
        uVar19 = *(uint *)(param_1 + 100);
        if ((ulonglong)uVar19 != 0) {
          uVar15 = *(undefined8 *)(param_1 + 0x68);
          *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x140197133;
          func_0x000145f40560(uVar22,uVar15,(ulonglong)uVar19 << 2);
        }
        auVar38 = auVar124._0_16_;
        auVar109 = auVar151._0_32_;
        if (*(longlong *)(param_1 + 0x68) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x140197141;
          func_0x000144d9c130();
          auVar38 = auVar124._0_16_;
          auVar109 = auVar151._0_32_;
        }
        *(undefined8 *)(param_1 + 0x68) = uVar22;
        *(uint *)(param_1 + 0x60) = uVar32;
      }
      *(uint *)(param_1 + 100) = uVar32;
      if ((*(uint *)(param_1 + 0x74) < uVar32) && (*(uint *)(param_1 + 0x70) < uVar32)) {
        auVar124 = ZEXT1664(auVar38);
        auVar151 = ZEXT1664(auVar109._0_16_);
        *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x14019716a;
        uVar22 = func_0x000144d9c140(4);
        uVar19 = *(uint *)(param_1 + 0x74);
        if ((ulonglong)uVar19 != 0) {
          uVar15 = *(undefined8 *)(param_1 + 0x78);
          *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x140197186;
          func_0x000145f40560(uVar22,uVar15,(ulonglong)uVar19 << 2);
        }
        auVar38 = auVar124._0_16_;
        auVar109 = auVar151._0_32_;
        if (*(longlong *)(param_1 + 0x78) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x140197194;
          func_0x000144d9c130();
          auVar38 = auVar124._0_16_;
          auVar109 = auVar151._0_32_;
        }
        *(undefined8 *)(param_1 + 0x78) = uVar22;
        *(uint *)(param_1 + 0x70) = uVar32;
      }
      *(uint *)(param_1 + 0x74) = uVar32;
      if ((*(uint *)(param_1 + 0x84) < uVar32) && (*(uint *)(param_1 + 0x80) < uVar32)) {
        auVar124 = ZEXT1664(auVar38);
        auVar151 = ZEXT1664(auVar109._0_16_);
        *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x140198408;
        FUN_145791040(param_1 + 0x80);
        auVar109 = auVar151._0_32_;
        auVar38 = auVar124._0_16_;
      }
      auVar129 = auVar109._0_16_;
      *(uint *)(param_1 + 0x84) = uVar32;
      uVar19 = *(uint *)(param_1 + 0x94);
      if (uVar19 < uVar32) {
        if (*(uint *)(param_1 + 0x90) < uVar32) {
          auVar124 = ZEXT1664(auVar38);
          auVar151 = ZEXT1664(auVar129);
          *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x140198457;
          FUN_145ba7050();
          auVar109 = auVar151._0_32_;
          auVar38 = auVar124._0_16_;
          uVar19 = *(uint *)(param_1 + 0x94);
        }
        auVar129 = auVar109._0_16_;
        if (uVar19 != uVar32) {
          auVar136._8_8_ = _DAT_145f437c0;
          auVar136._0_8_ = _DAT_145f437c0;
          auVar136._16_8_ = _DAT_145f437c0;
          auVar136._24_8_ = _DAT_145f437c0;
          lVar28 = 0;
          auVar122 = vpcmpeqd_avx2(auVar109,auVar109);
          auVar129 = auVar122._0_16_;
          lVar36 = (ulonglong)uVar32 - (ulonglong)uVar19;
          lVar29 = lVar36 + -1;
          lVar23 = *(longlong *)(param_1 + 0x98) + (ulonglong)uVar19;
          *(ulonglong *)(&stack0x000000c8 + lVar21) = lVar36 + 0x1fU & 0xffffffffffffffe0;
          auVar48._8_8_ = lVar29;
          auVar48._0_8_ = lVar29;
          auVar48._16_8_ = lVar29;
          auVar48._24_8_ = lVar29;
          auVar48 = auVar136 ^ auVar48;
          do {
            uVar34 = lVar23 + 2 + lVar28;
            uVar26 = lVar23 + 3 + lVar28;
            uVar27 = lVar23 + 1 + lVar28;
            uVar1 = lVar23 + 7 + lVar28;
            uVar2 = lVar23 + 4 + lVar28;
            uVar3 = lVar23 + 10 + lVar28;
            *(longlong *)(&stack0x000000b8 + lVar21) = lVar23 + 5 + lVar28;
            *(ulonglong *)(&stack0x00000030 + lVar21) = uVar1;
            *(longlong *)((longlong)auStackX_8 + lVar21) = lVar23 + lVar28;
            *(longlong *)(&stack0xffffffffffffffe0 + lVar21) = lVar23 + 0xd + lVar28;
            *(ulonglong *)((longlong)auStackX_8 + lVar21 + 0x10) = uVar34;
            puVar4 = (undefined1 *)(lVar23 + 0xc + lVar28);
            *(ulonglong *)((longlong)auStackX_8 + lVar21 + 0x18) = uVar26;
            uVar5 = lVar23 + 0x12 + lVar28;
            *(ulonglong *)(&stack0x00000038 + lVar21) = uVar3;
            *(ulonglong *)((longlong)auStackX_8 + lVar21 + 8) = uVar27;
            *(ulonglong *)(&stack0x00000028 + lVar21) = uVar2;
            *(longlong *)(&stack0xfffffffffffffff8 + lVar21) = lVar23 + 6 + lVar28;
            *(longlong *)(&stack0xffffffffffffffe8 + lVar21) = lVar23 + 0xe + lVar28;
            uVar6 = lVar23 + 0xf + lVar28;
            *(ulonglong *)(&stack0x00000050 + lVar21) = uVar5;
            *(longlong *)((longlong)auStackX_8 + lVar21 + -8) = lVar23 + 8 + lVar28;
            *(ulonglong *)(&stack0x00000070 + lVar21) = uVar6;
            auVar38._8_8_ = 0;
            auVar38._0_8_ = uVar26;
            auVar52._8_8_ = 0;
            auVar52._0_8_ = uVar34;
            auVar38 = vpunpcklqdq_avx(auVar52,auVar38);
            *(longlong *)(&stack0x000000c0 + lVar21) = lVar23 + 9 + lVar28;
            uVar34 = lVar23 + 0xb + lVar28;
            puVar7 = (undefined1 *)(lVar23 + 0x11 + lVar28);
            puVar16 = *(undefined1 **)(&stack0x000000c0 + lVar21);
            *(ulonglong *)(&stack0x00000040 + lVar21) = uVar34;
            auVar53._8_8_ = 0;
            auVar53._0_8_ = uVar27;
            auVar78._8_8_ = 0;
            auVar78._0_8_ = lVar23 + lVar28;
            auVar37 = vpunpcklqdq_avx(auVar78,auVar53);
            uVar26 = lVar23 + 0x16 + lVar28;
            auVar147 = ZEXT116(0) * auVar38 | ZEXT116(1) * auVar37;
            puVar17 = *(undefined1 **)(&stack0x000000b8 + lVar21);
            *(ulonglong *)(&stack0x00000068 + lVar21) = uVar26;
            auVar39._8_8_ = 0;
            auVar39._0_8_ = uVar1;
            auVar54._8_8_ = 0;
            auVar54._0_8_ = *(ulonglong *)(&stack0xfffffffffffffff8 + lVar21);
            auVar37 = vpunpcklqdq_avx(auVar54,auVar39);
            auVar55._8_8_ = 0;
            auVar55._0_8_ = puVar17;
            auVar79._8_8_ = 0;
            auVar79._0_8_ = uVar2;
            auVar139 = vpunpcklqdq_avx(auVar79,auVar55);
            auVar152 = ZEXT116(0) * auVar37 | ZEXT116(1) * auVar139;
            puVar8 = (undefined1 *)(lVar23 + 0x13 + lVar28);
            puVar9 = (undefined1 *)(lVar23 + 0x10 + lVar28);
            auVar40._8_8_ = 0;
            auVar40._0_8_ = uVar34;
            auVar56._8_8_ = 0;
            auVar56._0_8_ = uVar3;
            auVar139 = vpunpcklqdq_avx(auVar56,auVar40);
            auVar57._8_8_ = 0;
            auVar57._0_8_ = puVar16;
            auVar80._8_8_ = 0;
            auVar80._0_8_ = *(ulonglong *)((longlong)auStackX_8 + lVar21 + -8);
            auVar140 = vpunpcklqdq_avx(auVar80,auVar57);
            auVar39 = ZEXT116(0) * auVar139 | ZEXT116(1) * auVar140;
            uVar34 = lVar23 + 0x14 + lVar28;
            *(ulonglong *)(&stack0x00000048 + lVar21) = uVar34;
            uVar27 = lVar23 + 0x18 + lVar28;
            *(ulonglong *)(&stack0x00000060 + lVar21) = uVar27;
            auVar41._8_8_ = 0;
            auVar41._0_8_ = uVar6;
            auVar58._8_8_ = 0;
            auVar58._0_8_ = *(ulonglong *)(&stack0xffffffffffffffe8 + lVar21);
            auVar140 = vpunpcklqdq_avx(auVar58,auVar41);
            auVar59._8_8_ = 0;
            auVar59._0_8_ = *(ulonglong *)(&stack0xffffffffffffffe0 + lVar21);
            auVar81._8_8_ = 0;
            auVar81._0_8_ = puVar4;
            auVar145 = vpunpcklqdq_avx(auVar81,auVar59);
            auVar40 = ZEXT116(0) * auVar140 | ZEXT116(1) * auVar145;
            uVar1 = lVar23 + 0x17 + lVar28;
            *(ulonglong *)(&stack0x00000080 + lVar21) = uVar1;
            auVar42._8_8_ = 0;
            auVar42._0_8_ = puVar8;
            auVar60._8_8_ = 0;
            auVar60._0_8_ = uVar5;
            auVar145 = vpunpcklqdq_avx(auVar60,auVar42);
            auVar61._8_8_ = 0;
            auVar61._0_8_ = puVar7;
            auVar82._8_8_ = 0;
            auVar82._0_8_ = puVar9;
            auVar146 = vpunpcklqdq_avx(auVar82,auVar61);
            uVar2 = lVar23 + 0x1a + lVar28;
            auVar146 = ZEXT116(0) * auVar145 | ZEXT116(1) * auVar146;
            uVar3 = lVar23 + 0x15 + lVar28;
            *(ulonglong *)(&stack0x00000090 + lVar21) = uVar2;
            *(ulonglong *)(&stack0x00000058 + lVar21) = uVar3;
            auVar49._0_8_ = -(ulonglong)(auVar146._0_8_ == 0);
            auVar49._8_8_ = -(ulonglong)(auVar146._8_8_ == 0);
            auVar49._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar145,0) == 0);
            auVar49._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar145,8) == 0);
            auVar62._8_8_ = 0;
            auVar62._0_8_ = uVar1;
            auVar83._8_8_ = 0;
            auVar83._0_8_ = uVar26;
            auVar145 = vpunpcklqdq_avx(auVar83,auVar62);
            uVar26 = lVar23 + 0x1b + lVar28;
            *(ulonglong *)(&stack0x000000a0 + lVar21) = uVar26;
            auVar84._8_8_ = 0;
            auVar84._0_8_ = uVar3;
            auVar101._8_8_ = 0;
            auVar101._0_8_ = uVar34;
            auVar146 = vpunpcklqdq_avx(auVar101,auVar84);
            uVar34 = lVar23 + 0x1e + lVar28;
            auVar146 = ZEXT116(0) * auVar145 | ZEXT116(1) * auVar146;
            uVar1 = lVar23 + 0x19 + lVar28;
            *(ulonglong *)(&stack0x000000a8 + lVar21) = uVar34;
            *(ulonglong *)(&stack0x00000078 + lVar21) = uVar1;
            auVar74._0_8_ = -(ulonglong)(auVar146._0_8_ == 0);
            auVar74._8_8_ = -(ulonglong)(auVar146._8_8_ == 0);
            auVar74._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar145,0) == 0);
            auVar74._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar145,8) == 0);
            auVar85._8_8_ = 0;
            auVar85._0_8_ = uVar26;
            auVar102._8_8_ = 0;
            auVar102._0_8_ = uVar2;
            auVar145 = vpunpcklqdq_avx(auVar102,auVar85);
            uVar26 = lVar23 + 0x1f + lVar28;
            auVar109 = vpackssdw_avx2(auVar49,auVar74);
            *(ulonglong *)(&stack0x000000b0 + lVar21) = uVar26;
            auVar49 = vpermq_avx2(auVar109,0xd8);
            auVar103._8_8_ = 0;
            auVar103._0_8_ = uVar1;
            auVar115._8_8_ = 0;
            auVar115._0_8_ = uVar27;
            auVar146 = vpunpcklqdq_avx(auVar115,auVar103);
            auVar146 = ZEXT116(0) * auVar145 | ZEXT116(1) * auVar146;
            uVar27 = lVar23 + 0x1d + lVar28;
            *(ulonglong *)(&stack0x00000098 + lVar21) = uVar27;
            auVar94._0_8_ = -(ulonglong)(auVar146._0_8_ == 0);
            auVar94._8_8_ = -(ulonglong)(auVar146._8_8_ == 0);
            auVar94._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar145,0) == 0);
            auVar94._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar145,8) == 0);
            auVar104._8_8_ = 0;
            auVar104._0_8_ = uVar26;
            auVar116._8_8_ = 0;
            auVar116._0_8_ = uVar34;
            auVar145 = vpunpcklqdq_avx(auVar116,auVar104);
            uVar34 = lVar23 + 0x1c + lVar28;
            *(ulonglong *)(&stack0x00000088 + lVar21) = uVar34;
            auVar117._8_8_ = 0;
            auVar117._0_8_ = uVar27;
            auVar125._8_8_ = 0;
            auVar125._0_8_ = uVar34;
            auVar146 = vpunpcklqdq_avx(auVar125,auVar117);
            auVar146 = ZEXT116(0) * auVar145 | ZEXT116(1) * auVar146;
            auVar110._0_8_ = -(ulonglong)(auVar146._0_8_ == 0);
            auVar110._8_8_ = -(ulonglong)(auVar146._8_8_ == 0);
            auVar110._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar145,0) == 0);
            auVar110._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar145,8) == 0);
            auVar121._8_8_ = lVar28;
            auVar121._0_8_ = lVar28;
            auVar121._16_8_ = lVar28;
            auVar121._24_8_ = lVar28;
            auVar133 = vpor_avx2(auVar121,_DAT_145fc3d00);
            auVar127 = vpor_avx2(auVar121,_DAT_145fc3ce0);
            auVar131 = vpor_avx2(auVar121,_DAT_145f43780);
            auVar109 = vpackssdw_avx2(auVar94,auVar110);
            auVar111._0_8_ = -(ulonglong)(auVar147._0_8_ == 0);
            auVar111._8_8_ = -(ulonglong)(auVar147._8_8_ == 0);
            auVar111._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar38,0) == 0);
            auVar111._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar38,8) == 0);
            auVar109 = vpermq_avx2(auVar109,0xd8);
            auVar95._0_8_ = -(ulonglong)(auVar39._0_8_ == 0);
            auVar95._8_8_ = -(ulonglong)(auVar39._8_8_ == 0);
            auVar95._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar139,0) == 0);
            auVar95._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar139,8) == 0);
            auVar109 = vpackssdw_avx2(auVar122 ^ auVar49,auVar122 ^ auVar109);
            auVar75._0_8_ = -(ulonglong)(auVar40._0_8_ == 0);
            auVar75._8_8_ = -(ulonglong)(auVar40._8_8_ == 0);
            auVar75._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar140,0) == 0);
            auVar75._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar140,8) == 0);
            auVar49 = vpackssdw_avx2(auVar95,auVar75);
            auVar96._0_8_ = -(ulonglong)(auVar152._0_8_ == 0);
            auVar96._8_8_ = -(ulonglong)(auVar152._8_8_ == 0);
            auVar96._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar37,0) == 0);
            auVar96._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar37,8) == 0);
            auVar135 = vpermq_avx2(auVar109,0xd8);
            auVar109 = vpackssdw_avx2(auVar111,auVar96);
            auVar143 = vpermq_avx2(auVar49,0xd8);
            auVar74 = vpermq_avx2(auVar109,0xd8);
            auVar109 = vpcmpgtq_avx2(auVar136 ^ auVar127,auVar48);
            auVar49 = vpcmpgtq_avx2(auVar136 ^ auVar133,auVar48);
            auVar133 = vpcmpgtq_avx2(auVar136 ^ auVar131,auVar48);
            auVar109 = vpackssdw_avx2(auVar49,auVar109);
            auVar127 = vpor_avx2(auVar121,_DAT_145f437a0);
            auVar49 = vpackssdw_avx2(auVar122 ^ auVar74,auVar122 ^ auVar143);
            auVar131 = vpermq_avx2(auVar109,0xd8);
            auVar109 = vpermq_avx2(auVar49,0xd8);
            auVar109 = vpacksswb_avx2(auVar109,auVar135);
            auVar49 = vpcmpgtq_avx2(auVar136 ^ auVar127,auVar48);
            auVar49 = vpackssdw_avx2(auVar133,auVar49);
            auVar133 = vpor_avx2(auVar121,_DAT_145fc3ca0);
            auVar49 = vpermq_avx2(auVar49,0xd8);
            auVar49 = vpackssdw_avx2(auVar122 ^ auVar49,auVar122 ^ auVar131);
            auVar127 = vpor_avx2(auVar121,_DAT_145fc3cc0);
            auVar131 = vpermq_avx2(auVar49,0xd8);
            auVar49 = vpcmpgtq_avx2(auVar136 ^ auVar133,auVar48);
            auVar133 = vpcmpgtq_avx2(auVar136 ^ auVar127,auVar48);
            auVar49 = vpackssdw_avx2(auVar133,auVar49);
            auVar133 = vpor_avx2(auVar121,_DAT_145fc3c60);
            auVar127 = vpor_avx2(auVar121,_DAT_145fc3c80);
            auVar135 = vpermq_avx2(auVar49,0xd8);
            auVar49 = vpcmpgtq_avx2(auVar136 ^ auVar127,auVar48);
            auVar133 = vpcmpgtq_avx2(auVar136 ^ auVar133,auVar48);
            auVar49 = vpackssdw_avx2(auVar49,auVar133);
            auVar49 = vpermq_avx2(auVar49,0xd8);
            auVar49 = vpackssdw_avx2(auVar122 ^ auVar135,auVar122 ^ auVar49);
            auVar49 = vpermq_avx2(auVar49,0xd8);
            auVar49 = vpacksswb_avx2(auVar131,auVar49);
            auVar38 = auVar49._0_16_;
            auVar109 = vpand_avx2(auVar49,auVar109);
            if ((auVar109._0_4_ & 1) != 0) {
              **(undefined1 **)((longlong)auStackX_8 + lVar21) = 0;
            }
            auVar109 = vpermq_avx2(auVar109,0xd8);
            if ((auVar109[1] & 1) != 0) {
              **(undefined1 **)((longlong)auStackX_8 + lVar21 + 8) = 0;
            }
            if ((auVar109[2] & 1) != 0) {
              **(undefined1 **)((longlong)auStackX_8 + lVar21 + 0x10) = 0;
            }
            if ((auVar109[3] & 1) != 0) {
              **(undefined1 **)((longlong)auStackX_8 + lVar21 + 0x18) = 0;
            }
            if ((auVar109[4] & 1) != 0) {
              **(undefined1 **)(&stack0x00000028 + lVar21) = 0;
            }
            if ((auVar109[5] & 1) != 0) {
              *puVar17 = 0;
            }
            if ((auVar109[6] & 1) != 0) {
              **(undefined1 **)(&stack0xfffffffffffffff8 + lVar21) = 0;
            }
            if ((auVar109[7] & 1) != 0) {
              **(undefined1 **)(&stack0x00000030 + lVar21) = 0;
            }
            if ((auVar109[8] & 1) != 0) {
              **(undefined1 **)((longlong)auStackX_8 + lVar21 + -8) = 0;
            }
            if ((auVar109[9] & 1) != 0) {
              *puVar16 = 0;
            }
            if ((auVar109[10] & 1) != 0) {
              **(undefined1 **)(&stack0x00000038 + lVar21) = 0;
            }
            if ((auVar109[0xb] & 1) != 0) {
              **(undefined1 **)(&stack0x00000040 + lVar21) = 0;
            }
            if ((auVar109[0xc] & 1) != 0) {
              *puVar4 = 0;
            }
            if ((auVar109[0xd] & 1) != 0) {
              **(undefined1 **)(&stack0xffffffffffffffe0 + lVar21) = 0;
            }
            if ((auVar109[0xe] & 1) != 0) {
              **(undefined1 **)(&stack0xffffffffffffffe8 + lVar21) = 0;
            }
            if ((auVar109[0xf] & 1) != 0) {
              **(undefined1 **)(&stack0x00000070 + lVar21) = 0;
            }
            if ((auVar109._16_4_ & 1) != 0) {
              *puVar9 = 0;
            }
            if ((auVar109[0x11] & 1) != 0) {
              *puVar7 = 0;
            }
            if ((auVar109[0x12] & 1) != 0) {
              **(undefined1 **)(&stack0x00000050 + lVar21) = 0;
            }
            if ((auVar109[0x13] & 1) != 0) {
              *puVar8 = 0;
            }
            if ((auVar109[0x14] & 1) != 0) {
              **(undefined1 **)(&stack0x00000048 + lVar21) = 0;
            }
            if ((auVar109[0x15] & 1) != 0) {
              **(undefined1 **)(&stack0x00000058 + lVar21) = 0;
            }
            if ((auVar109[0x16] & 1) != 0) {
              **(undefined1 **)(&stack0x00000068 + lVar21) = 0;
            }
            if ((auVar109[0x17] & 1) != 0) {
              **(undefined1 **)(&stack0x00000080 + lVar21) = 0;
            }
            if ((auVar109[0x18] & 1) != 0) {
              **(undefined1 **)(&stack0x00000060 + lVar21) = 0;
            }
            if ((auVar109[0x19] & 1) != 0) {
              **(undefined1 **)(&stack0x00000078 + lVar21) = 0;
            }
            if ((auVar109[0x1a] & 1) != 0) {
              **(undefined1 **)(&stack0x00000090 + lVar21) = 0;
            }
            if ((auVar109[0x1b] & 1) != 0) {
              **(undefined1 **)(&stack0x000000a0 + lVar21) = 0;
            }
            if ((auVar109[0x1c] & 1) != 0) {
              **(undefined1 **)(&stack0x00000088 + lVar21) = 0;
            }
            if ((auVar109[0x1d] & 1) != 0) {
              **(undefined1 **)(&stack0x00000098 + lVar21) = 0;
            }
            if ((auVar109[0x1e] & 1) != 0) {
              **(undefined1 **)(&stack0x000000a8 + lVar21) = 0;
            }
            if ((auVar109[0x1f] & 1) != 0) {
              **(undefined1 **)(&stack0x000000b0 + lVar21) = 0;
            }
            lVar28 = lVar28 + 0x20;
          } while (*(longlong *)(&stack0x000000c8 + lVar21) != lVar28);
        }
      }
      fVar18 = (float)(int)uVar20 * _DAT_14615a3a8;
      *(uint *)(param_1 + 0x94) = uVar32;
      uVar34 = (ulonglong)(int)uVar32;
      lVar23 = *(longlong *)(param_1 + 0x58);
      uVar26 = (longlong)(int)uVar33;
      do {
        uVar27 = uVar26 + 1;
        _DAT_146df5b88 = (_DAT_146df5b88 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_146df5b88 >> 0x20);
        uVar13 = *(undefined4 *)
                  (lVar23 + (ulonglong)(uint)(int)(fVar18 * (float)((uint)_DAT_146df5b88 & 0x7fff))
                            * 4);
        *(undefined4 *)(lVar23 + (uVar26 & 0xffffffff) * 4) = uVar13;
        *(undefined4 *)(&stack0x000080d0 + uVar26 * 8 + lVar21) = uVar13;
        *(short *)(&stack0x000080d4 + uVar26 * 8 + lVar21) = (short)uVar26;
        uVar26 = uVar27;
      } while (uVar34 != uVar27);
      puVar30 = *(uint **)(&stack0xfffffffffffffff0 + lVar21);
      uVar33 = uVar32;
    }
    else {
      uVar34 = (ulonglong)(int)uVar33;
    }
    auVar124 = ZEXT1664(auVar38);
    auVar151 = ZEXT1664(auVar129);
    *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x140197940;
    FUN_1454061e0(&stack0x000080d0 + lVar21,&stack0x000080d0 + uVar34 * 8 + lVar21);
    uVar34 = (ulonglong)uVar33;
    if (0 < (int)uVar33) {
      uVar26 = 0;
      do {
        *(undefined2 *)(&stack0x000000d0 + uVar26 * 2 + lVar21) =
             *(undefined2 *)(&stack0x000080d4 + uVar26 * 8 + lVar21);
        uVar26 = uVar26 + 1;
      } while (uVar34 != uVar26);
    }
    uVar22 = *(undefined8 *)(param_1 + 0x48);
    puVar4 = &stack0x000000d0 + lVar21;
    *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x140197977;
    FUN_1455c9b90(puVar4,uVar33,uVar22);
    uVar22 = *(undefined8 *)(param_1 + 0x58);
    *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x140197985;
    FUN_1455c9ca0(puVar4,uVar33,uVar22);
    uVar22 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x140197993;
    FUN_1455c9ca0(puVar4,uVar33,uVar22);
    uVar22 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x1401979a1;
    FUN_1455c9ca0(puVar4,uVar33,uVar22);
    uVar22 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x1401979b2;
    FUN_1455c9dc0(puVar4,uVar33,uVar22);
    uVar22 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x1401979c3;
    FUN_1455ca010(puVar4,uVar33,uVar22);
    auVar109 = auVar151._0_32_;
    auVar122 = auVar124._0_32_;
    if ((int)uVar33 < (int)uVar20) {
      uVar20 = *(uint *)(param_1 + 0x44);
      if (uVar20 < uVar33) {
        if (*puVar30 < uVar33) {
          *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x140198445;
          FUN_14571fe80(puVar30);
          auVar109 = auVar151._0_32_;
          auVar122 = auVar124._0_32_;
          uVar20 = *(uint *)(param_1 + 0x44);
        }
        if (uVar20 != uVar33) {
          auVar97._8_8_ = _DAT_145f437c0;
          auVar97._0_8_ = _DAT_145f437c0;
          auVar97._16_8_ = _DAT_145f437c0;
          auVar97._24_8_ = _DAT_145f437c0;
          auVar48 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
          auVar128._4_4_ = _DAT_146159fe0;
          auVar128._0_4_ = _DAT_146159fe0;
          auVar128._8_4_ = _DAT_146159fe0;
          auVar128._12_4_ = _DAT_146159fe0;
          auVar128._16_4_ = _DAT_146159fe0;
          auVar128._20_4_ = _DAT_146159fe0;
          auVar128._24_4_ = _DAT_146159fe0;
          auVar128._28_4_ = _DAT_146159fe0;
          auVar122 = vpcmpeqd_avx2(auVar122,auVar122);
          pauVar24 = (undefined1 (*) [32])((ulonglong)uVar20 * 4 + *(longlong *)(param_1 + 0x48));
          uVar26 = (uVar34 - uVar20) + 0x3fffffffffffffff;
          uVar27 = uVar26 & 0x3fffffffffffffff;
          auVar112._8_8_ = uVar27;
          auVar112._0_8_ = uVar27;
          auVar112._16_8_ = uVar27;
          auVar112._24_8_ = uVar27;
          auVar136 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
          auVar49 = vpor_avx2(auVar112,auVar97);
          lVar23 = 0;
          do {
            auVar130._8_8_ = 0;
            auVar130._0_8_ = *pauVar24 + 0xc;
            auVar134._8_8_ = 0;
            auVar134._0_8_ = *pauVar24 + 8;
            auVar38 = vpunpcklqdq_avx(auVar134,auVar130);
            auVar141._8_8_ = 0;
            auVar141._0_8_ = pauVar24;
            auVar148._8_8_ = 0;
            auVar148._0_8_ = *pauVar24 + 4;
            auVar129 = vpunpcklqdq_avx(auVar141,auVar148);
            auVar37 = ZEXT116(0) * auVar38 | ZEXT116(1) * auVar129;
            auVar142._8_8_ = 0;
            auVar142._0_8_ = *pauVar24 + 0x1c;
            auVar149._8_8_ = 0;
            auVar149._0_8_ = *pauVar24 + 0x18;
            auVar129 = vpunpcklqdq_avx(auVar149,auVar142);
            auVar132._0_8_ = -(ulonglong)(auVar37._0_8_ == 0);
            auVar132._8_8_ = -(ulonglong)(auVar37._8_8_ == 0);
            auVar132._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar38,0) == 0);
            auVar132._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar38,8) == 0);
            auVar150._8_8_ = 0;
            auVar150._0_8_ = *pauVar24 + 0x14;
            auVar153._8_8_ = 0;
            auVar153._0_8_ = *pauVar24 + 0x10;
            auVar38 = vpunpcklqdq_avx(auVar153,auVar150);
            auVar38 = ZEXT116(0) * auVar129 | ZEXT116(1) * auVar38;
            lVar28 = lVar23 + 8;
            auVar137._0_8_ = -(ulonglong)(auVar38._0_8_ == 0);
            auVar137._8_8_ = -(ulonglong)(auVar38._8_8_ == 0);
            auVar137._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar129,0) == 0);
            auVar137._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar129,8) == 0);
            auVar144._8_8_ = lVar23;
            auVar144._0_8_ = lVar23;
            auVar144._16_8_ = lVar23;
            auVar144._24_8_ = lVar23;
            auVar133 = vpackssdw_avx2(auVar132,auVar137);
            auVar127 = vpor_avx2(auVar144,auVar136);
            auVar109 = vpor_avx2(auVar144,auVar48);
            auVar109 = vpcmpgtq_avx2(auVar109 ^ auVar97,auVar49);
            auVar127 = vpcmpgtq_avx2(auVar127 ^ auVar97,auVar49);
            auVar109 = vpackssdw_avx2(auVar127,auVar109);
            auVar38 = vpackssdw_avx(SUB3216(auVar109 ^ auVar122,0),SUB3216(auVar109 ^ auVar122,0x10)
                                   );
            auVar129 = SUB3216(auVar133 ^ auVar122,0x10);
            auVar109 = ZEXT1632(auVar129);
            auVar129 = vpackssdw_avx(SUB3216(auVar133 ^ auVar122,0),auVar129);
            auVar38 = vpand_avx(auVar38,auVar129);
            auVar38 = vpshufd_avx(auVar38,0xd8);
            auVar133 = vpmovzxwd_avx2(auVar38);
            auVar133 = vpslld_avx2(auVar133,0x1f);
            auVar133 = vpmaskmovd_avx2(auVar133,auVar128);
            *pauVar24 = auVar133;
            pauVar24 = pauVar24 + 1;
            lVar23 = lVar28;
          } while ((uVar27 + 8) - (ulonglong)((uint)uVar26 & 7) != lVar28);
        }
      }
      *(uint *)(param_1 + 0x44) = uVar33;
      if ((*(uint *)(param_1 + 0x54) < uVar33) && (*(uint *)(param_1 + 0x50) < uVar33)) {
        auVar124 = ZEXT1664(auVar109._0_16_);
        *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x140197b5a;
        uVar22 = func_0x000144d9c140(4);
        uVar20 = *(uint *)(param_1 + 0x54);
        if ((ulonglong)uVar20 != 0) {
          uVar15 = *(undefined8 *)(param_1 + 0x58);
          *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x140197b76;
          func_0x000145f40560(uVar22,uVar15,(ulonglong)uVar20 << 2);
        }
        auVar109 = auVar124._0_32_;
        if (*(longlong *)(param_1 + 0x58) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x140197b84;
          func_0x000144d9c130();
          auVar109 = auVar124._0_32_;
        }
        *(undefined8 *)(param_1 + 0x58) = uVar22;
        *(uint *)(param_1 + 0x50) = uVar33;
      }
      *(uint *)(param_1 + 0x54) = uVar33;
      if ((*(uint *)(param_1 + 100) < uVar33) && (*(uint *)(param_1 + 0x60) < uVar33)) {
        auVar124 = ZEXT1664(auVar109._0_16_);
        *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x140197bad;
        uVar22 = func_0x000144d9c140(4);
        uVar20 = *(uint *)(param_1 + 100);
        if ((ulonglong)uVar20 != 0) {
          uVar15 = *(undefined8 *)(param_1 + 0x68);
          *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x140197bc9;
          func_0x000145f40560(uVar22,uVar15,(ulonglong)uVar20 << 2);
        }
        auVar109 = auVar124._0_32_;
        if (*(longlong *)(param_1 + 0x68) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x140197bd7;
          func_0x000144d9c130();
          auVar109 = auVar124._0_32_;
        }
        *(undefined8 *)(param_1 + 0x68) = uVar22;
        *(uint *)(param_1 + 0x60) = uVar33;
      }
      *(uint *)(param_1 + 100) = uVar33;
      if ((*(uint *)(param_1 + 0x74) < uVar33) && (*(uint *)(param_1 + 0x70) < uVar33)) {
        auVar124 = ZEXT1664(auVar109._0_16_);
        *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x140197c00;
        uVar22 = func_0x000144d9c140(4);
        uVar20 = *(uint *)(param_1 + 0x74);
        if ((ulonglong)uVar20 != 0) {
          uVar15 = *(undefined8 *)(param_1 + 0x78);
          *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x140197c1c;
          func_0x000145f40560(uVar22,uVar15,(ulonglong)uVar20 << 2);
        }
        auVar109 = auVar124._0_32_;
        if (*(longlong *)(param_1 + 0x78) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x140197c2a;
          func_0x000144d9c130();
          auVar109 = auVar124._0_32_;
        }
        *(undefined8 *)(param_1 + 0x78) = uVar22;
        *(uint *)(param_1 + 0x70) = uVar33;
      }
      *(uint *)(param_1 + 0x74) = uVar33;
      if ((*(uint *)(param_1 + 0x84) < uVar33) && (*(uint *)(param_1 + 0x80) < uVar33)) {
        auVar124 = ZEXT1664(auVar109._0_16_);
        *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x14019841e;
        FUN_145791040(param_1 + 0x80);
        auVar109 = auVar124._0_32_;
      }
      *(uint *)(param_1 + 0x84) = uVar33;
      uVar20 = *(uint *)(param_1 + 0x94);
      if (uVar20 < uVar33) {
        if (*(uint *)(param_1 + 0x90) < uVar33) {
          auVar124 = ZEXT1664(auVar109._0_16_);
          *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x14019846c;
          FUN_145ba7050();
          auVar109 = auVar124._0_32_;
          uVar20 = *(uint *)(param_1 + 0x94);
        }
        if (uVar20 != uVar33) {
          auVar138._8_8_ = _DAT_145f437c0;
          auVar138._0_8_ = _DAT_145f437c0;
          auVar138._16_8_ = _DAT_145f437c0;
          auVar138._24_8_ = _DAT_145f437c0;
          auVar122 = vpcmpeqd_avx2(auVar109,auVar109);
          lVar28 = uVar34 - uVar20;
          lVar36 = lVar28 + -1;
          lVar29 = 0;
          lVar23 = *(longlong *)(param_1 + 0x98) + (ulonglong)uVar20;
          *(ulonglong *)((longlong)auStackX_8 + lVar21 + -8) = lVar28 + 0x1fU & 0xffffffffffffffe0;
          auVar50._8_8_ = lVar36;
          auVar50._0_8_ = lVar36;
          auVar50._16_8_ = lVar36;
          auVar50._24_8_ = lVar36;
          auVar50 = auVar138 ^ auVar50;
          do {
            uVar26 = lVar23 + 2 + lVar29;
            uVar27 = lVar23 + 6 + lVar29;
            uVar1 = lVar23 + 7 + lVar29;
            uVar2 = lVar23 + 4 + lVar29;
            uVar3 = lVar23 + 5 + lVar29;
            uVar5 = lVar23 + 10 + lVar29;
            *(longlong *)(&stack0x000000c8 + lVar21) = lVar23 + 1 + lVar29;
            uVar6 = lVar23 + 3 + lVar29;
            *(ulonglong *)((longlong)auStackX_8 + lVar21 + 8) = uVar26;
            *(longlong *)(&stack0xffffffffffffffe0 + lVar21) = lVar23 + 8 + lVar29;
            *(ulonglong *)(&stack0x00000040 + lVar21) = uVar5;
            *(longlong *)(&stack0xffffffffffffffe8 + lVar21) = lVar23 + 0xd + lVar29;
            *(ulonglong *)((longlong)auStackX_8 + lVar21 + 0x18) = uVar2;
            *(ulonglong *)(&stack0x00000028 + lVar21) = uVar3;
            *(ulonglong *)(&stack0x00000038 + lVar21) = uVar1;
            *(longlong *)((longlong)auStackX_8 + lVar21) = lVar23 + lVar29;
            *(ulonglong *)(&stack0x00000030 + lVar21) = uVar27;
            puVar9 = *(undefined1 **)(&stack0x000000c8 + lVar21);
            *(longlong *)(&stack0xfffffffffffffff8 + lVar21) = lVar23 + 9 + lVar29;
            uVar10 = lVar23 + 0xb + lVar29;
            *(longlong *)(&stack0xfffffffffffffff0 + lVar21) = lVar23 + 0xe + lVar29;
            uVar11 = lVar23 + 0xf + lVar29;
            *(ulonglong *)((longlong)auStackX_8 + lVar21 + 0x10) = uVar6;
            uVar12 = lVar23 + 0x11 + lVar29;
            *(ulonglong *)(&stack0x00000050 + lVar21) = uVar10;
            *(ulonglong *)(&stack0x00000080 + lVar21) = uVar11;
            *(ulonglong *)(&stack0x00000048 + lVar21) = uVar12;
            auVar43._8_8_ = 0;
            auVar43._0_8_ = uVar6;
            auVar63._8_8_ = 0;
            auVar63._0_8_ = uVar26;
            auVar38 = vpunpcklqdq_avx(auVar63,auVar43);
            auVar64._8_8_ = 0;
            auVar64._0_8_ = puVar9;
            auVar86._8_8_ = 0;
            auVar86._0_8_ = lVar23 + lVar29;
            auVar129 = vpunpcklqdq_avx(auVar86,auVar64);
            puVar4 = (undefined1 *)(lVar23 + 0xc + lVar29);
            auVar146 = ZEXT116(0) * auVar38 | ZEXT116(1) * auVar129;
            uVar26 = lVar23 + 0x14 + lVar29;
            *(ulonglong *)(&stack0x00000058 + lVar21) = uVar26;
            uVar6 = lVar23 + 0x18 + lVar29;
            *(ulonglong *)(&stack0x00000070 + lVar21) = uVar6;
            auVar44._8_8_ = 0;
            auVar44._0_8_ = uVar1;
            auVar65._8_8_ = 0;
            auVar65._0_8_ = uVar27;
            auVar129 = vpunpcklqdq_avx(auVar65,auVar44);
            puVar7 = (undefined1 *)(lVar23 + 0x13 + lVar29);
            auVar66._8_8_ = 0;
            auVar66._0_8_ = uVar3;
            auVar87._8_8_ = 0;
            auVar87._0_8_ = uVar2;
            auVar37 = vpunpcklqdq_avx(auVar87,auVar66);
            auVar147 = ZEXT116(0) * auVar129 | ZEXT116(1) * auVar37;
            puVar16 = *(undefined1 **)(&stack0xfffffffffffffff8 + lVar21);
            uVar27 = lVar23 + 0x12 + lVar29;
            *(ulonglong *)(&stack0x00000060 + lVar21) = uVar27;
            auVar45._8_8_ = 0;
            auVar45._0_8_ = uVar10;
            auVar67._8_8_ = 0;
            auVar67._0_8_ = uVar5;
            auVar37 = vpunpcklqdq_avx(auVar67,auVar45);
            auVar68._8_8_ = 0;
            auVar68._0_8_ = puVar16;
            auVar88._8_8_ = 0;
            auVar88._0_8_ = *(ulonglong *)(&stack0xffffffffffffffe0 + lVar21);
            auVar139 = vpunpcklqdq_avx(auVar88,auVar68);
            auVar152 = ZEXT116(0) * auVar37 | ZEXT116(1) * auVar139;
            puVar8 = (undefined1 *)(lVar23 + 0x10 + lVar29);
            auVar46._8_8_ = 0;
            auVar46._0_8_ = uVar11;
            auVar69._8_8_ = 0;
            auVar69._0_8_ = *(ulonglong *)(&stack0xfffffffffffffff0 + lVar21);
            auVar139 = vpunpcklqdq_avx(auVar69,auVar46);
            auVar70._8_8_ = 0;
            auVar70._0_8_ = *(ulonglong *)(&stack0xffffffffffffffe8 + lVar21);
            auVar89._8_8_ = 0;
            auVar89._0_8_ = puVar4;
            auVar140 = vpunpcklqdq_avx(auVar89,auVar70);
            auVar39 = ZEXT116(0) * auVar139 | ZEXT116(1) * auVar140;
            uVar1 = lVar23 + 0x17 + lVar29;
            *(ulonglong *)(&stack0x00000090 + lVar21) = uVar1;
            auVar47._8_8_ = 0;
            auVar47._0_8_ = puVar7;
            auVar71._8_8_ = 0;
            auVar71._0_8_ = uVar27;
            auVar140 = vpunpcklqdq_avx(auVar71,auVar47);
            uVar27 = lVar23 + 0x16 + lVar29;
            *(ulonglong *)(&stack0x00000078 + lVar21) = uVar27;
            auVar72._8_8_ = 0;
            auVar72._0_8_ = uVar12;
            auVar90._8_8_ = 0;
            auVar90._0_8_ = puVar8;
            auVar145 = vpunpcklqdq_avx(auVar90,auVar72);
            uVar2 = lVar23 + 0x1a + lVar29;
            auVar145 = ZEXT116(0) * auVar140 | ZEXT116(1) * auVar145;
            uVar3 = lVar23 + 0x15 + lVar29;
            *(ulonglong *)(&stack0x000000a0 + lVar21) = uVar2;
            *(ulonglong *)(&stack0x00000068 + lVar21) = uVar3;
            auVar51._0_8_ = -(ulonglong)(auVar145._0_8_ == 0);
            auVar51._8_8_ = -(ulonglong)(auVar145._8_8_ == 0);
            auVar51._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar140,0) == 0);
            auVar51._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar140,8) == 0);
            auVar73._8_8_ = 0;
            auVar73._0_8_ = uVar1;
            auVar91._8_8_ = 0;
            auVar91._0_8_ = uVar27;
            auVar140 = vpunpcklqdq_avx(auVar91,auVar73);
            uVar27 = lVar23 + 0x1b + lVar29;
            *(ulonglong *)(&stack0x000000b0 + lVar21) = uVar27;
            auVar92._8_8_ = 0;
            auVar92._0_8_ = uVar3;
            auVar105._8_8_ = 0;
            auVar105._0_8_ = uVar26;
            auVar145 = vpunpcklqdq_avx(auVar105,auVar92);
            uVar26 = lVar23 + 0x1e + lVar29;
            auVar145 = ZEXT116(0) * auVar140 | ZEXT116(1) * auVar145;
            uVar1 = lVar23 + 0x19 + lVar29;
            *(ulonglong *)(&stack0x000000b8 + lVar21) = uVar26;
            *(ulonglong *)(&stack0x00000088 + lVar21) = uVar1;
            auVar76._0_8_ = -(ulonglong)(auVar145._0_8_ == 0);
            auVar76._8_8_ = -(ulonglong)(auVar145._8_8_ == 0);
            auVar76._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar140,0) == 0);
            auVar76._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar140,8) == 0);
            auVar93._8_8_ = 0;
            auVar93._0_8_ = uVar27;
            auVar106._8_8_ = 0;
            auVar106._0_8_ = uVar2;
            auVar140 = vpunpcklqdq_avx(auVar106,auVar93);
            uVar27 = lVar23 + 0x1f + lVar29;
            auVar109 = vpackssdw_avx2(auVar51,auVar76);
            *(ulonglong *)(&stack0x000000c0 + lVar21) = uVar27;
            auVar48 = vpermq_avx2(auVar109,0xd8);
            auVar107._8_8_ = 0;
            auVar107._0_8_ = uVar1;
            auVar118._8_8_ = 0;
            auVar118._0_8_ = uVar6;
            auVar145 = vpunpcklqdq_avx(auVar118,auVar107);
            auVar145 = ZEXT116(0) * auVar140 | ZEXT116(1) * auVar145;
            uVar1 = lVar23 + 0x1d + lVar29;
            *(ulonglong *)(&stack0x000000a8 + lVar21) = uVar1;
            auVar98._0_8_ = -(ulonglong)(auVar145._0_8_ == 0);
            auVar98._8_8_ = -(ulonglong)(auVar145._8_8_ == 0);
            auVar98._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar140,0) == 0);
            auVar98._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar140,8) == 0);
            auVar108._8_8_ = 0;
            auVar108._0_8_ = uVar27;
            auVar119._8_8_ = 0;
            auVar119._0_8_ = uVar26;
            auVar140 = vpunpcklqdq_avx(auVar119,auVar108);
            uVar26 = lVar23 + 0x1c + lVar29;
            *(ulonglong *)(&stack0x00000098 + lVar21) = uVar26;
            auVar120._8_8_ = 0;
            auVar120._0_8_ = uVar1;
            auVar126._8_8_ = 0;
            auVar126._0_8_ = uVar26;
            auVar145 = vpunpcklqdq_avx(auVar126,auVar120);
            auVar145 = ZEXT116(0) * auVar140 | ZEXT116(1) * auVar145;
            auVar113._0_8_ = -(ulonglong)(auVar145._0_8_ == 0);
            auVar113._8_8_ = -(ulonglong)(auVar145._8_8_ == 0);
            auVar113._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar140,0) == 0);
            auVar113._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar140,8) == 0);
            auVar123._8_8_ = lVar29;
            auVar123._0_8_ = lVar29;
            auVar123._16_8_ = lVar29;
            auVar123._24_8_ = lVar29;
            auVar136 = vpor_avx2(auVar123,_DAT_145fc3d00);
            auVar49 = vpor_avx2(auVar123,_DAT_145fc3ce0);
            auVar133 = vpor_avx2(auVar123,_DAT_145f43780);
            auVar109 = vpackssdw_avx2(auVar98,auVar113);
            auVar114._0_8_ = -(ulonglong)(auVar146._0_8_ == 0);
            auVar114._8_8_ = -(ulonglong)(auVar146._8_8_ == 0);
            auVar114._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar38,0) == 0);
            auVar114._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar38,8) == 0);
            auVar109 = vpermq_avx2(auVar109,0xd8);
            auVar99._0_8_ = -(ulonglong)(auVar152._0_8_ == 0);
            auVar99._8_8_ = -(ulonglong)(auVar152._8_8_ == 0);
            auVar99._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar37,0) == 0);
            auVar99._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar37,8) == 0);
            auVar109 = vpackssdw_avx2(auVar122 ^ auVar48,auVar122 ^ auVar109);
            auVar77._0_8_ = -(ulonglong)(auVar39._0_8_ == 0);
            auVar77._8_8_ = -(ulonglong)(auVar39._8_8_ == 0);
            auVar77._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar139,0) == 0);
            auVar77._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar139,8) == 0);
            auVar48 = vpackssdw_avx2(auVar99,auVar77);
            auVar100._0_8_ = -(ulonglong)(auVar147._0_8_ == 0);
            auVar100._8_8_ = -(ulonglong)(auVar147._8_8_ == 0);
            auVar100._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar129,0) == 0);
            auVar100._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar129,8) == 0);
            auVar127 = vpermq_avx2(auVar109,0xd8);
            auVar109 = vpackssdw_avx2(auVar114,auVar100);
            auVar131 = vpermq_avx2(auVar48,0xd8);
            auVar135 = vpermq_avx2(auVar109,0xd8);
            auVar109 = vpcmpgtq_avx2(auVar138 ^ auVar49,auVar50);
            auVar48 = vpcmpgtq_avx2(auVar138 ^ auVar136,auVar50);
            auVar136 = vpcmpgtq_avx2(auVar138 ^ auVar133,auVar50);
            auVar109 = vpackssdw_avx2(auVar48,auVar109);
            auVar49 = vpor_avx2(auVar123,_DAT_145f437a0);
            auVar48 = vpackssdw_avx2(auVar122 ^ auVar135,auVar122 ^ auVar131);
            auVar133 = vpermq_avx2(auVar109,0xd8);
            auVar109 = vpermq_avx2(auVar48,0xd8);
            auVar109 = vpacksswb_avx2(auVar109,auVar127);
            auVar48 = vpcmpgtq_avx2(auVar138 ^ auVar49,auVar50);
            auVar48 = vpackssdw_avx2(auVar136,auVar48);
            auVar136 = vpor_avx2(auVar123,_DAT_145fc3ca0);
            auVar48 = vpermq_avx2(auVar48,0xd8);
            auVar48 = vpackssdw_avx2(auVar122 ^ auVar48,auVar122 ^ auVar133);
            auVar49 = vpor_avx2(auVar123,_DAT_145fc3cc0);
            auVar133 = vpermq_avx2(auVar48,0xd8);
            auVar48 = vpcmpgtq_avx2(auVar138 ^ auVar136,auVar50);
            auVar136 = vpcmpgtq_avx2(auVar138 ^ auVar49,auVar50);
            auVar48 = vpackssdw_avx2(auVar136,auVar48);
            auVar136 = vpor_avx2(auVar123,_DAT_145fc3c60);
            auVar49 = vpor_avx2(auVar123,_DAT_145fc3c80);
            auVar127 = vpermq_avx2(auVar48,0xd8);
            auVar48 = vpcmpgtq_avx2(auVar138 ^ auVar49,auVar50);
            auVar136 = vpcmpgtq_avx2(auVar138 ^ auVar136,auVar50);
            auVar48 = vpackssdw_avx2(auVar48,auVar136);
            auVar48 = vpermq_avx2(auVar48,0xd8);
            auVar48 = vpackssdw_avx2(auVar122 ^ auVar127,auVar122 ^ auVar48);
            auVar48 = vpermq_avx2(auVar48,0xd8);
            auVar48 = vpacksswb_avx2(auVar133,auVar48);
            auVar109 = vpand_avx2(auVar48,auVar109);
            if ((auVar109._0_4_ & 1) != 0) {
              **(undefined1 **)((longlong)auStackX_8 + lVar21) = 0;
            }
            auVar109 = vpermq_avx2(auVar109,0xd8);
            if ((auVar109[1] & 1) != 0) {
              *puVar9 = 0;
            }
            if ((auVar109[2] & 1) != 0) {
              **(undefined1 **)((longlong)auStackX_8 + lVar21 + 8) = 0;
            }
            if ((auVar109[3] & 1) != 0) {
              **(undefined1 **)((longlong)auStackX_8 + lVar21 + 0x10) = 0;
            }
            if ((auVar109[4] & 1) != 0) {
              **(undefined1 **)((longlong)auStackX_8 + lVar21 + 0x18) = 0;
            }
            if ((auVar109[5] & 1) != 0) {
              **(undefined1 **)(&stack0x00000028 + lVar21) = 0;
            }
            if ((auVar109[6] & 1) != 0) {
              **(undefined1 **)(&stack0x00000030 + lVar21) = 0;
            }
            if ((auVar109[7] & 1) != 0) {
              **(undefined1 **)(&stack0x00000038 + lVar21) = 0;
            }
            if ((auVar109[8] & 1) != 0) {
              **(undefined1 **)(&stack0xffffffffffffffe0 + lVar21) = 0;
            }
            if ((auVar109[9] & 1) != 0) {
              *puVar16 = 0;
            }
            if ((auVar109[10] & 1) != 0) {
              **(undefined1 **)(&stack0x00000040 + lVar21) = 0;
            }
            if ((auVar109[0xb] & 1) != 0) {
              **(undefined1 **)(&stack0x00000050 + lVar21) = 0;
            }
            if ((auVar109[0xc] & 1) != 0) {
              *puVar4 = 0;
            }
            if ((auVar109[0xd] & 1) != 0) {
              **(undefined1 **)(&stack0xffffffffffffffe8 + lVar21) = 0;
            }
            if ((auVar109[0xe] & 1) != 0) {
              **(undefined1 **)(&stack0xfffffffffffffff0 + lVar21) = 0;
            }
            if ((auVar109[0xf] & 1) != 0) {
              **(undefined1 **)(&stack0x00000080 + lVar21) = 0;
            }
            if ((auVar109._16_4_ & 1) != 0) {
              *puVar8 = 0;
            }
            if ((auVar109[0x11] & 1) != 0) {
              **(undefined1 **)(&stack0x00000048 + lVar21) = 0;
            }
            if ((auVar109[0x12] & 1) != 0) {
              **(undefined1 **)(&stack0x00000060 + lVar21) = 0;
            }
            if ((auVar109[0x13] & 1) != 0) {
              *puVar7 = 0;
            }
            if ((auVar109[0x14] & 1) != 0) {
              **(undefined1 **)(&stack0x00000058 + lVar21) = 0;
            }
            if ((auVar109[0x15] & 1) != 0) {
              **(undefined1 **)(&stack0x00000068 + lVar21) = 0;
            }
            if ((auVar109[0x16] & 1) != 0) {
              **(undefined1 **)(&stack0x00000078 + lVar21) = 0;
            }
            if ((auVar109[0x17] & 1) != 0) {
              **(undefined1 **)(&stack0x00000090 + lVar21) = 0;
            }
            if ((auVar109[0x18] & 1) != 0) {
              **(undefined1 **)(&stack0x00000070 + lVar21) = 0;
            }
            if ((auVar109[0x19] & 1) != 0) {
              **(undefined1 **)(&stack0x00000088 + lVar21) = 0;
            }
            if ((auVar109[0x1a] & 1) != 0) {
              **(undefined1 **)(&stack0x000000a0 + lVar21) = 0;
            }
            if ((auVar109[0x1b] & 1) != 0) {
              **(undefined1 **)(&stack0x000000b0 + lVar21) = 0;
            }
            if ((auVar109[0x1c] & 1) != 0) {
              **(undefined1 **)(&stack0x00000098 + lVar21) = 0;
            }
            if ((auVar109[0x1d] & 1) != 0) {
              **(undefined1 **)(&stack0x000000a8 + lVar21) = 0;
            }
            if ((auVar109[0x1e] & 1) != 0) {
              **(undefined1 **)(&stack0x000000b8 + lVar21) = 0;
            }
            if ((auVar109[0x1f] & 1) != 0) {
              **(undefined1 **)(&stack0x000000c0 + lVar21) = 0;
            }
            lVar29 = lVar29 + 0x20;
          } while (*(longlong *)((longlong)auStackX_8 + lVar21 + -8) != lVar29);
        }
      }
      *(uint *)(param_1 + 0x94) = uVar33;
    }
    if (0 < (int)uVar33) {
      lVar21 = *(longlong *)(param_1 + 0x48);
      lVar23 = *(longlong *)(param_1 + 0xa8);
      uVar26 = 0;
      do {
        uVar20 = *(uint *)(lVar21 + uVar26 * 4);
        uVar27 = (ulonglong)uVar20 & 0x1ffff;
        if (uVar27 != 0x1ffff) {
          *(short *)(*(longlong *)(lVar23 + 8 + (ulonglong)(uVar20 >> 0x11 & 0x1f) * 0x18) +
                    uVar27 * 2) = (short)uVar26;
        }
        uVar26 = uVar26 + 1;
      } while (uVar34 != uVar26);
    }
  }
  return;
}

