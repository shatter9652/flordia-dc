// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140147100  size: 844 bytes
// Name:    FUN_140147100
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141c86590, FUN_1422b2770
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140147100(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ushort uVar5;
  longlong lVar6;
  undefined1 uStack_a1;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  FUN_1422b2770(param_1,0xb2fee359,param_1 + 0x600,param_1 + 0x598);
  puStack_60 = &uStack_a1;
  pcStack_58 = FUN_140de4ac0;
  puStack_50 = &UNK_145955790;
  puStack_48 = &SUB_140004380;
  uVar1 = FUN_141c86590(&puStack_60,0x73297f61,0);
  lVar2 = FUN_1422b2770(param_1,0xb2fee359,param_1 + 0x728,param_1 + 0x6c0);
  lVar3 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                              *(undefined4 *)(lVar2 + 0x88));
  uVar5 = *(ushort *)(lVar3 + 0xf08);
  lVar6 = *(longlong *)(lVar3 + 0xf00);
  if (uVar5 == *(ushort *)(lVar3 + 0xf0a)) {
    lVar4 = func_0x000144d9c140(8,(uint)uVar5 * 8 + 0x20);
    if (uVar5 != 0) {
      func_0x000145f40560(lVar4,lVar6,(ulonglong)uVar5 << 3);
    }
    if (lVar6 != 0) {
      func_0x000144d9c130(lVar6);
    }
    *(ushort *)(lVar3 + 0xf0a) = uVar5 + 4;
    *(longlong *)(lVar3 + 0xf00) = lVar4;
    uVar5 = *(ushort *)(lVar3 + 0xf08);
    lVar6 = lVar4;
  }
  puStack_80 = &uStack_a1;
  *(ushort *)(lVar3 + 0xf08) = uVar5 + 1;
  *(undefined8 *)(lVar6 + (ulonglong)uVar5 * 8) = uVar1;
  *(undefined1 *)(lVar2 + 0xf6) = 1;
  pcStack_78 = FUN_14101beb0;
  puStack_70 = &UNK_145955790;
  puStack_68 = &SUB_140004380;
  uVar1 = FUN_141c86590(&puStack_80,0x73297f61,0);
  lVar2 = FUN_1422b2770(param_1,0xb2fee359,param_1 + 0x850,param_1 + 0x7e8);
  lVar3 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                              *(undefined4 *)(lVar2 + 0x88));
  uVar5 = *(ushort *)(lVar3 + 0xf08);
  lVar6 = *(longlong *)(lVar3 + 0xf00);
  if (uVar5 == *(ushort *)(lVar3 + 0xf0a)) {
    lVar4 = func_0x000144d9c140(8,(uint)uVar5 * 8 + 0x20);
    if (uVar5 != 0) {
      func_0x000145f40560(lVar4,lVar6,(ulonglong)uVar5 << 3);
    }
    if (lVar6 != 0) {
      func_0x000144d9c130(lVar6);
    }
    *(ushort *)(lVar3 + 0xf0a) = uVar5 + 4;
    *(longlong *)(lVar3 + 0xf00) = lVar4;
    uVar5 = *(ushort *)(lVar3 + 0xf08);
    lVar6 = lVar4;
  }
  puStack_a0 = &uStack_a1;
  *(ushort *)(lVar3 + 0xf08) = uVar5 + 1;
  *(undefined8 *)(lVar6 + (ulonglong)uVar5 * 8) = uVar1;
  *(undefined1 *)(lVar2 + 0xf6) = 1;
  pcStack_98 = FUN_140b19020;
  puStack_90 = &UNK_145955790;
  puStack_88 = &SUB_140004380;
  uVar1 = FUN_141c86590(&puStack_a0,0x370d030d,0);
  lVar2 = FUN_1422b2770(param_1,0xb2fee359,param_1 + 0x978,param_1 + 0x910);
  lVar3 = func_0x000144f2e340(*(undefined8 *)(*(longlong *)(lVar2 + 0x80) + 0x20),
                              *(undefined4 *)(lVar2 + 0x88));
  uVar5 = *(ushort *)(lVar3 + 0xf08);
  lVar6 = *(longlong *)(lVar3 + 0xf00);
  if (uVar5 == *(ushort *)(lVar3 + 0xf0a)) {
    lVar4 = func_0x000144d9c140(8,(uint)uVar5 * 8 + 0x20);
    if (uVar5 != 0) {
      func_0x000145f40560(lVar4,lVar6,(ulonglong)uVar5 << 3);
    }
    if (lVar6 != 0) {
      func_0x000144d9c130(lVar6);
    }
    *(ushort *)(lVar3 + 0xf0a) = uVar5 + 4;
    *(longlong *)(lVar3 + 0xf00) = lVar4;
    uVar5 = *(ushort *)(lVar3 + 0xf08);
    lVar6 = lVar4;
  }
  *(ushort *)(lVar3 + 0xf08) = uVar5 + 1;
  *(undefined8 *)(lVar6 + (ulonglong)uVar5 * 8) = uVar1;
  *(undefined1 *)(lVar2 + 0xf6) = 1;
  return;
}

