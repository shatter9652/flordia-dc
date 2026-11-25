// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c75d0  size: 52 bytes
// Name:    FUN_1400c75d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400c7780
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c75d0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  FUN_1400c7780();
  func_0x000145f40560(param_2,(undefined1 *)(param_1 + 0x40),0x9740);
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0x3f800000;
  FUN_144f62010(param_1 + 0xb20);
  FUN_144f62010(param_1 + 0x13c0);
  FUN_144f62010(param_1 + 0x1c60);
  FUN_144f62010(param_1 + 0x2500);
  FUN_144f62010(param_1 + 0x2da0);
  FUN_144f62010(param_1 + 0x3640);
  FUN_144f62010(param_1 + 0x3ee0);
  FUN_144f62010(param_1 + 0x4780);
  FUN_144f62010(param_1 + 0x5020);
  FUN_144f62010(param_1 + 0x58c0);
  FUN_144f62010(param_1 + 0x6160);
  FUN_144f62010(param_1 + 0x6a00);
  FUN_144f62010(param_1 + 0x72a0);
  FUN_1450df4f0(param_1 + 0x7b40);
  FUN_1450df4f0(param_1 + 0x8250);
  FUN_1450df4f0(param_1 + 0x8960);
  FUN_1450df4f0();
  uVar2 = *(uint *)(param_1 + 0x4c);
  if ((ulonglong)uVar2 != 0) {
    auVar4._4_4_ = _DAT_145fc6ed8;
    auVar4._0_4_ = _DAT_145fc6ed8;
    auVar4._8_4_ = _DAT_145fc6ed8;
    auVar4._12_4_ = _DAT_145fc6ed8;
    lVar3 = 0;
    do {
      uVar1 = vmovlps_avx(auVar4);
      *(undefined8 *)(param_1 + 0x8c + lVar3) = uVar1;
      lVar3 = lVar3 + 0x50;
    } while ((ulonglong)uVar2 * 0x50 != lVar3);
  }
  uVar2 = *(uint *)(param_1 + 0x2d0);
  if ((ulonglong)uVar2 != 0) {
    auVar5._4_4_ = _DAT_145fc6ed8;
    auVar5._0_4_ = _DAT_145fc6ed8;
    auVar5._8_4_ = _DAT_145fc6ed8;
    auVar5._12_4_ = _DAT_145fc6ed8;
    lVar3 = 0;
    do {
      uVar1 = vmovlps_avx(auVar5);
      *(undefined8 *)(param_1 + 0x318 + lVar3) = uVar1;
      lVar3 = lVar3 + 0x50;
    } while ((ulonglong)uVar2 * 0x50 != lVar3);
  }
  uVar2 = *(uint *)(param_1 + 0x560);
  if ((ulonglong)uVar2 != 0) {
    auVar6._4_4_ = _DAT_145fc6ed8;
    auVar6._0_4_ = _DAT_145fc6ed8;
    auVar6._8_4_ = _DAT_145fc6ed8;
    auVar6._12_4_ = _DAT_145fc6ed8;
    lVar3 = 0;
    do {
      uVar1 = vmovlps_avx(auVar6);
      *(undefined8 *)(param_1 + 0x59c + lVar3) = uVar1;
      lVar3 = lVar3 + 0x40;
    } while ((ulonglong)uVar2 << 6 != lVar3);
  }
  return;
}

