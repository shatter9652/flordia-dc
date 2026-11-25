// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002c7f0  size: 107 bytes
// Name:    FUN_14002c7f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1407ccf80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14002c7f0(undefined4 param_1)

{
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 *puStack_38;
  undefined4 *puStack_30;
  undefined8 *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  undefined *puStack_10;
  
  puStack_38 = &uStack_44;
  puStack_28 = &uStack_40;
  puStack_30 = &uStack_48;
  uStack_40 = 0x14926ea00;
  uStack_48 = 0;
  puStack_20 = &UNK_143b6bdb0;
  puStack_18 = &UNK_141b7b630;
  puStack_10 = &SUB_140004380;
  uStack_44 = param_1;
  FUN_1407ccf80(_DAT_14aad3cd0);
  return uStack_48;
}

