// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cd020  size: 91 bytes
// Name:    FUN_1401cd020
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1407aa0f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401cd020(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(short *)(param_1 + 0xb14) == 0x10) &&
     (uVar1 = *(uint *)(param_1 + 0x854), (ulonglong)uVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x858);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (*(int *)(lVar3 + 4) == -0x2be79da2) {
        FUN_1407aa0f0(lVar3,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar4);
  }
  return;
}

