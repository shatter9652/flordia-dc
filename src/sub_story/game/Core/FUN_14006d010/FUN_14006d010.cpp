// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006d010  size: 92 bytes
// Name:    FUN_14006d010
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14006d070, FUN_140d94e00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 * FUN_14006d010(undefined4 *param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = func_0x00014518cf10(*(undefined4 *)
                               ((*(ulonglong *)(param_2 + 8) & 0xfffffffffffffff0) + 0x9c));
  uVar1 = 0;
  if (lVar2 != 0) {
    lVar2 = FUN_14006d070(lVar2);
    if (lVar2 != 0) {
      uVar1 = FUN_140d94e00(*(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 0x9c));
    }
  }
  *param_1 = 0;
  func_0x000144ec3e30(param_1,uVar1);
  return param_1;
}

