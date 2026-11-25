// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006d1b0  size: 73 bytes
// Name:    FUN_14006d1b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e523e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14006d1b0(ulonglong param_1,int param_2)

{
  undefined1 auStack_18 [8];
  
  FUN_144e523e0(auStack_18,(uint)*(ushort *)((param_1 & 0xfffffffffffffff0) + 0xf8) + _DAT_14abbef40
               );
  return (longlong)(ulonglong)(auStack_18._4_4_ + auStack_18._0_4_ * 0x5cdcfaa7 & 0x7fffffff) %
         (longlong)(param_2 + 1) & 0xffffffff;
}

