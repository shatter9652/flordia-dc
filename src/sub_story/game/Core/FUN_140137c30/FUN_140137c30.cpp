// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140137c30  size: 68 bytes
// Name:    FUN_140137c30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ff22c0, FUN_144ff3740
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 *
FUN_140137c30(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_144ff3740();
  *param_1 = &UNK_146675920;
  param_1[5] = param_4;
  *(undefined4 *)(param_1 + 6) = param_3;
  FUN_144ff22c0(param_1,param_2);
  return param_1;
}

