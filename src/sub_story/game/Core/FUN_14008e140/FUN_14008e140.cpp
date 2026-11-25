// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008e140  size: 655 bytes
// Name:    FUN_14008e140
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145070890, FUN_140b6aec0, FUN_144de5b10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14008e140(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [24];
  undefined1 auVar6 [24];
  undefined1 auVar7 [24];
  longlong lVar8;
  char cVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  
  lVar8 = _DAT_14a943760;
  lVar11 = func_0x000144e3bfa0(_DAT_14a94d9f0);
  auVar15 = _DAT_149df72f0;
  auVar5 = *(undefined1 (*) [24])(lVar11 + 0x560);
  uVar1 = *(undefined8 *)(lVar11 + 0x578);
  auVar12 = *(undefined1 (*) [16])(lVar11 + 0xf0);
  auVar6 = *(undefined1 (*) [24])(lVar11 + 0x580);
  uVar3 = *(undefined8 *)(lVar11 + 0x598);
  auVar7 = *(undefined1 (*) [24])(lVar11 + 0x5a0);
  uVar4 = *(undefined8 *)(lVar11 + 0x5b8);
  auStack_88._0_8_ = auVar5._0_8_;
  auStack_88._8_8_ = auVar5._8_8_;
  auStack_88._16_8_ = auVar5._16_8_;
  auStack_68._0_8_ = auVar6._0_8_;
  auStack_68._8_8_ = auVar6._8_8_;
  auStack_68._16_8_ = auVar6._16_8_;
  auStack_48._0_8_ = auVar7._0_8_;
  auStack_48._8_8_ = auVar7._8_8_;
  auStack_48._16_8_ = auVar7._16_8_;
  puVar2 = *(undefined8 **)(lVar8 + 0x29508 + (ulonglong)*_DAT_14a943ab0 * 0x10);
  puVar2[8] = auStack_48._0_8_;
  puVar2[9] = auStack_48._8_8_;
  puVar2[10] = auStack_48._16_8_;
  puVar2[0xb] = uVar4;
  puVar2[4] = auStack_68._0_8_;
  puVar2[5] = auStack_68._8_8_;
  puVar2[6] = auStack_68._16_8_;
  puVar2[7] = uVar3;
  *puVar2 = auStack_88._0_8_;
  puVar2[1] = auStack_88._8_8_;
  puVar2[2] = auStack_88._16_8_;
  puVar2[3] = uVar1;
  uVar1 = vmovlps_avx(auVar12);
  puVar2[0xc] = uVar1;
  uVar13 = vextractps_avx(auVar12,2);
  *(undefined4 *)(puVar2 + 0xd) = uVar13;
  *(undefined4 *)((longlong)puVar2 + 0x6c) = 3;
  uVar1 = vmovlps_avx(auVar15);
  puVar2[0xe] = uVar1;
  uVar13 = vextractps_avx(auVar15,2);
  *(undefined4 *)(puVar2 + 0xf) = uVar13;
  lVar11 = FUN_144de5b10();
  auVar15 = _DAT_149df7300;
  auVar5 = *(undefined1 (*) [24])(lVar11 + 0x560);
  uVar1 = *(undefined8 *)(lVar11 + 0x578);
  auVar12 = *(undefined1 (*) [16])(lVar11 + 0xf0);
  auVar6 = *(undefined1 (*) [24])(lVar11 + 0x580);
  uVar3 = *(undefined8 *)(lVar11 + 0x598);
  auVar7 = *(undefined1 (*) [24])(lVar11 + 0x5a0);
  uVar4 = *(undefined8 *)(lVar11 + 0x5b8);
  auStack_88._0_8_ = auVar5._0_8_;
  auStack_88._8_8_ = auVar5._8_8_;
  auStack_88._16_8_ = auVar5._16_8_;
  auStack_68._0_8_ = auVar6._0_8_;
  auStack_68._8_8_ = auVar6._8_8_;
  auStack_68._16_8_ = auVar6._16_8_;
  auStack_48._0_8_ = auVar7._0_8_;
  auStack_48._8_8_ = auVar7._8_8_;
  auStack_48._16_8_ = auVar7._16_8_;
  lVar11 = *(longlong *)(lVar8 + 0x29508 + (ulonglong)*_DAT_14a943ab0 * 0x10);
  *(undefined8 *)(lVar11 + 0xc0) = auStack_48._0_8_;
  *(undefined8 *)(lVar11 + 200) = auStack_48._8_8_;
  *(undefined8 *)(lVar11 + 0xd0) = auStack_48._16_8_;
  *(undefined8 *)(lVar11 + 0xd8) = uVar4;
  *(undefined8 *)(lVar11 + 0xa0) = auStack_68._0_8_;
  *(undefined8 *)(lVar11 + 0xa8) = auStack_68._8_8_;
  *(undefined8 *)(lVar11 + 0xb0) = auStack_68._16_8_;
  *(undefined8 *)(lVar11 + 0xb8) = uVar3;
  *(undefined8 *)(lVar11 + 0x80) = auStack_88._0_8_;
  *(undefined8 *)(lVar11 + 0x88) = auStack_88._8_8_;
  *(undefined8 *)(lVar11 + 0x90) = auStack_88._16_8_;
  *(undefined8 *)(lVar11 + 0x98) = uVar1;
  uVar1 = vmovlps_avx(auVar12);
  *(undefined8 *)(lVar11 + 0xe0) = uVar1;
  uVar13 = vextractps_avx(auVar12,2);
  *(undefined4 *)(lVar11 + 0xe8) = uVar13;
  *(undefined4 *)(lVar11 + 0xec) = 1;
  uVar1 = vmovlps_avx(auVar15);
  *(undefined8 *)(lVar11 + 0xf0) = uVar1;
  uVar13 = vextractps_avx(auVar15,2);
  *(undefined4 *)(lVar11 + 0xf8) = uVar13;
  cVar9 = FUN_145070890();
  if (cVar9 != '\0') {
    lVar11 = FUN_140b6aec0();
    if (lVar11 != 0) {
      lVar11 = FUN_140b6aec0();
      auStack_48 = *(undefined1 (*) [32])(lVar11 + 0x5a0);
      auVar12 = *(undefined1 (*) [16])(lVar11 + 0xf0);
      uVar13 = *(undefined4 *)(lVar11 + 0xf8);
      auVar15._8_4_ = _DAT_149df7318;
      auVar15._0_8_ = _DAT_149df7310;
      auVar15._12_4_ = uRam0000000149df731c;
      auStack_68 = *(undefined1 (*) [32])(lVar11 + 0x580);
      auStack_88 = *(undefined1 (*) [32])(lVar11 + 0x560);
      uVar10 = 3;
      uVar14 = _DAT_149df7318;
      goto LAB_14008e2e5;
    }
  }
  auVar12._0_12_ = ZEXT812(0);
  auVar12._12_4_ = 0;
  uVar10 = 0;
  uVar13 = 0;
  auVar15._0_12_ = ZEXT812(0);
  auVar15._12_4_ = 0;
  auStack_68 = ZEXT1632(auVar12);
  auStack_88 = ZEXT1632(auVar12);
  auVar12 = ZEXT416(0) << 0x20;
  uVar14 = 0;
  auStack_48 = auStack_68;
LAB_14008e2e5:
  lVar11 = *(longlong *)(lVar8 + 0x29508 + (ulonglong)*_DAT_14a943ab0 * 0x10);
  *(undefined8 *)(lVar11 + 0x140) = auStack_48._0_8_;
  *(undefined8 *)(lVar11 + 0x148) = auStack_48._8_8_;
  *(undefined8 *)(lVar11 + 0x150) = auStack_48._16_8_;
  *(undefined8 *)(lVar11 + 0x158) = auStack_48._24_8_;
  *(undefined8 *)(lVar11 + 0x120) = auStack_68._0_8_;
  *(undefined8 *)(lVar11 + 0x128) = auStack_68._8_8_;
  *(undefined8 *)(lVar11 + 0x130) = auStack_68._16_8_;
  *(undefined8 *)(lVar11 + 0x138) = auStack_68._24_8_;
  *(undefined8 *)(lVar11 + 0x100) = auStack_88._0_8_;
  *(undefined8 *)(lVar11 + 0x108) = auStack_88._8_8_;
  *(undefined8 *)(lVar11 + 0x110) = auStack_88._16_8_;
  *(undefined8 *)(lVar11 + 0x118) = auStack_88._24_8_;
  uVar1 = vmovlps_avx(auVar12);
  *(undefined8 *)(lVar11 + 0x160) = uVar1;
  *(undefined4 *)(lVar11 + 0x168) = uVar13;
  *(undefined4 *)(lVar11 + 0x16c) = uVar10;
  uVar1 = vmovlps_avx(auVar15);
  *(undefined8 *)(lVar11 + 0x170) = uVar1;
  *(undefined4 *)(lVar11 + 0x178) = uVar14;
  *(undefined4 *)(lVar11 + 0x17c) = 0;
  return;
}

