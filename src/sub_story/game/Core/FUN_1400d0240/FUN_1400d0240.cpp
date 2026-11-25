// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d0240  size: 112 bytes
// Name:    FUN_1400d0240
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400d02c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Type propagation algorithm not settling */

void FUN_1400d0240(longlong param_1,longlong param_2,longlong param_3)

{
  longlong alStack_28 [2];
  
  FUN_1400d02c0(*(undefined8 *)(param_1 + 0x2f8));
  *(undefined4 *)(param_2 + 0x488) = *(undefined4 *)(param_3 + 0x78);
  *(undefined8 *)(param_2 + 0x470) = *(undefined8 *)(param_3 + 0x70);
  *(undefined8 *)(param_2 + 0x478) = 0x800000;
  alStack_28[1] = 0;
  func_0x0001400d02b0(param_1,alStack_28 + 1);
  alStack_28[0] = param_1;
  func_0x0001451ae490(param_2,alStack_28);
  return;
}

