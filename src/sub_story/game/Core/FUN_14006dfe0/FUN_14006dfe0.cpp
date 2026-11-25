// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006dfe0  size: 989 bytes
// Name:    FUN_14006dfe0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1435a4bf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14006dfe0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                  ushort *param_5)

{
  undefined1 auVar1 [16];
  byte bVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  bool bVar14;
  ushort uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [32];
  undefined1 auVar19 [16];
  undefined1 auVar20 [32];
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [64];
  undefined1 aauStack_78 [4] [16];
  
  bVar2 = *(byte *)(param_1 + 0x127);
  if ((bVar2 & 3) == 0) {
    return;
  }
  func_0x000144f2b0e0(aauStack_78);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x150);
  auVar17 = *(undefined1 (*) [16])(param_1 + 0x140);
  auVar16._0_4_ = (auVar17._0_4_ + auVar1._0_4_) * _DAT_145fc6edc;
  auVar16._4_4_ = (auVar17._4_4_ + auVar1._4_4_) * _DAT_145fc6edc;
  auVar16._8_4_ = (auVar17._8_4_ + auVar1._8_4_) * _DAT_145fc6edc;
  auVar16._12_4_ = (auVar17._12_4_ + auVar1._12_4_) * _DAT_145fc6edc;
  auVar23 = vcmpps_avx(aauStack_78[0],auVar16,1);
  auVar23 = vblendvps_avx(auVar17,auVar1,auVar23);
  auVar1 = vsubps_avx(auVar17,auVar1);
  auVar17 = vsubps_avx(aauStack_78[0],auVar16);
  auVar19._0_4_ = _DAT_145fc6edc * auVar1._0_4_ + (float)(auVar17._0_4_ & _DAT_145fc6f4c);
  auVar19._4_4_ = _DAT_145fc6edc * auVar1._4_4_ + (float)(auVar17._4_4_ & _DAT_145fc6f4c);
  auVar19._8_4_ = _DAT_145fc6edc * auVar1._8_4_ + (float)(auVar17._8_4_ & _DAT_145fc6f4c);
  auVar19._12_4_ = _DAT_145fc6edc * auVar1._12_4_ + (float)(auVar17._12_4_ & _DAT_145fc6f4c);
  auVar16 = ZEXT816(0) << 0x20;
  auVar1 = vmaxps_avx(auVar16,auVar19);
  auVar17._0_4_ = auVar1._0_4_ * auVar1._0_4_;
  auVar17._4_4_ = auVar1._4_4_ * auVar1._4_4_;
  auVar17._8_4_ = auVar1._8_4_ * auVar1._8_4_;
  auVar17._12_4_ = auVar1._12_4_ * auVar1._12_4_;
  auVar1 = vblendps_avx(auVar17,auVar16,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar19 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vrsqrtss_avx(auVar19,auVar19);
  fVar21 = auVar1._0_4_;
  auVar17 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar19,2);
  auVar1 = vsubps_avx(aauStack_78[0],auVar23);
  auVar23._0_4_ = auVar1._0_4_ * auVar1._0_4_;
  auVar23._4_4_ = auVar1._4_4_ * auVar1._4_4_;
  auVar23._8_4_ = auVar1._8_4_ * auVar1._8_4_;
  auVar23._12_4_ = auVar1._12_4_ * auVar1._12_4_;
  auVar1 = vblendps_avx(auVar23,auVar16,8);
  auVar1 = vhaddps_avx(auVar1,auVar1);
  auVar23 = vhaddps_avx(auVar1,auVar1);
  auVar1 = vrsqrtss_avx(auVar23,auVar23);
  fVar22 = auVar1._0_4_;
  auVar1 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar23,2);
  auVar28 = ZEXT464(auVar1._0_4_ &
                    (uint)(((_DAT_145fc6f08 * fVar22 * fVar22 * auVar23._0_4_ + _DAT_145fc6edc) *
                            fVar22 + fVar22) * auVar23._0_4_));
  uVar8 = FUN_1435a4bf0(auVar1._0_8_,
                        auVar17._0_4_ &
                        (uint)(((_DAT_145fc6f08 * fVar21 * fVar21 * auVar19._0_4_ + _DAT_145fc6edc)
                                * fVar21 + fVar21) * auVar19._0_4_),*(undefined8 *)(param_1 + 8),
                        *(ushort *)(param_1 + 0x14) & 0x7fff,bVar2 & 3,param_4);
  uVar12 = (ulonglong)uVar8;
  uVar9 = FUN_1435a4bf0(param_3,auVar28._0_8_,*(undefined8 *)(param_1 + 8),
                        *(ushort *)(param_1 + 0x14) & 0x7fff,*(byte *)(param_1 + 0x127) & 3,param_4)
  ;
  uVar15 = 0;
  bVar14 = false;
  if ((*(byte *)(param_2 + 0x94) & 3) == 0) {
    uVar10 = func_0x0001450e52e0(*(undefined8 *)(_DAT_149c3b740 + 0x520),
                                 *(undefined4 *)(param_3 + 8));
    if ((~((*(ushort *)(param_1 + 0x14) & 0x7fff) >> (uVar10 & 0x1f)) & 7) == 0) {
      bVar14 = *(longlong *)(param_1 + 0x218) != 0;
    }
    else {
      bVar14 = false;
    }
  }
  if (uVar9 < uVar8) goto LAB_14006e2a0;
  if (bVar14) {
    iVar13 = *(int *)(param_3 + 8);
    if ((iVar13 == 0x53) || (iVar13 == 0x23)) {
      uVar8 = 0;
      do {
        uVar11 = (uint)uVar12;
        uVar10 = 1 << (uVar11 & 0x1f);
        if ((*(byte *)(param_1 + 0x2d2 + (uVar12 >> 3)) >> (uVar11 & 7) & 1) == 0) {
          uVar10 = 0;
        }
        uVar12 = (ulonglong)(uVar11 + 1);
        uVar8 = uVar8 | uVar10;
        uVar15 = (ushort)uVar8;
      } while (uVar11 + 1 <= uVar9);
      goto LAB_14006e2a0;
    }
    if (iVar13 - 0x41U < 0x12) {
      uVar8 = 0;
      do {
        uVar11 = (uint)uVar12;
        uVar10 = 1 << (uVar11 & 0x1f);
        if ((*(byte *)(param_1 + 0x2d2 + (uVar12 >> 3)) >> (uVar11 & 7) & 1) == 0) {
          uVar10 = 0;
        }
        uVar12 = (ulonglong)(uVar11 + 1);
        uVar8 = uVar8 | uVar10;
        uVar15 = (ushort)uVar8;
      } while (uVar11 + 1 <= uVar9);
      goto LAB_14006e2a0;
    }
    if (((iVar13 - 0x16U < 7) || (iVar13 == 0x55)) || (iVar13 == 0x30)) {
      uVar8 = 0;
      do {
        uVar11 = (uint)uVar12;
        uVar10 = 1 << (uVar11 & 0x1f);
        if ((*(byte *)(param_1 + 0x2d1 + (uVar12 >> 3)) >> (uVar11 & 7) & 1) == 0) {
          uVar10 = 0;
        }
        uVar12 = (ulonglong)(uVar11 + 1);
        uVar8 = uVar8 | uVar10;
        uVar15 = (ushort)uVar8;
      } while (uVar11 + 1 <= uVar9);
      goto LAB_14006e2a0;
    }
    auVar27._4_4_ = _DAT_145f43778;
    auVar27._0_4_ = _DAT_145f43778;
    auVar27._8_4_ = _DAT_145f43778;
    auVar27._12_4_ = _DAT_145f43778;
    auVar27._16_4_ = _DAT_145f43778;
    auVar27._20_4_ = _DAT_145f43778;
    auVar27._24_4_ = _DAT_145f43778;
    auVar27._28_4_ = _DAT_145f43778;
    auVar28 = ZEXT864(0);
    uVar10 = uVar9 + 1;
    if (uVar9 + 1 < uVar8 + 1) {
      uVar10 = uVar8 + 1;
    }
    auVar4._0_4_ = uVar8 + _DAT_145f43820;
    auVar4._4_4_ = uVar8 + _UNK_145f43824;
    auVar4._8_4_ = uVar8 + _UNK_145f43828;
    auVar4._12_4_ = uVar8 + _UNK_145f4382c;
    auVar4._16_4_ = uVar8 + _UNK_145f43830;
    auVar4._20_4_ = uVar8 + _UNK_145f43834;
    auVar4._24_4_ = uVar8 + _UNK_145f43838;
    auVar4._28_4_ = uVar8 + _UNK_145f4383c;
    iVar13 = uVar10 - uVar8;
    uVar8 = iVar13 + 7U & 0xfffffff8;
    do {
      auVar25 = auVar28._0_32_;
      auVar26 = vpsllvd_avx2(auVar27,auVar4);
      auVar5._0_4_ = auVar4._0_4_ + _DAT_145f43840;
      auVar5._4_4_ = auVar4._4_4_ + _DAT_145f43840;
      auVar5._8_4_ = auVar4._8_4_ + _DAT_145f43840;
      auVar5._12_4_ = auVar4._12_4_ + _DAT_145f43840;
      auVar5._16_4_ = auVar4._16_4_ + _DAT_145f43840;
      auVar5._20_4_ = auVar4._20_4_ + _DAT_145f43840;
      auVar5._24_4_ = auVar4._24_4_ + _DAT_145f43840;
      auVar5._28_4_ = auVar4._28_4_ + _DAT_145f43840;
      uVar8 = uVar8 - 8;
      auVar24 = vpor_avx2(auVar26,auVar25);
      auVar28 = ZEXT3264(auVar24);
      auVar4 = auVar5;
    } while (uVar8 != 0);
  }
  else {
    auVar26._4_4_ = _DAT_145f43778;
    auVar26._0_4_ = _DAT_145f43778;
    auVar26._8_4_ = _DAT_145f43778;
    auVar26._12_4_ = _DAT_145f43778;
    auVar26._16_4_ = _DAT_145f43778;
    auVar26._20_4_ = _DAT_145f43778;
    auVar26._24_4_ = _DAT_145f43778;
    auVar26._28_4_ = _DAT_145f43778;
    auVar28 = ZEXT864(0);
    uVar10 = uVar9 + 1;
    if (uVar9 + 1 < uVar8 + 1) {
      uVar10 = uVar8 + 1;
    }
    auVar6._0_4_ = uVar8 + _DAT_145f43820;
    auVar6._4_4_ = uVar8 + _UNK_145f43824;
    auVar6._8_4_ = uVar8 + _UNK_145f43828;
    auVar6._12_4_ = uVar8 + _UNK_145f4382c;
    auVar6._16_4_ = uVar8 + _UNK_145f43830;
    auVar6._20_4_ = uVar8 + _UNK_145f43834;
    auVar6._24_4_ = uVar8 + _UNK_145f43838;
    auVar6._28_4_ = uVar8 + _UNK_145f4383c;
    iVar13 = uVar10 - uVar8;
    uVar8 = iVar13 + 7U & 0xfffffff8;
    do {
      auVar25 = auVar28._0_32_;
      auVar24 = vpsllvd_avx2(auVar26,auVar6);
      auVar3._0_4_ = auVar6._0_4_ + _DAT_145f43840;
      auVar3._4_4_ = auVar6._4_4_ + _DAT_145f43840;
      auVar3._8_4_ = auVar6._8_4_ + _DAT_145f43840;
      auVar3._12_4_ = auVar6._12_4_ + _DAT_145f43840;
      auVar3._16_4_ = auVar6._16_4_ + _DAT_145f43840;
      auVar3._20_4_ = auVar6._20_4_ + _DAT_145f43840;
      auVar3._24_4_ = auVar6._24_4_ + _DAT_145f43840;
      auVar3._28_4_ = auVar6._28_4_ + _DAT_145f43840;
      uVar8 = uVar8 - 8;
      auVar24 = vpor_avx2(auVar24,auVar25);
      auVar28 = ZEXT3264(auVar24);
      auVar6 = auVar3;
    } while (uVar8 != 0);
  }
  uVar8 = iVar13 - 1;
  uVar9 = uVar8 & 0xfffffff8;
  auVar18._4_4_ = uVar8;
  auVar18._0_4_ = uVar8;
  auVar18._8_4_ = uVar8;
  auVar18._12_4_ = uVar8;
  auVar18._16_4_ = uVar8;
  auVar18._20_4_ = uVar8;
  auVar18._24_4_ = uVar8;
  auVar18._28_4_ = uVar8;
  auVar20._0_8_ = CONCAT44(uVar8,uVar8) & 0xfffffff8fffffff8;
  auVar20._8_4_ = uVar9;
  auVar20._12_4_ = uVar9;
  auVar20._16_4_ = uVar9;
  auVar20._20_4_ = uVar9;
  auVar20._24_4_ = uVar9;
  auVar20._28_4_ = uVar9;
  auVar7._4_4_ = _UNK_145f43824;
  auVar7._0_4_ = _DAT_145f43820;
  auVar7._8_4_ = _UNK_145f43828;
  auVar7._12_4_ = _UNK_145f4382c;
  auVar7._16_4_ = _UNK_145f43830;
  auVar7._20_4_ = _UNK_145f43834;
  auVar7._24_4_ = _UNK_145f43838;
  auVar7._28_4_ = _UNK_145f4383c;
  auVar6 = vpor_avx2(auVar20,auVar7);
  auVar26 = vpminud_avx2(auVar6,auVar18);
  auVar26 = vpcmpeqd_avx2(auVar6,auVar26);
  auVar26 = vblendvps_avx(auVar25,auVar24,auVar26);
  auVar17 = auVar26._0_16_ | auVar26._16_16_;
  auVar1 = vshufps_avx(auVar17,auVar17,0xee);
  auVar17 = auVar17 | auVar1;
  auVar1 = vshufps_avx(auVar17,auVar17,0x55);
  uVar15 = auVar17._0_2_ | auVar1._0_2_;
LAB_14006e2a0:
  *param_5 = *param_5 & 0x8000 | uVar15 & 0x1f;
  return;
}

