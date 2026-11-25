// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ca040  size: 575 bytes
// Name:    FUN_1400ca040
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400ca040(longlong param_1,longlong *param_2,float param_3,longlong param_4,
                       longlong param_5,longlong param_6,longlong param_7)

{
  undefined1 auVar1 [16];
  byte bVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  short sVar6;
  short sVar12;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar13;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  float fVar18;
  undefined1 auVar15 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  
  auVar20 = ZEXT464((uint)(param_3 - *(float *)(param_6 + 0x78)));
  bVar2 = func_0x0001400ca280(param_4);
  fVar13 = *(float *)(&DAT_14abbd860 + (ulonglong)bVar2 * 4);
  auVar10 = ZEXT416(0) << 0x20;
  if (fVar13 <= (float)((uint)auVar20._0_4_ & _DAT_145fc6f4c)) {
    auVar10 = vcmpss_avx(auVar20._0_16_,ZEXT416(0) << 0x20,1);
    auVar5._0_4_ = (uint)fVar13 ^ _DAT_145fc6f10;
    auVar5._4_4_ = _DAT_145fc6f10;
    auVar5._8_4_ = _DAT_145fc6f10;
    auVar5._12_4_ = _DAT_145fc6f10;
    auVar10 = vblendvps_avx(auVar5,ZEXT416((uint)fVar13),auVar10);
    auVar10 = ZEXT416((uint)(auVar10._0_4_ + auVar20._0_4_));
  }
  uVar4 = auVar10._0_8_;
  if (((*(byte *)(param_1 + 0x91) & 2) != 0) && (*(float *)(param_1 + 0x370) < _DAT_145fc6ed8)) {
    auVar20 = ZEXT1664(auVar10);
    auVar21 = ZEXT1664(*(undefined1 (*) [16])(param_5 + 0x150));
    auVar10._4_4_ = _DAT_145fc6f50;
    auVar10._0_4_ = _DAT_145fc6f50;
    auVar10._8_4_ = _DAT_145fc6f50;
    auVar10._12_4_ = _DAT_145fc6f50;
    auVar10 = vcmpps_avx(*(undefined1 (*) [16])(param_5 + 0x150),auVar10,0);
    uVar3 = vmovmskps_avx(auVar10);
    if ((~(byte)uVar3 & 7) != 0) {
      (**(code **)(*param_2 + 0x88))(param_2,&fStack_98);
      auVar10 = vshufps_avx(auStack_78,auStack_88,0x33);
      auVar10 = vshufps_avx(auStack_88,auVar10,0x8f);
      auVar14._0_4_ = (auVar10._0_4_ + _DAT_145fc6ed8) * auVar21._0_4_;
      auVar14._4_4_ = (auVar10._4_4_ + _DAT_145fc6ed8) * auVar21._4_4_;
      auVar14._8_4_ = (auVar10._8_4_ + _DAT_145fc6ed8) * auVar21._8_4_;
      auVar14._12_4_ = (auVar10._12_4_ + _DAT_145fc6ed8) * auVar21._12_4_;
      auVar10 = vshufps_avx(auVar14,auVar14,0x55);
      auVar5 = vshufps_avx(auVar14,auVar14,0xaa);
      auVar19._0_4_ =
           auStack_78._0_4_ * auVar5._0_4_ +
           auStack_88._0_4_ * auVar10._0_4_ + auVar14._0_4_ * fStack_98 + auStack_68._0_4_;
      auVar19._4_4_ =
           auStack_78._4_4_ * auVar5._4_4_ +
           auStack_88._4_4_ * auVar10._4_4_ + auVar14._0_4_ * fStack_94 + auStack_68._4_4_;
      auVar19._8_4_ =
           auStack_78._8_4_ * auVar5._8_4_ +
           auStack_88._8_4_ * auVar10._8_4_ + auVar14._0_4_ * fStack_90 + auStack_68._8_4_;
      auVar19._12_4_ =
           auStack_78._12_4_ * auVar5._12_4_ +
           auStack_88._12_4_ * auVar10._12_4_ + auVar14._0_4_ * fStack_8c + auStack_68._12_4_;
      auVar7._4_4_ = _DAT_14615a290;
      auVar7._0_4_ = _DAT_14615a290;
      auVar7._8_4_ = _DAT_14615a290;
      auVar7._12_4_ = _DAT_14615a290;
      auVar10 = vblendps_avx(auVar19,auStack_68,8);
      auVar5 = vrcpps_avx(auVar7);
      fVar13 = auVar5._0_4_;
      fVar16 = auVar5._4_4_;
      fVar17 = auVar5._8_4_;
      fVar18 = auVar5._12_4_;
      auVar15._0_4_ =
           auVar10._0_4_ * ((-(fVar13 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar13 + fVar13);
      auVar15._4_4_ =
           auVar10._4_4_ * ((-(fVar16 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar16 + fVar16);
      auVar15._8_4_ =
           auVar10._8_4_ * ((-(fVar17 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar17 + fVar17);
      auVar15._12_4_ =
           auVar10._12_4_ * ((-(fVar18 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar18 + fVar18);
      auVar5 = vroundps_avx(auVar15,3);
      auVar8._0_4_ = -(auVar5._0_4_ * _DAT_14615a290) + auVar10._0_4_;
      auVar8._4_4_ = -(auVar5._4_4_ * _DAT_14615a290) + auVar10._4_4_;
      auVar8._8_4_ = -(auVar5._8_4_ * _DAT_14615a290) + auVar10._8_4_;
      auVar8._12_4_ = -(auVar5._12_4_ * _DAT_14615a290) + auVar10._12_4_;
      auVar10 = vblendps_avx(auVar19,auVar8,3);
      auVar9._0_4_ = (int)auVar5._0_4_;
      auVar9._4_4_ = (int)auVar5._4_4_;
      auVar9._8_4_ = (int)auVar5._8_4_;
      auVar9._12_4_ = (int)auVar5._12_4_;
      auVar5 = vpackssdw_avx(auVar9,auVar9);
      sVar6 = auVar5._0_2_;
      auVar1._0_2_ = sVar6 + auStack_68._0_2_;
      sVar12 = auVar5._2_2_;
      auVar1._2_2_ = sVar12 + auStack_68._2_2_;
      auVar1._4_2_ = sVar6 + auStack_68._4_2_;
      auVar1._6_2_ = sVar12 + auStack_68._6_2_;
      auVar1._8_2_ = sVar6 + auStack_68._8_2_;
      auVar1._10_2_ = sVar12 + auStack_68._10_2_;
      auVar1._12_2_ = sVar6 + auStack_68._12_2_;
      auVar1._14_2_ = sVar12 + auStack_68._14_2_;
      auVar5 = vpblendd_avx2(auVar10,auVar1,8);
      auVar10 = vpunpckhwd_avx(auVar5,auVar5);
      auVar10 = vpsrad_avx(auVar10,0x10);
      auVar10 = vcvtdq2ps_avx(auVar10);
      auVar10 = vshufpd_avx(auVar10,auVar10,3);
      auVar11._0_4_ = auVar10._0_4_ * _DAT_146159c90 + auVar5._0_4_;
      auVar11._4_4_ = auVar10._4_4_ * _UNK_146159c94 + auVar5._4_4_;
      auVar11._8_4_ = auVar10._8_4_ * _UNK_146159c98 + auVar5._8_4_;
      auVar11._12_4_ = auVar10._12_4_ * _UNK_146159c9c + auVar5._12_4_;
      auVar10 = vshufpd_avx(auVar11,auVar11,1);
      fVar13 = auVar10._0_4_ - *(float *)(param_6 + 0x78);
      uVar4 = (ulonglong)(uint)((auVar20._0_4_ - fVar13) * *(float *)(param_1 + 0x370) + fVar13);
    }
  }
  if ((float)uVar4 < 0.0) {
    if ((((*(float *)(param_5 + 0x19c) < _DAT_145fc6ed8) && ((*(byte *)(param_4 + 0x140) & 4) == 0))
        && ((*(byte *)(param_4 + 0x140) & 1) == 0)) &&
       (((*(byte *)(param_4 + 0x14d) & 1) == 0 || ((*(byte *)(param_4 + 0x120) & 0x20) != 0)))) {
      uVar4 = (ulonglong)(uint)(*(float *)(param_5 + 0x19c) * (float)uVar4);
    }
  }
  else {
    *(byte *)(param_7 + 4) = *(byte *)(param_7 + 4) & 0xf7;
  }
  return uVar4;
}

