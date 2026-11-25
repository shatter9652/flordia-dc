// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018f340  size: 29 bytes
// Name:    FUN_14018f340
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_14018f340(longlong param_1)

{
  int iVar1;
  float fVar2;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    iVar1 = 0;
  }
  else {
    fVar2 = (float)func_0x000144d9ff70();
    iVar1 = (int)fVar2;
  }
  return iVar1;
}

