// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cefc0  size: 1254 bytes
// Name:    FUN_1400cefc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f63b80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400cefc0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  byte bVar9;
  undefined1 auVar10 [16];
  short sVar11;
  short sVar16;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  float fVar35;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar36 [64];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined1 auStack_e8 [16];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined1 auStack_c8 [16];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_78 [16];
  undefined1 auVar32 [64];
  
  uVar4 = *(undefined8 *)*(undefined1 (*) [16])(param_4 + 0x20);
  uStack_130._0_4_ = (float)*(undefined8 *)(param_4 + 0x28);
  auVar14 = *(undefined1 (*) [16])(param_4 + 0x20);
  if ((float)uStack_130 < 0.0) {
    auVar14._0_4_ = (uint)uVar4 ^ _DAT_145fc6f10;
    auVar14._4_4_ = (uint)((ulonglong)uVar4 >> 0x20) ^ _DAT_145fc6f10;
    auVar14._8_4_ = (uint)(float)uStack_130 ^ _DAT_145fc6f10;
    auVar14._12_4_ = (uint)((ulonglong)*(undefined8 *)(param_4 + 0x28) >> 0x20) ^ _DAT_145fc6f10;
  }
  _auStack_138 = auVar14;
  auVar12._0_4_ = auStack_138._0_4_ * _DAT_14614f7f0;
  auVar12._4_4_ = auStack_138._4_4_ * _UNK_14614f7f4;
  auVar12._8_4_ = auStack_138._8_4_ * _UNK_14614f7f8;
  auVar12._12_4_ = auStack_138._12_4_ * _UNK_14614f7fc;
  auVar17._0_12_ = ZEXT812(0);
  auVar17._12_4_ = 0;
  auVar31._4_4_ = _DAT_145fc6ed8;
  auVar31._0_4_ = _DAT_145fc6ed8;
  auVar31._8_4_ = _DAT_145fc6ed8;
  auVar31._12_4_ = _DAT_145fc6ed8;
  auVar32 = ZEXT1664(auVar31);
  auVar14 = vblendps_avx(auVar12,auVar17,8);
  auVar18._4_4_ = _DAT_145fc6f48;
  auVar18._0_4_ = _DAT_145fc6f48;
  auVar18._8_4_ = _DAT_145fc6f48;
  auVar18._12_4_ = _DAT_145fc6f48;
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar14 = vmaxps_avx(auVar14,auVar18);
  auVar12 = vminps_avx(auVar14,auVar31);
  fVar35 = auVar12._0_4_;
  auVar19._0_4_ = (float)((uint)fVar35 & _DAT_145fc6f4c);
  fVar37 = auVar12._4_4_;
  auVar19._4_4_ = (float)((uint)fVar37 & _DAT_145fc6f4c);
  fVar38 = auVar12._8_4_;
  auVar19._8_4_ = (float)((uint)fVar38 & _DAT_145fc6f4c);
  fVar39 = auVar12._12_4_;
  auVar19._12_4_ = (float)((uint)fVar39 & _DAT_145fc6f4c);
  auVar17 = vsubps_avx(auVar31,auVar19);
  auVar14 = vrsqrtps_avx(auVar17);
  fVar24 = auVar14._0_4_;
  fVar26 = auVar14._4_4_;
  fVar27 = auVar14._8_4_;
  fVar28 = auVar14._12_4_;
  auVar30._4_4_ = _DAT_146159bfc;
  auVar30._0_4_ = _DAT_146159bfc;
  auVar30._8_4_ = _DAT_146159bfc;
  auVar30._12_4_ = _DAT_146159bfc;
  auVar14 = vcmpps_avx(auVar30,auVar17,2);
  fVar24 = (float)(auVar14._0_4_ &
                  (uint)(((fVar24 * fVar24 * auVar17._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                          fVar24 + fVar24) * auVar17._0_4_));
  fVar26 = (float)(auVar14._4_4_ &
                  (uint)(((fVar26 * fVar26 * auVar17._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                          fVar26 + fVar26) * auVar17._4_4_));
  fVar27 = (float)(auVar14._8_4_ &
                  (uint)(((fVar27 * fVar27 * auVar17._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                          fVar27 + fVar27) * auVar17._8_4_));
  fVar28 = (float)(auVar14._12_4_ &
                  (uint)(((fVar28 * fVar28 * auVar17._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                          fVar28 + fVar28) * auVar17._12_4_));
  fVar35 = fVar35 * fVar35 * fVar35 * fVar35 *
           (auVar19._0_4_ *
            (auVar19._0_4_ * (auVar19._0_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
           _DAT_146159c0c) +
           auVar19._0_4_ *
           (auVar19._0_4_ * (auVar19._0_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
           _DAT_146159c1c;
  fVar37 = fVar37 * fVar37 * fVar37 * fVar37 *
           (auVar19._4_4_ *
            (auVar19._4_4_ * (auVar19._4_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
           _DAT_146159c0c) +
           auVar19._4_4_ *
           (auVar19._4_4_ * (auVar19._4_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
           _DAT_146159c1c;
  fVar38 = fVar38 * fVar38 * fVar38 * fVar38 *
           (auVar19._8_4_ *
            (auVar19._8_4_ * (auVar19._8_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
           _DAT_146159c0c) +
           auVar19._8_4_ *
           (auVar19._8_4_ * (auVar19._8_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
           _DAT_146159c1c;
  fVar39 = fVar39 * fVar39 * fVar39 * fVar39 *
           (auVar19._12_4_ *
            (auVar19._12_4_ * (auVar19._12_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
           _DAT_146159c0c) +
           auVar19._12_4_ *
           (auVar19._12_4_ * (auVar19._12_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
           _DAT_146159c1c;
  auVar20._0_4_ = -(fVar35 * fVar24) + _DAT_145fc6f80;
  auVar20._4_4_ = -(fVar37 * fVar26) + _DAT_145fc6f80;
  auVar20._8_4_ = -(fVar38 * fVar27) + _DAT_145fc6f80;
  auVar20._12_4_ = -(fVar39 * fVar28) + _DAT_145fc6f80;
  auVar25._0_4_ = fVar35 * fVar24;
  auVar25._4_4_ = fVar37 * fVar26;
  auVar25._8_4_ = fVar38 * fVar27;
  auVar25._12_4_ = fVar39 * fVar28;
  auVar14 = vblendvps_avx(auVar25,auVar20,auVar12);
  fVar24 = auVar14._0_4_;
  if ((((*(byte *)(param_1 + 0x120) & 0x20) == 0) || ((*(byte *)(param_1 + 0x140) & 0x40) == 0)) &&
     (((*(byte *)(param_1 + 0xf0) & 1) == 0 || ((*(byte *)(param_2 + 0x110) & 2) != 0)))) {
    bVar6 = *(byte *)(param_1 + 0x14c);
    if (((bVar6 >> 2 | ~bVar6) & 1) == 0) {
      bVar6 = (bVar6 & 8) >> 3;
      goto LAB_1400cf40c;
    }
    fVar26 = _DAT_146170764;
    if ((*(byte *)(param_3 + 0x1a4) & 0x10) == 0) {
      fVar26 = _DAT_146170760;
    }
    if (fVar24 < fVar26) {
LAB_1400cf18f:
      if ((*(byte *)(param_2 + 0x110) & 2) == 0) goto LAB_1400cf19c;
    }
LAB_1400cf468:
    *(byte *)(param_2 + 0x110) = *(byte *)(param_2 + 0x110) | 0x20;
    bVar6 = *(byte *)(param_3 + 0x1a4) | 0x10;
  }
  else {
    bVar6 = 0;
LAB_1400cf40c:
    bVar9 = (*(byte *)(param_3 + 0x1a4) & 0x10) >> 4;
    if (_DAT_146170760 <= fVar24 && bVar9 == 0) {
      if (bVar6 != 0) goto LAB_1400cf468;
    }
    else if (bVar6 != 0) {
      if ((_DAT_146170764 <= fVar24 & bVar9) == 0) goto LAB_1400cf18f;
      goto LAB_1400cf468;
    }
LAB_1400cf19c:
    auVar14 = vcmpps_avx(_auStack_138,ZEXT816(0) << 0x20,0);
    uVar7 = vmovmskps_avx(auVar14);
    if ((~(byte)uVar7 & 7) != 0) {
      FUN_144f63b80(auStack_138,0);
      *(undefined1 (*) [8])(param_2 + 0x100) = auStack_138;
      *(undefined8 *)(param_2 + 0x108) = uStack_130;
      if ((((*(byte *)(param_1 + 0x14c) & 0xc) != 0) || ((*(byte *)(param_1 + 0x14c) & 1) == 0)) ||
         (*(float *)(param_2 + 0x44) < _DAT_146170768)) {
        *(byte *)(param_2 + 0x110) = *(byte *)(param_2 + 0x110) | 0x20;
      }
      if ((*(byte *)(param_1 + 0x120) & 1) != 0) {
        *(byte *)(param_2 + 0x110) = *(byte *)(param_2 + 0x110) & 0xdf;
      }
    }
    bVar6 = *(byte *)(param_3 + 0x1a4) & 0xef;
  }
  *(byte *)(param_3 + 0x1a4) = bVar6;
  auVar33 = ZEXT1664(*(undefined1 (*) [16])(param_4 + 0x10));
  plVar2 = *(longlong **)(param_2 + 8);
  iVar1 = *(int *)(param_2 + 0x10);
  iVar8 = func_0x000144e05fa0(plVar2[1]);
  auVar34 = ZEXT1264(ZEXT812(0));
  fVar24 = 0.0;
  fVar26 = 0.0;
  fVar27 = 0.0;
  fVar28 = 0.0;
  if (iVar1 != iVar8) {
    uVar7 = (**(code **)(*plVar2 + 0xf0))(plVar2,iVar1);
    (**(code **)(*plVar2 + 0x108))(plVar2,uVar7,auStack_e8);
    fVar24 = fStack_d8;
    fVar26 = fStack_d4;
    fVar27 = fStack_d0;
    fVar28 = fStack_cc;
  }
  (**(code **)(*plVar2 + 0x88))(plVar2,auStack_e8);
  auVar5._4_4_ = fStack_d4;
  auVar5._0_4_ = fStack_d8;
  auVar5._8_4_ = fStack_d0;
  auVar5._12_4_ = fStack_cc;
  auVar14 = vshufps_avx(auVar5,auStack_c8,0x33);
  auVar14 = vshufps_avx(auVar5,auVar14,0x2f);
  auVar36 = ZEXT1664(CONCAT412(fVar28 * (auVar14._12_4_ + auVar32._12_4_),
                               CONCAT48(fVar27 * (auVar14._8_4_ + auVar32._8_4_),
                                        CONCAT44(fVar26 * (auVar14._4_4_ + auVar32._4_4_),
                                                 fVar24 * (auVar14._0_4_ + auVar32._0_4_)))));
  (**(code **)(*plVar2 + 0x88))(plVar2,&fStack_a8);
  fVar24 = auVar36._0_4_;
  auVar12 = auVar36._0_16_;
  auVar14 = vshufps_avx(auVar12,auVar12,0x55);
  auVar12 = vshufps_avx(auVar12,auVar12,0xaa);
  auVar10._0_4_ =
       auVar12._0_4_ * fStack_88 + auVar14._0_4_ * fStack_98 + fVar24 * fStack_a8 + auStack_78._0_4_
  ;
  auVar10._4_4_ =
       auVar12._4_4_ * fStack_84 + auVar14._4_4_ * fStack_94 + fVar24 * fStack_a4 + auStack_78._4_4_
  ;
  auVar10._8_4_ =
       auVar12._8_4_ * fStack_80 + auVar14._8_4_ * fStack_90 + fVar24 * fStack_a0 + auStack_78._8_4_
  ;
  auVar10._12_4_ =
       auVar12._12_4_ * fStack_7c +
       auVar14._12_4_ * fStack_8c + fVar24 * fStack_9c + auStack_78._12_4_;
  auVar21._4_4_ = _DAT_14615a290;
  auVar21._0_4_ = _DAT_14615a290;
  auVar21._8_4_ = _DAT_14615a290;
  auVar21._12_4_ = _DAT_14615a290;
  auVar12 = vrcpps_avx(auVar21);
  auVar14 = vblendps_avx(auVar10,auStack_78,8);
  fVar24 = auVar12._0_4_;
  fVar26 = auVar12._4_4_;
  fVar27 = auVar12._8_4_;
  fVar28 = auVar12._12_4_;
  auVar29._0_4_ = ((-(fVar24 * _DAT_14615a290) + auVar32._0_4_) * fVar24 + fVar24) * auVar14._0_4_;
  auVar29._4_4_ = ((-(fVar26 * _DAT_14615a290) + auVar32._4_4_) * fVar26 + fVar26) * auVar14._4_4_;
  auVar29._8_4_ = ((-(fVar27 * _DAT_14615a290) + auVar32._8_4_) * fVar27 + fVar27) * auVar14._8_4_;
  auVar29._12_4_ =
       ((-(fVar28 * _DAT_14615a290) + auVar32._12_4_) * fVar28 + fVar28) * auVar14._12_4_;
  auVar12 = vroundps_avx(auVar29,3);
  auVar22._0_4_ = -(auVar12._0_4_ * _DAT_14615a290) + auVar14._0_4_;
  auVar22._4_4_ = -(auVar12._4_4_ * _DAT_14615a290) + auVar14._4_4_;
  auVar22._8_4_ = -(auVar12._8_4_ * _DAT_14615a290) + auVar14._8_4_;
  auVar22._12_4_ = -(auVar12._12_4_ * _DAT_14615a290) + auVar14._12_4_;
  auVar13._0_4_ = (int)auVar12._0_4_;
  auVar13._4_4_ = (int)auVar12._4_4_;
  auVar13._8_4_ = (int)auVar12._8_4_;
  auVar13._12_4_ = (int)auVar12._12_4_;
  auVar14 = vblendps_avx(auVar10,auVar22,3);
  auVar12 = vpackssdw_avx(auVar13,auVar13);
  sVar11 = auVar12._0_2_;
  auVar3._0_2_ = sVar11 + auStack_78._0_2_;
  sVar16 = auVar12._2_2_;
  auVar3._2_2_ = sVar16 + auStack_78._2_2_;
  auVar3._4_2_ = sVar11 + auStack_78._4_2_;
  auVar3._6_2_ = sVar16 + auStack_78._6_2_;
  auVar3._8_2_ = sVar11 + auStack_78._8_2_;
  auVar3._10_2_ = sVar16 + auStack_78._10_2_;
  auVar3._12_2_ = sVar11 + auStack_78._12_2_;
  auVar3._14_2_ = sVar16 + auStack_78._14_2_;
  auVar14 = vpblendd_avx2(auVar14,auVar3,8);
  auVar14 = vblendps_avx(auVar14,auVar34._0_16_,4);
  auVar18 = auVar33._0_16_;
  auVar12 = vsubps_avx(auVar18,auVar14);
  auVar14 = vpsubw_avx(auVar18,auVar14);
  auVar12 = vblendps_avx(auVar12,auVar14,8);
  auVar14 = vpunpckhwd_avx(auVar12,auVar12);
  auVar14 = vpsrad_avx(auVar14,0x10);
  auVar14 = vcvtdq2ps_avx(auVar14);
  auVar17 = vshufpd_avx(auVar14,auVar14,3);
  auVar14 = *(undefined1 (*) [16])(param_2 + 0x100);
  auVar23._0_4_ = (auVar17._0_4_ * _DAT_146159c90 + auVar12._0_4_) * auVar14._0_4_;
  auVar23._4_4_ = (auVar17._4_4_ * _UNK_146159c94 + auVar12._4_4_) * auVar14._4_4_;
  auVar23._8_4_ = (auVar17._8_4_ * _UNK_146159c98 + auVar12._8_4_) * auVar14._8_4_;
  auVar23._12_4_ = (auVar17._12_4_ * _UNK_146159c9c + auVar12._12_4_) * auVar14._12_4_;
  auVar12 = vblendps_avx(auVar23,auVar34._0_16_,8);
  auVar12 = vhaddps_avx(auVar12,auVar12);
  auVar12 = vhaddps_avx(auVar12,auVar12);
  auVar12 = vblendps_avx(*(undefined1 (*) [16])(param_2 + 0xf0),auVar12,4);
  *(undefined1 (*) [16])(param_2 + 0xf0) = auVar12;
  if ((*(float *)(param_2 + 0x108) != 0.0) || (NAN(*(float *)(param_2 + 0x108)))) {
    auVar17 = vshufps_avx(auVar14,auVar14,0xaa);
    auVar18 = vshufps_avx(auVar12,auVar12,0xaa);
    auVar14 = vrcpps_avx(auVar17);
    fVar24 = auVar14._0_4_;
    fVar26 = auVar14._4_4_;
    fVar27 = auVar14._8_4_;
    fVar28 = auVar14._12_4_;
    auVar15._0_4_ = (-((fVar24 * auVar17._0_4_ - auVar32._0_4_) * fVar24) + fVar24) * auVar18._0_4_;
    auVar15._4_4_ = (-((fVar26 * auVar17._4_4_ - auVar32._4_4_) * fVar26) + fVar26) * auVar18._4_4_;
    auVar15._8_4_ = (-((fVar27 * auVar17._8_4_ - auVar32._8_4_) * fVar27) + fVar27) * auVar18._8_4_;
    auVar15._12_4_ =
         (-((fVar28 * auVar17._12_4_ - auVar32._12_4_) * fVar28) + fVar28) * auVar18._12_4_;
  }
  else {
    auVar15 = vshufps_avx(auVar18,auVar18,0xaa);
  }
  auVar14 = vblendps_avx(auVar12,auVar15,4);
  *(undefined1 (*) [16])(param_2 + 0xf0) = auVar14;
  return;
}

