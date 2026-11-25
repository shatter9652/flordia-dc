// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401899d0  size: 203 bytes
// Name:    FUN_1401899d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1406efd70, FUN_144e59120
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x000140189a30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140189a35) */
/* WARNING: Removing unreachable block (ram,0x000140189a3a) */
/* WARNING: Removing unreachable block (ram,0x000140189a4f) */
/* WARNING: Removing unreachable block (ram,0x000140189a57) */
/* WARNING: Removing unreachable block (ram,0x000140189a5d) */
/* WARNING: Removing unreachable block (ram,0x000140189a77) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401899d0(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (*(longlong *)(param_1 + 0x48) != param_2) {
    uVar1 = *(int *)(param_1 + 0x44) - 1;
    puVar2 = (undefined4 *)((ulonglong)uVar1 * 4 + *(longlong *)(param_1 + 0x48));
    if (puVar2 != (undefined4 *)(param_2 + -4)) {
      *(undefined4 *)(param_2 + -4) = *puVar2;
      uVar1 = *(int *)(param_1 + 0x44) - 1;
    }
    *(uint *)(param_1 + 0x44) = uVar1;
    return;
  }
  return;
}

