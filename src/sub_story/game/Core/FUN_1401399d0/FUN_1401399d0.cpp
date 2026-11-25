// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401399d0  size: 119 bytes
// Name:    FUN_1401399d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401399d0(void)

{
  longlong lVar1;
  char cVar2;
  longlong unaff_GS_OFFSET;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  cVar2 = DAT_149c3d7e4;
  lVar1 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
  if (*(char *)(lVar1 + 0x1236c) != DAT_149c3d7e4) {
    *(char *)(lVar1 + 0x1236c) = DAT_149c3d7e4;
    *(ulonglong *)(lVar1 + 0x12520) =
         (ulonglong)(*(char *)(lVar1 + 0x123ec) != cVar2) << 0x13 |
         *(ulonglong *)(lVar1 + 0x12520) & 0xfffffffffff7ffff;
  }
  return;
}

