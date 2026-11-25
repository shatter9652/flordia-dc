// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140037830  size: 135 bytes
// Name:    FUN_140037830
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f66960, FUN_140108700
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140037830(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  uVar3 = *(longlong *)(*(longlong *)(_DAT_14a92da38 + 0x28) + 0x18) - _DAT_14a943aa8;
  lVar1 = FUN_144f66960(*param_1);
  if (lVar1 != 0) {
    FUN_140108700(lVar1,0x400);
  }
  uVar2 = (undefined4)(uVar3 >> 5);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  lVar1 = FUN_144f66960(param_1[1]);
  if (lVar1 != 0) {
    FUN_140108700(lVar1,0x400);
  }
  *(undefined4 *)(param_1 + 4) = uVar2;
  lVar1 = FUN_144f66960(param_1[2]);
  if (lVar1 != 0) {
    FUN_140108700(lVar1,0x400);
  }
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  return;
}

