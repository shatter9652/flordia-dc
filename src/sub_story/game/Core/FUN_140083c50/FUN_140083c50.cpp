// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140083c50  size: 144 bytes
// Name:    FUN_140083c50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140872240
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_140083c50(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  uint uVar2;
  
  FUN_140872240();
  *param_1 = &UNK_146223e70;
  *(undefined4 *)(param_1 + 0x17) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0x1ffff;
  if (param_2 == 0) {
    uVar2 = 0x1ffff;
  }
  else {
    plVar1 = *(longlong **)((ulonglong)*(byte *)(param_2 + 0x30) * 8 + 0x14abbe7c0);
    uVar2 = (uint)((ulonglong)(param_2 - *plVar1) / (ulonglong)*(uint *)(plVar1 + 1)) & 0x1ffff;
    uVar2 = (*(byte *)(param_2 + 0x30) & 0x1f) << 0x11 | uVar2 |
            (*(uint *)(plVar1[5] + (ulonglong)uVar2 * 4) & 0x7fe0000) << 5;
  }
  *(uint *)((longlong)param_1 + 0xbc) = uVar2;
  *(undefined4 *)(param_1 + 2) = 0x26f;
  return param_1;
}

