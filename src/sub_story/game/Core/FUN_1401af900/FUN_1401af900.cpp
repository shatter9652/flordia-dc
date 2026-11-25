// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401af900  size: 33 bytes
// Name:    FUN_1401af900
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1401af900(void)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(_DAT_14aad3ce0 + 8) + 0x48))();
  return *(int *)(lVar1 + 0x270) * 0x32;
}

