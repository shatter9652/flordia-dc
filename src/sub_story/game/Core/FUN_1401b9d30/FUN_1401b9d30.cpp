// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b9d30  size: 106 bytes
// Name:    FUN_1401b9d30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_1401b9d30(uint param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(param_2 + lVar3);
      cVar2 = (**(code **)(*plVar1 + 0x78))(plVar1,0xc,param_3);
      if (cVar2 != '\0') {
        if (plVar1[4] == 0) {
          return (longlong *)0x0;
        }
        return plVar1;
      }
      lVar3 = lVar3 + 8;
    } while ((ulonglong)param_1 << 3 != lVar3);
  }
  return (longlong *)0x0;
}

