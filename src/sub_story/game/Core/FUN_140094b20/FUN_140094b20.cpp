// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140094b20  size: 60 bytes
// Name:    FUN_140094b20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140094b20(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if ((*(longlong **)(param_1 + 8) != (longlong *)0x0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140094b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}

