// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019a5e0  size: 94 bytes
// Name:    FUN_14019a5e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140644920, FUN_145054cd0, FUN_140644b10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019a5e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [8];
  
  uVar2 = func_0x000144eac4f0(*(undefined1 *)(param_1 + 0xf0));
  FUN_140644b10(auStack_10,uVar2);
  FUN_145054cd0(param_1);
  puVar1 = *(undefined8 **)(param_1 + 0xe8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  FUN_140644920(auStack_10);
  return;
}

