// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bf7d0  size: 50 bytes
// Name:    FUN_1400bf7d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400bf7d0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    plVar1 = (longlong *)func_0x00014506cf60((int)param_1[4]);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = param_1;
    }
    lVar2 = *plVar1;
  }
  *param_2 = lVar2;
  return;
}

