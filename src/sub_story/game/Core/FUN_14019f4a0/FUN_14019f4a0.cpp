// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019f4a0  size: 253 bytes
// Name:    FUN_14019f4a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145063f40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019f4a0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_38 [32];
  
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x00014019f5a0(auStack_38);
  uVar1 = *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 4) = uVar1 + 1;
  FUN_145063f40(param_1 + 8 + (ulonglong)uVar1 * 0x20,auStack_38);
  func_0x00014019f5a0(auStack_38,param_2);
  uVar1 = *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 4) = uVar1 + 1;
  FUN_145063f40(param_1 + 8 + (ulonglong)uVar1 * 0x20,auStack_38);
  func_0x00014019f5a0(auStack_38,param_2);
  uVar1 = *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 4) = uVar1 + 1;
  FUN_145063f40(param_1 + 8 + (ulonglong)uVar1 * 0x20,auStack_38);
  func_0x00014019f5a0(auStack_38,param_2);
  uVar1 = *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 4) = uVar1 + 1;
  FUN_145063f40(param_1 + 8 + (ulonglong)uVar1 * 0x20,auStack_38);
  func_0x00014019f5a0(auStack_38,param_2);
  uVar1 = *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 4) = uVar1 + 1;
  FUN_145063f40(param_1 + 8 + (ulonglong)uVar1 * 0x20,auStack_38);
  func_0x00014019f5a0(auStack_38,param_2);
  uVar1 = *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 4) = uVar1 + 1;
  FUN_145063f40(param_1 + 8 + (ulonglong)uVar1 * 0x20,auStack_38);
  return;
}

