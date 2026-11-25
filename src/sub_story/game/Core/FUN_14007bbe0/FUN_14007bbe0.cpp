// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007bbe0  size: 95 bytes
// Name:    FUN_14007bbe0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14007c7c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007bbe0(undefined8 param_1,longlong param_2)

{
  longlong unaff_GS_OFFSET;
  
  if ((param_2 != 0) && (*(int *)(param_2 + 4) == -0x6fabb370)) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    FUN_14007c7c0(param_1,*(undefined4 *)(param_2 + 0x14));
  }
  return;
}

