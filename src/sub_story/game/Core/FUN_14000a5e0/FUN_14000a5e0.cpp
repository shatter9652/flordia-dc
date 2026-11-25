// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000a5e0  size: 99 bytes
// Name:    FUN_14000a5e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dc0540, FUN_145234a80, FUN_144eb3750
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_14000a5e0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  
  bVar4 = false;
  if (*(longlong *)(param_1 + 8) != 0) {
    cVar2 = FUN_144dc0540(*(longlong *)(param_1 + 8),0);
    if (cVar2 != '\0') {
      lVar1 = *(longlong *)(param_1 + 8);
      lVar3 = FUN_145234a80(lVar1,0,0);
      bVar4 = true;
      if ((lVar3 != 0) && ((byte)(*(char *)(lVar3 + 0xfa) - 9U) < 3)) {
        lVar3 = FUN_144eb3750(*(undefined4 *)(lVar3 + 0x9c));
        bVar4 = lVar3 != lVar1;
      }
    }
  }
  return bVar4;
}

