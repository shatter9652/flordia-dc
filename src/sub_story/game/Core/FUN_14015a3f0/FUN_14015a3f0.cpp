// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015a3f0  size: 79 bytes
// Name:    FUN_14015a3f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14015bcb0, FUN_14501d9c0, FUN_14015a440
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015a3f0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  
  uVar1 = _DAT_14a922bd0;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar3 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
    cVar2 = FUN_14015a440(uVar3);
    if (cVar2 == '\0') {
      FUN_14501d9c0();
    }
    else {
      FUN_14015bcb0(uVar1,uVar3);
    }
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0xffff;
  }
  return;
}

