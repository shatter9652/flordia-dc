// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019bf00  size: 100 bytes
// Name:    FUN_14019bf00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fb1cc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019bf00(uint param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [16];
  
  if (param_1 != 0) {
    lVar2 = 0;
    do {
      uVar1 = *(undefined8 *)(param_2 + lVar2);
      func_0x0001448dfac0(auStack_48,uVar1,param_3,param_4);
      FUN_144fb1cc0(uVar1,auStack_48);
      lVar2 = lVar2 + 8;
    } while ((ulonglong)param_1 << 3 != lVar2);
  }
  return;
}

