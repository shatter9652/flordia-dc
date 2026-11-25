// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b24c0  size: 75 bytes
// Name:    FUN_1400b24c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145373030
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400b24c0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = (ulonglong)*(uint *)(param_1 + 0xd24);
  if (*(uint *)(param_1 + 0xd24) != 0) {
    lVar2 = param_1 + 0xd28;
    do {
      if ((*(byte *)(lVar2 + 4) & 4) == 0) {
        FUN_145373030(param_1,lVar2);
      }
      lVar2 = lVar2 + 0x18;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    LOCK();
    *(undefined4 *)(param_1 + 0xd24) = 0;
    UNLOCK();
  }
  return;
}

