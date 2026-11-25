// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006e910  size: 39 bytes
// Name:    FUN_14006e910
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14006e910(longlong param_1)

{
  byte in_AL;
  longlong lVar1;
  
  lVar1 = param_1;
  if (param_1 != 0) {
    in_AL = func_0x0001450261f0(param_1);
  }
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),param_1 != 0 & in_AL) & 0xffffffff;
}

