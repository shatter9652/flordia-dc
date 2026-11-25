// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400555e0  size: 124 bytes
// Name:    FUN_1400555e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145caaca0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400555e0(longlong *param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = 5;
  if (param_2 != 0) {
    cVar1 = func_0x000144e7d710(param_1);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x20))(param_1);
      if ((cVar1 != '\0') && (*(char *)(_DAT_14ab5cdf8 + 0xffc) == '\x01')) {
        FUN_145caaca0(param_2);
      }
      if (*(char *)(param_2 + 0x650) != '\0') {
        return;
      }
      bVar2 = func_0x000144da2930(*(undefined4 *)(param_2 + 0x61c));
      iVar3 = bVar2 + 1;
    }
  }
  *(int *)((longlong)param_1 + 0x38c) = iVar3;
  return;
}

