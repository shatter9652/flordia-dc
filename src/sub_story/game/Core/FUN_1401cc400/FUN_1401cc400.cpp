// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cc400  size: 42 bytes
// Name:    FUN_1401cc400
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401cba40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401cc400(void)

{
  char cVar1;
  longlong lVar2;
  undefined8 in_R9;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar2 = FUN_1401cba40();
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(lVar2 + 4) != 0) {
    lVar4 = 0;
    uVar3 = 0;
    do {
      cVar1 = FUN_1401cc4a0(*(longlong *)(lVar2 + 8) + lVar4,in_R9);
      if (cVar1 != '\0') {
        return uVar3 * 0x10 + *(longlong *)(lVar2 + 8);
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (uVar3 < *(uint *)(lVar2 + 4));
  }
  return 0;
}

