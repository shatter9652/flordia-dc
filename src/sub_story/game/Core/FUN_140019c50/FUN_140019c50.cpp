// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140019c50  size: 99 bytes
// Name:    FUN_140019c50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400062d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140019c50(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lStack_20;
  
  plVar3 = (longlong *)(param_1 + 8);
  lStack_20 = *(longlong *)(param_1 + 8);
  do {
    while (lStack_20 < 0) {
      cVar1 = FUN_1400062d0(plVar3,1,&lStack_20);
      if (cVar1 != '\0') {
        return;
      }
    }
    LOCK();
    lVar2 = *plVar3;
    if (lStack_20 == lVar2) {
      *plVar3 = lStack_20 + 0x100000000;
      lVar2 = lStack_20;
    }
    UNLOCK();
    bVar4 = lStack_20 != lVar2;
    lStack_20 = lVar2;
  } while (bVar4);
  return;
}

