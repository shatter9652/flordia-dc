// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a89b0  size: 79 bytes
// Name:    FUN_1401a89b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a89b0(longlong param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (((param_2 != '\0') || (299 < (uint)(_DAT_14abbef40 - *(int *)(param_1 + 0x88)))) &&
     (*(uint *)(param_1 + 0x8c) < 0x10)) {
    func_0x000144ec8b40();
    lVar2 = func_0x0001401a8c70();
    uVar1 = *(uint *)(param_1 + 0x8c);
    uVar3 = (ulonglong)uVar1;
    if (uVar3 < 0x10) {
      *(undefined1 *)(lVar2 + 0x12 + uVar3 * 0x14) = 0;
      *(undefined4 *)(lVar2 + 8 + uVar3 * 0x14) = *(undefined4 *)(lVar2 + 0x158);
      *(uint *)(lVar2 + 0x170) = *(uint *)(lVar2 + 0x170) | 1 << (uVar1 & 0x1f);
      *(uint *)(param_1 + 0x8c) = 0xffffffff;
    }
    return;
  }
  return;
}

