// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006d0b0  size: 78 bytes
// Name:    FUN_14006d0b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_14006d0b0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0xc4);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + 0x58 + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
        if (iVar2 == 1) {
          return plVar1;
        }
        iVar2 = *(int *)(param_1 + 0xc4);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return (longlong *)0x0;
}

