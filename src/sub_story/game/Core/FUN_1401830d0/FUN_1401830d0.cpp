// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401830d0  size: 187 bytes
// Name:    FUN_1401830d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401830d0(longlong param_1,uint param_2,int param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_40 [8];
  longlong lStack_38;
  undefined1 auStack_28 [16];
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + 0xc + (ulonglong)param_2 * 0x14);
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x40) +
                    (ulonglong)
                    (uint)(param_3 +
                          *(int *)(*(longlong *)(param_1 + 0x28) + 4 + (ulonglong)param_2 * 0x14)) *
                    4);
    if (iVar1 == 0) {
      return 0;
    }
    lStack_38 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))
              (*(longlong **)(param_1 + 0x58),iVar1,auStack_40);
    lVar2 = lStack_38;
    lVar3 = lStack_38;
    if (param_4 != (int *)0x0) {
      *param_4 = iVar1;
    }
  }
  else {
    auStack_28._0_12_ = ZEXT812(0);
    auStack_28._12_4_ = 0;
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))
              (*(longlong **)(param_1 + 0x58),iVar1,auStack_40);
    lVar3 = auStack_28._0_8_;
    lVar2 = auStack_28._0_8_;
    if (auStack_28._8_8_ != 0) {
      func_0x00014503e5c0(auStack_28._8_8_);
      lVar2 = auStack_28._0_8_;
    }
  }
  if (lVar2 != 0) {
    func_0x00014503e5c0(lVar2);
  }
  return lVar3;
}

