// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140110730  size: 61 bytes
// Name:    FUN_140110730
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140110730(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = func_0x000144f13210(*(undefined8 *)(param_1 + 8),
                                CONCAT71((int7)((ulonglong)lVar1 >> 8),
                                         *(undefined1 *)(param_1 + 0xbd)),
                                *(undefined8 *)(lVar1 + 0xa0),param_2,param_4);
  }
  return uVar2;
}

