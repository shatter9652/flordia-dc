// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140003a10  size: 150 bytes
// Name:    FUN_140003a10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140003a10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_GS_OFFSET;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar1 = _DAT_14aad45b0;
  lVar3 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar4 = *(longlong *)(lVar3 + 0x13a8);
  if (lVar4 == 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    *(longlong *)(lVar3 + 0x13a8) = lVar1;
    lVar4 = lVar1;
  }
  lVar3 = func_0x000140104070();
  if (param_1 != 0 && lVar3 == 0) {
    cVar2 = func_0x000140005970(*(undefined1 *)(lVar4 + 0x18));
    if (cVar2 != '\0') {
      FUN_142219620(lVar4,param_1,param_2);
    }
  }
  return lVar3;
}

