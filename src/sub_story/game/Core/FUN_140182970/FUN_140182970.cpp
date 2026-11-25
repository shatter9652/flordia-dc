// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140182970  size: 71 bytes
// Name:    FUN_140182970
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140182970(longlong param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  
  func_0x000140182930();
  auVar2._0_12_ = ZEXT812(0);
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x80) = auVar2;
  *(undefined4 *)(param_1 + 0x90) = 0x80000000;
  for (plVar1 = *(longlong **)(param_1 + 0x78); (longlong *)(param_1 + 0x60) != plVar1;
      plVar1 = (longlong *)plVar1[3]) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  return;
}

