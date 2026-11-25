// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014a730  size: 121 bytes
// Name:    FUN_14014a730
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_14014a730(undefined8 *param_1,longlong param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  
  param_1[1] = param_2;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x300);
  *param_1 = &UNK_1465a1bc0;
  lVar2 = func_0x000140ef85a0(*(undefined8 *)(param_2 + 0x118),
                              *(undefined8 *)(*(longlong *)(param_2 + 0x2f8) + 8));
  iVar1 = *(int *)(lVar2 + 0x20);
  if (param_4 < *(int *)(lVar2 + 0x20)) {
    iVar1 = param_4;
  }
  param_1[2] = (ulonglong)*(uint *)(lVar2 + 0x24) * 0x20 + *(longlong *)(param_2 + 0x1c0);
  *(int *)(param_1 + 3) = iVar1;
  return param_1;
}

