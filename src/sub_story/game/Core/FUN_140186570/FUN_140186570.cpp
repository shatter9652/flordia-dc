// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140186570  size: 143 bytes
// Name:    FUN_140186570
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140182cc0, FUN_140186600
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140186570(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  longlong *plStack_38;
  undefined8 uStack_30;
  
  FUN_140186600(&plStack_38,param_4 >> 9 & 1);
  FUN_140182cc0(param_1,param_2,&plStack_38,param_4);
  (**(code **)(*plStack_38 + 0x10))(plStack_38,uStack_30);
  *param_1 = &UNK_146632900;
  param_1[0x18] = 0;
  func_0x000140186640(param_1 + 0x1a,param_3);
  uVar1 = _UNK_14617e028;
  param_1[0x38] = _DAT_14617e020;
  param_1[0x39] = uVar1;
  return param_1;
}

