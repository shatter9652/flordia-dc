// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140127ba0  size: 64 bytes
// Name:    FUN_140127ba0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451cca70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140127ba0(longlong param_1,char *param_2)

{
  char cVar1;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  if (*param_2 != '\x01') {
    return;
  }
  if (*(int *)(param_1 + 0x54) != 5) {
    if (*(int *)(param_1 + 0x54) != 4) {
      return;
    }
    cVar1 = FUN_1451cca70(*(undefined2 *)(param_1 + 0x50));
    if (cVar1 == '\0') {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x80) = 1;
  return;
}

