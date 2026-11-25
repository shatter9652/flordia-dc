// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140016410  size: 126 bytes
// Name:    FUN_140016410
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint FUN_140016410(longlong *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  if (param_3 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 1) = uVar1 - param_3;
  lVar2 = *param_1;
  if (*(int *)(param_1[5] + 0x2c) == 2) {
    uVar3 = func_0x0001407e0400(*(undefined4 *)((longlong)param_1 + 0x4c),lVar2,param_3);
  }
  else {
    if (*(int *)(param_1[5] + 0x2c) != 1) goto LAB_140016448;
    uVar3 = func_0x0001454d0400(*(undefined4 *)((longlong)param_1 + 0x4c),lVar2,param_3);
  }
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
LAB_140016448:
  func_0x000145f40560(param_2,lVar2,(ulonglong)param_3);
  *param_1 = *param_1 + (ulonglong)param_3;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + param_3;
  return param_3;
}

