// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001cd40  size: 124 bytes
// Name:    FUN_14001cd40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14001da90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14001cd40(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [16];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  lVar2 = *(longlong *)(param_1 + 0x88);
  uStack_28 = *(undefined8 *)(lVar2 + 0xc0);
  uStack_20 = *(undefined8 *)(lVar2 + 200);
  uStack_38 = *(undefined4 *)(lVar2 + 0xd0);
  uVar1 = *(undefined4 *)(lVar2 + 0x194);
  auStack_48._4_4_ = uVar1;
  auStack_48._0_4_ = uVar1;
  auStack_48._8_4_ = uVar1;
  auStack_48._12_4_ = uVar1;
  uStack_34 = uStack_38;
  uStack_30 = uStack_38;
  uStack_2c = uStack_38;
  FUN_14001da90(param_2,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x78),
                *(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80),auStack_48,
                &uStack_38,&uStack_28);
  return;
}

