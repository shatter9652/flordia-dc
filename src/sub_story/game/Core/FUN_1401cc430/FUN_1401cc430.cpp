// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cc430  size: 97 bytes
// Name:    FUN_1401cc430
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401cc4a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401cc430(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    lVar3 = 0;
    uVar2 = 0;
    do {
      cVar1 = FUN_1401cc4a0(*(longlong *)(param_1 + 8) + lVar3,param_2);
      if (cVar1 != '\0') {
        return uVar2 * 0x10 + *(longlong *)(param_1 + 8);
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (uVar2 < *(uint *)(param_1 + 4));
  }
  return 0;
}

