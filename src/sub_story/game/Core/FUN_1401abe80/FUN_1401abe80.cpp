// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401abe80  size: 81 bytes
// Name:    FUN_1401abe80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140c1b710, FUN_140c1bb10, FUN_140c83120, FUN_1437eb550
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401abe80(undefined8 param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  int iStack_1c;
  
  if (param_3 != 0) {
    FUN_140c1b710(&iStack_1c);
    if (iStack_1c != 0) {
      lVar1 = FUN_140c83120(param_1,iStack_1c);
      if (lVar1 != 0) {
        FUN_140c1bb10(lVar1,param_3);
      }
      FUN_1437eb550(param_1,iStack_1c);
    }
  }
  return;
}

