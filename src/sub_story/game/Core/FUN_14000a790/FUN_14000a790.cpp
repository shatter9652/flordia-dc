// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000a790  size: 128 bytes
// Name:    FUN_14000a790
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14000a810, FUN_144dc44e0, FUN_144dc22c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x00014000a7f2: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014000a7f7) */

void FUN_14000a790(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x75) & 0x40) == 0) {
    lVar1 = func_0x000144dc4490(*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c));
    FUN_14000a810(param_1,lVar1);
    FUN_144dc44e0(param_1,lVar1);
    FUN_144dc22c0(param_1);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x3ddd) = 0;
      *(undefined1 *)(lVar1 + 0x3ddc) = 0;
      return;
    }
  }
  return;
}

