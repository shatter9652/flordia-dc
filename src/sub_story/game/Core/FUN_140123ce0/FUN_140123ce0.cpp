// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140123ce0  size: 159 bytes
// Name:    FUN_140123ce0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140123ce0(void)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong unaff_GS_OFFSET;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  uVar2 = _DAT_147b94412;
  if (*(longlong *)(_DAT_1487598d0 + 8) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(_DAT_1487598d0 + 8) + 0x28);
  }
  if (_DAT_147b94412 != 0) {
    uVar4 = (ulonglong)(_DAT_147b94412 >> 2);
    lVar1 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
    if (*(longlong *)(lVar1 + 0x40 + uVar4 * 8) != lVar3) {
      *(longlong *)(lVar1 + 0x40 + uVar4 * 8) = lVar3;
      *(ulonglong *)(lVar1 + 0x20) = *(ulonglong *)(lVar1 + 0x20) | 1L << ((byte)uVar2 & 3);
      func_0x000144d9dcb0(lVar1,uVar2,0);
      *(undefined2 *)(lVar1 + 0x6200 + uVar4 * 2) = 0;
    }
  }
  return;
}

