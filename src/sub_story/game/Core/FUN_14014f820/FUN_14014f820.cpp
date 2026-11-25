// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014f820  size: 294 bytes
// Name:    FUN_14014f820
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144d9d7a0, FUN_14014f950
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14014f820(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  char cVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  short sVar11;
  float fVar12;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar13 [16];
  short sVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  lVar5 = *param_1;
  if (((~*(uint *)(lVar5 + 0xa4) & 0x7ffe) != 0) &&
     (cVar8 = FUN_144d9d7a0(*(uint *)(lVar5 + 0xa0),*(uint *)(lVar5 + 0xa0) >> 0x10), cVar8 != '\0')
     ) {
    return;
  }
  auVar9._4_4_ = _DAT_14615a290;
  auVar9._0_4_ = _DAT_14615a290;
  auVar9._8_4_ = _DAT_14615a290;
  auVar9._12_4_ = _DAT_14615a290;
  lVar6 = *(longlong *)(lVar5 + 0x20);
  auVar14 = *(undefined1 (*) [16])(lVar5 + 0x70);
  fVar1 = *(float *)(lVar6 + 0x20);
  fVar2 = *(float *)(lVar6 + 0x24);
  auVar9 = vrcpps_avx(auVar9);
  fVar12 = auVar9._0_4_;
  fVar18 = auVar9._4_4_;
  fVar19 = auVar9._8_4_;
  fVar20 = auVar9._12_4_;
  fVar3 = *(float *)(lVar6 + 0x28);
  auVar22._0_4_ =
       fVar3 * *(float *)(lVar5 + 0x60) +
       fVar2 * *(float *)(lVar5 + 0x50) + fVar1 * *(float *)(lVar5 + 0x40) + auVar14._0_4_;
  auVar22._4_4_ =
       fVar3 * *(float *)(lVar5 + 100) +
       fVar2 * *(float *)(lVar5 + 0x54) + fVar1 * *(float *)(lVar5 + 0x44) + auVar14._4_4_;
  auVar22._8_4_ =
       fVar3 * *(float *)(lVar5 + 0x68) +
       fVar2 * *(float *)(lVar5 + 0x58) + fVar1 * *(float *)(lVar5 + 0x48) + auVar14._8_4_;
  auVar22._12_4_ =
       fVar3 * *(float *)(lVar5 + 0x6c) +
       fVar2 * *(float *)(lVar5 + 0x5c) + fVar1 * *(float *)(lVar5 + 0x4c) + auVar14._12_4_;
  auVar9 = vblendps_avx(auVar22,auVar14,8);
  auVar21._0_4_ = auVar9._0_4_ * ((-(fVar12 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar12 + fVar12);
  auVar21._4_4_ = auVar9._4_4_ * ((-(fVar18 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar18 + fVar18);
  auVar21._8_4_ = auVar9._8_4_ * ((-(fVar19 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar19 + fVar19);
  auVar21._12_4_ = auVar9._12_4_ * ((-(fVar20 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar20 + fVar20)
  ;
  auVar15 = vroundps_avx(auVar21,3);
  auVar10._0_4_ = -(auVar15._0_4_ * _DAT_14615a290) + auVar9._0_4_;
  auVar10._4_4_ = -(auVar15._4_4_ * _DAT_14615a290) + auVar9._4_4_;
  auVar10._8_4_ = -(auVar15._8_4_ * _DAT_14615a290) + auVar9._8_4_;
  auVar10._12_4_ = -(auVar15._12_4_ * _DAT_14615a290) + auVar9._12_4_;
  auVar13._0_4_ = (int)auVar15._0_4_;
  auVar13._4_4_ = (int)auVar15._4_4_;
  auVar13._8_4_ = (int)auVar15._8_4_;
  auVar13._12_4_ = (int)auVar15._12_4_;
  auVar9 = vblendps_avx(auVar22,auVar10,3);
  auVar15 = vpackssdw_avx(auVar13,auVar13);
  sVar11 = auVar15._0_2_;
  auVar7._0_2_ = sVar11 + auVar14._0_2_;
  sVar17 = auVar15._2_2_;
  auVar7._2_2_ = sVar17 + auVar14._2_2_;
  auVar7._4_2_ = sVar11 + auVar14._4_2_;
  auVar7._6_2_ = sVar17 + auVar14._6_2_;
  auVar7._8_2_ = sVar11 + auVar14._8_2_;
  auVar7._10_2_ = sVar17 + auVar14._10_2_;
  auVar7._12_2_ = sVar11 + auVar14._12_2_;
  auVar7._14_2_ = sVar17 + auVar14._14_2_;
  auVar9 = vpblendd_avx2(auVar9,auVar7,8);
  auVar14 = vpunpckhwd_avx(auVar9,auVar9);
  auVar14 = vpsrad_avx(auVar14,0x10);
  auVar14 = vcvtdq2ps_avx(auVar14);
  auVar14 = vshufpd_avx(auVar14,auVar14,3);
  auVar15._0_4_ = auVar14._0_4_ * _DAT_146159c90 + auVar9._0_4_;
  auVar15._4_4_ = auVar14._4_4_ * _UNK_146159c94 + auVar9._4_4_;
  auVar15._8_4_ = auVar14._8_4_ * _UNK_146159c98 + auVar9._8_4_;
  auVar15._12_4_ = auVar14._12_4_ * _UNK_146159c9c + auVar9._12_4_;
  auVar14 = vblendps_avx(auVar15,*(undefined1 (*) [16])(lVar6 + 0x20),8);
  uVar4 = *(undefined4 *)(lVar6 + 0x2c);
  auVar16._4_4_ = uVar4;
  auVar16._0_4_ = uVar4;
  auVar16._8_4_ = uVar4;
  auVar16._12_4_ = uVar4;
  vsubps_avx(auVar14,auVar16);
  FUN_14014f950();
  return;
}

