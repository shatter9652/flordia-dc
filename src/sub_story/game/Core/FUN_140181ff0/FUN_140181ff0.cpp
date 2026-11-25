// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140181ff0  size: 86 bytes
// Name:    FUN_140181ff0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140182060
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140181ff0(longlong param_1,undefined8 param_2)

{
  longlong *plStack_20;
  undefined8 uStack_18;
  
  FUN_140182060(&plStack_20,0xe,param_2);
  (**(code **)(*plStack_20 + 8))(plStack_20,uStack_18);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))
            (*(longlong **)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  *(longlong **)(param_1 + 0x30) = plStack_20;
  *(undefined8 *)(param_1 + 0x38) = uStack_18;
  (**(code **)(*plStack_20 + 0x10))();
  return;
}

