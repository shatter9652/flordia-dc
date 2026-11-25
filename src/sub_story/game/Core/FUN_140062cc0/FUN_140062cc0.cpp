// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140062cc0  size: 124 bytes
// Name:    FUN_140062cc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140993770
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140062cc0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x110);
  while (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x18);
    FUN_140993770(lVar1);
    lVar1 = lVar2;
  }
  lVar1 = *(longlong *)(param_1 + 0x118);
  while (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x18);
    FUN_140993770(lVar1);
    lVar1 = lVar2;
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  while (lVar1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x18);
    FUN_140993770();
  }
  return;
}

