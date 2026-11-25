// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f72f0  size: 249 bytes
// Name:    FUN_1400f72f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f8d2c0, FUN_14014d520, FUN_144f2b280
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400f72f0(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong lVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auStack_b8 [8];
  float fStack_b0;
  float fStack_a0;
  undefined1 auStack_98 [16];
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  FUN_144f2b280(param_2,auStack_b8);
  auVar24 = *(undefined1 (*) [16])(param_2 + 0x70);
  auVar22 = vpunpckhwd_avx(auVar24,auVar24);
  auVar22 = vpsrad_avx(auVar22,0x10);
  auVar22 = vcvtdq2ps_avx(auVar22);
  auVar22 = vshufpd_avx(auVar22,auVar22,3);
  auVar23._0_4_ = auVar22._0_4_ * _DAT_146159c90 + auVar24._0_4_;
  auVar23._4_4_ = auVar22._4_4_ * _UNK_146159c94 + auVar24._4_4_;
  auVar23._8_4_ = auVar22._8_4_ * _UNK_146159c98 + auVar24._8_4_;
  auVar23._12_4_ = auVar22._12_4_ * _UNK_146159c9c + auVar24._12_4_;
  auVar24 = vshufpd_avx(auVar23,auVar23,1);
  if (fStack_a0 - fStack_b0 <=
      (float)((uint)(*(float *)(param_1 + 0x598) - auVar24._0_4_) & _DAT_145fc6f4c)) {
    return 0;
  }
  lVar19 = func_0x000144eb4210(*(undefined4 *)(param_2 + 0x9c));
  if (lVar19 != 0) {
    fVar9 = *(float *)(param_1 + 0x5d0);
    fVar10 = *(float *)(param_1 + 0x5d4);
    fVar11 = *(float *)(param_1 + 0x5d8);
    fVar12 = *(float *)(param_1 + 0x5dc);
    fVar3 = *(float *)(lVar19 + 0xd0);
    fVar7 = *(float *)(lVar19 + 0xd4);
    fVar8 = *(float *)(lVar19 + 0xd8);
    fVar27 = *(float *)(lVar19 + 0xdc);
    fVar13 = *(float *)(param_1 + 0x5e0);
    fVar14 = *(float *)(param_1 + 0x5e4);
    fVar15 = *(float *)(param_1 + 0x5e8);
    fVar16 = *(float *)(param_1 + 0x5ec);
    fVar1 = *(float *)(param_1 + 0x5f0);
    fVar2 = *(float *)(param_1 + 0x5f4);
    auVar22 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 0x5c0),
                         *(undefined1 (*) [16])(lVar19 + 0xc0));
    auVar24._0_4_ = fVar3 * fVar9;
    auVar24._4_4_ = fVar7 * fVar10;
    auVar24._8_4_ = fVar8 * fVar11;
    auVar24._12_4_ = fVar27 * fVar12;
    auVar24 = vhaddps_avx(auVar24,auVar24);
    fVar28 = (float)(_DAT_145fc6f4c & auVar24._0_4_);
    auVar25._0_4_ = fVar3 * fVar13;
    auVar25._4_4_ = fVar7 * fVar14;
    auVar25._8_4_ = fVar8 * fVar15;
    auVar25._12_4_ = fVar27 * fVar16;
    fVar5 = auVar22._0_4_;
    auVar29._0_4_ = fVar3 * fVar5;
    fVar6 = auVar22._4_4_;
    auVar29._4_4_ = fVar7 * fVar6;
    fVar7 = auVar22._8_4_;
    auVar29._8_4_ = fVar8 * fVar7;
    fVar8 = auVar22._12_4_;
    auVar29._12_4_ = fVar27 * fVar8;
    auVar24 = vhaddps_avx(auVar25,auVar25);
    auVar22 = vhaddps_avx(auVar29,auVar29);
    fVar27 = (float)(_DAT_145fc6f4c & auVar24._0_4_);
    fVar3 = *(float *)(lVar19 + 0xf0);
    if ((float)(auVar22._0_4_ & _DAT_145fc6f4c) <= fVar2 * fVar27 + fVar1 * fVar28 + fVar3) {
      fVar4 = *(float *)(lVar19 + 0xe0);
      fVar31 = *(float *)(lVar19 + 0xe4);
      fVar17 = *(float *)(lVar19 + 0xe8);
      fVar18 = *(float *)(lVar19 + 0xec);
      auVar22._0_4_ = fVar4 * fVar9;
      auVar22._4_4_ = fVar31 * fVar10;
      auVar22._8_4_ = fVar17 * fVar11;
      auVar22._12_4_ = fVar18 * fVar12;
      auVar24 = vhaddps_avx(auVar22,auVar22);
      fVar32 = (float)(auVar24._0_4_ & _DAT_145fc6f4c);
      auVar30._0_4_ = fVar4 * fVar13;
      auVar30._4_4_ = fVar31 * fVar14;
      auVar30._8_4_ = fVar17 * fVar15;
      auVar30._12_4_ = fVar18 * fVar16;
      auVar33._0_4_ = fVar4 * fVar5;
      auVar33._4_4_ = fVar31 * fVar6;
      auVar33._8_4_ = fVar17 * fVar7;
      auVar33._12_4_ = fVar18 * fVar8;
      auVar24 = vhaddps_avx(auVar30,auVar30);
      auVar22 = vhaddps_avx(auVar33,auVar33);
      fVar31 = (float)(auVar24._0_4_ & _DAT_145fc6f4c);
      fVar4 = *(float *)(lVar19 + 0xf4);
      if (((float)(auVar22._0_4_ & _DAT_145fc6f4c) <= fVar31 * fVar2 + fVar32 * fVar1 + fVar4) &&
         (auVar26._0_4_ = fVar9 * fVar5, auVar26._4_4_ = fVar10 * fVar6,
         auVar26._8_4_ = fVar11 * fVar7, auVar26._12_4_ = fVar12 * fVar8,
         auVar24 = vhaddps_avx(auVar26,auVar26),
         (float)(auVar24._0_4_ & _DAT_145fc6f4c) <= fVar4 * fVar32 + fVar3 * fVar28 + fVar1)) {
        auVar21._0_4_ = fVar13 * fVar5;
        auVar21._4_4_ = fVar14 * fVar6;
        auVar21._8_4_ = fVar15 * fVar7;
        auVar21._12_4_ = fVar16 * fVar8;
        auVar24 = vhaddps_avx(auVar21,auVar21);
        return CONCAT71((int7)((ulonglong)(lVar19 + 0xc0) >> 8),
                        (float)(auVar24._0_4_ & _DAT_145fc6f4c) <=
                        fVar31 * fVar4 + fVar27 * fVar3 + fVar2);
      }
    }
    return 0;
  }
  _uStack_88 = CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8);
  _uStack_80 = CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8);
  _uStack_78 = CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8);
  _uStack_70 = CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8);
  _uStack_68 = CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8);
  _uStack_60 = CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8);
  auStack_98 = ZEXT416(0) << 0x20;
  FUN_14014d520(auStack_98,param_2,1);
  uVar20 = FUN_144f8d2c0(param_1 + 0x5c0,auStack_98);
  return uVar20;
}

