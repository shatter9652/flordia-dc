// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140192a50  size: 320 bytes
// Name:    FUN_140192a50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1404a72c0, FUN_1452b3070
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140192a50(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined1 auStack_3c8 [768];
  undefined4 uStack_c8;
  undefined1 auStack_4e [8];
  undefined2 uStack_46;
  undefined1 uStack_38;
  byte bStack_32;
  
  if (*(char *)((longlong)param_1 + 0xad9) == '\x01') {
    (**(code **)(*param_1 + 0xf8))(param_1);
  }
  FUN_1452b3070(auStack_3c8);
  uStack_38 = 0;
  bStack_32 = bStack_32 | 2;
  plVar1 = (longlong *)param_1[0x32];
  if (plVar1 != (longlong *)0x0) {
    lVar2 = func_0x000144da31b0(param_1 + 0x36);
    if (lVar2 == 0) {
      uStack_c8 = 9;
      uStack_46 = *(undefined2 *)(*plVar1 + 0x7d4);
      (**(code **)(*(longlong *)param_1[8] + 0x1c8))((longlong *)param_1[8],&uStack_3d0);
      FUN_1404a72c0(param_1,uStack_3d0,param_1 + 0x36,auStack_3c8,0);
    }
  }
  plVar1 = (longlong *)param_1[0x33];
  if (plVar1 != (longlong *)0x0) {
    lVar2 = func_0x000144da31b0(param_1 + 0x37);
    if (lVar2 == 0) {
      uStack_c8 = 7;
      uStack_46 = *(undefined2 *)(*plVar1 + 0x7d4);
      (**(code **)(*(longlong *)param_1[8] + 0x1d0))((longlong *)param_1[8],&uStack_3d8);
      FUN_1404a72c0(param_1,uStack_3d8,param_1 + 0x37,auStack_3c8,0);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0xad9) = 0;
  func_0x000144de1380(auStack_4e);
  return;
}

