// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140095aa0  size: 84 bytes
// Name:    FUN_140095aa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145248630
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140095aa0(void)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = FUN_145248630();
  if (lVar2 != 0) {
    func_0x000140095b10(lVar2);
    if (*(char *)(lVar2 + 0x24) != '\0') {
      func_0x000140095b30(lVar2);
      if ((ulonglong)*(uint *)(lVar2 + 0x8c) != 0xffffffff) {
        LOCK();
        piVar1 = (int *)((ulonglong)*(uint *)(lVar2 + 0x8c) * 0x38 + _DAT_1476765e8 + 0x30);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        return;
      }
    }
  }
  return;
}

