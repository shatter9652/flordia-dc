// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140037790  size: 145 bytes
// Name:    FUN_140037790
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f66960, FUN_1400e9be0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140037790(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_144f66960(*param_1);
  if (lVar2 != 0) {
    FUN_1400e9be0(lVar2,0x400);
    uVar1 = func_0x000144e3c8a0(*(undefined2 *)(lVar2 + 6));
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  }
  lVar2 = FUN_144f66960(param_1[1]);
  if (lVar2 != 0) {
    FUN_1400e9be0(lVar2,0x400);
    uVar1 = func_0x000144e3c8a0(*(undefined2 *)(lVar2 + 6));
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  lVar2 = FUN_144f66960(param_1[2]);
  if (lVar2 != 0) {
    FUN_1400e9be0(lVar2,0x400);
    uVar1 = func_0x000144e3c8a0(*(undefined2 *)(lVar2 + 6));
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  }
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  return;
}

