// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a2cc0  size: 63 bytes
// Name:    FUN_1401a2cc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 FUN_1401a2cc0(uint param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_1 != 0) {
    uVar2 = (ulonglong)param_1;
    do {
      uVar2 = uVar2 - 1;
      lVar1 = func_0x000144da31b0(param_2);
      if (lVar1 != 0) {
        return 1;
      }
      param_2 = param_2 + 8;
    } while (uVar2 != 0);
  }
  return 0;
}

