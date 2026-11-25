// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001de10  size: 60 bytes
// Name:    FUN_14001de10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_14001de10(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = func_0x000144f62e80(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(param_1 + 8) + 0x3b30) + 8));
  uVar1 = *(undefined4 *)(lVar2 + 0x3c + (longlong)*(int *)(param_1 + 0x18) * 4);
  *param_2 = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}

