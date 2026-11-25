// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004f6b0  size: 119 bytes
// Name:    FUN_14004f6b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402e5b80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14004f6b0(longlong param_1,char param_2)

{
  longlong lStack_38;
  longlong *plStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (*(char *)(param_1 + 0x1e62) == '\x01' && param_2 == '\0') {
    lStack_38 = func_0x0001450bb780(*(undefined4 *)
                                     ((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x9c));
    if (lStack_38 != 0) {
      plStack_30 = &lStack_38;
      puStack_28 = &UNK_142e06c90;
      puStack_20 = &UNK_1401167b0;
      puStack_18 = &SUB_140004380;
      FUN_1402e5b80(4);
    }
  }
  *(char *)(param_1 + 0x1e62) = param_2;
  return;
}

