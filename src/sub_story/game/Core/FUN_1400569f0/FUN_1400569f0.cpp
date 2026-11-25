// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400569f0  size: 41 bytes
// Name:    FUN_1400569f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400569f0(void *param_1,int param_2,void *param_3)

{
  do {
    WaitForSingleObject(param_1,(void *)0xffffffff,param_3);
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

