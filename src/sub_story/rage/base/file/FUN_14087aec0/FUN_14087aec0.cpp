// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14087aec0  size: 126 bytes
// Name:    FUN_14087aec0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14087af70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14087aec0(int *param_1,int param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (param_3 == 0) {
    *param_1 = 2;
    *(undefined1 (*) [32])(param_1 + 6) = ZEXT1232(ZEXT812(0));
    *(undefined1 (*) [32])(param_1 + 2) = ZEXT1232(ZEXT812(0));
  }
  else {
    *param_1 = param_2;
    FUN_14087af70(param_1,param_3);
    iVar1 = *param_1;
    if (iVar1 != 2) {
      if (iVar1 == 0) {
        param_4 = *(longlong *)(param_1 + 2);
        uVar2 = *(undefined2 *)(param_4 + 0x22);
        param_4 = (ulonglong)*(uint *)(param_4 + 8) + param_4;
      }
      else {
        if (iVar1 != 1) {
          return;
        }
        uVar2 = *(undefined2 *)(*(longlong *)(param_1 + 2) + 0x22);
      }
      func_0x00014087b0f0(&uStack_28,param_4,uVar2,
                          *(undefined4 *)(*(longlong *)(param_1 + 2) + 0x24),
                          *(undefined1 *)(*(longlong *)(param_1 + 2) + 0x2c));
      *(undefined8 *)(param_1 + 0xe) = uStack_28;
      *(undefined8 *)(param_1 + 0x10) = uStack_20;
      return;
    }
  }
  auVar3._0_12_ = ZEXT812(0);
  auVar3._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0xe) = auVar3;
  return;
}

