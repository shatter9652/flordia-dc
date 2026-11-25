// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140178100  size: 121 bytes
// Name:    FUN_140178100
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402e5b80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140178100(longlong param_1)

{
  uint uStack_24;
  uint *puStack_20;
  undefined *puStack_18;
  undefined *puStack_10;
  undefined *puStack_8;
  
  if (param_1 == 0) {
    uStack_24 = 0x1ffff;
  }
  else {
    uStack_24 = (uint)((ulonglong)(param_1 - *_DAT_14abbe8c8) /
                      (ulonglong)*(uint *)(_DAT_14abbe8c8 + 1)) & 0x1ffff;
    uStack_24 = *(uint *)(_DAT_14abbe8c8[5] + (ulonglong)uStack_24 * 4) & 0xfffe0000 | uStack_24;
  }
  puStack_20 = &uStack_24;
  puStack_18 = &UNK_1449b8810;
  puStack_10 = &UNK_1413b41f0;
  puStack_8 = &SUB_140004380;
  FUN_1402e5b80(4);
  return;
}

