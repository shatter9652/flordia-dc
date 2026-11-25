// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140137970  size: 75 bytes
// Name:    FUN_140137970
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f661b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140137970(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = FUN_144f661b0(param_1,1);
  if (((lVar2 == 0) ||
      (plVar3 = (longlong *)
                func_0x000141778ed0(*(undefined8 *)(lVar2 + 0x158),*(undefined4 *)(lVar2 + 0x3a4)),
      plVar3 == (longlong *)0x0)) ||
     (iVar1 = (**(code **)(*plVar3 + 0x30))(plVar3), iVar1 != param_2)) {
    lVar2 = 0;
  }
  return lVar2;
}

