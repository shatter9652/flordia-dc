// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005c330  size: 94 bytes
// Name:    FUN_14005c330
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400062d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14005c330(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  longlong lStack_20;
  
  lStack_20 = *param_1;
  do {
    while (lStack_20 < 0) {
      cVar1 = FUN_1400062d0(param_1,1,&lStack_20);
      if (cVar1 != '\0') {
        return;
      }
    }
    LOCK();
    lVar2 = *param_1;
    if (lStack_20 == lVar2) {
      *param_1 = lStack_20 + 0x100000000;
      lVar2 = lStack_20;
    }
    UNLOCK();
    bVar3 = lStack_20 != lVar2;
    lStack_20 = lVar2;
  } while (bVar3);
  return;
}

