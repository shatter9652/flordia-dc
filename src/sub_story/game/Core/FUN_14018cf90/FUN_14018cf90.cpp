// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018cf90  size: 68 bytes
// Name:    FUN_14018cf90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14018cf90(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if ((((*(longlong *)(param_1 + 0xb0) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x38), lVar1 != 0)) &&
      (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) &&
     (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)) {
    uVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,0);
    *(undefined8 *)(param_1 + 0x2b0) = uVar3;
  }
  return;
}

