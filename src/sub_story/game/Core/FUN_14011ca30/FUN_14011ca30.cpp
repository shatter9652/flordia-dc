// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011ca30  size: 60 bytes
// Name:    FUN_14011ca30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011ca30(undefined4 *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  lVar1 = func_0x000144ef6110(param_2);
  if (lVar1 != 0) {
    lVar1 = func_0x000144ef6100(lVar1);
    if ((*(byte *)(lVar1 + 0xe) & 0x40) != 0) {
      puVar2 = (undefined4 *)0x148fdfc2c;
      goto LAB_14011ca62;
    }
  }
  puVar2 = (undefined4 *)0x148fdfc24;
LAB_14011ca62:
  *param_1 = *puVar2;
  return;
}

