// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140137c80  size: 114 bytes
// Name:    FUN_140137c80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ea3190, FUN_140137e80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 *
FUN_140137c80(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 *param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  longlong *plVar2;
  byte bVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  plVar2 = (longlong *)FUN_140137e80(uVar4 & 0xffffffff);
  func_0x000140137b90(plVar2,param_1);
  do {
    uVar1 = (**(code **)(param_3 + 0x40))(param_2,*(undefined2 *)(param_4 + 1));
    (**(code **)(*plVar2 + 0x28))(plVar2,uVar1,*param_4);
    param_4 = param_4 + 2;
    bVar3 = (char)uVar4 - 1;
    uVar4 = (ulonglong)bVar3;
  } while (bVar3 != 0);
  FUN_144ea3190(plVar2,param_2);
  return param_4;
}

