// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140113f10  size: 56 bytes
// Name:    FUN_140113f10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140113f10(ulonglong param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  lVar1 = func_0x000144fc04a0(*(undefined4 *)((param_1 & 0xfffffffffffffff0) + 0x9c));
  if (lVar1 != 0) {
    *param_2 = *(undefined4 *)(lVar1 + 0x14);
    return;
  }
  *param_2 = 0;
  return;
}

