// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ae630  size: 88 bytes
// Name:    FUN_1401ae630
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f9fed0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401ae630(longlong param_1,int param_2)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x70) != param_2) && (param_2 != 1 || 1 < *(int *)(param_1 + 0x70) - 7U))
  {
    *(int *)(param_1 + 0x70) = param_2;
  }
  if ((*(byte *)(param_1 + 0x88) & 0x10) != 0) {
    cVar1 = FUN_144f9fed0(param_1);
    if ((cVar1 == '\0') && (4 < *(int *)(param_1 + 0x70) - 2U)) {
      *(undefined4 *)(param_1 + 0x28) = 1;
      *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) & 0xef;
      return;
    }
  }
  return;
}

