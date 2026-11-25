// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401841f0  size: 45 bytes
// Name:    FUN_1401841f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401841f0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  LOCK();
  plVar2 = *(longlong **)(param_1 + 0x10);
  *(longlong *)(param_1 + 0x10) = 0;
  UNLOCK();
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*plVar2 + 0x40))(plVar2);
  LOCK();
  plVar1 = plVar2 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014503e5d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*plVar2)(plVar2,1);
  return;
}

