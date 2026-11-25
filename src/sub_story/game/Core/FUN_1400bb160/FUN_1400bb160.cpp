// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bb160  size: 724 bytes
// Name:    FUN_1400bb160
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145647140, FUN_144f44240
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400bb160(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  int iVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [32];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar40 [64];
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined8 auStackX_8 [3];
  undefined8 uStackX_20;
  undefined8 uStack_48;
  
  uStack_48 = 0x1400bb176;
  lVar17 = FUN_145647140();
  lVar17 = -lVar17;
  *(undefined8 *)(&stack0x00002040 + lVar17) = unaff_XMM11_Qa;
  *(undefined8 *)(&stack0x00002048 + lVar17) = unaff_XMM11_Qb;
  *(undefined8 *)(&stack0x00002030 + lVar17) = unaff_XMM10_Qa;
  *(undefined8 *)(&stack0x00002038 + lVar17) = unaff_XMM10_Qb;
  *(undefined8 *)(&stack0x00002020 + lVar17) = unaff_XMM9_Qa;
  *(undefined8 *)(&stack0x00002028 + lVar17) = unaff_XMM9_Qb;
  *(undefined8 *)(&stack0x00002010 + lVar17) = unaff_XMM8_Qa;
  *(undefined8 *)(&stack0x00002018 + lVar17) = unaff_XMM8_Qb;
  *(undefined8 *)(&stack0x00002000 + lVar17) = unaff_XMM7_Qa;
  *(undefined8 *)(&stack0x00002008 + lVar17) = unaff_XMM7_Qb;
  *(undefined8 *)(&stack0x00001ff0 + lVar17) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x00001ff8 + lVar17) = unaff_XMM6_Qb;
  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar17) = param_4;
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar17) = param_3;
  *(undefined8 *)(&stack0xffffffffffffffe8 + lVar17) = param_2;
  if (_DAT_1477aeb60 != 0) {
    lVar13 = *param_1;
    iVar25 = 0;
    puVar3 = (undefined8 *)(&stack0x000000b0 + lVar17);
    auVar40 = ZEXT1664((undefined1  [16])0x0);
    uVar4 = *(undefined8 *)(lVar13 + 0x70);
    uVar5 = *(undefined8 *)(lVar13 + 0x78);
    uVar6 = *(undefined8 *)(lVar13 + 0x80);
    *(undefined8 *)(&stack0x00000040 + lVar17) = uVar4;
    *(undefined8 *)(&stack0x00000048 + lVar17) = uVar4;
    *(undefined8 *)(&stack0x00000050 + lVar17) = uVar4;
    *(undefined8 *)(&stack0x00000058 + lVar17) = uVar4;
    *(undefined8 *)((longlong)&uStackX_20 + lVar17) = uVar5;
    *(undefined8 *)(&stack0x00000028 + lVar17) = uVar5;
    *(undefined8 *)(&stack0x00000030 + lVar17) = uVar5;
    *(undefined8 *)(&stack0x00000038 + lVar17) = uVar5;
    puVar24 = (undefined8 *)(&stack0x00000000 + lVar17);
    *puVar24 = uVar6;
    puVar24[1] = uVar6;
    puVar24[2] = uVar6;
    puVar24[3] = uVar6;
    uVar18 = _DAT_1477aeb60 + 3 >> 2;
    do {
      uVar23 = 0xfa;
      if (uVar18 < 0xfa) {
        uVar23 = (ulonglong)uVar18;
      }
      auVar40 = ZEXT1664(auVar40._0_16_);
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1400bb236;
      func_0x000144f441b0(&stack0x00000068 + lVar17,iVar25);
      auVar10 = *(undefined1 (*) [32])(&stack0x00000040 + lVar17);
      auVar11 = *(undefined1 (*) [32])((longlong)&uStackX_20 + lVar17);
      auVar12 = *(undefined1 (*) [32])(&stack0x00000000 + lVar17);
      lVar13 = *(longlong *)(&stack0x00000078 + lVar17);
      lVar14 = *(longlong *)(&stack0x00000070 + lVar17);
      lVar20 = 0;
      auVar7 = **(undefined1 (**) [16])(&stack0xffffffffffffffe8 + lVar17);
      auVar8 = **(undefined1 (**) [16])(&stack0xfffffffffffffff8 + lVar17);
      auVar9 = **(undefined1 (**) [16])(&stack0xfffffffffffffff0 + lVar17);
      lVar15 = *(longlong *)(&stack0x00000068 + lVar17);
      uVar21 = uVar23;
      puVar24 = puVar3;
      do {
        auVar26._8_8_ = 0;
        auVar26._0_8_ = *(ulonglong *)(lVar13 + 0x60 + lVar20 * 8);
        auVar29._8_8_ = 0;
        auVar29._0_8_ = *(ulonglong *)(lVar13 + 0x40 + lVar20 * 8);
        auVar26 = vpunpcklqdq_avx(auVar29,auVar26);
        auVar30._8_8_ = 0;
        auVar30._0_8_ = *(ulonglong *)(lVar13 + 0x20 + lVar20 * 8);
        auVar35._8_8_ = 0;
        auVar35._0_8_ = *(ulonglong *)(lVar13 + lVar20 * 8);
        auVar27 = vpunpcklqdq_avx(auVar35,auVar30);
        auVar28._16_16_ = ZEXT116(1) * auVar26;
        auVar28._0_16_ = ZEXT116(0) * auVar26 | ZEXT116(1) * auVar27;
        auVar28 = vpor_avx2(auVar10,auVar28);
        auVar31._8_8_ = 0;
        auVar31._0_8_ = *(ulonglong *)(lVar13 + 0x68 + lVar20 * 8);
        auVar36._8_8_ = 0;
        auVar36._0_8_ = *(ulonglong *)(lVar13 + 0x48 + lVar20 * 8);
        auVar26 = vpunpcklqdq_avx(auVar36,auVar31);
        auVar37._8_8_ = 0;
        auVar37._0_8_ = *(ulonglong *)(lVar13 + 0x28 + lVar20 * 8);
        auVar41._8_8_ = 0;
        auVar41._0_8_ = *(ulonglong *)(lVar13 + 8 + lVar20 * 8);
        auVar27 = vpunpcklqdq_avx(auVar41,auVar37);
        auVar33._16_16_ = ZEXT116(1) * auVar26;
        auVar33._0_16_ = ZEXT116(0) * auVar26 | ZEXT116(1) * auVar27;
        auVar33 = vpor_avx2(auVar11,auVar33);
        auVar28 = vpor_avx2(auVar28,auVar33);
        auVar32._8_8_ = 0;
        auVar32._0_8_ = *(ulonglong *)(lVar13 + 0x70 + lVar20 * 8);
        auVar38._8_8_ = 0;
        auVar38._0_8_ = *(ulonglong *)(lVar13 + 0x50 + lVar20 * 8);
        auVar26 = vpunpcklqdq_avx(auVar38,auVar32);
        auVar39._8_8_ = 0;
        auVar39._0_8_ = *(ulonglong *)(lVar13 + 0x30 + lVar20 * 8);
        auVar42._8_8_ = 0;
        auVar42._0_8_ = *(ulonglong *)(lVar13 + 0x10 + lVar20 * 8);
        auVar27 = vpunpcklqdq_avx(auVar42,auVar39);
        auVar34._16_16_ = ZEXT116(1) * auVar26;
        auVar34._0_16_ = ZEXT116(0) * auVar26 | ZEXT116(1) * auVar27;
        auVar33 = vpor_avx2(auVar12,auVar34);
        auVar28 = vpor_avx2(auVar28,auVar33);
        auVar28 = vpcmpeqd_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar28);
        auVar30 = vshufps_avx(auVar28._0_16_,auVar28._16_16_,0x88);
        auVar26 = *(undefined1 (*) [16])(lVar14 + lVar20);
        *puVar24 = *(undefined8 *)(lVar15 + lVar20 * 2);
        auVar27 = vpand_avx(auVar26,auVar7);
        auVar29 = vpand_avx(auVar9,auVar26);
        auVar26 = vpand_avx(auVar8,auVar26);
        auVar26 = vpminsd_avx(auVar26,auVar29);
        auVar26 = vpminsd_avx(auVar26,auVar27);
        auVar29 = auVar40._0_16_;
        auVar26 = vpcmpgtd_avx(auVar26,auVar29);
        auVar27._0_4_ = ~auVar30._0_4_ & auVar26._0_4_;
        auVar27._4_4_ = ~auVar30._4_4_ & auVar26._4_4_;
        auVar27._8_4_ = ~auVar30._8_4_ & auVar26._8_4_;
        auVar27._12_4_ = ~auVar30._12_4_ & auVar26._12_4_;
        auVar26 = vpcmpeqd_avx(auVar27,auVar29);
        uVar19 = vmovmskps_avx(auVar26);
        uVar19 = uVar19 ^ 0xf;
        puVar24 = puVar24 + (uVar19 & 1);
        *puVar24 = *(undefined8 *)(lVar15 + 8 + lVar20 * 2);
        puVar1 = puVar24 + (((byte)uVar19 & 2) >> 1);
        *puVar1 = *(undefined8 *)(lVar15 + 0x10 + lVar20 * 2);
        lVar2 = lVar20 * 2;
        puVar24 = (undefined8 *)
                  ((ulonglong)(uVar19 & 0xfffffff8) + (longlong)(puVar1 + (((byte)uVar19 & 4) >> 2))
                  );
        lVar20 = lVar20 + 0x10;
        uVar21 = uVar21 - 1;
        puVar1[((byte)uVar19 & 4) >> 2] = *(undefined8 *)(lVar15 + 0x18 + lVar2);
      } while (uVar21 != 0);
      iVar22 = (int)uVar23;
      iVar25 = iVar25 + iVar22;
      auVar40 = ZEXT1664(auVar29);
      *(undefined8 *)((longlong)&uStack_48 + lVar17) = 0x1400bb3e1;
      FUN_144f44240(param_1,puVar3,
                    (ulonglong)((longlong)puVar24 - (longlong)puVar3) >> 3 & 0xffffffff);
      uVar19 = uVar18 - iVar22;
      bVar16 = iVar22 <= (int)uVar18;
      uVar18 = uVar19;
    } while (uVar19 != 0 && bVar16);
  }
  return;
}

