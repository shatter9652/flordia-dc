// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400060f0  size: 59 bytes
// Name:    FUN_1400060f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140b259a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400060f0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  char cVar2;
  undefined8 uStack_10;
  
  lVar1 = *(longlong *)(param_2 + 0x50);
  if (lVar1 != 0) {
    cVar2 = func_0x0001402a3650(param_1,param_3,param_5,&uStack_10);
    if (cVar2 != '\0') {
      FUN_140b259a0(lVar1,uStack_10);
    }
  }
  return;
}

