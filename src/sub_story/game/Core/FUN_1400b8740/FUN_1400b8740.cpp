// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b8740  size: 81 bytes
// Name:    FUN_1400b8740
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400e8f70, FUN_1400e8c30, FUN_144e4f4f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400b8740(undefined4 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_1c [12];
  
  FUN_1400e8f70(auStack_1c,0);
  uVar1 = func_0x000144d9eda0();
  lVar3 = FUN_144e4f4f0(uVar1,*param_1);
  if (lVar3 != 0) {
    uVar2 = func_0x000144db6ef0(param_2);
    func_0x0001400b87a0(lVar3,uVar2);
  }
  FUN_1400e8c30(auStack_1c);
  return;
}

