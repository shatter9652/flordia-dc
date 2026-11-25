// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004fbf0  size: 2178 bytes
// Name:    FUN_14004fbf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140d312f0, FUN_142008250, FUN_14004f4e0, FUN_142003c70, FUN_140fd74e0, FUN_1406b1ad0, FUN_14047fe70, FUN_141ff3d50, FUN_145408dc0, FUN_142089660, FUN_14540ab70, FUN_142007100, FUN_14094a1e0, FUN_14094a170
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14004fbf0(undefined8 *param_1)

{
  longlong *plVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong unaff_GS_OFFSET;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  undefined1 auVar22 [64];
  undefined8 uVar23;
  undefined1 auVar21 [64];
  
  auVar9._0_12_ = ZEXT812(0);
  auVar9._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 1) = auVar9;
  *param_1 = &UNK_14653d9f0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 (*) [32])(param_1 + 4) = ZEXT1232(ZEXT812(0));
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined1 (*) [16])((longlong)param_1 + 0x43) = auVar9;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 5;
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar9;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 (*) [16])(param_1 + 0xf) = auVar9;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 (*) [16])(param_1 + 0x12) = auVar9;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined1 (*) [16])(param_1 + 0x15) = auVar9;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar9;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 (*) [16])(param_1 + 0x1b) = auVar9;
  *(undefined1 (*) [16])(param_1 + 0x1e) = auVar9;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 (*) [16])(param_1 + 0x21) = auVar9;
  *(undefined1 (*) [16])((longlong)param_1 + 0x115) = auVar9;
  param_1[0x25] = 0xffffffff0001ffff;
  *(undefined1 (*) [32])(param_1 + 0x26) = ZEXT1232(ZEXT812(0));
  param_1[0x2a] = 0x20ffffffff;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2c] = 0x800000;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar7 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar6 = *(longlong *)(lVar7 + 0x1448);
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 0x2d) = 0;
  }
  plVar1 = (longlong *)(lVar7 + 0x1448);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar6 = *plVar1;
  }
  if (lVar6 == 0) {
    *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
    *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  }
  func_0x0001432031f0(param_1 + 0x2f);
  FUN_142007100(param_1 + 0x37);
  FUN_142008250(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x82) = 0x1ffff;
  *(undefined1 *)(param_1 + 0x83) = 0;
  func_0x000140e1a120(param_1 + 0x84);
  auVar20._0_12_ = ZEXT812(0);
  auVar20._12_4_ = 0;
  auVar21 = ZEXT1664(auVar20);
  param_1[0x1d0] = param_1 + 0x84;
  *(undefined1 (*) [16])(param_1 + 0x1d1) = auVar20;
  *(undefined4 *)(param_1 + 0x1d3) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d5) = 0;
  func_0x0001408ab380(param_1 + 0x1d6);
  *(undefined2 *)(param_1 + 0x1d9) = 0;
  *(undefined4 *)((longlong)param_1 + 0xecc) = 0;
  param_1[0x1da] = 0;
  FUN_142089660(param_1 + 0x1dc);
  param_1[0x1ea] = 10;
  FUN_14094a1e0(param_1 + 0x1ea);
  FUN_14094a170(param_1 + 0x1ea);
  fVar4 = _DAT_14615a290;
  fVar2 = _DAT_145fc6ed8;
  auVar10._4_4_ = _DAT_14615a290;
  auVar10._0_4_ = _DAT_14615a290;
  auVar10._8_4_ = _DAT_14615a290;
  auVar10._12_4_ = _DAT_14615a290;
  auVar13 = CONCAT412(_DAT_145fc6ed8,
                      CONCAT48(_DAT_145fc6ed8,CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8)));
  param_1[0x1f8] = 10;
  auVar9 = vrcpps_avx(auVar10);
  fVar15 = auVar9._0_4_;
  fVar17 = auVar9._4_4_;
  fVar18 = auVar9._8_4_;
  fVar19 = auVar9._12_4_;
  auVar10 = auVar21._0_16_;
  auVar11._0_4_ = ((-(fVar15 * fVar4) + fVar2) * fVar15 + fVar15) * auVar21._0_4_;
  auVar11._4_4_ = ((-(fVar17 * fVar4) + fVar2) * fVar17 + fVar17) * auVar21._4_4_;
  auVar11._8_4_ = ((-(fVar18 * fVar4) + fVar2) * fVar18 + fVar18) * auVar21._8_4_;
  auVar11._12_4_ = ((-(fVar19 * fVar4) + fVar2) * fVar19 + fVar19) * auVar21._12_4_;
  auVar9 = vroundps_avx(auVar11,3);
  auVar16._0_4_ = auVar9._0_4_ * _DAT_14615ad78;
  auVar16._4_4_ = auVar9._4_4_ * _DAT_14615ad78;
  auVar16._8_4_ = auVar9._8_4_ * _DAT_14615ad78;
  auVar16._12_4_ = auVar9._12_4_ * _DAT_14615ad78;
  auVar12._0_4_ = (int)auVar9._0_4_;
  auVar12._4_4_ = (int)auVar9._4_4_;
  auVar12._8_4_ = (int)auVar9._8_4_;
  auVar12._12_4_ = (int)auVar9._12_4_;
  auVar9 = vpackssdw_avx(auVar12,auVar12);
  auVar9 = vinsertps_avx(auVar16,auVar9,0x34);
  *(undefined1 (*) [32])(param_1 + 0x23c) = ZEXT432(0) << 0x20;
  param_1[0x240] = 0;
  *(undefined1 (*) [16])(param_1 + 0x236) = auVar9;
  *(undefined1 (*) [16])(param_1 + 0x238) = auVar10;
  *(undefined8 *)((longlong)param_1 + 0x11cd) = 0;
  *(undefined1 (*) [16])(param_1 + 0x24c) = auVar10;
  param_1[0x24e] = 0x3f00000000000000;
  *(undefined1 *)(param_1 + 0x24f) = 2;
  *(undefined1 (*) [16])(param_1 + 0x252) = auVar10;
  param_1[0x254] = 0x3f00000000000000;
  *(undefined1 *)(param_1 + 0x255) = 2;
  *(undefined4 *)(param_1 + 0x256) = 0;
  auVar21 = ZEXT1664(auVar10);
  auVar22 = ZEXT1664(auVar13);
  func_0x000142ca9590(param_1 + 0x25a);
  param_1[0x262] = 0x1ffff;
  *(undefined1 (*) [16])(param_1 + 0x266) = auVar21._0_16_;
  FUN_14004f4e0(param_1 + 0x268,3);
  param_1[0x269] = 0x3ffffffff;
  FUN_141ff3d50(param_1 + 0x26a);
  uVar23 = _DAT_14615ad90;
  *(undefined8 *)((longlong)param_1 + 0x1404) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1434) = 4;
  *(undefined4 *)(param_1 + 0x289) = 4;
  *(undefined4 *)((longlong)param_1 + 0x145c) = 4;
  *(undefined4 *)(param_1 + 0x28e) = 4;
  auVar9 = auVar21._0_16_;
  *(undefined1 (*) [16])((longlong)param_1 + 0x1424) = auVar9;
  *(undefined1 (*) [16])(param_1 + 0x287) = auVar9;
  *(undefined1 (*) [16])((longlong)param_1 + 0x144c) = auVar9;
  *(undefined1 (*) [16])(param_1 + 0x28c) = auVar9;
  *(undefined2 *)((longlong)param_1 + 0x1474) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1476) = 1;
  *(undefined1 (*) [16])(param_1 + 0x28f) = auVar9;
  *(undefined1 *)(param_1 + 0x291) = 1;
  *(undefined2 *)((longlong)param_1 + 0x148c) = 0;
  param_1[0x292] = uVar23;
  param_1[0x293] = 0;
  FUN_142003c70(param_1 + 0x296);
  param_1[0x2c4] = 0xffffffff00000000;
  auVar9 = auVar21._0_16_;
  *(undefined1 (*) [16])(param_1 + 0x2c8) = auVar9;
  param_1[0x2cf] = uVar23;
  *(undefined8 *)((longlong)param_1 + 0x168c) = 0;
  param_1[0x2d0] = 0;
  *(undefined1 *)(param_1 + 0x2d1) = 0;
  *(undefined1 (*) [16])(param_1 + 0x2d3) = auVar9;
  param_1[0x2d5] = 0;
  param_1[0x2d6] = 0x20ffffffff;
  *(undefined4 *)(param_1 + 0x2d7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16bc) = 0;
  *(undefined1 (*) [16])(param_1 + 0x2d8) = auVar9;
  param_1[0x2da] = 0;
  param_1[0x2db] = 0x20ffffffff;
  *(undefined4 *)(param_1 + 0x2dc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16e4) = 0;
  param_1[0x2dd] = 0xffffffff00000000;
  param_1[0x2e0] = 0xbf800000;
  *(uint *)(param_1 + 0x2e1) = *(uint *)(param_1 + 0x2e1) & 0xfffffd76;
  FUN_140d312f0(param_1 + 0x2e4);
  *(undefined1 *)(param_1 + 0x3a4) = 0;
  auVar9 = auVar21._0_16_;
  *(undefined1 (*) [16])((longlong)param_1 + 0x1cfc) = auVar9;
  *(undefined8 *)((longlong)param_1 + 0x1d0c) = 0;
  param_1[0x3a8] = 0;
  *(undefined4 *)(param_1 + 0x3a9) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1d4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d51) = 0;
  *(undefined1 (*) [16])((longlong)param_1 + 0x1d5c) = auVar9;
  *(undefined4 *)((longlong)param_1 + 0x1d6c) = 0xffffffff;
  param_1[0x3ae] = 0;
  *(undefined4 *)(param_1 + 0x3af) = 0;
  param_1[0x3b3] = 0;
  *(undefined1 (*) [16])(param_1 + 0x3b0) = auVar9;
  *(undefined4 *)(param_1 + 0x3b2) = 0;
  param_1[0x3b4] = 200;
  *(undefined4 *)(param_1 + 0x3b5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1dac) = 2;
  *(byte *)((longlong)param_1 + 0x1dad) = *(byte *)((longlong)param_1 + 0x1dad) & 0x80;
  *(undefined1 (*) [16])(param_1 + 0x3b6) = auVar9;
  param_1[0x3b8] = 0;
  FUN_1406b1ad0(param_1 + 0x3b9);
  uVar5 = _UNK_146178488;
  uVar23 = _DAT_146178480;
  auVar13._0_12_ = ZEXT812(0);
  auVar13._12_4_ = 0;
  param_1[0x3ca] = 0;
  *(undefined2 *)((longlong)param_1 + 0x1e61) = 0;
  param_1[0x3cd] = 0;
  *(undefined1 (*) [32])(param_1 + 0x3c3) = ZEXT1632(auVar13);
  *(undefined1 (*) [32])((longlong)param_1 + 0x1e2c) = ZEXT1632(auVar13);
  param_1[0x3ce] = &UNK_14653f5a0;
  param_1[0x3d6] = 0;
  *(undefined4 *)(param_1 + 0x3d7) = 0;
  *(undefined1 (*) [32])(param_1 + 0x3cf) = ZEXT1632(auVar13);
  *(undefined1 (*) [32])((longlong)param_1 + 0x1e8c) = ZEXT1632(auVar13);
  param_1[0x3d8] = &UNK_14653f598;
  param_1[0x3dd] = 0;
  *(undefined4 *)(param_1 + 0x3de) = 0;
  auVar9 = auVar21._0_16_;
  *(undefined1 (*) [16])(param_1 + 0x3d9) = auVar9;
  *(undefined1 (*) [16])((longlong)param_1 + 0x1ed4) = auVar9;
  param_1[0x3df] = &UNK_14653f590;
  param_1[0x3e4] = 0;
  *(undefined4 *)(param_1 + 0x3e5) = 0;
  *(undefined4 *)(param_1 + 0x3ea) = 0;
  *(undefined1 (*) [16])((longlong)param_1 + 0x1f0c) = auVar9;
  *(undefined1 (*) [16])(param_1 + 0x3e0) = auVar9;
  *(undefined1 (*) [16])(param_1 + 0x3e6) = auVar9;
  param_1[1000] = uVar23;
  param_1[0x3e9] = uVar5;
  *(undefined1 (*) [16])(param_1 + 0x3eb) = auVar9;
  param_1[0x3ed] = 0;
  auVar21 = ZEXT1664(auVar9);
  auVar22 = ZEXT1664(auVar22._0_16_);
  FUN_14047fe70(param_1 + 0x3ee);
  param_1[0x3ef] = 0;
  *(undefined1 *)(param_1 + 0x3f0) = 0;
  func_0x000145071840(param_1 + 0x3f2);
  FUN_145408dc0(param_1 + 0x3fa);
  FUN_140fd74e0(param_1 + 0xcf6);
  param_1[0xda8] = 5;
  func_0x00014116d0d0(param_1 + 0xdb8);
  auVar14._4_4_ = _DAT_145fc6f48;
  auVar14._0_4_ = _DAT_145fc6f48;
  auVar14._8_4_ = _DAT_145fc6f48;
  auVar14._12_4_ = _DAT_145fc6f48;
  *(undefined4 *)(param_1 + 0xdbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6dec) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6df4) = 0;
  param_1[0xdc0] = 0;
  uVar23 = vmovlps_avx(auVar14);
  param_1[0xdc1] = uVar23;
  *(undefined1 (*) [32])(param_1 + 0xdc8) = ZEXT432(0) << 0x20;
  auVar21 = ZEXT1664(auVar21._0_16_);
  auVar22 = ZEXT1664(auVar22._0_16_);
  FUN_14540ab70(param_1 + 0xdcc);
  uVar5 = _DAT_1461784a0;
  uVar23 = _DAT_146178490;
  auVar9 = auVar22._0_16_;
  param_1[0xdd0] = 0;
  *(undefined1 (*) [16])((longlong)param_1 + 0x6e64) = auVar21._0_16_;
  *(undefined8 *)((longlong)param_1 + 0x6e71) = 0;
  *(undefined4 *)(param_1 + 0xdd1) = 0x1ffff;
  *(undefined8 *)((longlong)param_1 + 0x6e8c) = uVar23;
  *(undefined2 *)((longlong)param_1 + 0x6e94) = 1;
  *(undefined1 *)((longlong)param_1 + 0x6e96) = 1;
  param_1[0xdd3] = 0;
  param_1[0xdd4] = uVar5;
  *(undefined4 *)(param_1 + 0xdd5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6eac) = 1;
  param_1[0xdd6] = 0;
  *(undefined4 *)(param_1 + 0xdd7) = 0xff7fffff;
  *(undefined4 *)(param_1 + 0xdda) = 0;
  *(undefined1 (*) [16])((longlong)param_1 + 0x6ebc) = auVar21._0_16_;
  *(undefined4 *)((longlong)param_1 + 0x6ecb) = 0;
  *(undefined2 *)((longlong)param_1 + 0x6ed4) = 0x101;
  param_1[0xddb] = 0;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    auVar9 = auVar22._0_16_;
  }
  if (*plVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6ee4) = 0;
  }
  uVar3 = _DAT_145fc6f70;
  *(undefined4 *)(param_1 + 0xdc2) = _DAT_145fc6f70;
  *(undefined4 *)((longlong)param_1 + 0x6e14) = uVar3;
  *(undefined4 *)(param_1 + 0xdc3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x6e1c) = uVar3;
  *(undefined4 *)(param_1 + 0xdc4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x6e24) = uVar3;
  *(undefined4 *)(param_1 + 0xdc5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x6e2c) = uVar3;
  *(undefined4 *)(param_1 + 0xdc6) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x6e34) = uVar3;
  *(undefined4 *)(param_1 + 0xdc7) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x6e3c) = uVar3;
  *(undefined1 *)((longlong)param_1 + 0x131c) = 1;
  *(undefined1 (*) [16])(param_1 + 0x264) = ZEXT416(0) << 0x20;
  *(undefined4 *)((longlong)param_1 + 0x141c) = 0;
  *(undefined1 (*) [16])(param_1 + 0x244) = ZEXT416(0) << 0x20;
  *(undefined1 (*) [16])(param_1 + 0x248) = auVar9;
  *(undefined1 *)(param_1 + 0xdbd) = 0;
  *(undefined1 *)(param_1 + 0x280) = 0;
  param_1[0x2e2] = 0;
  func_0x000144e71130(*(undefined4 *)(param_1 + 0x2a));
  *(undefined2 *)((longlong)param_1 + 0x156) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x27] != 0) {
    func_0x000145f40580(param_1[0x27],0,(ulonglong)*(ushort *)((longlong)param_1 + 0x154) << 6);
    if (*(short *)((longlong)param_1 + 0x154) != 0) {
      lVar7 = 0x2a;
      uVar8 = 0;
      do {
        lVar6 = param_1[0x27];
        uVar8 = uVar8 + 1;
        *(undefined8 *)(lVar6 + -10 + lVar7) = 0xffffffff00000000;
        *(undefined1 *)(lVar6 + lVar7) = 0;
        *(undefined2 *)(lVar6 + -2 + lVar7) = 0xffff;
        lVar7 = lVar7 + 0x40;
      } while (uVar8 < *(ushort *)((longlong)param_1 + 0x154));
    }
  }
  return param_1;
}

