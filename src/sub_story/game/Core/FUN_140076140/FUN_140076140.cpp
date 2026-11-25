// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140076140  size: 82 bytes
// Name:    FUN_140076140
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145034810, FUN_14017dc60, FUN_1450349c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140076140(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + (param_2 & 0xffff) * 8);
  if (lVar1 == param_3) {
    lVar1 = FUN_145034810(param_3);
    FUN_1450349c0(param_1,param_2 & 0xffffffff,lVar1,1,1);
    FUN_14017dc60(lVar1,0);
  }
  return lVar1;
}

