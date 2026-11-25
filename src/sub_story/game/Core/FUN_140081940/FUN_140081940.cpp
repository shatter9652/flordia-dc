// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140081940  size: 106 bytes
// Name:    FUN_140081940
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140083b20, FUN_140081bf0, FUN_145794540
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140081940(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_140081bf0(*(undefined4 *)(param_1 + 2000),*(undefined8 *)(param_1 + 0x7d8),param_2);
  if (param_3 == '\0') {
    return lVar2;
  }
  lVar3 = FUN_140083b20(*(undefined4 *)(param_1 + 0x34),*(undefined8 *)(param_1 + 0x38),param_2);
  if (lVar3 != 0) {
    if (lVar2 == 0) {
      return lVar3;
    }
    cVar1 = FUN_145794540(lVar2,lVar3);
    if (cVar1 == '\0') {
      return lVar3;
    }
  }
  return lVar2;
}

