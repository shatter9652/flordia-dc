// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140059dd0  size: 130 bytes
// Name:    FUN_140059dd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140059dd0(longlong param_1)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0x25c)) {
    lVar1 = 0;
    do {
      func_0x000144e59e70(_DAT_14a923120,*(undefined2 *)(param_1 + 600 + lVar1 * 2));
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x25c));
  }
  *(undefined4 *)(param_1 + 0x25c) = 0;
  if (0 < *(int *)(param_1 + 0x270)) {
    lVar1 = 0;
    do {
      func_0x000144e59e70(_DAT_14a923120,*(undefined2 *)(param_1 + 0x260 + lVar1 * 2));
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x270));
  }
  *(undefined4 *)(param_1 + 0x270) = 0;
  return;
}

