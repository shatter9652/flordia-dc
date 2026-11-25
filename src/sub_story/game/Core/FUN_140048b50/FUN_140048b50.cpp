// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140048b50  size: 67 bytes
// Name:    FUN_140048b50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006410
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140048b50(undefined8 *param_1)

{
  if ((*(int *)((longlong)param_1 + 0x24) == 0) && (*(int *)(param_1 + 4) != 0)) {
    FUN_140006410(param_1);
  }
  (**(code **)(*(longlong *)*param_1 + 0x88))((longlong *)*param_1,param_1[1]);
  param_1[1] = 0xffffffffffffffff;
  *param_1 = 0;
  return;
}

