// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140186870  size: 51 bytes
// Name:    FUN_140186870
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140186d00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140186870(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  bool bVar4;
  
  FUN_140186d00(param_1 + 0x38,param_2 & 0xffffffff,param_3 & 0xffffffff);
  if (param_3 != 0) {
    uVar1 = 0;
    uVar3 = 1;
    do {
      lVar2 = *(longlong *)(uVar1 * 8 + *(longlong *)(param_1 + 0x10) + param_2 * 8);
      if (*(longlong *)(lVar2 + 0x28) != 0) {
        func_0x00014503e5c0();
      }
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(undefined2 *)(lVar2 + 0x12) = 0;
      bVar4 = uVar3 < param_3;
      uVar1 = uVar3;
      uVar3 = (ulonglong)((int)uVar3 + 1);
    } while (bVar4);
  }
  if (*(ulonglong *)(param_1 + 0x18) == param_3) {
    lVar2 = 0;
    if ((param_3 != 0) && (1 < *(ulonglong *)(param_1 + 0x20))) {
      if (*(longlong *)(param_1 + 0x10) != 0) {
        (**(code **)(*_DAT_14abcc310 + 0x60))();
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
      lVar2 = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
  }
  else {
    lVar2 = param_2 * 8 + *(longlong *)(param_1 + 0x10);
    func_0x000145f40570(lVar2,lVar2 + param_3 * 8,
                        ((*(ulonglong *)(param_1 + 0x18) - param_3) - param_2) * 8,param_4,unaff_RBX
                       );
    lVar2 = *(longlong *)(param_1 + 0x18) - param_3;
  }
  *(longlong *)(param_1 + 0x18) = lVar2;
  return;
}

