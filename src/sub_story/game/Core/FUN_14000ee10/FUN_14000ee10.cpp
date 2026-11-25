// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000ee10  size: 90 bytes
// Name:    FUN_14000ee10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000ee10(ushort param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar1 = *(ushort *)(_DAT_149ce1160 + 0x5b6 + (ulonglong)param_1 * 0x5c0);
  if (uVar1 != 0xffff) {
    lVar3 = _DAT_149ce1160 + (ulonglong)param_1 * 0x5c0;
    uVar2 = (ulonglong)((uint)uVar1 * 0x600);
    if (*(int *)(*(longlong *)(_DAT_14a924088 + 0x28) + 0x5b0 + uVar2) == 1) {
      func_0x0001455947b0(*(longlong *)(_DAT_14a924088 + 0x28) + uVar2);
    }
    *(undefined1 *)(lVar3 + 0x5bc) = 3;
  }
  return;
}

