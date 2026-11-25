// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401acb10  size: 87 bytes
// Name:    FUN_1401acb10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145070890
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1401acb10(void)

{
  char cVar1;
  longlong unaff_GS_OFFSET;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  if ((*(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12d8) & 6) == 0) {
    cVar1 = FUN_145070890();
  }
  else {
    cVar1 = func_0x0001401acb70();
  }
  return cVar1 != '\0';
}

