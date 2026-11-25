// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a1530  size: 249 bytes
// Name:    FUN_1401a1530
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1448dfd20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401a1530(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 uStack_21;
  
  *(undefined1 *)(param_1 + 0xa9) = 0;
  if (param_2 != 0) {
    uStack_21 = 0;
    lVar1 = FUN_1448dfd20(param_2,param_3);
    *(longlong *)(param_1 + 0x80) = lVar1;
    if (lVar1 != 0) {
      *(undefined1 *)(param_1 + 0xa9) = 1;
    }
    uStack_21 = 1;
    lVar1 = FUN_1448dfd20(param_2,param_3,&uStack_21,param_4);
    *(longlong *)(param_1 + 0x88) = lVar1;
    if (lVar1 != 0) {
      *(undefined1 *)(param_1 + 0xa9) = 1;
    }
    uStack_21 = 2;
    lVar1 = FUN_1448dfd20(param_2,param_3,&uStack_21,param_4);
    *(longlong *)(param_1 + 0x90) = lVar1;
    if (lVar1 != 0) {
      *(undefined1 *)(param_1 + 0xa9) = 1;
    }
    uStack_21 = 3;
    lVar1 = FUN_1448dfd20(param_2,param_3,&uStack_21,param_4);
    *(longlong *)(param_1 + 0x98) = lVar1;
    if (lVar1 != 0) {
      *(undefined1 *)(param_1 + 0xa9) = 1;
    }
    uStack_21 = 4;
    lVar1 = FUN_1448dfd20(param_2,param_3,&uStack_21,param_4);
    *(longlong *)(param_1 + 0xa0) = lVar1;
    if (lVar1 != 0) {
      *(undefined1 *)(param_1 + 0xa9) = 1;
    }
  }
  return;
}

