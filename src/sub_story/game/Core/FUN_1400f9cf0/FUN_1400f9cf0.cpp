// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f9cf0  size: 33 bytes
// Name:    FUN_1400f9cf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1400f9cf0(longlong param_1,longlong param_2)

{
  short sVar1;
  
  sVar1 = func_0x000144f942c0(*(undefined2 *)(param_1 + 0x10),
                              *(undefined8 *)(*(longlong *)(param_2 + 8) + 8));
  return sVar1 == 3;
}

