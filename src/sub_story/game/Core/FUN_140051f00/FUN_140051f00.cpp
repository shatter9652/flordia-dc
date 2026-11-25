// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140051f00  size: 55 bytes
// Name:    FUN_140051f00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140051f00(longlong *param_1,byte param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if ((((param_2 & 2) == 0 & (param_2 ^ 1)) == 0) && (param_1 != (longlong *)0x0)) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x78))();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140051f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x58))(plVar1);
      return uVar2;
    }
  }
  return 0;
}

