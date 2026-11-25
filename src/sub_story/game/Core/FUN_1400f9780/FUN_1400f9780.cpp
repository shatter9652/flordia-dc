// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f9780  size: 1079 bytes
// Name:    FUN_1400f9780
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450f7740, FUN_1400f9bc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f9780(uint *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  char cVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  longlong unaff_GS_OFFSET;
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  uint uStack_cc;
  undefined4 uStack_9c;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  longlong lStack_60;
  
  FUN_1400f9bc0(auStack_78);
  if (lStack_60 == 0) {
    *param_1 = 0;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) != 0) {
      return;
    }
    uVar18 = 0;
  }
  else {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    uStack_cc = 0;
    if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) != 0) {
      uStack_cc = *param_1;
    }
    bVar3 = FUN_1450f7740(auStack_78,0);
    uVar17 = FUN_1450f7740(auStack_78,1);
    auStack_98._0_4_ = uVar17;
    uVar18 = FUN_1450f7740(auStack_78,2);
    uVar19 = FUN_1450f7740(auStack_78,3);
    uVar20 = FUN_1450f7740(auStack_78,4);
    uVar21 = FUN_1450f7740(auStack_78,5);
    uVar22 = FUN_1450f7740(auStack_78,6);
    uVar23 = FUN_1450f7740(auStack_78,7);
    uVar17 = FUN_1450f7740(auStack_78,8);
    uVar24 = FUN_1450f7740(auStack_78,9);
    uVar25 = FUN_1450f7740(auStack_78,10);
    uVar26 = FUN_1450f7740(auStack_78,0xb);
    uVar27 = FUN_1450f7740(auStack_78,0xc);
    uVar28 = FUN_1450f7740(auStack_78,0xd);
    uVar29 = FUN_1450f7740(auStack_78,0xe);
    uVar30 = FUN_1450f7740(auStack_78,0xf);
    uVar31 = FUN_1450f7740(auStack_78,0x10);
    auVar1 = vpinsrb_avx(ZEXT416((uint)auStack_98._0_4_),uVar18 & 0xff,2);
    auVar1 = vpinsrb_avx(auVar1,uVar19 & 0xff,4);
    auVar2 = vpinsrb_avx(ZEXT416(uVar24),uVar25,2);
    auVar2 = vpinsrb_avx(auVar2,uVar26,4);
    auVar2 = vpinsrb_avx(auVar2,uVar27,6);
    auVar2 = vpinsrb_avx(auVar2,uVar28,8);
    auVar1 = vpinsrb_avx(auVar1,uVar20 & 0xff,6);
    auVar2 = vpinsrb_avx(auVar2,uVar29,10);
    auVar2 = vpinsrb_avx(auVar2,uVar30,0xc);
    auVar2 = vpinsrb_avx(auVar2,uVar31,0xe);
    auVar33 = vpmovzxwd_avx2(auVar2);
    auVar1 = vpinsrb_avx(auVar1,uVar21 & 0xff,8);
    auVar33 = vpslld_avx2(auVar33,0x1f);
    auVar1 = vpinsrb_avx(auVar1,uVar22 & 0xff,10);
    auVar33 = vpsrad_avx2(auVar33,0x1f);
    auVar33 = vpand_avx2(auVar33,_DAT_14615cfc0);
    auVar1 = vpinsrb_avx(auVar1,uVar23 & 0xff,0xc);
    auVar1 = vpinsrb_avx(auVar1,uVar17,0xe);
    auVar32 = vpmovzxwd_avx2(auVar1);
    auVar32 = vpslld_avx2(auVar32,0x1f);
    auVar32 = vpsrad_avx2(auVar32,0x1f);
    auVar32 = vpand_avx2(auVar32,_DAT_14615cfa0);
    auStack_98 = vpor_avx2(auVar32,auVar33);
    bVar4 = FUN_1450f7740(auStack_78,0x11);
    bVar5 = FUN_1450f7740(auStack_78,0x12);
    bVar6 = FUN_1450f7740(auStack_78,0x13);
    bVar7 = FUN_1450f7740(auStack_78,0x14);
    bVar8 = FUN_1450f7740(auStack_78,0x15);
    bVar9 = FUN_1450f7740(auStack_78,0x16);
    bVar10 = FUN_1450f7740(auStack_78,0x17);
    bVar11 = FUN_1450f7740(auStack_78,0x18);
    bVar12 = FUN_1450f7740(auStack_78,0x19);
    bVar13 = FUN_1450f7740(auStack_78,0x1a);
    bVar14 = FUN_1450f7740(auStack_78,0x1b);
    bVar15 = FUN_1450f7740(auStack_78,0x1c);
    auVar1 = vpor_avx(auStack_98._0_16_,auStack_98._16_16_);
    auVar2 = vpshufd_avx(auVar1,0xee);
    auVar1 = vpor_avx(auVar1,auVar2);
    auVar2 = vpshufd_avx(auVar1,0x55);
    auVar1 = vpor_avx(auVar1,auVar2);
    uVar18 = auVar1._0_4_ |
             (uint)bVar15 * 0x10000000 + (uint)bVar3 | uStack_cc |
             (uint)bVar14 << 0x1b | (uint)bVar13 << 0x1a |
             (uint)bVar12 << 0x19 | (uint)bVar11 << 0x18 |
             (uint)bVar10 << 0x17 | (uint)bVar9 << 0x16 | (uint)bVar8 << 0x15 | (uint)bVar7 << 0x14
             | (uint)bVar6 << 0x13 | (uint)bVar5 << 0x12 | (uint)bVar4 << 0x11;
    *param_1 = uVar18;
    func_0x000145246cb0(&uStack_9c,0);
    cVar16 = func_0x000144ec11b0(uVar18,uStack_9c);
    if (cVar16 == '\0') {
      uVar18 = uVar18 | 0x100;
      *param_1 = uVar18;
    }
    func_0x000145246cb0(&uStack_9c,1);
    cVar16 = func_0x000144ec11b0(uVar18,uStack_9c);
    if (cVar16 != '\0') {
      return;
    }
    uVar18 = uVar18 | 0x20000;
  }
  *param_1 = uVar18;
  return;
}

