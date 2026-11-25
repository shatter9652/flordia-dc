// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140159450  size: 61 bytes
// Name:    FUN_140159450
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451f2f80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140159450(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  FUN_1451f2f80();
  uVar1 = *(uint *)(param_1 + 0x54);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      if (*(short *)(param_1 + 0x14 + uVar2 * 2) == -2) {
        *(undefined2 *)(param_1 + 0x14 + uVar2 * 2) = 0xffff;
      }
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}

