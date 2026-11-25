// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140053850  size: 635 bytes
// Name:    FUN_140053850
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1439d14f0, FUN_1402c59f0, FUN_141838940, FUN_141a9b770
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140053850(ulonglong param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  float *pfVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [64];
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  undefined1 auVar17 [16];
  undefined1 auVar18 [64];
  undefined1 auVar19 [16];
  undefined1 auVar20 [64];
  longlong lStack_90;
  undefined1 auStack_88 [16];
  undefined1 aauStack_78 [6] [16];
  
  auVar12 = ZEXT1664(*param_2);
  if (param_1 == 0) {
    lStack_90 = 0;
    FUN_141a9b770(auStack_88,0x14ab50990,1);
    aauStack_78[0] = auVar12._0_16_;
    if (_DAT_14ab509c0 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      pfVar4 = *(float **)
                (_DAT_14ab509b8 +
                ((ulonglong)(uint)((int)auVar12._0_4_ >> 4) % (ulonglong)_DAT_14ab509c0) * 8);
      if (pfVar4 != (float *)0x0) {
        auVar11 = vmovshdup_avx(aauStack_78[0]);
        lVar6 = 0;
        do {
          if (((uint)((int)*pfVar4 ^ (int)auVar12._0_4_) < 0x10) &&
             ((uint)((int)pfVar4[1] ^ (int)auVar11._0_4_) < 0x10)) {
            lVar6 = *(longlong *)(pfVar4 + 4);
            break;
          }
          pfVar4 = *(float **)(pfVar4 + 6);
        } while (pfVar4 != (float *)0x0);
      }
    }
    if (auStack_88[8] == '\x01') {
      FUN_1402c59f0(auStack_88._0_8_);
      aauStack_78[0] = auVar12._0_16_;
    }
    if (lVar6 == 0) {
      return false;
    }
    bVar3 = FUN_1439d14f0(*(undefined8 *)(lVar6 + 0x50),aauStack_78,&lStack_90);
    goto LAB_140053a80;
  }
  lStack_90 = 0;
  auVar14 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 0x40));
  auVar16 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 0x50));
  auVar18 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 0x60));
  auVar20 = ZEXT1664(*(undefined1 (*) [16])(param_1 + 0x70));
  FUN_141a9b770(auStack_88,0x14ab4e8d0,1);
  auVar11 = auVar12._0_16_;
  auVar15 = auVar16._0_16_;
  auVar17 = auVar18._0_16_;
  auVar13 = auVar14._0_16_;
  auVar19 = auVar20._0_16_;
  if (_DAT_14ab4e8f8 == 0) {
LAB_1400538ce:
    uVar7 = 0;
  }
  else {
    uVar5 = 0;
    uVar7 = _DAT_14ab4e8f8;
    do {
      if ((*(ulonglong *)(uVar7 + 0x20) < param_1) ||
         ((*(ulonglong *)(uVar7 + 0x20) <= param_1 && (*(int *)(uVar7 + 0x28) < -1)))) {
        uVar7 = *(ulonglong *)(uVar7 + 8) & 0xfffffffffffffffe;
      }
      else {
        uVar5 = uVar7;
        uVar7 = *(ulonglong *)(uVar7 + 0x10);
      }
    } while (uVar7 != 0);
    if ((uVar5 == 0) || (param_1 < *(ulonglong *)(uVar5 + 0x20))) goto LAB_1400538ce;
    uVar7 = 0;
    if (*(int *)(uVar5 + 0x28) < 0) {
      uVar7 = uVar5;
    }
    if (*(ulonglong *)(uVar5 + 0x20) < param_1) {
      uVar7 = uVar5;
    }
  }
  if (auStack_88[8] == '\x01') {
    FUN_1402c59f0(auStack_88._0_8_);
    auVar11 = auVar12._0_16_;
    auVar15 = auVar16._0_16_;
    auVar17 = auVar18._0_16_;
    auVar13 = auVar14._0_16_;
    auVar19 = auVar20._0_16_;
  }
  if (uVar7 == 0) {
    return false;
  }
  auVar1 = vpunpckhwd_avx(auVar19,auVar19);
  auVar10._0_12_ = ZEXT812(0);
  auVar10._12_4_ = 0;
  auVar2 = vunpcklps_avx(auVar13,auVar17);
  auVar8 = vpsrad_avx(auVar1,0x10);
  auVar9 = vunpcklps_avx(auVar15,auVar10);
  auVar1 = vunpckhps_avx(auVar15,auVar10);
  auVar15 = vcvtdq2ps_avx(auVar8);
  auVar8 = vunpcklps_avx(auVar2,auVar9);
  auVar2 = vunpckhps_avx(auVar2,auVar9);
  auVar15 = vshufpd_avx(auVar15,auVar15,3);
  auVar9._0_4_ = auVar11._0_4_ + (-(auVar15._0_4_ * _DAT_146159c90) - auVar19._0_4_);
  auVar9._4_4_ = auVar11._4_4_ + (-(auVar15._4_4_ * _UNK_146159c94) - auVar19._4_4_);
  auVar9._8_4_ = auVar11._8_4_ + (-(auVar15._8_4_ * _UNK_146159c98) - auVar19._8_4_);
  auVar9._12_4_ = auVar11._12_4_ + (-(auVar15._12_4_ * _UNK_146159c9c) - auVar19._12_4_);
  auVar11 = vshufps_avx(auVar9,auVar9,0x55);
  auVar15 = vshufps_avx(auVar9,auVar9,0xaa);
  auVar13 = vunpckhps_avx(auVar13,auVar17);
  auVar13 = vunpcklps_avx(auVar13,auVar1);
  auStack_88._0_4_ =
       auVar13._0_4_ * auVar15._0_4_ + auVar2._0_4_ * auVar11._0_4_ + auVar9._0_4_ * auVar8._0_4_;
  auStack_88._4_4_ =
       auVar13._4_4_ * auVar15._4_4_ + auVar2._4_4_ * auVar11._4_4_ + auVar9._0_4_ * auVar8._4_4_;
  auStack_88._8_4_ =
       auVar13._8_4_ * auVar15._8_4_ + auVar2._8_4_ * auVar11._8_4_ + auVar9._0_4_ * auVar8._8_4_;
  auStack_88._12_4_ =
       auVar13._12_4_ * auVar15._12_4_ +
       auVar2._12_4_ * auVar11._12_4_ + auVar9._0_4_ * auVar8._12_4_;
  bVar3 = FUN_141838940(uVar7,auStack_88,0xffffffff,&lStack_90);
LAB_140053a80:
  if ((lStack_90 != 0 & bVar3) != 1) {
    return false;
  }
  return *(longlong *)(lStack_90 + 0x60) != 0;
}

