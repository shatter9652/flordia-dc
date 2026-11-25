// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140114d70  size: 173 bytes
// Name:    FUN_140114d70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140301640, FUN_140301600, FUN_140114e40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140114d70(undefined4 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined2 *param_5)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  longlong lVar4;
  
  func_0x000140114e20(param_5);
  uVar1 = *(undefined4 *)(param_3 + 0x10);
  lVar4 = FUN_140301600(*param_1,*(undefined4 *)(param_2 + 0x9c));
  cVar2 = FUN_140301640(*(undefined8 *)(param_1 + 0x2c),*(undefined2 *)(param_1 + 0x2e),uVar1);
  if ((lVar4 != 0) && (cVar2 == '\0')) {
    cVar2 = func_0x0001450af3b0(lVar4,uVar1);
    if (cVar2 != '\0') {
      FUN_140114e40(lVar4,param_2,param_3,param_4,param_5);
      if (*(longlong **)(param_5 + 4) == (longlong *)0x0) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = (**(code **)(**(longlong **)(param_5 + 4) + 0x38))();
      }
      *param_5 = uVar3;
    }
  }
  return;
}

