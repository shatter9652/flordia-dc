// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140074680  size: 96 bytes
// Name:    FUN_140074680
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140074680(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  FUN_140004b40(param_1 + 0x158);
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x14);
  if (uVar1 != 0) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + -8 + uVar1 * 8);
      if (((*(int *)(lVar2 + 0x90) == 2) && (*(int *)(lVar2 + 0x54) != 6)) &&
         (*(char *)(lVar2 + 0x126) == '\x01')) {
        lVar2 = lVar2 + -0x10;
        goto LAB_1400746ce;
      }
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  lVar2 = 0;
LAB_1400746ce:
  func_0x000144d9dab0(param_1 + 0x158);
  return lVar2;
}

