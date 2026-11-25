// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140081090  size: 184 bytes
// Name:    FUN_140081090
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ef6160, FUN_1402e5b80, FUN_144ef3e20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140081090(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lStack_40;
  longlong *plStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  
  if (-1 < *(char *)(param_2 + 0x215)) {
    lStack_40 = FUN_144ef3e20(param_2);
    if (lStack_40 != 0) {
      cVar1 = FUN_144ef6160(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0);
      if (cVar1 == '\0') {
        pcStack_30 = FUN_14399bf30;
      }
      else {
        pcStack_30 = FUN_14399bf00;
      }
      plStack_38 = &lStack_40;
      puStack_28 = &UNK_1401167b0;
      puStack_20 = &SUB_140004380;
      FUN_1402e5b80(4);
      *(byte *)(param_2 + 0x215) = *(byte *)(param_2 + 0x215) | 0x80;
    }
  }
  return;
}

