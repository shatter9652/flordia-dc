// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c4660  size: 336 bytes
// Name:    FUN_1400c4660
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 *
FUN_1400c4660(undefined8 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
             char param_5,byte param_6,char param_7,uint param_8)

{
  undefined4 uVar1;
  
  func_0x000144ff3770();
  *param_1 = &UNK_14668c1e0;
  *(uint *)(param_1 + 4) = param_8 | 1;
  uVar1 = func_0x0001408ec1f0();
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = 0;
  *(byte *)((longlong)param_1 + 0x2c) = *(byte *)((longlong)param_1 + 0x2c) & 0xfc;
  *param_1 = &UNK_14668c040;
  param_1[7] = param_1 + 8;
  param_1[6] = 8;
  param_1[0x11] = param_1 + 0x12;
  param_1[0x10] = 8;
  param_1[0x14] = param_1 + 0x15;
  param_1[0x13] = 8;
  param_1[0x2e] = param_1 + 0x2f;
  param_1[0x2d] = 8;
  param_1[0x34] = param_1 + 0x35;
  param_1[0x33] = 8;
  param_1[0x3a] = param_1 + 0x3b;
  param_1[0x39] = 8;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x40] = param_1 + 0x41;
  *(undefined4 *)(param_1 + 0x3f) = 8;
  *(undefined4 *)(param_1 + 0x45) = param_2;
  *(undefined1 *)((longlong)param_1 + 0x22c) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x22d) = param_4;
  *(byte *)((longlong)param_1 + 0x22e) =
       param_5 << 2 | param_6 | param_7 << 4 | *(byte *)((longlong)param_1 + 0x22e) & 200 | 2;
  return param_1;
}

