// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018e850  size: 788 bytes
// Name:    FUN_14018e850
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e66270, FUN_1452b3070, FUN_14528e7f0, FUN_1404a72c0, FUN_1409519a0, FUN_1451e3ee0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14018e850(longlong param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 in_register_00001244 [12];
  undefined1 auVar6 [16];
  undefined8 auStack_3b8 [111];
  undefined1 auStack_3e [18];
  undefined4 uStack_2c;
  undefined1 uStack_28;
  byte bStack_22;
  
  uVar1 = _DAT_14abbef40;
  lVar4 = func_0x000144da3240(*(undefined8 *)(param_1 + 0x40));
  cVar2 = FUN_14528e7f0(*(undefined4 *)(lVar4 + 0x9c));
  if ((cVar2 == '\0') && (uVar1 < *(int *)(param_1 + 0x630) + 500U)) {
    lVar4 = func_0x000144da31b0(param_1 + 0x1a8);
    if (lVar4 == 0) {
      iVar3 = FUN_144e66270(*(undefined4 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) + 0xbc));
      if ((iVar3 != -0x1c7030ea) && (iVar3 != 0)) {
        FUN_1452b3070(auStack_3b8);
        uStack_28 = 0;
        bStack_22 = bStack_22 | 0x80;
        uStack_2c = FUN_1451e3ee0(0x2602141);
        FUN_1404a72c0(param_1,*(undefined8 *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) + 0xbc),
                      param_1 + 0x1a8,auStack_3b8,1);
        func_0x000144de1380(auStack_3e);
      }
    }
  }
  else {
    auStack_3b8[0] = *(undefined8 *)(param_1 + 0x1a8);
    lVar4 = func_0x000144da31b0();
    if (lVar4 != 0) {
      FUN_1409519a0(lVar4,1,0x7585d45d);
    }
  }
  lVar4 = param_1 + 0x1a8;
  plVar5 = (longlong *)func_0x000144da31b0(lVar4);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5,0xe120ddf,*(undefined4 *)(param_1 + 0x5e0));
    plVar5 = (longlong *)func_0x000144da31b0(lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5,0x5daee086,*(undefined4 *)(param_1 + 0x5cc));
    plVar5 = (longlong *)func_0x000144da31b0(lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5,0xea2108ad,*(undefined4 *)(param_1 + 0x624));
    plVar5 = (longlong *)func_0x000144da31b0(lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5,0xcb028022,*(undefined4 *)(param_1 + 0x5e4));
    plVar5 = (longlong *)func_0x000144da31b0(lVar4);
    auVar6._0_4_ = (float)*(int *)(param_1 + 0x5d8);
    auVar6._4_12_ = in_register_00001244;
    (**(code **)(*plVar5 + 0x18))(plVar5,0x3200270e,auVar6._0_8_);
    plVar5 = (longlong *)func_0x000144da31b0(lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5,0x4e0ba2df,*(undefined4 *)(param_1 + 0x5dc));
    plVar5 = (longlong *)func_0x000144da31b0(lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5,0xde29e2d6,*(undefined4 *)(param_1 + 0xaec));
    plVar5 = (longlong *)func_0x000144da31b0(lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5,0x74c60248,*(undefined4 *)(param_1 + 0xadc));
    plVar5 = (longlong *)func_0x000144da31b0(lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5,0x8deb6f82,*(undefined4 *)(param_1 + 0xae4));
    plVar5 = (longlong *)func_0x000144da31b0(lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5,0x38951bf4,*(undefined4 *)(param_1 + 0xae0));
    plVar5 = (longlong *)func_0x000144da31b0(lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5,0x10a48525,*(undefined4 *)(param_1 + 0xae8));
    plVar5 = (longlong *)func_0x000144da31b0(lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5,0x4599cbae,*(undefined4 *)(param_1 + 0xaf0));
    plVar5 = (longlong *)func_0x000144da31b0(lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5,0x509e2325,*(undefined4 *)(param_1 + 0xaf4));
    plVar5 = (longlong *)func_0x000144da31b0(lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5,0x38f36a3d,*(undefined4 *)(param_1 + 0x5e0));
    plVar5 = (longlong *)func_0x000144da31b0(lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5,0xd6bb74f6,*(undefined4 *)(param_1 + 0x5cc));
    plVar5 = (longlong *)func_0x000144da31b0(lVar4);
    (**(code **)(*plVar5 + 0x18))(plVar5,0x5785ce8e,*(undefined4 *)(param_1 + 0x624));
  }
  return;
}

