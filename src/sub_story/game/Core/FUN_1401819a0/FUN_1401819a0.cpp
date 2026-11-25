// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401819a0  size: 161 bytes
// Name:    FUN_1401819a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14503e0d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401819a0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort uVar6;
  ushort uVar7;
  undefined4 uVar8;
  longlong *plStack_48;
  longlong lStack_40;
  
  if ((param_3 & 0x20) == 0) goto LAB_1401819b5;
  lVar3 = param_1[6];
  lVar4 = FUN_14503e0d0(param_1[5]);
  if (lVar3 == 0) {
    uVar6 = 4;
LAB_140181a20:
    uVar7 = *(ushort *)(lVar4 + 10) & 0xc;
    if ((*(ushort *)(lVar4 + 10) & 0xc) == 0) {
      uVar7 = uVar6;
    }
  }
  else {
    uVar7 = 0xc;
    uVar6 = *(ushort *)(lVar3 + 0x4a) & 0xc;
    if (uVar6 != 0xc) goto LAB_140181a20;
  }
  (**(code **)(*param_1 + 0x38))(param_1,param_2,uVar7);
  param_3 = param_3 & 0xffffffff;
LAB_1401819b5:
  if (((param_3 & 0x10) == 0) || (param_1[4] == 0)) {
    return;
  }
  func_0x00014503d720(param_1[4],param_1,1);
  plVar5 = param_1;
  if (param_1[5] == 0) {
    plVar5 = (longlong *)param_1[6];
  }
  lStack_40 = 0x1401812b3;
  lVar3 = FUN_14503e0d0(plVar5[5]);
  if (*(char *)(*(longlong *)(lVar3 + 0x90) + 0x80) == '\x01') {
    if (param_1[0x13] != 0) {
      func_0x00014503e5b0();
      lVar3 = param_1[0x13];
      FUN_140181f60(lVar3,param_1 + 0xe);
      func_0x00014503e5c0(lVar3);
      if (param_1[0x13] != 0) {
        func_0x00014503e5c0();
      }
    }
    param_1[0x13] = 0;
    *(undefined2 *)((longlong)param_1 + 0x82) = 0;
    plVar5 = param_1;
    if (param_1[5] == 0) {
      plVar5 = (longlong *)param_1[6];
    }
    lVar3 = FUN_14503e0d0(plVar5[5]);
    uVar8 = *(undefined4 *)(lVar3 + 0x98);
    uVar1 = *(undefined2 *)((longlong)param_1 + 0x4a);
    uVar2 = *(undefined4 *)((longlong)param_1 + 0xd4);
    plVar5 = param_1;
    if (param_1[5] == 0) {
      plVar5 = (longlong *)param_1[6];
    }
    lVar3 = FUN_14503e0d0(plVar5[5]);
    FUN_140182d90(&plStack_48,param_2,param_1[6],*(undefined2 *)((longlong)param_1 + 0x4a),
                  *(undefined8 *)(lVar3 + 0x90),uVar2,uVar1,param_1 + 0x19,uVar8);
    (**(code **)(*plStack_48 + 8))(plStack_48,lStack_40);
    (**(code **)(*(longlong *)param_1[0x11] + 0x10))((longlong *)param_1[0x11],param_1[0x12]);
    param_1[0x11] = (longlong)plStack_48;
    param_1[0x12] = lStack_40;
    (**(code **)(*plStack_48 + 0x10))();
    *(bool *)(param_1 + 0x1a) = *(int *)(param_1[0x11] + 8) == 2;
    if (param_1[0x18] != 0) {
      FUN_1402b8500();
    }
    param_1[0x18] = 0;
    if ((param_1[4] != 0) && (param_1[6] != 0)) {
      FUN_145183560(param_1[4],param_1[6],0x1000001);
    }
    return;
  }
  return;
}

