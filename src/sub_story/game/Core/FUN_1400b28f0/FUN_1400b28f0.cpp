// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b28f0  size: 279 bytes
// Name:    FUN_1400b28f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b2fe0, FUN_1400b2a60, FUN_144f3e760, FUN_1400b2a10, FUN_144f3e6e0, FUN_1400b3230, FUN_1400b2b10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b28f0(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 extraout_var_02 [56];
  undefined1 auVar13 [64];
  undefined1 auVar14 [16];
  undefined1 auVar15 [64];
  undefined1 auVar9 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_03 [56];
  
  lVar8 = *(longlong *)(param_1 + 8);
  uVar2 = *(undefined4 *)(lVar8 + 0x9c);
  lVar4 = func_0x000144da6540(uVar2);
  if (lVar4 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar4 + 0x10c8);
  }
  lVar4 = func_0x000144da6540(uVar2);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x10e8);
  }
  uVar5 = FUN_144f3e760(lVar8,0);
  lVar6 = func_0x000144da6540(*(undefined4 *)(lVar8 + 0x9c));
  FUN_1400b3230(*(undefined8 *)(lVar6 + 0x10b8),uVar5);
  FUN_1400b2a10(uVar7);
  lVar6 = func_0x000144da6540(*(undefined4 *)(lVar8 + 0x9c));
  if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x10c0) != 0)) {
    FUN_1400b2b10();
  }
  cVar3 = FUN_1400b2a60(uVar7,uVar5);
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = cVar3 * '\x04' | bVar1 & 0xfb;
  if (lVar4 == 0) {
    if (cVar3 == '\0') goto LAB_1400b29f8;
  }
  else if ((cVar3 == '\0') || (*(char *)(lVar4 + 0x5a) != '\0')) {
LAB_1400b29f8:
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = 5;
    goto LAB_1400b29d1;
  }
  *(byte *)(param_1 + 0x10) = (cVar3 * '\x04' | bVar1 & 0xf8) + 1;
  uVar7 = FUN_144f3e6e0(lVar8);
  FUN_1400b2fe0(param_1,uVar5,uVar7);
LAB_1400b29d1:
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar5 = 0;
  lVar8 = FUN_144f3e760(uVar7,0);
  if (lVar8 == 0) {
    auVar15._0_8_ = FUN_140bc7f80(0,uVar7,0,0,0,0,1);
    auVar15._8_56_ = extraout_var_02;
    auVar15 = ZEXT1664(auVar15._0_16_);
    auVar13._0_8_ = FUN_140bc7f80(2,uVar7,0,0,0,0,1);
    auVar14 = auVar15._0_16_;
    auVar13._8_56_ = extraout_var_03;
    auVar9 = auVar13._0_16_;
  }
  else {
    uVar5 = *(undefined8 *)(lVar8 + 0x28);
    auVar10._0_8_ = FUN_140bc7f80(0,uVar7,0,lVar8,0,0,1);
    auVar10._8_56_ = extraout_var;
    auVar15 = ZEXT1664(auVar10._0_16_);
    auVar11._0_8_ = FUN_140bc7f80(2,uVar7,0,lVar8,0,0,1);
    auVar14 = auVar15._0_16_;
    auVar11._8_56_ = extraout_var_00;
    auVar9 = auVar11._0_16_;
  }
  auVar9 = vmaxss_avx(auVar14,auVar9);
  auVar15 = ZEXT1664(auVar9);
  auVar12._0_8_ = func_0x0001400b2ce0(uVar7,uVar5,*(undefined4 *)(param_1 + 0x18));
  auVar12._8_56_ = extraout_var_01;
  auVar9 = vmaxss_avx(auVar15._0_16_,auVar12._0_16_);
  auVar9 = vmaxss_avx(ZEXT416((uint)(auVar9._0_4_ * _DAT_14615a2c0)),ZEXT416(_DAT_146159c64));
  *(int *)(param_1 + 0x44) = auVar9._0_4_;
  return;
}

