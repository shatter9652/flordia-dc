// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140182fe0  size: 234 bytes
// Name:    FUN_140182fe0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401839c0, FUN_1401830d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140182fe0(longlong param_1,undefined8 *param_2,uint param_3,undefined4 param_4,uint param_5
                  )

{
  undefined1 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 unaff_RBP;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar3 = FUN_1401830d0(param_1 + -0x10,param_3,param_4,0);
  if (lVar3 == 0) {
    func_0x000140182f60(&uStack_58,3);
    *param_2 = uStack_58;
    param_2[1] = uStack_50;
    param_2[2] = uStack_48;
    param_2[3] = uStack_40;
  }
  else if (*(longlong *)(lVar3 + 0x18) == 0) {
    uVar1 = *(undefined1 *)(lVar3 + 0x46);
    uVar2 = *(undefined2 *)(lVar3 + 0x44);
    uVar4 = (**(code **)(**(longlong **)(lVar3 + 0x10) + 0x48))();
    func_0x000140183f90(&uStack_58,uVar4,uVar2,
                        CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff);
    *param_2 = uStack_58;
    param_2[1] = uStack_50;
    param_2[2] = uStack_48;
    param_2[3] = uStack_40;
    if (((param_5 & 8) != 0) &&
       (*(int *)(*(longlong *)(param_1 + 0x18) + 0x10 + (ulonglong)param_3 * 0x14) != 0)) {
      *(undefined4 *)((longlong)param_2 + 4) = 0xb;
      param_2[2] = 0x149e30218;
    }
  }
  else {
    FUN_1401839c0(&uStack_58);
    *param_2 = uStack_58;
    param_2[1] = uStack_50;
    param_2[2] = uStack_48;
    param_2[3] = uStack_40;
    *(undefined1 *)((longlong)param_2 + 0x1a) = 1;
  }
  return;
}

