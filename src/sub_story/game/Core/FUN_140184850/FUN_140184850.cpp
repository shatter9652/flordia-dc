// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140184850  size: 240 bytes
// Name:    FUN_140184850
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140183190, FUN_140182b60, FUN_14503e0d0, FUN_140183ae0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140184850(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar7;
  
  FUN_140183ae0();
  lVar2 = *(longlong *)(param_3 + 0x90);
  iVar3 = (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x48))(lVar2 + 0x10);
  lVar5 = *(longlong *)(param_1 + 0x78);
  if (lVar5 == param_1 + 0x60) {
    if (iVar3 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x10);
      iVar6 = 0;
      do {
        uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
        uVar1 = *(ushort *)(param_1 + 0x4a);
        lVar4 = FUN_14503e0d0(*(undefined8 *)(param_1 + 0x28));
        in_stack_ffffffffffffffa8 = CONCAT44(uVar7,(uVar1 & 0xc) + 1);
        lVar4 = FUN_140182b60(param_2,param_1,lVar2,iVar6,in_stack_ffffffffffffffa8,0,
                              *(undefined4 *)(lVar4 + 0x98));
        if (lVar4 != 0) {
          in_stack_ffffffffffffffa8 = 0;
          FUN_140183190(lVar4,param_2,param_1,lVar5,0,(short)param_4);
          lVar5 = lVar4;
        }
        iVar6 = iVar6 + 1;
      } while (iVar3 != iVar6);
    }
  }
  else {
    do {
      func_0x000140186160(lVar5,*(undefined8 *)(param_1 + 0x20),param_4);
      lVar5 = *(longlong *)(lVar5 + 0x18);
    } while (param_1 + 0x60 != lVar5);
  }
  return;
}

