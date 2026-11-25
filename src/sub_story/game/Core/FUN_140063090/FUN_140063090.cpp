// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140063090  size: 68 bytes
// Name:    FUN_140063090
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140063090(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x30))();
  lVar1 = param_1[5];
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    *(longlong *)(lVar2 + 0x28) = lVar1;
  }
  auVar5._0_12_ = ZEXT812(0);
  auVar5._12_4_ = 0;
  plVar4 = (longlong *)(lVar1 + 0x30);
  if (lVar1 == 0) {
    plVar4 = plVar3;
  }
  *plVar4 = lVar2;
  *(int *)(plVar3 + 1) = (int)plVar3[1] + -1;
  *(undefined1 (*) [16])(param_1 + 5) = auVar5;
  return;
}

