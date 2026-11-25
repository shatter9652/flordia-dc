// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019cd00  size: 207 bytes
// Name:    FUN_14019cd00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1448e1720, FUN_14522f660
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019cd00(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined1 *param_5,uint param_6,longlong param_7,longlong param_8,
                  undefined8 param_9,longlong param_10,char *param_11)

{
  undefined1 auVar1 [64];
  
  auVar1 = ZEXT464(param_6);
  param_1[4] = param_3;
  param_1[0xaf0] = param_7;
  param_1[0xaf1] = param_8;
  (**(code **)(*param_1 + 0x68))(param_7,param_2,param_10,param_9,param_6);
  FUN_1448e1720(param_1,*(undefined8 *)(param_10 + 0x10));
  FUN_14522f660(param_1 + 0xc38,*param_5,auVar1._0_8_);
  *(byte *)((longlong)param_1 + 0x6384) =
       *(byte *)((longlong)param_1 + 0x6384) & 0xfd | *param_11 * '\x02' & 2U;
  (**(code **)(*param_1 + 0x48))(param_1,param_4,param_9);
  return;
}

