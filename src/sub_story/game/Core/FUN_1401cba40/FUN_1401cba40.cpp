// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cba40  size: 102 bytes
// Name:    FUN_1401cba40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1401cba40(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  uint *puVar2;
  
  lVar1 = func_0x0001401cbab0(*(undefined8 *)(_DAT_14ab5cdf8 + 0x860));
  if (lVar1 == 0) {
    if (param_2 == 0) {
      lVar1 = 0;
    }
    else {
      puVar2 = *(uint **)(param_1 + ((ulonglong)*(uint *)(param_3 + 8) % (ulonglong)param_2) * 8);
      lVar1 = 0;
      if (puVar2 != (uint *)0x0) {
        lVar1 = 0;
        do {
          if (*(uint *)(param_3 + 8) == *puVar2) {
            return *(longlong *)(puVar2 + 2);
          }
          puVar2 = *(uint **)(puVar2 + 4);
        } while (puVar2 != (uint *)0x0);
      }
    }
  }
  return lVar1;
}

