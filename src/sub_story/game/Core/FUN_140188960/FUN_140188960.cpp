// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140188960  size: 58 bytes
// Name:    FUN_140188960
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140188960(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  byte bVar2;
  
  bVar2 = func_0x000144df3e80();
  plVar1 = *(longlong **)(param_1 + 0x20 + (ulonglong)bVar2 * 8);
  (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  return param_2;
}

