// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400704c0  size: 153 bytes
// Name:    FUN_1400704c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ed00e0, FUN_140133280, FUN_144ed07e0, FUN_144f013e0, FUN_140070560, FUN_140133500
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400704c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  FUN_144ed00e0();
  lVar1 = func_0x000144ecff10(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar1 = FUN_144f013e0(*(undefined4 *)(lVar1 + 0x9c));
    if (lVar1 != 0) {
      FUN_140133280(&uStack_12,1,1);
      uVar2 = FUN_144ed07e0(lVar1);
      func_0x000144ed0120(param_2,1,uVar2);
      uVar2 = FUN_140070560(lVar1);
      func_0x000144ed0120(param_2,2,uVar2);
      if (*(int *)(lVar1 + 0x278) == 2) {
        *(undefined8 *)(param_2 + 0x78) = 0;
      }
      FUN_140133500(uStack_12,uStack_11);
    }
  }
  return;
}

