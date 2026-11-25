// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140160370  size: 710 bytes
// Name:    FUN_140160370
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140f0b7b0, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140160370(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [16];
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auVar17 [32];
  undefined1 auVar18 [16];
  undefined1 in_ZMM4 [64];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  longlong lStack_20;
  
  FUN_140004b40(0x1499a80c8);
  lVar10 = *(longlong *)(param_1 + 0x18);
  if ((ulonglong)*(uint *)(param_1 + 0x14) != 0) {
    auVar18._8_8_ = _DAT_145f437c0;
    auVar18._0_8_ = _DAT_145f437c0;
    auVar19._8_8_ = _DAT_145f437c0;
    auVar19._0_8_ = _DAT_145f437c0;
    auVar19._16_8_ = _DAT_145f437c0;
    auVar19._24_8_ = _DAT_145f437c0;
    auVar5 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
    puVar13 = (undefined4 *)(lVar10 + 0x160);
    auVar1 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
    uVar14 = (ulonglong)*(uint *)(param_1 + 0x14) * 0x30 - 0x30;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar14;
    uVar11 = SUB168(auVar7 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
    uVar15 = 0;
    auVar17._8_8_ = uVar11;
    auVar17._0_8_ = uVar11;
    auVar17._16_8_ = uVar11;
    auVar17._24_8_ = uVar11;
    auVar20 = vpsrlq_avx2(auVar17,5);
    auVar17 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
    auVar7 = vpor_avx(auVar20._0_16_,auVar18);
    auVar6 = vpor_avx2(auVar20,auVar19);
    auVar3 = vpor_avx(auVar20._0_16_,auVar18);
    do {
      auVar21._8_8_ = uVar15;
      auVar21._0_8_ = uVar15;
      auVar21._16_8_ = uVar15;
      auVar21._24_8_ = uVar15;
      auVar20 = vpor_avx2(auVar21,auVar5);
      auVar2 = vpcmpgtq_avx(auVar20._0_16_ ^ auVar18,auVar7);
      auVar2 = vpackssdw_avx(auVar2,auVar2);
      auVar2 = vpackssdw_avx(auVar2 ^ auVar1,auVar2 ^ auVar1);
      if ((auVar2._0_4_ & 1) != 0) {
        puVar13[-0x54] = 0x1ffff;
      }
      auVar2 = vpcmpgtq_avx(auVar20._0_16_ ^ auVar18,auVar7);
      auVar2 = vpackssdw_avx(auVar2,auVar2);
      auVar2 = vpackssdw_avx(auVar2 ^ auVar1,auVar2 ^ auVar1);
      if ((auVar2[2] & 1) != 0) {
        puVar13[-0x48] = 0x1ffff;
      }
      auVar4 = vpcmpgtq_avx2(auVar20 ^ auVar19,auVar6);
      auVar20 = vpackssdw_avx2(auVar4,auVar17);
      auVar2 = auVar20._16_16_ ^ auVar1;
      auVar2 = vpackssdw_avx(auVar2,auVar2);
      if ((auVar2[8] & 1) != 0) {
        puVar13[-0x3c] = 0x1ffff;
      }
      auVar20 = vpackssdw_avx2(auVar4,auVar17);
      auVar2 = auVar20._16_16_ ^ auVar1;
      auVar2 = vpackssdw_avx(auVar2,auVar2);
      if ((auVar2[10] & 1) != 0) {
        puVar13[-0x30] = 0x1ffff;
      }
      auVar20 = vpor_avx2(auVar21,auVar17);
      auVar2 = vpcmpgtq_avx(auVar20._0_16_ ^ auVar18,auVar3);
      auVar2 = vpackssdw_avx(auVar2,auVar2);
      auVar2 = vpackssdw_avx(auVar2 ^ auVar1,auVar2 ^ auVar1);
      if ((auVar2[4] & 1) != 0) {
        puVar13[-0x24] = 0x1ffff;
      }
      auVar2 = vpcmpgtq_avx(auVar20._0_16_ ^ auVar18,auVar3);
      auVar2 = vpackssdw_avx(auVar2,auVar2);
      auVar2 = vpackssdw_avx(auVar2 ^ auVar1,auVar2 ^ auVar1);
      if ((auVar2[6] & 1) != 0) {
        puVar13[-0x18] = 0x1ffff;
      }
      auVar21 = vpcmpgtq_avx2(auVar20 ^ auVar19,auVar6);
      auVar20 = vpackssdw_avx2(auVar17,auVar21);
      auVar2 = auVar20._16_16_ ^ auVar1;
      auVar2 = vpackssdw_avx(auVar2,auVar2);
      if ((auVar2[0xc] & 1) != 0) {
        puVar13[-0xc] = 0x1ffff;
      }
      auVar20 = vpshufhw_avx2(auVar21,0x84);
      auVar2 = auVar20._16_16_ ^ auVar1;
      auVar2 = vpackssdw_avx(auVar2,auVar2);
      if ((auVar2[0xe] & 1) != 0) {
        *puVar13 = 0x1ffff;
      }
      uVar15 = uVar15 + 8;
      puVar13 = puVar13 + 0x60;
    } while ((uVar14 / 0x30 + 8 & 0xfffffffffffffff8) != uVar15);
    lVar10 = *(longlong *)(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (lVar10 != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_140f0b7b0(param_1 + 0x140);
  iRam00000001499a80d8 = iRam00000001499a80d8 + -1;
  uVar14 = uRam00000001499a80c8;
  if (iRam00000001499a80d8 == 0) {
    do {
      uVar12 = uVar14;
      LOCK();
      uVar14 = uVar12;
      uVar15 = (ulonglong)((int)uVar12 - 1) | 0xffffffff00000000;
      if (uVar12 != uRam00000001499a80c8) {
        uVar14 = uRam00000001499a80c8;
        uVar15 = uRam00000001499a80c8;
      }
      uRam00000001499a80c8 = uVar15;
      UNLOCK();
    } while (uVar12 != uVar14);
    if ((uVar12 & 0xfffffffe) != 0) {
      lStack_20 = lRam00000001499a80d0;
      iRam00000001499a80d8 = 0;
      do {
        while (lStack_20 < 0) {
          cVar9 = FUN_1400062d0(0x1499a80d0,1,&lStack_20);
          if (cVar9 != '\0') {
            return;
          }
        }
        LOCK();
        lVar10 = lStack_20;
        lVar8 = lStack_20 + 0x100000000;
        if (lStack_20 != lRam00000001499a80d0) {
          lVar10 = lRam00000001499a80d0;
          lVar8 = lRam00000001499a80d0;
        }
        lRam00000001499a80d0 = lVar8;
        UNLOCK();
        bVar16 = lStack_20 != lVar10;
        lStack_20 = lVar10;
      } while (bVar16);
      return;
    }
  }
  return;
}

