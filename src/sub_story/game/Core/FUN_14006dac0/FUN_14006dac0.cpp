// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006dac0  size: 113 bytes
// Name:    FUN_14006dac0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141328b20, FUN_145213fe0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14006dac0(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_48 = *param_4;
  uStack_40 = param_4[1];
  uStack_38 = param_4[2];
  uStack_30 = param_4[3];
  FUN_145213fe0(param_2 & 0xffffffff,param_2 >> 0x20,&uStack_50);
  FUN_141328b20(param_1,uStack_50,param_3,&uStack_48,param_5,0,0,0);
  return;
}

