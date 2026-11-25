// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140024b90  size: 821 bytes
// Name:    FUN_140024b90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145012550, FUN_140024ed0, FUN_144df1bf0, FUN_144df1c70, FUN_14505efe0, FUN_144df2420, FUN_144df1ba0, FUN_144e079f0, FUN_144e07920, FUN_144e23490, FUN_144e08d80, FUN_144df1cf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140024b90(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [64];
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 auStack_308 [16];
  undefined1 auStack_2f8 [16];
  longlong *plStack_2e8;
  int iStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 auStack_2c8 [32];
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  longlong *aplStack_288 [2];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_260;
  undefined4 uStack_258;
  undefined1 auStack_250 [40];
  undefined1 auStack_228 [48];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  longlong *plStack_e8;
  int iStack_e0;
  undefined1 auStack_a0 [96];
  
  plVar1 = *(longlong **)(param_1 + 0x88);
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  (**(code **)(*(longlong *)plVar1[4] + 0x18))((longlong *)plVar1[4],&uStack_2d8,0);
  (**(code **)(*plVar1 + 0x38))(plVar1,&uStack_1d8,1);
  FUN_14505efe0(&uStack_1d8,&plStack_2e8,0);
  uVar6 = FUN_145012550(uVar6,param_2);
  FUN_144df1bf0(auStack_228,&uStack_2d8,&plStack_2e8);
  FUN_144df1ba0(auStack_250,&uStack_2d8,&plStack_2e8,1);
  FUN_144df1c70(auStack_a0,&plStack_2e8,0);
  plVar2 = plStack_2e8;
  iVar4 = func_0x000144e05fa0(plStack_2e8[1]);
  uStack_278 = _DAT_145fc6ee0;
  uStack_270 = _UNK_145fc6ee8;
  if (iStack_2e0 != iVar4) {
    uVar5 = (**(code **)(*plVar2 + 0xf0))(plVar2,iStack_2e0);
    (**(code **)(*plVar2 + 0x108))(plVar2,uVar5,&uStack_1d8);
    uStack_278 = uStack_1d8;
    uStack_270 = uStack_1d0;
  }
  uVar5 = 0;
  aplStack_288[0] = plStack_2e8;
  uStack_298 = uStack_2d8;
  uStack_290 = uStack_2d0;
  FUN_144df2420(&uStack_1d8,uVar6,auStack_228,auStack_250,auStack_a0,&uStack_298,aplStack_288,
                &uStack_278,1,0,1,1,0,0);
  uVar6 = func_0x000144df8430(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10));
  if ((*(byte *)((longlong)plVar1 + 0x6384) & 2) != 0) {
    uVar5 = func_0x000144da4370(*(undefined1 *)(param_1 + 0xc1));
  }
  FUN_144e07920(&uStack_318);
  FUN_144e079f0(&uStack_1d8,uVar6,&uStack_318,uVar5);
  auStack_2f8._0_12_ = ZEXT812(0);
  auStack_2f8._12_4_ = 0;
  auVar7 = ZEXT1664(auStack_2f8);
  iVar4 = func_0x000144e05fa0(plStack_e8[1]);
  if (iStack_e0 == iVar4) {
    uStack_318 = _DAT_145fc6ee0;
    uStack_310 = _UNK_145fc6ee8;
    auStack_308 = auVar7._0_16_;
  }
  else {
    uVar5 = (**(code **)(*plStack_e8 + 0xf0))(plStack_e8,iStack_e0);
    (**(code **)(*plStack_e8 + 0x108))(plStack_e8,uVar5,&uStack_318);
  }
  uStack_1f8 = uStack_318;
  uStack_1f0 = uStack_310;
  uStack_1e8 = auStack_308._0_8_;
  uStack_1e0 = auStack_308._8_8_;
  FUN_144e08d80(auStack_2c8,&uStack_1f8,auStack_2f8,&uStack_1d8,&uStack_318,1);
  uStack_2a8 = uStack_1e8;
  uStack_2a0 = uStack_1e0;
  cVar3 = FUN_140024ed0(plVar1,auStack_2c8,&uStack_2a8,auStack_2f8._0_4_);
  if (cVar3 != '\0') {
    (**(code **)(*(longlong *)plVar1[4] + 0x18))((longlong *)plVar1[4],&uStack_260,0);
    FUN_144e23490(uStack_260,uStack_258,auStack_2c8);
  }
  FUN_144df1cf0(&uStack_1d8);
  return;
}

