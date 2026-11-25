// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e7dc0  size: 2541 bytes
// Name:    FUN_1400e7dc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f63b80, FUN_1451ce040
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e7dc0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int *param_5,
                  uint param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  byte bVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar19;
  undefined1 auVar18 [16];
  undefined1 extraout_var [56];
  short sVar20;
  short sVar29;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar48;
  float fVar49;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar50;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  undefined1 auVar57 [16];
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  undefined1 auVar62 [64];
  undefined1 auVar63 [64];
  undefined1 auVar64 [64];
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined4 uStack_224;
  longlong lStack_220;
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
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 auStack_f8 [16];
  
  uVar15 = CONCAT44(_UNK_14614f7fc,_UNK_14614f7f8);
  *(ulonglong *)(param_3 + 0x100) = CONCAT44(_UNK_14614f7f4,_DAT_14614f7f0);
  *(undefined8 *)(param_3 + 0x108) = uVar15;
  lVar13 = *(longlong *)(param_4 + 8);
  auVar56 = ZEXT1664(*(undefined1 (*) [16])(lVar13 + 0x10));
  uVar11 = *(undefined4 *)(lVar13 + 0x18);
  auVar59 = ZEXT1664(CONCAT412(uVar11,CONCAT48(uVar11,CONCAT44(uVar11,uVar11))));
  uVar11 = *(undefined4 *)(lVar13 + 0x68);
  auVar60 = ZEXT1664(CONCAT412(uVar11,CONCAT48(uVar11,CONCAT44(uVar11,uVar11))));
  lVar13 = func_0x000144fa1050(*(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c));
  if (lVar13 == 0) {
    auVar55 = ZEXT1264(ZEXT812(0));
LAB_1400e7eab:
    bVar14 = param_6 == 0;
    bVar9 = 1;
    if (param_6 == 1) {
      if (auVar55._0_4_ <= 0.0) goto LAB_1400e7ec8;
    }
    if (((*(byte *)(param_3 + 0x110) & 0xc) == 0) && ((*(byte *)(param_2 + 0xf0) & 8) == 0)) {
      bVar9 = (*(byte *)(param_1 + 0x91) & 4) >> 2;
    }
  }
  else {
    auVar61._0_8_ = FUN_1451ce040(*(undefined8 *)(lVar13 + 8));
    auVar61._8_56_ = extraout_var;
    auVar55 = ZEXT1664(auVar61._0_16_);
    if (param_6 != 0) goto LAB_1400e7eab;
    if ((float)auVar61._0_8_ <= 0.0) goto LAB_1400e7eab;
    bVar9 = 1;
    bVar14 = true;
  }
