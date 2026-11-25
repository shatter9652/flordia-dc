// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005c670  size: 130 bytes
// Name:    FUN_14005c670
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14005c700
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14005c670(float param_1,float param_2,undefined8 param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 param_6,longlong param_7)

{
  byte bVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  bVar1 = *(byte *)(*param_4 + 0x10);
  *(bool *)(param_7 + 0x28) = param_2 <= param_1;
  *(byte *)(param_7 + 0x10) = bVar1 >> 2 & 1;
  *(undefined1 *)(param_7 + 0x11) = 1;
  uStack_28 = *param_5;
  uStack_20 = param_5[1];
  uStack_38 = *param_5;
  uStack_30 = param_5[1];
  uStack_40 = param_3;
  FUN_14005c700(&uStack_40,&uStack_38,param_4,param_6,&uStack_28,param_7);
  *param_5 = uStack_28;
  param_5[1] = uStack_20;
  return;
}

