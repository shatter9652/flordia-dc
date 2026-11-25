// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400199d0  size: 129 bytes
// Name:    FUN_1400199d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400199d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  
  if ((param_2[2] == param_1) &&
     (plVar2 = *(longlong **)(param_1 + 0x1e8), plVar2 != (longlong *)0x0)) {
    if (plVar2 == param_2) {
      plVar1 = (longlong *)(param_1 + 0x1e8);
    }
    else {
      do {
        plVar1 = plVar2;
        plVar2 = (longlong *)plVar1[3];
        if (plVar2 == (longlong *)0x0) {
          return;
        }
      } while (plVar2 != param_2);
      plVar1 = plVar1 + 3;
    }
    *plVar1 = plVar2[3];
    (**(code **)(*plVar2 + 0x10))(plVar2);
    auVar3._0_12_ = ZEXT812(0);
    auVar3._12_4_ = 0;
    *(undefined1 (*) [16])(plVar2 + 2) = auVar3;
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2,1);
    }
  }
  return;
}

