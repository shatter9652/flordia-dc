// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012d160  size: 782 bytes
// Name:    FUN_14012d160
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e40a00, FUN_144fe4920
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14012d160(float *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  char cVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar14;
  float fVar15;
  undefined1 auVar12 [16];
  float fVar16;
  undefined1 auVar13 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  short sVar20;
  short sVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar31;
  float fVar32;
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  if (param_2 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 0x9c);
    lVar5 = func_0x000144faf160(uVar3);
    cVar6 = '\0';
    if ((lVar5 != 0) && (cVar6 = '\0', (1 << (*(byte *)(param_2 + 0x30) & 0x1f) & 0x1cU) != 0)) {
      cVar6 = *(char *)(lVar5 + 0xb0);
    }
    lVar5 = func_0x0001450bb780(uVar3);
    if ((cVar6 == '\0') && (lVar5 != 0)) {
      FUN_144e40a00(lVar5,&fStack_88);
      FUN_144fe4920(lVar5,&fStack_98);
      fVar29 = _DAT_14abbef4c;
      fVar11 = _DAT_146159b60;
      fVar8 = _DAT_146159b58;
      fVar2 = _DAT_146159b54;
      fVar26 = _DAT_146159b4c;
      fVar1 = _DAT_145fc6ed8;
      auVar17._4_4_ = _DAT_14615a290;
      auVar17._0_4_ = _DAT_14615a290;
      auVar17._8_4_ = _DAT_14615a290;
      auVar17._12_4_ = _DAT_14615a290;
      auVar12._0_4_ = _DAT_14abbef4c * fStack_88 + *(float *)*(undefined1 (*) [16])(param_1 + 4);
      auVar12._4_4_ = _DAT_14abbef4c * fStack_84 + param_1[5];
      auVar12._8_4_ = _DAT_14abbef4c * fStack_80 + param_1[6];
      auVar12._12_4_ = _DAT_14abbef4c * fStack_7c + param_1[7];
      auVar17 = vrcpps_avx(auVar17);
      auVar12 = vblendps_avx(auVar12,*(undefined1 (*) [16])(param_1 + 4),8);
      fVar10 = auVar17._0_4_;
      fVar14 = auVar17._4_4_;
      fVar15 = auVar17._8_4_;
      fVar16 = auVar17._12_4_;
      auVar21._0_4_ =
           ((-(fVar10 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar10 + fVar10) * auVar12._0_4_;
      auVar21._4_4_ =
           ((-(fVar14 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar14 + fVar14) * auVar12._4_4_;
      auVar21._8_4_ =
           ((-(fVar15 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar15 + fVar15) * auVar12._8_4_;
      auVar21._12_4_ =
           ((-(fVar16 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar16 + fVar16) * auVar12._12_4_;
      auVar27._4_4_ = _DAT_145fc6edc;
      auVar27._0_4_ = _DAT_145fc6edc;
      auVar27._8_4_ = _DAT_145fc6edc;
      auVar27._12_4_ = _DAT_145fc6edc;
      auVar17 = vroundps_avx(auVar21,3);
      auVar18._0_4_ = -(auVar17._0_4_ * _DAT_14615a290) + auVar12._0_4_;
      auVar18._4_4_ = -(auVar17._4_4_ * _DAT_14615a290) + auVar12._4_4_;
      auVar18._8_4_ = -(auVar17._8_4_ * _DAT_14615a290) + auVar12._8_4_;
      auVar18._12_4_ = -(auVar17._12_4_ * _DAT_14615a290) + auVar12._12_4_;
      auVar22._0_4_ = (int)auVar17._0_4_;
      auVar22._4_4_ = (int)auVar17._4_4_;
      auVar22._8_4_ = (int)auVar17._8_4_;
      auVar22._12_4_ = (int)auVar17._12_4_;
      auVar19 = vpackssdw_avx(auVar22,auVar22);
      auVar17 = vblendps_avx(auVar12,auVar18,3);
      sVar20 = auVar19._0_2_;
      auVar4._0_2_ = sVar20 + auVar12._0_2_;
      sVar25 = auVar19._2_2_;
      auVar4._2_2_ = sVar25 + auVar12._2_2_;
      auVar4._4_2_ = sVar20 + auVar12._4_2_;
      auVar4._6_2_ = sVar25 + auVar12._6_2_;
      auVar4._8_2_ = sVar20 + auVar12._8_2_;
      auVar4._10_2_ = sVar25 + auVar12._10_2_;
      auVar4._12_2_ = sVar20 + auVar12._12_2_;
      auVar4._14_2_ = sVar25 + auVar12._14_2_;
      auVar12 = vblendps_avx(auVar17,auVar4,8);
      *(undefined1 (*) [16])(param_1 + 4) = auVar12;
      fVar10 = fVar29 * fStack_98 * _DAT_146159b48;
      fVar14 = fVar29 * fStack_94 * _DAT_146159b48;
      fVar15 = fVar29 * fStack_90 * _DAT_146159b48;
      fVar16 = fVar29 * fStack_8c * _DAT_146159b48;
      auVar19._0_4_ = (uint)fVar10 & _DAT_145fc6f10;
      auVar19._4_4_ = (uint)fVar14 & _DAT_145fc6f10;
      auVar19._8_4_ = (uint)fVar15 & _DAT_145fc6f10;
      auVar19._12_4_ = (uint)fVar16 & _DAT_145fc6f10;
      auVar19 = auVar19 | auVar27;
      auVar28._4_4_ = _DAT_145f43778;
      auVar28._0_4_ = _DAT_145f43778;
      auVar28._8_4_ = _DAT_145f43778;
      auVar28._12_4_ = _DAT_145f43778;
      auVar17 = vpcmpeqd_avx(auVar19,auVar19);
      auVar13._0_4_ = (int)(fVar10 + auVar19._0_4_);
      auVar13._4_4_ = (int)(fVar14 + auVar19._4_4_);
      auVar13._8_4_ = (int)(fVar15 + auVar19._8_4_);
      auVar13._12_4_ = (int)(fVar16 + auVar19._12_4_);
      auVar12 = vcvtdq2ps_avx(auVar13);
      auVar17 = vpsubd_avx(auVar13,auVar17);
      fVar10 = auVar12._0_4_ * _DAT_146159b50 +
               auVar12._0_4_ * fVar26 + fVar29 * fStack_98 * _DAT_145fc6edc;
      fVar14 = auVar12._4_4_ * _DAT_146159b50 +
               auVar12._4_4_ * fVar26 + fVar29 * fStack_94 * _DAT_145fc6edc;
      fVar15 = auVar12._8_4_ * _DAT_146159b50 +
               auVar12._8_4_ * fVar26 + fVar29 * fStack_90 * _DAT_145fc6edc;
      fVar26 = auVar12._12_4_ * _DAT_146159b50 +
               auVar12._12_4_ * fVar26 + fVar29 * fStack_8c * _DAT_145fc6edc;
      fVar29 = fVar10 * fVar10;
      fVar16 = fVar14 * fVar14;
      fVar31 = fVar15 * fVar15;
      fVar32 = fVar26 * fVar26;
      auVar33._0_4_ = fVar29 * (fVar29 * (fVar29 * fVar8 + fVar2) + _DAT_146159b64) + fVar1;
      auVar33._4_4_ = fVar16 * (fVar16 * (fVar16 * fVar8 + fVar2) + _DAT_146159b64) + fVar1;
      auVar33._8_4_ = fVar31 * (fVar31 * (fVar31 * fVar8 + fVar2) + _DAT_146159b64) + fVar1;
      auVar33._12_4_ = fVar32 * (fVar32 * (fVar32 * fVar8 + fVar2) + _DAT_146159b64) + fVar1;
      auVar12 = vpand_avx(auVar13,auVar28);
      auVar30._4_4_ = _DAT_145f43774;
      auVar30._0_4_ = _DAT_145f43774;
      auVar30._8_4_ = _DAT_145f43774;
      auVar30._12_4_ = _DAT_145f43774;
      auVar34._0_4_ =
           fVar29 * fVar10 * (fVar29 * (fVar29 * fVar11 + _DAT_146159b5c) + _DAT_146159b68) + fVar10
      ;
      auVar34._4_4_ =
           fVar16 * fVar14 * (fVar16 * (fVar16 * fVar11 + _DAT_146159b5c) + _DAT_146159b68) + fVar14
      ;
      auVar34._8_4_ =
           fVar31 * fVar15 * (fVar31 * (fVar31 * fVar11 + _DAT_146159b5c) + _DAT_146159b68) + fVar15
      ;
      auVar34._12_4_ =
           fVar32 * fVar26 * (fVar32 * (fVar32 * fVar11 + _DAT_146159b5c) + _DAT_146159b68) + fVar26
      ;
      auVar7 = ZEXT416(0) << 0x20;
      auVar19 = vpcmpeqd_avx(auVar12,auVar7);
      auVar9 = vpsubd_avx(auVar7,auVar12);
      auVar12 = vpand_avx(auVar13,auVar30);
      auVar17 = vpand_avx(auVar17,auVar30);
      auVar4 = vpcmpeqd_avx(auVar12,auVar7);
      auVar7 = vpcmpeqd_avx(auVar17,auVar7);
      auVar12 = vblendvps_avx(auVar33,auVar34,auVar19);
      auVar17 = vblendvps_avx(auVar33,auVar34,auVar9);
      auVar23._0_4_ = auVar12._0_4_ ^ _DAT_145fc6f10;
      auVar23._4_4_ = auVar12._4_4_ ^ _DAT_145fc6f10;
      auVar23._8_4_ = auVar12._8_4_ ^ _DAT_145fc6f10;
      auVar23._12_4_ = auVar12._12_4_ ^ _DAT_145fc6f10;
      auVar12 = vblendvps_avx(auVar23,auVar12,auVar4);
      auVar24._0_4_ = auVar17._0_4_ ^ _DAT_145fc6f10;
      auVar24._4_4_ = auVar17._4_4_ ^ _DAT_145fc6f10;
      auVar24._8_4_ = auVar17._8_4_ ^ _DAT_145fc6f10;
      auVar24._12_4_ = auVar17._12_4_ ^ _DAT_145fc6f10;
      auVar17 = vblendvps_avx(auVar24,auVar17,auVar7);
      fVar11 = auVar12._0_4_;
      fVar8 = auVar17._0_4_;
      auVar19 = vshufps_avx(auVar12,auVar17,0x55);
      auVar4 = vshufps_avx(auVar17,auVar12,0x55);
      auVar7 = vshufps_avx(auVar12,auVar17,0xaa);
      auVar12 = vshufps_avx(auVar17,auVar12,0xaa);
      auVar12 = vshufps_avx(auVar12,auVar12,0xd8);
      auVar17 = vshufps_avx(auVar7,auVar7,0xd8);
      fVar1 = *param_1;
      fVar26 = param_1[2];
      fVar2 = param_1[1];
      auVar9._0_4_ = (float)((uint)(auVar19._0_4_ * fVar8 * auVar17._0_4_) ^ _DAT_146159b70) +
                     (float)((uint)(fVar11 * auVar4._0_4_ * auVar12._0_4_) ^ _DAT_146159b80);
      auVar9._4_4_ = (float)((uint)(auVar19._4_4_ * fVar8 * auVar17._4_4_) ^ _UNK_146159b74) +
                     (float)((uint)(fVar11 * auVar4._4_4_ * auVar12._4_4_) ^ _UNK_146159b84);
      auVar9._8_4_ = (float)((uint)(auVar19._8_4_ * fVar8 * auVar17._8_4_) ^ _UNK_146159b78) +
                     (float)((uint)(fVar11 * auVar4._8_4_ * auVar12._8_4_) ^ _UNK_146159b88);
      auVar9._12_4_ =
           (float)((uint)(auVar19._12_4_ * fVar8 * auVar17._12_4_) ^ _UNK_146159b7c) +
           (float)((uint)(fVar11 * auVar4._12_4_ * auVar12._12_4_) ^ _UNK_146159b8c);
      fVar8 = param_1[3];
      auVar7._0_4_ = (uint)auVar9._0_4_ ^ _DAT_145fc6f10;
      auVar7._4_4_ = (uint)auVar9._4_4_ ^ _DAT_145fc6f10;
      auVar7._8_4_ = (uint)auVar9._8_4_ ^ _DAT_145fc6f10;
      auVar7._12_4_ = (uint)auVar9._12_4_ ^ _DAT_145fc6f10;
      auVar12 = vblendps_avx(auVar7,auVar9,10);
      auVar19 = vshufps_avx(auVar12,auVar12,0x1b);
      auVar17 = vshufpd_avx(auVar9,auVar7,1);
      auVar12 = vblendps_avx(auVar7,auVar9,9);
      auVar12 = vshufps_avx(auVar12,auVar12,0xb1);
      *param_1 = fVar26 * auVar12._0_4_ +
                 fVar2 * auVar17._0_4_ + fVar1 * auVar19._0_4_ + auVar9._0_4_ * fVar8;
      param_1[1] = fVar26 * auVar12._4_4_ +
                   fVar2 * auVar17._4_4_ + fVar1 * auVar19._4_4_ + auVar9._4_4_ * fVar8;
      param_1[2] = fVar26 * auVar12._8_4_ +
                   fVar2 * auVar17._8_4_ + fVar1 * auVar19._8_4_ + auVar9._8_4_ * fVar8;
      param_1[3] = fVar26 * auVar12._12_4_ +
                   fVar2 * auVar17._12_4_ + fVar1 * auVar19._12_4_ + auVar9._12_4_ * fVar8;
    }
  }
  return;
}

