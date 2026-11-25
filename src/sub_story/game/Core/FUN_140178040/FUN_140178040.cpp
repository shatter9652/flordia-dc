// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140178040  size: 128 bytes
// Name:    FUN_140178040
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f7c6c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140178040(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  param_1[3] = param_3;
  lVar1 = func_0x00014556caf0(*(undefined4 *)(param_3 + 0x9c));
  param_1[4] = lVar1;
  if (lVar1 == 0) {
    uVar3 = 0;
    param_1[5] = 0x149e48850;
  }
  else {
    lVar2 = func_0x0001414498f0(*(undefined4 *)(lVar1 + 0x14c),*(undefined8 *)(lVar1 + 0x150),
                                param_4);
    lVar4 = 0x149e48850;
    if (lVar2 != 0) {
      lVar4 = lVar2;
    }
    param_1[5] = lVar4;
    uVar3 = FUN_144f7c6c0(lVar1);
  }
  *param_1 = param_2;
  param_1[1] = uVar3;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  return;
}

