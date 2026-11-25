// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140056cd0  size: 213 bytes
// Name:    FUN_140056cd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e89510, FUN_140056db0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140056cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 *param_7,undefined4 param_8,
                  undefined8 *param_9,undefined4 param_10,undefined8 *param_11)

{
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_144e89510();
  uStack_48 = param_11[2];
  uStack_58 = *param_11;
  uStack_50 = param_11[1];
  uStack_78 = *param_9;
  uStack_70 = param_9[1];
  uStack_68 = param_9[2];
  uStack_98 = *param_7;
  uStack_90 = param_7[1];
  uStack_88 = param_7[2];
  FUN_140056db0(param_1,param_4,param_5,param_6,&uStack_98,param_8,&uStack_78,param_10,&uStack_58);
  return;
}

