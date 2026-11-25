// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013e550  size: 98 bytes
// Name:    FUN_14013e550
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fac3c0, FUN_14013e5c0, FUN_144e96700
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013e550(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined1 (*pauVar15) [32];
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 in_ZMM3 [64];
  undefined1 auVar25 [16];
  undefined1 in_ZMM4 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  
  plVar10 = (longlong *)FUN_144e96700(0x147c17b68);
  if (plVar10 == (longlong *)0x0) {
    uVar11 = func_0x000144fc99c0(0,0);
    plVar10 = (longlong *)FUN_144fac3c0(uVar11,0x28,0x10);
  }
  FUN_14013e5c0(plVar10,param_1,param_2);
  uVar7 = FUN_144ffe5e0(*(undefined1 *)((longlong)plVar10 + 0x11));
  cVar1 = (char)plVar10[2];
  uVar2 = *(uint *)(param_1 + 400);
  if ((ulonglong)uVar2 != 0) {
    uVar20 = 0;
    do {
      lVar13 = *(longlong *)(param_1 + 0xa0 + uVar20 * 8);
      uVar8 = FUN_144ffe5e0(*(undefined1 *)(lVar13 + 0x11));
      auVar25 = in_ZMM4._0_16_;
      if ((uVar8 < uVar7) || ((uVar8 == uVar7 && (cVar1 < *(char *)(lVar13 + 0x10))))) {
        iVar19 = (int)uVar20;
        if (iVar19 < (int)uVar2) {
          auVar21._8_8_ = _DAT_145f437c0;
          auVar21._0_8_ = _DAT_145f437c0;
          auVar21._16_8_ = _DAT_145f437c0;
          auVar21._24_8_ = _DAT_145f437c0;
          auVar4 = vpcmpeqd_avx2(in_ZMM3._0_32_,in_ZMM3._0_32_);
          pauVar15 = (undefined1 (*) [32])(param_1 + 0x88 + (longlong)(int)uVar2 * 8);
          lVar12 = (longlong)(int)uVar2 - (longlong)iVar19;
          lVar13 = lVar12 + -1;
          auVar22._8_8_ = lVar13;
          auVar22._0_8_ = lVar13;
          auVar22._16_8_ = lVar13;
          auVar22._24_8_ = lVar13;
          auVar5 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
          uVar20 = 0;
          do {
            uVar16 = uVar20 + 4;
            auVar28._8_8_ = uVar20;
            auVar28._0_8_ = uVar20;
            auVar28._16_8_ = uVar20;
            auVar28._24_8_ = uVar20;
            auVar28 = vpor_avx2(auVar28,auVar5);
            auVar28 = vpcmpgtq_avx2(auVar28 ^ auVar21,auVar22 ^ auVar21);
            auVar25 = vpackssdw_avx(SUB3216(auVar28 ^ auVar4,0),SUB3216(auVar28 ^ auVar4,0x10));
            auVar25 = vpshufd_avx(auVar25,0x1b);
            auVar28 = vpmovsxdq_avx2(auVar25);
            auVar25 = auVar28._0_16_;
            auVar23 = vpmaskmovq_avx2(auVar28,*(undefined1 (*) [32])(pauVar15[-1] + 0x18));
            auVar28 = vpmaskmovq_avx2(auVar28,auVar23);
            *pauVar15 = auVar28;
            pauVar15 = pauVar15 + -1;
            uVar20 = uVar16;
          } while ((lVar12 + 3U & 0xfffffffffffffffc) != uVar16);
        }
        lVar12 = (longlong)iVar19;
        *(uint *)(param_1 + 400) = uVar2 + 1;
        *(longlong **)(param_1 + 0xa0 + lVar12 * 8) = plVar10;
        iVar14 = *(int *)(param_1 + 0x1b8);
        lVar13 = (longlong)iVar14;
        if (iVar19 < iVar14) {
          do {
            lVar17 = lVar13 + -1;
            *(undefined1 *)(param_1 + 0x198 + lVar13) = *(undefined1 *)(param_1 + 0x197 + lVar13);
            lVar13 = lVar17;
          } while (lVar12 < lVar17);
        }
        *(int *)(param_1 + 0x1b8) = iVar14 + 1;
        *(char *)(param_1 + 0x198 + lVar12) = cVar1;
        auVar26 = ZEXT1664(auVar25);
        uVar9 = (**(code **)(*plVar10 + 8))(plVar10);
        iVar14 = *(int *)(param_1 + 0x234);
        if (iVar19 < iVar14) {
          lVar17 = (longlong)iVar14;
          auVar23._8_8_ = _DAT_145f437c0;
          auVar23._0_8_ = _DAT_145f437c0;
          auVar23._16_8_ = _DAT_145f437c0;
          auVar23._24_8_ = _DAT_145f437c0;
          auVar5 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
          auVar25._8_8_ = 0;
          auVar25._0_8_ = _UNK_14615b350;
          auVar25 = vpmovsxbw_avx(auVar25);
          auVar4 = vpcmpeqd_avx2(auVar26._0_32_,auVar26._0_32_);
          lVar13 = lVar17 + -1;
          if (lVar12 < lVar17 + -1) {
            lVar13 = lVar12;
          }
          lVar18 = (lVar17 - lVar13) + -1;
          pauVar15 = (undefined1 (*) [32])(param_1 + 0x1a0 + lVar17 * 4);
          auVar24._8_8_ = lVar18;
          auVar24._0_8_ = lVar18;
          auVar24._16_8_ = lVar18;
          auVar24._24_8_ = lVar18;
          auVar21 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
          uVar20 = 0;
          do {
            uVar16 = uVar20 + 8;
            auVar27._8_8_ = uVar20;
            auVar27._0_8_ = uVar20;
            auVar27._16_8_ = uVar20;
            auVar27._24_8_ = uVar20;
            auVar28 = vpor_avx2(auVar27,auVar21);
            auVar22 = vpor_avx2(auVar27,auVar5);
            auVar22 = vpcmpgtq_avx2(auVar22 ^ auVar23,auVar24 ^ auVar23);
            auVar28 = vpcmpgtq_avx2(auVar28 ^ auVar23,auVar24 ^ auVar23);
            auVar22 = vpackssdw_avx2(auVar28,auVar22);
            auVar3 = vpackssdw_avx(SUB3216(auVar22 ^ auVar4,0),SUB3216(auVar22 ^ auVar4,0x10));
            auVar3 = vpshufb_avx(auVar3,auVar25);
            auVar22 = vpmovzxwd_avx2(auVar3);
            auVar28 = vpslld_avx2(auVar22,0x1f);
            auVar22 = vpmaskmovd_avx2(auVar28,*(undefined1 (*) [32])(pauVar15[-1] + 0x1c));
            auVar22 = vpmaskmovd_avx2(auVar28,auVar22);
            *pauVar15 = auVar22;
            pauVar15 = pauVar15 + -1;
            uVar20 = uVar16;
          } while (((lVar17 + 7) - lVar13 & 0xfffffffffffffff8U) != uVar16);
          iVar14 = *(int *)(param_1 + 0x234);
        }
        *(int *)(param_1 + 0x234) = iVar14 + 1;
        *(undefined4 *)(param_1 + 0x1bc + lVar12 * 4) = uVar9;
        uVar6 = UNK_14615918c;
        *(undefined4 *)(param_1 + 0x98) = 0x1e1e1e1e;
        *(undefined1 *)(param_1 + 0x78) = uVar6;
        *(undefined1 *)(param_1 + 0x79) = uVar6;
        *(undefined1 *)(param_1 + 0x7a) = uVar6;
        *(undefined1 *)(param_1 + 0x7b) = uVar6;
        *(undefined1 *)(param_1 + 0x7c) = uVar6;
        *(undefined1 *)(param_1 + 0x7d) = uVar6;
        *(undefined1 *)(param_1 + 0x7e) = uVar6;
        *(undefined1 *)(param_1 + 0x7f) = uVar6;
        *(undefined1 *)(param_1 + 0x80) = uVar6;
        *(undefined1 *)(param_1 + 0x81) = uVar6;
        *(undefined1 *)(param_1 + 0x82) = uVar6;
        *(undefined1 *)(param_1 + 0x83) = uVar6;
        *(undefined1 *)(param_1 + 0x84) = uVar6;
        *(undefined1 *)(param_1 + 0x85) = uVar6;
        *(undefined1 *)(param_1 + 0x86) = uVar6;
        *(undefined1 *)(param_1 + 0x87) = uVar6;
        *(undefined1 *)(param_1 + 0x88) = uVar6;
        *(undefined1 *)(param_1 + 0x89) = uVar6;
        *(undefined1 *)(param_1 + 0x8a) = uVar6;
        *(undefined1 *)(param_1 + 0x8b) = uVar6;
        *(undefined1 *)(param_1 + 0x8c) = uVar6;
        *(undefined1 *)(param_1 + 0x8d) = uVar6;
        *(undefined1 *)(param_1 + 0x8e) = uVar6;
        *(undefined1 *)(param_1 + 0x8f) = uVar6;
        *(undefined1 *)(param_1 + 0x90) = uVar6;
        *(undefined1 *)(param_1 + 0x91) = uVar6;
        *(undefined1 *)(param_1 + 0x92) = uVar6;
        *(undefined1 *)(param_1 + 0x93) = uVar6;
        *(undefined1 *)(param_1 + 0x94) = uVar6;
        *(undefined1 *)(param_1 + 0x95) = uVar6;
        *(undefined1 *)(param_1 + 0x96) = uVar6;
        *(undefined1 *)(param_1 + 0x97) = uVar6;
        *(undefined1 *)(param_1 + 0x58) = uVar6;
        *(undefined1 *)(param_1 + 0x59) = uVar6;
        *(undefined1 *)(param_1 + 0x5a) = uVar6;
        *(undefined1 *)(param_1 + 0x5b) = uVar6;
        *(undefined1 *)(param_1 + 0x5c) = uVar6;
        *(undefined1 *)(param_1 + 0x5d) = uVar6;
        *(undefined1 *)(param_1 + 0x5e) = uVar6;
        *(undefined1 *)(param_1 + 0x5f) = uVar6;
        *(undefined1 *)(param_1 + 0x60) = uVar6;
        *(undefined1 *)(param_1 + 0x61) = uVar6;
        *(undefined1 *)(param_1 + 0x62) = uVar6;
        *(undefined1 *)(param_1 + 99) = uVar6;
        *(undefined1 *)(param_1 + 100) = uVar6;
        *(undefined1 *)(param_1 + 0x65) = uVar6;
        *(undefined1 *)(param_1 + 0x66) = uVar6;
        *(undefined1 *)(param_1 + 0x67) = uVar6;
        *(undefined1 *)(param_1 + 0x68) = uVar6;
        *(undefined1 *)(param_1 + 0x69) = uVar6;
        *(undefined1 *)(param_1 + 0x6a) = uVar6;
        *(undefined1 *)(param_1 + 0x6b) = uVar6;
        *(undefined1 *)(param_1 + 0x6c) = uVar6;
        *(undefined1 *)(param_1 + 0x6d) = uVar6;
        *(undefined1 *)(param_1 + 0x6e) = uVar6;
        *(undefined1 *)(param_1 + 0x6f) = uVar6;
        *(undefined1 *)(param_1 + 0x70) = uVar6;
        *(undefined1 *)(param_1 + 0x71) = uVar6;
        *(undefined1 *)(param_1 + 0x72) = uVar6;
        *(undefined1 *)(param_1 + 0x73) = uVar6;
        *(undefined1 *)(param_1 + 0x74) = uVar6;
        *(undefined1 *)(param_1 + 0x75) = uVar6;
        *(undefined1 *)(param_1 + 0x76) = uVar6;
        *(undefined1 *)(param_1 + 0x77) = uVar6;
        *(undefined1 *)(param_1 + 0x38) = uVar6;
        *(undefined1 *)(param_1 + 0x39) = uVar6;
        *(undefined1 *)(param_1 + 0x3a) = uVar6;
        *(undefined1 *)(param_1 + 0x3b) = uVar6;
        *(undefined1 *)(param_1 + 0x3c) = uVar6;
        *(undefined1 *)(param_1 + 0x3d) = uVar6;
        *(undefined1 *)(param_1 + 0x3e) = uVar6;
        *(undefined1 *)(param_1 + 0x3f) = uVar6;
        *(undefined1 *)(param_1 + 0x40) = uVar6;
        *(undefined1 *)(param_1 + 0x41) = uVar6;
        *(undefined1 *)(param_1 + 0x42) = uVar6;
        *(undefined1 *)(param_1 + 0x43) = uVar6;
        *(undefined1 *)(param_1 + 0x44) = uVar6;
        *(undefined1 *)(param_1 + 0x45) = uVar6;
        *(undefined1 *)(param_1 + 0x46) = uVar6;
        *(undefined1 *)(param_1 + 0x47) = uVar6;
        *(undefined1 *)(param_1 + 0x48) = uVar6;
        *(undefined1 *)(param_1 + 0x49) = uVar6;
        *(undefined1 *)(param_1 + 0x4a) = uVar6;
        *(undefined1 *)(param_1 + 0x4b) = uVar6;
        *(undefined1 *)(param_1 + 0x4c) = uVar6;
        *(undefined1 *)(param_1 + 0x4d) = uVar6;
        *(undefined1 *)(param_1 + 0x4e) = uVar6;
        *(undefined1 *)(param_1 + 0x4f) = uVar6;
        *(undefined1 *)(param_1 + 0x50) = uVar6;
        *(undefined1 *)(param_1 + 0x51) = uVar6;
        *(undefined1 *)(param_1 + 0x52) = uVar6;
        *(undefined1 *)(param_1 + 0x53) = uVar6;
        *(undefined1 *)(param_1 + 0x54) = uVar6;
        *(undefined1 *)(param_1 + 0x55) = uVar6;
        *(undefined1 *)(param_1 + 0x56) = uVar6;
        *(undefined1 *)(param_1 + 0x57) = uVar6;
        *(undefined1 *)(param_1 + 0x18) = uVar6;
        *(undefined1 *)(param_1 + 0x19) = uVar6;
        *(undefined1 *)(param_1 + 0x1a) = uVar6;
        *(undefined1 *)(param_1 + 0x1b) = uVar6;
        *(undefined1 *)(param_1 + 0x1c) = uVar6;
        *(undefined1 *)(param_1 + 0x1d) = uVar6;
        *(undefined1 *)(param_1 + 0x1e) = uVar6;
        *(undefined1 *)(param_1 + 0x1f) = uVar6;
        *(undefined1 *)(param_1 + 0x20) = uVar6;
        *(undefined1 *)(param_1 + 0x21) = uVar6;
        *(undefined1 *)(param_1 + 0x22) = uVar6;
        *(undefined1 *)(param_1 + 0x23) = uVar6;
        *(undefined1 *)(param_1 + 0x24) = uVar6;
        *(undefined1 *)(param_1 + 0x25) = uVar6;
        *(undefined1 *)(param_1 + 0x26) = uVar6;
        *(undefined1 *)(param_1 + 0x27) = uVar6;
        *(undefined1 *)(param_1 + 0x28) = uVar6;
        *(undefined1 *)(param_1 + 0x29) = uVar6;
        *(undefined1 *)(param_1 + 0x2a) = uVar6;
        *(undefined1 *)(param_1 + 0x2b) = uVar6;
        *(undefined1 *)(param_1 + 0x2c) = uVar6;
        *(undefined1 *)(param_1 + 0x2d) = uVar6;
        *(undefined1 *)(param_1 + 0x2e) = uVar6;
        *(undefined1 *)(param_1 + 0x2f) = uVar6;
        *(undefined1 *)(param_1 + 0x30) = uVar6;
        *(undefined1 *)(param_1 + 0x31) = uVar6;
        *(undefined1 *)(param_1 + 0x32) = uVar6;
        *(undefined1 *)(param_1 + 0x33) = uVar6;
        *(undefined1 *)(param_1 + 0x34) = uVar6;
        *(undefined1 *)(param_1 + 0x35) = uVar6;
        *(undefined1 *)(param_1 + 0x36) = uVar6;
        *(undefined1 *)(param_1 + 0x37) = uVar6;
        if (0 < *(int *)(param_1 + 400)) {
          lVar13 = 0;
          do {
            lVar12 = *(longlong *)(param_1 + 0xa0 + lVar13 * 8);
            *(char *)(param_1 + 0x19 +
                     (longlong)*(char *)(lVar12 + 0x10) + (ulonglong)*(byte *)(lVar12 + 0x11) * 6) =
                 (char)lVar13;
            lVar13 = lVar13 + 1;
          } while (lVar13 < *(int *)(param_1 + 400));
        }
        return;
      }
      uVar20 = uVar20 + 1;
    } while (uVar2 != uVar20);
  }
  *(uint *)(param_1 + 400) = uVar2 + 1;
  *(longlong **)(param_1 + 0xa0 + (longlong)(int)uVar2 * 8) = plVar10;
  iVar19 = *(int *)(param_1 + 0x1b8);
  *(int *)(param_1 + 0x1b8) = iVar19 + 1;
  *(char *)(param_1 + 0x198 + (longlong)iVar19) = cVar1;
  uVar9 = (**(code **)(*plVar10 + 8))(plVar10);
  iVar19 = *(int *)(param_1 + 0x234);
  *(int *)(param_1 + 0x234) = iVar19 + 1;
  *(undefined4 *)(param_1 + 0x1bc + (longlong)iVar19 * 4) = uVar9;
  *(char *)(param_1 + 0x19 + (longlong)cVar1 + (ulonglong)*(byte *)((longlong)plVar10 + 0x11) * 6) =
       *(char *)(param_1 + 400) + -1;
  return;
}

