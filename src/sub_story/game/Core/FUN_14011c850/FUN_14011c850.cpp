// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011c850  size: 108 bytes
// Name:    FUN_14011c850
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140080400
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011c850(longlong param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)func_0x000144ffa210();
  FUN_140080400(param_1,puVar2);
  (**(code **)*puVar2)(puVar2,1);
  *(undefined8 *)
   (param_1 + 0x4b0 + (longlong)*(int *)(param_1 + 0x530 + (ulonglong)param_2 * 4) * 8) = 0;
  iVar1 = *(int *)(param_1 + 0x570);
  *(int *)(param_1 + 0x570) = iVar1 + -1;
  *(undefined4 *)(param_1 + 0x530 + (longlong)(int)param_2 * 4) =
       *(undefined4 *)(param_1 + 0x52c + (longlong)iVar1 * 4);
  return;
}

