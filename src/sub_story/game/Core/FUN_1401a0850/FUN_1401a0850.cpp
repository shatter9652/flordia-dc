// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a0850  size: 214 bytes
// Name:    FUN_1401a0850
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401a0950, FUN_145064d90, FUN_145064e60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401a0850(longlong param_1,int param_2,longlong param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_438 [1024];
  
  uVar3 = 0xb7fdb1d5;
  uVar1 = 0xb7fdb1d5;
  uVar2 = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (*(longlong *)(param_1 + 0x188) != 0)) {
    uVar1 = FUN_145064d90();
    uVar2 = FUN_1401a0950(*(undefined8 *)(param_1 + 0x188),param_2);
  }
  uVar4 = 0;
  if (((param_3 != 0) && (uVar4 = 0, param_4 != 0)) && (*(longlong *)(param_3 + 0x188) != 0)) {
    uVar3 = FUN_145064d90();
    uVar4 = FUN_1401a0950(*(undefined8 *)(param_3 + 0x188),param_4);
  }
  FUN_145064e60(auStack_438,&UNK_1467797ac,uVar1,uVar2,uVar3,uVar4,param_5);
  func_0x000144fc2180(0,auStack_438);
  return;
}

