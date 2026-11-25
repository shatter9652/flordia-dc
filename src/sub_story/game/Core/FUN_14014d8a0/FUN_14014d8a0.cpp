// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014d8a0  size: 49 bytes
// Name:    FUN_14014d8a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14014e530
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14014d8a0(undefined8 *param_1)

{
  char cVar1;
  
  if ((*(byte *)((longlong)param_1 + 0x72) & 1) == 0) {
    *(byte *)((longlong)param_1 + 0x72) = *(byte *)((longlong)param_1 + 0x72) | 1;
    cVar1 = FUN_14014e530(*param_1,0);
    *(byte *)((longlong)param_1 + 0x72) =
         *(byte *)((longlong)param_1 + 0x72) & 0xfd | cVar1 * '\x02';
  }
  return;
}

