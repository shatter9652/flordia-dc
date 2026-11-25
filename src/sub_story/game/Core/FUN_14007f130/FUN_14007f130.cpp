// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007f130  size: 2180 bytes
// Name:    FUN_14007f130
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007f130(uint param_1,longlong param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [16];
  longlong lVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 in_ZMM10 [64];
  undefined1 auVar29 [32];
  undefined1 in_ZMM12 [64];
  undefined1 auVar30 [32];
  
  if (param_3 == 0) {
    if (param_1 != 0) {
      auVar3 = vpmovsxbq_avx2(ZEXT416(_DAT_145fc3d20));
      auVar4 = vpmovsxbq_avx2(ZEXT416(_DAT_145fc3d24));
      auVar5 = vpmovsxbq_avx2(ZEXT416(_DAT_145fc3d28));
      auVar6 = vpmovsxbq_avx2(ZEXT416(_DAT_145fc3d2c));
      auVar7 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
      auVar8 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
      auVar28._8_8_ = _DAT_145f437c0;
      auVar28._0_8_ = _DAT_145f437c0;
      auVar29._8_8_ = _DAT_145f437c0;
      auVar29._0_8_ = _DAT_145f437c0;
      auVar29._16_8_ = _DAT_145f437c0;
      auVar29._24_8_ = _DAT_145f437c0;
      auVar1 = vpcmpeqd_avx(in_ZMM10._0_16_,in_ZMM10._0_16_);
      auVar2 = vpcmpeqd_avx2(in_ZMM12._0_32_,in_ZMM12._0_32_);
      puVar14 = (undefined1 *)(param_2 + 0xbf8);
      uVar16 = (ulonglong)param_1 * 0x60 - 0x60;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar16;
      uVar15 = SUB168(auVar12 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
      uVar17 = 0;
      auVar19._8_8_ = uVar15;
      auVar19._0_8_ = uVar15;
      auVar19._16_8_ = uVar15;
      auVar19._24_8_ = uVar15;
      auVar19 = vpsrlq_avx2(auVar19,6);
      do {
        auVar30._8_8_ = uVar17;
        auVar30._0_8_ = uVar17;
        auVar30._16_8_ = uVar17;
        auVar30._24_8_ = uVar17;
        auVar18 = auVar19._0_16_;
        auVar12 = vpor_avx(auVar28,auVar18);
        auVar9 = vpor_avx2(auVar30,auVar8);
        auVar12 = vpcmpgtq_avx(auVar9._0_16_ ^ auVar28,auVar12);
        auVar12 = vpackssdw_avx(auVar12,auVar12);
        auVar12 = vpackssdw_avx(auVar1 ^ auVar12,auVar1 ^ auVar12);
        auVar12 = vpacksswb_avx(auVar12,auVar12);
        if ((auVar12._0_4_ & 1) != 0) {
          puVar14[-0xba0] = 0;
        }
        auVar12 = vpor_avx(auVar28,auVar18);
        auVar12 = vpcmpgtq_avx(auVar9._0_16_ ^ auVar28,auVar12);
        auVar12 = vpackssdw_avx(auVar12,auVar12);
        auVar12 = vpackssdw_avx(auVar1 ^ auVar12,auVar1 ^ auVar12);
        auVar12 = vpacksswb_avx(auVar12,auVar12);
        if ((auVar12[1] & 1) != 0) {
          puVar14[-0xb40] = 0;
        }
        auVar10 = vpor_avx2(auVar29,auVar19);
        auVar9 = vpcmpgtq_avx2(auVar9 ^ auVar29,auVar10);
        auVar11 = vpshuflw_avx2(auVar9,0xe8);
        auVar20._0_4_ = auVar11._16_4_;
        auVar20._4_4_ = auVar20._0_4_;
        auVar20._8_4_ = auVar20._0_4_;
        auVar20._12_4_ = auVar20._0_4_;
        auVar12 = vpackssdw_avx(auVar1 ^ auVar20,auVar1 ^ auVar20);
        auVar12 = vpacksswb_avx(auVar12,auVar12);
        if ((auVar12[2] & 1) != 0) {
          puVar14[-0xae0] = 0;
        }
        auVar12 = vpackssdw_avx(auVar9._16_16_,auVar9._16_16_);
        auVar12 = vpackssdw_avx(auVar1 ^ auVar12,auVar1 ^ auVar12);
        auVar12 = vpacksswb_avx(auVar12,auVar12);
        if ((auVar12[3] & 1) != 0) {
          puVar14[-0xa80] = 0;
        }
        auVar11 = vpor_avx2(auVar30,auVar7);
        auVar12 = vpor_avx(auVar28,auVar18);
        auVar12 = vpcmpgtq_avx(auVar11._0_16_ ^ auVar28,auVar12);
        auVar12 = vpackssdw_avx(auVar12,auVar12);
        auVar9 = vpermq_avx2(ZEXT1632(auVar1 ^ auVar12),0x55);
        auVar9 = vpackssdw_avx2(auVar9,auVar19);
        auVar21._0_2_ = auVar9._16_2_;
        auVar21._2_2_ = auVar21._0_2_;
        auVar21._4_2_ = auVar21._0_2_;
        auVar21._6_2_ = auVar21._0_2_;
        auVar21._8_2_ = auVar21._0_2_;
        auVar21._10_2_ = auVar21._0_2_;
        auVar21._12_2_ = auVar21._0_2_;
        auVar21._14_2_ = auVar21._0_2_;
        auVar12 = vpacksswb_avx(auVar21,auVar21);
        if ((auVar12[4] & 1) != 0) {
          puVar14[-0xa20] = 0;
        }
        auVar12 = vpor_avx(auVar28,auVar18);
        auVar12 = vpcmpgtq_avx(auVar11._0_16_ ^ auVar28,auVar12);
        auVar12 = vpshufhw_avx(auVar12,0x84);
        auVar9 = vpermq_avx2(ZEXT1632(auVar1 ^ auVar12),0x55);
        auVar9 = vpackssdw_avx2(auVar9,auVar19);
        auVar22._0_4_ = auVar9._16_4_;
        auVar22._4_4_ = auVar22._0_4_;
        auVar22._8_4_ = auVar22._0_4_;
        auVar22._12_4_ = auVar22._0_4_;
        auVar12 = vpacksswb_avx(auVar22,auVar22);
        if ((auVar12[5] & 1) != 0) {
          puVar14[-0x9c0] = 0;
        }
        auVar11 = vpcmpgtq_avx2(auVar11 ^ auVar29,auVar10);
        auVar9 = vpackssdw_avx2(auVar19,auVar11);
        auVar12 = auVar1 ^ auVar9._16_16_;
        auVar12 = vpackssdw_avx(auVar12,auVar12);
        auVar12 = vpacksswb_avx(auVar12,auVar12);
        if ((auVar12[6] & 1) != 0) {
          puVar14[-0x960] = 0;
        }
        auVar9 = vpshufhw_avx2(auVar11,0x84);
        auVar12 = auVar1 ^ auVar9._16_16_;
        auVar12 = vpackssdw_avx(auVar12,auVar12);
        auVar12 = vpacksswb_avx(auVar12,auVar12);
        if ((auVar12[7] & 1) != 0) {
          puVar14[-0x900] = 0;
        }
        auVar11 = vpor_avx2(auVar30,auVar6);
        auVar12 = vpor_avx(auVar28,auVar18);
        auVar12 = vpcmpgtq_avx(auVar11._0_16_ ^ auVar28,auVar12);
        auVar12 = vpackssdw_avx(auVar12,auVar12);
        auVar12 = vpackssdw_avx(auVar1 ^ auVar12,auVar1 ^ auVar12);
        auVar9 = vpmovzxwd_avx2(auVar12);
        auVar9 = vpacksswb_avx2(auVar9,auVar19);
        if ((auVar9._16_4_ & 1) != 0) {
          puVar14[-0x8a0] = 0;
        }
        auVar12 = vpor_avx(auVar28,auVar18);
        auVar12 = vpcmpgtq_avx(auVar11._0_16_ ^ auVar28,auVar12);
        auVar12 = vpackssdw_avx(auVar12,auVar12);
        auVar12 = vpackssdw_avx(auVar1 ^ auVar12,auVar1 ^ auVar12);
        auVar9 = vpermq_avx2(ZEXT1632(auVar12),0x55);
        auVar9 = vpacksswb_avx2(auVar9,auVar19);
        if ((auVar9[0x11] & 1) != 0) {
          puVar14[-0x840] = 0;
        }
        auVar11 = vpcmpgtq_avx2(auVar11 ^ auVar29,auVar10);
        auVar9 = vpshuflw_avx2(auVar11,0xe8);
        auVar23._0_4_ = auVar9._16_4_;
        auVar23._4_4_ = auVar23._0_4_;
        auVar23._8_4_ = auVar23._0_4_;
        auVar23._12_4_ = auVar23._0_4_;
        auVar12 = vpackssdw_avx(auVar1 ^ auVar23,auVar1 ^ auVar23);
        auVar9 = vpermq_avx2(ZEXT1632(auVar12),0x55);
        auVar9 = vpacksswb_avx2(auVar9,auVar19);
        if ((auVar9[0x12] & 1) != 0) {
          puVar14[-0x7e0] = 0;
        }
        auVar12 = vpackssdw_avx(auVar11._16_16_,auVar11._16_16_);
        auVar12 = vpackssdw_avx(auVar1 ^ auVar12,auVar1 ^ auVar12);
        auVar9 = vpermq_avx2(ZEXT1632(auVar12),0x55);
        auVar9 = vpacksswb_avx2(auVar9,auVar19);
        if ((auVar9[0x13] & 1) != 0) {
          puVar14[-0x780] = 0;
        }
        auVar11 = vpor_avx2(auVar30,auVar5);
        auVar12 = vpor_avx(auVar28,auVar18);
        auVar12 = vpcmpgtq_avx(auVar11._0_16_ ^ auVar28,auVar12);
        auVar12 = vpackssdw_avx(auVar12,auVar12);
        auVar9 = vpermq_avx2(ZEXT1632(auVar1 ^ auVar12),0x55);
        auVar9 = vpackssdw_avx2(auVar19,auVar9);
        auVar9 = vpacksswb_avx2(auVar9,auVar19);
        if ((auVar9[0x14] & 1) != 0) {
          puVar14[-0x720] = 0;
        }
        auVar12 = vpor_avx(auVar28,auVar18);
        auVar12 = vpcmpgtq_avx(auVar11._0_16_ ^ auVar28,auVar12);
        auVar12 = vpshufhw_avx(auVar12,0x84);
        auVar9 = vpermq_avx2(ZEXT1632(auVar1 ^ auVar12),0x55);
        auVar9 = vpackssdw_avx2(auVar19,auVar9);
        auVar9 = vpacksswb_avx2(auVar9,auVar19);
        if ((auVar9[0x15] & 1) != 0) {
          puVar14[-0x6c0] = 0;
        }
        auVar11 = vpcmpgtq_avx2(auVar11 ^ auVar29,auVar10);
        auVar9 = vpackssdw_avx2(auVar19,auVar11);
        auVar9 = vpackssdw_avx2(auVar19,auVar2 ^ auVar9);
        auVar9 = vpacksswb_avx2(auVar9,auVar19);
        if ((auVar9[0x16] & 1) != 0) {
          puVar14[-0x660] = 0;
        }
        auVar9 = vpshufhw_avx2(auVar11,0x84);
        auVar9 = vpackssdw_avx2(auVar19,auVar2 ^ auVar9);
        auVar9 = vpacksswb_avx2(auVar9,auVar19);
        if ((auVar9[0x17] & 1) != 0) {
          puVar14[-0x600] = 0;
        }
        auVar9 = vpor_avx2(auVar30,auVar4);
        auVar12 = vpor_avx(auVar28,auVar18);
        auVar12 = vpcmpgtq_avx(auVar9._0_16_ ^ auVar28,auVar12);
        auVar12 = vpackssdw_avx(auVar12,auVar12);
        auVar12 = vpackssdw_avx(auVar1 ^ auVar12,auVar1 ^ auVar12);
        auVar12 = vpacksswb_avx(auVar12,auVar12);
        if ((auVar12[8] & 1) != 0) {
          puVar14[-0x5a0] = 0;
        }
        auVar12 = vpor_avx(auVar28,auVar18);
        auVar12 = vpcmpgtq_avx(auVar9._0_16_ ^ auVar28,auVar12);
        auVar12 = vpackssdw_avx(auVar12,auVar12);
        auVar12 = vpackssdw_avx(auVar1 ^ auVar12,auVar1 ^ auVar12);
        auVar12 = vpacksswb_avx(auVar12,auVar12);
        if ((auVar12[9] & 1) != 0) {
          puVar14[-0x540] = 0;
        }
        auVar9 = vpcmpgtq_avx2(auVar9 ^ auVar29,auVar10);
        auVar11 = vpshuflw_avx2(auVar9,0xe8);
        auVar24._0_4_ = auVar11._16_4_;
        auVar24._4_4_ = auVar24._0_4_;
        auVar24._8_4_ = auVar24._0_4_;
        auVar24._12_4_ = auVar24._0_4_;
        auVar12 = vpackssdw_avx(auVar1 ^ auVar24,auVar1 ^ auVar24);
        auVar12 = vpacksswb_avx(auVar12,auVar12);
        if ((auVar12[10] & 1) != 0) {
          puVar14[-0x4e0] = 0;
        }
        auVar12 = vpackssdw_avx(auVar9._16_16_,auVar9._16_16_);
        auVar12 = vpackssdw_avx(auVar1 ^ auVar12,auVar1 ^ auVar12);
        auVar12 = vpacksswb_avx(auVar12,auVar12);
        if ((auVar12[0xb] & 1) != 0) {
          puVar14[-0x480] = 0;
        }
        auVar11 = vpor_avx2(auVar30,auVar3);
        auVar12 = vpor_avx(auVar28,auVar18);
        auVar12 = vpcmpgtq_avx(auVar11._0_16_ ^ auVar28,auVar12);
        auVar12 = vpackssdw_avx(auVar12,auVar12);
        auVar9 = vpermq_avx2(ZEXT1632(auVar1 ^ auVar12),0x55);
        auVar9 = vpackssdw_avx2(auVar9,auVar19);
        auVar25._0_2_ = auVar9._16_2_;
        auVar25._2_2_ = auVar25._0_2_;
        auVar25._4_2_ = auVar25._0_2_;
        auVar25._6_2_ = auVar25._0_2_;
        auVar25._8_2_ = auVar25._0_2_;
        auVar25._10_2_ = auVar25._0_2_;
        auVar25._12_2_ = auVar25._0_2_;
        auVar25._14_2_ = auVar25._0_2_;
        auVar12 = vpacksswb_avx(auVar25,auVar25);
        if ((auVar12[0xc] & 1) != 0) {
          puVar14[-0x420] = 0;
        }
        auVar12 = vpor_avx(auVar28,auVar18);
        auVar12 = vpcmpgtq_avx(auVar11._0_16_ ^ auVar28,auVar12);
        auVar12 = vpshufhw_avx(auVar12,0x84);
        auVar9 = vpermq_avx2(ZEXT1632(auVar1 ^ auVar12),0x55);
        auVar9 = vpackssdw_avx2(auVar9,auVar19);
        auVar26._0_4_ = auVar9._16_4_;
        auVar26._4_4_ = auVar26._0_4_;
        auVar26._8_4_ = auVar26._0_4_;
        auVar26._12_4_ = auVar26._0_4_;
        auVar12 = vpacksswb_avx(auVar26,auVar26);
        if ((auVar12[0xd] & 1) != 0) {
          puVar14[-0x3c0] = 0;
        }
        auVar11 = vpcmpgtq_avx2(auVar11 ^ auVar29,auVar10);
        auVar9 = vpackssdw_avx2(auVar19,auVar11);
        auVar12 = auVar1 ^ auVar9._16_16_;
        auVar12 = vpackssdw_avx(auVar12,auVar12);
        auVar12 = vpacksswb_avx(auVar12,auVar12);
        if ((auVar12[0xe] & 1) != 0) {
          puVar14[-0x360] = 0;
        }
        auVar9 = vpshufhw_avx2(auVar11,0x84);
        auVar12 = auVar1 ^ auVar9._16_16_;
        auVar12 = vpackssdw_avx(auVar12,auVar12);
        auVar12 = vpacksswb_avx(auVar12,auVar12);
        if ((auVar12[0xf] & 1) != 0) {
          puVar14[-0x300] = 0;
        }
        auVar11 = vpor_avx2(auVar30,_DAT_145fc3c80);
        auVar12 = vpor_avx(auVar28,auVar18);
        auVar12 = vpcmpgtq_avx(auVar11._0_16_ ^ auVar28,auVar12);
        auVar12 = vpackssdw_avx(auVar12,auVar12);
        auVar12 = vpackssdw_avx(auVar1 ^ auVar12,auVar1 ^ auVar12);
        auVar9 = vpmovzxwd_avx2(auVar12);
        auVar9 = vpacksswb_avx2(auVar19,auVar9);
        if ((auVar9[0x18] & 1) != 0) {
          puVar14[-0x2a0] = 0;
        }
        auVar12 = vpor_avx(auVar28,auVar18);
        auVar12 = vpcmpgtq_avx(auVar11._0_16_ ^ auVar28,auVar12);
        auVar12 = vpackssdw_avx(auVar12,auVar12);
        auVar12 = vpackssdw_avx(auVar1 ^ auVar12,auVar1 ^ auVar12);
        auVar9 = vpermq_avx2(ZEXT1632(auVar12),0x55);
        auVar9 = vpacksswb_avx2(auVar19,auVar9);
        if ((auVar9[0x19] & 1) != 0) {
          puVar14[-0x240] = 0;
        }
        auVar11 = vpcmpgtq_avx2(auVar11 ^ auVar29,auVar10);
        auVar9 = vpshuflw_avx2(auVar11,0xe8);
        auVar27._0_4_ = auVar9._16_4_;
        auVar27._4_4_ = auVar27._0_4_;
        auVar27._8_4_ = auVar27._0_4_;
        auVar27._12_4_ = auVar27._0_4_;
        auVar12 = vpackssdw_avx(auVar1 ^ auVar27,auVar1 ^ auVar27);
        auVar9 = vpermq_avx2(ZEXT1632(auVar12),0x55);
        auVar9 = vpacksswb_avx2(auVar19,auVar9);
        if ((auVar9[0x1a] & 1) != 0) {
          puVar14[-0x1e0] = 0;
        }
        auVar12 = vpackssdw_avx(auVar11._16_16_,auVar11._16_16_);
        auVar12 = vpackssdw_avx(auVar1 ^ auVar12,auVar1 ^ auVar12);
        auVar9 = vpermq_avx2(ZEXT1632(auVar12),0x55);
        auVar9 = vpacksswb_avx2(auVar19,auVar9);
        if ((auVar9[0x1b] & 1) != 0) {
          puVar14[-0x180] = 0;
        }
        auVar30 = vpor_avx2(auVar30,_DAT_145fc3c60);
        auVar12 = vpor_avx(auVar28,auVar18);
        auVar12 = vpcmpgtq_avx(auVar30._0_16_ ^ auVar28,auVar12);
        auVar12 = vpackssdw_avx(auVar12,auVar12);
        auVar9 = vpermq_avx2(ZEXT1632(auVar1 ^ auVar12),0x55);
        auVar9 = vpackssdw_avx2(auVar19,auVar9);
        auVar9 = vpacksswb_avx2(auVar19,auVar9);
        if ((auVar9[0x1c] & 1) != 0) {
          puVar14[-0x120] = 0;
        }
        auVar12 = vpor_avx(auVar28,auVar18);
        auVar12 = vpcmpgtq_avx(auVar30._0_16_ ^ auVar28,auVar12);
        auVar12 = vpshufhw_avx(auVar12,0x84);
        auVar9 = vpermq_avx2(ZEXT1632(auVar1 ^ auVar12),0x55);
        auVar9 = vpackssdw_avx2(auVar19,auVar9);
        auVar9 = vpacksswb_avx2(auVar19,auVar9);
        if ((auVar9[0x1d] & 1) != 0) {
          puVar14[-0xc0] = 0;
        }
        auVar30 = vpcmpgtq_avx2(auVar30 ^ auVar29,auVar10);
        auVar9 = vpackssdw_avx2(auVar19,auVar30);
        auVar9 = vpackssdw_avx2(auVar19,auVar2 ^ auVar9);
        auVar9 = vpacksswb_avx2(auVar19,auVar9);
        if ((auVar9[0x1e] & 1) != 0) {
          puVar14[-0x60] = 0;
        }
        auVar9 = vpshufhw_avx2(auVar30,0x84);
        auVar9 = vpackssdw_avx2(auVar19,auVar2 ^ auVar9);
        auVar9 = vpacksswb_avx2(auVar19,auVar9);
        if ((auVar9[0x1f] & 1) != 0) {
          *puVar14 = 0;
        }
        uVar17 = uVar17 + 0x20;
        puVar14 = puVar14 + 0xc00;
      } while ((uVar16 / 0x60 + 0x20 & 0xffffffffffffffe0) != uVar17);
    }
  }
  else {
    lVar13 = func_0x00014007b480();
    if (lVar13 != 0) {
      *(undefined1 *)(lVar13 + 0x58) = 0;
    }
  }
  return;
}

