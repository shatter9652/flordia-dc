// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004d0d0  size: 82 bytes
// Name:    FUN_14004d0d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14004d130
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14004d0d0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  
  lVar1 = func_0x000144d9f7c0(*(undefined4 *)(param_2 + 0x9c));
  if (*(char *)(lVar1 + 0x62f9) == '\x01') {
    func_0x000144e6d400(auStack_38,param_3,*param_1);
    FUN_14004d130(lVar1 + 0x1fd0,auStack_38);
  }
  return;
}

