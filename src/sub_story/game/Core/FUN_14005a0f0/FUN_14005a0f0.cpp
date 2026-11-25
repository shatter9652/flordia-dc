// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005a0f0  size: 34 bytes
// Name:    FUN_14005a0f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_14005a0f0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = (**(code **)(*param_1 + 200))();
  plVar2 = (longlong *)0x0;
  if (cVar1 != '\0') {
    plVar2 = param_1;
  }
  return plVar2;
}

