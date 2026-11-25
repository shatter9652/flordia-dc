// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008e070  size: 200 bytes
// Name:    FUN_14008e070
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14008e070(void)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong unaff_GS_OFFSET;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  uVar1 = _DAT_148527a90;
  if ((*(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12d8) & 6) != 0) {
    uVar1 = _DAT_148527a90 ^ 1;
  }
  _DAT_149dd87c8 = 0;
  if (_DAT_1484dce38 != 0) {
    uVar4 = 0;
    lVar3 = (longlong)(int)uVar1 * 0x3360 + 0x1484e0910;
    do {
      uVar2 = (ulonglong)_DAT_149dd87c8;
      _DAT_149dd87c8 = _DAT_149dd87c8 + 1;
      func_0x000145f40560(uVar2 * 0x730 + _DAT_149dd87c0,lVar3,0x730);
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x760;
    } while (uVar4 < _DAT_1484dce38);
  }
  return;
}

