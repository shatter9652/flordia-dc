// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b2bd0  size: 260 bytes
// Name:    FUN_1400b2bd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140bc7f80, FUN_144f3e760
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b2bd0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 extraout_var_02 [56];
  undefined1 auVar8 [64];
  undefined1 auVar9 [16];
  undefined1 auVar10 [64];
  undefined1 auVar4 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_03 [56];
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = 0;
  lVar2 = FUN_144f3e760(uVar1,0);
  if (lVar2 == 0) {
    auVar10._0_8_ = FUN_140bc7f80(0,uVar1,0,0,0,0,1);
    auVar10._8_56_ = extraout_var_02;
    auVar10 = ZEXT1664(auVar10._0_16_);
    auVar8._0_8_ = FUN_140bc7f80(2,uVar1,0,0,0,0,1);
    auVar9 = auVar10._0_16_;
    auVar8._8_56_ = extraout_var_03;
    auVar4 = auVar8._0_16_;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    auVar5._0_8_ = FUN_140bc7f80(0,uVar1,0,lVar2,0,0,1);
    auVar5._8_56_ = extraout_var;
    auVar10 = ZEXT1664(auVar5._0_16_);
    auVar6._0_8_ = FUN_140bc7f80(2,uVar1,0,lVar2,0,0,1);
    auVar9 = auVar10._0_16_;
    auVar6._8_56_ = extraout_var_00;
    auVar4 = auVar6._0_16_;
  }
  auVar4 = vmaxss_avx(auVar9,auVar4);
  auVar10 = ZEXT1664(auVar4);
  auVar7._0_8_ = func_0x0001400b2ce0(uVar1,uVar3,*(undefined4 *)(param_1 + 0x18));
  auVar7._8_56_ = extraout_var_01;
  auVar4 = vmaxss_avx(auVar10._0_16_,auVar7._0_16_);
  auVar4 = vmaxss_avx(ZEXT416((uint)(auVar4._0_4_ * _DAT_14615a2c0)),ZEXT416(_DAT_146159c64));
  *(int *)(param_1 + 0x44) = auVar4._0_4_;
  return;
}

