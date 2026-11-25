// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017b1a0  size: 1344 bytes
// Name:    FUN_14017b1a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140237bc0, FUN_145324190, FUN_1453241d0, FUN_14026e160, FUN_14026db50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14017b1a0(longlong param_1,ulonglong param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  undefined1 in_ZMM0 [64];
  short sVar7;
  short sVar15;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar16;
  float fVar22;
  float fVar23;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  float fVar35;
  undefined1 auVar31 [16];
  float fVar33;
  float fVar34;
  undefined1 auVar32 [64];
  undefined8 uVar36;
  undefined8 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 auStack_108 [16];
  ulonglong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  float fStack_d0;
  float fStack_cc;
  
  auVar13 = vpinsrw_avx(in_ZMM0._0_16_,param_4,0);
  auVar32 = ZEXT1664(auVar13);
  if ((*(byte *)(param_1 + 0x26e) & 2) == 0) {
    if ((param_4 >> 0x13 & 1) == 0) {
      auStack_158 = *(undefined1 (*) [16])(param_1 + 0xd0);
      auStack_148 = *(undefined1 (*) [16])(param_1 + 0xe0);
      auStack_1f8 = *(undefined1 (*) [16])(param_1 + 0x90);
      auStack_1e8 = *(undefined1 (*) [16])(param_1 + 0xa0);
      auStack_1d8 = *(undefined1 (*) [16])(param_1 + 0xb0);
      auStack_1c8 = *(undefined1 (*) [16])(param_1 + 0xc0);
    }
    else {
      FUN_14026db50(&uStack_198,*(undefined8 *)(param_1 + 8),param_4);
      auVar29 = ZEXT1664(CONCAT88(uStack_190,uStack_198));
      FUN_14026e160(&uStack_198,*(undefined8 *)(param_1 + 8),param_4);
      auVar17._4_4_ = _DAT_14615a290;
      auVar17._0_4_ = _DAT_14615a290;
      auVar17._8_4_ = _DAT_14615a290;
      auVar17._12_4_ = _DAT_14615a290;
      auVar8._0_12_ = ZEXT812(0);
      auVar8._12_4_ = 0;
      auVar30 = ZEXT1664(CONCAT88(uStack_190,uStack_198));
      auVar27 = vcvtph2ps_f16c(ZEXT216(auVar32._0_2_));
      auVar13 = vrcpps_avx(auVar17);
      fVar16 = auVar13._0_4_;
      fVar22 = auVar13._4_4_;
      fVar23 = auVar13._8_4_;
      fVar24 = auVar13._12_4_;
      auVar13 = vmaxss_avx(auVar8,auVar27);
      uStack_198 = *(undefined8 *)(param_1 + 0x1e0);
      uStack_190 = *(undefined8 *)(param_1 + 0x1e8);
      auStack_108._0_4_ = auVar13._0_4_;
      auStack_108._4_4_ = auStack_108._0_4_;
      auStack_108._8_4_ = auStack_108._0_4_;
      auStack_108._12_4_ = auStack_108._0_4_;
      auVar13 = *(undefined1 (*) [16])(param_1 + 0x210);
      auVar25._0_4_ =
           ((-(fVar16 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar16 + fVar16) * auVar13._0_4_;
      auVar25._4_4_ =
           ((-(fVar22 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar22 + fVar22) * auVar13._4_4_;
      auVar25._8_4_ =
           ((-(fVar23 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar23 + fVar23) * auVar13._8_4_;
      auVar25._12_4_ =
           ((-(fVar24 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar24 + fVar24) * auVar13._12_4_;
      auVar27 = vroundps_avx(auVar25,3);
      auVar18._0_4_ = -(auVar27._0_4_ * _DAT_14615a290) + auVar13._0_4_;
      auVar18._4_4_ = -(auVar27._4_4_ * _DAT_14615a290) + auVar13._4_4_;
      auVar18._8_4_ = -(auVar27._8_4_ * _DAT_14615a290) + auVar13._8_4_;
      auVar18._12_4_ = -(auVar27._12_4_ * _DAT_14615a290) + auVar13._12_4_;
      auVar13 = vblendps_avx(auVar13,auVar18,3);
      auVar19._0_4_ = (int)auVar27._0_4_;
      auVar19._4_4_ = (int)auVar27._4_4_;
      auVar19._8_4_ = (int)auVar27._8_4_;
      auVar19._12_4_ = (int)auVar27._12_4_;
      auVar27 = vpackssdw_avx(auVar19,auVar19);
      auStack_168 = vinsertps_avx(auVar13,auVar27,0x30);
      auStack_1c8 = ZEXT816(0) << 0x20;
      auStack_188 = vblendps_avx(auStack_1c8,*(undefined1 (*) [16])(param_1 + 0x1f0),7);
      auStack_178 = vblendps_avx(auStack_1c8,*(undefined1 (*) [16])(param_1 + 0x200),7);
      auStack_1f8 = ZEXT416((uint)_DAT_145fc6ed8);
      auStack_1e8._8_8_ = 0;
      auStack_1e8._0_8_ = _DAT_146159bc0;
      auStack_1d8._8_8_ = _UNK_14614f7f8;
      auStack_1d8._0_8_ = _DAT_14614f7f0;
      FUN_140237bc0(auStack_108,&uStack_198,param_1 + 0x90,auStack_1f8);
      auStack_158 = auVar29._0_16_;
      auStack_148 = auVar30._0_16_;
      auStack_1e8._12_4_ = 0;
      auStack_1d8._12_4_ = 0;
    }
  }
  else if ((param_4 >> 0x13 & 1) == 0) {
    FUN_1453241d0(param_1 + 0x300,&uStack_198,param_2 & 0xffffffff);
    auVar32 = ZEXT1664(CONCAT88(uStack_190,uStack_198));
    FUN_145324190(param_1 + 0x300,&uStack_198,param_2 & 0xffffffff);
    auStack_158 = auVar32._0_16_;
    auVar13._4_4_ = _DAT_14615a290;
    auVar13._0_4_ = _DAT_14615a290;
    auVar13._8_4_ = _DAT_14615a290;
    auVar13._12_4_ = _DAT_14615a290;
    fStack_1b8 = *(float *)*(undefined1 (*) [16])(param_1 + 0xc0);
    fStack_1b4 = *(float *)(param_1 + 0xc4);
    fStack_1b0 = *(float *)(param_1 + 200);
    fStack_1ac = *(float *)(param_1 + 0xcc);
    auStack_148._8_8_ = uStack_190;
    auStack_148._0_8_ = uStack_198;
    pauVar3 = *(undefined1 (**) [16])(param_1 + 0x310 + (param_2 & 0xff) * 8);
    auStack_1f8 = *pauVar3;
    auVar31._0_4_ = fStack_1b8 + *(float *)pauVar3[3];
    auVar31._4_4_ = fStack_1b4 + *(float *)(pauVar3[3] + 4);
    auVar31._8_4_ = fStack_1b0 + *(float *)(pauVar3[3] + 8);
    auVar31._12_4_ = fStack_1ac + *(float *)(pauVar3[3] + 0xc);
    auVar13 = vrcpps_avx(auVar13);
    fVar16 = auVar13._0_4_;
    fVar22 = auVar13._4_4_;
    fVar23 = auVar13._8_4_;
    fVar24 = auVar13._12_4_;
    auStack_1e8 = vblendps_avx(ZEXT816(0) << 0x20,pauVar3[1],7);
    auStack_1d8 = vblendps_avx(ZEXT816(0) << 0x20,pauVar3[2],7);
    auVar13 = vblendps_avx(auVar31,*(undefined1 (*) [16])(param_1 + 0xc0),8);
    auVar27._0_4_ =
         ((-(fVar16 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar16 + fVar16) * auVar13._0_4_;
    auVar27._4_4_ =
         ((-(fVar22 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar22 + fVar22) * auVar13._4_4_;
    auVar27._8_4_ =
         ((-(fVar23 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar23 + fVar23) * auVar13._8_4_;
    auVar27._12_4_ =
         ((-(fVar24 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar24 + fVar24) * auVar13._12_4_;
    auVar27 = vroundps_avx(auVar27,3);
    auVar14._0_4_ = -(auVar27._0_4_ * _DAT_14615a290) + auVar13._0_4_;
    auVar14._4_4_ = -(auVar27._4_4_ * _DAT_14615a290) + auVar13._4_4_;
    auVar14._8_4_ = -(auVar27._8_4_ * _DAT_14615a290) + auVar13._8_4_;
    auVar14._12_4_ = -(auVar27._12_4_ * _DAT_14615a290) + auVar13._12_4_;
    auVar28._0_4_ = (int)auVar27._0_4_;
    auVar28._4_4_ = (int)auVar27._4_4_;
    auVar28._8_4_ = (int)auVar27._8_4_;
    auVar28._12_4_ = (int)auVar27._12_4_;
    auVar28 = vpackssdw_avx(auVar28,auVar28);
    auVar27 = vblendps_avx(auVar13,auVar14,3);
    sVar7 = auVar28._0_2_;
    auVar5._0_2_ = sVar7 + auVar13._0_2_;
    sVar15 = auVar28._2_2_;
    auVar5._2_2_ = sVar15 + auVar13._2_2_;
    auVar5._4_2_ = sVar7 + auVar13._4_2_;
    auVar5._6_2_ = sVar15 + auVar13._6_2_;
    auVar5._8_2_ = sVar7 + auVar13._8_2_;
    auVar5._10_2_ = sVar15 + auVar13._10_2_;
    auVar5._12_2_ = sVar7 + auVar13._12_2_;
    auVar5._14_2_ = sVar15 + auVar13._14_2_;
    auStack_1c8 = vblendps_avx(auVar27,auVar5,8);
  }
  else {
    param_2 = param_2 & 0xff;
    auVar9._0_12_ = ZEXT812(0);
    auVar9._12_4_ = 0;
    lVar1 = *(longlong *)(param_1 + 0x310 + param_2 * 8);
    auVar13 = vcvtph2ps_f16c(ZEXT216(auVar13._0_2_));
    auVar32 = ZEXT1664(*(undefined1 (*) [16])(lVar1 + 0x140));
    auVar29 = ZEXT1664(*(undefined1 (*) [16])(lVar1 + 0x150));
    auVar13 = vmaxss_avx(auVar9,auVar13);
    fVar6 = auVar13._0_4_;
    fVar33 = fVar6;
    fVar34 = fVar6;
    fVar35 = fVar6;
    FUN_1453241d0(param_1 + 0x300,auStack_128,param_2);
    FUN_145324190(param_1 + 0x300,auStack_138,param_2);
    auVar38._4_4_ = _DAT_14615a290;
    auVar38._0_4_ = _DAT_14615a290;
    auVar38._8_4_ = _DAT_14615a290;
    auVar38._12_4_ = _DAT_14615a290;
    auVar30 = ZEXT1664(auVar38);
    uStack_198 = *(undefined8 *)(param_1 + 0x1e0);
    uStack_190 = *(undefined8 *)(param_1 + 0x1e8);
    puVar2 = *(undefined8 **)(param_1 + 0x310 + param_2 * 8);
    fVar16 = *(float *)(puVar2 + 6);
    fVar22 = *(float *)((longlong)puVar2 + 0x34);
    fVar23 = *(float *)(puVar2 + 7);
    fVar24 = *(float *)((longlong)puVar2 + 0x3c);
    auVar13 = vsubps_avx(auStack_128,auVar32._0_16_);
    auVar32 = ZEXT1664(CONCAT412(fVar35 * auVar13._12_4_ + auVar32._12_4_,
                                 CONCAT48(fVar34 * auVar13._8_4_ + auVar32._8_4_,
                                          CONCAT44(fVar33 * auVar13._4_4_ + auVar32._4_4_,
                                                   fVar6 * auVar13._0_4_ + auVar32._0_4_))));
    auVar27 = vsubps_avx(auStack_138,auVar29._0_16_);
    auVar13 = vrcpps_avx(auVar38);
    auVar29 = ZEXT1664(CONCAT412(fVar35 * auVar27._12_4_ + auVar29._12_4_,
                                 CONCAT48(fVar34 * auVar27._8_4_ + auVar29._8_4_,
                                          CONCAT44(fVar33 * auVar27._4_4_ + auVar29._4_4_,
                                                   fVar6 * auVar27._0_4_ + auVar29._0_4_))));
    uVar36 = *puVar2;
    uVar37 = puVar2[1];
    fVar42 = auVar13._0_4_;
    fVar43 = auVar13._4_4_;
    fVar44 = auVar13._8_4_;
    fVar45 = auVar13._12_4_;
    fVar42 = (-(fVar42 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar42 + fVar42;
    fVar43 = (-(fVar43 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar43 + fVar43;
    fVar44 = (-(fVar44 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar44 + fVar44;
    fVar45 = (-(fVar45 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar45 + fVar45;
    _auStack_d8 = ZEXT816(0) << 0x20;
    auVar13 = vblendps_avx(_auStack_d8,*(undefined1 (*) [16])(puVar2 + 2),7);
    auVar40 = ZEXT1664(auVar13);
    auVar13 = vblendps_avx(_auStack_d8,*(undefined1 (*) [16])(puVar2 + 4),7);
    auVar41 = ZEXT1664(auVar13);
    auVar13 = *(undefined1 (*) [16])(param_1 + 0x210);
    auVar20._0_4_ = fVar42 * auVar13._0_4_;
    auVar20._4_4_ = fVar43 * auVar13._4_4_;
    auVar20._8_4_ = fVar44 * auVar13._8_4_;
    auVar20._12_4_ = fVar45 * auVar13._12_4_;
    auVar27 = vroundps_avx(auVar20,3);
    auVar26._0_4_ = -(auVar27._0_4_ * _DAT_14615a290) + auVar13._0_4_;
    auVar26._4_4_ = -(auVar27._4_4_ * _DAT_14615a290) + auVar13._4_4_;
    auVar26._8_4_ = -(auVar27._8_4_ * _DAT_14615a290) + auVar13._8_4_;
    auVar26._12_4_ = -(auVar27._12_4_ * _DAT_14615a290) + auVar13._12_4_;
    auVar21._0_4_ = (int)auVar27._0_4_;
    auVar21._4_4_ = (int)auVar27._4_4_;
    auVar21._8_4_ = (int)auVar27._8_4_;
    auVar21._12_4_ = (int)auVar27._12_4_;
    auVar27 = vpackssdw_avx(auVar21,auVar21);
    auVar13 = vblendps_avx(auVar13,auVar26,3);
    auStack_178 = vblendps_avx(_auStack_d8,*(undefined1 (*) [16])(param_1 + 0x200),7);
    auStack_168 = vinsertps_avx(auVar13,auVar27,0x30);
    auStack_188 = vblendps_avx(_auStack_d8,*(undefined1 (*) [16])(param_1 + 0x1f0),7);
    auStack_108 = ZEXT416((uint)_DAT_145fc6ed8);
    uStack_f8 = _DAT_146159bc0;
    uStack_f0 = 0;
    uStack_e8 = _DAT_14614f7f0;
    uStack_e0 = _UNK_14614f7f8;
    fStack_118 = fVar6;
    fStack_114 = fVar33;
    fStack_110 = fVar34;
    fStack_10c = fVar35;
    FUN_140237bc0(&fStack_118,&uStack_198,param_1 + 0x90,auStack_108);
    auStack_158 = auVar32._0_16_;
    auStack_148 = auVar29._0_16_;
    fStack_1a8 = (float)auStack_d8._0_4_;
    fStack_1a4 = (float)auStack_d8._4_4_;
    fStack_1a0 = fStack_d0;
    fStack_19c = fStack_cc;
    auVar10._0_4_ = fVar16 + (float)auStack_d8._0_4_;
    auVar10._4_4_ = fVar22 + (float)auStack_d8._4_4_;
    auVar10._8_4_ = fVar23 + fStack_d0;
    auVar10._12_4_ = fVar24 + fStack_cc;
    auVar13 = vblendps_avx(auVar10,_auStack_d8,8);
    auVar11._0_4_ = fVar42 * auVar13._0_4_;
    auVar11._4_4_ = fVar43 * auVar13._4_4_;
    auVar11._8_4_ = fVar44 * auVar13._8_4_;
    auVar11._12_4_ = fVar45 * auVar13._12_4_;
    auStack_1f8._8_8_ = uVar37;
    auStack_1f8._0_8_ = uVar36;
    auStack_1e8 = auVar40._0_16_;
    auStack_1d8 = auVar41._0_16_;
    auVar27 = vroundps_avx(auVar11,3);
    auVar39._0_4_ = -(auVar27._0_4_ * auVar30._0_4_) + auVar13._0_4_;
    auVar39._4_4_ = -(auVar27._4_4_ * auVar30._4_4_) + auVar13._4_4_;
    auVar39._8_4_ = -(auVar27._8_4_ * auVar30._8_4_) + auVar13._8_4_;
    auVar39._12_4_ = -(auVar27._12_4_ * auVar30._12_4_) + auVar13._12_4_;
    auVar12._0_4_ = (int)auVar27._0_4_;
    auVar12._4_4_ = (int)auVar27._4_4_;
    auVar12._8_4_ = (int)auVar27._8_4_;
    auVar12._12_4_ = (int)auVar27._12_4_;
    auVar28 = vpackssdw_avx(auVar12,auVar12);
    auVar27 = vblendps_avx(auVar13,auVar39,3);
    sVar7 = auVar28._0_2_;
    auVar4._0_2_ = sVar7 + auVar13._0_2_;
    sVar15 = auVar28._2_2_;
    auVar4._2_2_ = sVar15 + auVar13._2_2_;
    auVar4._4_2_ = sVar7 + auVar13._4_2_;
    auVar4._6_2_ = sVar15 + auVar13._6_2_;
    auVar4._8_2_ = sVar7 + auVar13._8_2_;
    auVar4._10_2_ = sVar15 + auVar13._10_2_;
    auVar4._12_2_ = sVar7 + auVar13._12_2_;
    auVar4._14_2_ = sVar15 + auVar13._14_2_;
    auStack_1c8 = vblendps_avx(auVar27,auVar4,8);
  }
  func_0x000145431f90(param_3,auStack_1f8);
  return;
}

