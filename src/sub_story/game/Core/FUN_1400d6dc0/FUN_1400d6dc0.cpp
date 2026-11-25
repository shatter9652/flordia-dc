// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d6dc0  size: 2650 bytes
// Name:    FUN_1400d6dc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f64ca0, FUN_144ff9810
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d6dc0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint auStack_6c [11];
  
  uVar6 = *(undefined8 *)(param_1 + 0x210);
  uVar7 = *(undefined8 *)(param_1 + 0x218);
  if (param_3 == 0) {
    func_0x0001400d7840(auStack_6c,0);
    uStack_e8 = uVar6;
    uStack_e0 = uVar7;
    FUN_144ff9810(param_2,(ulonglong)auStack_6c[0] | 0x2deefadd00000000,&uStack_e8,2);
    fVar5 = *(float *)(param_1 + 0x28c) + _DAT_14615d1f0;
    auVar4._0_4_ = (uint)fVar5 ^ _DAT_145fc6f10;
    auVar4._4_4_ = _DAT_145fc6f10;
    auVar4._8_4_ = _DAT_145fc6f10;
    auVar4._12_4_ = _DAT_145fc6f10;
    auVar4 = vmaxss_avx(auVar4,ZEXT416((uint)fVar5));
    if (_DAT_145fc6f00 < auVar4._0_4_) {
      uVar6 = *(undefined8 *)(param_1 + 0x220);
      uVar7 = *(undefined8 *)(param_1 + 0x228);
      func_0x0001400d7820(&uStack_70,6);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144f64ca0(param_2,(ulonglong)uStack_70 | 0x2deefadd00000000,&uStack_e8,2);
      uVar6 = *(undefined8 *)(param_1 + 0x230);
      uVar7 = *(undefined8 *)(param_1 + 0x238);
      func_0x0001400d7820(&uStack_74,7);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144f64ca0(param_2,(ulonglong)uStack_74 | 0x2deefadd00000000,&uStack_e8,2);
    }
    lVar3 = *(longlong *)(param_1 + 0x188);
    lVar1 = *(longlong *)(param_1 + 0x198);
    uVar6 = *(undefined8 *)(lVar3 + 0xd0);
    uVar7 = *(undefined8 *)(lVar3 + 0xd8);
    func_0x0001400d7840(&uStack_98,1);
    uStack_e8 = uVar6;
    uStack_e0 = uVar7;
    FUN_144ff9810(param_2,(ulonglong)uStack_98 | 0x2deefadd00000000,&uStack_e8,2);
    uVar6 = *(undefined8 *)(lVar3 + 0xe0);
    uVar7 = *(undefined8 *)(lVar3 + 0xe8);
    func_0x0001400d7820(&uStack_9c,0);
    uStack_e8 = uVar6;
    uStack_e0 = uVar7;
    FUN_144f64ca0(param_2,(ulonglong)uStack_9c | 0x2deefadd00000000,&uStack_e8,2);
    uVar6 = *(undefined8 *)(lVar3 + 0xf0);
    uVar7 = *(undefined8 *)(lVar3 + 0xf8);
    func_0x0001400d7820(&uStack_a0,2);
    uStack_e8 = uVar6;
    uStack_e0 = uVar7;
    FUN_144f64ca0(param_2,(ulonglong)uStack_a0 | 0x2deefadd00000000,&uStack_e8,2);
    lVar3 = *(longlong *)(param_1 + 0x198);
    fVar5 = 0.0;
    if (0.0 < *(float *)(lVar3 + 0x90)) {
      uVar6 = *(undefined8 *)(lVar1 + 0x50);
      uVar7 = *(undefined8 *)(lVar1 + 0x58);
      func_0x0001400d7840(&uStack_a4,3);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144ff9810(param_2,(ulonglong)uStack_a4 | 0x2deefadd00000000,&uStack_e8,2);
      uVar6 = *(undefined8 *)(lVar1 + 0x60);
      uVar7 = *(undefined8 *)(lVar1 + 0x68);
      func_0x0001400d7840(&uStack_a8,5);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144ff9810(param_2,(ulonglong)uStack_a8 | 0x2deefadd00000000,&uStack_e8,2);
      lVar3 = *(longlong *)(param_1 + 0x198);
    }
    lVar1 = *(longlong *)(param_1 + 0x188);
    uVar6 = *(undefined8 *)(lVar1 + 0x280);
    uVar7 = *(undefined8 *)(lVar1 + 0x288);
    func_0x0001400d7840(&uStack_98,2);
    uStack_e8 = uVar6;
    uStack_e0 = uVar7;
    FUN_144ff9810(param_2,(ulonglong)uStack_98 | 0x2deefadd00000000,&uStack_e8,2);
    uVar6 = *(undefined8 *)(lVar1 + 0x290);
    uVar7 = *(undefined8 *)(lVar1 + 0x298);
    func_0x0001400d7820(&uStack_9c,1);
    uStack_e8 = uVar6;
    uStack_e0 = uVar7;
    FUN_144f64ca0(param_2,(ulonglong)uStack_9c | 0x2deefadd00000000,&uStack_e8,2);
    uVar6 = *(undefined8 *)(lVar1 + 0x2a0);
    uVar7 = *(undefined8 *)(lVar1 + 0x2a8);
    func_0x0001400d7820(&uStack_a0,3);
    uStack_e8 = uVar6;
    uStack_e0 = uVar7;
    FUN_144f64ca0(param_2,(ulonglong)uStack_a0 | 0x2deefadd00000000,&uStack_e8,2);
    if (*(float *)(*(longlong *)(param_1 + 0x198) + 0x140) <= fVar5) {
      return;
    }
    uVar6 = *(undefined8 *)(lVar3 + 0x100);
    uVar7 = *(undefined8 *)(lVar3 + 0x108);
    func_0x0001400d7840(&uStack_a4,4);
    uStack_e8 = uVar6;
    uStack_e0 = uVar7;
    FUN_144ff9810(param_2,(ulonglong)uStack_a4 | 0x2deefadd00000000,&uStack_e8,2);
    uVar6 = *(undefined8 *)(lVar3 + 0x110);
    uVar7 = *(undefined8 *)(lVar3 + 0x118);
    puVar2 = &uStack_a8;
  }
  else {
    if (param_3 != 1) {
      func_0x0001400d7840(&uStack_84,0);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144ff9810(param_2,(ulonglong)uStack_84 | 0x2deefadd00000000,&uStack_e8,2);
      uVar6 = *(undefined8 *)(param_1 + 0x220);
      uVar7 = *(undefined8 *)(param_1 + 0x228);
      func_0x0001400d7820(&uStack_88,6);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144f64ca0(param_2,(ulonglong)uStack_88 | 0x2deefadd00000000,&uStack_e8,2);
      uVar6 = *(undefined8 *)(param_1 + 0x230);
      uVar7 = *(undefined8 *)(param_1 + 0x238);
      func_0x0001400d7820(&uStack_8c,7);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144f64ca0(param_2,(ulonglong)uStack_8c | 0x2deefadd00000000,&uStack_e8,2);
      lVar3 = *(longlong *)(param_1 + 0x188);
      lVar1 = *(longlong *)(param_1 + 0x198);
      uVar6 = *(undefined8 *)(lVar3 + 0xd0);
      uVar7 = *(undefined8 *)(lVar3 + 0xd8);
      func_0x0001400d7840(&uStack_c8,1);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144ff9810(param_2,(ulonglong)uStack_c8 | 0x2deefadd00000000,&uStack_e8,2);
      uVar6 = *(undefined8 *)(lVar1 + 0x50);
      uVar7 = *(undefined8 *)(lVar1 + 0x58);
      func_0x0001400d7840(&uStack_cc,3);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144ff9810(param_2,(ulonglong)uStack_cc | 0x2deefadd00000000,&uStack_e8,2);
      uVar6 = *(undefined8 *)(lVar1 + 0x60);
      uVar7 = *(undefined8 *)(lVar1 + 0x68);
      func_0x0001400d7840(&uStack_90,5);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144ff9810(param_2,(ulonglong)uStack_90 | 0x2deefadd00000000,&uStack_e8,2);
      uVar6 = *(undefined8 *)(lVar3 + 0xe0);
      uVar7 = *(undefined8 *)(lVar3 + 0xe8);
      func_0x0001400d7820(&uStack_94,0);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144f64ca0(param_2,(ulonglong)uStack_94 | 0x2deefadd00000000,&uStack_e8,2);
      lVar3 = *(longlong *)(param_1 + 0x188);
      lVar1 = *(longlong *)(param_1 + 0x198);
      uVar6 = *(undefined8 *)(lVar3 + 0x280);
      uVar7 = *(undefined8 *)(lVar3 + 0x288);
      func_0x0001400d7840(&uStack_c8,2);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144ff9810(param_2,(ulonglong)uStack_c8 | 0x2deefadd00000000,&uStack_e8,2);
      uVar6 = *(undefined8 *)(lVar1 + 0x100);
      uVar7 = *(undefined8 *)(lVar1 + 0x108);
      func_0x0001400d7840(&uStack_cc,4);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144ff9810(param_2,(ulonglong)uStack_cc | 0x2deefadd00000000,&uStack_e8,2);
      uVar6 = *(undefined8 *)(lVar1 + 0x110);
      uVar7 = *(undefined8 *)(lVar1 + 0x118);
      func_0x0001400d7840(&uStack_90,6);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144ff9810(param_2,(ulonglong)uStack_90 | 0x2deefadd00000000,&uStack_e8,2);
      uVar6 = *(undefined8 *)(lVar3 + 0x290);
      uVar7 = *(undefined8 *)(lVar3 + 0x298);
      func_0x0001400d7820(&uStack_94,1);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144f64ca0(param_2,(ulonglong)uStack_94 | 0x2deefadd00000000,&uStack_e8,2);
      return;
    }
    func_0x0001400d7840(&uStack_78,0);
    uStack_e8 = uVar6;
    uStack_e0 = uVar7;
    FUN_144ff9810(param_2,(ulonglong)uStack_78 | 0x2deefadd00000000,&uStack_e8,2);
    uVar6 = *(undefined8 *)(param_1 + 0x220);
    uVar7 = *(undefined8 *)(param_1 + 0x228);
    func_0x0001400d7820(&uStack_7c,6);
    uStack_e8 = uVar6;
    uStack_e0 = uVar7;
    FUN_144f64ca0(param_2,(ulonglong)uStack_7c | 0x2deefadd00000000,&uStack_e8,2);
    uVar6 = *(undefined8 *)(param_1 + 0x230);
    uVar7 = *(undefined8 *)(param_1 + 0x238);
    func_0x0001400d7820(&uStack_80,7);
    uStack_e8 = uVar6;
    uStack_e0 = uVar7;
    FUN_144f64ca0(param_2,(ulonglong)uStack_80 | 0x2deefadd00000000,&uStack_e8,2);
    lVar3 = *(longlong *)(param_1 + 0x188);
    lVar1 = *(longlong *)(param_1 + 0x198);
    if ((*(byte *)(lVar3 + 0x1a4) & 0x20) == 0) {
      uVar6 = *(undefined8 *)(lVar3 + 0xd0);
      uVar7 = *(undefined8 *)(lVar3 + 0xd8);
      func_0x0001400d7840(&uStack_b4,1);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144ff9810(param_2,(ulonglong)uStack_b4 | 0x2deefadd00000000,&uStack_e8,2);
      uVar6 = *(undefined8 *)(lVar3 + 0xf0);
      uVar7 = *(undefined8 *)(lVar3 + 0xf8);
      func_0x0001400d7820(&uStack_b8,2);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144f64ca0(param_2,(ulonglong)uStack_b8 | 0x2deefadd00000000,&uStack_e8,2);
      uVar6 = *(undefined8 *)(lVar3 + 0xe0);
      uVar7 = *(undefined8 *)(lVar3 + 0xe8);
      puVar2 = &uStack_bc;
    }
    else {
      uVar6 = *(undefined8 *)(lVar3 + 0x100);
      uVar7 = *(undefined8 *)(lVar3 + 0x108);
      func_0x0001400d7820(&uStack_ac,4);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144f64ca0(param_2,(ulonglong)uStack_ac | 0x2deefadd00000000,&uStack_e8,2);
      uVar6 = *(undefined8 *)(lVar3 + 0xe0);
      uVar7 = *(undefined8 *)(lVar3 + 0xe8);
      puVar2 = &uStack_b0;
    }
    func_0x0001400d7820(puVar2,0);
    uStack_e8 = uVar6;
    uStack_e0 = uVar7;
    FUN_144f64ca0(param_2,(ulonglong)*puVar2 | 0x2deefadd00000000,&uStack_e8,2);
    lVar3 = *(longlong *)(param_1 + 0x198);
    if (0.0 < *(float *)(lVar3 + 0x90)) {
      uVar6 = *(undefined8 *)(lVar1 + 0x50);
      uVar7 = *(undefined8 *)(lVar1 + 0x58);
      func_0x0001400d7840(&uStack_c0,3);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144ff9810(param_2,(ulonglong)uStack_c0 | 0x2deefadd00000000,&uStack_e8,2);
      uVar6 = *(undefined8 *)(lVar1 + 0x60);
      uVar7 = *(undefined8 *)(lVar1 + 0x68);
      func_0x0001400d7840(&uStack_c4,5);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144ff9810(param_2,(ulonglong)uStack_c4 | 0x2deefadd00000000,&uStack_e8,2);
      lVar3 = *(longlong *)(param_1 + 0x198);
    }
    lVar1 = *(longlong *)(param_1 + 0x188);
    if ((*(byte *)(lVar1 + 0x354) & 0x20) == 0) {
      uVar6 = *(undefined8 *)(lVar1 + 0x280);
      uVar7 = *(undefined8 *)(lVar1 + 0x288);
      func_0x0001400d7840(&uStack_b4,2);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144ff9810(param_2,(ulonglong)uStack_b4 | 0x2deefadd00000000,&uStack_e8,2);
      uVar6 = *(undefined8 *)(lVar1 + 0x2a0);
      uVar7 = *(undefined8 *)(lVar1 + 0x2a8);
      func_0x0001400d7820(&uStack_b8,3);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144f64ca0(param_2,(ulonglong)uStack_b8 | 0x2deefadd00000000,&uStack_e8,2);
      uVar6 = *(undefined8 *)(lVar1 + 0x290);
      uVar7 = *(undefined8 *)(lVar1 + 0x298);
      puVar2 = &uStack_bc;
    }
    else {
      uVar6 = *(undefined8 *)(lVar1 + 0x2b0);
      uVar7 = *(undefined8 *)(lVar1 + 0x2b8);
      func_0x0001400d7820(&uStack_ac,5);
      uStack_e8 = uVar6;
      uStack_e0 = uVar7;
      FUN_144f64ca0(param_2,(ulonglong)uStack_ac | 0x2deefadd00000000,&uStack_e8,2);
      uVar6 = *(undefined8 *)(lVar1 + 0x290);
      uVar7 = *(undefined8 *)(lVar1 + 0x298);
      puVar2 = &uStack_b0;
    }
    func_0x0001400d7820(puVar2,1);
    uStack_e8 = uVar6;
    uStack_e0 = uVar7;
    FUN_144f64ca0(param_2,(ulonglong)*puVar2 | 0x2deefadd00000000,&uStack_e8,2);
    if (*(float *)(*(longlong *)(param_1 + 0x198) + 0x140) <= 0.0) {
      return;
    }
    uVar6 = *(undefined8 *)(lVar3 + 0x100);
    uVar7 = *(undefined8 *)(lVar3 + 0x108);
    func_0x0001400d7840(&uStack_c0,4);
    uStack_e8 = uVar6;
    uStack_e0 = uVar7;
    FUN_144ff9810(param_2,(ulonglong)uStack_c0 | 0x2deefadd00000000,&uStack_e8,2);
    uVar6 = *(undefined8 *)(lVar3 + 0x110);
    uVar7 = *(undefined8 *)(lVar3 + 0x118);
    puVar2 = &uStack_c4;
  }
  func_0x0001400d7840(puVar2,6);
  uStack_e8 = uVar6;
  uStack_e0 = uVar7;
  FUN_144ff9810(param_2,(ulonglong)*puVar2 | 0x2deefadd00000000,&uStack_e8,2);
  return;
}

