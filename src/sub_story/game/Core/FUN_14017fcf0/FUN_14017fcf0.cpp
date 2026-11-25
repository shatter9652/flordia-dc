// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017fcf0  size: 150 bytes
// Name:    FUN_14017fcf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f3d9c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14017fcf0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [144];
  
  auStack_c8._4_4_ = param_5;
  auStack_c8._0_4_ = param_5;
  auStack_c8._8_4_ = param_5;
  auStack_c8._12_4_ = param_5;
  auStack_b8._4_4_ = _DAT_145fc6ed8;
  auStack_b8._0_4_ = _DAT_145fc6ed8;
  auStack_b8._8_4_ = _DAT_145fc6ed8;
  auStack_b8._12_4_ = _DAT_145fc6ed8;
  FUN_144f3d9c0(param_1,auStack_a8,param_2,param_3,param_4,auStack_c8,auStack_b8);
  if (*(short *)(param_1 + 400) != 0) {
    uVar2 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x188) + uVar2 * 8);
      (**(code **)(*plVar1 + 0x70))(plVar1,auStack_a8);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(param_1 + 400));
  }
  return;
}

