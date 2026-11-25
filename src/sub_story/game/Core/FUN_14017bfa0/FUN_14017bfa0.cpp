// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017bfa0  size: 813 bytes
// Name:    FUN_14017bfa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14017bfa0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  short sVar10;
  short sVar15;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [64];
  float fVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar30 [64];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [64];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auVar19 [64];
  
  auVar5 = vsubps_avx(*(undefined1 (*) [16])(param_2 + 0x50),*(undefined1 (*) [16])(param_1 + 0x60))
  ;
  auVar7 = vsubps_avx(*(undefined1 (*) [16])(param_2 + 0x40),*(undefined1 (*) [16])(param_1 + 0x50))
  ;
  plVar1 = *(longlong **)(param_1 + 8);
  auVar18._0_4_ = auVar5._0_4_ * *(float *)(param_1 + 0x80);
  auVar18._4_4_ = auVar5._4_4_ * *(float *)(param_1 + 0x84);
  auVar18._8_4_ = auVar5._8_4_ * *(float *)(param_1 + 0x88);
  auVar18._12_4_ = auVar5._12_4_ * *(float *)(param_1 + 0x8c);
  auVar19 = ZEXT1664(auVar18);
  fVar20 = auVar7._0_4_ * *(float *)(param_1 + 0x80);
  fVar21 = auVar7._4_4_ * *(float *)(param_1 + 0x84);
  fVar22 = auVar7._8_4_ * *(float *)(param_1 + 0x88);
  fVar23 = auVar7._12_4_ * *(float *)(param_1 + 0x8c);
  if ((*(byte *)((longlong)plVar1 + 0x26e) & 2) == 0) {
    auVar5 = vsubps_avx(*(undefined1 (*) [16])(plVar1 + 0x18),*(undefined1 (*) [16])(param_2 + 0x30)
                       );
    auStack_e8 = vpsubw_avx(*(undefined1 (*) [16])(plVar1 + 0x18),
                            *(undefined1 (*) [16])(param_2 + 0x30));
    auVar5 = vblendps_avx(auVar5,auStack_e8,8);
    auVar7 = vpunpckhwd_avx(auVar5,auVar5);
    auVar7 = vpsrad_avx(auVar7,0x10);
    auVar7 = vcvtdq2ps_avx(auVar7);
    auVar7 = vshufpd_avx(auVar7,auVar7,3);
    auVar8._0_4_ = auVar7._0_4_ * _DAT_146159c90 + auVar5._0_4_;
    auVar8._4_4_ = auVar7._4_4_ * _UNK_146159c94 + auVar5._4_4_;
    auVar8._8_4_ = auVar7._8_4_ * _UNK_146159c98 + auVar5._8_4_;
    auVar8._12_4_ = auVar7._12_4_ * _UNK_146159c9c + auVar5._12_4_;
    auVar5 = vshufps_avx(auVar18,auVar18,0xc9);
    auVar7 = vshufps_avx(auVar8,auVar8,0xd2);
    auVar13 = vshufps_avx(auVar8,auVar8,0xc9);
    auVar18 = vshufps_avx(auVar18,auVar18,0xd2);
    auStack_f8._0_4_ =
         -(auVar18._0_4_ * auVar13._0_4_) + auVar5._0_4_ * auVar7._0_4_ + fVar20 +
         *(float *)(plVar1 + 0x1a);
    auStack_f8._4_4_ =
         -(auVar18._4_4_ * auVar13._4_4_) + auVar5._4_4_ * auVar7._4_4_ + fVar21 +
         *(float *)((longlong)plVar1 + 0xd4);
    auStack_f8._8_4_ =
         -(auVar18._8_4_ * auVar13._8_4_) + auVar5._8_4_ * auVar7._8_4_ + fVar22 +
         *(float *)(plVar1 + 0x1b);
    auStack_f8._12_4_ =
         -(auVar18._12_4_ * auVar13._12_4_) + auVar5._12_4_ * auVar7._12_4_ + fVar23 +
         *(float *)((longlong)plVar1 + 0xdc);
    (**(code **)(*plVar1 + 0x38))();
    plVar1 = *(longlong **)(param_1 + 8);
    auStack_108._0_4_ = auVar19._0_4_ + *(float *)(plVar1 + 0x1c);
    auStack_108._4_4_ = auVar19._4_4_ + *(float *)((longlong)plVar1 + 0xe4);
    auStack_108._8_4_ = auVar19._8_4_ + *(float *)(plVar1 + 0x1d);
    auStack_108._12_4_ = auVar19._12_4_ + *(float *)((longlong)plVar1 + 0xec);
    (**(code **)(*plVar1 + 0x40))();
  }
  else if (*(char *)((longlong)plVar1 + 0x30c) != '\0') {
    auVar7._4_4_ = _DAT_14615a290;
    auVar7._0_4_ = _DAT_14615a290;
    auVar7._8_4_ = _DAT_14615a290;
    auVar7._12_4_ = _DAT_14615a290;
    auVar38 = ZEXT1664(auVar7);
    fVar36 = 0.0;
    fVar37 = 0.0;
    auVar5 = vshufps_avx(auVar18,auVar18,0xc9);
    auVar25 = ZEXT1664(auVar5);
    auVar5 = vshufps_avx(auVar18,auVar18,0xd2);
    auVar30 = ZEXT1664(auVar5);
    uVar6 = 0;
    auVar5 = vrcpps_avx(auVar7);
    fVar39 = auVar5._0_4_;
    fVar40 = auVar5._4_4_;
    fVar41 = auVar5._8_4_;
    fVar42 = auVar5._12_4_;
    fVar39 = (-(fVar39 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar39 + fVar39;
    fVar40 = (-(fVar40 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar40 + fVar40;
    fVar41 = (-(fVar41 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar41 + fVar41;
    fVar42 = (-(fVar42 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar42 + fVar42;
    fVar34 = _DAT_146159c90;
    fVar35 = _UNK_146159c94;
    do {
      plVar2 = *(longlong **)(param_1 + 8);
      auVar5 = *(undefined1 (*) [16])(plVar2 + 0x18);
      fVar24 = auVar25._0_4_;
      fVar26 = auVar25._4_4_;
      fVar27 = auVar25._8_4_;
      fVar28 = auVar25._12_4_;
      fVar29 = auVar30._0_4_;
      fVar31 = auVar30._4_4_;
      fVar32 = auVar30._8_4_;
      fVar33 = auVar30._12_4_;
      if ((*(byte *)((longlong)plVar2 + 0x26e) & 2) == 0) {
        auVar7 = vsubps_avx(auVar5,*(undefined1 (*) [16])(param_2 + 0x30));
        auStack_d8 = vpsubw_avx(auVar5,*(undefined1 (*) [16])(param_2 + 0x30));
        auVar5 = vblendps_avx(auVar7,auStack_d8,8);
        auVar7 = vpunpckhwd_avx(auVar5,auVar5);
        auVar7 = vpsrad_avx(auVar7,0x10);
        auVar7 = vcvtdq2ps_avx(auVar7);
        auVar7 = vshufpd_avx(auVar7,auVar7,3);
        auVar9._0_4_ = auVar7._0_4_ * fVar34 + auVar5._0_4_;
        auVar9._4_4_ = auVar7._4_4_ * fVar35 + auVar5._4_4_;
        auVar9._8_4_ = auVar7._8_4_ * fVar36 + auVar5._8_4_;
        auVar9._12_4_ = auVar7._12_4_ * fVar37 + auVar5._12_4_;
        auVar5 = vshufps_avx(auVar9,auVar9,0xd2);
        auVar7 = vshufps_avx(auVar9,auVar9,0xc9);
        auStack_f8._0_4_ =
             -(fVar29 * auVar7._0_4_) + fVar24 * auVar5._0_4_ + fVar20 + *(float *)(plVar2 + 0x1a);
        auStack_f8._4_4_ =
             -(fVar31 * auVar7._4_4_) + fVar26 * auVar5._4_4_ + fVar21 +
             *(float *)((longlong)plVar2 + 0xd4);
        auStack_f8._8_4_ =
             -(fVar32 * auVar7._8_4_) + fVar27 * auVar5._8_4_ + fVar22 + *(float *)(plVar2 + 0x1b);
        auStack_f8._12_4_ =
             -(fVar33 * auVar7._12_4_) + fVar28 * auVar5._12_4_ + fVar23 +
             *(float *)((longlong)plVar2 + 0xdc);
        (**(code **)(*plVar2 + 0x38))(plVar2,auStack_f8);
        plVar2 = *(longlong **)(param_1 + 8);
        auStack_108._0_4_ = auVar19._0_4_ + *(float *)(plVar2 + 0x1c);
        auStack_108._4_4_ = auVar19._4_4_ + *(float *)((longlong)plVar2 + 0xe4);
        auStack_108._8_4_ = auVar19._8_4_ + *(float *)(plVar2 + 0x1d);
        auStack_108._12_4_ = auVar19._12_4_ + *(float *)((longlong)plVar2 + 0xec);
        (**(code **)(*plVar2 + 0x40))(plVar2,auStack_108);
      }
      else {
        lVar3 = plVar2[uVar6 + 0x62];
        auVar7 = *(undefined1 (*) [16])(lVar3 + 0x30);
        auVar13._0_4_ = auVar7._0_4_ + auVar5._0_4_;
        auVar13._4_4_ = auVar7._4_4_ + auVar5._4_4_;
        auVar13._8_4_ = auVar7._8_4_ + auVar5._8_4_;
        auVar13._12_4_ = auVar7._12_4_ + auVar5._12_4_;
        auVar18 = vblendps_avx(auVar13,auVar5,8);
        auVar11._0_4_ = fVar39 * auVar18._0_4_;
        auVar11._4_4_ = fVar40 * auVar18._4_4_;
        auVar11._8_4_ = fVar41 * auVar18._8_4_;
        auVar11._12_4_ = fVar42 * auVar18._12_4_;
        auVar13 = vroundps_avx(auVar11,3);
        auVar16._0_4_ = -(auVar13._0_4_ * auVar38._0_4_) + auVar18._0_4_;
        auVar16._4_4_ = -(auVar13._4_4_ * auVar38._4_4_) + auVar18._4_4_;
        auVar16._8_4_ = -(auVar13._8_4_ * auVar38._8_4_) + auVar18._8_4_;
        auVar16._12_4_ = -(auVar13._12_4_ * auVar38._12_4_) + auVar18._12_4_;
        auVar12._0_4_ = (int)auVar13._0_4_;
        auVar12._4_4_ = (int)auVar13._4_4_;
        auVar12._8_4_ = (int)auVar13._8_4_;
        auVar12._12_4_ = (int)auVar13._12_4_;
        auVar11 = vpackssdw_avx(auVar12,auVar12);
        auVar13 = vblendps_avx(auVar18,auVar16,3);
        sVar10 = auVar11._0_2_;
        auVar4._0_2_ = sVar10 + auVar18._0_2_;
        sVar15 = auVar11._2_2_;
        auVar4._2_2_ = sVar15 + auVar18._2_2_;
        auVar4._4_2_ = sVar10 + auVar18._4_2_;
        auVar4._6_2_ = sVar15 + auVar18._6_2_;
        auVar4._8_2_ = sVar10 + auVar18._8_2_;
        auVar4._10_2_ = sVar15 + auVar18._10_2_;
        auVar4._12_2_ = sVar10 + auVar18._12_2_;
        auVar4._14_2_ = sVar15 + auVar18._14_2_;
        auVar18 = vblendps_avx(auVar13,auVar4,8);
        auVar13 = vsubps_avx(auVar18,*(undefined1 (*) [16])(param_2 + 0x30));
        auStack_c8 = vpsubw_avx(auVar18,*(undefined1 (*) [16])(param_2 + 0x30));
        auVar18 = vblendps_avx(auVar13,auStack_c8,8);
        auVar13 = vpunpckhwd_avx(auVar18,auVar18);
        auVar17._0_4_ = auVar19._0_4_ + *(float *)(lVar3 + 0xe0);
        auVar17._4_4_ = auVar19._4_4_ + *(float *)(lVar3 + 0xe4);
        auVar17._8_4_ = auVar19._8_4_ + *(float *)(lVar3 + 0xe8);
        auVar17._12_4_ = auVar19._12_4_ + *(float *)(lVar3 + 0xec);
        auVar13 = vpsrad_avx(auVar13,0x10);
        auVar13 = vcvtdq2ps_avx(auVar13);
        auVar13 = vshufpd_avx(auVar13,auVar13,3);
        auVar14._0_4_ = auVar13._0_4_ * fVar34 + auVar18._0_4_;
        auVar14._4_4_ = auVar13._4_4_ * fVar35 + auVar18._4_4_;
        auVar14._8_4_ = auVar13._8_4_ * fVar36 + auVar18._8_4_;
        auVar14._12_4_ = auVar13._12_4_ * fVar37 + auVar18._12_4_;
        *(undefined1 (*) [16])(lVar3 + 0xe0) = auVar17;
        auVar18 = vshufps_avx(auVar14,auVar14,0xd2);
        auVar13 = vshufps_avx(auVar14,auVar14,0xc9);
        auVar11 = vshufps_avx(auVar7,auVar7,0xd2);
        auVar7 = vshufps_avx(auVar7,auVar7,0xc9);
        *(float *)(lVar3 + 0xd0) =
             (fVar29 * auVar7._0_4_ - fVar24 * auVar11._0_4_) + *(float *)(lVar3 + 0xd0) +
             -(fVar29 * auVar13._0_4_) + fVar24 * auVar18._0_4_ + fVar20;
        *(float *)(lVar3 + 0xd4) =
             (fVar31 * auVar7._4_4_ - fVar26 * auVar11._4_4_) + *(float *)(lVar3 + 0xd4) +
             -(fVar31 * auVar13._4_4_) + fVar26 * auVar18._4_4_ + fVar21;
        *(float *)(lVar3 + 0xd8) =
             (fVar32 * auVar7._8_4_ - fVar27 * auVar11._8_4_) + *(float *)(lVar3 + 0xd8) +
             -(fVar32 * auVar13._8_4_) + fVar27 * auVar18._8_4_ + fVar22;
        *(float *)(lVar3 + 0xdc) =
             (fVar33 * auVar7._12_4_ - fVar28 * auVar11._12_4_) + *(float *)(lVar3 + 0xdc) +
             -(fVar33 * auVar13._12_4_) + fVar28 * auVar18._12_4_ + fVar23;
        auStack_b8 = auVar5;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(byte *)((longlong)plVar1 + 0x30c));
  }
  return;
}

