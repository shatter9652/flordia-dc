// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140180a00  size: 35 bytes
// Name:    FUN_140180a00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


byte FUN_140180a00(ulonglong param_1)

{
  longlong lVar1;
  
  lVar1 = func_0x000144db6340(*(undefined4 *)((param_1 & 0xfffffffffffffff0) + 0x9c));
  return (*(byte *)(lVar1 + 0x6b2) & 0x10) >> 4;
}

