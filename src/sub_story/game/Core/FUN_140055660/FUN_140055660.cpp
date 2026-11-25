// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140055660  size: 797 bytes
// Name:    FUN_140055660
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fc21d0, FUN_145647140, FUN_144e4c850
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_140055660(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  int *piVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 in_ZMM4 [64];
  undefined1 auVar21 [32];
  undefined1 auVar22 [16];
  undefined8 auStack_b0 [4];
  undefined8 uStack_90;
  int aiStack_88 [20];
  undefined1 auVar23 [32];
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    return *(char *)(param_1 + 0x28);
  }
  uVar16 = (ulonglong)*(uint *)(param_1 + 0xc);
  if (*(uint *)(param_1 + 0xc) == 0) {
    return '\0';
  }
  auStack_b0[0] = 0x1400556d9;
  lVar9 = FUN_144e4c850(param_2,param_3);
  if (lVar9 == 0) {
    return '\0';
  }
  lVar13 = (longlong)*(short *)(lVar9 + 0x34);
  uStack_90 = 0x1400556fd;
  lVar10 = FUN_145647140();
  auVar20 = in_ZMM4._0_16_;
  lVar10 = -lVar10;
  if (lVar13 == 0) {
    lVar9 = *(longlong *)(param_1 + 0x10);
  }
  else {
    uVar17 = 0;
    lVar13 = 0;
    do {
      uVar1 = *(undefined8 *)(lVar9 + 0x18);
      uVar2 = *(undefined8 *)(lVar9 + 0x20);
      *(undefined8 *)((longlong)auStack_b0 + lVar10) = 0x140055725;
      lVar11 = func_0x000140055ab0(uVar1,uVar2,uVar17);
      uVar8 = 0;
      if (lVar11 != 0) {
        *(undefined8 *)((longlong)auStack_b0 + lVar10) = 0x140055741;
        uVar8 = FUN_144fc21d0(lVar11,0);
      }
      auVar20 = in_ZMM4._0_16_;
      *(undefined4 *)((longlong)aiStack_88 + lVar13 + lVar10) = uVar8;
      lVar13 = lVar13 + 4;
      uVar17 = uVar17 + 1;
    } while (uVar17 < (uint)(int)*(short *)(lVar9 + 0x34));
    uVar16 = (ulonglong)*(uint *)(param_1 + 0xc);
    if (uVar16 == 0) goto LAB_140055972;
    lVar9 = *(longlong *)(param_1 + 0x10);
    if (uVar17 != 0) {
      uVar14 = 0;
      do {
        piVar18 = (int *)((longlong)aiStack_88 + lVar10);
        lVar11 = lVar13;
        do {
          if (*piVar18 == *(int *)(lVar9 + 8 + uVar14 * 0xc)) {
            uVar8 = (undefined4)
                    ((ulonglong)((longlong)piVar18 - ((longlong)aiStack_88 + lVar10)) >> 2);
            goto LAB_140055797;
          }
          piVar18 = piVar18 + 1;
          lVar11 = lVar11 + -4;
        } while (lVar11 != 0);
        uVar8 = 0xffffffff;
LAB_140055797:
        uVar15 = uVar14 + 1;
        *(undefined4 *)(lVar9 + 4 + uVar14 * 0xc) = uVar8;
        uVar14 = uVar15;
      } while (uVar15 != uVar16);
      goto LAB_140055972;
    }
  }
  lVar10 = _DAT_145fc6ff0;
  auVar19._8_8_ = _DAT_145f437c0;
  auVar19._0_8_ = _DAT_145f437c0;
  auVar21._8_8_ = _DAT_145f437c0;
  auVar21._0_8_ = _DAT_145f437c0;
  auVar21._16_8_ = _DAT_145f437c0;
  auVar21._24_8_ = _DAT_145f437c0;
  auVar6 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
  puVar12 = (undefined4 *)(lVar9 + 0x58);
  auVar20 = vpcmpeqd_avx(auVar20,auVar20);
  lVar9 = uVar16 - 1;
  uVar16 = uVar16 + 7 & 0xfffffffffffffff8;
  auVar22._8_8_ = lVar9;
  auVar22._0_8_ = lVar9;
  auVar23._16_8_ = lVar9;
  auVar23._0_16_ = auVar22;
  auVar23._24_8_ = lVar9;
  auVar7 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
  do {
    auVar3 = vpcmpgtq_avx(auVar6._0_16_ ^ auVar19,auVar22 ^ auVar19);
    auVar3 = vpackssdw_avx(auVar3,auVar3);
    auVar3 = vpackssdw_avx(auVar3 ^ auVar20,auVar3 ^ auVar20);
    if ((auVar3._0_4_ & 1) != 0) {
      puVar12[-0x15] = 0xffffffff;
    }
    auVar3 = vpcmpgtq_avx(auVar6._0_16_ ^ auVar19,auVar22 ^ auVar19);
    auVar3 = vpackssdw_avx(auVar3,auVar3);
    auVar3 = vpackssdw_avx(auVar3 ^ auVar20,auVar3 ^ auVar20);
    if ((auVar3[2] & 1) != 0) {
      puVar12[-0x12] = 0xffffffff;
    }
    auVar5 = vpcmpgtq_avx2(auVar6 ^ auVar21,auVar23 ^ auVar21);
    auVar4 = vpackssdw_avx2(auVar5,auVar7);
    auVar3 = auVar4._16_16_ ^ auVar20;
    auVar3 = vpackssdw_avx(auVar3,auVar3);
    if ((auVar3[8] & 1) != 0) {
      puVar12[-0xf] = 0xffffffff;
    }
    auVar4 = vpackssdw_avx2(auVar5,auVar7);
    auVar3 = auVar4._16_16_ ^ auVar20;
    auVar3 = vpackssdw_avx(auVar3,auVar3);
    if ((auVar3[10] & 1) != 0) {
      puVar12[-0xc] = 0xffffffff;
    }
    auVar3 = vpcmpgtq_avx(auVar7._0_16_ ^ auVar19,auVar22 ^ auVar19);
    auVar3 = vpackssdw_avx(auVar3,auVar3);
    auVar3 = vpackssdw_avx(auVar3 ^ auVar20,auVar3 ^ auVar20);
    if ((auVar3[4] & 1) != 0) {
      puVar12[-9] = 0xffffffff;
    }
    auVar3 = vpcmpgtq_avx(auVar7._0_16_ ^ auVar19,auVar22 ^ auVar19);
    auVar3 = vpackssdw_avx(auVar3,auVar3);
    auVar3 = vpackssdw_avx(auVar3 ^ auVar20,auVar3 ^ auVar20);
    if ((auVar3[6] & 1) != 0) {
      puVar12[-6] = 0xffffffff;
    }
    auVar5 = vpcmpgtq_avx2(auVar7 ^ auVar21,auVar23 ^ auVar21);
    auVar4 = vpackssdw_avx2(auVar7,auVar5);
    auVar3 = auVar4._16_16_ ^ auVar20;
    auVar3 = vpackssdw_avx(auVar3,auVar3);
    if ((auVar3[0xc] & 1) != 0) {
      puVar12[-3] = 0xffffffff;
    }
    auVar4 = vpshufhw_avx2(auVar5,0x84);
    auVar3 = auVar4._16_16_ ^ auVar20;
    auVar3 = vpackssdw_avx(auVar3,auVar3);
    if ((auVar3[0xe] & 1) != 0) {
      *puVar12 = 0xffffffff;
    }
    puVar12 = puVar12 + 0x18;
    auVar4._0_8_ = lVar10 + auVar6._0_8_;
    auVar4._8_8_ = lVar10 + auVar6._8_8_;
    auVar4._16_8_ = lVar10 + auVar6._16_8_;
    auVar4._24_8_ = lVar10 + auVar6._24_8_;
    auVar6._0_8_ = lVar10 + auVar7._0_8_;
    auVar6._8_8_ = lVar10 + auVar7._8_8_;
    auVar6._16_8_ = lVar10 + auVar7._16_8_;
    auVar6._24_8_ = lVar10 + auVar7._24_8_;
    uVar16 = uVar16 - 8;
    auVar7 = auVar6;
    auVar6 = auVar4;
  } while (uVar16 != 0);
LAB_140055972:
  *(undefined1 *)(param_1 + 0x28) = 1;
  return '\x01';
}

