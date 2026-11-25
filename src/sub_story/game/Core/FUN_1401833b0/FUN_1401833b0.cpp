// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401833b0  size: 105 bytes
// Name:    FUN_1401833b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14503e0d0, FUN_14503e140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401833b0(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong *plStack_48;
  undefined8 uStack_40;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    uStack_40 = 0x1401833ce;
    lVar4 = FUN_14503e0d0();
    uStack_40 = 0x1401833dc;
    lVar4 = FUN_14503e140(lVar4 + 0x40,2);
    if (lVar4 != 0) {
      param_3 = param_3 | 0x80;
    }
  }
  param_3 = *(ushort *)(param_1 + 0x4a) & 0xff7f | param_3;
  if (param_3 == *(ushort *)(param_1 + 0x4a)) {
    return;
  }
  *(short *)(param_1 + 0x4a) = (short)param_3;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    func_0x00014503e5b0();
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    FUN_140181f60(uVar3,param_1 + 0x70);
    func_0x00014503e5c0(uVar3);
    if (*(longlong *)(param_1 + 0x98) != 0) {
      func_0x00014503e5c0();
    }
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined2 *)(param_1 + 0x82) = 0;
  lVar4 = param_1;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
  }
  lVar4 = FUN_14503e0d0(*(undefined8 *)(lVar4 + 0x28));
  uVar5 = *(undefined4 *)(lVar4 + 0x98);
  uVar1 = *(undefined2 *)(param_1 + 0x4a);
  uVar2 = *(undefined4 *)(param_1 + 0xd4);
  lVar4 = param_1;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
  }
  lVar4 = FUN_14503e0d0(*(undefined8 *)(lVar4 + 0x28));
  FUN_140182d90(&plStack_48,param_2,*(undefined8 *)(param_1 + 0x30),*(undefined2 *)(param_1 + 0x4a),
                *(undefined8 *)(lVar4 + 0x90),uVar2,uVar1,param_1 + 200,uVar5);
  (**(code **)(*plStack_48 + 8))(plStack_48,uStack_40);
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))
            (*(longlong **)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90));
  *(longlong **)(param_1 + 0x88) = plStack_48;
  *(undefined8 *)(param_1 + 0x90) = uStack_40;
  (**(code **)(*plStack_48 + 0x10))();
  *(bool *)(param_1 + 0xd0) = *(int *)(*(longlong *)(param_1 + 0x88) + 8) == 2;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1402b8500();
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if ((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    FUN_145183560(*(longlong *)(param_1 + 0x20),*(longlong *)(param_1 + 0x30),0x1000001);
  }
  return;
}

