// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000aed0  size: 92 bytes
// Name:    FUN_14000aed0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x00014000af05: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014000af0a) */

void FUN_14000aed0(longlong param_1,longlong param_2)

{
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xffff7aff | 0x8000;
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0x3ddd) = 1;
    *(undefined1 *)(param_2 + 0x3ddc) = 0;
    return;
  }
  return;
}

