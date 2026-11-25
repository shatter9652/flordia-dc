// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b2010  size: 88 bytes
// Name:    FUN_1400b2010
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1404cc440, FUN_144f3d4b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400b2010(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  if (plVar3 == (longlong *)0x0) {
    cVar1 = FUN_144f3d4b0(param_1);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*param_2 + 0x168))(param_2);
      FUN_1404cc440(uVar2,param_1);
    }
    plVar3 = (longlong *)*param_1;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001400b2048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x80))();
  return;
}

