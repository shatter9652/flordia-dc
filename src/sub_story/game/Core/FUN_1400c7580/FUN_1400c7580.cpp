// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c7580  size: 80 bytes
// Name:    FUN_1400c7580
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402e5b80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c7580(longlong param_1)

{
  longlong lStack_28;
  longlong *plStack_20;
  undefined *puStack_18;
  undefined *puStack_10;
  undefined *puStack_8;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 0x20;
  if (*(longlong *)(param_1 + 8) != 0) {
    plStack_20 = &lStack_28;
    puStack_18 = &UNK_142f11900;
    puStack_10 = &UNK_1401167b0;
    puStack_8 = &SUB_140004380;
    lStack_28 = param_1;
    FUN_1402e5b80(4);
  }
  return;
}

