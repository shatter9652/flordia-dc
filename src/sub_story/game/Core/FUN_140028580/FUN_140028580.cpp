// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140028580  size: 72 bytes
// Name:    FUN_140028580
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_140028580(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = func_0x000144f62e80(*(undefined8 *)(*(longlong *)(param_1[1] + 0x3b30) + 8));
  iVar2 = (**(code **)(*param_1 + 8))(param_1);
  uVar1 = *(undefined4 *)(lVar3 + 100 + (longlong)iVar2 * 4);
  *param_2 = param_1[1];
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}

