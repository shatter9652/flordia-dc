// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140186f10  size: 154 bytes
// Name:    FUN_140186f10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1412643b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140186f10(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auVar6 [64];
  
  if (param_2 < param_3 + param_2) {
    auVar6 = ZEXT1264(ZEXT812(0));
    uVar3 = param_2;
    uVar4 = param_3;
    do {
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar3 * 8) + 0x38);
      lVar1 = func_0x0001406febe0(lVar2);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x90) != 0)) {
        FUN_1412643b0(param_1,lVar2 + 0x70);
        *(undefined1 (*) [16])(lVar1 + 0x90) = auVar6._0_16_;
      }
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_3 != 0) {
    uVar3 = 0;
    uVar4 = 1;
    do {
      lVar2 = *(longlong *)(uVar3 * 8 + *(longlong *)(param_1 + 0x10) + param_2 * 8);
      if (*(longlong *)(lVar2 + 0x28) != 0) {
        func_0x00014503e5c0();
      }
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(undefined2 *)(lVar2 + 0x12) = 0;
      bVar5 = uVar4 < param_3;
      uVar3 = uVar4;
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (bVar5);
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

