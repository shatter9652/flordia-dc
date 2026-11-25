// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013dc10  size: 930 bytes
// Name:    FUN_14013dc10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013dc10(uint *param_1,undefined8 *param_2,uint *param_3)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  longlong lVar15;
  undefined1 uVar16;
  ulonglong uVar17;
  uint *puVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  undefined1 auVar22 [32];
  undefined1 auVar23 [16];
  undefined1 auVar25 [32];
  undefined1 auVar26 [16];
  undefined1 auVar27 [64];
  undefined1 auVar28 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar29 [64];
  undefined1 auVar24 [32];
  
  uVar11 = _DAT_145f437c0;
  auVar27 = ZEXT1664(CONCAT88(_DAT_145f437c0,_DAT_145f437c0));
  auVar4 = vpcmpeqd_avx(in_ZMM7._0_16_,in_ZMM7._0_16_);
  auVar29 = ZEXT1664(auVar4);
LAB_14013dc6c:
  uVar21 = *param_1;
  puVar18 = *(uint **)(param_1 + 2);
  if ((ulonglong)uVar21 != 0) {
    uVar12 = *param_3;
    uVar17 = (ulonglong)(uVar12 & uVar21 - 1);
    uVar19 = puVar18[uVar17 * 2];
    if (uVar19 == uVar12) goto LAB_14013df25;
    puVar14 = puVar18 + uVar17 * 2;
    while (uVar19 != 0) {
      uVar17 = (ulonglong)
               ((uint)((ulonglong)((longlong)puVar14 + (8 - (longlong)puVar18)) >> 3) & uVar21 - 1);
      puVar14 = puVar18 + uVar17 * 2;
      uVar19 = *puVar14;
      if (uVar19 == uVar12) goto LAB_14013df25;
    }
    if (param_1[1] != (uVar21 * 0x4b) / 100) goto LAB_14013df82;
  }
  uVar12 = uVar21 * 2;
  if (uVar21 * 2 < 0x21) {
    uVar12 = 0x20;
  }
  uVar20 = (ulonglong)uVar12;
  auVar27 = ZEXT1664(auVar27._0_16_);
  auVar29 = ZEXT1664(auVar29._0_16_);
  lVar15 = func_0x000144d9c140(4,uVar20 * 8);
  auVar10._8_8_ = uVar11;
  auVar10._0_8_ = uVar11;
  auVar10._16_8_ = uVar11;
  auVar10._24_8_ = uVar11;
  auVar7 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
  auVar8 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
  lVar2 = uVar20 - 1;
  *(longlong *)(param_1 + 2) = lVar15;
  *param_1 = uVar12;
  uVar17 = 0;
  auVar23._8_8_ = lVar2;
  auVar23._0_8_ = lVar2;
  auVar24._16_8_ = lVar2;
  auVar24._0_16_ = auVar23;
  auVar24._24_8_ = lVar2;
  auVar26 = auVar27._0_16_;
  auVar4 = auVar23 ^ auVar26;
  do {
    auVar25._8_8_ = uVar17;
    auVar25._0_8_ = uVar17;
    auVar25._16_8_ = uVar17;
    auVar25._24_8_ = uVar17;
    auVar9 = vpor_avx2(auVar7,auVar25);
    auVar5 = vpcmpgtq_avx(auVar9._0_16_ ^ auVar26,auVar4);
    auVar5 = vpackssdw_avx(auVar5,auVar5);
    auVar28 = auVar29._0_16_;
    auVar5 = vpackssdw_avx(auVar5 ^ auVar28,auVar5 ^ auVar28);
    if ((auVar5._0_4_ & 1) != 0) {
      *(undefined4 *)(lVar15 + uVar17 * 8) = 0;
    }
    auVar5 = vpcmpgtq_avx(auVar9._0_16_ ^ auVar26,auVar4);
    auVar5 = vpackssdw_avx(auVar5,auVar5);
    auVar5 = vpackssdw_avx(auVar5 ^ auVar28,auVar5 ^ auVar28);
    if ((auVar5[2] & 1) != 0) {
      *(undefined4 *)(lVar15 + 8 + uVar17 * 8) = 0;
    }
    auVar6 = vpcmpgtq_avx2(auVar10 ^ auVar9,auVar10 ^ auVar24);
    auVar22 = ZEXT1632(auVar4);
    auVar9 = vpackssdw_avx2(auVar6,auVar22);
    auVar5 = auVar9._16_16_ ^ auVar28;
    auVar5 = vpackssdw_avx(auVar5,auVar5);
    if ((auVar5[8] & 1) != 0) {
      *(undefined4 *)(lVar15 + 0x10 + uVar17 * 8) = 0;
    }
    auVar9 = vpackssdw_avx2(auVar6,auVar22);
    auVar5 = auVar9._16_16_ ^ auVar28;
    auVar5 = vpackssdw_avx(auVar5,auVar5);
    if ((auVar5[10] & 1) != 0) {
      *(undefined4 *)(lVar15 + 0x18 + uVar17 * 8) = 0;
    }
    auVar9 = vpor_avx2(auVar8,auVar25);
    auVar5 = vpcmpgtq_avx(auVar9._0_16_ ^ auVar26,auVar23 ^ auVar26);
    auVar5 = vpackssdw_avx(auVar5,auVar5);
    auVar5 = vpackssdw_avx(auVar5 ^ auVar28,auVar5 ^ auVar28);
    if ((auVar5[4] & 1) != 0) {
      *(undefined4 *)(lVar15 + 0x20 + uVar17 * 8) = 0;
    }
    auVar5 = vpcmpgtq_avx(auVar9._0_16_ ^ auVar26,auVar23 ^ auVar26);
    auVar5 = vpackssdw_avx(auVar5,auVar5);
    auVar5 = vpackssdw_avx(auVar5 ^ auVar28,auVar5 ^ auVar28);
    if ((auVar5[6] & 1) != 0) {
      *(undefined4 *)(lVar15 + 0x28 + uVar17 * 8) = 0;
    }
    auVar25 = vpcmpgtq_avx2(auVar10 ^ auVar9,auVar10 ^ auVar24);
    auVar9 = vpackssdw_avx2(auVar22,auVar25);
    auVar5 = auVar9._16_16_ ^ auVar28;
    auVar5 = vpackssdw_avx(auVar5,auVar5);
    if ((auVar5[0xc] & 1) != 0) {
      *(undefined4 *)(lVar15 + 0x30 + uVar17 * 8) = 0;
    }
    auVar9 = vpshufhw_avx2(auVar25,0x84);
    auVar5 = auVar9._16_16_ ^ auVar28;
    auVar5 = vpackssdw_avx(auVar5,auVar5);
    if ((auVar5[0xe] & 1) != 0) {
      *(undefined4 *)(lVar15 + 0x38 + uVar17 * 8) = 0;
    }
    uVar17 = uVar17 + 8;
  } while ((uVar20 + 7 & 0xfffffffffffffff8) != uVar17);
  if (uVar21 != 0) {
    puVar14 = puVar18;
    do {
      uVar12 = *puVar14;
      if (uVar12 != 0) {
        lVar2 = *(longlong *)(param_1 + 2);
        uVar17 = (ulonglong)(*param_1 - 1 & uVar12);
        iVar3 = *(int *)(lVar2 + uVar17 * 8);
        while (iVar3 != 0) {
          uVar17 = (ulonglong)((uint)(uVar17 * 8 + 8 >> 3) & *param_1 - 1);
          iVar3 = *(int *)(lVar2 + uVar17 * 8);
        }
        puVar1 = (uint *)(lVar2 + uVar17 * 8);
        *puVar1 = uVar12;
        puVar1[1] = puVar14[1];
        *puVar14 = 0;
      }
      puVar14 = puVar14 + 2;
    } while (puVar14 != puVar18 + (ulonglong)uVar21 * 2);
  }
  if (puVar18 != (uint *)0x0) {
    auVar27 = ZEXT1664(auVar26);
    auVar29 = ZEXT1664(auVar28);
    func_0x000144d9c130(puVar18);
  }
  goto LAB_14013dc6c;
