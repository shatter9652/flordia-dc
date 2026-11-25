// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401645b0  size: 68 bytes
// Name:    FUN_1401645b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_1401645b0(longlong *param_1)

{
  char cVar1;
  
  while( true ) {
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    if ((int)param_1[0xd] == 0) {
      return param_1;
    }
    if (param_1[4] == 0) {
      return param_1;
    }
    cVar1 = (**(code **)(*param_1 + 0x468))(param_1);
    if (cVar1 != '\0') break;
    if ((int)param_1[0xd] == 0) {
      return (longlong *)0x0;
    }
    param_1 = (longlong *)param_1[4];
  }
  return param_1;
}

