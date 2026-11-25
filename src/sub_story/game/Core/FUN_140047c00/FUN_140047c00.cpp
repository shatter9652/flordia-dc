// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140047c00  size: 59 bytes
// Name:    FUN_140047c00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140047c00(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  char cVar2;
  undefined4 uStack_c;
  
  lVar1 = *(longlong *)(param_2 + 0x50);
  if (lVar1 != 0) {
    cVar2 = func_0x000144dc9ca0(param_1,param_3,param_5,&uStack_c);
    if (cVar2 != '\0') {
      func_0x000140047cc0(lVar1,uStack_c);
    }
  }
  return;
}

