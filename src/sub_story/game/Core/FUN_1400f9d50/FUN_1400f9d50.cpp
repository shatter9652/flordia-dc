// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f9d50  size: 29 bytes
// Name:    FUN_1400f9d50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_1400f9d50(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int aiStack_18 [4];
  
  cVar1 = func_0x000144f942e0();
  if (cVar1 == '\0') {
    cVar1 = func_0x000144f942e0();
    if (cVar1 == '\0') {
      iVar2 = FUN_1455e0e30(aiStack_18);
      uVar3 = CONCAT31((int3)(aiStack_18[0] - 3U >> 8),aiStack_18[0] - 3U < 2 && -1 < iVar2);
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0;
}

