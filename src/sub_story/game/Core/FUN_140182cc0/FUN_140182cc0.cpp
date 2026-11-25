// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140182cc0  size: 125 bytes
// Name:    FUN_140182cc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 *
FUN_140182cc0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  
  func_0x000140182d50(param_1,param_2,param_4);
  auVar2._0_12_ = ZEXT812(0);
  auVar2._12_4_ = 0;
  *param_1 = &UNK_146632880;
  *(undefined1 (*) [16])(param_1 + 0xe) = auVar2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  plVar1 = (longlong *)*param_3;
  param_1[0x11] = plVar1;
  param_1[0x12] = param_3[1];
  (**(code **)(*plVar1 + 8))();
  param_1[0x13] = 0;
  param_1[0x15] = param_1;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0x146d328f8;
  return param_1;
}

