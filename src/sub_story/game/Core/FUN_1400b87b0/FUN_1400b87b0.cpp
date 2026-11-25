// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b87b0  size: 1067 bytes
// Name:    FUN_1400b87b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b8be0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b87b0(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  longlong lVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined8 uVar8;
  longlong lVar9;
  undefined1 (*pauVar10) [32];
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 in_ZMM4 [64];
  undefined1 auVar20 [32];
  undefined1 auVar21 [16];
  undefined1 auVar22 [32];
  undefined1 auVar23 [16];
  undefined1 auVar24 [32];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [32];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  if (((*(longlong *)(param_2 + 0x110) != 0) &&
      (uVar2 = *(ushort *)(*(longlong *)(param_2 + 0x110) + 0x98), uVar2 != 0)) &&
     (*(short *)(param_1 + 0x20) == 0)) {
    if (*(ushort *)(param_1 + 0x22) < uVar2) {
      lVar5 = *(longlong *)(param_1 + 0x18);
      uVar8 = func_0x000144d9c140(8,(uint)uVar2 * 8);
      if (lVar5 != 0) {
        func_0x000144d9c130(lVar5);
      }
      *(ushort *)(param_1 + 0x22) = uVar2;
      *(undefined8 *)(param_1 + 0x18) = uVar8;
    }
    *(ushort *)(param_1 + 0x20) = uVar2;
    if (*(ushort *)(param_1 + 0x32) < uVar2) {
      sVar3 = *(short *)(param_1 + 0x30);
      lVar5 = *(longlong *)(param_1 + 0x28);
      uVar8 = func_0x000144d9c140(1,uVar2);
      if (sVar3 != 0) {
        func_0x000145f40560(uVar8,lVar5,sVar3);
      }
      if (lVar5 != 0) {
        func_0x000144d9c130(lVar5);
      }
      *(ushort *)(param_1 + 0x32) = uVar2;
      *(undefined8 *)(param_1 + 0x28) = uVar8;
    }
    *(ushort *)(param_1 + 0x30) = uVar2;
    if (*(ushort *)(param_1 + 0x42) < uVar2) {
      uVar4 = *(ushort *)(param_1 + 0x40);
      lVar5 = *(longlong *)(param_1 + 0x38);
      lVar9 = func_0x000144d9c140(4);
      auVar19 = in_ZMM4._0_32_;
      if (uVar4 != 0) {
        func_0x000145f40560(lVar9,lVar5,(uint)uVar4 * 4);
        auVar19 = in_ZMM4._0_32_;
      }
      if (uVar4 != uVar2) {
        auVar17._8_8_ = _DAT_145f437c0;
        auVar17._0_8_ = _DAT_145f437c0;
        auVar17._16_8_ = _DAT_145f437c0;
        auVar17._24_8_ = _DAT_145f437c0;
        auVar6 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
        auVar20._4_4_ = _DAT_146159fe0;
        auVar20._0_4_ = _DAT_146159fe0;
        auVar20._8_4_ = _DAT_146159fe0;
        auVar20._12_4_ = _DAT_146159fe0;
        auVar20._16_4_ = _DAT_146159fe0;
        auVar20._20_4_ = _DAT_146159fe0;
        auVar20._24_4_ = _DAT_146159fe0;
        auVar20._28_4_ = _DAT_146159fe0;
        auVar19 = vpcmpeqd_avx2(auVar19,auVar19);
        pauVar10 = (undefined1 (*) [32])(lVar9 + (ulonglong)uVar4 * 4);
        uVar15 = ((ulonglong)((uint)uVar2 * 4) + (ulonglong)uVar4 * -4) - 4;
        auVar16._8_8_ = uVar15;
        auVar16._0_8_ = uVar15;
        auVar16._16_8_ = uVar15;
        auVar16._24_8_ = uVar15;
        auVar18 = vpsrlq_avx2(auVar16,2);
        auVar16 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
        auVar18 = vpor_avx2(auVar18,auVar17);
        uVar11 = 0;
        do {
          auVar21._8_8_ = 0;
          auVar21._0_8_ = *pauVar10 + 0xc;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = *pauVar10 + 8;
          auVar21 = vpunpcklqdq_avx(auVar23,auVar21);
          auVar25._8_8_ = 0;
          auVar25._0_8_ = pauVar10;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = *pauVar10 + 4;
          auVar23 = vpunpcklqdq_avx(auVar25,auVar28);
          auVar25 = ZEXT116(0) * auVar21 | ZEXT116(1) * auVar23;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = *pauVar10 + 0x1c;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = *pauVar10 + 0x18;
          auVar23 = vpunpcklqdq_avx(auVar29,auVar26);
          auVar22._0_8_ = -(ulonglong)(auVar25._0_8_ == 0);
          auVar22._8_8_ = -(ulonglong)(auVar25._8_8_ == 0);
          auVar22._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar21,0) == 0);
          auVar22._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar21,8) == 0);
          auVar30._8_8_ = 0;
          auVar30._0_8_ = *pauVar10 + 0x14;
          auVar31._8_8_ = 0;
          auVar31._0_8_ = *pauVar10 + 0x10;
          auVar21 = vpunpcklqdq_avx(auVar31,auVar30);
          auVar21 = ZEXT116(0) * auVar23 | ZEXT116(1) * auVar21;
          uVar12 = uVar11 + 8;
          auVar24._0_8_ = -(ulonglong)(auVar21._0_8_ == 0);
          auVar24._8_8_ = -(ulonglong)(auVar21._8_8_ == 0);
          auVar24._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar23,0) == 0);
          auVar24._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar23,8) == 0);
          auVar27._8_8_ = uVar11;
          auVar27._0_8_ = uVar11;
          auVar27._16_8_ = uVar11;
          auVar27._24_8_ = uVar11;
          auVar22 = vpackssdw_avx2(auVar22,auVar24);
          auVar7 = vpor_avx2(auVar27,auVar16);
          auVar24 = vpor_avx2(auVar27,auVar6);
          auVar24 = vpcmpgtq_avx2(auVar24 ^ auVar17,auVar18);
          auVar7 = vpcmpgtq_avx2(auVar7 ^ auVar17,auVar18);
          auVar24 = vpackssdw_avx2(auVar7,auVar24);
          auVar21 = vpackssdw_avx(SUB3216(auVar24 ^ auVar19,0),SUB3216(auVar24 ^ auVar19,0x10));
          auVar23 = vpackssdw_avx(SUB3216(auVar22 ^ auVar19,0),SUB3216(auVar22 ^ auVar19,0x10));
          auVar21 = vpand_avx(auVar21,auVar23);
          auVar21 = vpshufd_avx(auVar21,0xd8);
          auVar22 = vpmovzxwd_avx2(auVar21);
          auVar22 = vpslld_avx2(auVar22,0x1f);
          auVar22 = vpmaskmovd_avx2(auVar22,auVar20);
          *pauVar10 = auVar22;
          pauVar10 = pauVar10 + 1;
          uVar11 = uVar12;
        } while (((uVar15 >> 2) + 8 & 0xfffffffffffffff8) != uVar12);
      }
      if (lVar5 != 0) {
        func_0x000144d9c130(lVar5);
      }
      *(ushort *)(param_1 + 0x42) = uVar2;
      *(longlong *)(param_1 + 0x38) = lVar9;
    }
    *(ushort *)(param_1 + 0x40) = uVar2;
    if (*(ushort *)(param_1 + 0x12) < uVar2) {
      uVar4 = *(ushort *)(param_1 + 0x10);
      lVar5 = *(longlong *)(param_1 + 8);
      lVar9 = func_0x000144d9c140(8,(uint)uVar2 * 0x28);
      if (uVar4 != 0) {
        func_0x000145f40560(lVar9,lVar5,(uint)uVar4 * 0x28);
      }
      if (uVar4 != uVar2) {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = _DAT_146172360;
        auVar19 = vpmovsxbd_avx2(auVar1);
        pauVar10 = (undefined1 (*) [32])(lVar9 + (ulonglong)uVar4 * 0x28);
        lVar13 = (ulonglong)((uint)uVar2 * 8) * 5 + (ulonglong)uVar4 * -0x28;
        do {
          if (pauVar10 != (undefined1 (*) [32])0x0) {
            *pauVar10 = auVar19;
            *(undefined4 *)pauVar10[1] = 0;
            *(undefined2 *)(pauVar10[1] + 4) = 0;
          }
          pauVar10 = (undefined1 (*) [32])(pauVar10[1] + 8);
          lVar13 = lVar13 + -0x28;
        } while (lVar13 != 0);
      }
      if (lVar5 != 0) {
        func_0x000144d9c130(lVar5);
      }
      *(ushort *)(param_1 + 0x12) = uVar2;
      *(longlong *)(param_1 + 8) = lVar9;
    }
    *(ushort *)(param_1 + 0x10) = uVar2;
    if (uVar2 == 1) {
      **(undefined1 **)(param_1 + 0x28) = 0;
      **(undefined8 **)(param_1 + 0x18) = 0;
    }
    else {
      func_0x000145f40580(*(undefined1 **)(param_1 + 0x28),0,uVar2);
      func_0x000145f40580(*(undefined8 *)(param_1 + 0x18),0,(uint)uVar2 * 8);
    }
    uVar14 = 0;
    do {
      FUN_1400b8be0(param_1,param_2,uVar14);
      uVar14 = uVar14 + 1;
    } while (uVar2 != uVar14);
  }
  return;
}

