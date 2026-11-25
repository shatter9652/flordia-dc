// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140164600  size: 747 bytes
// Name:    FUN_140164600
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f2b280, FUN_14016a100, FUN_144f12450
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140164600(ulonglong param_1,ulonglong param_2,float *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  ushort uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auVar11 [16];
  short sVar12;
  short sVar18;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar26;
  float fVar27;
  undefined1 auVar25 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  float fStack_78;
  short sStack_74;
  undefined2 uStack_72;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auVar33 [64];
  
  param_1 = param_1 & 0xfffffffffffffff0;
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + 0x30) == '\x03') {
      uVar1 = *(undefined4 *)(param_1 + 0x9c);
      cVar5 = FUN_144f12450(uVar1);
      if (cVar5 != '\0') {
        FUN_14016a100(&fStack_78,param_1,0x41e5d6a1);
        auVar32 = (undefined1  [16])0x0;
        auVar15 = (undefined1  [16])0x0;
        uVar8 = (ulonglong)(((uint)fStack_78 & 0xffff) << 4);
        if ((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar8) ==
             (short)((uint)fStack_78 >> 0x10)) &&
           (lVar9 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar8), lVar9 != 0)) {
          auVar32._0_12_ = ZEXT812(0);
          auVar32._12_4_ = 0;
          auVar33 = ZEXT1664(auVar32);
          lVar2 = *(longlong *)(*(longlong *)(lVar9 + 8) + 0x20);
          if ((lVar2 != 0) && ((*(char *)(lVar2 + 0x10) == '\x06' && (sStack_74 != -2)))) {
            uVar6 = func_0x0001403dc2f0(lVar9);
            auVar32 = auVar33._0_16_;
            auVar15 = (undefined1  [16])0x0;
            if ((uVar6 != 0xffff) && (uVar6 < *(ushort *)(lVar2 + 0x9a))) {
              auVar15 = *(undefined1 (*) [16])
                         (*(longlong *)(lVar2 + 0x78) + 0x30 + (ulonglong)uVar6 * 0x40);
            }
          }
          auVar4 = *(undefined1 (*) [16])(lVar9 + 0x80);
          fVar10 = auVar15._0_4_;
          auVar17 = vpshufd_avx(auVar15,0x55);
          auVar19 = vpunpckhwd_avx(auVar4,auVar4);
          auVar19 = vpsrad_avx(auVar19,0x10);
          auVar19 = vcvtdq2ps_avx(auVar19);
          auVar19 = vshufpd_avx(auVar19,auVar19,3);
          auVar20._0_4_ = auVar19._0_4_ * _DAT_146159c90 + auVar4._0_4_;
          auVar20._4_4_ = auVar19._4_4_ * _UNK_146159c94 + auVar4._4_4_;
          auVar20._8_4_ = auVar19._8_4_ * _UNK_146159c98 + auVar4._8_4_;
          auVar20._12_4_ = auVar19._12_4_ * _UNK_146159c9c + auVar4._12_4_;
          auVar19._4_4_ = _DAT_14615a290;
          auVar19._0_4_ = _DAT_14615a290;
          auVar19._8_4_ = _DAT_14615a290;
          auVar19._12_4_ = _DAT_14615a290;
          auVar4 = vrcpps_avx(auVar19);
          fVar24 = auVar4._0_4_;
          fVar26 = auVar4._4_4_;
          fVar27 = auVar4._8_4_;
          fVar28 = auVar4._12_4_;
          fVar24 = (-(fVar24 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar24 + fVar24;
          fVar26 = (-(fVar26 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar26 + fVar26;
          fVar27 = (-(fVar27 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar27 + fVar27;
          fVar28 = (-(fVar28 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar28 + fVar28;
          auVar21._0_4_ = auVar20._0_4_ * fVar24;
          auVar21._4_4_ = auVar20._4_4_ * fVar26;
          auVar21._8_4_ = auVar20._8_4_ * fVar27;
          auVar21._12_4_ = auVar20._12_4_ * fVar28;
          auVar4 = vroundps_avx(auVar21,3);
          auVar29._0_4_ = -(auVar4._0_4_ * _DAT_14615a290) + auVar20._0_4_;
          auVar29._4_4_ = -(auVar4._4_4_ * _DAT_14615a290) + auVar20._4_4_;
          auVar29._8_4_ = -(auVar4._8_4_ * _DAT_14615a290) + auVar20._8_4_;
          auVar29._12_4_ = -(auVar4._12_4_ * _DAT_14615a290) + auVar20._12_4_;
          auVar22._0_4_ = (int)auVar4._0_4_;
          auVar22._4_4_ = (int)auVar4._4_4_;
          auVar22._8_4_ = (int)auVar4._8_4_;
          auVar22._12_4_ = (int)auVar4._12_4_;
          auVar16 = vpackssdw_avx(auVar22,auVar22);
          auVar21 = vpshufd_avx(auVar15,0xaa);
          auVar15 = vblendps_avx(auVar20,auVar29,3);
          auVar4 = vblendps_avx(auVar32,*(undefined1 (*) [16])(lVar9 + 0x60),7);
          auVar32 = vblendps_avx(auVar32,*(undefined1 (*) [16])(lVar9 + 0x70),7);
          auVar19 = vinsertps_avx(auVar15,auVar16,0x30);
          auVar34._0_4_ =
               auVar32._0_4_ * auVar21._0_4_ +
               auVar4._0_4_ * auVar17._0_4_ + fVar10 * *(float *)(lVar9 + 0x50) + auVar19._0_4_;
          auVar34._4_4_ =
               auVar32._4_4_ * auVar21._4_4_ +
               auVar4._4_4_ * auVar17._4_4_ + fVar10 * *(float *)(lVar9 + 0x54) + auVar19._4_4_;
          auVar34._8_4_ =
               auVar32._8_4_ * auVar21._8_4_ +
               auVar4._8_4_ * auVar17._8_4_ + fVar10 * *(float *)(lVar9 + 0x58) + auVar19._8_4_;
          auVar34._12_4_ =
               auVar32._12_4_ * auVar21._12_4_ +
               auVar4._12_4_ * auVar17._12_4_ + fVar10 * *(float *)(lVar9 + 0x5c) + auVar19._12_4_;
          auVar15 = vinsertps_avx(auVar34,auVar16,0x30);
          auVar23._0_4_ = auVar15._0_4_ * fVar24;
          auVar23._4_4_ = auVar15._4_4_ * fVar26;
          auVar23._8_4_ = auVar15._8_4_ * fVar27;
          auVar23._12_4_ = auVar15._12_4_ * fVar28;
          auVar32 = vroundps_avx(auVar23,3);
          auVar16._0_4_ = -(auVar32._0_4_ * _DAT_14615a290) + auVar15._0_4_;
          auVar16._4_4_ = -(auVar32._4_4_ * _DAT_14615a290) + auVar15._4_4_;
          auVar16._8_4_ = -(auVar32._8_4_ * _DAT_14615a290) + auVar15._8_4_;
          auVar16._12_4_ = -(auVar32._12_4_ * _DAT_14615a290) + auVar15._12_4_;
          auVar15 = vblendps_avx(auVar34,auVar16,3);
          auVar17._0_4_ = (int)auVar32._0_4_;
          auVar17._4_4_ = (int)auVar32._4_4_;
          auVar17._8_4_ = (int)auVar32._8_4_;
          auVar17._12_4_ = (int)auVar32._12_4_;
          auVar32 = vpackssdw_avx(auVar17,auVar17);
          sVar12 = auVar32._0_2_;
          auVar4._0_2_ = sVar12 + auVar19._0_2_;
          sVar18 = auVar32._2_2_;
          auVar4._2_2_ = sVar18 + auVar19._2_2_;
          auVar4._4_2_ = sVar12 + auVar19._4_2_;
          auVar4._6_2_ = sVar18 + auVar19._6_2_;
          auVar4._8_2_ = sVar12 + auVar19._8_2_;
          auVar4._10_2_ = sVar18 + auVar19._10_2_;
          auVar4._12_2_ = sVar12 + auVar19._12_2_;
          auVar4._14_2_ = sVar18 + auVar19._14_2_;
          auVar32 = vpblendd_avx2(auVar15,auVar4,8);
        }
        auVar15 = vpunpckhwd_avx(auVar32,auVar32);
        uVar7 = 2;
        goto LAB_1401646d6;
      }
      lVar9 = func_0x000144d9f7c0(uVar1);
      if (lVar9 != 0) {
        cVar5 = func_0x000144f14c70(*(undefined4 *)(lVar9 + 0x14),2);
        if (cVar5 != '\0') goto LAB_14016462f;
      }
    }
    uStack_58 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x78);
    func_0x000144dc3790(&uStack_58,&fStack_78);
    uVar7 = 0;
    *(ulonglong *)param_3 = CONCAT26(uStack_72,CONCAT24(sStack_74,fStack_78));
    *(ulonglong *)(param_3 + 2) = CONCAT44(fStack_6c,fStack_70);
  }
  else {
LAB_14016462f:
    FUN_144f2b280(param_1,&fStack_78);
    auVar15 = *(undefined1 (*) [16])(param_1 + 0x70);
    auVar30._4_4_ = _DAT_14615a290;
    auVar30._0_4_ = _DAT_14615a290;
    auVar30._8_4_ = _DAT_14615a290;
    auVar30._12_4_ = _DAT_14615a290;
    uVar7 = 1;
    auVar32 = vrcpps_avx(auVar30);
    auVar11._0_4_ = (fStack_68 + fStack_78) * _DAT_145fc6edc;
    auVar11._4_4_ = (fStack_64 + (float)CONCAT22(uStack_72,sStack_74)) * _DAT_145fc6edc;
    auVar11._8_4_ = (fStack_60 + fStack_70) * _DAT_145fc6edc;
    auVar11._12_4_ = (fStack_5c + fStack_6c) * _DAT_145fc6edc;
    fVar10 = auVar32._0_4_;
    fVar24 = auVar32._4_4_;
    fVar26 = auVar32._8_4_;
    fVar27 = auVar32._12_4_;
    auVar32 = vshufps_avx(auVar11,auVar11,0x55);
    auVar4 = vshufps_avx(auVar11,auVar11,0xaa);
    auVar13._0_4_ =
         auVar4._0_4_ * *(float *)(param_1 + 0x60) +
         auVar32._0_4_ * *(float *)(param_1 + 0x50) +
         auVar11._0_4_ * *(float *)(param_1 + 0x40) + auVar15._0_4_;
    auVar13._4_4_ =
         auVar4._4_4_ * *(float *)(param_1 + 100) +
         auVar32._4_4_ * *(float *)(param_1 + 0x54) +
         auVar11._0_4_ * *(float *)(param_1 + 0x44) + auVar15._4_4_;
    auVar13._8_4_ =
         auVar4._8_4_ * *(float *)(param_1 + 0x68) +
         auVar32._8_4_ * *(float *)(param_1 + 0x58) +
         auVar11._0_4_ * *(float *)(param_1 + 0x48) + auVar15._8_4_;
    auVar13._12_4_ =
         auVar4._12_4_ * *(float *)(param_1 + 0x6c) +
         auVar32._12_4_ * *(float *)(param_1 + 0x5c) +
         auVar11._0_4_ * *(float *)(param_1 + 0x4c) + auVar15._12_4_;
    auVar32 = vblendps_avx(auVar13,auVar15,8);
    auVar25._0_4_ =
         ((-(fVar10 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar10 + fVar10) * auVar32._0_4_;
    auVar25._4_4_ =
         ((-(fVar24 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar24 + fVar24) * auVar32._4_4_;
    auVar25._8_4_ =
         ((-(fVar26 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar26 + fVar26) * auVar32._8_4_;
    auVar25._12_4_ =
         ((-(fVar27 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar27 + fVar27) * auVar32._12_4_;
    auVar4 = vroundps_avx(auVar25,3);
    auVar31._0_4_ = -(auVar4._0_4_ * _DAT_14615a290) + auVar32._0_4_;
    auVar31._4_4_ = -(auVar4._4_4_ * _DAT_14615a290) + auVar32._4_4_;
    auVar31._8_4_ = -(auVar4._8_4_ * _DAT_14615a290) + auVar32._8_4_;
    auVar31._12_4_ = -(auVar4._12_4_ * _DAT_14615a290) + auVar32._12_4_;
    auVar32 = vblendps_avx(auVar13,auVar31,3);
    auVar14._0_4_ = (int)auVar4._0_4_;
    auVar14._4_4_ = (int)auVar4._4_4_;
    auVar14._8_4_ = (int)auVar4._8_4_;
    auVar14._12_4_ = (int)auVar4._12_4_;
    auVar4 = vpackssdw_avx(auVar14,auVar14);
    sVar12 = auVar4._0_2_;
    auVar3._0_2_ = sVar12 + auVar15._0_2_;
    sVar18 = auVar4._2_2_;
    auVar3._2_2_ = sVar18 + auVar15._2_2_;
    auVar3._4_2_ = sVar12 + auVar15._4_2_;
    auVar3._6_2_ = sVar18 + auVar15._6_2_;
    auVar3._8_2_ = sVar12 + auVar15._8_2_;
    auVar3._10_2_ = sVar18 + auVar15._10_2_;
    auVar3._12_2_ = sVar12 + auVar15._12_2_;
    auVar3._14_2_ = sVar18 + auVar15._14_2_;
    auVar32 = vpblendd_avx2(auVar32,auVar3,8);
    auVar15 = vpunpckhwd_avx(auVar32,auVar32);
LAB_1401646d6:
    auVar15 = vpsrad_avx(auVar15,0x10);
    auVar15 = vcvtdq2ps_avx(auVar15);
    auVar15 = vshufpd_avx(auVar15,auVar15,3);
    fVar10 = auVar15._4_4_ * _UNK_146159c94;
    fVar26 = auVar15._8_4_ * _UNK_146159c98;
    fVar24 = auVar15._12_4_ * _UNK_146159c9c;
    *param_3 = auVar15._0_4_ * _DAT_146159c90 + auVar32._0_4_;
    param_3[1] = fVar10 + auVar32._4_4_;
    param_3[2] = fVar26 + auVar32._8_4_;
    param_3[3] = fVar24 + auVar32._12_4_;
  }
  return uVar7;
}

