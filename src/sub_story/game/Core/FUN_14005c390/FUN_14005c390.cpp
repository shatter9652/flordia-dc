// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005c390  size: 108 bytes
// Name:    FUN_14005c390
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14005c390(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  longlong lStack_28;
  
  lStack_28 = *param_1;
  do {
    while (lStack_28 < 0x100000000) {
      cVar1 = FUN_140006180(param_1,1,&lStack_28);
      if (cVar1 != '\0') {
        return;
      }
    }
    LOCK();
    lVar2 = *param_1;
    if (lStack_28 == lVar2) {
      *param_1 = lStack_28 + -0x100000000;
      lVar2 = lStack_28;
    }
    UNLOCK();
    bVar3 = lStack_28 != lVar2;
    lStack_28 = lVar2;
  } while (bVar3);
  return;
}

