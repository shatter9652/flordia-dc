// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401386d0  size: 137 bytes
// Name:    FUN_1401386d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401388b0, FUN_144ea3190
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401386d0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined2 *param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 unaff_RBP;
  ulonglong uVar4;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5);
  plVar1 = (longlong *)FUN_1401388b0(uVar4 & 0xffffffff);
  func_0x000140137b90(plVar1,param_1);
  do {
    uVar2 = (**(code **)(param_3 + 0x28))(param_2,*param_4);
    (**(code **)(*plVar1 + 0x28))(plVar1,param_4 + 4,param_4[3],param_4[1],uVar2);
    param_4 = (undefined2 *)((longlong)param_4 + (ulonglong)(ushort)param_4[2]);
    bVar3 = (char)uVar4 - 1;
    uVar4 = (ulonglong)bVar3;
  } while (bVar3 != 0);
  FUN_144ea3190(plVar1,param_2);
  (**(code **)(*plVar1 + 0x10))();
  return;
}

