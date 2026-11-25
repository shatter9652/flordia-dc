// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140067750  size: 247 bytes
// Name:    FUN_140067750
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eae470
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140067750(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 in_ZMM0 [64];
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  longlong lStack_4f0;
  longlong lStack_4e8;
  undefined1 uStack_4e0;
  undefined1 auStack_4d8 [32];
  undefined2 uStack_4b8;
  undefined1 uStack_4b6;
  undefined8 uStack_4b4;
  
  auStack_4d8 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
  uStack_4b8 = 0;
  uStack_4b6 = 0;
  uStack_4b4 = 0x20;
  lVar3 = (param_2 & 0xffffffff) * 0x40;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + lVar3);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = *(longlong *)(param_1 + 0x28) + lVar3;
    lStack_4f0 = param_1 + 0x2b0;
    uStack_4f8 = *(undefined8 *)(param_1 + 0x340);
    uStack_4e0 = 0;
    lStack_4e8 = lVar3;
    func_0x000140067850(&uStack_4f8,auStack_4d8);
    uStack_508 = *(undefined8 *)(param_1 + 0x298);
    uStack_500 = *(undefined8 *)(param_1 + 0x2a0);
    FUN_144eae470(plVar1,&uStack_508,auStack_4d8,&uStack_4f8);
    uStack_518 = *(undefined8 *)(param_1 + 0x298);
    uStack_510 = *(undefined8 *)(param_1 + 0x2a0);
    (**(code **)(*plVar1 + 0x28))(plVar1,&uStack_518,&uStack_4f8);
    uStack_528 = *(undefined8 *)(param_1 + 0x298);
    uStack_520 = *(undefined8 *)(param_1 + 0x2a0);
    uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,&uStack_528,&uStack_4f8);
    *(undefined4 *)(lVar3 + 0x1c) = uVar2;
  }
  return;
}

