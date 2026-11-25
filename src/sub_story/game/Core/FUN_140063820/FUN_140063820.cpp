// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140063820  size: 39 bytes
// Name:    FUN_140063820
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14556ac30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140063820(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_14556ac30();
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 != 0) {
    lVar2 = FUN_140c1a850();
    if (lVar2 != 0) {
      (**(code **)(*param_1 + 0x40))();
      if (lVar2 != 0) {
        *(char *)(lVar2 + 0x14a) = *(char *)(lVar2 + 0x14a) + (*(char *)(lVar2 + 0x14a) == '\0');
      }
      return;
    }
  }
  return;
}

