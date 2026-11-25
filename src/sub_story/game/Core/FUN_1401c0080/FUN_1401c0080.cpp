// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401c0080  size: 73 bytes
// Name:    FUN_1401c0080
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145082fa0, FUN_1401c0190
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 FUN_1401c0080(undefined4 param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  iVar1 = FUN_145082fa0();
  uVar4 = 0;
  if (iVar1 != 0) {
    do {
      lVar3 = FUN_1401c0190(param_1,uVar4);
      if (lVar3 == param_2) {
        return 1;
      }
      uVar4 = uVar4 + 1;
      uVar2 = FUN_145082fa0(param_1);
    } while (uVar4 < uVar2);
  }
  return 0;
}

