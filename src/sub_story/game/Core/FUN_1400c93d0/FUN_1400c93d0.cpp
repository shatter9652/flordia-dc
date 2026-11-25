// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c93d0  size: 482 bytes
// Name:    FUN_1400c93d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400d2560, FUN_1400c97d0, FUN_141603540, FUN_1400c9a10, FUN_1400c95c0, FUN_1400d9710
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c93d0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,undefined1 param_6)

{
  undefined8 uVar1;
  float fVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  
  fVar2 = *(float *)(param_1 + 0x28c) + _DAT_14615d1f0;
  auVar4._0_4_ = (uint)fVar2 ^ _DAT_145fc6f10;
  auVar4._4_4_ = _DAT_145fc6f10;
  auVar4._8_4_ = _DAT_145fc6f10;
  auVar4._12_4_ = _DAT_145fc6f10;
  auVar4 = vmaxss_avx(auVar4,ZEXT416((uint)fVar2));
  if (_DAT_145fc6f00 < auVar4._0_4_) {
    FUN_141603540(auVar4._0_8_,param_2,_DAT_145fc6f00,param_4,param_5);
  }
  FUN_1400d2560(param_1,param_2,param_3,param_4,param_5,param_6,0);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  FUN_1400d9710(param_1,param_2,param_3,uVar1,param_4,param_1 + 0xac);
  FUN_1400c9a10(param_1,param_2,param_3,uVar1,param_4,param_1 + 0xac);
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  FUN_1400c97d0(param_1,param_2,param_3,uVar1,param_5,*(undefined1 *)(param_1 + 200));
  FUN_1400c95c0(param_1,param_2,param_3,uVar1,param_5,*(undefined1 *)(param_1 + 200));
  lVar3 = *(longlong *)(param_1 + 0x188) + 0x1b0;
  FUN_1400d9710(param_1,param_2,param_3,lVar3,param_4 + 0x120,param_1 + 0xb4);
  FUN_1400c9a10(param_1,param_2,param_3,lVar3,param_4 + 0x120,param_1 + 0xb4);
  lVar3 = *(longlong *)(param_1 + 0x198) + 0xb0;
  FUN_1400c97d0(param_1,param_2,param_3,lVar3,param_5 + 0xd0,*(undefined1 *)(param_1 + 0xd8));
  FUN_1400c95c0(param_1,param_2,param_3,lVar3,param_5 + 0xd0,*(undefined1 *)(param_1 + 0xd8));
  return;
}

