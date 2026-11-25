// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015a440  size: 42 bytes
// Name:    FUN_14015a440
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_14015a440(longlong param_1)

{
  longlong lVar1;
  
  if ((param_1 != 0) && (lVar1 = func_0x000144fff0e0(*(undefined4 *)(param_1 + 0x9c)), lVar1 != 0))
  {
    return *(short *)(lVar1 + 0x12) != -1;
  }
  return false;
}

