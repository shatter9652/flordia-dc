// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400570c0  size: 110 bytes
// Name:    FUN_1400570c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140188430, FUN_140057250
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400570c0(longlong param_1)

{
  longlong lStack_30;
  longlong *plStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  undefined *puStack_10;
  
  lStack_30 = *(longlong *)(param_1 + 0x127c8);
  if (lStack_30 == 0) {
    FUN_140188430(param_1 + 0x12780);
    lStack_30 = *(longlong *)(param_1 + 0x127c8);
  }
  plStack_28 = &lStack_30;
  puStack_20 = &UNK_142474f50;
  puStack_18 = &UNK_1401167b0;
  puStack_10 = &SUB_140004380;
  FUN_140057250(param_1 + 0x12210);
  return;
}

