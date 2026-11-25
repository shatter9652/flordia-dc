// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018eea0  size: 33 bytes
// Name:    FUN_14018eea0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14018ef60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14018eea0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_14018ef60();
  if (-1 < *(int *)((longlong)param_1 + 0x14)) {
    iVar1 = FUN_144e66270(param_3);
    if (iVar1 != *(int *)((longlong)param_1 + 0xc)) {
      FUN_1452715f0(*(undefined4 *)(*param_1 + 0x7d4),*(undefined4 *)((longlong)param_1 + 0x14),
                    0x7ba27937,param_3);
      *(int *)((longlong)param_1 + 0xc) = iVar1;
    }
  }
  return;
}

