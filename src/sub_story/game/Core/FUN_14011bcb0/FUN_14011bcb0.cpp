// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011bcb0  size: 58 bytes
// Name:    FUN_14011bcb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14011bcf0, FUN_1406b19e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011bcb0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_108 [256];
  
  FUN_14011bcf0(param_1,auStack_108,0x100);
  uVar1 = func_0x000145f407f0(auStack_108);
  FUN_1406b19e0(auStack_108,uVar1,0);
  return;
}

