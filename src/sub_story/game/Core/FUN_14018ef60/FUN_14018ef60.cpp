// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018ef60  size: 76 bytes
// Name:    FUN_14018ef60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e66270, FUN_1452715f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14018ef60(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (-1 < *(int *)((longlong)param_1 + 0x14)) {
    iVar1 = FUN_144e66270(param_2);
    if (iVar1 != (int)param_1[1]) {
      FUN_1452715f0(*(undefined4 *)(*param_1 + 0x7d4),*(undefined4 *)((longlong)param_1 + 0x14),
                    0xb730abf4,param_2);
      *(int *)(param_1 + 1) = iVar1;
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
  }
  return;
}

