// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140160a40  size: 976 bytes
// Name:    FUN_140160a40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140160a40(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [16];
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined1 auVar13 [32];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_ZMM4 [64];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  
  *(undefined4 *)(param_1 + 0x158) = 0x1ffff;
  *(undefined **)(param_1 + 0x88) = &UNK_1465a45e0;
  puVar11 = *(undefined8 **)(param_1 + 0xc0);
  if ((ulonglong)*(uint *)(param_1 + 0xbc) != 0) {
    lVar10 = (ulonglong)*(uint *)(param_1 + 0xbc) * 0x60;
    do {
      (**(code **)*puVar11)(puVar11,0);
      puVar11 = puVar11 + 0xc;
      lVar10 = lVar10 + -0x60;
    } while (lVar10 != 0);
    puVar11 = *(undefined8 **)(param_1 + 0xc0);
  }
  *(undefined4 *)(param_1 + 0xbc) = 0;
  if (puVar11 != (undefined8 *)0x0) {
    func_0x000144d9c130(puVar11);
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined **)(param_1 + 0x30) = &UNK_1465a45a0;
  puVar11 = *(undefined8 **)(param_1 + 0x68);
  if ((ulonglong)*(uint *)(param_1 + 100) != 0) {
    lVar10 = (ulonglong)*(uint *)(param_1 + 100) * 0x70;
    do {
      (**(code **)*puVar11)(puVar11,0);
      puVar11 = puVar11 + 0xe;
      lVar10 = lVar10 + -0x70;
    } while (lVar10 != 0);
    puVar11 = *(undefined8 **)(param_1 + 0x68);
  }
  *(undefined4 *)(param_1 + 100) = 0;
  if (puVar11 != (undefined8 *)0x0) {
    func_0x000144d9c130();
  }
  auVar15 = in_ZMM4._0_16_;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    func_0x000144d9c130();
    auVar15 = in_ZMM4._0_16_;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar10 = *(longlong *)(param_1 + 0x18);
  if ((ulonglong)*(uint *)(param_1 + 0x14) != 0) {
    auVar14._8_8_ = _DAT_145f437c0;
    auVar14._0_8_ = _DAT_145f437c0;
    auVar16._8_8_ = _DAT_145f437c0;
    auVar16._0_8_ = _DAT_145f437c0;
    auVar16._16_8_ = _DAT_145f437c0;
    auVar16._24_8_ = _DAT_145f437c0;
    auVar4 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
    puVar7 = (undefined4 *)(lVar10 + 0x160);
    auVar15 = vpcmpeqd_avx(auVar15,auVar15);
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x14) * 0x30 - 0x30;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar8;
    uVar9 = SUB168(auVar6 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
    uVar12 = 0;
    auVar13._8_8_ = uVar9;
    auVar13._0_8_ = uVar9;
    auVar13._16_8_ = uVar9;
    auVar13._24_8_ = uVar9;
    auVar17 = vpsrlq_avx2(auVar13,5);
    auVar13 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
    auVar6 = vpor_avx(auVar17._0_16_,auVar14);
    auVar5 = vpor_avx2(auVar17,auVar16);
    auVar2 = vpor_avx(auVar17._0_16_,auVar14);
    do {
      auVar18._8_8_ = uVar12;
      auVar18._0_8_ = uVar12;
      auVar18._16_8_ = uVar12;
      auVar18._24_8_ = uVar12;
      auVar17 = vpor_avx2(auVar18,auVar4);
      auVar1 = vpcmpgtq_avx(auVar17._0_16_ ^ auVar14,auVar6);
      auVar1 = vpackssdw_avx(auVar1,auVar1);
      auVar1 = vpackssdw_avx(auVar1 ^ auVar15,auVar1 ^ auVar15);
      if ((auVar1._0_4_ & 1) != 0) {
        puVar7[-0x54] = 0x1ffff;
      }
      auVar1 = vpcmpgtq_avx(auVar17._0_16_ ^ auVar14,auVar6);
      auVar1 = vpackssdw_avx(auVar1,auVar1);
      auVar1 = vpackssdw_avx(auVar1 ^ auVar15,auVar1 ^ auVar15);
      if ((auVar1[2] & 1) != 0) {
        puVar7[-0x48] = 0x1ffff;
      }
      auVar3 = vpcmpgtq_avx2(auVar17 ^ auVar16,auVar5);
      auVar17 = vpackssdw_avx2(auVar3,auVar13);
      auVar1 = auVar17._16_16_ ^ auVar15;
      auVar1 = vpackssdw_avx(auVar1,auVar1);
      if ((auVar1[8] & 1) != 0) {
        puVar7[-0x3c] = 0x1ffff;
      }
      auVar17 = vpackssdw_avx2(auVar3,auVar13);
      auVar1 = auVar17._16_16_ ^ auVar15;
      auVar1 = vpackssdw_avx(auVar1,auVar1);
      if ((auVar1[10] & 1) != 0) {
        puVar7[-0x30] = 0x1ffff;
      }
      auVar17 = vpor_avx2(auVar18,auVar13);
      auVar1 = vpcmpgtq_avx(auVar17._0_16_ ^ auVar14,auVar2);
      auVar1 = vpackssdw_avx(auVar1,auVar1);
      auVar1 = vpackssdw_avx(auVar1 ^ auVar15,auVar1 ^ auVar15);
      if ((auVar1[4] & 1) != 0) {
        puVar7[-0x24] = 0x1ffff;
      }
      auVar1 = vpcmpgtq_avx(auVar17._0_16_ ^ auVar14,auVar2);
      auVar1 = vpackssdw_avx(auVar1,auVar1);
      auVar1 = vpackssdw_avx(auVar1 ^ auVar15,auVar1 ^ auVar15);
      if ((auVar1[6] & 1) != 0) {
        puVar7[-0x18] = 0x1ffff;
      }
      auVar18 = vpcmpgtq_avx2(auVar17 ^ auVar16,auVar5);
      auVar17 = vpackssdw_avx2(auVar13,auVar18);
      auVar1 = auVar17._16_16_ ^ auVar15;
      auVar1 = vpackssdw_avx(auVar1,auVar1);
      if ((auVar1[0xc] & 1) != 0) {
        puVar7[-0xc] = 0x1ffff;
      }
      auVar17 = vpshufhw_avx2(auVar18,0x84);
      auVar1 = auVar17._16_16_ ^ auVar15;
      auVar1 = vpackssdw_avx(auVar1,auVar1);
      if ((auVar1[0xe] & 1) != 0) {
        *puVar7 = 0x1ffff;
      }
      uVar12 = uVar12 + 8;
      puVar7 = puVar7 + 0x60;
    } while ((uVar8 / 0x30 + 8 & 0xfffffffffffffff8) != uVar12);
    lVar10 = *(longlong *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (lVar10 != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

