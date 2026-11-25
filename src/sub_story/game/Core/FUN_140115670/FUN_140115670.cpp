// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140115670  size: 96 bytes
// Name:    FUN_140115670
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1408c6d60, FUN_1401156d0, FUN_140115720
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140115670(undefined8 param_1)

{
  char cVar1;
  bool bStack_19;
  int iStack_14;
  
  bStack_19 = false;
  cVar1 = FUN_1408c6d60();
  if (cVar1 == '\0') {
    iStack_14 = -1;
    FUN_1401156d0(_DAT_14abcd240,param_1,&iStack_14);
    FUN_140115720(param_1,0);
    bStack_19 = iStack_14 == 1;
  }
  return bStack_19;
}

