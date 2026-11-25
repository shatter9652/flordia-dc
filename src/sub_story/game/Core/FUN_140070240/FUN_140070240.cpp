// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140070240  size: 78 bytes
// Name:    FUN_140070240
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1447acc60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140070240(longlong param_1,longlong *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_1447acc60(param_1,param_2[1],param_2[5],0x2deefadd,param_3);
  if ((cVar2 == '\0') ||
     (iVar1 = *(int *)(*param_2 + (ulonglong)*(ushort *)(param_1 + 8) * 4), iVar1 == -1)) {
    uVar3 = 0;
  }
  else {
    *param_4 = iVar1;
    uVar3 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return uVar3;
}

