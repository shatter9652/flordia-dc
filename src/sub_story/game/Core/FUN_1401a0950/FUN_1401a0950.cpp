// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a0950  size: 154 bytes
// Name:    FUN_1401a0950
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145064d90, FUN_145064e60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401a0950(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_428 [1024];
  
  uVar3 = 0;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 200) != 0)) {
    lVar1 = **(longlong **)(*(longlong *)(*(longlong *)(param_1 + 200) + 0x20) + 0xd8);
    uVar2 = FUN_145064d90(param_1);
    FUN_145064e60(auStack_428,&UNK_1467797af,*(undefined4 *)(lVar1 + (ulonglong)param_2 * 0x70),
                  param_2,*(undefined4 *)
                           (*(longlong *)(*(longlong *)(param_1 + 200) + 0x118) + 0x2c +
                           (ulonglong)param_2 * 0x50),uVar2);
    uVar3 = func_0x000144fc2180(0,auStack_428);
  }
  return uVar3;
}

