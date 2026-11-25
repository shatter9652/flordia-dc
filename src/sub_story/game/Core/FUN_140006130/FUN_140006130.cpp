// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140006130  size: 56 bytes
// Name:    FUN_140006130
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140006130(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_c [4];
  
  lVar1 = *(longlong *)(param_2 + 0x50);
  if (lVar1 != 0) {
    cVar2 = func_0x0001450b3ed0(param_1,param_3,param_5,auStack_c);
    if (cVar2 != '\0') {
      *(undefined1 *)(lVar1 + 0x9c) = auStack_c[0];
    }
  }
  return;
}

