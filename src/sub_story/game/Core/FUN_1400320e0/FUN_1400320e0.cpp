// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400320e0  size: 80 bytes
// Name:    FUN_1400320e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140188430
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400320e0(longlong param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 == (longlong *)0x0) {
    FUN_140188430(param_1);
    plVar1 = *(longlong **)(param_1 + 0x48);
  }
  (**(code **)(*plVar1 + 0x490))(plVar1,*(undefined4 *)(param_1 + 0x1b1a0),param_1 + 0xa0);
  auVar2._0_12_ = ZEXT812(0);
  auVar2._12_4_ = 0;
  *(undefined8 *)(param_1 + 0x1b1b0) = 0;
  *(undefined1 (*) [16])(param_1 + 0x1b1a0) = auVar2;
  return;
}

