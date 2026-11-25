// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140182c70  size: 79 bytes
// Name:    FUN_140182c70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140182cc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 *
FUN_140182c70(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined1 auVar1 [16];
  
  FUN_140182cc0(param_1,param_2,param_3,param_5);
  auVar1._0_12_ = ZEXT812(0);
  auVar1._12_4_ = 0;
  *param_1 = &UNK_146632a00;
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar1;
  *(bool *)(param_1 + 0x1a) = *(int *)(*param_3 + 8) == 2;
  *(undefined4 *)((longlong)param_1 + 0xd4) = param_4;
  return param_1;
}