LAB_14013df25:
  uVar12 = (uint)uVar17;
  if (uVar21 == uVar12) goto LAB_14013df36;
  if (puVar18[uVar17 * 2] != 0) {
    uVar16 = 0;
    goto LAB_14013df3f;
  }
  uVar17 = (ulonglong)(uVar12 + 1);
  goto LAB_14013df25;
LAB_14013df36:
  uVar16 = 0;
  uVar12 = uVar21;
  goto LAB_14013df3f;
LAB_14013df82:
  *puVar14 = uVar12;
  param_1[1] = param_1[1] + 1;
  puVar18 = *(uint **)(param_1 + 2);
  uVar19 = *param_1;
  uVar17 = (ulonglong)((longlong)puVar14 - (longlong)puVar18) >> 3;
  uVar13 = (uint)uVar17;
  uVar21 = uVar13;
  while ((uVar16 = 1, uVar12 = uVar21, uVar19 != uVar13 &&
         (uVar21 = uVar19, uVar12 = (uint)uVar17, uVar16 = 1,
         puVar18[(uVar17 & 0xffffffff) * 2] == 0))) {
    uVar13 = (uint)uVar17 + 1;
    uVar17 = (ulonglong)uVar13;
  }
LAB_14013df3f:
  *param_2 = puVar18;
  *(uint *)(param_2 + 1) = uVar21;
  *(uint *)((longlong)param_2 + 0xc) = uVar12;
  *(undefined1 *)(param_2 + 2) = uVar16;
  return;
}

