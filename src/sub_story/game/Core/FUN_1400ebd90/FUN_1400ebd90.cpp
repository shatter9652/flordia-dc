// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ebd90  size: 97 bytes
// Name:    FUN_1400ebd90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400ebe00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400ebd90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  if (0 < *(int *)(param_1 + 0x104)) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x108) + lVar2 * 8);
      if (lVar1 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_1400ebe00(*(longlong *)(param_1 + 0x108),
                              *(undefined8 *)(*(longlong *)(param_1 + 0x2f8) + 8),
                              *(undefined4 *)(lVar1 + 0xf8));
      }
      *(undefined4 *)(param_2 + lVar2 * 4) = uVar3;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x104));
  }
  return;
}

