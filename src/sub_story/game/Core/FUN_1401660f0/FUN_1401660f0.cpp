// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401660f0  size: 37 bytes
// Name:    FUN_1401660f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1401660f0(longlong *param_1,char param_2)

{
  ulonglong uVar1;
  
  if ((param_2 < '\0') && ((*(byte *)((longlong)param_1 + 0x1b9) & 0x10) != 0)) {
    uVar1 = (**(code **)(*param_1 + 0x548))();
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

