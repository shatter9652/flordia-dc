// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401af4b0  size: 37 bytes
// Name:    FUN_1401af4b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401af4b0(void)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)func_0x000144dee960();
  cVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
  if (DAT_149848c01 != cVar1) {
    DAT_149848c01 = cVar1;
  }
  return;
}

