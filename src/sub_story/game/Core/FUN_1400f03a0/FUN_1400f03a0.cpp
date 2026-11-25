// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f03a0  size: 385 bytes
// Name:    FUN_1400f03a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f7fbb0, FUN_144f7ca10, FUN_144f7f650, FUN_1400f0530, FUN_14257e8b0, FUN_144f7ca60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1400f03a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (param_1[0x16] != 0) {
    (*(code *)param_1[0x1d])(param_1[0x1e],param_1[0x16]);
    param_1[0x16] = 0;
  }
  if (param_1[0x19] != 0) {
    (*(code *)param_1[0x1d])(param_1[0x1e],param_1[0x19]);
    param_1[0x19] = 0;
  }
  if (param_1[0x17] != 0) {
    (*(code *)param_1[0x1d])(param_1[0x1e],param_1[0x17]);
    param_1[0x17] = 0;
  }
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)((longlong)param_1 + 0xac);
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  if (param_2 != (longlong *)0x0) {
    param_1[2] = *param_2;
    param_1[3] = param_2[1];
    param_1[4] = param_2[2];
  }
  *(undefined4 *)(param_1 + 0x10) = 2;
  if ((*param_1 != 0) && (FUN_144f7fbb0(param_1), (int)param_1[1] == 0)) {
    iVar2 = FUN_144f7ca60(param_1);
    if (iVar2 != 0) {
      lVar1 = *param_1;
      iVar2 = FUN_144f7ca10(lVar1);
      if (iVar2 != 0) {
        if ((int)param_1[0xf] != 0) {
          FUN_14257e8b0(lVar1,param_1 + 0x1b);
        }
        if ((int)param_1[1] == 0) {
          FUN_144f7f650(param_1,lVar1);
          FUN_1400f0530(param_1 + 0x1b,lVar1);
          *param_1 = 0;
          return (int)param_1[1] == 0;
        }
      }
    }
    *(undefined4 *)(param_1 + 1) = 1;
  }
  return false;
}

