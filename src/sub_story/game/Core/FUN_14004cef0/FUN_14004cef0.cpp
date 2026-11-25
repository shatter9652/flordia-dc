// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004cef0  size: 81 bytes
// Name:    FUN_14004cef0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14004cf50, FUN_1404b8f10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14004cef0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [23];
  undefined1 uStack_21;
  
  FUN_14004cf50(param_1 + 0x4e,0xf03e8f9f,param_2);
  uStack_21 = 0;
  FUN_1404b8f10(param_1 + 0x4e);
  lVar1 = func_0x000144d9f7c0(*(undefined4 *)(param_2 + 0x9c));
  if (*(char *)(lVar1 + 0x62f9) == '\x01') {
    func_0x000144e6d400(auStack_38,param_1 + 1,*param_1);
    FUN_14004d130(lVar1 + 0x1fd0,auStack_38);
  }
  return;
}

