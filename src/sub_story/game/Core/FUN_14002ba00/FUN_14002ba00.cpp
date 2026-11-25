// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002ba00  size: 105 bytes
// Name:    FUN_14002ba00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e14710
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14002ba00(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  char param_5)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_38 = *param_2;
  uStack_30 = param_2[1];
  FUN_144e14710(param_1[2],param_4,0,0,&uStack_38);
  if (param_5 != '\0') {
    uStack_48 = *param_3;
    uStack_40 = param_3[1];
    (**(code **)(*param_1 + 0x10))(param_1,&uStack_48,param_4,0);
  }
  return;
}

