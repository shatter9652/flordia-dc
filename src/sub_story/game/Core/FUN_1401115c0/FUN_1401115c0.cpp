// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401115c0  size: 540 bytes
// Name:    FUN_1401115c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401115c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  lVar1 = *(longlong *)(param_2 + 0x50);
  if (lVar1 != 0) {
    cVar2 = func_0x000144f1f350();
    if (cVar2 != '\0') {
      auVar11._4_4_ = _DAT_145fc6edc;
      auVar11._0_4_ = _DAT_145fc6edc;
      auVar11._8_4_ = _DAT_145fc6edc;
      auVar11._12_4_ = _DAT_145fc6edc;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uStack_78;
      fVar13 = uStack_70 * _DAT_146159c48;
      auVar7._0_4_ = (uint)fVar13 & _DAT_145fc6f10;
      auVar7._4_4_ = (uint)fVar13 & _DAT_145fc6f10;
      auVar7._8_4_ = (uint)fVar13 & _DAT_145fc6f10;
      auVar7._12_4_ = (uint)fVar13 & _DAT_145fc6f10;
      auVar7 = auVar7 | auVar11;
      auVar12._4_4_ = _DAT_145f43778;
      auVar12._0_4_ = _DAT_145f43778;
      auVar12._8_4_ = _DAT_145f43778;
      auVar12._12_4_ = _DAT_145f43778;
      auVar11 = vpcmpeqd_avx(auVar7,auVar7);
      auVar6._0_4_ = (int)(fVar13 + auVar7._0_4_);
      auVar6._4_4_ = (int)(fVar13 + auVar7._4_4_);
      auVar6._8_4_ = (int)(fVar13 + auVar7._8_4_);
      auVar6._12_4_ = (int)(fVar13 + auVar7._12_4_);
      auVar7 = vcvtdq2ps_avx(auVar6);
      auVar5 = vpsubd_avx(auVar6,auVar11);
      fVar17 = auVar7._0_4_ * _DAT_146159b50 + auVar7._0_4_ * _DAT_146159b4c + uStack_70;
      fVar20 = auVar7._4_4_ * _DAT_146159b50 + auVar7._4_4_ * _DAT_146159b4c + uStack_70;
      fVar21 = auVar7._8_4_ * _DAT_146159b50 + auVar7._8_4_ * _DAT_146159b4c + uStack_70;
      fVar22 = auVar7._12_4_ * _DAT_146159b50 + auVar7._12_4_ * _DAT_146159b4c + uStack_70;
      fVar13 = fVar17 * fVar17;
      fVar14 = fVar20 * fVar20;
      fVar15 = fVar21 * fVar21;
      fVar16 = fVar22 * fVar22;
      auVar9._4_4_ = _DAT_145fc6ed8;
      auVar9._0_4_ = _DAT_145fc6ed8;
      auVar9._8_4_ = _DAT_145fc6ed8;
      auVar9._12_4_ = _DAT_145fc6ed8;
      auVar24._0_4_ =
           fVar13 * (fVar13 * (fVar13 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           _DAT_145fc6ed8;
      auVar24._4_4_ =
           fVar14 * (fVar14 * (fVar14 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           _DAT_145fc6ed8;
      auVar24._8_4_ =
           fVar15 * (fVar15 * (fVar15 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           _DAT_145fc6ed8;
      auVar24._12_4_ =
           fVar16 * (fVar16 * (fVar16 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
           _DAT_145fc6ed8;
      auVar7 = vpand_avx(auVar6,auVar12);
      auVar23._0_4_ =
           fVar17 * fVar13 * (fVar13 * (fVar13 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar17;
      auVar23._4_4_ =
           fVar20 * fVar14 * (fVar14 * (fVar14 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar20;
      auVar23._8_4_ =
           fVar21 * fVar15 * (fVar15 * (fVar15 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar21;
      auVar23._12_4_ =
           fVar22 * fVar16 * (fVar16 * (fVar16 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar22;
      auVar18._4_4_ = _DAT_145f43774;
      auVar18._0_4_ = _DAT_145f43774;
      auVar18._8_4_ = _DAT_145f43774;
      auVar18._12_4_ = _DAT_145f43774;
      auVar11 = vpcmpeqd_avx(auVar7,(undefined1  [16])0x0);
      auVar12 = vpsubd_avx((undefined1  [16])0x0,auVar7);
      auVar7 = vblendvps_avx(auVar24,auVar23,auVar11);
      auVar11 = vblendvps_avx(auVar24,auVar23,auVar12);
      auVar5 = vpand_avx(auVar18,auVar5);
      auVar12 = vpand_avx(auVar18,auVar6);
      auVar19._0_4_ = auVar7._0_4_ ^ _DAT_145fc6f10;
      auVar19._4_4_ = auVar7._4_4_ ^ _DAT_145fc6f10;
      auVar19._8_4_ = auVar7._8_4_ ^ _DAT_145fc6f10;
      auVar19._12_4_ = auVar7._12_4_ ^ _DAT_145fc6f10;
      auVar4._0_4_ = auVar11._0_4_ ^ _DAT_145fc6f10;
      auVar4._4_4_ = auVar11._4_4_ ^ _DAT_145fc6f10;
      auVar4._8_4_ = auVar11._8_4_ ^ _DAT_145fc6f10;
      auVar4._12_4_ = auVar11._12_4_ ^ _DAT_145fc6f10;
      auVar5 = vpcmpeqd_avx(auVar5,(undefined1  [16])0x0);
      auVar12 = vpcmpeqd_avx(auVar12,(undefined1  [16])0x0);
      auVar11 = vblendvps_avx(auVar4,auVar11,auVar5);
      auVar7 = vblendvps_avx(auVar19,auVar7,auVar12);
      auVar11 = vpblendd_avx2((undefined1  [16])0x0,auVar11,1);
      auVar7 = vpunpckldq_avx(auVar11,auVar7);
      *(undefined1 (*) [16])(lVar1 + 0xc10) = auVar7;
      if (*(char *)(*(longlong *)(lVar1 + 0x20) + 0x731) == '\0') {
        fVar13 = (float)uStack_78;
        auVar5._0_4_ = fVar13 * fVar13;
        fVar15 = (float)(uStack_78 >> 0x20);
        auVar5._4_4_ = fVar15 * fVar15;
        auVar5._8_8_ = 0;
        auVar7 = vblendps_avx(auVar5,(undefined1  [16])0x0,8);
        auVar7 = vhaddps_avx(auVar7,auVar7);
        auVar5 = vhaddps_avx(auVar7,auVar7);
        auVar7 = vrsqrtps_avx(auVar5);
        fVar14 = auVar7._0_4_;
        fVar16 = auVar7._4_4_;
        fVar17 = auVar7._8_4_;
        fVar20 = auVar7._12_4_;
        auVar11 = vcmpps_avx(auVar9,auVar5,1);
        auVar7 = vcmpps_avx(auVar5,(undefined1  [16])0x0,1);
        auVar8._0_4_ = ((fVar14 * fVar14 * auVar5._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar14
                       + fVar14) * fVar13;
        auVar8._4_4_ = ((fVar16 * fVar16 * auVar5._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar16
                       + fVar16) * fVar15;
        auVar8._8_4_ = ((fVar17 * fVar17 * auVar5._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar17
                       + fVar17) * 0.0;
        auVar8._12_4_ =
             ((fVar20 * fVar20 * auVar5._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) * fVar20 + fVar20)
             * 0.0;
        auVar10._0_4_ = auVar8._0_4_ * 0.0;
        auVar10._4_4_ = auVar8._4_4_ * 0.0;
        auVar10._8_4_ = auVar8._8_4_ * 0.0;
        auVar10._12_4_ = auVar8._12_4_ * 0.0;
        auVar7 = vblendvps_avx(auVar3,auVar10,auVar7);
        auVar3 = vblendvps_avx(auVar7,auVar8,auVar11);
      }
      *(undefined1 (*) [16])(lVar1 + 0xcb0) = auVar3;
    }
  }
  return;
}

