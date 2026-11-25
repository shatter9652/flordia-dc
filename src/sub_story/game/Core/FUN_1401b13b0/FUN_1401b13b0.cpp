// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b13b0  size: 134 bytes
// Name:    FUN_1401b13b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401b13b0(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong unaff_GS_OFFSET;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  uVar2 = 0;
  if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) != 0) {
    uVar2 = *param_2;
  }
  if (*(ushort *)(param_1 + 0xf8) != 0) {
    lVar3 = 0;
    do {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0xf0) + lVar3);
      lVar3 = lVar3 + 8;
      uVar2 = uVar2 | *(uint *)(*plVar1 + 0x18);
    } while ((ulonglong)*(ushort *)(param_1 + 0xf8) * 8 != lVar3);
  }
  *param_2 = uVar2;
  return;
}

