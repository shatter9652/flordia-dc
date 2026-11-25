// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140185e60  size: 338 bytes
// Name:    FUN_140185e60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140185e60(longlong param_1,undefined4 *param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_38 [8];
  longlong lStack_30;
  undefined1 auStack_20 [16];
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + 0xc + (param_3 & 0xffffffff) * 0x14);
  if (iVar1 == 0) {
    lStack_30 = 0;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x10);
    (**(code **)(*plVar2 + 0x20))
              (plVar2,*(undefined4 *)
                       (*(longlong *)(param_1 + 0x40) +
                       (ulonglong)
                       (uint)(param_4 +
                             *(int *)(*(longlong *)(param_1 + 0x28) + 4 +
                                     (param_3 & 0xffffffff) * 0x14)) * 4),auStack_38);
    *param_2 = *(undefined4 *)(lStack_30 + 0x20);
    param_2[1] = *(undefined4 *)(lStack_30 + 0x24);
    param_2[2] = *(undefined4 *)(lStack_30 + 0x28);
    param_2[3] = *(undefined4 *)(lStack_30 + 0x2c);
    param_2[4] = *(undefined4 *)(lStack_30 + 0x30);
    param_2[5] = *(undefined4 *)(lStack_30 + 0x34);
    param_2[6] = *(undefined4 *)(lStack_30 + 0x38);
    param_2[7] = *(undefined4 *)(lStack_30 + 0x3c);
    lVar3 = lStack_30;
  }
  else {
    auStack_20._0_12_ = ZEXT812(0);
    auStack_20._12_4_ = 0;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x10);
    (**(code **)(*plVar2 + 0x28))(plVar2,iVar1,auStack_38);
    lVar3 = auStack_20._0_8_;
    if (auStack_20._0_8_ == 0) {
      func_0x00014538eaf0(param_2);
    }
    else {
      *param_2 = *(undefined4 *)(auStack_20._0_8_ + 0x20);
      param_2[1] = *(undefined4 *)(auStack_20._0_8_ + 0x24);
      param_2[2] = *(undefined4 *)(auStack_20._0_8_ + 0x28);
      param_2[3] = *(undefined4 *)(auStack_20._0_8_ + 0x2c);
      param_2[4] = *(undefined4 *)(auStack_20._0_8_ + 0x30);
      param_2[5] = *(undefined4 *)(auStack_20._0_8_ + 0x34);
      param_2[6] = *(undefined4 *)(auStack_20._0_8_ + 0x38);
      param_2[7] = *(undefined4 *)(auStack_20._0_8_ + 0x3c);
    }
    if (auStack_20._8_8_ != 0) {
      func_0x00014503e5c0();
      lVar3 = auStack_20._0_8_;
    }
    if (lVar3 == 0) {
      return;
    }
  }
  func_0x00014503e5c0(lVar3);
  return;
}

