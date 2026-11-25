// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140185920  size: 90 bytes
// Name:    FUN_140185920
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140185920(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  
  *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) & 0xffbf | (ushort)param_3;
  for (plVar1 = *(longlong **)(param_1 + 0x78); (longlong *)(param_1 + 0x60) != plVar1;
      plVar1 = (longlong *)plVar1[3]) {
    if ((*(byte *)((longlong)plVar1 + 0x4a) & 0x20) == 0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,param_2,param_3);
      param_3 = param_3 & 0xffffffff;
    }
  }
  return;
}