LAB_1400e7ec8:
  auVar27 = auVar56._0_16_;
  lVar13 = (ulonglong)param_6 * 0x1b0;
  if (*param_5 < 0) {
    auVar23._4_4_ = _DAT_145fc6f54;
    auVar23._0_4_ = _DAT_145fc6f54;
    auVar23._8_4_ = _DAT_145fc6f54;
    auVar23._12_4_ = _DAT_145fc6f54;
  }
  else {
    iVar3 = param_5[6];
    auVar23._4_4_ = iVar3;
    auVar23._0_4_ = iVar3;
    auVar23._8_4_ = iVar3;
    auVar23._12_4_ = iVar3;
  }
  auVar61 = ZEXT1664(auVar23);
  uVar11 = *(undefined4 *)(*(longlong *)(param_1 + 0x188) + 0xb8 + lVar13);
  auVar62 = ZEXT1664(CONCAT412(uVar11,CONCAT48(uVar11,CONCAT44(uVar11,uVar11))));
  *(byte *)(param_3 + 0x110) = *(byte *)(param_3 + 0x110) | 0x20;
  puVar1 = (undefined8 *)(param_3 + 0x100);
  if (bVar9 == 0) {
    auStack_178 = vmaxps_avx(auVar59._0_16_,auVar60._0_16_);
    auVar23 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auStack_178,4);
    *(undefined1 (*) [16])(param_3 + 0xf0) = auVar23;
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x188) + 0xc0 + lVar13);
    uVar15 = puVar2[1];
    *puVar1 = *puVar2;
    *(undefined8 *)(param_3 + 0x108) = uVar15;
    goto LAB_1400e8484;
  }
  uStack_224 = 0x3f490fdb;
  plVar4 = *(longlong **)(param_3 + 8);
  iVar3 = *(int *)(param_3 + 0x10);
  lStack_220 = param_4;
  iVar10 = func_0x000144e05fa0(plVar4[1]);
  fVar42 = 0.0;
  fVar43 = 0.0;
  fVar48 = 0.0;
  fVar49 = 0.0;
  fVar65 = 0.0;
  fVar66 = 0.0;
  fVar67 = 0.0;
  fVar68 = 0.0;
  if (iVar3 != iVar10) {
    uVar11 = (**(code **)(*plVar4 + 0xf0))(plVar4,iVar3);
    (**(code **)(*plVar4 + 0x108))(plVar4,uVar11,auStack_168);
    fVar65 = fStack_158;
    fVar66 = fStack_154;
    fVar67 = fStack_150;
    fVar68 = fStack_14c;
  }
  (**(code **)(*plVar4 + 0x88))(plVar4,auStack_168);
  auVar54._4_4_ = fStack_154;
  auVar54._0_4_ = fStack_158;
  auVar54._8_4_ = fStack_150;
  auVar54._12_4_ = fStack_14c;
  auVar63 = ZEXT1664(CONCAT412(_DAT_145fc6ed8,
                               CONCAT48(_DAT_145fc6ed8,CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8))));
  auVar27 = vshufps_avx(auVar54,auStack_148,0x33);
  auVar27 = vshufps_avx(auVar54,auVar27,0x2f);
  auVar58 = ZEXT1664(CONCAT412(fVar68 * (_DAT_145fc6ed8 + auVar27._12_4_),
                               CONCAT48(fVar67 * (_DAT_145fc6ed8 + auVar27._8_4_),
                                        CONCAT44(fVar66 * (_DAT_145fc6ed8 + auVar27._4_4_),
                                                 fVar65 * (_DAT_145fc6ed8 + auVar27._0_4_)))));
  (**(code **)(*plVar4 + 0x88))(plVar4,&fStack_128);
  fVar65 = auVar58._0_4_;
  auVar27._4_4_ = _DAT_14615a290;
  auVar27._0_4_ = _DAT_14615a290;
  auVar27._8_4_ = _DAT_14615a290;
  auVar27._12_4_ = _DAT_14615a290;
  auVar57 = auVar58._0_16_;
  auVar23 = vshufps_avx(auVar57,auVar57,0x55);
  auVar57 = vshufps_avx(auVar57,auVar57,0xaa);
  auVar27 = vrcpps_avx(auVar27);
  auVar16._0_4_ =
       auVar57._0_4_ * fStack_108 +
       auVar23._0_4_ * fStack_118 + fVar65 * fStack_128 + auStack_f8._0_4_;
  auVar16._4_4_ =
       auVar57._4_4_ * fStack_104 +
       auVar23._4_4_ * fStack_114 + fVar65 * fStack_124 + auStack_f8._4_4_;
  auVar16._8_4_ =
       auVar57._8_4_ * fStack_100 +
       auVar23._8_4_ * fStack_110 + fVar65 * fStack_120 + auStack_f8._8_4_;
  auVar16._12_4_ =
       auVar57._12_4_ * fStack_fc +
       auVar23._12_4_ * fStack_10c + fVar65 * fStack_11c + auStack_f8._12_4_;
  auStack_188 = auVar59._0_16_;
  fVar65 = auVar27._0_4_;
  fVar66 = auVar27._4_4_;
  fVar67 = auVar27._8_4_;
  fVar68 = auVar27._12_4_;
  fVar65 = (-(fVar65 * _DAT_14615a290) + auVar63._0_4_) * fVar65 + fVar65;
  fVar66 = (-(fVar66 * _DAT_14615a290) + auVar63._4_4_) * fVar66 + fVar66;
  fVar67 = (-(fVar67 * _DAT_14615a290) + auVar63._8_4_) * fVar67 + fVar67;
  fVar68 = (-(fVar68 * _DAT_14615a290) + auVar63._12_4_) * fVar68 + fVar68;
  auVar27 = vblendps_avx(auVar16,auStack_f8,8);
  auVar44._0_4_ = fVar65 * auVar27._0_4_;
  auVar44._4_4_ = fVar66 * auVar27._4_4_;
  auVar44._8_4_ = fVar67 * auVar27._8_4_;
  auVar44._12_4_ = fVar68 * auVar27._12_4_;
  auVar23 = vroundps_avx(auVar44,3);
  auVar51._0_4_ = -(auVar23._0_4_ * _DAT_14615a290) + auVar27._0_4_;
  auVar51._4_4_ = -(auVar23._4_4_ * _DAT_14615a290) + auVar27._4_4_;
  auVar51._8_4_ = -(auVar23._8_4_ * _DAT_14615a290) + auVar27._8_4_;
  auVar51._12_4_ = -(auVar23._12_4_ * _DAT_14615a290) + auVar27._12_4_;
  auVar21._0_4_ = (int)auVar23._0_4_;
  auVar21._4_4_ = (int)auVar23._4_4_;
  auVar21._8_4_ = (int)auVar23._8_4_;
  auVar21._12_4_ = (int)auVar23._12_4_;
  auVar27 = vblendps_avx(auVar16,auVar51,3);
  auVar23 = vpackssdw_avx(auVar21,auVar21);
  sVar20 = auVar23._0_2_;
  auVar57._0_2_ = sVar20 + auStack_f8._0_2_;
  sVar29 = auVar23._2_2_;
  auVar57._2_2_ = sVar29 + auStack_f8._2_2_;
  auVar57._4_2_ = sVar20 + auStack_f8._4_2_;
  auVar57._6_2_ = sVar29 + auStack_f8._6_2_;
  auVar57._8_2_ = sVar20 + auStack_f8._8_2_;
  auVar57._10_2_ = sVar29 + auStack_f8._10_2_;
  auVar57._12_2_ = sVar20 + auStack_f8._12_2_;
  auVar57._14_2_ = sVar29 + auStack_f8._14_2_;
  auVar27 = vpblendd_avx2(auVar27,auVar57,8);
  auVar27 = vblendps_avx(auVar27,auStack_188,4);
  auVar58 = ZEXT1664(auVar27);
  plVar4 = *(longlong **)(param_3 + 0x18);
  iVar3 = *(int *)(param_3 + 0x20);
  iVar10 = func_0x000144e05fa0(plVar4[1]);
  if (iVar3 != iVar10) {
    uVar11 = (**(code **)(*plVar4 + 0xf0))(plVar4,iVar3);
    (**(code **)(*plVar4 + 0x108))(plVar4,uVar11,auStack_168);
    fVar42 = fStack_158;
    fVar43 = fStack_154;
    fVar48 = fStack_150;
    fVar49 = fStack_14c;
  }
  (**(code **)(*plVar4 + 0x88))(plVar4,auStack_168);
  auVar7._4_4_ = fStack_154;
  auVar7._0_4_ = fStack_158;
  auVar7._8_4_ = fStack_150;
  auVar7._12_4_ = fStack_14c;
  auVar27 = vshufps_avx(auVar7,auStack_148,0x33);
  auVar27 = vshufps_avx(auVar7,auVar27,0x2f);
  auVar64 = ZEXT1664(CONCAT412(fVar49 * (auVar63._12_4_ + auVar27._12_4_),
                               CONCAT48(fVar48 * (auVar63._8_4_ + auVar27._8_4_),
                                        CONCAT44(fVar43 * (auVar63._4_4_ + auVar27._4_4_),
                                                 fVar42 * (auVar63._0_4_ + auVar27._0_4_)))));
  (**(code **)(*plVar4 + 0x88))(plVar4);
  param_4 = lStack_220;
  uVar12 = _DAT_145fc6f4c;
  fVar42 = auVar55._0_4_;
  fVar43 = auVar64._0_4_;
  auVar23 = auVar64._0_16_;
  auVar27 = vshufps_avx(auVar23,auVar23,0x55);
  auVar23 = vshufps_avx(auVar23,auVar23,0xaa);
  auVar17._0_4_ =
       auVar23._0_4_ * fStack_108 +
       auVar27._0_4_ * fStack_118 + fVar43 * fStack_128 + auStack_f8._0_4_;
  auVar17._4_4_ =
       auVar23._4_4_ * fStack_104 +
       auVar27._4_4_ * fStack_114 + fVar43 * fStack_124 + auStack_f8._4_4_;
  auVar17._8_4_ =
       auVar23._8_4_ * fStack_100 +
       auVar27._8_4_ * fStack_110 + fVar43 * fStack_120 + auStack_f8._8_4_;
  auVar17._12_4_ =
       auVar23._12_4_ * fStack_fc +
       auVar27._12_4_ * fStack_10c + fVar43 * fStack_11c + auStack_f8._12_4_;
  auStack_198 = auVar60._0_16_;
  auVar27 = vblendps_avx(auVar17,auStack_f8,8);
  auVar30._0_4_ = fVar65 * auVar27._0_4_;
  auVar30._4_4_ = fVar66 * auVar27._4_4_;
  auVar30._8_4_ = fVar67 * auVar27._8_4_;
  auVar30._12_4_ = fVar68 * auVar27._12_4_;
  auVar23 = vroundps_avx(auVar30,3);
  auVar45._0_4_ = auVar23._0_4_ * _DAT_14615ad78 + auVar27._0_4_;
  auVar45._4_4_ = auVar23._4_4_ * _DAT_14615ad78 + auVar27._4_4_;
  auVar45._8_4_ = auVar23._8_4_ * _DAT_14615ad78 + auVar27._8_4_;
  auVar45._12_4_ = auVar23._12_4_ * _DAT_14615ad78 + auVar27._12_4_;
  auVar22._0_4_ = (int)auVar23._0_4_;
  auVar22._4_4_ = (int)auVar23._4_4_;
  auVar22._8_4_ = (int)auVar23._8_4_;
  auVar22._12_4_ = (int)auVar23._12_4_;
  auVar27 = vblendps_avx(auVar17,auVar45,3);
  auVar23 = vpackssdw_avx(auVar22,auVar22);
  sVar20 = auVar23._0_2_;
  auVar5._0_2_ = sVar20 + auStack_f8._0_2_;
  sVar29 = auVar23._2_2_;
  auVar5._2_2_ = sVar29 + auStack_f8._2_2_;
  auVar5._4_2_ = sVar20 + auStack_f8._4_2_;
  auVar5._6_2_ = sVar29 + auStack_f8._6_2_;
  auVar5._8_2_ = sVar20 + auStack_f8._8_2_;
  auVar5._10_2_ = sVar29 + auStack_f8._10_2_;
  auVar5._12_2_ = sVar20 + auStack_f8._12_2_;
  auVar5._14_2_ = sVar29 + auStack_f8._14_2_;
  auVar27 = vpblendd_avx2(auVar27,auVar5,8);
  auVar27 = vblendps_avx(auVar27,auStack_198,4);
  auVar23 = vsubps_avx(auVar27,auVar58._0_16_);
  auStack_1a8 = vpsubw_avx(auVar27,auVar58._0_16_);
  auVar27 = vblendps_avx(auVar23,auStack_1a8,8);
  auVar23 = vpunpckhwd_avx(auVar27,auVar27);
  auVar23 = vpsrad_avx(auVar23,0x10);
  auVar23 = vcvtdq2ps_avx(auVar23);
  auVar23 = vshufpd_avx(auVar23,auVar23,3);
  auVar31._0_4_ = auVar23._0_4_ * _DAT_146159c90 + auVar27._0_4_;
  auVar31._4_4_ = auVar23._4_4_ * _UNK_146159c94 + auVar27._4_4_;
  auVar31._8_4_ = auVar23._8_4_ * _UNK_146159c98 + auVar27._8_4_;
  auVar31._12_4_ = auVar23._12_4_ * _UNK_146159c9c + auVar27._12_4_;
  auVar23 = ZEXT816(0) << 0x20;
  auVar27 = vcmpps_avx(auVar31,auVar23,0);
  uVar11 = vmovmskps_avx(auVar27);
  if ((~(byte)uVar11 & 7) != 0) {
    auVar24._0_4_ = auVar31._0_4_ * auVar31._0_4_;
    auVar24._4_4_ = auVar31._4_4_ * auVar31._4_4_;
    auVar24._8_4_ = auVar31._8_4_ * auVar31._8_4_;
    auVar24._12_4_ = auVar31._12_4_ * auVar31._12_4_;
    auVar27 = vblendps_avx(auVar24,auVar23,8);
    auVar27 = vhaddps_avx(auVar27,auVar27);
    auVar57 = vhaddps_avx(auVar27,auVar27);
    auVar27 = vrsqrtps_avx(auVar57);
    fVar65 = auVar27._0_4_;
    fVar66 = auVar27._4_4_;
    fVar67 = auVar27._8_4_;
    fVar68 = auVar27._12_4_;
    auVar27 = vcmpps_avx(auVar23,auVar57,1);
    auVar32._0_4_ =
         auVar27._0_4_ &
         (uint)(((_DAT_145fc6f08 * fVar65 * fVar65 * auVar57._0_4_ - _DAT_145fc6f08) * fVar65 +
                fVar65) * auVar31._0_4_);
    auVar32._4_4_ =
         auVar27._4_4_ &
         (uint)(((_DAT_145fc6f08 * fVar66 * fVar66 * auVar57._4_4_ - _DAT_145fc6f08) * fVar66 +
                fVar66) * auVar31._4_4_);
    auVar32._8_4_ =
         auVar27._8_4_ &
         (uint)(((_DAT_145fc6f08 * fVar67 * fVar67 * auVar57._8_4_ - _DAT_145fc6f08) * fVar67 +
                fVar67) * auVar31._8_4_);
    auVar32._12_4_ =
         auVar27._12_4_ &
         (uint)(((_DAT_145fc6f08 * fVar68 * fVar68 * auVar57._12_4_ - _DAT_145fc6f08) * fVar68 +
                fVar68) * auVar31._12_4_);
    auVar54 = vshufps_avx(auVar32,auVar32,0xc9);
    auVar16 = vshufps_avx(auVar32,auVar32,0xd2);
    fVar43 = auVar16._0_4_ * _DAT_14615bd00 + auVar54._0_4_ * _DAT_145fc6ed8;
    fVar48 = auVar16._4_4_ * _UNK_14615bd04 + auVar54._4_4_ * 0.0;
    fVar49 = auVar16._8_4_ * _UNK_14615bd08 + auVar54._8_4_ * 0.0;
    fVar50 = auVar16._12_4_ * _UNK_14615bd0c + auVar54._12_4_ * 0.0;
    auVar52._0_4_ = fVar43 * fVar43;
    auVar52._4_4_ = fVar48 * fVar48;
    auVar52._8_4_ = fVar49 * fVar49;
    auVar52._12_4_ = fVar50 * fVar50;
    auVar27 = vblendps_avx(auVar52,auVar23,8);
    auVar27 = vhaddps_avx(auVar27,auVar27);
    auVar57 = vhaddps_avx(auVar27,auVar27);
    auVar27 = vrsqrtps_avx(auVar57);
    fVar65 = auVar27._0_4_;
    fVar66 = auVar27._4_4_;
    fVar67 = auVar27._8_4_;
    fVar68 = auVar27._12_4_;
    auVar27 = vcmpps_avx(auVar23,auVar57,1);
    auVar46._0_4_ =
         auVar27._0_4_ &
         (uint)(((_DAT_145fc6f08 * fVar65 * fVar65 * auVar57._0_4_ - _DAT_145fc6f08) * fVar65 +
                fVar65) * fVar43);
    auVar46._4_4_ =
         auVar27._4_4_ &
         (uint)(((_DAT_145fc6f08 * fVar66 * fVar66 * auVar57._4_4_ - _DAT_145fc6f08) * fVar66 +
                fVar66) * fVar48);
    auVar46._8_4_ =
         auVar27._8_4_ &
         (uint)(((_DAT_145fc6f08 * fVar67 * fVar67 * auVar57._8_4_ - _DAT_145fc6f08) * fVar67 +
                fVar67) * fVar49);
    auVar46._12_4_ =
         auVar27._12_4_ &
         (uint)(((_DAT_145fc6f08 * fVar68 * fVar68 * auVar57._12_4_ - _DAT_145fc6f08) * fVar68 +
                fVar68) * fVar50);
    auVar27 = vshufps_avx(auVar46,auVar46,0xc9);
    auVar57 = vshufps_avx(auVar46,auVar46,0xd2);
    fVar43 = -(auVar54._0_4_ * auVar57._0_4_) + auVar27._0_4_ * auVar16._0_4_;
    fVar48 = -(auVar54._4_4_ * auVar57._4_4_) + auVar27._4_4_ * auVar16._4_4_;
    fVar49 = -(auVar54._8_4_ * auVar57._8_4_) + auVar27._8_4_ * auVar16._8_4_;
    fVar50 = -(auVar54._12_4_ * auVar57._12_4_) + auVar27._12_4_ * auVar16._12_4_;
    auVar33._0_4_ = fVar43 * fVar43;
    auVar33._4_4_ = fVar48 * fVar48;
    auVar33._8_4_ = fVar49 * fVar49;
    auVar33._12_4_ = fVar50 * fVar50;
    auVar27 = vblendps_avx(auVar33,auVar23,8);
    auVar27 = vhaddps_avx(auVar27,auVar27);
    auVar57 = vhaddps_avx(auVar27,auVar27);
    auVar27 = vrsqrtps_avx(auVar57);
    fVar65 = auVar27._0_4_;
    fVar66 = auVar27._4_4_;
    fVar67 = auVar27._8_4_;
    fVar68 = auVar27._12_4_;
    auVar27 = vcmpps_avx(auVar23,auVar57,1);
    auVar34._0_4_ =
         auVar27._0_4_ &
         (uint)(fVar43 * ((_DAT_145fc6f08 * fVar65 * fVar65 * auVar57._0_4_ - _DAT_145fc6f08) *
                          fVar65 + fVar65));
    auVar34._4_4_ =
         auVar27._4_4_ &
         (uint)(fVar48 * ((_DAT_145fc6f08 * fVar66 * fVar66 * auVar57._4_4_ - _DAT_145fc6f08) *
                          fVar66 + fVar66));
    auVar34._8_4_ =
         auVar27._8_4_ &
         (uint)(fVar49 * ((_DAT_145fc6f08 * fVar67 * fVar67 * auVar57._8_4_ - _DAT_145fc6f08) *
                          fVar67 + fVar67));
    auVar34._12_4_ =
         auVar27._12_4_ &
         (uint)(fVar50 * ((_DAT_145fc6f08 * fVar68 * fVar68 * auVar57._12_4_ - _DAT_145fc6f08) *
                          fVar68 + fVar68));
    auVar27 = vshufps_avx(auVar34,auVar34,0x4e);
    if (auVar27._0_4_ < 0.0) {
      auVar34._0_4_ = auVar34._0_4_ ^ _DAT_145fc6f10;
      auVar34._4_4_ = auVar34._4_4_ ^ _DAT_145fc6f10;
      auVar34._8_4_ = auVar34._8_4_ ^ _DAT_145fc6f10;
      auVar34._12_4_ = auVar34._12_4_ ^ _DAT_145fc6f10;
    }
    auVar35._0_4_ = auVar34._0_4_ * _DAT_14614f7f0;
    auVar35._4_4_ = auVar34._4_4_ * _UNK_14614f7f4;
    auVar35._8_4_ = auVar34._8_4_ * _UNK_14614f7f8;
    auVar35._12_4_ = auVar34._12_4_ * _UNK_14614f7fc;
    auVar27 = vblendps_avx(auVar35,auVar23,8);
    auVar36._4_4_ = _DAT_145fc6f48;
    auVar36._0_4_ = _DAT_145fc6f48;
    auVar36._8_4_ = _DAT_145fc6f48;
    auVar36._12_4_ = _DAT_145fc6f48;
    auVar27 = vhaddps_avx(auVar27,auVar27);
    auVar27 = vhaddps_avx(auVar27,auVar27);
    auVar27 = vmaxps_avx(auVar27,auVar36);
    auVar23 = vminps_avx(auVar27,auVar63._0_16_);
    fVar43 = auVar23._0_4_;
    auVar37._0_4_ = (float)((uint)fVar43 & _DAT_145fc6f4c);
    fVar48 = auVar23._4_4_;
    auVar37._4_4_ = (float)((uint)fVar48 & _DAT_145fc6f4c);
    fVar49 = auVar23._8_4_;
    auVar37._8_4_ = (float)((uint)fVar49 & _DAT_145fc6f4c);
    fVar50 = auVar23._12_4_;
    auVar37._12_4_ = (float)((uint)fVar50 & _DAT_145fc6f4c);
    auVar57 = vsubps_avx(auVar63._0_16_,auVar37);
    auVar27 = vrsqrtps_avx(auVar57);
    fVar65 = auVar27._0_4_;
    fVar66 = auVar27._4_4_;
    fVar67 = auVar27._8_4_;
    fVar68 = auVar27._12_4_;
    auVar53._4_4_ = _DAT_146159bfc;
    auVar53._0_4_ = _DAT_146159bfc;
    auVar53._8_4_ = _DAT_146159bfc;
    auVar53._12_4_ = _DAT_146159bfc;
    auVar27 = vcmpps_avx(auVar53,auVar57,2);
    fVar65 = (float)(auVar27._0_4_ &
                    (uint)(((fVar65 * fVar65 * auVar57._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                            fVar65 + fVar65) * auVar57._0_4_));
    fVar66 = (float)(auVar27._4_4_ &
                    (uint)(((fVar66 * fVar66 * auVar57._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                            fVar66 + fVar66) * auVar57._4_4_));
    fVar67 = (float)(auVar27._8_4_ &
                    (uint)(((fVar67 * fVar67 * auVar57._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                            fVar67 + fVar67) * auVar57._8_4_));
    fVar68 = (float)(auVar27._12_4_ &
                    (uint)(((fVar68 * fVar68 * auVar57._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                            fVar68 + fVar68) * auVar57._12_4_));
    fVar43 = fVar43 * fVar43 * fVar43 * fVar43 *
             (auVar37._0_4_ *
              (auVar37._0_4_ * (auVar37._0_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
             _DAT_146159c0c) +
             auVar37._0_4_ *
             (auVar37._0_4_ * (auVar37._0_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
             _DAT_146159c1c;
    fVar48 = fVar48 * fVar48 * fVar48 * fVar48 *
             (auVar37._4_4_ *
              (auVar37._4_4_ * (auVar37._4_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
             _DAT_146159c0c) +
             auVar37._4_4_ *
             (auVar37._4_4_ * (auVar37._4_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
             _DAT_146159c1c;
    fVar49 = fVar49 * fVar49 * fVar49 * fVar49 *
             (auVar37._8_4_ *
              (auVar37._8_4_ * (auVar37._8_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
             _DAT_146159c0c) +
             auVar37._8_4_ *
             (auVar37._8_4_ * (auVar37._8_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
             _DAT_146159c1c;
    fVar50 = fVar50 * fVar50 * fVar50 * fVar50 *
             (auVar37._12_4_ *
              (auVar37._12_4_ * (auVar37._12_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08)
             + _DAT_146159c0c) +
             auVar37._12_4_ *
             (auVar37._12_4_ * (auVar37._12_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18)
             + _DAT_146159c1c;
    auVar38._0_4_ = -(fVar43 * fVar65) + _DAT_145fc6f80;
    auVar38._4_4_ = -(fVar48 * fVar66) + _DAT_145fc6f80;
    auVar38._8_4_ = -(fVar49 * fVar67) + _DAT_145fc6f80;
    auVar38._12_4_ = -(fVar50 * fVar68) + _DAT_145fc6f80;
    auVar25._0_4_ = fVar43 * fVar65;
    auVar25._4_4_ = fVar48 * fVar66;
    auVar25._8_4_ = fVar49 * fVar67;
    auVar25._12_4_ = fVar50 * fVar68;
    auVar27 = vblendvps_avx(auVar25,auVar38,auVar23);
    uStack_224 = auVar27._0_4_;
  }
  if ((*(byte *)(param_2 + 0x120) & 0x20) == 0) {
    auStack_1c8 = vmaxps_avx(auVar59._0_16_,auStack_198);
    auVar27 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auStack_1c8,4);
    *(undefined1 (*) [16])(param_3 + 0xf0) = auVar27;
    if (_DAT_14615af54 < (float)((uint)fVar42 & uVar12)) goto LAB_1400e871e;
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x188) + 0xc0 + lVar13);
    uVar15 = *puVar2;
    uVar19 = puVar2[1];
LAB_1400e846a:
    *puVar1 = uVar15;
    *(undefined8 *)(param_3 + 0x108) = uVar19;
  }
  else {
    auVar23 = vminps_avx(auVar61._0_16_,auVar62._0_16_);
    auVar27 = vmaxps_avx(auVar59._0_16_,auStack_198);
    auStack_1b8 = vmaxps_avx(auVar27,auVar23);
    auVar27 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auStack_1b8,4);
    *(undefined1 (*) [16])(param_3 + 0xf0) = auVar27;
    if (bVar14) {
      fVar42 = _DAT_145fc6f80 - fVar42;
    }
    if ((float)((uint)fVar42 & _DAT_145fc6f4c) < _DAT_145fc6ed8) {
LAB_1400e871e:
      auVar27 = vcmpps_avx(auVar27,auVar56._0_16_,0);
      lVar13 = 0x50;
      if ((auVar27[8] & 1) != 0) {
        lVar13 = 0;
      }
      puVar2 = (undefined8 *)(*(longlong *)(lStack_220 + 8) + 0x20 + lVar13);
      uVar15 = *puVar2;
      uVar19 = puVar2[1];
      goto LAB_1400e846a;
    }
    uVar15 = CONCAT44(_UNK_14614f7fc,_UNK_14614f7f8);
    *puVar1 = CONCAT44(_UNK_14614f7f4,_DAT_14614f7f0);
    *(undefined8 *)(param_3 + 0x108) = uVar15;
  }
  FUN_144f63b80(puVar1,&uStack_224);
  auVar27 = auVar56._0_16_;
  auVar23 = *(undefined1 (*) [16])(param_3 + 0xf0);
LAB_1400e8484:
  auStack_1d8 = vshufps_avx(auVar23,auVar23,0xaa);
  auVar27 = vcmpps_avx(auVar23,auVar27,4);
  uVar12 = vextractps_avx(auVar27,2);
  auVar27 = vblendps_avx(*(undefined1 (*) [16])
                          (*(longlong *)(param_4 + 8) + 0x10 + (ulonglong)((uVar12 & 1) * 0x50)),
                         auStack_1d8,4);
  auVar56 = ZEXT1664(auVar27);
  plVar4 = *(longlong **)(param_3 + 8);
  iVar3 = *(int *)(param_3 + 0x10);
  iVar10 = func_0x000144e05fa0(plVar4[1]);
  auVar59 = ZEXT1264(ZEXT812(0));
  fVar65 = 0.0;
  fVar66 = 0.0;
  fVar67 = 0.0;
  fVar68 = 0.0;
  if (iVar3 != iVar10) {
    uVar11 = (**(code **)(*plVar4 + 0xf0))(plVar4,iVar3);
    (**(code **)(*plVar4 + 0x108))(plVar4,uVar11,auStack_168);
    fVar65 = fStack_158;
    fVar66 = fStack_154;
    fVar67 = fStack_150;
    fVar68 = fStack_14c;
  }
  (**(code **)(*plVar4 + 0x88))(plVar4,auStack_168);
  auVar8._4_4_ = fStack_154;
  auVar8._0_4_ = fStack_158;
  auVar8._8_4_ = fStack_150;
  auVar8._12_4_ = fStack_14c;
  auVar27 = vshufps_avx(auVar8,auStack_148,0x33);
  auVar27 = vshufps_avx(auVar8,auVar27,0x2f);
  auVar60 = ZEXT1664(CONCAT412(fVar68 * (_DAT_145fc6ed8 + auVar27._12_4_),
                               CONCAT48(fVar67 * (_DAT_145fc6ed8 + auVar27._8_4_),
                                        CONCAT44(fVar66 * (_DAT_145fc6ed8 + auVar27._4_4_),
                                                 fVar65 * (_DAT_145fc6ed8 + auVar27._0_4_)))));
  fVar65 = _DAT_145fc6ed8;
  fVar66 = _DAT_145fc6ed8;
  fVar67 = _DAT_145fc6ed8;
  fVar68 = _DAT_145fc6ed8;
  (**(code **)(*plVar4 + 0x88))(plVar4,&fStack_128);
  fVar42 = auVar60._0_4_;
  auVar23 = auVar60._0_16_;
  auVar27 = vshufps_avx(auVar23,auVar23,0x55);
  auVar23 = vshufps_avx(auVar23,auVar23,0xaa);
  auVar18._0_4_ =
       auVar23._0_4_ * fStack_108 +
       auVar27._0_4_ * fStack_118 + fVar42 * fStack_128 + auStack_f8._0_4_;
  auVar18._4_4_ =
       auVar23._4_4_ * fStack_104 +
       auVar27._4_4_ * fStack_114 + fVar42 * fStack_124 + auStack_f8._4_4_;
  auVar18._8_4_ =
       auVar23._8_4_ * fStack_100 +
       auVar27._8_4_ * fStack_110 + fVar42 * fStack_120 + auStack_f8._8_4_;
  auVar18._12_4_ =
       auVar23._12_4_ * fStack_fc +
       auVar27._12_4_ * fStack_10c + fVar42 * fStack_11c + auStack_f8._12_4_;
  auVar39._4_4_ = _DAT_14615a290;
  auVar39._0_4_ = _DAT_14615a290;
  auVar39._8_4_ = _DAT_14615a290;
  auVar39._12_4_ = _DAT_14615a290;
  auVar23 = vrcpps_avx(auVar39);
  auVar27 = vblendps_avx(auVar18,auStack_f8,8);
  fVar42 = auVar23._0_4_;
  fVar43 = auVar23._4_4_;
  fVar48 = auVar23._8_4_;
  fVar49 = auVar23._12_4_;
  auVar47._0_4_ = ((-(fVar42 * _DAT_14615a290) + fVar65) * fVar42 + fVar42) * auVar27._0_4_;
  auVar47._4_4_ = ((-(fVar43 * _DAT_14615a290) + fVar66) * fVar43 + fVar43) * auVar27._4_4_;
  auVar47._8_4_ = ((-(fVar48 * _DAT_14615a290) + fVar67) * fVar48 + fVar48) * auVar27._8_4_;
  auVar47._12_4_ = ((-(fVar49 * _DAT_14615a290) + fVar68) * fVar49 + fVar49) * auVar27._12_4_;
  auVar23 = vroundps_avx(auVar47,3);
  auVar40._0_4_ = -(auVar23._0_4_ * _DAT_14615a290) + auVar27._0_4_;
  auVar40._4_4_ = -(auVar23._4_4_ * _DAT_14615a290) + auVar27._4_4_;
  auVar40._8_4_ = -(auVar23._8_4_ * _DAT_14615a290) + auVar27._8_4_;
  auVar40._12_4_ = -(auVar23._12_4_ * _DAT_14615a290) + auVar27._12_4_;
  auVar26._0_4_ = (int)auVar23._0_4_;
  auVar26._4_4_ = (int)auVar23._4_4_;
  auVar26._8_4_ = (int)auVar23._8_4_;
  auVar26._12_4_ = (int)auVar23._12_4_;
  auVar27 = vblendps_avx(auVar18,auVar40,3);
  auVar23 = vpackssdw_avx(auVar26,auVar26);
  sVar20 = auVar23._0_2_;
  auVar6._0_2_ = sVar20 + auStack_f8._0_2_;
  sVar29 = auVar23._2_2_;
  auVar6._2_2_ = sVar29 + auStack_f8._2_2_;
  auVar6._4_2_ = sVar20 + auStack_f8._4_2_;
  auVar6._6_2_ = sVar29 + auStack_f8._6_2_;
  auVar6._8_2_ = sVar20 + auStack_f8._8_2_;
  auVar6._10_2_ = sVar29 + auStack_f8._10_2_;
  auVar6._12_2_ = sVar20 + auStack_f8._12_2_;
  auVar6._14_2_ = sVar29 + auStack_f8._14_2_;
  auVar27 = vpblendd_avx2(auVar27,auVar6,8);
  auVar27 = vblendps_avx(auVar27,auVar59._0_16_,4);
  auVar54 = auVar56._0_16_;
  auVar23 = vsubps_avx(auVar54,auVar27);
  auVar27 = vpsubw_avx(auVar54,auVar27);
  auVar23 = vblendps_avx(auVar23,auVar27,8);
  auVar27 = vpunpckhwd_avx(auVar23,auVar23);
  auVar27 = vpsrad_avx(auVar27,0x10);
  auVar27 = vcvtdq2ps_avx(auVar27);
  auVar57 = vshufpd_avx(auVar27,auVar27,3);
  auVar27 = *(undefined1 (*) [16])(param_3 + 0x100);
  auVar41._0_4_ = (auVar57._0_4_ * _DAT_146159c90 + auVar23._0_4_) * auVar27._0_4_;
  auVar41._4_4_ = (auVar57._4_4_ * _UNK_146159c94 + auVar23._4_4_) * auVar27._4_4_;
  auVar41._8_4_ = (auVar57._8_4_ * _UNK_146159c98 + auVar23._8_4_) * auVar27._8_4_;
  auVar41._12_4_ = (auVar57._12_4_ * _UNK_146159c9c + auVar23._12_4_) * auVar27._12_4_;
  auVar23 = vblendps_avx(auVar41,auVar59._0_16_,8);
  auVar23 = vhaddps_avx(auVar23,auVar23);
  auVar23 = vhaddps_avx(auVar23,auVar23);
  auVar23 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auVar23,4);
  *(undefined1 (*) [16])(param_3 + 0xf0) = auVar23;
  if ((*(float *)(param_3 + 0x108) != 0.0) || (NAN(*(float *)(param_3 + 0x108)))) {
    auVar57 = vshufps_avx(auVar27,auVar27,0xaa);
    auVar54 = vshufps_avx(auVar23,auVar23,0xaa);
    auVar27 = vrcpps_avx(auVar57);
    fVar42 = auVar27._0_4_;
    fVar43 = auVar27._4_4_;
    fVar48 = auVar27._8_4_;
    fVar49 = auVar27._12_4_;
    auVar28._0_4_ = (-((fVar42 * auVar57._0_4_ - fVar65) * fVar42) + fVar42) * auVar54._0_4_;
    auVar28._4_4_ = (-((fVar43 * auVar57._4_4_ - fVar66) * fVar43) + fVar43) * auVar54._4_4_;
    auVar28._8_4_ = (-((fVar48 * auVar57._8_4_ - fVar67) * fVar48) + fVar48) * auVar54._8_4_;
    auVar28._12_4_ = (-((fVar49 * auVar57._12_4_ - fVar68) * fVar49) + fVar49) * auVar54._12_4_;
  }
  else {
    auVar28 = vshufps_avx(auVar54,auVar54,0xaa);
  }
  auVar27 = vblendps_avx(auVar23,auVar28,4);
  *(undefined1 (*) [16])(param_3 + 0xf0) = auVar27;
  return;
}

