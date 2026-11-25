// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bd7e0  size: 67 bytes
// Name:    FUN_1401bd7e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401bfba0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401bd7e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  if ((*(byte *)(param_1 + 0x290) & 1) != 0) {
    plVar1 = (longlong *)FUN_1401bfba0();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001401bd818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x218))(plVar1,param_2,param_3,*(code **)(*plVar1 + 0x218));
      return;
    }
  }
  return;
}

