// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013d790  size: 139 bytes
// Name:    FUN_14013d790
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1410975e0, FUN_14013d820, FUN_14013d890, FUN_14060d1c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14013d790(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [112];
  undefined1 auStack_58 [64];
  
  if ((*(uint *)(param_1 + 0x18) & 8) == 0) {
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 8;
    if (param_1[0xd] == 0) {
      FUN_14060d1c0(auStack_58);
      FUN_1410975e0(auStack_c8,auStack_58);
      uVar2 = *param_1;
    }
    else {
      FUN_14013d820(auStack_c8,param_1[0xd],*param_1);
      uVar2 = *param_1;
    }
    uVar1 = FUN_14013d890(uVar2,auStack_c8);
    *(undefined1 *)((longlong)param_1 + 0xa9) = uVar1;
  }
  return;
}

