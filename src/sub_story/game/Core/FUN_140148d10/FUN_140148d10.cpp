// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140148d10  size: 6131 bytes
// Name:    FUN_140148d10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141c86590, FUN_1422b3370, FUN_1412ec180, FUN_141d07dd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140148d10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  ushort uVar11;
  longlong lStack_2d0;
  longlong lStack_2c8;
  longlong lStack_2c0;
  longlong lStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  longlong *plStack_2a0;
  code *pcStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  longlong *plStack_280;
  code *pcStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  longlong *plStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  longlong *plStack_240;
  code *pcStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  longlong *plStack_220;
  code *pcStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  longlong *plStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined *puStack_1e8;
  longlong *plStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  longlong *plStack_1c0;
  code *pcStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  longlong *plStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  longlong *plStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  longlong *plStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  longlong *plStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  longlong *plStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  longlong *plStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  longlong *plStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  longlong *plStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  longlong *plStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  longlong *plStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  longlong *plStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  plStack_60 = &lStack_2d0;
  pcStack_58 = FUN_1422b30c0;
  puStack_50 = &UNK_145955790;
  puStack_48 = &SUB_140004380;
  lVar1 = FUN_141c86590(&plStack_60,0x89c1024b,0);
  lVar2 = *(longlong *)(lVar1 + 0xe8);
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0x60) != (code *)0x0) {
      (**(code **)(lVar2 + 0x60))(lVar2 + 0xfU & 0xfffffffffffffff0);
    }
    func_0x000144d9c130(lVar2,0x68);
  }
  lVar2 = func_0x000144f97130(0x68);
  if (lVar2 != 0) {
    *(undefined **)(lVar2 + 0x50) = &UNK_14042a1d0;
    *(undefined **)(lVar2 + 0x58) = &SUB_140004380;
    *(undefined **)(lVar2 + 0x60) = &SUB_140004380;
  }
  *(longlong *)(lVar1 + 0xe8) = lVar2;
  if (*(code **)(param_1 + 0x890) != (code *)0x0) {
    (**(code **)(param_1 + 0x890))(param_1 + 0x85fU & 0xfffffffffffffff0);
  }
  *(undefined **)(param_1 + 0x880) = &UNK_1406c6340;
  *(undefined **)(param_1 + 0x888) = &UNK_1422b2820;
  *(undefined **)(param_1 + 0x890) = &SUB_140004380;
  if (*(code **)(param_1 + 0x8d8) != (code *)0x0) {
    (**(code **)(param_1 + 0x8d8))(param_1 + 0x8a7U & 0xfffffffffffffff0);
  }
  *(undefined **)(param_1 + 0x8c8) = &UNK_1410c0fc0;
  *(undefined **)(param_1 + 0x8d0) = &UNK_1422b2820;
  *(undefined **)(param_1 + 0x8d8) = &SUB_140004380;
  pcStack_78 = FUN_1401fef90;
  puStack_70 = &UNK_145955790;
  puStack_68 = &SUB_140004380;
  plStack_80 = &lStack_2d0;
  uStack_2b0 = FUN_141c86590(&plStack_80,0x81e70e96,0);
  pcStack_98 = FUN_140b25cb0;
  puStack_90 = &UNK_145955790;
  puStack_88 = &SUB_140004380;
  plStack_a0 = &lStack_2d0;
  uVar3 = FUN_141c86590(&plStack_a0,0xe432709c,0);
  pcStack_b8 = FUN_1422b30e0;
  puStack_b0 = &UNK_145955790;
  puStack_a8 = &SUB_140004380;
  plStack_c0 = &lStack_2d0;
  lStack_2c8 = FUN_141c86590(&plStack_c0,0x4c22f4e9,0);
  lVar2 = *(longlong *)
           (*(longlong *)(param_1 + 0x40) + (ulonglong)(*(int *)(param_1 + 0x3c) - 1) * 8);
  lVar4 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                              *(undefined4 *)(lVar2 + 0x88));
  uVar11 = *(ushort *)(lVar4 + 0xf08);
  lVar1 = *(longlong *)(lVar4 + 0xf00);
  if (uVar11 == *(ushort *)(lVar4 + 0xf0a)) {
    lVar5 = func_0x000144d9c140(8,(uint)uVar11 * 8 + 0x20);
    if (uVar11 != 0) {
      func_0x000145f40560(lVar5,lVar1,(ulonglong)uVar11 << 3);
    }
    if (lVar1 != 0) {
      func_0x000144d9c130(lVar1);
    }
    *(ushort *)(lVar4 + 0xf0a) = uVar11 + 4;
    *(longlong *)(lVar4 + 0xf00) = lVar5;
    uVar11 = *(ushort *)(lVar4 + 0xf08);
    lVar1 = lVar5;
  }
  *(ushort *)(lVar4 + 0xf08) = uVar11 + 1;
  *(undefined8 *)(lVar1 + (ulonglong)uVar11 * 8) = uVar3;
  *(undefined1 *)(lVar2 + 0xf6) = 1;
  lVar2 = *(longlong *)(lStack_2c8 + 0xe8);
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0x60) != (code *)0x0) {
      (**(code **)(lVar2 + 0x60))(lVar2 + 0xfU & 0xfffffffffffffff0);
    }
    func_0x000144d9c130(lVar2,0x68);
  }
  lVar2 = func_0x000144f97130(0x68);
  if (lVar2 != 0) {
    *(undefined **)(lVar2 + 0x50) = &UNK_14065fac0;
    *(undefined **)(lVar2 + 0x58) = &SUB_140004380;
    *(undefined **)(lVar2 + 0x60) = &SUB_140004380;
  }
  plStack_e0 = &lStack_2d0;
  *(longlong *)(lStack_2c8 + 0xe8) = lVar2;
  pcStack_d8 = FUN_1422b3100;
  puStack_d0 = &UNK_1456bdf20;
  puStack_c8 = &SUB_140004380;
  lStack_2d0 = param_1;
  uVar6 = FUN_141c86590(&plStack_e0,0xba9365f9,0);
  lVar2 = *(longlong *)
           (*(longlong *)(param_1 + 0x40) + (ulonglong)(*(int *)(param_1 + 0x3c) - 1) * 8);
  lVar4 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                              *(undefined4 *)(lVar2 + 0x88));
  uVar11 = *(ushort *)(lVar4 + 0xf08);
  lVar1 = *(longlong *)(lVar4 + 0xf00);
  if (uVar11 == *(ushort *)(lVar4 + 0xf0a)) {
    lVar5 = func_0x000144d9c140(8,(uint)uVar11 * 8 + 0x20);
    if (uVar11 != 0) {
      func_0x000145f40560(lVar5,lVar1,(ulonglong)uVar11 << 3);
    }
    if (lVar1 != 0) {
      func_0x000144d9c130(lVar1);
    }
    *(ushort *)(lVar4 + 0xf0a) = uVar11 + 4;
    *(longlong *)(lVar4 + 0xf00) = lVar5;
    uVar11 = *(ushort *)(lVar4 + 0xf08);
    lVar1 = lVar5;
  }
  *(ushort *)(lVar4 + 0xf08) = uVar11 + 1;
  *(undefined8 *)(lVar1 + (ulonglong)uVar11 * 8) = uVar3;
  plStack_100 = &lStack_2d0;
  *(undefined1 *)(lVar2 + 0xf6) = 1;
  *(longlong *)(param_1 + 0x8f8) = param_1;
  *(undefined8 *)(param_1 + 0x900) = uVar6;
  pcStack_f8 = FUN_140609df0;
  puStack_f0 = &UNK_145955790;
  puStack_e8 = &SUB_140004380;
  lStack_2c0 = FUN_141c86590(&plStack_100,0x6139ff51,0);
  lVar2 = *(longlong *)
           (*(longlong *)(param_1 + 0x40) + (ulonglong)(*(int *)(param_1 + 0x3c) - 1) * 8);
  lVar4 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                              *(undefined4 *)(lVar2 + 0x88));
  uVar11 = *(ushort *)(lVar4 + 0xf08);
  lVar1 = *(longlong *)(lVar4 + 0xf00);
  if (uVar11 == *(ushort *)(lVar4 + 0xf0a)) {
    lVar5 = func_0x000144d9c140(8,(uint)uVar11 * 8 + 0x20);
    if (uVar11 != 0) {
      func_0x000145f40560(lVar5,lVar1,(ulonglong)uVar11 << 3);
    }
    if (lVar1 != 0) {
      func_0x000144d9c130(lVar1);
    }
    *(ushort *)(lVar4 + 0xf0a) = uVar11 + 4;
    *(longlong *)(lVar4 + 0xf00) = lVar5;
    uVar11 = *(ushort *)(lVar4 + 0xf08);
    lVar1 = lVar5;
  }
  lVar5 = lStack_2c0;
  *(ushort *)(lVar4 + 0xf08) = uVar11 + 1;
  *(undefined8 *)(lVar1 + (ulonglong)uVar11 * 8) = uVar6;
  *(undefined1 *)(lVar2 + 0xf6) = 1;
  lVar2 = *(longlong *)(lStack_2c0 + 0xe8);
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0x60) != (code *)0x0) {
      (**(code **)(lVar2 + 0x60))(lVar2 + 0xfU & 0xfffffffffffffff0);
    }
    func_0x000144d9c130(lVar2,0x68);
  }
  lVar2 = func_0x000144f97130(0x68);
  if (lVar2 != 0) {
    *(undefined **)(lVar2 + 0x50) = &UNK_140440660;
    *(undefined **)(lVar2 + 0x58) = &SUB_140004380;
    *(undefined **)(lVar2 + 0x60) = &SUB_140004380;
  }
  plStack_120 = &lStack_2d0;
  *(longlong *)(lVar5 + 0xe8) = lVar2;
  pcStack_118 = FUN_1422b3210;
  puStack_110 = &UNK_145955790;
  puStack_108 = &SUB_140004380;
  lVar1 = FUN_141c86590(&plStack_120,0xbb452d77,0);
  FUN_1412ec180(0x11,0,0);
  lVar2 = *(longlong *)(lVar1 + 0xe8);
  lStack_2b8 = lVar1;
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0x60) != (code *)0x0) {
      (**(code **)(lVar2 + 0x60))(lVar2 + 0xfU & 0xfffffffffffffff0);
    }
    func_0x000144d9c130(lVar2,0x68);
  }
  lVar2 = func_0x000144f97130(0x68);
  if (lVar2 != 0) {
    *(code **)(lVar2 + 0x50) = FUN_1408654a0;
    *(undefined **)(lVar2 + 0x58) = &SUB_140004380;
    *(undefined **)(lVar2 + 0x60) = &SUB_140004380;
  }
  plStack_140 = &lStack_2d0;
  *(longlong *)(lStack_2b8 + 0xe8) = lVar2;
  pcStack_138 = FUN_140386b20;
  puStack_130 = &UNK_145955790;
  puStack_128 = &SUB_140004380;
  uStack_2a8 = FUN_141c86590(&plStack_140,0xade1233c,0);
  uVar9 = (ulonglong)(*(int *)(param_1 + 0x3c) - 1);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + uVar9 * 8);
  lVar4 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                              *(undefined4 *)(lVar2 + 0x88));
  uVar11 = *(ushort *)(lVar4 + 0xf08);
  lVar1 = *(longlong *)(lVar4 + 0xf00);
  if (uVar11 == *(ushort *)(lVar4 + 0xf0a)) {
    lVar7 = func_0x000144d9c140(8,(uint)uVar11 * 8 + 0x20);
    if (uVar11 != 0) {
      func_0x000145f40560(lVar7,lVar1,(ulonglong)uVar11 << 3);
    }
    if (lVar1 != 0) {
      func_0x000144d9c130(lVar1);
    }
    *(ushort *)(lVar4 + 0xf0a) = uVar11 + 4;
    *(longlong *)(lVar4 + 0xf00) = lVar7;
    uVar11 = *(ushort *)(lVar4 + 0xf08);
    uVar9 = (ulonglong)(*(int *)(param_1 + 0x3c) - 1);
    lVar1 = lVar7;
  }
  *(ushort *)(lVar4 + 0xf08) = uVar11 + 1;
  *(longlong *)(lVar1 + (ulonglong)uVar11 * 8) = lStack_2b8;
  *(undefined1 *)(lVar2 + 0xf6) = 1;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + uVar9 * 8);
  lVar4 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                              *(undefined4 *)(lVar2 + 0x88));
  uVar11 = *(ushort *)(lVar4 + 0xf08);
  lVar1 = *(longlong *)(lVar4 + 0xf00);
  if (uVar11 == *(ushort *)(lVar4 + 0xf0a)) {
    lVar7 = func_0x000144d9c140(8,(uint)uVar11 * 8 + 0x20);
    if (uVar11 != 0) {
      func_0x000145f40560(lVar7,lVar1,(ulonglong)uVar11 << 3);
    }
    if (lVar1 != 0) {
      func_0x000144d9c130(lVar1);
    }
    *(ushort *)(lVar4 + 0xf0a) = uVar11 + 4;
    *(longlong *)(lVar4 + 0xf00) = lVar7;
    uVar11 = *(ushort *)(lVar4 + 0xf08);
    lVar1 = lVar7;
  }
  *(ushort *)(lVar4 + 0xf08) = uVar11 + 1;
  *(longlong *)(lVar1 + (ulonglong)uVar11 * 8) = lVar5;
  *(undefined1 *)(lVar2 + 0xf6) = 1;
  plStack_160 = &lStack_2d0;
  pcStack_158 = FUN_145765630;
  puStack_150 = &UNK_1456bdf20;
  puStack_148 = &SUB_140004380;
  lStack_2d0 = param_1;
  lVar1 = FUN_141c86590(&plStack_160,0x12ddcce8,0);
  lVar2 = *(longlong *)(lVar1 + 0xe8);
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0x60) != (code *)0x0) {
      (**(code **)(lVar2 + 0x60))(lVar2 + 0xfU & 0xfffffffffffffff0);
    }
    func_0x000144d9c130(lVar2,0x68);
  }
  lVar2 = func_0x000144f97130(0x68);
  if (lVar2 != 0) {
    plVar8 = (longlong *)(lVar2 + 0xfU & 0xfffffffffffffff0);
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = param_1;
    }
    *(undefined **)(lVar2 + 0x50) = &UNK_141f698d0;
    *(undefined **)(lVar2 + 0x58) = &UNK_1401167b0;
    *(undefined **)(lVar2 + 0x60) = &SUB_140004380;
  }
  *(longlong *)(lVar1 + 0xe8) = lVar2;
  *(undefined4 *)(param_1 + 0x910) = *(undefined4 *)(param_1 + 0x3c);
  uVar3 = FUN_141d07dd0(param_1,0xf65050b);
  uVar10 = *(uint *)(param_1 + 0x3c);
  uVar9 = (ulonglong)(uVar10 - 1);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + uVar9 * 8);
  lVar4 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                              *(undefined4 *)(lVar2 + 0x88));
  uVar11 = *(ushort *)(lVar4 + 0xf08);
  lVar1 = *(longlong *)(lVar4 + 0xf00);
  if (uVar11 == *(ushort *)(lVar4 + 0xf0a)) {
    lVar5 = func_0x000144d9c140(8,(uint)uVar11 * 8 + 0x20);
    if (uVar11 != 0) {
      func_0x000145f40560(lVar5,lVar1,(ulonglong)uVar11 << 3);
    }
    if (lVar1 != 0) {
      func_0x000144d9c130(lVar1);
    }
    *(ushort *)(lVar4 + 0xf0a) = uVar11 + 4;
    *(longlong *)(lVar4 + 0xf00) = lVar5;
    uVar11 = *(ushort *)(lVar4 + 0xf08);
    uVar10 = *(uint *)(param_1 + 0x3c);
    uVar9 = (ulonglong)(uVar10 - 1);
    lVar1 = lVar5;
  }
  *(ushort *)(lVar4 + 0xf08) = uVar11 + 1;
  *(undefined8 *)(lVar1 + (ulonglong)uVar11 * 8) = uStack_2b0;
  *(undefined1 *)(lVar2 + 0xf6) = 1;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + uVar9 * 8);
  lVar5 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                              *(undefined4 *)(lVar2 + 0x88));
  uVar11 = *(ushort *)(lVar5 + 0xf08);
  lVar1 = *(longlong *)(lVar5 + 0xf00);
  lVar4 = lStack_2c0;
  if (uVar11 == *(ushort *)(lVar5 + 0xf0a)) {
    lVar7 = func_0x000144d9c140(8,(uint)uVar11 * 8 + 0x20);
    lVar4 = lStack_2c0;
    if (uVar11 != 0) {
      func_0x000145f40560(lVar7,lVar1,(ulonglong)uVar11 << 3);
    }
    if (lVar1 != 0) {
      func_0x000144d9c130(lVar1);
    }
    *(ushort *)(lVar5 + 0xf0a) = uVar11 + 4;
    *(longlong *)(lVar5 + 0xf00) = lVar7;
    uVar11 = *(ushort *)(lVar5 + 0xf08);
    uVar10 = *(uint *)(param_1 + 0x3c);
    lVar1 = lVar7;
  }
  *(ushort *)(lVar5 + 0xf08) = uVar11 + 1;
  *(undefined8 *)(lVar1 + (ulonglong)uVar11 * 8) = uStack_2a8;
  *(undefined1 *)(lVar2 + 0xf6) = 1;
  FUN_1422b3370(param_1 + 0x598,uVar3);
  plStack_180 = &lStack_2d0;
  pcStack_178 = FUN_141290630;
  puStack_170 = &UNK_145955790;
  puStack_168 = &SUB_140004380;
  lStack_2c0 = CONCAT44(lStack_2c0._4_4_,*(undefined4 *)(param_1 + 0x3c));
  uStack_2b0 = FUN_141c86590(&plStack_180,0xe6b370ad,0);
  uVar9 = (ulonglong)(*(int *)(param_1 + 0x3c) - 1);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + uVar9 * 8);
  lVar5 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                              *(undefined4 *)(lVar2 + 0x88));
  uVar11 = *(ushort *)(lVar5 + 0xf08);
  lVar1 = *(longlong *)(lVar5 + 0xf00);
  if (uVar11 == *(ushort *)(lVar5 + 0xf0a)) {
    lVar7 = func_0x000144d9c140(8,(uint)uVar11 * 8 + 0x20);
    if (uVar11 != 0) {
      func_0x000145f40560(lVar7,lVar1,(ulonglong)uVar11 << 3);
    }
    if (lVar1 != 0) {
      func_0x000144d9c130(lVar1);
    }
    *(ushort *)(lVar5 + 0xf0a) = uVar11 + 4;
    *(longlong *)(lVar5 + 0xf00) = lVar7;
    uVar11 = *(ushort *)(lVar5 + 0xf08);
    uVar9 = (ulonglong)(*(int *)(param_1 + 0x3c) - 1);
    lVar1 = lVar7;
  }
  *(ushort *)(lVar5 + 0xf08) = uVar11 + 1;
  *(longlong *)(lVar1 + (ulonglong)uVar11 * 8) = lVar4;
  *(undefined1 *)(lVar2 + 0xf6) = 1;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + uVar9 * 8);
  lVar4 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                              *(undefined4 *)(lVar2 + 0x88));
  uVar11 = *(ushort *)(lVar4 + 0xf08);
  lVar1 = *(longlong *)(lVar4 + 0xf00);
  if (uVar11 == *(ushort *)(lVar4 + 0xf0a)) {
    lVar5 = func_0x000144d9c140(8,(uint)uVar11 * 8 + 0x20);
    if (uVar11 != 0) {
      func_0x000145f40560(lVar5,lVar1,(ulonglong)uVar11 << 3);
    }
    if (lVar1 != 0) {
      func_0x000144d9c130(lVar1);
    }
    *(ushort *)(lVar4 + 0xf0a) = uVar11 + 4;
    *(longlong *)(lVar4 + 0xf00) = lVar5;
    uVar11 = *(ushort *)(lVar4 + 0xf08);
    uVar9 = (ulonglong)(*(int *)(param_1 + 0x3c) - 1);
    lVar1 = lVar5;
  }
  *(ushort *)(lVar4 + 0xf08) = uVar11 + 1;
  *(longlong *)(lVar1 + (ulonglong)uVar11 * 8) = lStack_2b8;
  *(undefined1 *)(lVar2 + 0xf6) = 1;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + uVar9 * 8);
  lVar4 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                              *(undefined4 *)(lVar2 + 0x88));
  uVar11 = *(ushort *)(lVar4 + 0xf08);
  lVar1 = *(longlong *)(lVar4 + 0xf00);
  if (uVar11 == *(ushort *)(lVar4 + 0xf0a)) {
    lVar5 = func_0x000144d9c140(8,(uint)uVar11 * 8 + 0x20);
    if (uVar11 != 0) {
      func_0x000145f40560(lVar5,lVar1,(ulonglong)uVar11 << 3);
    }
    if (lVar1 != 0) {
      func_0x000144d9c130(lVar1);
    }
    *(ushort *)(lVar4 + 0xf0a) = uVar11 + 4;
    *(longlong *)(lVar4 + 0xf00) = lVar5;
    uVar11 = *(ushort *)(lVar4 + 0xf08);
    uVar9 = (ulonglong)(*(int *)(param_1 + 0x3c) - 1);
    lVar1 = lVar5;
  }
  *(ushort *)(lVar4 + 0xf08) = uVar11 + 1;
  *(undefined8 *)(lVar1 + (ulonglong)uVar11 * 8) = uStack_2a8;
  *(undefined1 *)(lVar2 + 0xf6) = 1;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + uVar9 * 8);
  lVar4 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                              *(undefined4 *)(lVar2 + 0x88));
  uVar11 = *(ushort *)(lVar4 + 0xf08);
  lVar1 = *(longlong *)(lVar4 + 0xf00);
  if (uVar11 == *(ushort *)(lVar4 + 0xf0a)) {
    lVar5 = func_0x000144d9c140(8,(uint)uVar11 * 8 + 0x20);
    if (uVar11 != 0) {
      func_0x000145f40560(lVar5,lVar1,(ulonglong)uVar11 << 3);
    }
    if (lVar1 != 0) {
      func_0x000144d9c130(lVar1);
    }
    *(ushort *)(lVar4 + 0xf0a) = uVar11 + 4;
    *(longlong *)(lVar4 + 0xf00) = lVar5;
    uVar11 = *(ushort *)(lVar4 + 0xf08);
    lVar1 = lVar5;
  }
  plStack_1a0 = &lStack_2d0;
  *(ushort *)(lVar4 + 0xf08) = uVar11 + 1;
  *(longlong *)(lVar1 + (ulonglong)uVar11 * 8) = lStack_2c8;
  *(undefined1 *)(lVar2 + 0xf6) = 1;
  pcStack_198 = FUN_140d2ed10;
  puStack_190 = &UNK_145955790;
  puStack_188 = &SUB_140004380;
  lStack_2c8 = FUN_141c86590(&plStack_1a0,0xa0014082,0);
  lVar2 = *(longlong *)
           (*(longlong *)(param_1 + 0x40) + (ulonglong)(*(int *)(param_1 + 0x3c) - 1) * 8);
  lVar4 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                              *(undefined4 *)(lVar2 + 0x88));
  uVar11 = *(ushort *)(lVar4 + 0xf08);
  lVar1 = *(longlong *)(lVar4 + 0xf00);
  if (uVar11 == *(ushort *)(lVar4 + 0xf0a)) {
    lVar5 = func_0x000144d9c140(8,(uint)uVar11 * 8 + 0x20);
    if (uVar11 != 0) {
      func_0x000145f40560(lVar5,lVar1,(ulonglong)uVar11 << 3);
    }
    if (lVar1 != 0) {
      func_0x000144d9c130(lVar1);
    }
    *(ushort *)(lVar4 + 0xf0a) = uVar11 + 4;
    *(longlong *)(lVar4 + 0xf00) = lVar5;
    uVar11 = *(ushort *)(lVar4 + 0xf08);
    lVar1 = lVar5;
  }
  plStack_1c0 = &lStack_2d0;
  *(ushort *)(lVar4 + 0xf08) = uVar11 + 1;
  *(undefined8 *)(lVar1 + (ulonglong)uVar11 * 8) = uStack_2b0;
  *(undefined1 *)(lVar2 + 0xf6) = 1;
  pcStack_1b8 = FUN_1409840e0;
  puStack_1b0 = &UNK_145955790;
  puStack_1a8 = &SUB_140004380;
  uVar3 = FUN_141c86590(&plStack_1c0,0x69ef5da,0);
  lVar2 = *(longlong *)
           (*(longlong *)(param_1 + 0x40) + (ulonglong)(*(int *)(param_1 + 0x3c) - 1) * 8);
  lVar4 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                              *(undefined4 *)(lVar2 + 0x88));
  uVar11 = *(ushort *)(lVar4 + 0xf08);
  lVar1 = *(longlong *)(lVar4 + 0xf00);
  if (uVar11 == *(ushort *)(lVar4 + 0xf0a)) {
    lVar5 = func_0x000144d9c140(8,(uint)uVar11 * 8 + 0x20);
    if (uVar11 != 0) {
      func_0x000145f40560(lVar5,lVar1,(ulonglong)uVar11 << 3);
    }
    if (lVar1 != 0) {
      func_0x000144d9c130(lVar1);
    }
    *(ushort *)(lVar4 + 0xf0a) = uVar11 + 4;
    *(longlong *)(lVar4 + 0xf00) = lVar5;
    uVar11 = *(ushort *)(lVar4 + 0xf08);
    lVar1 = lVar5;
  }
  plStack_1e0 = &lStack_2d0;
  *(ushort *)(lVar4 + 0xf08) = uVar11 + 1;
  *(longlong *)(lVar1 + (ulonglong)uVar11 * 8) = lStack_2c8;
  *(undefined1 *)(lVar2 + 0xf6) = 1;
  pcStack_1d8 = FUN_140bd1520;
  puStack_1d0 = &UNK_145955790;
  puStack_1c8 = &SUB_140004380;
  lStack_2b8 = FUN_141c86590(&plStack_1e0,0x63f26db,0);
  lVar2 = *(longlong *)
           (*(longlong *)(param_1 + 0x40) + (ulonglong)(*(int *)(param_1 + 0x3c) - 1) * 8);
  lVar4 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                              *(undefined4 *)(lVar2 + 0x88));
  uVar11 = *(ushort *)(lVar4 + 0xf08);
  lVar1 = *(longlong *)(lVar4 + 0xf00);
  if (uVar11 == *(ushort *)(lVar4 + 0xf0a)) {
    lVar5 = func_0x000144d9c140(8,(uint)uVar11 * 8 + 0x20);
    if (uVar11 != 0) {
      func_0x000145f40560(lVar5,lVar1,(ulonglong)uVar11 << 3);
    }
    if (lVar1 != 0) {
      func_0x000144d9c130(lVar1);
    }
    *(ushort *)(lVar4 + 0xf0a) = uVar11 + 4;
    *(longlong *)(lVar4 + 0xf00) = lVar5;
    uVar11 = *(ushort *)(lVar4 + 0xf08);
    lVar1 = lVar5;
  }
  plStack_200 = &lStack_2d0;
  *(ushort *)(lVar4 + 0xf08) = uVar11 + 1;
  *(undefined8 *)(lVar1 + (ulonglong)uVar11 * 8) = uVar3;
  *(undefined1 *)(lVar2 + 0xf6) = 1;
  pcStack_1f8 = FUN_14031f560;
  puStack_1f0 = &UNK_145955790;
  puStack_1e8 = &SUB_140004380;
  lStack_2c8 = FUN_141c86590(&plStack_200,0x2a907de0,0);
  uVar9 = (ulonglong)(*(int *)(param_1 + 0x3c) - 1);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + uVar9 * 8);
  lVar4 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                              *(undefined4 *)(lVar2 + 0x88));
  uVar11 = *(ushort *)(lVar4 + 0xf08);
  lVar1 = *(longlong *)(lVar4 + 0xf00);
  if (uVar11 == *(ushort *)(lVar4 + 0xf0a)) {
    lVar5 = func_0x000144d9c140(8,(uint)uVar11 * 8 + 0x20);
    if (uVar11 != 0) {
      func_0x000145f40560(lVar5,lVar1,(ulonglong)uVar11 << 3);
    }
    if (lVar1 != 0) {
      func_0x000144d9c130(lVar1);
    }
    *(ushort *)(lVar4 + 0xf0a) = uVar11 + 4;
    *(longlong *)(lVar4 + 0xf00) = lVar5;
    uVar11 = *(ushort *)(lVar4 + 0xf08);
    uVar9 = (ulonglong)(*(int *)(param_1 + 0x3c) - 1);
    lVar1 = lVar5;
  }
  plStack_220 = &lStack_2d0;
  *(ushort *)(lVar4 + 0xf08) = uVar11 + 1;
  *(longlong *)(lVar1 + (ulonglong)uVar11 * 8) = lStack_2b8;
  *(undefined1 *)(lVar2 + 0xf6) = 1;
  *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + uVar9 * 8) + 0xf4) = 0;
  pcStack_218 = FUN_1404bd630;
  puStack_210 = &UNK_145955790;
  puStack_208 = &SUB_140004380;
  uVar3 = FUN_141c86590(&plStack_220,0x12c8a67a,0);
  lVar2 = *(longlong *)
           (*(longlong *)(param_1 + 0x40) + (ulonglong)(*(int *)(param_1 + 0x3c) - 1) * 8);
  lVar4 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                              *(undefined4 *)(lVar2 + 0x88));
  uVar11 = *(ushort *)(lVar4 + 0xf08);
  lVar1 = *(longlong *)(lVar4 + 0xf00);
  if (uVar11 == *(ushort *)(lVar4 + 0xf0a)) {
    lVar5 = func_0x000144d9c140(8,(uint)uVar11 * 8 + 0x20);
    if (uVar11 != 0) {
      func_0x000145f40560(lVar5,lVar1,(ulonglong)uVar11 << 3);
    }
    if (lVar1 != 0) {
      func_0x000144d9c130(lVar1);
    }
    *(ushort *)(lVar4 + 0xf0a) = uVar11 + 4;
    *(longlong *)(lVar4 + 0xf00) = lVar5;
    uVar11 = *(ushort *)(lVar4 + 0xf08);
    lVar1 = lVar5;
  }
  plStack_240 = &lStack_2d0;
  *(ushort *)(lVar4 + 0xf08) = uVar11 + 1;
  *(longlong *)(lVar1 + (ulonglong)uVar11 * 8) = lStack_2c8;
  *(undefined1 *)(lVar2 + 0xf6) = 1;
  pcStack_238 = FUN_141f698e0;
  puStack_230 = &UNK_145955790;
  puStack_228 = &SUB_140004380;
  lStack_2c8 = FUN_141c86590(&plStack_240,0xeaddd69d,0);
  lVar2 = *(longlong *)
           (*(longlong *)(param_1 + 0x40) + (ulonglong)(*(int *)(param_1 + 0x3c) - 1) * 8);
  lVar4 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                              *(undefined4 *)(lVar2 + 0x88));
  uVar11 = *(ushort *)(lVar4 + 0xf08);
  lVar1 = *(longlong *)(lVar4 + 0xf00);
  if (uVar11 == *(ushort *)(lVar4 + 0xf0a)) {
    lVar5 = func_0x000144d9c140(8,(uint)uVar11 * 8 + 0x20);
    if (uVar11 != 0) {
      func_0x000145f40560(lVar5,lVar1,(ulonglong)uVar11 << 3);
    }
    if (lVar1 != 0) {
      func_0x000144d9c130(lVar1);
    }
    *(ushort *)(lVar4 + 0xf0a) = uVar11 + 4;
    *(longlong *)(lVar4 + 0xf00) = lVar5;
    uVar11 = *(ushort *)(lVar4 + 0xf08);
    lVar1 = lVar5;
  }
  plStack_260 = &lStack_2d0;
  *(ushort *)(lVar4 + 0xf08) = uVar11 + 1;
  *(undefined8 *)(lVar1 + (ulonglong)uVar11 * 8) = uVar3;
  *(undefined1 *)(lVar2 + 0xf6) = 1;
  pcStack_258 = FUN_141f69990;
  puStack_250 = &UNK_145955790;
  puStack_248 = &SUB_140004380;
  uVar3 = FUN_141c86590(&plStack_260,0xde5abd97,0);
  lVar2 = *(longlong *)
           (*(longlong *)(param_1 + 0x40) + (ulonglong)(*(int *)(param_1 + 0x3c) - 1) * 8);
  lVar4 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                              *(undefined4 *)(lVar2 + 0x88));
  uVar11 = *(ushort *)(lVar4 + 0xf08);
  lVar1 = *(longlong *)(lVar4 + 0xf00);
  if (uVar11 == *(ushort *)(lVar4 + 0xf0a)) {
    lVar5 = func_0x000144d9c140(8,(uint)uVar11 * 8 + 0x20);
    if (uVar11 != 0) {
      func_0x000145f40560(lVar5,lVar1,(ulonglong)uVar11 << 3);
    }
    if (lVar1 != 0) {
      func_0x000144d9c130(lVar1);
    }
    *(ushort *)(lVar4 + 0xf0a) = uVar11 + 4;
    *(longlong *)(lVar4 + 0xf00) = lVar5;
    uVar11 = *(ushort *)(lVar4 + 0xf08);
    lVar1 = lVar5;
  }
  plStack_280 = &lStack_2d0;
  *(ushort *)(lVar4 + 0xf08) = uVar11 + 1;
  *(longlong *)(lVar1 + (ulonglong)uVar11 * 8) = lStack_2c8;
  *(undefined1 *)(lVar2 + 0xf6) = 1;
  pcStack_278 = FUN_1407cd5b0;
  puStack_270 = &UNK_145955790;
  puStack_268 = &SUB_140004380;
  lVar4 = FUN_141c86590(&plStack_280,0xdc69782,0);
  lVar2 = *(longlong *)
           (*(longlong *)(param_1 + 0x40) + (ulonglong)(*(int *)(param_1 + 0x3c) - 1) * 8);
  lVar5 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                              *(undefined4 *)(lVar2 + 0x88));
  uVar11 = *(ushort *)(lVar5 + 0xf08);
  lVar1 = *(longlong *)(lVar5 + 0xf00);
  if (uVar11 == *(ushort *)(lVar5 + 0xf0a)) {
    lStack_2c8 = lVar4;
    lVar7 = func_0x000144d9c140(8,(uint)uVar11 * 8 + 0x20);
    if (uVar11 != 0) {
      func_0x000145f40560(lVar7,lVar1,(ulonglong)uVar11 << 3);
    }
    if (lVar1 != 0) {
      func_0x000144d9c130(lVar1);
    }
    *(ushort *)(lVar5 + 0xf0a) = uVar11 + 4;
    *(longlong *)(lVar5 + 0xf00) = lVar7;
    uVar11 = *(ushort *)(lVar5 + 0xf08);
    lVar4 = lStack_2c8;
    lVar1 = lVar7;
  }
  plStack_2a0 = &lStack_2d0;
  *(ushort *)(lVar5 + 0xf08) = uVar11 + 1;
  *(undefined8 *)(lVar1 + (ulonglong)uVar11 * 8) = uVar3;
  *(undefined1 *)(lVar2 + 0xf6) = 1;
  pcStack_298 = FUN_1406aeab0;
  puStack_290 = &UNK_145955790;
  puStack_288 = &SUB_140004380;
  lVar1 = FUN_141c86590(&plStack_2a0,0x9a2104c3,0);
  lVar5 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar1 + 0x80) + 0x20),
                              *(undefined4 *)(lVar1 + 0x88));
  uVar11 = *(ushort *)(lVar5 + 0xf08);
  lVar2 = *(longlong *)(lVar5 + 0xf00);
  if (uVar11 == *(ushort *)(lVar5 + 0xf0a)) {
    lVar7 = func_0x000144d9c140(8,(uint)uVar11 * 8 + 0x20);
    if (uVar11 != 0) {
      func_0x000145f40560(lVar7,lVar2,(ulonglong)uVar11 << 3);
    }
    if (lVar2 != 0) {
      func_0x000144d9c130(lVar2);
    }
    *(ushort *)(lVar5 + 0xf0a) = uVar11 + 4;
    *(longlong *)(lVar5 + 0xf00) = lVar7;
    uVar11 = *(ushort *)(lVar5 + 0xf08);
    lVar2 = lVar7;
  }
  *(ushort *)(lVar5 + 0xf08) = uVar11 + 1;
  *(longlong *)(lVar2 + (ulonglong)uVar11 * 8) = lVar4;
  *(undefined1 *)(lVar1 + 0xf6) = 1;
  if ((int)uVar10 < (int)(uint)lStack_2c0) {
    do {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar10 * 8);
      lVar4 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar1 + 0x80) + 0x20),
                                  *(undefined4 *)(lVar1 + 0x88));
      uVar11 = *(ushort *)(lVar4 + 0xf08);
      lVar2 = *(longlong *)(lVar4 + 0xf00);
      if (uVar11 == *(ushort *)(lVar4 + 0xf0a)) {
        lVar5 = func_0x000144d9c140(8,(uint)uVar11 * 8 + 0x20);
        if (uVar11 != 0) {
          func_0x000145f40560(lVar5,lVar2,(ulonglong)uVar11 << 3);
        }
        if (lVar2 != 0) {
          func_0x000144d9c130(lVar2);
        }
        *(ushort *)(lVar4 + 0xf0a) = uVar11 + 4;
        *(longlong *)(lVar4 + 0xf00) = lVar5;
        uVar11 = *(ushort *)(lVar4 + 0xf08);
        lVar2 = lVar5;
      }
      uVar10 = uVar10 + 1;
      *(ushort *)(lVar4 + 0xf08) = uVar11 + 1;
      *(undefined8 *)(lVar2 + (ulonglong)uVar11 * 8) = uVar3;
      *(undefined1 *)(lVar1 + 0xf6) = 1;
    } while ((uint)lStack_2c0 != uVar10);
  }
  return;
}

