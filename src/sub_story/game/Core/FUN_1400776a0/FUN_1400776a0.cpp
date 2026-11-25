// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400776a0  size: 127 bytes
// Name:    FUN_1400776a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14075def0, FUN_14513c970, FUN_140077720, FUN_140077c10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1400776a0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_140077720();
  if ((((char)uVar2 != '\0') && (param_1[0x14] != 0)) &&
     (lVar3 = FUN_14513c970(*_DAT_149ab14a8,*(undefined8 *)(_DAT_149ab14a8 + 2)), lVar3 != 0)) {
    if (*(char *)(lVar3 + 0x5c) == '\x01') {
      FUN_140077c10(param_1);
      FUN_14075def0(param_1,param_3);
      cVar1 = (**(code **)(*param_1 + 0x70))(param_1);
      lVar3 = 0x60;
      if (cVar1 == '\0') {
        return uVar2;
      }
    }
    else {
      lVar3 = 0xa0;
    }
    (**(code **)(*param_1 + lVar3))(param_1);
  }
  return uVar2;
}

