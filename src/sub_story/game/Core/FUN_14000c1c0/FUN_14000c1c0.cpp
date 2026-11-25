// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000c1c0  size: 80 bytes
// Name:    FUN_14000c1c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14505a210, FUN_14505a1d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_14000c1c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 extraout_var [12];
  undefined1 auVar5 [64];
  
  uVar3 = FUN_14505a210();
  auVar5 = ZEXT1664(CONCAT124(extraout_var,uVar3));
  lVar1 = FUN_14505a1d0(*(undefined4 *)(param_2 + 0x9c));
  lVar2 = 0x14a1e86d4;
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x1e4;
  }
  fVar4 = (float)func_0x0001453f15c0(lVar2,auVar5._0_8_);
  return (int)fVar4;
}

