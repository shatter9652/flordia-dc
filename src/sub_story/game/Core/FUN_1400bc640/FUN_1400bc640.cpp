// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bc640  size: 102 bytes
// Name:    FUN_1400bc640
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400bc6f0, FUN_1400bc6b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400bc640(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lStack_38;
  longlong *plStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  plStack_30 = &lStack_38;
  puStack_28 = &UNK_1420a29f0;
  puStack_20 = &UNK_1401167b0;
  puStack_18 = &SUB_140004380;
  lStack_38 = param_1;
  cVar1 = FUN_1400bc6f0(_DAT_149930884,&plStack_30,1);
  if (cVar1 == '\0') {
    FUN_1400bc6b0(*(undefined8 *)(param_1 + 0x3960),param_2);
  }
  return;
}

