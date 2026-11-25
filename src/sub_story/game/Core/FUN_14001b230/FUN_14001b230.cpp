// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001b230  size: 72 bytes
// Name:    FUN_14001b230
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14001b230(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_38 = _DAT_145fc6ee0;
  uStack_30 = _UNK_145fc6ee8;
  uStack_28 = param_3;
  (**(code **)(*param_1 + 0x128))();
  (**(code **)(*param_1 + 0xf8))(param_1,&uStack_38,param_2);
  return param_2;
}

