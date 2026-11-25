// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400152e0  size: 71 bytes
// Name:    FUN_1400152e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400152e0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x50);
  if (lVar1 != 0) {
    cVar2 = func_0x000140015380(param_1,param_3,param_5);
    if (cVar2 != '\0') {
      *(undefined8 *)(lVar1 + 0xb8) = 0xffffffff00000000;
    }
  }
  return;
}

