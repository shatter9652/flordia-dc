// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401506a0  size: 86 bytes
// Name:    FUN_1401506a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401506a0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined2 *)(param_1 + 0x9a) = 3;
  uVar1 = *(uint *)(param_1 + 0x34);
  uVar2 = uVar1 & 0xfffeffff;
  *(uint *)(param_1 + 0x34) = uVar2;
  uVar2 = uVar2 | 0x100;
  if ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x99) & 0x10) == 0) {
    uVar2 = uVar1 & 0xfffefeff;
  }
  *(uint *)(param_1 + 0x34) = uVar2;
  func_0x000145149ba0(param_1 + 0x100,
                      CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x20) >> 8),1));
  *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) & 0xfd;
  return;
}

