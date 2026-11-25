// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c7610  size: 368 bytes
// Name:    FUN_1400c7610
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450df4f0, FUN_144f62010
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c7610(undefined1 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  FUN_144f62010(param_1 + 0xae0);
  FUN_144f62010(param_1 + 0x1380);
  FUN_144f62010(param_1 + 0x1c20);
  FUN_144f62010(param_1 + 0x24c0);
  FUN_144f62010(param_1 + 0x2d60);
  FUN_144f62010(param_1 + 0x3600);
  FUN_144f62010(param_1 + 0x3ea0);
  FUN_144f62010(param_1 + 0x4740);
  FUN_144f62010(param_1 + 0x4fe0);
  FUN_144f62010(param_1 + 0x5880);
  FUN_144f62010(param_1 + 0x6120);
  FUN_144f62010(param_1 + 0x69c0);
  FUN_144f62010(param_1 + 0x7260);
  FUN_1450df4f0(param_1 + 0x7b00);
  FUN_1450df4f0(param_1 + 0x8210);
  FUN_1450df4f0(param_1 + 0x8920);
  FUN_1450df4f0();
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((ulonglong)uVar2 != 0) {
    auVar4._4_4_ = _DAT_145fc6ed8;
    auVar4._0_4_ = _DAT_145fc6ed8;
    auVar4._8_4_ = _DAT_145fc6ed8;
    auVar4._12_4_ = _DAT_145fc6ed8;
    lVar3 = 0;
    do {
      uVar1 = vmovlps_avx(auVar4);
      *(undefined8 *)(param_1 + lVar3 + 0x4c) = uVar1;
      lVar3 = lVar3 + 0x50;
    } while ((ulonglong)uVar2 * 0x50 != lVar3);
  }
  uVar2 = *(uint *)(param_1 + 0x290);
  if ((ulonglong)uVar2 != 0) {
    auVar5._4_4_ = _DAT_145fc6ed8;
    auVar5._0_4_ = _DAT_145fc6ed8;
    auVar5._8_4_ = _DAT_145fc6ed8;
    auVar5._12_4_ = _DAT_145fc6ed8;
    lVar3 = 0;
    do {
      uVar1 = vmovlps_avx(auVar5);
      *(undefined8 *)(param_1 + lVar3 + 0x2d8) = uVar1;
      lVar3 = lVar3 + 0x50;
    } while ((ulonglong)uVar2 * 0x50 != lVar3);
  }
  uVar2 = *(uint *)(param_1 + 0x520);
  if ((ulonglong)uVar2 != 0) {
    auVar6._4_4_ = _DAT_145fc6ed8;
    auVar6._0_4_ = _DAT_145fc6ed8;
    auVar6._8_4_ = _DAT_145fc6ed8;
    auVar6._12_4_ = _DAT_145fc6ed8;
    lVar3 = 0;
    do {
      uVar1 = vmovlps_avx(auVar6);
      *(undefined8 *)(param_1 + lVar3 + 0x55c) = uVar1;
      lVar3 = lVar3 + 0x40;
    } while ((ulonglong)uVar2 << 6 != lVar3);
  }
  return;
}

