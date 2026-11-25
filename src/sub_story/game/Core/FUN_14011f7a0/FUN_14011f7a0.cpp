// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011f7a0  size: 77 bytes
// Name:    FUN_14011f7a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14011f7a0(void)

{
  longlong unaff_GS_OFFSET;
  
  func_0x000144fd1b00(1);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  *(undefined8 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1400) = 0x149090628;
  return;
}

