// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014d990  size: 62 bytes
// Name:    FUN_14014d990
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14014ea90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14014d990(undefined8 *param_1)

{
  char cVar1;
  
  if ((*(byte *)((longlong)param_1 + 0x71) & 4) == 0) {
    *(byte *)((longlong)param_1 + 0x71) = *(byte *)((longlong)param_1 + 0x71) | 4;
    if (param_1[7] != 0) {
      cVar1 = FUN_14014ea90(*param_1);
      *(byte *)((longlong)param_1 + 0x71) = *(byte *)((longlong)param_1 + 0x71) & 0xf7 | cVar1 << 3;
    }
  }
  return;
}

