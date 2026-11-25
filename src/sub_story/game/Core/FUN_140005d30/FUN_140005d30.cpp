// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140005d30  size: 89 bytes
// Name:    FUN_140005d30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8
FUN_140005d30(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,int *param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = func_0x0001401cfe60(param_2,param_3,param_4,param_5);
  if ((lVar2 == 0) ||
     (iVar1 = *(int *)(param_1 +
                      (ulonglong)
                      *(ushort *)
                       (param_2 + 10 +
                       (ulonglong)(uint)((int)((ulonglong)(lVar2 - param_2) >> 2) * -0x55555555) *
                       0xc) * 4), iVar1 == -1)) {
    uVar3 = 0;
  }
  else {
    *param_6 = iVar1;
    uVar3 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return uVar3;
}

