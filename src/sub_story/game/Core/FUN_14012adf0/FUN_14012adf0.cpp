// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012adf0  size: 55 bytes
// Name:    FUN_14012adf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_14012adf0(longlong param_1,uint param_2)

{
  uint uVar1;
  
  if ((*(int *)(param_1 + 0x1700) != 0) && (uVar1 = func_0x000144dc06c0(), param_2 < uVar1)) {
    return 0;
  }
  return param_1 + 0x11a0;
}

