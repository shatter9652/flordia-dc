// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400010f0  size: 68 bytes
// Name:    FUN_1400010f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140001140, FUN_140001180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400010f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  FUN_140001140();
  FUN_140001180(param_1);
  lVar2 = func_0x00014073f790(*(undefined8 *)(param_1 + 0x18));
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x130);
    *(bool *)(param_1 + 0x197) = iVar1 != *(int *)(param_1 + 400);
    *(int *)(param_1 + 400) = iVar1;
  }
  return;
}

