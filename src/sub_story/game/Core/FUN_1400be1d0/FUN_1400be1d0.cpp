// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400be1d0  size: 1090 bytes
// Name:    FUN_1400be1d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140eee9b0, FUN_140c0df10, FUN_145647140, FUN_140eeea90, FUN_1439e0310
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400be1d0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 *puVar18;
  longlong lVar19;
  undefined1 auVar20 [32];
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 in_ZMM5 [64];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar23 [32];
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined1 auVar24 [16];
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined1 uStackX_17;
  longlong alStackX_18 [2];
  undefined8 uStack_30;
  undefined1 auVar25 [32];
  
  uStack_30 = 0x1400be1e1;
  lVar14 = FUN_145647140();
  lVar14 = -lVar14;
  *(undefined8 *)(&stack0x000012b8 + lVar14) = unaff_XMM11_Qa;
  *(undefined8 *)(&stack0x000012c0 + lVar14) = unaff_XMM11_Qb;
  *(undefined8 *)(&stack0x000012a8 + lVar14) = unaff_XMM10_Qa;
  *(undefined8 *)(&stack0x000012b0 + lVar14) = unaff_XMM10_Qb;
  *(undefined8 *)(&stack0x00001298 + lVar14) = unaff_XMM9_Qa;
  *(undefined8 *)(&stack0x000012a0 + lVar14) = unaff_XMM9_Qb;
  *(undefined8 *)(&stack0x00001288 + lVar14) = unaff_XMM8_Qa;
  *(undefined8 *)(&stack0x00001290 + lVar14) = unaff_XMM8_Qb;
  *(undefined8 *)(&stack0x00001278 + lVar14) = unaff_XMM7_Qa;
  *(undefined8 *)(&stack0x00001280 + lVar14) = unaff_XMM7_Qb;
  *(undefined8 *)(&stack0x00001268 + lVar14) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x00001270 + lVar14) = unaff_XMM6_Qb;
  uVar13 = *(undefined4 *)(param_1 + 0x140c);
  *(undefined8 *)((longlong)&uStack_30 + lVar14) = 0x1400be22a;
  plVar15 = (longlong *)func_0x00014527b310(uVar13);
  if (plVar15 != (longlong *)0x0) {
    iVar3 = *(int *)(param_1 + 0x1400);
    *(undefined8 *)((longlong)&uStack_30 + lVar14) = 0x1400be256;
    func_0x000145f40560(&stack0x00000868 + lVar14,param_1,0xa00);
    *(undefined8 *)(&stack0x00000058 + lVar14) = 0x40;
    if (0 < (longlong)iVar3) {
      *(undefined8 *)((longlong)&uStack_30 + lVar14) = 0x1400be27a;
      FUN_1439e0310(&stack0x00000058 + lVar14,param_1,iVar3);
    }
    pcVar4 = *(code **)(*plVar15 + 0x40);
    *(undefined8 *)((longlong)&uStack_30 + lVar14) = 0x1400be289;
    uVar12 = (*pcVar4)(plVar15,param_1,0);
    *(uint *)(param_1 + 0x1400) = uVar12;
    uVar11 = _DAT_14abce284;
    lVar1 = _DAT_145fc6ff0;
    if ((iVar3 != 0 & (byte)(param_2 & 0xffffffff) & 0 < (int)uVar12) == 1) {
      if (iVar3 < 1) {
        lVar19 = (ulonglong)uVar12 - 1;
        auVar22._8_8_ = _DAT_145f437c0;
        auVar22._0_8_ = _DAT_145f437c0;
        auVar23._8_8_ = _DAT_145f437c0;
        auVar23._0_8_ = _DAT_145f437c0;
        auVar23._16_8_ = _DAT_145f437c0;
        auVar23._24_8_ = _DAT_145f437c0;
        auVar9 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
        auVar5 = vpcmpeqd_avx(in_ZMM5._0_16_,in_ZMM5._0_16_);
        lVar17 = 0;
        auVar24._8_8_ = lVar19;
        auVar24._0_8_ = lVar19;
        auVar25._16_8_ = lVar19;
        auVar25._0_16_ = auVar24;
        auVar25._24_8_ = lVar19;
        auVar10 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
        do {
          auVar6 = vpcmpgtq_avx(auVar9._0_16_ ^ auVar22,auVar24 ^ auVar22);
          auVar6 = vpackssdw_avx(auVar6,auVar6);
          auVar6 = vpackssdw_avx(auVar6 ^ auVar5,auVar6 ^ auVar5);
          if ((auVar6._0_4_ & 1) != 0) {
            *(uint *)(param_1 + 0x1c + lVar17) = uVar11;
          }
          auVar6 = vpcmpgtq_avx(auVar9._0_16_ ^ auVar22,auVar24 ^ auVar22);
          auVar6 = vpackssdw_avx(auVar6,auVar6);
          auVar6 = vpackssdw_avx(auVar6 ^ auVar5,auVar6 ^ auVar5);
          if ((auVar6[2] & 1) != 0) {
            *(uint *)(param_1 + 0x44 + lVar17) = uVar11;
          }
          auVar8 = vpcmpgtq_avx2(auVar9 ^ auVar23,auVar25 ^ auVar23);
          auVar20 = ZEXT432(uVar11);
          auVar7 = vpackssdw_avx2(auVar8,auVar20);
          auVar6 = auVar7._16_16_ ^ auVar5;
          auVar6 = vpackssdw_avx(auVar6,auVar6);
          if ((auVar6[8] & 1) != 0) {
            *(uint *)(param_1 + 0x6c + lVar17) = uVar11;
          }
          auVar7 = vpackssdw_avx2(auVar8,auVar20);
          auVar6 = auVar7._16_16_ ^ auVar5;
          auVar6 = vpackssdw_avx(auVar6,auVar6);
          if ((auVar6[10] & 1) != 0) {
            *(uint *)(param_1 + 0x94 + lVar17) = uVar11;
          }
          auVar6 = vpcmpgtq_avx(auVar10._0_16_ ^ auVar22,auVar24 ^ auVar22);
          auVar6 = vpackssdw_avx(auVar6,auVar6);
          auVar6 = vpackssdw_avx(auVar6 ^ auVar5,auVar6 ^ auVar5);
          if ((auVar6[4] & 1) != 0) {
            *(uint *)(param_1 + 0xbc + lVar17) = uVar11;
          }
          auVar6 = vpcmpgtq_avx(auVar10._0_16_ ^ auVar22,auVar24 ^ auVar22);
          auVar6 = vpackssdw_avx(auVar6,auVar6);
          auVar6 = vpackssdw_avx(auVar6 ^ auVar5,auVar6 ^ auVar5);
          if ((auVar6[6] & 1) != 0) {
            *(uint *)(param_1 + 0xe4 + lVar17) = uVar11;
          }
          auVar8 = vpcmpgtq_avx2(auVar10 ^ auVar23,auVar25 ^ auVar23);
          auVar7 = vpackssdw_avx2(auVar20,auVar8);
          auVar6 = auVar7._16_16_ ^ auVar5;
          auVar6 = vpackssdw_avx(auVar6,auVar6);
          if ((auVar6[0xc] & 1) != 0) {
            *(uint *)(param_1 + 0x10c + lVar17) = uVar11;
          }
          auVar7 = vpshufhw_avx2(auVar8,0x84);
          auVar6 = auVar7._16_16_ ^ auVar5;
          auVar6 = vpackssdw_avx(auVar6,auVar6);
          if ((auVar6[0xe] & 1) != 0) {
            *(uint *)(param_1 + 0x134 + lVar17) = uVar11;
          }
          auVar7._0_8_ = lVar1 + auVar9._0_8_;
          auVar7._8_8_ = lVar1 + auVar9._8_8_;
          auVar7._16_8_ = lVar1 + auVar9._16_8_;
          auVar7._24_8_ = lVar1 + auVar9._24_8_;
          auVar9._0_8_ = lVar1 + auVar10._0_8_;
          auVar9._8_8_ = lVar1 + auVar10._8_8_;
          auVar9._16_8_ = lVar1 + auVar10._16_8_;
          auVar9._24_8_ = lVar1 + auVar10._24_8_;
          lVar17 = lVar17 + 0x140;
          auVar10 = auVar9;
          auVar9 = auVar7;
        } while ((ulonglong)(uVar12 + 7 >> 3) * 0x140 != lVar17);
      }
      else {
        uVar16 = 0;
        do {
          lVar1 = param_1 + uVar16 * 0x28;
          puVar18 = &stack0x00000868 + lVar14;
          lVar19 = (longlong)iVar3;
          do {
            if (*(int *)(lVar1 + 0x18) == *(int *)(puVar18 + 0x18)) {
              uVar21 = *(uint *)(puVar18 + 0x1c);
              break;
            }
            puVar18 = puVar18 + 0x28;
            lVar19 = lVar19 + -1;
            uVar21 = uVar11;
          } while (lVar19 != 0);
          uVar16 = uVar16 + 1;
          *(uint *)(lVar1 + 0x1c) = uVar21;
        } while (uVar16 != uVar12);
      }
    }
    if ((0 < iVar3) && (0 < (int)uVar12)) {
      (&stack0xfffffffffffffff8)[lVar14] = 0;
      *(undefined1 **)(&stack0x00000038 + lVar14) = &stack0x00000460 + lVar14;
      *(undefined **)(&stack0x00000040 + lVar14) = &UNK_140c0e040;
      *(undefined **)(&stack0x00000048 + lVar14) = &SUB_140004380;
      *(undefined1 **)((longlong)alStackX_18 + lVar14 + -0x18) = &stack0x00000038 + lVar14;
      *(undefined **)(&stack0x00000050 + lVar14) = &SUB_140004380;
      *(undefined8 *)((longlong)&uStack_30 + lVar14) = 0x1400be522;
      FUN_140c0df10(param_1,&stack0x00000058 + lVar14,param_1,uVar12);
    }
    if ((*(byte *)(param_1 + 0x16f4) & 1) != 0) {
      puVar2 = (undefined8 *)(&stack0x00000460 + lVar14);
      lVar1 = param_1 + 0xa00;
      *puVar2 = 0x40;
      uVar13 = *(undefined4 *)(param_1 + 0x1404);
      *(undefined8 *)((longlong)&uStack_30 + lVar14) = 0x1400be55a;
      FUN_1439e0310(puVar2,lVar1,uVar13);
      pcVar4 = *(code **)(*plVar15 + 0x40);
      *(undefined8 *)((longlong)&uStack_30 + lVar14) = 0x1400be569;
      uVar13 = (*pcVar4)(plVar15,lVar1,1);
      *(undefined4 *)(param_1 + 0x1404) = uVar13;
      (&stack0xfffffffffffffff8)[lVar14] = 1;
      *(longlong *)((longlong)alStackX_18 + lVar14) = (longlong)(&uStackX_17 + lVar14);
      *(undefined **)((longlong)alStackX_18 + lVar14 + 8) = &UNK_1439e03b0;
      *(undefined **)(&stack0x00000028 + lVar14) = &SUB_140004380;
      *(longlong **)((longlong)alStackX_18 + lVar14 + -0x18) =
           (longlong *)((longlong)alStackX_18 + lVar14);
      *(undefined **)(&stack0x00000030 + lVar14) = &SUB_140004380;
      *(undefined8 *)((longlong)&uStack_30 + lVar14) = 0x1400be5b8;
      FUN_140c0df10(param_1,puVar2,lVar1,uVar13);
      *(undefined8 *)((longlong)&uStack_30 + lVar14) = 0x1400be5c0;
      FUN_140eeea90(param_1);
    }
    *(undefined8 *)((longlong)&uStack_30 + lVar14) = 0x1400be5cd;
    FUN_140eee9b0(param_1,param_2 & 0xffffffff);
  }
  return;
}

