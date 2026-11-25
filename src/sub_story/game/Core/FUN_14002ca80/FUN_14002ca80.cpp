// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002ca80  size: 62 bytes
// Name:    FUN_14002ca80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined2 FUN_14002ca80(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined2 uVar2;
  uint uVar3;
  
  if ((short)param_3 == -1) {
    uVar2 = 0xffff;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x20);
    uVar3 = func_0x0001454e3ba0(param_1,param_3);
    uVar2 = *(undefined2 *)
             ((longlong)(short)param_3 * 0x70 + lVar1 + 0x1a +
             (longlong)*(int *)(&UNK_1466c7130 + (ulonglong)uVar3 * 4) * 2);
  }
  return uVar2;
}

