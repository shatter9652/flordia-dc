// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 145a689c0  size: 94 bytes
// Name:    classname::Tunables::Tunables
// Subsystem: core
// Class:   classname
//
// Evidence:
//   GTAVSRC: classname::Tunables::Tunables  (game/task/System/Tuning.h)
//   literal: General Tasks
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141279100
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/classname.h"


undefined8 * classname__Tunables__Tunables(undefined8 *param_1)

{
  func_0x000144fc2180(0,&UNK_1467810bc);
  *param_1 = &UNK_146727710;
  *(undefined4 *)(param_1 + 1) = 0xe9a55375;
  FUN_141279100(param_1,&UNK_14677bdbf,1);
  *param_1 = &UNK_1466736d0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}

