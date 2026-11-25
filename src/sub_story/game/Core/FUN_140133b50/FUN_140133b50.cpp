// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140133b50  size: 108 bytes
// Name:    FUN_140133b50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144db6280
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140133b50(void)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lVar3 = func_0x000144eb3780();
  if (lVar3 != 0) {
    iVar2 = FUN_144db6280(*(undefined8 *)(lVar3 + 8));
    for (iVar5 = 1; iVar2 + (uint)(iVar2 == 0) != iVar5; iVar5 = iVar5 + 1) {
      lVar4 = func_0x000144db6390(lVar3 + 0x40,iVar5);
      if ((lVar4 != 0) &&
         (cVar1 = func_0x000144da28f0(*(undefined4 *)(lVar4 + 0x9c)), cVar1 != '\0')) {
        return lVar4;
      }
    }
  }
  return 0;
}

