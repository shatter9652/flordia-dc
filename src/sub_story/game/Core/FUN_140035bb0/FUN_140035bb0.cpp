// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140035bb0  size: 74 bytes
// Name:    FUN_140035bb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144d9f670
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140035bb0(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x2c5);
  if (bVar1 != 0) {
    uVar2 = 0;
    do {
      if (*(short *)(param_1 + 8 + uVar2 * 2) != -1) {
        FUN_144d9f670(*(undefined8 *)(_DAT_14a923120 + 0x28));
        bVar1 = *(byte *)(param_1 + 0x2c5);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < bVar1);
  }
  return;
}

