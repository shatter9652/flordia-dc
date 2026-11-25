// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400634d0  size: 93 bytes
// Name:    FUN_1400634d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd5ae0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400634d0(longlong *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x14);
  if ((uVar1 & 0x7fff) != 0) {
    lVar3 = 0x10;
    uVar2 = 0;
    do {
      FUN_144dd5ae0(*(undefined8 *)(*param_1 + lVar3));
      uVar1 = *(uint *)((longlong)param_1 + 0x14);
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x20;
    } while (uVar2 < (uVar1 & 0x7fff));
  }
  *(uint *)((longlong)param_1 + 0x14) = uVar1 & 0xffff8000;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}

