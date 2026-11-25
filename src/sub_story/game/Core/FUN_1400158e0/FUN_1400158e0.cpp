// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400158e0  size: 116 bytes
// Name:    FUN_1400158e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd7160, FUN_141716090, FUN_14501d9c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400158e0(longlong param_1,longlong param_2,char param_3,undefined1 param_4)

{
  char cVar1;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  
  uStack_19 = 0;
  uStack_1a = 0;
  if ((param_3 == '\0') &&
     (cVar1 = FUN_144dd7160(param_1,param_2,&uStack_19,&uStack_1a), cVar1 == '\0')) {
    return;
  }
  if (param_2 != 0) {
    FUN_14501d9c0(param_1,param_2);
  }
  if (*(int *)(param_1 + 0xc) != 0x100) {
    FUN_141716090(param_1,param_2,uStack_19,uStack_1a,param_4);
  }
  return;
}

