// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006e840  size: 52 bytes
// Name:    FUN_14006e840
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400746e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14006e840(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uStack_c;
  
  cVar1 = FUN_1400746e0(param_1,param_3,&uStack_c);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_2 + 4) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 4) = uStack_c;
  }
  *(bool *)param_2 = cVar1 != '\0';
  return;
}

