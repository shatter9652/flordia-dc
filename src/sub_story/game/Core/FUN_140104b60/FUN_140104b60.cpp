// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140104b60  size: 94 bytes
// Name:    FUN_140104b60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140104b60(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if (((1 < *(byte *)(param_1 + 0x155) - 3) && ((*(byte *)(param_1 + 0x154) & 1) != 0)) &&
     (*(longlong *)(param_1 + 0x48) != 0)) {
    plVar1 = (longlong *)func_0x0001450bb780(*(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x9c));
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140104bb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2,*(code **)(*plVar1 + 0x68));
      return;
    }
  }
  return;
}

