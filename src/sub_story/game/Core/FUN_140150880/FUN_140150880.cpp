// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140150880  size: 29 bytes
// Name:    FUN_140150880
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140150880(ulonglong param_1,byte param_2)

{
  ulonglong uVar1;
  
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = func_0x000144ebbeb0(param_1 & 0xfffffffffffffff0);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1;
}

