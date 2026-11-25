// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001bf60  size: 82 bytes
// Name:    FUN_14001bf60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_14001bf60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1[1] + 0x3b30);
  iVar2 = (**(code **)(*param_1 + 8))(param_1);
  uVar3 = func_0x00014001bd40(*(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x80),
                              *(undefined4 *)(&UNK_14669f8d8 + (longlong)iVar2 * 4));
  *param_2 = param_1[1];
  *(undefined4 *)(param_2 + 1) = uVar3;
  return param_2;
}

