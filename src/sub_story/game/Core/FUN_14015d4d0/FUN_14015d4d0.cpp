// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015d4d0  size: 188 bytes
// Name:    FUN_14015d4d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452dfd90, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015d4d0(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    FUN_140004b40(0x14abbf350);
    if (*plVar1 != 0) {
      FUN_1452dfd90(*plVar1,plVar1);
    }
    *plVar1 = 0;
    func_0x000144d9dab0(0x14abbf350);
  }
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 400) = 0;
  *(undefined1 *)(param_1 + 0x1d9) = 1;
  uVar2 = *(uint *)(param_1 + 0x58);
  if (uVar2 != 0x1ffff) {
    uVar3 = *(uint *)(_DAT_14abbe8c8[5] + (ulonglong)(uVar2 & 0x1ffff) * 4);
    if ((((~uVar3 & *(uint *)(_DAT_14abbe8c8 + 6)) == 0) &&
        ((uVar3 & 0x7fe0000) == (uVar2 & 0xfffe0000))) && (*_DAT_14abbe8c8 != 0)) {
      *(undefined4 *)(param_1 + 0x58) = 0x1ffff;
    }
  }
  return;
}

