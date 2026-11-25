// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a1720  size: 61 bytes
// Name:    FUN_1401a1720
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401a1720(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(longlong **)(param_1 + 0x30) != (longlong *)0x0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x88))();
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001401a1751. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x68))();
      return uVar2;
    }
  }
  return 0;
}

