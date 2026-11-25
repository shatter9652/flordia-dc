// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140049690  size: 106 bytes
// Name:    FUN_140049690
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145883d30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140049690(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = func_0x000144eb3780(*(undefined4 *)
                               ((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x9c));
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0xf74) & 2) != 0)) {
    FUN_145883d30(param_1,1);
    if ((-1 < (char)*(uint *)(param_1 + 0x10)) &&
       (*(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x80,
       *(longlong *)(param_1 + 0x28) != 0 || *(longlong *)(param_1 + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001400496f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x30))(param_1 + 0x18,7);
      return;
    }
  }
  return;
}

