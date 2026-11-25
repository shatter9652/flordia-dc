// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012e250  size: 199 bytes
// Name:    FUN_14012e250
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e6ea00, FUN_144ebb7c0, FUN_14058ca40, FUN_142d9e730
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14012e250(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_28 [16];
  
  FUN_144ebb7c0(auStack_28,_DAT_14ab5cdd0,_DAT_14ab5cdd4,0);
  cVar1 = FUN_14058ca40(*(undefined4 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0x10));
  uVar2 = 4;
  if (cVar1 != '\0') {
    if (0 < *(int *)(param_1 + 0x2c)) {
      lVar3 = FUN_144e6ea00(param_2,0);
      cVar1 = FUN_142d9e730(*(undefined4 *)(lVar3 + 0x9c),*(undefined4 *)(param_1 + 0x2c),
                            *(undefined8 *)(param_1 + 0x30));
      if (cVar1 == '\0') {
        return 9;
      }
    }
    if ((*(longlong *)(param_1 + 0x20) != 0) &&
       (cVar1 = func_0x00014519fae0(*(longlong *)(param_1 + 0x20),param_2), cVar1 == '\0')) {
      return 5;
    }
    if ((*(longlong *)(param_1 + 0x18) != 0) &&
       (cVar1 = func_0x00014519fae0(*(longlong *)(param_1 + 0x18),param_2), cVar1 == '\0')) {
      return 6;
    }
    uVar2 = 10;
  }
  return uVar2;
}

